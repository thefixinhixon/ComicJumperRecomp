// Guest mid-asm hooks (see [[midasm_hook]] in comicjumper_config.toml).
#include <chrono>
#include <thread>

// Streaming thread idle spin: the loop re-acks a manual-reset event that stays set. Let a burst
// of 16 rapid acks through untouched (real requests), then sleep 1 ms per iteration until the
// loop goes quiet for 2 ms. Caps the idle spin at ~1000 iterations/s instead of ~7000.
void CjStreamingAckThrottle() {
  using clock = std::chrono::steady_clock;
  static thread_local clock::time_point last{};
  static thread_local int streak = 0;
  const auto now = clock::now();
  streak = (now - last < std::chrono::milliseconds(2)) ? streak + 1 : 0;
  last = now;
  if (streak > 16) {
    std::this_thread::sleep_for(std::chrono::milliseconds(1));
    last = clock::now();
  }
}
