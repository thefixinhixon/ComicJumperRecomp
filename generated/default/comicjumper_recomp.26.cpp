#include "comicjumper_funcs.26.h"

DEFINE_REX_FUNC(sub_82122C30) {
	REX_FUNC_PROLOGUE();
	// lwz r3,92(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821a7d48
	sub_821A7D48(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82128588) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35fc
	ctx.lr = 0x82128590;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmpw cr6,r31,r5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8212863c
	if (!ctx.cr6.lt) goto loc_8212863C;
loc_821285BC:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r3,-40
	ctx.r4.s64 = ctx.r3.s64 + -40;
	// bctrl 
	ctx.lr = 0x821285D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821285e8
	if (ctx.cr6.eq) goto loc_821285E8;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_821285E8:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// li r11,5
	ctx.r11.s64 = 5;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82128618:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82128618
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82128618;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x821285bc
	if (ctx.cr6.lt) goto loc_821285BC;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
loc_8212863C:
	// bne cr6,0x82128680
	if (!ctx.cr6.eq) goto loc_82128680;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r11,5
	ctx.r11.s64 = 5;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82128670:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x82128670
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82128670;
	// addi r30,r28,-1
	ctx.r30.s64 = ctx.r28.s64 + -1;
loc_82128680:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// cmpw cr6,r25,r30
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r30.s32, ctx.xer);
	// addze r28,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r28.s64 = temp.s64;
	// bge cr6,0x82128708
	if (!ctx.cr6.lt) goto loc_82128708;
loc_82128698:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x821286B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82128708
	if (ctx.cr6.eq) goto loc_82128708;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,5
	ctx.r11.s64 = 5;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r9,r30,-8
	ctx.r9.s64 = ctx.r30.s64 + -8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-8
	ctx.r11.s64 = ctx.r10.s64 + -8;
loc_821286E4:
	// ldu r10,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x821286e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821286E4;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// cmpw cr6,r25,r28
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r28.s32, ctx.xer);
	// addze r28,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r28.s64 = temp.s64;
	// blt cr6,0x82128698
	if (ctx.cr6.lt) goto loc_82128698;
loc_82128708:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,5
	ctx.r11.s64 = 5;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r9,r26,-8
	ctx.r9.s64 = ctx.r26.s64 + -8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-8
	ctx.r11.s64 = ctx.r10.s64 + -8;
loc_82128728:
	// ldu r10,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82128728
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82128728;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825e364c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82134A80) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82134a98
	if (ctx.cr6.lt) goto loc_82134A98;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,9688
	ctx.r11.s64 = ctx.r11.s64 + 9688;
loc_82134A98:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82134ac0
	if (ctx.cr6.eq) goto loc_82134AC0;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x82134ab4
	if (ctx.cr6.eq) goto loc_82134AB4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82134ac4
	goto loc_82134AC4;
loc_82134AB4:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// b 0x82134ac4
	goto loc_82134AC4;
loc_82134AC0:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82134AC4:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,16700(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16700);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82137B00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r11,9688
	ctx.r3.s64 = ctx.r11.s64 + 9688;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// bge cr6,0x82137b34
	if (!ctx.cr6.lt) goto loc_82137B34;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82137B34:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82137b5c
	if (ctx.cr6.eq) goto loc_82137B5C;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x82137b50
	if (ctx.cr6.eq) goto loc_82137B50;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82137b60
	goto loc_82137B60;
loc_82137B50:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r30,r11,24
	ctx.r30.s64 = ctx.r11.s64 + 24;
	// b 0x82137b60
	goto loc_82137B60;
loc_82137B5C:
	// lwz r30,0(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82137B60:
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82137b70
	if (ctx.cr6.lt) goto loc_82137B70;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82137B70:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82137b98
	if (ctx.cr6.eq) goto loc_82137B98;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x82137b8c
	if (ctx.cr6.eq) goto loc_82137B8C;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82137b9c
	goto loc_82137B9C;
loc_82137B8C:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r31,r11,24
	ctx.r31.s64 = ctx.r11.s64 + 24;
	// b 0x82137b9c
	goto loc_82137B9C;
loc_82137B98:
	// lwz r31,0(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82137B9C:
	// addi r11,r9,32
	ctx.r11.s64 = ctx.r9.s64 + 32;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82137bac
	if (!ctx.cr6.lt) goto loc_82137BAC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82137BAC:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82137bd8
	if (ctx.cr6.eq) goto loc_82137BD8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8220d008
	ctx.lr = 0x82137BC0;
	sub_8220D008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82137bd8
	if (!ctx.cr6.eq) goto loc_82137BD8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,17232
	ctx.r10.s64 = ctx.r11.s64 + 17232;
	// lfd f0,184(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 184);
	// b 0x82137bdc
	goto loc_82137BDC;
loc_82137BD8:
	// lfd f0,0(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
loc_82137BDC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// frsp f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b4fb0
	ctx.lr = 0x82137BF0;
	sub_821B4FB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8213E570) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e360c
	ctx.lr = 0x8213E578;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,9688
	ctx.r29.s64 = ctx.r11.s64 + 9688;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bge cr6,0x8213e5a0
	if (!ctx.cr6.lt) goto loc_8213E5A0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8213E5A0:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8213e5c8
	if (ctx.cr6.eq) goto loc_8213E5C8;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x8213e5bc
	if (ctx.cr6.eq) goto loc_8213E5BC;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8213e5cc
	goto loc_8213E5CC;
loc_8213E5BC:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r30,r11,24
	ctx.r30.s64 = ctx.r11.s64 + 24;
	// b 0x8213e5cc
	goto loc_8213E5CC;
loc_8213E5C8:
	// lwz r30,0(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8213E5CC:
	// addi r4,r9,16
	ctx.r4.s64 = ctx.r9.s64 + 16;
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8213e5dc
	if (ctx.cr6.lt) goto loc_8213E5DC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8213E5DC:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8213e634
	if (ctx.cr6.eq) goto loc_8213E634;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220d088
	ctx.lr = 0x8213E5F0;
	sub_8220D088(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8213e600
	if (!ctx.cr6.eq) goto loc_8213E600;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8213e63c
	goto loc_8213E63C;
loc_8213E600:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r9,76(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8213e61c
	if (ctx.cr6.lt) goto loc_8213E61C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220cd80
	ctx.lr = 0x8213E61C;
	sub_8220CD80(ctx, base);
loc_8213E61C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8213e634
	if (ctx.cr6.lt) goto loc_8213E634;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8213E634:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
loc_8213E63C:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213E650;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213e660
	if (ctx.cr6.eq) goto loc_8213E660;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8213e664
	goto loc_8213E664;
loc_8213E660:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8213E664:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// li r8,1
	ctx.r8.s64 = 1;
	// xori r7,r9,1
	ctx.r7.u64 = ctx.r9.u64 ^ 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825e365c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82146748) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82146764
	if (ctx.cr6.lt) goto loc_82146764;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,9688
	ctx.r11.s64 = ctx.r11.s64 + 9688;
loc_82146764:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8214678c
	if (ctx.cr6.eq) goto loc_8214678C;
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// beq cr6,0x82146780
	if (ctx.cr6.eq) goto loc_82146780;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82146790
	goto loc_82146790;
loc_82146780:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// b 0x82146790
	goto loc_82146790;
loc_8214678C:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82146790:
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// lhz r5,20(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 24);
	// stw r6,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// rlwinm r8,r9,29,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1;
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// stw r6,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r6.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214A828) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r11,9688
	ctx.r3.s64 = ctx.r11.s64 + 9688;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// bge cr6,0x8214a858
	if (!ctx.cr6.lt) goto loc_8214A858;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8214A858:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8214a880
	if (ctx.cr6.eq) goto loc_8214A880;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x8214a874
	if (ctx.cr6.eq) goto loc_8214A874;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8214a884
	goto loc_8214A884;
loc_8214A874:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r31,r11,24
	ctx.r31.s64 = ctx.r11.s64 + 24;
	// b 0x8214a884
	goto loc_8214A884;
loc_8214A880:
	// lwz r31,0(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8214A884:
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8214a894
	if (!ctx.cr6.lt) goto loc_8214A894;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8214A894:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8214a8b8
	if (ctx.cr6.eq) goto loc_8214A8B8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8220d008
	ctx.lr = 0x8214A8A8;
	sub_8220D008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8214a8b8
	if (!ctx.cr6.eq) goto loc_8214A8B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8214a8c8
	goto loc_8214A8C8;
loc_8214A8B8:
	// lfd f0,0(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8214A8C8:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b2850
	ctx.lr = 0x8214A8D4;
	sub_821B2850(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82150220) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8215023c
	if (ctx.cr6.lt) goto loc_8215023C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,9688
	ctx.r11.s64 = ctx.r11.s64 + 9688;
loc_8215023C:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82150264
	if (ctx.cr6.eq) goto loc_82150264;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x82150258
	if (ctx.cr6.eq) goto loc_82150258;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82150268
	goto loc_82150268;
loc_82150258:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// b 0x82150268
	goto loc_82150268;
loc_82150264:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82150268:
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82150284
	if (ctx.cr6.eq) goto loc_82150284;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82150288
	if (ctx.cr6.eq) goto loc_82150288;
loc_82150284:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82150288:
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// subfe r6,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r7,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r6,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// stw r5,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821546C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r7,r11,9688
	ctx.r7.s64 = ctx.r11.s64 + 9688;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// bge cr6,0x821546ec
	if (!ctx.cr6.lt) goto loc_821546EC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_821546EC:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82154714
	if (ctx.cr6.eq) goto loc_82154714;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x82154708
	if (ctx.cr6.eq) goto loc_82154708;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82154718
	goto loc_82154718;
loc_82154708:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// b 0x82154718
	goto loc_82154718;
loc_82154714:
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82154718:
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82154728
	if (ctx.cr6.lt) goto loc_82154728;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82154728:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82154750
	if (ctx.cr6.eq) goto loc_82154750;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x82154744
	if (ctx.cr6.eq) goto loc_82154744;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82154754
	goto loc_82154754;
loc_82154744:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// b 0x82154754
	goto loc_82154754;
loc_82154750:
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82154754:
	// bl 0x82199720
	ctx.lr = 0x82154758;
	sub_82199720(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821587F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8215881c
	if (ctx.cr6.lt) goto loc_8215881C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,9688
	ctx.r11.s64 = ctx.r11.s64 + 9688;
loc_8215881C:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82158844
	if (ctx.cr6.eq) goto loc_82158844;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x82158838
	if (ctx.cr6.eq) goto loc_82158838;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82158848
	goto loc_82158848;
loc_82158838:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r11,24
	ctx.r5.s64 = ctx.r11.s64 + 24;
	// b 0x82158848
	goto loc_82158848;
loc_82158844:
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82158848:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd708
	ctx.lr = 0x82158854;
	sub_821FD708(ctx, base);
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215886C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addic r6,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// subfe r5,r6,r9
	temp.u8 = (~ctx.r6.u32 + ctx.r9.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r7,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
	// stw r5,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// stw r4,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8215EAB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e3608
	ctx.lr = 0x8215EAC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,9688
	ctx.r31.s64 = ctx.r11.s64 + 9688;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bge cr6,0x8215eae8
	if (!ctx.cr6.lt) goto loc_8215EAE8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8215EAE8:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8215eb10
	if (ctx.cr6.eq) goto loc_8215EB10;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x8215eb04
	if (ctx.cr6.eq) goto loc_8215EB04;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x8215eb14
	goto loc_8215EB14;
loc_8215EB04:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r28,r11,24
	ctx.r28.s64 = ctx.r11.s64 + 24;
	// b 0x8215eb14
	goto loc_8215EB14;
loc_8215EB10:
	// lwz r28,0(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8215EB14:
	// addi r4,r9,16
	ctx.r4.s64 = ctx.r9.s64 + 16;
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8215eb24
	if (ctx.cr6.lt) goto loc_8215EB24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8215EB24:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8215eb7c
	if (ctx.cr6.eq) goto loc_8215EB7C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8220d088
	ctx.lr = 0x8215EB38;
	sub_8220D088(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8215eb48
	if (!ctx.cr6.eq) goto loc_8215EB48;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8215eb84
	goto loc_8215EB84;
loc_8215EB48:
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r9,76(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8215eb64
	if (ctx.cr6.lt) goto loc_8215EB64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8220cd80
	ctx.lr = 0x8215EB64;
	sub_8220CD80(ctx, base);
loc_8215EB64:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8215eb7c
	if (ctx.cr6.lt) goto loc_8215EB7C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8215EB7C:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
loc_8215EB84:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8215eb9c
	if (ctx.cr6.lt) goto loc_8215EB9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8215EB9C:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8215ebc0
	if (ctx.cr6.eq) goto loc_8215EBC0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8220d008
	ctx.lr = 0x8215EBB0;
	sub_8220D008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8215ebc0
	if (!ctx.cr6.eq) goto loc_8215EBC0;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8215ebd0
	goto loc_8215EBD0;
loc_8215EBC0:
	// lfd f0,0(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8215EBD0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,96(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 96);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8219be30
	ctx.lr = 0x8215EBE0;
	sub_8219BE30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215ebf0
	if (ctx.cr6.eq) goto loc_8215EBF0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8215ebf4
	goto loc_8215EBF4;
loc_8215EBF0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8215EBF4:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// li r8,3
	ctx.r8.s64 = 3;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stfd f13,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.f13.u64);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// stw r7,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825e3658
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82169C88) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r11,9688
	ctx.r3.s64 = ctx.r11.s64 + 9688;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// bge cr6,0x82169cb8
	if (!ctx.cr6.lt) goto loc_82169CB8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82169CB8:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82169ce0
	if (ctx.cr6.eq) goto loc_82169CE0;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x82169cd4
	if (ctx.cr6.eq) goto loc_82169CD4;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82169ce4
	goto loc_82169CE4;
loc_82169CD4:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r31,r11,24
	ctx.r31.s64 = ctx.r11.s64 + 24;
	// b 0x82169ce4
	goto loc_82169CE4;
loc_82169CE0:
	// lwz r31,0(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82169CE4:
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82169cf4
	if (!ctx.cr6.lt) goto loc_82169CF4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82169CF4:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82169d18
	if (ctx.cr6.eq) goto loc_82169D18;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8220d008
	ctx.lr = 0x82169D08;
	sub_8220D008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82169d18
	if (!ctx.cr6.eq) goto loc_82169D18;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82169d28
	goto loc_82169D28;
loc_82169D18:
	// lfd f0,0(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82169D28:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,172(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82169D3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82170850) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// lis r9,-32118
	ctx.r9.s64 = -2104885248;
	// addi r10,r11,30408
	ctx.r10.s64 = ctx.r11.s64 + 30408;
	// addi r7,r9,30000
	ctx.r7.s64 = ctx.r9.s64 + 30000;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r11,32(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r9,32(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x821708d4
	if (!ctx.cr6.lt) goto loc_821708D4;
	// lis r7,-32118
	ctx.r7.s64 = -2104885248;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// lwz r11,30816(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 30816);
	// add. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821708b0
	if (!ctx.cr0.eq) goto loc_821708B0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// blr 
	return;
loc_821708B0:
	// lwz r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// blr 
	return;
loc_821708D4:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// b 0x8212fc00
	sub_8212FC00(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821911E0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8219126c
	if (!ctx.cr6.gt) goto loc_8219126C;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82191208:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwzx r11,r7,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82191250
	if (ctx.cr6.eq) goto loc_82191250;
	// lwz r8,64(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bge cr6,0x82191250
	if (!ctx.cr6.lt) goto loc_82191250;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r5,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r5.u32);
	// lwz r4,64(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
loc_82191250:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82191208
	if (ctx.cr6.lt) goto loc_82191208;
loc_8219126C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219A5E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,48(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r10,r11,-10672
	ctx.r10.s64 = ctx.r11.s64 + -10672;
	// lwz r7,36(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 36);
	// lfs f0,16700(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16700);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// lwz r8,20(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
loc_8219A614:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq cr6,0x8219a638
	if (ctx.cr6.eq) goto loc_8219A638;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8219a614
	if (ctx.cr6.eq) goto loc_8219A614;
loc_8219A638:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8219a718
	if (!ctx.cr6.eq) goto loc_8219A718;
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8219a6f8
	if (!ctx.cr6.gt) goto loc_8219A6F8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r4,8(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,2432
	ctx.r3.s64 = ctx.r11.s64 + 2432;
	// addi r5,r10,-10792
	ctx.r5.s64 = ctx.r10.s64 + -10792;
loc_8219A668:
	// lwzx r11,r6,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// add r7,r6,r4
	ctx.r7.u64 = ctx.r6.u64 + ctx.r4.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8219A67C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r31,0(r10)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r31,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r31.u64;
	// beq cr6,0x8219a6a0
	if (ctx.cr6.eq) goto loc_8219A6A0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8219a67c
	if (ctx.cr6.eq) goto loc_8219A67C;
loc_8219A6A0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8219a6b4
	if (!ctx.cr6.eq) goto loc_8219A6B4;
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8219a6f0
	goto loc_8219A6F0;
loc_8219A6B4:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8219A6BC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq cr6,0x8219a6e0
	if (ctx.cr6.eq) goto loc_8219A6E0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8219a6bc
	if (ctx.cr6.eq) goto loc_8219A6BC;
loc_8219A6E0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8219a6f0
	if (!ctx.cr6.eq) goto loc_8219A6F0;
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
loc_8219A6F0:
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// bdnz 0x8219a668
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219A668;
loc_8219A6F8:
	// fdivs f1,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// bl 0x825de5c8
	ctx.lr = 0x8219A700;
	sub_825DE5C8(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8219A718:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,17232
	ctx.r10.s64 = ctx.r11.s64 + 17232;
	// lfs f1,84(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A67F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lhz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x821a68c4
	if (!ctx.cr6.lt) goto loc_821A68C4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821a68c4
	if (ctx.cr6.lt) goto loc_821A68C4;
	// lwz r10,56(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821a68c4
	if (ctx.cr6.eq) goto loc_821A68C4;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a68c4
	if (ctx.cr6.eq) goto loc_821A68C4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,8(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r3,12(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// bl 0x825def08
	ctx.lr = 0x821A6864;
	sub_825DEF08(ctx, base);
	// lwz r8,56(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// lwzx r7,r31,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r3,12(r6)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// bl 0x825deee0
	ctx.lr = 0x821A6878;
	sub_825DEEE0(ctx, base);
	// lwz r5,56(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// lwzx r4,r31,r5
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// lwzx r10,r31,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bge cr6,0x821a68ac
	if (!ctx.cr6.lt) goto loc_821A68AC;
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// b 0x821a68b4
	goto loc_821A68B4;
loc_821A68AC:
	// lwz r3,12(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// bl 0x825deee0
	ctx.lr = 0x821A68B4;
	sub_825DEEE0(ctx, base);
loc_821A68B4:
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r3,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r3.u32);
loc_821A68C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AD4A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35fc
	ctx.lr = 0x821AD4B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ad5a0
	if (ctx.cr6.eq) goto loc_821AD5A0;
loc_821AD4CC:
	// lwz r30,20(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82127790
	ctx.lr = 0x821AD4DC;
	sub_82127790(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// lwzx r5,r10,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x821ad554
	if (!ctx.cr6.gt) goto loc_821AD554;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_821AD518:
	// lwzx r11,r5,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// blt cr6,0x821ad53c
	if (ctx.cr6.lt) goto loc_821AD53C;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x821ad544
	if (!ctx.cr6.lt) goto loc_821AD544;
loc_821AD53C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
loc_821AD544:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,184
	ctx.r7.s64 = ctx.r7.s64 + 184;
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x821ad518
	if (ctx.cr6.lt) goto loc_821AD518;
loc_821AD554:
	// stw r26,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
	// mulli r9,r8,184
	ctx.r9.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(184));
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r7,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r11,r10,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stw r5,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821ad4cc
	if (!ctx.cr6.eq) goto loc_821AD4CC;
loc_821AD5A0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821ad64c
	if (!ctx.cr6.gt) goto loc_821AD64C;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_821AD5B4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821ad638
	if (!ctx.cr6.gt) goto loc_821AD638;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_821AD5CC:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lwzx r5,r29,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// divw r10,r9,r5
	ctx.r10.u64 = uint32_t((ctx.r5.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r5.s32 == -1)) ? ctx.r9.s32 / ctx.r5.s32 : 0);
	// lwzx r11,r29,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// andc r8,r5,r3
	ctx.r8.u64 = ctx.r5.u64 & ~ctx.r3.u64;
	// twllei r5,0
	if (ctx.r5.s32 == 0 || ctx.r5.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r5,r10,r5
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// subf r10,r5,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r5.u64;
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// subf r9,r30,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r30.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r5,r8,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x821aced8
	ctx.lr = 0x821AD620;
	sub_821ACED8(ctx, base);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,184
	ctx.r28.s64 = ctx.r28.s64 + 184;
	// lwzx r6,r29,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// cmpw cr6,r30,r6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x821ad5cc
	if (ctx.cr6.lt) goto loc_821AD5CC;
loc_821AD638:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821ad5b4
	if (ctx.cr6.lt) goto loc_821AD5B4;
loc_821AD64C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r8,r9,r10
	ctx.r8.u64 = uint32_t((ctx.r10.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r9.s32 / ctx.r10.s32 : 0);
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r7,r8,r10
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// subf r5,r7,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r7.u64;
	// andc r4,r10,r6
	ctx.r4.u64 = ctx.r10.u64 & ~ctx.r6.u64;
	// stw r5,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825e364c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821B8B80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e360c
	ctx.lr = 0x821B8B88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,132(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// bl 0x822b91a0
	ctx.lr = 0x821B8B98;
	sub_822B91A0(ctx, base);
	// lis r11,17
	ctx.r11.s64 = 1114112;
	// ori r10,r11,33888
	ctx.r10.u64 = ctx.r11.u64 | 33888;
	// stwx r3,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9200
	ctx.lr = 0x821B8BAC;
	sub_822B9200(ctx, base);
	// lis r9,17
	ctx.r9.s64 = 1114112;
	// ori r8,r9,33904
	ctx.r8.u64 = ctx.r9.u64 | 33904;
	// stwx r3,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b91c8
	ctx.lr = 0x821B8BC0;
	sub_822B91C8(ctx, base);
	// lis r7,17
	ctx.r7.s64 = 1114112;
	// ori r6,r7,33920
	ctx.r6.u64 = ctx.r7.u64 | 33920;
	// stwx r3,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b8a90
	ctx.lr = 0x821B8BD4;
	sub_822B8A90(ctx, base);
	// lis r5,17
	ctx.r5.s64 = 1114112;
	// ori r4,r5,33936
	ctx.r4.u64 = ctx.r5.u64 | 33936;
	// stwx r3,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b8a60
	ctx.lr = 0x821B8BE8;
	sub_822B8A60(ctx, base);
	// lis r11,17
	ctx.r11.s64 = 1114112;
	// ori r10,r11,33952
	ctx.r10.u64 = ctx.r11.u64 | 33952;
	// stwx r3,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b8b58
	ctx.lr = 0x821B8BFC;
	sub_822B8B58(ctx, base);
	// lis r9,17
	ctx.r9.s64 = 1114112;
	// ori r8,r9,33968
	ctx.r8.u64 = ctx.r9.u64 | 33968;
	// stwx r3,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b8ef0
	ctx.lr = 0x821B8C10;
	sub_822B8EF0(ctx, base);
	// lis r7,17
	ctx.r7.s64 = 1114112;
	// ori r6,r7,33984
	ctx.r6.u64 = ctx.r7.u64 | 33984;
	// stwx r3,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9020
	ctx.lr = 0x821B8C24;
	sub_822B9020(ctx, base);
	// lis r5,17
	ctx.r5.s64 = 1114112;
	// ori r4,r5,34000
	ctx.r4.u64 = ctx.r5.u64 | 34000;
	// stwx r3,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b8c78
	ctx.lr = 0x821B8C38;
	sub_822B8C78(ctx, base);
	// lis r11,17
	ctx.r11.s64 = 1114112;
	// ori r10,r11,34016
	ctx.r10.u64 = ctx.r11.u64 | 34016;
	// stwx r3,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b8d08
	ctx.lr = 0x821B8C4C;
	sub_822B8D08(ctx, base);
	// lis r9,17
	ctx.r9.s64 = 1114112;
	// ori r8,r9,34032
	ctx.r8.u64 = ctx.r9.u64 | 34032;
	// stwx r3,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b8be8
	ctx.lr = 0x821B8C60;
	sub_822B8BE8(ctx, base);
	// lis r7,17
	ctx.r7.s64 = 1114112;
	// ori r6,r7,34048
	ctx.r6.u64 = ctx.r7.u64 | 34048;
	// stwx r3,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b8de8
	ctx.lr = 0x821B8C74;
	sub_822B8DE8(ctx, base);
	// lis r5,17
	ctx.r5.s64 = 1114112;
	// ori r4,r5,34064
	ctx.r4.u64 = ctx.r5.u64 | 34064;
	// stwx r3,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b8e58
	ctx.lr = 0x821B8C88;
	sub_822B8E58(ctx, base);
	// lis r11,17
	ctx.r11.s64 = 1114112;
	// ori r10,r11,34080
	ctx.r10.u64 = ctx.r11.u64 | 34080;
	// stwx r3,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b8d78
	ctx.lr = 0x821B8C9C;
	sub_822B8D78(ctx, base);
	// lis r9,17
	ctx.r9.s64 = 1114112;
	// ori r8,r9,34096
	ctx.r8.u64 = ctx.r9.u64 | 34096;
	// stwx r3,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b8ac8
	ctx.lr = 0x821B8CB0;
	sub_822B8AC8(ctx, base);
	// lis r7,17
	ctx.r7.s64 = 1114112;
	// ori r6,r7,34112
	ctx.r6.u64 = ctx.r7.u64 | 34112;
	// stwx r3,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b8f38
	ctx.lr = 0x821B8CC4;
	sub_822B8F38(ctx, base);
	// lis r5,17
	ctx.r5.s64 = 1114112;
	// ori r4,r5,34128
	ctx.r4.u64 = ctx.r5.u64 | 34128;
	// stwx r3,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b8f80
	ctx.lr = 0x821B8CD8;
	sub_822B8F80(ctx, base);
	// lis r11,17
	ctx.r11.s64 = 1114112;
	// ori r10,r11,34144
	ctx.r10.u64 = ctx.r11.u64 | 34144;
	// stwx r3,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9248
	ctx.lr = 0x821B8CEC;
	sub_822B9248(ctx, base);
	// lis r9,17
	ctx.r9.s64 = 1114112;
	// ori r8,r9,34160
	ctx.r8.u64 = ctx.r9.u64 | 34160;
	// stwx r3,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9278
	ctx.lr = 0x821B8D00;
	sub_822B9278(ctx, base);
	// lis r7,17
	ctx.r7.s64 = 1114112;
	// ori r6,r7,34176
	ctx.r6.u64 = ctx.r7.u64 | 34176;
	// stwx r3,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b92e0
	ctx.lr = 0x821B8D14;
	sub_822B92E0(ctx, base);
	// lis r5,17
	ctx.r5.s64 = 1114112;
	// ori r4,r5,34192
	ctx.r4.u64 = ctx.r5.u64 | 34192;
	// stwx r3,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9318
	ctx.lr = 0x821B8D28;
	sub_822B9318(ctx, base);
	// lis r11,17
	ctx.r11.s64 = 1114112;
	// ori r10,r11,34208
	ctx.r10.u64 = ctx.r11.u64 | 34208;
	// stwx r3,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9348
	ctx.lr = 0x821B8D3C;
	sub_822B9348(ctx, base);
	// lis r9,17
	ctx.r9.s64 = 1114112;
	// ori r8,r9,34224
	ctx.r8.u64 = ctx.r9.u64 | 34224;
	// stwx r3,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b92a8
	ctx.lr = 0x821B8D50;
	sub_822B92A8(ctx, base);
	// lis r7,17
	ctx.r7.s64 = 1114112;
	// ori r6,r7,34240
	ctx.r6.u64 = ctx.r7.u64 | 34240;
	// stwx r3,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9440
	ctx.lr = 0x821B8D64;
	sub_822B9440(ctx, base);
	// lis r5,17
	ctx.r5.s64 = 1114112;
	// ori r4,r5,34256
	ctx.r4.u64 = ctx.r5.u64 | 34256;
	// stwx r3,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9460
	ctx.lr = 0x821B8D78;
	sub_822B9460(ctx, base);
	// lis r11,17
	ctx.r11.s64 = 1114112;
	// ori r10,r11,34272
	ctx.r10.u64 = ctx.r11.u64 | 34272;
	// stwx r3,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9480
	ctx.lr = 0x821B8D8C;
	sub_822B9480(ctx, base);
	// lis r9,17
	ctx.r9.s64 = 1114112;
	// ori r8,r9,34288
	ctx.r8.u64 = ctx.r9.u64 | 34288;
	// stwx r3,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b93b0
	ctx.lr = 0x821B8DA0;
	sub_822B93B0(ctx, base);
	// lis r7,17
	ctx.r7.s64 = 1114112;
	// ori r6,r7,34304
	ctx.r6.u64 = ctx.r7.u64 | 34304;
	// stwx r3,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b93e8
	ctx.lr = 0x821B8DB4;
	sub_822B93E8(ctx, base);
	// lis r5,17
	ctx.r5.s64 = 1114112;
	// ori r4,r5,34320
	ctx.r4.u64 = ctx.r5.u64 | 34320;
	// stwx r3,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9418
	ctx.lr = 0x821B8DC8;
	sub_822B9418(ctx, base);
	// lis r11,17
	ctx.r11.s64 = 1114112;
	// ori r10,r11,34336
	ctx.r10.u64 = ctx.r11.u64 | 34336;
	// stwx r3,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9378
	ctx.lr = 0x821B8DDC;
	sub_822B9378(ctx, base);
	// lis r9,17
	ctx.r9.s64 = 1114112;
	// ori r8,r9,34352
	ctx.r8.u64 = ctx.r9.u64 | 34352;
	// stwx r3,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9530
	ctx.lr = 0x821B8DF0;
	sub_822B9530(ctx, base);
	// lis r7,17
	ctx.r7.s64 = 1114112;
	// ori r6,r7,34416
	ctx.r6.u64 = ctx.r7.u64 | 34416;
	// stwx r3,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9860
	ctx.lr = 0x821B8E04;
	sub_822B9860(ctx, base);
	// lis r5,17
	ctx.r5.s64 = 1114112;
	// ori r4,r5,34432
	ctx.r4.u64 = ctx.r5.u64 | 34432;
	// stwx r3,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b98b0
	ctx.lr = 0x821B8E18;
	sub_822B98B0(ctx, base);
	// lis r11,17
	ctx.r11.s64 = 1114112;
	// ori r10,r11,34448
	ctx.r10.u64 = ctx.r11.u64 | 34448;
	// stwx r3,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9810
	ctx.lr = 0x821B8E2C;
	sub_822B9810(ctx, base);
	// lis r9,17
	ctx.r9.s64 = 1114112;
	// ori r8,r9,34464
	ctx.r8.u64 = ctx.r9.u64 | 34464;
	// stwx r3,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9900
	ctx.lr = 0x821B8E40;
	sub_822B9900(ctx, base);
	// lis r7,17
	ctx.r7.s64 = 1114112;
	// ori r6,r7,34480
	ctx.r6.u64 = ctx.r7.u64 | 34480;
	// stwx r3,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b96d8
	ctx.lr = 0x821B8E54;
	sub_822B96D8(ctx, base);
	// lis r5,17
	ctx.r5.s64 = 1114112;
	// ori r4,r5,34496
	ctx.r4.u64 = ctx.r5.u64 | 34496;
	// stwx r3,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9700
	ctx.lr = 0x821B8E68;
	sub_822B9700(ctx, base);
	// lis r11,17
	ctx.r11.s64 = 1114112;
	// ori r10,r11,34512
	ctx.r10.u64 = ctx.r11.u64 | 34512;
	// stwx r3,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9540
	ctx.lr = 0x821B8E7C;
	sub_822B9540(ctx, base);
	// lis r9,17
	ctx.r9.s64 = 1114112;
	// ori r8,r9,34528
	ctx.r8.u64 = ctx.r9.u64 | 34528;
	// stwx r3,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b95f0
	ctx.lr = 0x821B8E90;
	sub_822B95F0(ctx, base);
	// lis r7,17
	ctx.r7.s64 = 1114112;
	// ori r6,r7,34544
	ctx.r6.u64 = ctx.r7.u64 | 34544;
	// stwx r3,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b96a8
	ctx.lr = 0x821B8EA4;
	sub_822B96A8(ctx, base);
	// lis r5,17
	ctx.r5.s64 = 1114112;
	// ori r4,r5,34560
	ctx.r4.u64 = ctx.r5.u64 | 34560;
	// stwx r3,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9740
	ctx.lr = 0x821B8EB8;
	sub_822B9740(ctx, base);
	// lis r11,17
	ctx.r11.s64 = 1114112;
	// ori r10,r11,34576
	ctx.r10.u64 = ctx.r11.u64 | 34576;
	// stwx r3,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9780
	ctx.lr = 0x821B8ECC;
	sub_822B9780(ctx, base);
	// lis r9,17
	ctx.r9.s64 = 1114112;
	// ori r8,r9,34592
	ctx.r8.u64 = ctx.r9.u64 | 34592;
	// stwx r3,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b97c0
	ctx.lr = 0x821B8EE0;
	sub_822B97C0(ctx, base);
	// lis r7,17
	ctx.r7.s64 = 1114112;
	// ori r6,r7,34608
	ctx.r6.u64 = ctx.r7.u64 | 34608;
	// stwx r3,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9800
	ctx.lr = 0x821B8EF4;
	sub_822B9800(ctx, base);
	// lis r5,17
	ctx.r5.s64 = 1114112;
	// ori r4,r5,34624
	ctx.r4.u64 = ctx.r5.u64 | 34624;
	// stwx r3,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9f48
	ctx.lr = 0x821B8F08;
	sub_822B9F48(ctx, base);
	// lis r11,17
	ctx.r11.s64 = 1114112;
	// ori r10,r11,34656
	ctx.r10.u64 = ctx.r11.u64 | 34656;
	// stwx r3,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9f80
	ctx.lr = 0x821B8F1C;
	sub_822B9F80(ctx, base);
	// lis r9,17
	ctx.r9.s64 = 1114112;
	// ori r8,r9,34672
	ctx.r8.u64 = ctx.r9.u64 | 34672;
	// stwx r3,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9b70
	ctx.lr = 0x821B8F30;
	sub_822B9B70(ctx, base);
	// lis r7,17
	ctx.r7.s64 = 1114112;
	// ori r6,r7,34688
	ctx.r6.u64 = ctx.r7.u64 | 34688;
	// stwx r3,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9b80
	ctx.lr = 0x821B8F44;
	sub_822B9B80(ctx, base);
	// lis r5,17
	ctx.r5.s64 = 1114112;
	// ori r4,r5,34704
	ctx.r4.u64 = ctx.r5.u64 | 34704;
	// stwx r3,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9b90
	ctx.lr = 0x821B8F58;
	sub_822B9B90(ctx, base);
	// lis r11,17
	ctx.r11.s64 = 1114112;
	// ori r10,r11,34720
	ctx.r10.u64 = ctx.r11.u64 | 34720;
	// stwx r3,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9ba0
	ctx.lr = 0x821B8F6C;
	sub_822B9BA0(ctx, base);
	// lis r9,17
	ctx.r9.s64 = 1114112;
	// ori r8,r9,34736
	ctx.r8.u64 = ctx.r9.u64 | 34736;
	// stwx r3,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9bb0
	ctx.lr = 0x821B8F80;
	sub_822B9BB0(ctx, base);
	// lis r7,17
	ctx.r7.s64 = 1114112;
	// ori r6,r7,34752
	ctx.r6.u64 = ctx.r7.u64 | 34752;
	// stwx r3,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9bc0
	ctx.lr = 0x821B8F94;
	sub_822B9BC0(ctx, base);
	// lis r5,17
	ctx.r5.s64 = 1114112;
	// ori r4,r5,34768
	ctx.r4.u64 = ctx.r5.u64 | 34768;
	// stwx r3,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9bd0
	ctx.lr = 0x821B8FA8;
	sub_822B9BD0(ctx, base);
	// lis r11,17
	ctx.r11.s64 = 1114112;
	// ori r10,r11,34784
	ctx.r10.u64 = ctx.r11.u64 | 34784;
	// stwx r3,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9be0
	ctx.lr = 0x821B8FBC;
	sub_822B9BE0(ctx, base);
	// lis r9,17
	ctx.r9.s64 = 1114112;
	// ori r8,r9,34800
	ctx.r8.u64 = ctx.r9.u64 | 34800;
	// stwx r3,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9bf0
	ctx.lr = 0x821B8FD0;
	sub_822B9BF0(ctx, base);
	// lis r7,17
	ctx.r7.s64 = 1114112;
	// ori r6,r7,34816
	ctx.r6.u64 = ctx.r7.u64 | 34816;
	// stwx r3,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9c00
	ctx.lr = 0x821B8FE4;
	sub_822B9C00(ctx, base);
	// lis r5,17
	ctx.r5.s64 = 1114112;
	// ori r4,r5,34832
	ctx.r4.u64 = ctx.r5.u64 | 34832;
	// stwx r3,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9c10
	ctx.lr = 0x821B8FF8;
	sub_822B9C10(ctx, base);
	// lis r11,17
	ctx.r11.s64 = 1114112;
	// ori r10,r11,34848
	ctx.r10.u64 = ctx.r11.u64 | 34848;
	// stwx r3,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9c20
	ctx.lr = 0x821B900C;
	sub_822B9C20(ctx, base);
	// lis r9,17
	ctx.r9.s64 = 1114112;
	// ori r8,r9,34864
	ctx.r8.u64 = ctx.r9.u64 | 34864;
	// stwx r3,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9c30
	ctx.lr = 0x821B9020;
	sub_822B9C30(ctx, base);
	// lis r7,17
	ctx.r7.s64 = 1114112;
	// ori r6,r7,34880
	ctx.r6.u64 = ctx.r7.u64 | 34880;
	// stwx r3,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9c40
	ctx.lr = 0x821B9034;
	sub_822B9C40(ctx, base);
	// lis r5,17
	ctx.r5.s64 = 1114112;
	// ori r4,r5,34896
	ctx.r4.u64 = ctx.r5.u64 | 34896;
	// stwx r3,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9c50
	ctx.lr = 0x821B9048;
	sub_822B9C50(ctx, base);
	// lis r11,17
	ctx.r11.s64 = 1114112;
	// ori r10,r11,34912
	ctx.r10.u64 = ctx.r11.u64 | 34912;
	// stwx r3,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9c60
	ctx.lr = 0x821B905C;
	sub_822B9C60(ctx, base);
	// lis r9,17
	ctx.r9.s64 = 1114112;
	// ori r8,r9,34928
	ctx.r8.u64 = ctx.r9.u64 | 34928;
	// stwx r3,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b94a0
	ctx.lr = 0x821B9070;
	sub_822B94A0(ctx, base);
	// lis r7,17
	ctx.r7.s64 = 1114112;
	// ori r6,r7,34368
	ctx.r6.u64 = ctx.r7.u64 | 34368;
	// stwx r3,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b94c0
	ctx.lr = 0x821B9084;
	sub_822B94C0(ctx, base);
	// lis r5,17
	ctx.r5.s64 = 1114112;
	// ori r4,r5,34384
	ctx.r4.u64 = ctx.r5.u64 | 34384;
	// stwx r3,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b94e0
	ctx.lr = 0x821B9098;
	sub_822B94E0(ctx, base);
	// lis r11,17
	ctx.r11.s64 = 1114112;
	// ori r10,r11,34400
	ctx.r10.u64 = ctx.r11.u64 | 34400;
	// stwx r3,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9fb8
	ctx.lr = 0x821B90AC;
	sub_822B9FB8(ctx, base);
	// lis r9,17
	ctx.r9.s64 = 1114112;
	// ori r8,r9,34640
	ctx.r8.u64 = ctx.r9.u64 | 34640;
	// stwx r3,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9cb0
	ctx.lr = 0x821B90C0;
	sub_822B9CB0(ctx, base);
	// lis r7,17
	ctx.r7.s64 = 1114112;
	// ori r6,r7,34944
	ctx.r6.u64 = ctx.r7.u64 | 34944;
	// stwx r3,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9d50
	ctx.lr = 0x821B90D4;
	sub_822B9D50(ctx, base);
	// lis r5,17
	ctx.r5.s64 = 1114112;
	// ori r4,r5,34960
	ctx.r4.u64 = ctx.r5.u64 | 34960;
	// stwx r3,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9de8
	ctx.lr = 0x821B90E8;
	sub_822B9DE8(ctx, base);
	// lis r11,17
	ctx.r11.s64 = 1114112;
	// ori r10,r11,34976
	ctx.r10.u64 = ctx.r11.u64 | 34976;
	// stwx r3,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9e80
	ctx.lr = 0x821B90FC;
	sub_822B9E80(ctx, base);
	// lis r9,17
	ctx.r9.s64 = 1114112;
	// ori r8,r9,34992
	ctx.r8.u64 = ctx.r9.u64 | 34992;
	// stwx r3,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9f18
	ctx.lr = 0x821B9110;
	sub_822B9F18(ctx, base);
	// lis r7,17
	ctx.r7.s64 = 1114112;
	// ori r6,r7,35008
	ctx.r6.u64 = ctx.r7.u64 | 35008;
	// stwx r3,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9ff0
	ctx.lr = 0x821B9124;
	sub_822B9FF0(ctx, base);
	// lis r5,17
	ctx.r5.s64 = 1114112;
	// ori r4,r5,35024
	ctx.r4.u64 = ctx.r5.u64 | 35024;
	// stwx r3,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822ba020
	ctx.lr = 0x821B9138;
	sub_822BA020(ctx, base);
	// lis r11,17
	ctx.r11.s64 = 1114112;
	// ori r10,r11,35040
	ctx.r10.u64 = ctx.r11.u64 | 35040;
	// stwx r3,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822ba050
	ctx.lr = 0x821B914C;
	sub_822BA050(ctx, base);
	// lis r9,17
	ctx.r9.s64 = 1114112;
	// ori r8,r9,35056
	ctx.r8.u64 = ctx.r9.u64 | 35056;
	// stwx r3,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822ba078
	ctx.lr = 0x821B9160;
	sub_822BA078(ctx, base);
	// lis r7,17
	ctx.r7.s64 = 1114112;
	// ori r6,r7,35072
	ctx.r6.u64 = ctx.r7.u64 | 35072;
	// stwx r3,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822ba0a8
	ctx.lr = 0x821B9174;
	sub_822BA0A8(ctx, base);
	// lis r5,17
	ctx.r5.s64 = 1114112;
	// ori r4,r5,35088
	ctx.r4.u64 = ctx.r5.u64 | 35088;
	// stwx r3,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822ba0d8
	ctx.lr = 0x821B9188;
	sub_822BA0D8(ctx, base);
	// lis r11,17
	ctx.r11.s64 = 1114112;
	// ori r10,r11,35104
	ctx.r10.u64 = ctx.r11.u64 | 35104;
	// stwx r3,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822ba108
	ctx.lr = 0x821B919C;
	sub_822BA108(ctx, base);
	// lis r9,17
	ctx.r9.s64 = 1114112;
	// ori r8,r9,35120
	ctx.r8.u64 = ctx.r9.u64 | 35120;
	// stwx r3,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822ba130
	ctx.lr = 0x821B91B0;
	sub_822BA130(ctx, base);
	// lis r7,17
	ctx.r7.s64 = 1114112;
	// ori r6,r7,35136
	ctx.r6.u64 = ctx.r7.u64 | 35136;
	// stwx r3,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822ba160
	ctx.lr = 0x821B91C4;
	sub_822BA160(ctx, base);
	// lis r5,17
	ctx.r5.s64 = 1114112;
	// ori r4,r5,35152
	ctx.r4.u64 = ctx.r5.u64 | 35152;
	// stwx r3,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822ba220
	ctx.lr = 0x821B91D8;
	sub_822BA220(ctx, base);
	// lis r11,17
	ctx.r11.s64 = 1114112;
	// ori r10,r11,35168
	ctx.r10.u64 = ctx.r11.u64 | 35168;
	// stwx r3,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822ba250
	ctx.lr = 0x821B91EC;
	sub_822BA250(ctx, base);
	// lis r9,17
	ctx.r9.s64 = 1114112;
	// ori r8,r9,35184
	ctx.r8.u64 = ctx.r9.u64 | 35184;
	// stwx r3,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822ba280
	ctx.lr = 0x821B9200;
	sub_822BA280(ctx, base);
	// lis r7,17
	ctx.r7.s64 = 1114112;
	// ori r6,r7,35200
	ctx.r6.u64 = ctx.r7.u64 | 35200;
	// stwx r3,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822ba2a8
	ctx.lr = 0x821B9214;
	sub_822BA2A8(ctx, base);
	// lis r5,17
	ctx.r5.s64 = 1114112;
	// ori r4,r5,35216
	ctx.r4.u64 = ctx.r5.u64 | 35216;
	// stwx r3,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822ba2b8
	ctx.lr = 0x821B9228;
	sub_822BA2B8(ctx, base);
	// lis r11,17
	ctx.r11.s64 = 1114112;
	// ori r10,r11,35232
	ctx.r10.u64 = ctx.r11.u64 | 35232;
	// stwx r3,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822ba2d0
	ctx.lr = 0x821B923C;
	sub_822BA2D0(ctx, base);
	// lis r9,17
	ctx.r9.s64 = 1114112;
	// ori r8,r9,35248
	ctx.r8.u64 = ctx.r9.u64 | 35248;
	// stwx r3,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822ba188
	ctx.lr = 0x821B9250;
	sub_822BA188(ctx, base);
	// lis r7,17
	ctx.r7.s64 = 1114112;
	// ori r6,r7,35264
	ctx.r6.u64 = ctx.r7.u64 | 35264;
	// stwx r3,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822ba1f0
	ctx.lr = 0x821B9264;
	sub_822BA1F0(ctx, base);
	// lis r5,17
	ctx.r5.s64 = 1114112;
	// ori r4,r5,35280
	ctx.r4.u64 = ctx.r5.u64 | 35280;
	// stwx r3,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b90b8
	ctx.lr = 0x821B9278;
	sub_822B90B8(ctx, base);
	// lis r11,17
	ctx.r11.s64 = 1114112;
	// ori r10,r11,35296
	ctx.r10.u64 = ctx.r11.u64 | 35296;
	// stwx r3,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9108
	ctx.lr = 0x821B928C;
	sub_822B9108(ctx, base);
	// lis r9,17
	ctx.r9.s64 = 1114112;
	// ori r8,r9,35312
	ctx.r8.u64 = ctx.r9.u64 | 35312;
	// stwx r3,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822b9158
	ctx.lr = 0x821B92A0;
	sub_822B9158(ctx, base);
	// lis r7,17
	ctx.r7.s64 = 1114112;
	// ori r11,r7,35328
	ctx.r11.u64 = ctx.r7.u64 | 35328;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r29,r31,r11
	ctx.r29.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwx r3,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
loc_821B92B4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822baa90
	ctx.lr = 0x821B92C0;
	sub_822BAA90(ctx, base);
	// stw r3,16(r29)
	REX_STORE_U32(ctx.r29.u32 + 16, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822baae0
	ctx.lr = 0x821B92D0;
	sub_822BAAE0(ctx, base);
	// stw r3,32(r29)
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822bab30
	ctx.lr = 0x821B92E0;
	sub_822BAB30(ctx, base);
	// stw r3,48(r29)
	REX_STORE_U32(ctx.r29.u32 + 48, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822baa30
	ctx.lr = 0x821B92F0;
	sub_822BAA30(ctx, base);
	// stw r3,64(r29)
	REX_STORE_U32(ctx.r29.u32 + 64, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822ba550
	ctx.lr = 0x821B9300;
	sub_822BA550(ctx, base);
	// stw r3,80(r29)
	REX_STORE_U32(ctx.r29.u32 + 80, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822ba3a8
	ctx.lr = 0x821B9310;
	sub_822BA3A8(ctx, base);
	// stw r3,96(r29)
	REX_STORE_U32(ctx.r29.u32 + 96, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822ba668
	ctx.lr = 0x821B9320;
	sub_822BA668(ctx, base);
	// stw r3,112(r29)
	REX_STORE_U32(ctx.r29.u32 + 112, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822ba8a8
	ctx.lr = 0x821B9330;
	sub_822BA8A8(ctx, base);
	// stw r3,128(r29)
	REX_STORE_U32(ctx.r29.u32 + 128, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822ba958
	ctx.lr = 0x821B9340;
	sub_822BA958(ctx, base);
	// stw r3,144(r29)
	REX_STORE_U32(ctx.r29.u32 + 144, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822ba790
	ctx.lr = 0x821B9350;
	sub_822BA790(ctx, base);
	// stw r3,160(r29)
	REX_STORE_U32(ctx.r29.u32 + 160, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822ba618
	ctx.lr = 0x821B9360;
	sub_822BA618(ctx, base);
	// stw r3,176(r29)
	REX_STORE_U32(ctx.r29.u32 + 176, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822ba478
	ctx.lr = 0x821B9370;
	sub_822BA478(ctx, base);
	// stw r3,192(r29)
	REX_STORE_U32(ctx.r29.u32 + 192, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822ba718
	ctx.lr = 0x821B9380;
	sub_822BA718(ctx, base);
	// stw r3,208(r29)
	REX_STORE_U32(ctx.r29.u32 + 208, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822ba9d8
	ctx.lr = 0x821B9390;
	sub_822BA9D8(ctx, base);
	// stw r3,224(r29)
	REX_STORE_U32(ctx.r29.u32 + 224, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822bab88
	ctx.lr = 0x821B93A0;
	sub_822BAB88(ctx, base);
	// stw r3,240(r29)
	REX_STORE_U32(ctx.r29.u32 + 240, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822ba800
	ctx.lr = 0x821B93B0;
	sub_822BA800(ctx, base);
	// stw r3,256(r29)
	REX_STORE_U32(ctx.r29.u32 + 256, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822babe0
	ctx.lr = 0x821B93C0;
	sub_822BABE0(ctx, base);
	// stw r3,272(r29)
	REX_STORE_U32(ctx.r29.u32 + 272, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822bac38
	ctx.lr = 0x821B93D0;
	sub_822BAC38(ctx, base);
	// stw r3,288(r29)
	REX_STORE_U32(ctx.r29.u32 + 288, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822bac90
	ctx.lr = 0x821B93E0;
	sub_822BAC90(ctx, base);
	// stw r3,304(r29)
	REX_STORE_U32(ctx.r29.u32 + 304, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822bacf0
	ctx.lr = 0x821B93F0;
	sub_822BACF0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwu r3,320(r29)
	ea = 320 + ctx.r29.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// cmpwi cr6,r30,26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 26, ctx.xer);
	// blt cr6,0x821b92b4
	if (ctx.cr6.lt) goto loc_821B92B4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825e365c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821F7C68) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821f7c84
	if (!ctx.cr6.gt) goto loc_821F7C84;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821f7c88
	goto loc_821F7C88;
loc_821F7C84:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821F7C88:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// fsubs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f11,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,10904
	ctx.r11.s64 = ctx.r11.s64 + 10904;
	// lfs f13,5796(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5796);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821f7cb4
	if (!ctx.cr6.lt) goto loc_821F7CB4;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_821F7CB4:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f1,f12
	ctx.f1.f64 = double(float(ctx.f12.f64));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FB2B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// lis r10,20
	ctx.r10.s64 = 1310720;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// ori r9,r10,8476
	ctx.r9.u64 = ctx.r10.u64 | 8476;
	// addi r4,r3,936
	ctx.r4.s64 = ctx.r3.s64 + 936;
	// lwz r11,30956(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 30956);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x8258cf30
	ctx.lr = 0x821FB2F0;
	sub_8258CF30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821fb374
	if (ctx.cr6.lt) goto loc_821FB374;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fb374
	if (ctx.cr6.eq) goto loc_821FB374;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,120(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FB32C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,17
	ctx.r4.s64 = 17;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,120(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 120);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821FB350;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,18
	ctx.r4.s64 = 18;
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FB374;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821FB374:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FE890) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821fd1f0
	ctx.lr = 0x821FE8B0;
	sub_821FD1F0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,9688
	ctx.r10.s64 = ctx.r11.s64 + 9688;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821fe8cc
	if (ctx.cr6.eq) goto loc_821FE8CC;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821fe8d8
	if (!ctx.cr6.eq) goto loc_821FE8D8;
loc_821FE8CC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r11,22448
	ctx.r6.s64 = ctx.r11.s64 + 22448;
	// b 0x821fe8e8
	goto loc_821FE8E8;
loc_821FE8D8:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,9388
	ctx.r8.s64 = ctx.r10.s64 + 9388;
	// lwzx r6,r9,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
loc_821FE8E8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,22564
	ctx.r4.s64 = ctx.r11.s64 + 22564;
	// bl 0x821fda08
	ctx.lr = 0x821FE8F8;
	sub_821FDA08(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fe790
	ctx.lr = 0x821FE908;
	sub_821FE790(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82201E18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,9688
	ctx.r30.s64 = ctx.r11.s64 + 9688;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82201e60
	if (!ctx.cr6.lt) goto loc_82201E60;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82201e60
	if (ctx.cr6.eq) goto loc_82201E60;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82201e74
	if (!ctx.cr6.eq) goto loc_82201E74;
loc_82201E60:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,22636
	ctx.r5.s64 = ctx.r11.s64 + 22636;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fe790
	ctx.lr = 0x82201E74;
	sub_821FE790(ctx, base);
loc_82201E74:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82201eb4
	if (!ctx.cr6.lt) goto loc_82201EB4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82201E8C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r7,r11,32
	ctx.r7.s64 = ctx.r11.s64 + 32;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82201e8c
	if (ctx.cr6.lt) goto loc_82201E8C;
loc_82201EB4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x821fd490
	ctx.lr = 0x82201ECC;
	sub_821FD490(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82201ee0
	if (ctx.cr6.lt) goto loc_82201EE0;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82201EE0:
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r6,-32224
	ctx.r6.s64 = -2111832064;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addi r4,r6,-7640
	ctx.r4.s64 = ctx.r6.s64 + -7640;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r6,r9,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r9.u64;
	// bl 0x82210ca0
	ctx.lr = 0x82201F10;
	sub_82210CA0(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,8(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82201f28
	if (ctx.cr6.lt) goto loc_82201F28;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_82201F28:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82201f5c
	if (ctx.cr6.lt) goto loc_82201F5C;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82201F5C:
	// ld r9,-16(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + -16);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,-8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// subf r6,r7,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r7.u64;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// srawi r3,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220C4C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35f8
	ctx.lr = 0x8220C4D0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220c648
	if (ctx.cr6.eq) goto loc_8220C648;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r28,7
	ctx.r28.s64 = 7;
	// addi r26,r11,9688
	ctx.r26.s64 = ctx.r11.s64 + 9688;
loc_8220C4FC:
	// lwz r30,16(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8220c518
	if (!ctx.cr6.eq) goto loc_8220C518;
	// stw r29,60(r30)
	REX_STORE_U32(ctx.r30.u32 + 60, ctx.r29.u32);
	// b 0x8220c520
	goto loc_8220C520;
loc_8220C518:
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8220C520:
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 120);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// lwz r9,120(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 120);
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r9,8(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lbz r8,32(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 32);
	// lbz r6,5(r7)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 5);
	// rlwimi r8,r6,0,24,28
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xF8) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFF07);
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// rlwinm r5,r5,0,30,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r5,5(r7)
	REX_STORE_U8(ctx.r7.u32 + 5, ctx.r5.u8);
	// beq cr6,0x8220c638
	if (ctx.cr6.eq) goto loc_8220C638;
	// lbz r11,6(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 6);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220c5d0
	if (!ctx.cr6.eq) goto loc_8220C5D0;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lbz r6,7(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 7);
	// lwz r8,16(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// slw r11,r27,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r6.u8 & 0x3F));
	// lwz r10,204(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 204);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// lwz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// and r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 & ctx.r4.u64;
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_8220C590:
	// lwz r8,24(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// bne cr6,0x8220c5a8
	if (!ctx.cr6.eq) goto loc_8220C5A8;
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8220c5b8
	if (ctx.cr6.eq) goto loc_8220C5B8;
loc_8220C5A8:
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220c590
	if (!ctx.cr6.eq) goto loc_8220C590;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8220C5B8:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8220c5d4
	if (!ctx.cr6.eq) goto loc_8220C5D4;
	// lbz r10,6(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 6);
	// ori r8,r10,4
	ctx.r8.u64 = ctx.r10.u64 | 4;
	// stb r8,6(r9)
	REX_STORE_U8(ctx.r9.u32 + 6, ctx.r8.u8);
loc_8220C5D0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8220C5D4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220c638
	if (ctx.cr6.eq) goto loc_8220C638;
	// lwz r25,76(r30)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// li r5,0
	ctx.r5.s64 = 0;
	// lbz r24,57(r31)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r31.u32 + 57);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r29,57(r31)
	REX_STORE_U8(ctx.r31.u32 + 57, ctx.r29.u8);
	// lwz r10,80(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,76(r30)
	REX_STORE_U32(ctx.r30.u32 + 76, ctx.r9.u32);
	// ld r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// std r8,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r8.u64);
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r4.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r7,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// stw r28,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r28.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// bl 0x82210988
	ctx.lr = 0x8220C630;
	sub_82210988(ctx, base);
	// stb r24,57(r31)
	REX_STORE_U8(ctx.r31.u32 + 57, ctx.r24.u8);
	// stw r25,76(r30)
	REX_STORE_U32(ctx.r30.u32 + 76, ctx.r25.u32);
loc_8220C638:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220c4fc
	if (!ctx.cr6.eq) goto loc_8220C4FC;
loc_8220C648:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x825e3648
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822181D0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r9,28(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x822181f8
	if (!ctx.cr6.gt) goto loc_822181F8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8221821c
	if (!ctx.cr6.eq) goto loc_8221821C;
	// lbz r11,50(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 50);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_822181F8:
	// add r11,r10,r5
	ctx.r11.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rlwinm r7,r8,17,0,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0xFFFE0000;
	// lwz r5,8(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// rlwimi r4,r6,6,0,25
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
	// b 0x82219ea8
	sub_82219EA8(ctx, base);
	return;
loc_8221821C:
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,-4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// clrlwi r7,r11,26
	ctx.r7.u64 = ctx.r11.u32 & 0x3F;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x822181f8
	if (!ctx.cr6.eq) goto loc_822181F8;
	// rlwinm r7,r11,26,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xFF;
	// rlwinm r9,r11,9,23,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1FF;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x822181f8
	if (ctx.cr6.gt) goto loc_822181F8;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x822181f8
	if (ctx.cr6.gt) goto loc_822181F8;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwimi r11,r10,23,0,8
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0xFF800000) | (ctx.r11.u64 & 0xFFFFFFFF007FFFFF);
	// stw r11,-4(r8)
	REX_STORE_U32(ctx.r8.u32 + -4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8221B240) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8221b258
	if (ctx.cr6.eq) goto loc_8221B258;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f0,16700(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16700);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
loc_8221B258:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// b 0x825e3c00
	sub_825E3C00(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8221E610) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e3608
	ctx.lr = 0x8221E618;
	__savegprlr_28(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r31,r9,10904
	ctx.r31.s64 = ctx.r9.s64 + 10904;
	// addi r30,r11,17232
	ctx.r30.s64 = ctx.r11.s64 + 17232;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,28(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// lwz r5,32(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// lfs f11,5784(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 5784);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,316(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 316);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r29,r9,r5
	ctx.r29.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lfs f0,-4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// stfs f13,-48(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// lwz r9,-48(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// rlwinm r3,r9,0,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// stw r3,-48(r1)
	REX_STORE_U32(ctx.r1.u32 + -48, ctx.r3.u32);
	// lfs f0,-48(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -48);
	ctx.f0.f64 = double(temp.f32);
	// sth r9,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// blt cr6,0x8221e6f8
	if (ctx.cr6.lt) goto loc_8221E6F8;
	// addi r3,r4,-3
	ctx.r3.s64 = ctx.r4.s64 + -3;
	// addi r8,r5,-2
	ctx.r8.s64 = ctx.r5.s64 + -2;
	// addi r9,r6,-4
	ctx.r9.s64 = ctx.r6.s64 + -4;
loc_8221E68C:
	// lfs f13,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fmadds f12,f13,f0,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f11.f64)));
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f9.u64);
	// lwz r28,-44(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// sth r28,2(r8)
	REX_STORE_U16(ctx.r8.u32 + 2, ctx.r28.u16);
	// lfs f8,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f8,f0,f11
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f11.f64)));
	// fctiwz f6,f7
	ctx.f6.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f6.u64);
	// lwz r28,-44(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// sth r28,4(r8)
	REX_STORE_U16(ctx.r8.u32 + 4, ctx.r28.u16);
	// lfs f5,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f5,f0,f11
	ctx.f4.f64 = double(float(std::fma(ctx.f5.f64, ctx.f0.f64, ctx.f11.f64)));
	// fctiwz f3,f4
	ctx.f3.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f3,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f3.u64);
	// lwz r28,-44(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// sth r28,6(r8)
	REX_STORE_U16(ctx.r8.u32 + 6, ctx.r28.u16);
	// lfsu f13,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// fmadds f2,f13,f0,f11
	ctx.f2.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f11.f64)));
	// fctiwz f1,f2
	ctx.f1.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f1,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f1.u64);
	// lwz r28,-44(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// sthu r28,8(r8)
	ea = 8 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r28.u16);
	ctx.r8.u32 = ea;
	// blt cr6,0x8221e68c
	if (ctx.cr6.lt) goto loc_8221E68C;
loc_8221E6F8:
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x8221e73c
	if (!ctx.cr6.lt) goto loc_8221E73C;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r11,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r11.u64;
	// add r11,r9,r5
	ctx.r11.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r9,r8,r6
	ctx.r9.u64 = ctx.r8.u64 + ctx.r6.u64;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
loc_8221E720:
	// lfsu f13,4(r11)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f13,f13,f0,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f11.f64)));
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f12.u64);
	// lwz r9,-44(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// sthu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x8221e720
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221E720;
loc_8221E73C:
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r10,16
	ctx.r6.s64 = ctx.r10.s64 + 16;
	// addi r10,r7,8
	ctx.r10.s64 = ctx.r7.s64 + 8;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// lfs f13,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f12,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f9,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,4(r6)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f8,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,8(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f7,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,8(r6)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// blt cr6,0x8221e94c
	if (ctx.cr6.lt) goto loc_8221E94C;
	// addi r7,r4,-3
	ctx.r7.s64 = ctx.r4.s64 + -3;
loc_8221E78C:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8221e7a0
	if (!ctx.cr6.gt) goto loc_8221E7A0;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_8221E7A0:
	// lfs f13,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8221e7b0
	if (!ctx.cr6.lt) goto loc_8221E7B0;
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
loc_8221E7B0:
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8221e7c4
	if (!ctx.cr6.gt) goto loc_8221E7C4;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_8221E7C4:
	// lfs f13,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8221e7d4
	if (!ctx.cr6.lt) goto loc_8221E7D4;
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
loc_8221E7D4:
	// lfs f0,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8221e7e8
	if (!ctx.cr6.gt) goto loc_8221E7E8;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_8221E7E8:
	// lfs f13,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8221e7f8
	if (!ctx.cr6.lt) goto loc_8221E7F8;
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
loc_8221E7F8:
	// lfsu f0,12(r9)
	ctx.fpscr.disableFlushMode();
	ea = 12 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8221e80c
	if (!ctx.cr6.gt) goto loc_8221E80C;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_8221E80C:
	// lfs f13,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8221e81c
	if (!ctx.cr6.lt) goto loc_8221E81C;
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
loc_8221E81C:
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8221e830
	if (!ctx.cr6.gt) goto loc_8221E830;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_8221E830:
	// lfs f13,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8221e840
	if (!ctx.cr6.lt) goto loc_8221E840;
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
loc_8221E840:
	// lfs f0,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8221e854
	if (!ctx.cr6.gt) goto loc_8221E854;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_8221E854:
	// lfs f13,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8221e864
	if (!ctx.cr6.lt) goto loc_8221E864;
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
loc_8221E864:
	// lfsu f0,12(r9)
	ctx.fpscr.disableFlushMode();
	ea = 12 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8221e878
	if (!ctx.cr6.gt) goto loc_8221E878;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_8221E878:
	// lfs f13,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8221e888
	if (!ctx.cr6.lt) goto loc_8221E888;
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
loc_8221E888:
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8221e89c
	if (!ctx.cr6.gt) goto loc_8221E89C;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_8221E89C:
	// lfs f13,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8221e8ac
	if (!ctx.cr6.lt) goto loc_8221E8AC;
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
loc_8221E8AC:
	// lfs f0,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8221e8c0
	if (!ctx.cr6.gt) goto loc_8221E8C0;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_8221E8C0:
	// lfs f13,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8221e8d0
	if (!ctx.cr6.lt) goto loc_8221E8D0;
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
loc_8221E8D0:
	// lfsu f0,12(r9)
	ctx.fpscr.disableFlushMode();
	ea = 12 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8221e8e4
	if (!ctx.cr6.gt) goto loc_8221E8E4;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_8221E8E4:
	// lfs f13,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8221e8f4
	if (!ctx.cr6.lt) goto loc_8221E8F4;
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
loc_8221E8F4:
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8221e908
	if (!ctx.cr6.gt) goto loc_8221E908;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_8221E908:
	// lfs f13,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8221e918
	if (!ctx.cr6.lt) goto loc_8221E918;
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
loc_8221E918:
	// lfs f0,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8221e92c
	if (!ctx.cr6.gt) goto loc_8221E92C;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_8221E92C:
	// lfs f13,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8221e93c
	if (!ctx.cr6.lt) goto loc_8221E93C;
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
loc_8221E93C:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8221e78c
	if (ctx.cr6.lt) goto loc_8221E78C;
loc_8221E94C:
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x8221e9d4
	if (!ctx.cr6.lt) goto loc_8221E9D4;
	// subf r8,r8,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r8.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8221E960:
	// lfs f0,-8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8221e974
	if (!ctx.cr6.gt) goto loc_8221E974;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_8221E974:
	// lfs f13,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8221e984
	if (!ctx.cr6.lt) goto loc_8221E984;
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
loc_8221E984:
	// lfs f0,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8221e998
	if (!ctx.cr6.gt) goto loc_8221E998;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_8221E998:
	// lfs f13,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8221e9a8
	if (!ctx.cr6.lt) goto loc_8221E9A8;
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
loc_8221E9A8:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8221e9bc
	if (!ctx.cr6.gt) goto loc_8221E9BC;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_8221E9BC:
	// lfs f13,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8221e9cc
	if (!ctx.cr6.lt) goto loc_8221E9CC;
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
loc_8221E9CC:
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// bdnz 0x8221e960
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221E960;
loc_8221E9D4:
	// li r7,3
	ctx.r7.s64 = 3;
	// lfs f0,320(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5796(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 5796);
	ctx.f13.f64 = double(temp.f32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lfs f12,0(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// subf r8,r11,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r11.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8221E9F0:
	// lfs f9,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f8,r8,r9
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,0(r9)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfsx f9,r8,r9
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, temp.u32);
	// lfs f5,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fcmpu cr6,f5,f13
	ctx.cr6.compare(ctx.f5.f64, ctx.f13.f64);
	// bne cr6,0x8221ea18
	if (!ctx.cr6.eq) goto loc_8221EA18;
	// stfs f12,0(r9)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_8221EA18:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8221e9f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221E9F0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8221eb04
	if (!ctx.cr6.gt) goto loc_8221EB04;
	// addi r9,r29,-2
	ctx.r9.s64 = ctx.r29.s64 + -2;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_8221EA30:
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f8,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fdivs f0,f9,f8
	ctx.f0.f64 = double(float(ctx.f9.f64 / ctx.f8.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8221ea54
	if (!ctx.cr6.lt) goto loc_8221EA54;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x8221ea60
	goto loc_8221EA60;
loc_8221EA54:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x8221ea60
	if (!ctx.cr6.gt) goto loc_8221EA60;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
loc_8221EA60:
	// fadds f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f12.u64);
	// lwz r8,-44(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// sth r8,2(r9)
	REX_STORE_U16(ctx.r9.u32 + 2, ctx.r8.u16);
	// lfs f9,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfs f6,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fdivs f0,f7,f6
	ctx.f0.f64 = double(float(ctx.f7.f64 / ctx.f6.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8221ea98
	if (!ctx.cr6.lt) goto loc_8221EA98;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x8221eaa4
	goto loc_8221EAA4;
loc_8221EA98:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x8221eaa4
	if (!ctx.cr6.gt) goto loc_8221EAA4;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
loc_8221EAA4:
	// fadds f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f12.u64);
	// lwz r8,-44(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// sth r8,4(r9)
	REX_STORE_U16(ctx.r9.u32 + 4, ctx.r8.u16);
	// lfs f7,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f9,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f0,f6,f9
	ctx.f0.f64 = double(float(ctx.f6.f64 / ctx.f9.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8221eadc
	if (!ctx.cr6.lt) goto loc_8221EADC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x8221eae8
	goto loc_8221EAE8;
loc_8221EADC:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x8221eae8
	if (!ctx.cr6.gt) goto loc_8221EAE8;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
loc_8221EAE8:
	// fadds f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f12.u64);
	// lwz r8,-44(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// sthu r8,6(r9)
	ea = 6 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x8221ea30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221EA30;
loc_8221EB04:
	// b 0x825e3658
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8224DDD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e3608
	ctx.lr = 0x8224DDE0;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x825e4164
	ctx.lr = 0x8224DDE8;
	__savefpr_27(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8224e118
	if (ctx.cr6.eq) goto loc_8224E118;
	// addi r31,r5,8
	ctx.r31.s64 = ctx.r5.s64 + 8;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// addi r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 + 12;
	// addi r4,r5,17232
	ctx.r4.s64 = ctx.r5.s64 + 17232;
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// lis r29,-32118
	ctx.r29.s64 = -2104885248;
	// lis r30,-32118
	ctx.r30.s64 = -2104885248;
	// addi r11,r11,29472
	ctx.r11.s64 = ctx.r11.s64 + 29472;
	// lfs f28,96(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f28.f64 = double(temp.f32);
loc_8224DE14:
	// lbz r28,0(r10)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// lbz r4,2(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// rotlwi r5,r4,6
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r4.u32, 6);
	// std r28,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, ctx.r28.u64);
	// lfd f0,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f11,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f12,f28
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// fmuls f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f10,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f9,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f8,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f10,f8,f0
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f7,16(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f9,f7,f0
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f6,20(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f6,f0
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f5,24(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f7,f5,f0
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f7,24(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f4,28(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f6,f4,f0
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f6,28(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f3,32(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f5,f3,f0
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f5,32(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f2,36(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f4,f2,f0
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f4,36(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f1,40(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f3,f1,f0
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f3,40(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f2,44(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f2,44(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f1,48(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f1,48(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfs f31,52(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// stfs f31,52(r11)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lfs f30,56(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 56);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f30,f30,f0
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// stfs f30,56(r11)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lfs f29,60(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 60);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f29,f29,f0
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// stfs f29,60(r11)
	temp.f32 = float(ctx.f29.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lbz r4,1(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// std r4,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.r4.u64);
	// lfd f0,-88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lbz r5,3(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// rotlwi r5,r5,6
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 6);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r5,29540(r30)
	REX_STORE_U32(ctx.r30.u32 + 29540, ctx.r5.u32);
	// lfs f27,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// stfs f0,29536(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r29.u32 + 29536, temp.u32);
	// fmadds f13,f0,f27,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f27.f64, ctx.f13.f64)));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f27,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f12,f27,f0,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f27.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f12,f0,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f11.f64)));
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f11,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f12,f11,f0,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f10.f64)));
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f10,16(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// fmadds f12,f10,f0,f9
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f9.f64)));
	// stfs f12,16(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lfs f9,20(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f11,f9,f0,f8
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f8.f64)));
	// stfs f11,20(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f8,24(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f11,f8,f0,f7
	ctx.f11.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f7.f64)));
	// stfs f11,24(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f7,28(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f11,f7,f0,f6
	ctx.f11.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f6.f64)));
	// stfs f11,28(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f6,32(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f11,f6,f0,f5
	ctx.f11.f64 = double(float(std::fma(ctx.f6.f64, ctx.f0.f64, ctx.f5.f64)));
	// stfs f11,32(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f5,36(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f10,f5,f0,f4
	ctx.f10.f64 = double(float(std::fma(ctx.f5.f64, ctx.f0.f64, ctx.f4.f64)));
	// stfs f10,36(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f4,40(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f10,f4,f0,f3
	ctx.f10.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, ctx.f3.f64)));
	// stfs f10,40(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f3,44(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f10,f3,f0,f2
	ctx.f10.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, ctx.f2.f64)));
	// stfs f10,44(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f2,48(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f10,f2,f0,f1
	ctx.f10.f64 = double(float(std::fma(ctx.f2.f64, ctx.f0.f64, ctx.f1.f64)));
	// stfs f10,48(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfs f1,52(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f9,f1,f0,f31
	ctx.f9.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f31.f64)));
	// stfs f9,52(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lfs f9,56(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f9,f9,f0,f30
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f30.f64)));
	// stfs f9,56(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lfs f8,60(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 60);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f0,f8,f0,f29
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f29.f64)));
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lfs f6,-12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,-8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f12
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmadds f3,f7,f11,f4
	ctx.f3.f64 = double(float(std::fma(ctx.f7.f64, ctx.f11.f64, ctx.f4.f64)));
	// fmadds f2,f6,f13,f3
	ctx.f2.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f3.f64)));
	// fadds f1,f2,f10
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f10.f64));
	// stfs f1,-8(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// lfs f12,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,-12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,-8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmadds f9,f12,f13,f10
	ctx.f9.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f10.f64)));
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f7,f8,f12,f9
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f9.f64)));
	// fadds f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f6,-4(r31)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// lfs f5,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f13,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f4,-12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f3,-8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmadds f1,f5,f13,f2
	ctx.f1.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f2.f64)));
	// lfs f0,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f4,f12,f1
	ctx.f13.f64 = double(float(std::fma(ctx.f4.f64, ctx.f12.f64, ctx.f1.f64)));
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f11,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f0,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f7,f11,f0,f8
	ctx.f7.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f8.f64)));
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f6,f10,f0,f7
	ctx.f6.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f7.f64)));
	// stfs f6,4(r31)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f5,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f4,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f0,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f2,f5,f0,f3
	ctx.f2.f64 = double(float(std::fma(ctx.f5.f64, ctx.f0.f64, ctx.f3.f64)));
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f2
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f2.f64)));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f10,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f9,f10,f0,f11
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f11.f64)));
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f8,f13,f0,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f9.f64)));
	// stfs f8,12(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// beq cr6,0x8224e108
	if (ctx.cr6.eq) goto loc_8224E108;
	// subf r5,r4,r31
	ctx.r5.u64 = ctx.r31.u64 - ctx.r4.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
loc_8224E0F8:
	// lwz r28,0(r4)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stwx r28,r5,r4
	REX_STORE_U32(ctx.r5.u32 + ctx.r4.u32, ctx.r28.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bdnz 0x8224e0f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8224E0F8;
loc_8224E108:
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r31,r31,r9
	ctx.r31.u64 = ctx.r31.u64 + ctx.r9.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8224de14
	if (!ctx.cr6.eq) goto loc_8224DE14;
loc_8224E118:
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x825e41b0
	ctx.lr = 0x8224E120;
	__restfpr_27(ctx, base);
	// b 0x825e3658
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8226CE48) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e3600
	ctx.lr = 0x8226CE50;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r10,r11,-23896
	ctx.r10.s64 = ctx.r11.s64 + -23896;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r26.u32);
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r8,r9,11388
	ctx.r8.s64 = ctx.r9.s64 + 11388;
	// stw r26,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r26.u32);
	// stb r27,24(r3)
	REX_STORE_U8(ctx.r3.u32 + 24, ctx.r27.u8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r26.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r26,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r26.u32);
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// stb r27,28(r3)
	REX_STORE_U8(ctx.r3.u32 + 28, ctx.r27.u8);
	// stb r26,29(r3)
	REX_STORE_U8(ctx.r3.u32 + 29, ctx.r26.u8);
	// stw r8,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// stw r4,4844(r3)
	REX_STORE_U32(ctx.r3.u32 + 4844, ctx.r4.u32);
	// lwz r7,16(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r7,1156
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1156, ctx.xer);
	// bge cr6,0x8226cf44
	if (!ctx.cr6.lt) goto loc_8226CF44;
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,4624
	ctx.r3.s64 = 4624;
	// lwz r11,31252(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 31252);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,31252(r10)
	REX_STORE_U32(ctx.r10.u32 + 31252, ctx.r11.u32);
	// bl 0x825dd818
	ctx.lr = 0x8226CEC8;
	sub_825DD818(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8226cf04
	if (!ctx.cr6.gt) goto loc_8226CF04;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8226CEE4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226cef8
	if (ctx.cr6.eq) goto loc_8226CEF8;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_8226CEF8:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8226cee4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8226CEE4;
loc_8226CF04:
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226cf34
	if (ctx.cr6.eq) goto loc_8226CF34;
	// lbz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226cf30
	if (ctx.cr6.eq) goto loc_8226CF30;
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// lwz r11,31256(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 31256);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,31256(r10)
	REX_STORE_U32(ctx.r10.u32 + 31256, ctx.r11.u32);
	// bl 0x825dd800
	ctx.lr = 0x8226CF30;
	sub_825DD800(ctx, base);
loc_8226CF30:
	// stw r26,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
loc_8226CF34:
	// li r11,1156
	ctx.r11.s64 = 1156;
	// stw r28,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// stb r27,16(r31)
	REX_STORE_U8(ctx.r31.u32 + 16, ctx.r27.u8);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8226CF44:
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r10,r11,-10480
	ctx.r10.s64 = ctx.r11.s64 + -10480;
	// stw r10,208(r30)
	REX_STORE_U32(ctx.r30.u32 + 208, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8226CF64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,212(r30)
	REX_STORE_U32(ctx.r30.u32 + 212, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8226CF7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,216(r30)
	REX_STORE_U32(ctx.r30.u32 + 216, ctx.r3.u32);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// li r29,55
	ctx.r29.s64 = 55;
loc_8226CF88:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_8226CF8C:
	// lwz r3,4844(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 4844);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8226CFA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r9,r29,r31
	ctx.r9.u64 = ctx.r29.u64 + ctx.r31.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r31,34
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 34, ctx.xer);
	// stwx r3,r8,r30
	REX_STORE_U32(ctx.r8.u32 + ctx.r30.u32, ctx.r3.u32);
	// blt cr6,0x8226cf8c
	if (ctx.cr6.lt) goto loc_8226CF8C;
	// addi r29,r29,34
	ctx.r29.s64 = ctx.r29.s64 + 34;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r29,1211
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1211, ctx.xer);
	// blt cr6,0x8226cf88
	if (ctx.cr6.lt) goto loc_8226CF88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825e3650
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82275000) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35d0
	ctx.lr = 0x82275008;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x825e4130
	ctx.lr = 0x82275010;
	__savefpr_14(ctx, base);
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r8,860(r1)
	REX_STORE_U32(ctx.r1.u32 + 860, ctx.r8.u32);
	// lis r24,-32242
	ctx.r24.s64 = -2113011712;
	// addi r11,r11,17232
	ctx.r11.s64 = ctx.r11.s64 + 17232;
	// addi r9,r24,10904
	ctx.r9.s64 = ctx.r24.s64 + 10904;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lfs f0,296(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 296);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f31,5796(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 5796);
	ctx.f31.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stb r10,320(r11)
	REX_STORE_U8(ctx.r11.u32 + 320, ctx.r10.u8);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r3,8(r8)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stb r6,384(r11)
	REX_STORE_U8(ctx.r11.u32 + 384, ctx.r6.u8);
	// addi r4,r11,304
	ctx.r4.s64 = ctx.r11.s64 + 304;
	// std r9,304(r11)
	REX_STORE_U64(ctx.r11.u32 + 304, ctx.r9.u64);
	// addi r8,r1,400
	ctx.r8.s64 = ctx.r1.s64 + 400;
	// std r3,312(r11)
	REX_STORE_U64(ctx.r11.u32 + 312, ctx.r3.u64);
	// stfs f31,356(r11)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 356, temp.u32);
	// stb r10,372(r11)
	REX_STORE_U8(ctx.r11.u32 + 372, ctx.r10.u8);
	// stfs f31,360(r11)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 360, temp.u32);
	// stfs f31,364(r11)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 364, temp.u32);
	// addi r10,r7,48
	ctx.r10.s64 = ctx.r7.s64 + 48;
	// stfs f31,368(r11)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 368, temp.u32);
	// lhz r7,352(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 352);
	// clrlwi r6,r7,20
	ctx.r6.u64 = ctx.r7.u32 & 0xFFF;
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// sth r6,352(r11)
	REX_STORE_U16(ctx.r11.u32 + 352, ctx.r6.u16);
	// lfs f12,52(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,52(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// ld r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 8);
	// lfs f10,56(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// ld r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lfs f9,56(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,336
	ctx.r11.s64 = ctx.r11.s64 + 336;
	// lfs f8,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lfs f7,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// ld r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 16);
	// lfs f5,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// ld r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r31.u32 + 24);
	// lfs f6,52(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// ld r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r31.u32 + 32);
	// lfs f4,56(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f4.f64 = double(temp.f32);
	// ld r25,40(r31)
	ctx.r25.u64 = REX_LOAD_U64(ctx.r31.u32 + 40);
	// lfs f3,48(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// ld r23,48(r31)
	ctx.r23.u64 = REX_LOAD_U64(ctx.r31.u32 + 48);
	// lfs f13,48(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// ld r22,56(r31)
	ctx.r22.u64 = REX_LOAD_U64(ctx.r31.u32 + 56);
	// lfs f0,48(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f2,16(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f12,f10,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f1,20(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f30,24(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f30.f64 = double(temp.f32);
	// addi r29,r31,48
	ctx.r29.s64 = ctx.r31.s64 + 48;
	// lfs f29,32(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f29.f64 = double(temp.f32);
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// lfs f28,36(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f28.f64 = double(temp.f32);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// lfs f23,40(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f23.f64 = double(temp.f32);
	// addi r26,r5,48
	ctx.r26.s64 = ctx.r5.s64 + 48;
	// addi r28,r30,48
	ctx.r28.s64 = ctx.r30.s64 + 48;
	// std r3,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r3.u64);
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// std r4,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r4.u64);
	// addi r21,r1,432
	ctx.r21.s64 = ctx.r1.s64 + 432;
	// fsubs f11,f7,f6
	ctx.f11.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fsubs f10,f5,f4
	ctx.f10.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// fsubs f9,f8,f3
	ctx.f9.f64 = double(float(ctx.f8.f64 - ctx.f3.f64));
	// fsubs f26,f13,f11
	ctx.f26.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// ld r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 32);
	// fsubs f25,f12,f10
	ctx.f25.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// std r11,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// fsubs f24,f0,f9
	ctx.f24.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// lfs f8,0(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,8(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// ld r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r30.u32 + 40);
	// ld r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 48);
	// stfs f31,364(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// lfs f7,4(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// std r3,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r3.u64);
	// addi r18,r1,240
	ctx.r18.s64 = ctx.r1.s64 + 240;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// addi r14,r1,272
	ctx.r14.s64 = ctx.r1.s64 + 272;
	// ld r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// addi r20,r1,448
	ctx.r20.s64 = ctx.r1.s64 + 448;
	// fneg f5,f26
	ctx.f5.u64 = ctx.f26.u64 ^ 0x8000000000000000;
	// std r7,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// fneg f4,f25
	ctx.f4.u64 = ctx.f25.u64 ^ 0x8000000000000000;
	// lwz r4,8(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// fneg f3,f24
	ctx.f3.u64 = ctx.f24.u64 ^ 0x8000000000000000;
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r6,0(r21)
	REX_STORE_U64(ctx.r21.u32 + 0, ctx.r6.u64);
	// addi r16,r1,256
	ctx.r16.s64 = ctx.r1.s64 + 256;
	// std r8,0(r18)
	REX_STORE_U64(ctx.r18.u32 + 0, ctx.r8.u64);
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// std r29,224(r1)
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.r29.u64);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// ld r19,8(r30)
	ctx.r19.u64 = REX_LOAD_U64(ctx.r30.u32 + 8);
	// stfs f26,84(r1)
	temp.f32 = float(ctx.f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r17,16(r30)
	ctx.r17.u64 = REX_LOAD_U64(ctx.r30.u32 + 16);
	// stfs f25,88(r1)
	temp.f32 = float(ctx.f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r15,24(r30)
	ctx.r15.u64 = REX_LOAD_U64(ctx.r30.u32 + 24);
	// stfs f24,80(r1)
	temp.f32 = float(ctx.f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r29,56(r30)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r30.u32 + 56);
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// fmuls f2,f5,f2
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// std r25,8(r21)
	REX_STORE_U64(ctx.r21.u32 + 8, ctx.r25.u64);
	// fmuls f0,f30,f5
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f5.f64));
	// ld r7,192(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// fmuls f1,f1,f5
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f5.f64));
	// std r23,0(r20)
	REX_STORE_U64(ctx.r20.u32 + 0, ctx.r23.u64);
	// std r22,8(r20)
	REX_STORE_U64(ctx.r20.u32 + 8, ctx.r22.u64);
	// std r19,8(r18)
	REX_STORE_U64(ctx.r18.u32 + 8, ctx.r19.u64);
	// std r17,0(r16)
	REX_STORE_U64(ctx.r16.u32 + 0, ctx.r17.u64);
	// std r7,0(r14)
	REX_STORE_U64(ctx.r14.u32 + 0, ctx.r7.u64);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// ld r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// ld r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fmadds f13,f4,f29,f2
	ctx.f13.f64 = double(float(std::fma(ctx.f4.f64, ctx.f29.f64, ctx.f2.f64)));
	// std r15,8(r16)
	REX_STORE_U64(ctx.r16.u32 + 8, ctx.r15.u64);
	// fmadds f11,f23,f4,f0
	ctx.f11.f64 = double(float(std::fma(ctx.f23.f64, ctx.f4.f64, ctx.f0.f64)));
	// fmadds f12,f28,f4,f1
	ctx.f12.f64 = double(float(std::fma(ctx.f28.f64, ctx.f4.f64, ctx.f1.f64)));
	// std r29,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r29.u64);
	// std r6,8(r14)
	REX_STORE_U64(ctx.r14.u32 + 8, ctx.r6.u64);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// fmadds f10,f8,f3,f13
	ctx.f10.f64 = double(float(std::fma(ctx.f8.f64, ctx.f3.f64, ctx.f13.f64)));
	// stfs f10,352(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// fmadds f8,f6,f3,f11
	ctx.f8.f64 = double(float(std::fma(ctx.f6.f64, ctx.f3.f64, ctx.f11.f64)));
	// stfs f8,360(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// fmadds f9,f7,f3,f12
	ctx.f9.f64 = double(float(std::fma(ctx.f7.f64, ctx.f3.f64, ctx.f12.f64)));
	// stfs f9,356(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// lwz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r7,48(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82275270;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f6,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// lfs f5,20(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f26
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f26.f64));
	// lfs f3,24(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f5,f26
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f26.f64));
	// lfs f7,0(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f0,f3,f26
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f26.f64));
	// lfs f1,4(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f7,f13
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f8,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,24(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lwz r4,12(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// lfs f6,40(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// lfs f3,0(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f7,f6,f8
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// lfs f6,36(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f4,f3,f24,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f3.f64, ctx.f24.f64, ctx.f4.f64)));
	// lfs f3,40(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f6,f25,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f6.f64, ctx.f25.f64, ctx.f2.f64)));
	// fmadds f0,f3,f25,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f3.f64, ctx.f25.f64, ctx.f0.f64)));
	// lfs f6,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f9,20(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfs f3,36(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lfs f30,4(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f1,f6,f1,f11
	ctx.f1.f64 = double(float(std::fma(ctx.f6.f64, ctx.f1.f64, ctx.f11.f64)));
	// lfs f11,32(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f29,8(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f9,f9,f6,f5
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f6.f64, ctx.f5.f64)));
	// stfs f31,316(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// fmadds f3,f3,f6,f7
	ctx.f3.f64 = double(float(std::fma(ctx.f3.f64, ctx.f6.f64, ctx.f7.f64)));
	// lfs f5,16(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f6,f25,f11,f4
	ctx.f6.f64 = double(float(std::fma(ctx.f25.f64, ctx.f11.f64, ctx.f4.f64)));
	// stfs f6,304(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// fmadds f4,f30,f24,f2
	ctx.f4.f64 = double(float(std::fma(ctx.f30.f64, ctx.f24.f64, ctx.f2.f64)));
	// stfs f4,308(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// fmadds f2,f24,f29,f0
	ctx.f2.f64 = double(float(std::fma(ctx.f24.f64, ctx.f29.f64, ctx.f0.f64)));
	// stfs f2,312(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// lfs f7,32(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// lwz r6,0(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,48(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 48);
	// lfs f10,48(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,52(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f12,f8,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f12.f64, ctx.f8.f64, ctx.f1.f64)));
	// lfs f12,56(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f5,f13,f9
	ctx.f11.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f9.f64)));
	// fmadds f9,f13,f7,f3
	ctx.f9.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, ctx.f3.f64)));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fadds f30,f1,f10
	ctx.f30.f64 = double(float(ctx.f1.f64 + ctx.f10.f64));
	// fadds f29,f11,f0
	ctx.f29.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fadds f28,f9,f12
	ctx.f28.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// bctrl 
	ctx.lr = 0x82275350;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f3,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f7,24(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// fmuls f1,f7,f3
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// lfs f4,40(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f12,f4,f3
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// lfs f8,4(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// lfs f5,20(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f0,f2,f8
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f8.f64));
	// lfs f9,36(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lfs f13,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r25,32
	ctx.r25.s64 = 32;
	// lfs f6,0(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,16(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f4,32(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f1,f5,f2,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f5.f64, ctx.f2.f64, ctx.f1.f64)));
	// lfs f7,52(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f12,f9,f2,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f2.f64, ctx.f12.f64)));
	// lfs f8,48(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// lfs f23,56(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f23.f64 = double(temp.f32);
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// fmadds f0,f13,f6,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f6.f64, ctx.f0.f64)));
	// lfs f22,10904(r24)
	temp.u32 = REX_LOAD_U32(ctx.r24.u32 + 10904);
	ctx.f22.f64 = double(temp.f32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f22,96(r1)
	temp.f32 = float(ctx.f22.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f10,f10,f13,f1
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f1.f64)));
	// fmadds f5,f13,f4,f12
	ctx.f5.f64 = double(float(std::fma(ctx.f13.f64, ctx.f4.f64, ctx.f12.f64)));
	// fmadds f6,f3,f11,f0
	ctx.f6.f64 = double(float(std::fma(ctx.f3.f64, ctx.f11.f64, ctx.f0.f64)));
	// fadds f4,f10,f7
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// fadds f2,f5,f23
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f23.f64));
	// fadds f3,f6,f8
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// fsubs f0,f29,f4
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f4.f64));
	// fsubs f12,f28,f2
	ctx.f12.f64 = double(float(ctx.f28.f64 - ctx.f2.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fsubs f13,f30,f3
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f3.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// ld r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// lfs f8,22872(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 22872);
	ctx.f8.f64 = double(temp.f32);
	// ld r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r29,224(r1)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + 224);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r24,160(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f8,192(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fmr f10,f31
	ctx.f10.f64 = ctx.f31.f64;
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmr f11,f31
	ctx.f11.f64 = ctx.f31.f64;
	// std r7,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// fmuls f1,f12,f12
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// std r6,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// fmadds f13,f13,f13,f1
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f1.f64)));
	// fmadds f12,f0,f0,f13
	ctx.f12.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// fcmpu cr6,f12,f8
	ctx.cr6.compare(ctx.f12.f64, ctx.f8.f64);
	// ble cr6,0x82275868
	if (!ctx.cr6.gt) goto loc_82275868;
	// lwz r30,128(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lfs f0,628(r24)
	temp.u32 = REX_LOAD_U32(ctx.r24.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// lfs f23,440(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 440);
	ctx.f23.f64 = double(temp.f32);
	// li r31,1
	ctx.r31.s64 = 1;
	// lfs f22,436(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 436);
	ctx.f22.f64 = double(temp.f32);
	// lfs f21,432(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 432);
	ctx.f21.f64 = double(temp.f32);
	// lfs f20,424(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 424);
	ctx.f20.f64 = double(temp.f32);
	// lfs f19,420(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 420);
	ctx.f19.f64 = double(temp.f32);
	// lfs f18,416(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 416);
	ctx.f18.f64 = double(temp.f32);
	// lfs f17,408(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 408);
	ctx.f17.f64 = double(temp.f32);
	// lfs f16,404(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 404);
	ctx.f16.f64 = double(temp.f32);
	// lfs f15,400(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 400);
	ctx.f15.f64 = double(temp.f32);
	// lfs f14,280(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f14.f64 = double(temp.f32);
	// lfs f30,184(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,180(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,176(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f28.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
loc_82275480:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// beq cr6,0x8227585c
	if (ctx.cr6.eq) goto loc_8227585C;
	// fneg f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// stfs f31,332(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// fneg f13,f30
	ctx.f13.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// lwz r4,8(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// fneg f12,f28
	ctx.f12.u64 = ctx.f28.u64 ^ 0x8000000000000000;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// fmuls f11,f18,f0
	ctx.f11.f64 = double(float(ctx.f18.f64 * ctx.f0.f64));
	// fmuls f10,f19,f0
	ctx.f10.f64 = double(float(ctx.f19.f64 * ctx.f0.f64));
	// fmuls f9,f20,f0
	ctx.f9.f64 = double(float(ctx.f20.f64 * ctx.f0.f64));
	// fmadds f8,f21,f13,f11
	ctx.f8.f64 = double(float(std::fma(ctx.f21.f64, ctx.f13.f64, ctx.f11.f64)));
	// fmadds f7,f22,f13,f10
	ctx.f7.f64 = double(float(std::fma(ctx.f22.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f6,f23,f13,f9
	ctx.f6.f64 = double(float(std::fma(ctx.f23.f64, ctx.f13.f64, ctx.f9.f64)));
	// fmadds f5,f15,f12,f8
	ctx.f5.f64 = double(float(std::fma(ctx.f15.f64, ctx.f12.f64, ctx.f8.f64)));
	// stfs f5,320(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// fmadds f4,f16,f12,f7
	ctx.f4.f64 = double(float(std::fma(ctx.f16.f64, ctx.f12.f64, ctx.f7.f64)));
	// stfs f4,324(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// fmadds f3,f17,f12,f6
	ctx.f3.f64 = double(float(std::fma(ctx.f17.f64, ctx.f12.f64, ctx.f6.f64)));
	// stfs f3,328(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822754E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f2,256(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f0,f2,f29
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f29.f64));
	// lfs f13,264(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f11,f13,f29
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// lfs f1,260(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f6,f8,f17
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f17.f64));
	// fmuls f12,f1,f29
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f29.f64));
	// lfs f10,240(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f8,f20
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f20.f64));
	// lfs f7,248(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f3,f8,f23
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f23.f64));
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lfs f4,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lwz r4,12(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// lfs f9,244(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f9.f64 = double(temp.f32);
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// lfs f2,272(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// lfs f1,276(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f10,f10,f28,f0
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f28.f64, ctx.f0.f64)));
	// lfs f13,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f7,f7,f28,f11
	ctx.f7.f64 = double(float(std::fma(ctx.f7.f64, ctx.f28.f64, ctx.f11.f64)));
	// stfs f31,380(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// fmadds f11,f4,f16,f6
	ctx.f11.f64 = double(float(std::fma(ctx.f4.f64, ctx.f16.f64, ctx.f6.f64)));
	// lfs f8,448(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 448);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f9,f9,f28,f12
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f28.f64, ctx.f12.f64)));
	// lfs f0,452(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 452);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f6,f4,f19,f5
	ctx.f6.f64 = double(float(std::fma(ctx.f4.f64, ctx.f19.f64, ctx.f5.f64)));
	// lfs f12,456(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 456);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f5,f4,f22,f3
	ctx.f5.f64 = double(float(std::fma(ctx.f4.f64, ctx.f22.f64, ctx.f3.f64)));
	// stfs f31,396(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 396, temp.u32);
	// fmadds f4,f2,f30,f10
	ctx.f4.f64 = double(float(std::fma(ctx.f2.f64, ctx.f30.f64, ctx.f10.f64)));
	// stfs f4,368(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// fmadds f2,f14,f30,f7
	ctx.f2.f64 = double(float(std::fma(ctx.f14.f64, ctx.f30.f64, ctx.f7.f64)));
	// stfs f2,376(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// fmadds f3,f1,f30,f9
	ctx.f3.f64 = double(float(std::fma(ctx.f1.f64, ctx.f30.f64, ctx.f9.f64)));
	// stfs f3,372(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// fmadds f1,f13,f15,f11
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f15.f64, ctx.f11.f64)));
	// fmadds f11,f13,f18,f6
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f18.f64, ctx.f6.f64)));
	// fmadds f10,f13,f21,f5
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, ctx.f21.f64, ctx.f5.f64)));
	// fadds f26,f1,f8
	ctx.f26.f64 = double(float(ctx.f1.f64 + ctx.f8.f64));
	// stfs f26,384(r1)
	temp.f32 = float(ctx.f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// fadds f25,f11,f0
	ctx.f25.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f25,388(r1)
	temp.f32 = float(ctx.f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// fadds f24,f10,f12
	ctx.f24.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f24,392(r1)
	temp.f32 = float(ctx.f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// lwz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r7,48(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822755B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f9,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,248(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f9,f14
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f14.f64));
	// lfs f6,264(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f9,f8
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f31,236(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// fmuls f4,f9,f6
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// lfs f3,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,244(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f2.f64 = double(temp.f32);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// lfs f0,276(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f6,f3,f2,f5
	ctx.f6.f64 = double(float(std::fma(ctx.f3.f64, ctx.f2.f64, ctx.f5.f64)));
	// lfs f1,260(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f8,f3,f0,f7
	ctx.f8.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, ctx.f7.f64)));
	// lfs f13,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lfs f12,240(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,272(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,256(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,288(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,296(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 296);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f3,f1,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f3.f64, ctx.f1.f64, ctx.f4.f64)));
	// lfs f3,292(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f3.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f1,f13,f12,f6
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f6.f64)));
	// fmadds f2,f13,f9,f8
	ctx.f2.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, ctx.f8.f64)));
	// fcmpu cr6,f27,f10
	ctx.cr6.compare(ctx.f27.f64, ctx.f10.f64);
	// fmadds f13,f13,f11,f4
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f4.f64)));
	// fadds f0,f1,f7
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f7.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fadds f12,f2,f5
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fadds f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fsubs f0,f26,f0
	ctx.f0.f64 = double(float(ctx.f26.f64 - ctx.f0.f64));
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// fsubs f12,f24,f12
	ctx.f12.f64 = double(float(ctx.f24.f64 - ctx.f12.f64));
	// stfs f12,232(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// fsubs f13,f25,f13
	ctx.f13.f64 = double(float(ctx.f25.f64 - ctx.f13.f64));
	// stfs f13,228(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// ld r3,8(r6)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// ld r4,0(r6)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// std r4,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r4.u64);
	// fmuls f11,f13,f29
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// std r3,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, ctx.r3.u64);
	// fmadds f9,f0,f28,f11
	ctx.f9.f64 = double(float(std::fma(ctx.f0.f64, ctx.f28.f64, ctx.f11.f64)));
	// fmadds f11,f12,f30,f9
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f30.f64, ctx.f9.f64)));
	// bgt cr6,0x822758cc
	if (ctx.cr6.gt) goto loc_822758CC;
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// ble cr6,0x82275768
	if (!ctx.cr6.gt) goto loc_82275768;
	// lfs f9,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f29,f9
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f9.f64));
	// lfs f7,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f30,f7,f8
	ctx.f4.f64 = double(float(std::fma(ctx.f30.f64, ctx.f7.f64, ctx.f8.f64)));
	// fmadds f9,f6,f28,f4
	ctx.f9.f64 = double(float(std::fma(ctx.f6.f64, ctx.f28.f64, ctx.f4.f64)));
	// fcmpu cr6,f9,f5
	ctx.cr6.compare(ctx.f9.f64, ctx.f5.f64);
	// bge cr6,0x822758cc
	if (!ctx.cr6.lt) goto loc_822758CC;
	// stfs f13,340(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// stfs f31,348(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// stfs f0,336(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// fdivs f0,f11,f9
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f9.f64));
	// stfs f12,344(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// lfs f13,0(r26)
	temp.u32 = REX_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lfs f9,0(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,4(r26)
	temp.u32 = REX_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// ld r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// lfs f7,8(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// ld r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// lfs f11,8(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,4(r28)
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,0(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// std r7,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// fsubs f27,f27,f0
	ctx.f27.f64 = double(float(ctx.f27.f64 - ctx.f0.f64));
	// lfs f3,0(r28)
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,8(r28)
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// std r6,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// lfs f4,8(r26)
	temp.u32 = REX_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,4(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// ld r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// fsubs f0,f10,f27
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f27.f64));
	// fmuls f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// ld r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// fmuls f10,f9,f27
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f27.f64));
	// std r5,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r5.u64);
	// fmuls f12,f27,f12
	ctx.f12.f64 = double(float(ctx.f27.f64 * ctx.f12.f64));
	// std r4,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r4.u64);
	// fmuls f9,f27,f7
	ctx.f9.f64 = double(float(ctx.f27.f64 * ctx.f7.f64));
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f11,f0,f8
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmadds f8,f0,f6,f13
	ctx.f8.f64 = double(float(std::fma(ctx.f0.f64, ctx.f6.f64, ctx.f13.f64)));
	// stfs f8,448(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 448, temp.u32);
	// fmadds f6,f0,f5,f12
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f5.f64, ctx.f12.f64)));
	// stfs f6,452(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 452, temp.u32);
	// fmadds f5,f0,f3,f10
	ctx.f5.f64 = double(float(std::fma(ctx.f0.f64, ctx.f3.f64, ctx.f10.f64)));
	// stfs f5,288(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// fmadds f3,f0,f1,f9
	ctx.f3.f64 = double(float(std::fma(ctx.f0.f64, ctx.f1.f64, ctx.f9.f64)));
	// stfs f3,296(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// fmadds f1,f4,f27,f7
	ctx.f1.f64 = double(float(std::fma(ctx.f4.f64, ctx.f27.f64, ctx.f7.f64)));
	// stfs f1,456(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 456, temp.u32);
	// fmadds f0,f2,f27,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f2.f64, ctx.f27.f64, ctx.f11.f64)));
	// stfs f0,292(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 292, temp.u32);
loc_82275768:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// addi r5,r11,304
	ctx.r5.s64 = ctx.r11.s64 + 304;
	// addi r7,r1,384
	ctx.r7.s64 = ctx.r1.s64 + 384;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ld r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// ld r5,0(r8)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// ld r3,8(r9)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r4,304(r11)
	REX_STORE_U64(ctx.r11.u32 + 304, ctx.r4.u64);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r3,312(r11)
	REX_STORE_U64(ctx.r11.u32 + 312, ctx.r3.u64);
	// stb r31,384(r11)
	REX_STORE_U8(ctx.r11.u32 + 384, ctx.r31.u8);
	// ld r4,0(r7)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// stdx r5,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u64);
	// ld r3,8(r7)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// std r8,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// ld r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// ld r8,8(r6)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stdx r4,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u64);
	// std r3,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r3.u64);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r10,11
	ctx.r6.s64 = ctx.r10.s64 + 11;
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stdx r9,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u64);
	// std r8,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, ctx.r8.u64);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// lwz r23,4(r27)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82280638
	ctx.lr = 0x8227580C;
	sub_82280638(ctx, base);
	// ld r11,288(r23)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r23.u32 + 288);
	// ld r10,296(r23)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r23.u32 + 296);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// lfs f25,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f25.f64 = double(temp.f32);
	// lfs f26,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f26.f64 = double(temp.f32);
	// lfs f24,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f24.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// std r11,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r10,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// beq cr6,0x8227585c
	if (ctx.cr6.eq) goto loc_8227585C;
	// lfs f30,184(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f0,f30,f30
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// lfs f29,180(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,176(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f28.f64 = double(temp.f32);
	// lfs f13,192(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f29,f29,f0
	ctx.f12.f64 = double(float(std::fma(ctx.f29.f64, ctx.f29.f64, ctx.f0.f64)));
	// fmadds f11,f28,f28,f12
	ctx.f11.f64 = double(float(std::fma(ctx.f28.f64, ctx.f28.f64, ctx.f12.f64)));
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bgt cr6,0x82275480
	if (ctx.cr6.gt) goto loc_82275480;
loc_8227585C:
	// lfs f9,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
loc_82275868:
	// fmuls f0,f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lwz r31,860(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 860);
	// lfs f13,436(r24)
	temp.u32 = REX_LOAD_U32(ctx.r24.u32 + 436);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r11,r31,144
	ctx.r11.s64 = ctx.r31.s64 + 144;
	// stfs f27,176(r31)
	temp.f32 = float(ctx.f27.f64);
	REX_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// fmadds f12,f9,f9,f0
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f0.f64)));
	// fmadds f0,f10,f10,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f12.f64)));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x822758e0
	if (ctx.cr6.lt) goto loc_822758E0;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f13,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f7,f11,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f7,152(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmuls f9,f12,f9
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// stfs f9,144(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f8,148(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r8,144(r31)
	REX_STORE_U64(ctx.r31.u32 + 144, ctx.r8.u64);
	// std r9,152(r31)
	REX_STORE_U64(ctx.r31.u32 + 152, ctx.r9.u64);
	// b 0x822758fc
	goto loc_822758FC;
loc_822758CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x825e417c
	ctx.lr = 0x822758DC;
	__restfpr_14(ctx, base);
	// b 0x825e3620
	__restgprlr_14(ctx, base);
	return;
loc_822758E0:
	// stfs f31,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// ld r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r9,144(r31)
	REX_STORE_U64(ctx.r31.u32 + 144, ctx.r9.u64);
	// std r8,152(r31)
	REX_STORE_U64(ctx.r31.u32 + 152, ctx.r8.u64);
loc_822758FC:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f26
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,184(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fmadds f8,f12,f25,f13
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, ctx.f25.f64, ctx.f13.f64)));
	// fmadds f7,f11,f24,f8
	ctx.f7.f64 = double(float(std::fma(ctx.f11.f64, ctx.f24.f64, ctx.f8.f64)));
	// fcmpu cr6,f7,f9
	ctx.cr6.compare(ctx.f7.f64, ctx.f9.f64);
	// bge cr6,0x822758cc
	if (!ctx.cr6.lt) goto loc_822758CC;
	// lwz r30,4(r27)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82280638
	ctx.lr = 0x82275930;
	sub_82280638(ctx, base);
	// ld r8,272(r30)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r30.u32 + 272);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// ld r7,280(r30)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r30.u32 + 280);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// addi r9,r31,160
	ctx.r9.s64 = ctx.r31.s64 + 160;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r8,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r7,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
	// ld r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r5,8(r10)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r5,168(r31)
	REX_STORE_U64(ctx.r31.u32 + 168, ctx.r5.u64);
	// std r6,160(r31)
	REX_STORE_U64(ctx.r31.u32 + 160, ctx.r6.u64);
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x825e417c
	ctx.lr = 0x8227596C;
	__restfpr_14(ctx, base);
	// b 0x825e3620
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822BA2D0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12028(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12028);
	// rlwinm r3,r11,9,25,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x7F;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822BA9D8) {
	REX_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r3,12152(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 12152);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822BAF70) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e3600
	ctx.lr = 0x822BAF78;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,3159
	ctx.r11.s64 = ctx.r4.s64 + 3159;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwzx r31,r11,r3
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822bafd4
	if (ctx.cr6.eq) goto loc_822BAFD4;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// subfic r9,r4,239
	ctx.xer.ca = ctx.r4.u32 <= 239;
	ctx.r9.u64 = static_cast<uint64_t>(239) - ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r10,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// lwzx r9,r9,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r28,r10,r11
	ctx.r28.u64 = ctx.r11.u64 - ctx.r10.u64;
	// bl 0x822b7510
	ctx.lr = 0x822BAFD4;
	sub_822B7510(ctx, base);
loc_822BAFD4:
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// stw r28,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r11,12704(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 12704);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stw r11,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825e3650
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822BEEA0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mulli r11,r11,9936
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9936));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,356(r11)
	REX_STORE_U32(ctx.r11.u32 + 356, ctx.r10.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,360(r11)
	REX_STORE_U32(ctx.r11.u32 + 360, ctx.r10.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,364(r11)
	REX_STORE_U32(ctx.r11.u32 + 364, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C0988) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e3608
	ctx.lr = 0x822C0990;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// stw r30,19900(r3)
	REX_STORE_U32(ctx.r3.u32 + 19900, ctx.r30.u32);
	// li r28,2
	ctx.r28.s64 = 2;
	// stw r30,19892(r3)
	REX_STORE_U32(ctx.r3.u32 + 19892, ctx.r30.u32);
loc_822C09AC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bfd08
	ctx.lr = 0x822C09B4;
	sub_822BFD08(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r11,9916(r29)
	REX_STORE_U32(ctx.r29.u32 + 9916, ctx.r11.u32);
	// addi r29,r29,9936
	ctx.r29.s64 = ctx.r29.s64 + 9936;
	// bne 0x822c09ac
	if (!ctx.cr0.eq) goto loc_822C09AC;
	// lwz r3,19896(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 19896);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c09e8
	if (ctx.cr6.eq) goto loc_822C09E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C09E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,19896(r31)
	REX_STORE_U32(ctx.r31.u32 + 19896, ctx.r30.u32);
loc_822C09E8:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,19904(r31)
	REX_STORE_U32(ctx.r31.u32 + 19904, ctx.r30.u32);
	// stw r30,19932(r31)
	REX_STORE_U32(ctx.r31.u32 + 19932, ctx.r30.u32);
	// stw r11,19936(r31)
	REX_STORE_U32(ctx.r31.u32 + 19936, ctx.r11.u32);
	// stw r30,19944(r31)
	REX_STORE_U32(ctx.r31.u32 + 19944, ctx.r30.u32);
	// stw r30,19952(r31)
	REX_STORE_U32(ctx.r31.u32 + 19952, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825e3658
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822C3948) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e360c
	ctx.lr = 0x822C3950;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822c3984
	if (!ctx.cr6.eq) goto loc_822C3984;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822a9d28
	ctx.lr = 0x822C3974;
	sub_822A9D28(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x822c3984
	if (!ctx.cr0.eq) goto loc_822C3984;
loc_822C397C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822c39b8
	goto loc_822C39B8;
loc_822C3984:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822c39c0
	if (ctx.cr6.eq) goto loc_822C39C0;
	// stw r30,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_822C3990:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r3,480
	ctx.r4.s64 = ctx.r3.s64 + 480;
	// bl 0x822cdc88
	ctx.lr = 0x822C39A0;
	sub_822CDC88(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_822C39B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825e365c
	__restgprlr_29(ctx, base);
	return;
loc_822C39C0:
	// lis r4,-23936
	ctx.r4.s64 = -1568669696;
	// li r3,480
	ctx.r3.s64 = 480;
	// bl 0x822a9d28
	ctx.lr = 0x822C39CC;
	sub_822A9D28(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bne 0x822c3990
	if (!ctx.cr0.eq) goto loc_822C3990;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a9dc0
	ctx.lr = 0x822C39E4;
	sub_822A9DC0(ctx, base);
	// b 0x822c397c
	goto loc_822C397C;
}

DEFINE_REX_FUNC(sub_822CB6B0) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// stw r5,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x822cabc8
	sub_822CABC8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822CBA88) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e360c
	ctx.lr = 0x822CBA90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r30,r4,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822cbaf4
	if (!ctx.cr6.gt) goto loc_822CBAF4;
	// bl 0x822cb858
	ctx.lr = 0x822CBAB8;
	sub_822CB858(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822cbaf4
	if (!ctx.cr6.gt) goto loc_822CBAF4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cad78
	ctx.lr = 0x822CBAD8;
	sub_822CAD78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822cbaf4
	if (!ctx.cr0.eq) goto loc_822CBAF4;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x822cbaf8
	if (ctx.cr6.gt) goto loc_822CBAF8;
loc_822CBAF4:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
loc_822CBAF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825e365c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822CE180) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,2309
	ctx.r4.s64 = 2309;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822cba88
	ctx.lr = 0x822CE1A4;
	sub_822CBA88(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r11,r11,6433
	ctx.r11.u64 = ctx.r11.u64 | 6433;
	// li r7,0
	ctx.r7.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r10,256
	ctx.r10.s64 = 256;
	// li r6,6439
	ctx.r6.s64 = 6439;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r31,-2
	ctx.r11.s64 = ctx.r31.s64 + -2;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
loc_822CE1E4:
	// lhz r8,1026(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 1026);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lhz r6,514(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 514);
	// li r5,6437
	ctx.r5.s64 = 6437;
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// rlwinm r8,r8,26,6,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x3FFFFFF;
	// lis r4,-16379
	ctx.r4.s64 = -1073414144;
	// rlwimi r6,r10,10,6,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3FF0000) | (ctx.r6.u64 & 0xFFFFFFFFFC00FFFF);
	// stwu r5,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r7.u32 = ea;
	// ori r5,r4,17664
	ctx.r5.u64 = ctx.r4.u64 | 17664;
	// rlwinm r10,r6,4,2,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0x3FFFFC00;
	// li r6,7
	ctx.r6.s64 = 7;
	// or r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 | ctx.r8.u64;
	// li r4,6437
	ctx.r4.s64 = 6437;
	// stwu r8,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r7.u32 = ea;
	// li r3,-1
	ctx.r3.s64 = -1;
	// li r31,6434
	ctx.r31.s64 = 6434;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stwu r5,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r7.u32 = ea;
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// stwu r4,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r7.u32 = ea;
	// stwu r8,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r7.u32 = ea;
	// stwu r3,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r7.u32 = ea;
	// stwu r31,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r31.u32);
	ctx.r7.u32 = ea;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// bdnz 0x822ce1e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822CE1E4;
	// stw r8,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D4438) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35e8
	ctx.lr = 0x822D4440;
	__savegprlr_20(ctx, base);
	// stwu r1,-3376(r1)
	ea = -3376 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,23556(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 23556);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// stw r11,23556(r3)
	REX_STORE_U32(ctx.r3.u32 + 23556, ctx.r11.u32);
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d4480
	if (ctx.cr0.eq) goto loc_822D4480;
	// bl 0x822d1f58
	ctx.lr = 0x822D4474;
	sub_822D1F58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cb858
	ctx.lr = 0x822D447C;
	sub_822CB858(ctx, base);
	// b 0x822d4768
	goto loc_822D4768;
loc_822D4480:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r11,3
	ctx.r9.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r11,r10,512
	ctx.r11.s64 = ctx.r10.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addis r30,r11,-16384
	ctx.r30.s64 = ctx.r11.s64 + -1073741824;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d4754
	if (!ctx.cr6.eq) goto loc_822D4754;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x822d4754
	if (ctx.cr6.gt) goto loc_822D4754;
	// lwz r26,21892(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 21892);
	// lwz r28,16(r30)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x822d474c
	if (ctx.cr6.gt) goto loc_822D474C;
	// lwz r27,21896(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 21896);
	// lwz r29,20(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x822d474c
	if (ctx.cr6.gt) goto loc_822D474C;
	// addi r24,r7,4096
	ctx.r24.s64 = ctx.r7.s64 + 4096;
	// cmplwi cr6,r24,16384
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 16384, ctx.xer);
	// blt cr6,0x822d44f0
	if (ctx.cr6.lt) goto loc_822D44F0;
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
loc_822D44F0:
	// li r5,52
	ctx.r5.s64 = 52;
	// stw r21,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x825e3710
	ctx.lr = 0x822D4504;
	sub_825E3710(ctx, base);
	// lwz r11,21916(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21916);
	// lwz r10,21912(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21912);
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r31,21960
	ctx.r3.s64 = ctx.r31.s64 + 21960;
	// stw r28,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r11,56
	ctx.r9.s64 = ctx.r11.s64 + 56;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// fmuls f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r7,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
loc_822D457C:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822d459c
	if (!ctx.cr0.eq) goto loc_822D459C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x822d457c
	if (!ctx.cr6.eq) goto loc_822D457C;
loc_822D459C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x822d45c8
	if (ctx.cr0.eq) goto loc_822D45C8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x825e3c00
	ctx.lr = 0x822D45B0;
	sub_825E3C00(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d7020
	ctx.lr = 0x822D45C8;
	sub_822D7020(ctx, base);
loc_822D45C8:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d45e0
	if (ctx.cr0.eq) goto loc_822D45E0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r29,r30,36
	ctx.r29.s64 = ctx.r30.s64 + 36;
	// b 0x822d4608
	goto loc_822D4608;
loc_822D45E0:
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d4600
	if (ctx.cr0.eq) goto loc_822D4600;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// addi r3,r1,1728
	ctx.r3.s64 = ctx.r1.s64 + 1728;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r29,r1,1728
	ctx.r29.s64 = ctx.r1.s64 + 1728;
	// bl 0x822d1ef0
	ctx.lr = 0x822D45FC;
	sub_822D1EF0(ctx, base);
	// b 0x822d4608
	goto loc_822D4608;
loc_822D4600:
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
loc_822D4608:
	// lwz r11,23552(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 23552);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822d4650
	if (!ctx.cr6.eq) goto loc_822D4650;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x822d4688
	if (ctx.cr6.eq) goto loc_822D4688;
	// addi r10,r31,22016
	ctx.r10.s64 = ctx.r31.s64 + 22016;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r8,r29,1536
	ctx.r8.s64 = ctx.r29.s64 + 1536;
loc_822D4628:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822d4648
	if (!ctx.cr0.eq) goto loc_822D4648;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822d4628
	if (!ctx.cr6.eq) goto loc_822D4628;
loc_822D4648:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822d4688
	if (ctx.cr0.eq) goto loc_822D4688;
loc_822D4650:
	// stw r6,23552(r31)
	REX_STORE_U32(ctx.r31.u32 + 23552, ctx.r6.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x822d4674
	if (ctx.cr6.eq) goto loc_822D4674;
	// addi r3,r31,22016
	ctx.r3.s64 = ctx.r31.s64 + 22016;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x825e3c00
	ctx.lr = 0x822D466C;
	sub_825E3C00(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// b 0x822d4678
	goto loc_822D4678;
loc_822D4674:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_822D4678:
	// lis r4,10280
	ctx.r4.s64 = 673710080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,262
	ctx.r4.u64 = ctx.r4.u64 | 262;
	// bl 0x822c6a30
	ctx.lr = 0x822D4688;
	sub_822C6A30(ctx, base);
loc_822D4688:
	// lwz r11,21748(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21748);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r10,21748(r31)
	REX_STORE_U32(ctx.r31.u32 + 21748, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// srawi r29,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 31;
	// lwz r7,16(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x822d3808
	ctx.lr = 0x822D46B4;
	sub_822D3808(ctx, base);
	// lwz r11,21748(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21748);
	// rlwimi r11,r29,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// stw r11,21748(r31)
	REX_STORE_U32(ctx.r31.u32 + 21748, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// clrlwi. r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822d46d4
	if (ctx.cr0.eq) goto loc_822D46D4;
	// li r10,1
	ctx.r10.s64 = 1;
loc_822D46D4:
	// lwz r9,21900(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 21900);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r7,16(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lfs f0,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,20(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r9,r9,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r6,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
	// stw r10,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r9,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// stw r7,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r7.u32);
	// stw r5,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r5.u32);
	// beq 0x822d4714
	if (ctx.cr0.eq) goto loc_822D4714;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// b 0x822d4720
	goto loc_822D4720;
loc_822D4714:
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d472c
	if (ctx.cr0.eq) goto loc_822D472C;
	// addi r4,r1,1728
	ctx.r4.s64 = ctx.r1.s64 + 1728;
loc_822D4720:
	// li r5,1536
	ctx.r5.s64 = 1536;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x825e3c00
	ctx.lr = 0x822D472C;
	sub_825E3C00(ctx, base);
loc_822D472C:
	// cmplwi cr6,r22,1560
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 1560, ctx.xer);
	// li r5,1560
	ctx.r5.s64 = 1560;
	// bgt cr6,0x822d473c
	if (ctx.cr6.gt) goto loc_822D473C;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
loc_822D473C:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x825e3c00
	ctx.lr = 0x822D4748;
	sub_825E3C00(ctx, base);
	// b 0x822d4758
	goto loc_822D4758;
loc_822D474C:
	// li r21,7
	ctx.r21.s64 = 7;
	// b 0x822d4758
	goto loc_822D4758;
loc_822D4754:
	// li r21,6
	ctx.r21.s64 = 6;
loc_822D4758:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,1572
	ctx.r4.s64 = ctx.r30.s64 + 1572;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822cdc88
	ctx.lr = 0x822D4768;
	sub_822CDC88(ctx, base);
loc_822D4768:
	// lwz r11,23556(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 23556);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,23556(r31)
	REX_STORE_U32(ctx.r31.u32 + 23556, ctx.r11.u32);
	// addi r1,r1,3376
	ctx.r1.s64 = ctx.r1.s64 + 3376;
	// b 0x825e3638
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822EF8D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,100(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822ef9ac
	if (!ctx.cr6.lt) goto loc_822EF9AC;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,6000(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6000);
	ctx.f0.f64 = double(temp.f32);
loc_822EF934:
	// lbz r10,7(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lbz r10,6(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lbz r10,5(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,8(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lbzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x822ef934
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822EF934;
loc_822EF9AC:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ef9c8
	if (ctx.cr6.eq) goto loc_822EF9C8;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x824a4ce8
	ctx.lr = 0x822EF9C8;
	sub_824A4CE8(ctx, base);
loc_822EF9C8:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ef9e4
	if (ctx.cr6.eq) goto loc_822EF9E4;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x822e88a0
	ctx.lr = 0x822EF9E4;
	sub_822E88A0(ctx, base);
loc_822EF9E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F2898) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-23104
	ctx.r11.s64 = ctx.r11.s64 + -23104;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822f13b0
	ctx.lr = 0x822F28BC;
	sub_822F13B0(ctx, base);
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f28d0
	if (ctx.cr6.eq) goto loc_822F28D0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x822a9dc0
	ctx.lr = 0x822F28D0;
	sub_822A9DC0(ctx, base);
loc_822F28D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e81e8
	ctx.lr = 0x822F28D8;
	sub_822E81E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F3A48) {
	REX_FUNC_PROLOGUE();
	// lwz r11,628(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 628);
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// b 0x822f3a5c
	goto loc_822F3A5C;
loc_822F3A54:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,92(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 92);
loc_822F3A5C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822f3a54
	if (!ctx.cr6.eq) goto loc_822F3A54;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822f3a74
	if (ctx.cr6.eq) goto loc_822F3A74;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_822F3A74:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822f3a98
	if (ctx.cr6.eq) goto loc_822F3A98;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// bge cr6,0x822f3a94
	if (!ctx.cr6.lt) goto loc_822F3A94;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822F3A94:
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_822F3A98:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F60A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r10,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f617c
	if (ctx.cr6.eq) goto loc_822F617C;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,27268
	ctx.r10.s64 = ctx.r10.s64 + 27268;
loc_822F60E0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x822f6104
	if (ctx.cr0.eq) goto loc_822F6104;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822f60e0
	if (ctx.cr6.eq) goto loc_822F60E0;
loc_822F6104:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822f6150
	if (!ctx.cr0.eq) goto loc_822F6150;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f613c
	if (ctx.cr6.eq) goto loc_822F613C;
	// lwz r11,640(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 640);
	// addi r4,r31,640
	ctx.r4.s64 = ctx.r31.s64 + 640;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x822f613c
	if (!ctx.cr6.eq) goto loc_822F613C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r7,648(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 648);
	// li r5,1504
	ctx.r5.s64 = 1504;
	// addi r6,r11,-20176
	ctx.r6.s64 = ctx.r11.s64 + -20176;
	// b 0x822f6174
	goto loc_822F6174;
loc_822F613C:
	// addi r5,r31,640
	ctx.r5.s64 = ctx.r31.s64 + 640;
	// li r4,1500
	ctx.r4.s64 = 1500;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x822f9d70
	ctx.lr = 0x822F614C;
	sub_822F9D70(ctx, base);
	// b 0x822f617c
	goto loc_822F617C;
loc_822F6150:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ddef0
	ctx.lr = 0x822F6160;
	sub_822DDEF0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,23568
	ctx.r6.s64 = ctx.r11.s64 + 23568;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,640
	ctx.r4.s64 = ctx.r31.s64 + 640;
loc_822F6174:
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x822f9888
	ctx.lr = 0x822F617C;
	sub_822F9888(ctx, base);
loc_822F617C:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FBA70) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35e8
	ctx.lr = 0x822FBA78;
	__savegprlr_20(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// rlwinm. r11,r3,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822fbaa8
	if (ctx.cr0.eq) goto loc_822FBAA8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x822fbcd0
	goto loc_822FBCD0;
loc_822FBAA8:
	// li r23,0
	ctx.r23.s64 = 0;
	// rlwinm. r11,r3,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// beq 0x822fbabc
	if (ctx.cr0.eq) goto loc_822FBABC;
	// li r28,8
	ctx.r28.s64 = 8;
loc_822FBABC:
	// rlwinm. r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822fbac8
	if (ctx.cr0.eq) goto loc_822FBAC8;
	// ori r28,r28,16
	ctx.r28.u64 = ctx.r28.u64 | 16;
loc_822FBAC8:
	// stw r23,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r23,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// bl 0x822f8c28
	ctx.lr = 0x822FBADC;
	sub_822F8C28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822fbcd0
	if (ctx.cr0.lt) goto loc_822FBCD0;
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FBAF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FBB14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x825e3710
	ctx.lr = 0x822FBB20;
	sub_825E3710(ctx, base);
	// stw r23,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822dd4e8
	ctx.lr = 0x822FBB30;
	sub_822DD4E8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x822fbb48
	if (!ctx.cr0.lt) goto loc_822FBB48;
	// lis r11,-30602
	ctx.r11.s64 = -2005532672;
	// ori r11,r11,2905
	ctx.r11.u64 = ctx.r11.u64 | 2905;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822fbc64
	if (!ctx.cr6.eq) goto loc_822FBC64;
loc_822FBB48:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x822fbb90
	if (ctx.cr6.eq) goto loc_822FBB90;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822fbb88
	if (ctx.cr0.eq) goto loc_822FBB88;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// lwz r9,8(r24)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// addi r8,r24,12
	ctx.r8.s64 = ctx.r24.s64 + 12;
	// addi r10,r10,-17888
	ctx.r10.s64 = ctx.r10.s64 + -17888;
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// stw r8,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// stw r10,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r9,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
loc_822FBB88:
	// lwz r31,16(r24)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + 16);
	// b 0x822fbb94
	goto loc_822FBB94;
loc_822FBB90:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_822FBB94:
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r21,120(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FBBAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FBBC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// bl 0x823dfdc0
	ctx.lr = 0x822FBBF8;
	sub_823DFDC0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// blt 0x822fbc6c
	if (ctx.cr0.lt) goto loc_822FBC6C;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x822f8c28
	ctx.lr = 0x822FBC10;
	sub_822F8C28(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x822fbc6c
	if (ctx.cr0.lt) goto loc_822FBC6C;
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r31,116(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FBC30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FBC4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x825e3c00
	ctx.lr = 0x822FBC58;
	sub_825E3C00(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// stw r11,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
loc_822FBC64:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x822fbc94
	if (!ctx.cr6.lt) goto loc_822FBC94;
loc_822FBC6C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x822fbc94
	if (ctx.cr6.eq) goto loc_822FBC94;
	// lwz r3,12(r24)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822fbc94
	if (ctx.cr6.eq) goto loc_822FBC94;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FBC90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r23,12(r24)
	REX_STORE_U32(ctx.r24.u32 + 12, ctx.r23.u32);
loc_822FBC94:
	// lwz r3,120(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822fbcb0
	if (ctx.cr6.eq) goto loc_822FBCB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FBCB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822FBCB0:
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822fbccc
	if (ctx.cr6.eq) goto loc_822FBCCC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FBCCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822FBCCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822FBCD0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x825e3638
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8231BD38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1344(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1344);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231bd60
	if (ctx.cr6.eq) goto loc_8231BD60;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231BD60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8231BD60:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e2ab0
	ctx.lr = 0x8231BD6C;
	sub_825E2AB0(ctx, base);
}

DEFINE_REX_FUNC(sub_8231E818) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e3604
	ctx.lr = 0x8231E820;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,121
	ctx.r10.s64 = 121;
	// lwz r30,420(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 420);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r30,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r30.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r28,28(r8)
	REX_STORE_U32(ctx.r8.u32 + 28, ctx.r28.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8231E860;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r27,97
	ctx.r27.s64 = 97;
loc_8231E864:
	// cmpwi cr6,r30,192
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 192, ctx.xer);
	// bge cr6,0x8231e874
	if (!ctx.cr6.lt) goto loc_8231E874;
loc_8231E86C:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x8231e8e0
	goto loc_8231E8E0;
loc_8231E874:
	// cmpwi cr6,r30,208
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 208, ctx.xer);
	// blt cr6,0x8231e8dc
	if (ctx.cr6.lt) goto loc_8231E8DC;
	// cmpwi cr6,r30,215
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 215, ctx.xer);
	// bgt cr6,0x8231e8dc
	if (ctx.cr6.gt) goto loc_8231E8DC;
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r10,r11,208
	ctx.r10.s64 = ctx.r11.s64 + 208;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8231e8dc
	if (ctx.cr6.eq) goto loc_8231E8DC;
	// addi r11,r28,2
	ctx.r11.s64 = ctx.r28.s64 + 2;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r10,r11,208
	ctx.r10.s64 = ctx.r11.s64 + 208;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8231e8dc
	if (ctx.cr6.eq) goto loc_8231E8DC;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r10,r11,208
	ctx.r10.s64 = ctx.r11.s64 + 208;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8231e86c
	if (ctx.cr6.eq) goto loc_8231E86C;
	// addi r11,r28,-2
	ctx.r11.s64 = ctx.r28.s64 + -2;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r10,r11,208
	ctx.r10.s64 = ctx.r11.s64 + 208;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8231e86c
	if (ctx.cr6.eq) goto loc_8231E86C;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x8231e8e0
	goto loc_8231E8E0;
loc_8231E8DC:
	// li r31,3
	ctx.r31.s64 = 3;
loc_8231E8E0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r27,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r27.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r30,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r30.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r31,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r31.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8231E910;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8231e958
	if (ctx.cr6.eq) goto loc_8231E958;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8231e934
	if (ctx.cr6.eq) goto loc_8231E934;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x8231e864
	if (!ctx.cr6.eq) goto loc_8231E864;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825e3654
	__restgprlr_27(ctx, base);
	return;
loc_8231E934:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8231e1c0
	ctx.lr = 0x8231E93C;
	sub_8231E1C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8231e94c
	if (ctx.cr6.eq) goto loc_8231E94C;
	// lwz r30,420(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 420);
	// b 0x8231e864
	goto loc_8231E864;
loc_8231E94C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825e3654
	__restgprlr_27(ctx, base);
	return;
loc_8231E958:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,420(r29)
	REX_STORE_U32(ctx.r29.u32 + 420, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825e3654
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82323B00) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e3604
	ctx.lr = 0x82323B08;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x825e4130
	ctx.lr = 0x82323B10;
	__savefpr_14(ctx, base);
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// bne cr6,0x82323b2c
	if (!ctx.cr6.eq) goto loc_82323B2C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r31,r11,-30540
	ctx.r31.s64 = ctx.r11.s64 + -30540;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r11,25344
	ctx.r30.s64 = ctx.r11.s64 + 25344;
	// b 0x82323b3c
	goto loc_82323B3C;
loc_82323B2C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r31,r11,25328
	ctx.r31.s64 = ctx.r11.s64 + 25328;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r11,25312
	ctx.r30.s64 = ctx.r11.s64 + 25312;
loc_82323B3C:
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r11,26368
	ctx.r8.s64 = ctx.r11.s64 + 26368;
	// addi r7,r1,-272
	ctx.r7.s64 = ctx.r1.s64 + -272;
	// li r10,16
	ctx.r10.s64 = 16;
	// lwz r29,26368(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 26368);
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// lfs f0,5380(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 5380);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// fmr f26,f0
	ctx.f26.f64 = ctx.f0.f64;
	// lwz r28,8(r8)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// fmr f28,f0
	ctx.f28.f64 = ctx.f0.f64;
	// stw r29,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r29.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r9,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// stw r28,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r28.u32);
	// stw r8,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r8.u32);
	// lfs f31,-264(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -264);
	ctx.f31.f64 = double(temp.f32);
	// lfs f1,-268(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -268);
	ctx.f1.f64 = double(temp.f32);
	// lfs f30,-272(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -272);
	ctx.f30.f64 = double(temp.f32);
loc_82323B98:
	// lfs f11,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f30
	ctx.cr6.compare(ctx.f11.f64, ctx.f30.f64);
	// bge cr6,0x82323ba8
	if (!ctx.cr6.lt) goto loc_82323BA8;
	// fmr f30,f11
	ctx.f30.f64 = ctx.f11.f64;
loc_82323BA8:
	// lfs f12,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f1
	ctx.cr6.compare(ctx.f12.f64, ctx.f1.f64);
	// bge cr6,0x82323bb8
	if (!ctx.cr6.lt) goto loc_82323BB8;
	// fmr f1,f12
	ctx.f1.f64 = ctx.f12.f64;
loc_82323BB8:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bge cr6,0x82323bc8
	if (!ctx.cr6.lt) goto loc_82323BC8;
	// fmr f31,f13
	ctx.f31.f64 = ctx.f13.f64;
loc_82323BC8:
	// fcmpu cr6,f11,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f26.f64);
	// ble cr6,0x82323bd4
	if (!ctx.cr6.gt) goto loc_82323BD4;
	// fmr f26,f11
	ctx.f26.f64 = ctx.f11.f64;
loc_82323BD4:
	// fcmpu cr6,f12,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f29.f64);
	// ble cr6,0x82323be0
	if (!ctx.cr6.gt) goto loc_82323BE0;
	// fmr f29,f12
	ctx.f29.f64 = ctx.f12.f64;
loc_82323BE0:
	// fcmpu cr6,f13,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f28.f64);
	// ble cr6,0x82323bec
	if (!ctx.cr6.gt) goto loc_82323BEC;
	// fmr f28,f13
	ctx.f28.f64 = ctx.f13.f64;
loc_82323BEC:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82323b98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82323B98;
	// fsubs f13,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f12,f28,f31
	ctx.f12.f64 = double(float(ctx.f28.f64 - ctx.f31.f64));
	// fsubs f11,f26,f30
	ctx.f11.f64 = double(float(ctx.f26.f64 - ctx.f30.f64));
	// lfs f10,25308(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 25308);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f13,f13
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f9,f12,f12,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f9.f64)));
	// fmadds f3,f11,f11,f9
	ctx.f3.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f9.f64)));
	// fcmpu cr6,f3,f10
	ctx.cr6.compare(ctx.f3.f64, ctx.f10.f64);
	// blt cr6,0x82323f5c
	if (ctx.cr6.lt) goto loc_82323F5C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fadds f6,f26,f30
	ctx.f6.f64 = double(float(ctx.f26.f64 + ctx.f30.f64));
	// fadds f5,f29,f1
	ctx.f5.f64 = double(float(ctx.f29.f64 + ctx.f1.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fadds f4,f28,f31
	ctx.f4.f64 = double(float(ctx.f28.f64 + ctx.f31.f64));
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r5,-16
	ctx.r11.s64 = ctx.r5.s64 + -16;
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// lfs f10,7024(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 7024);
	ctx.f10.f64 = double(temp.f32);
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// fdivs f2,f10,f3
	ctx.f2.f64 = double(float(ctx.f10.f64 / ctx.f3.f64));
	// lfs f27,5996(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 5996);
	ctx.f27.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// fmuls f6,f6,f27
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f27.f64));
	// fmuls f5,f5,f27
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f27.f64));
	// fmuls f4,f4,f27
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f27.f64));
	// fmuls f11,f2,f11
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmuls f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f12,f2,f12
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
loc_82323C70:
	// lfs f2,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f25,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f25.f64 = double(temp.f32);
	// fsubs f24,f2,f6
	ctx.f24.f64 = double(float(ctx.f2.f64 - ctx.f6.f64));
	// lfsu f2,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f2.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fsubs f25,f25,f5
	ctx.f25.f64 = double(float(ctx.f25.f64 - ctx.f5.f64));
	// fsubs f2,f2,f4
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// fmuls f24,f24,f11
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f11.f64));
	// fmuls f25,f25,f13
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f13.f64));
	// fmuls f2,f2,f12
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fsubs f23,f24,f25
	ctx.f23.f64 = double(float(ctx.f24.f64 - ctx.f25.f64));
	// fadds f22,f25,f24
	ctx.f22.f64 = double(float(ctx.f25.f64 + ctx.f24.f64));
	// fadds f25,f2,f25
	ctx.f25.f64 = double(float(ctx.f2.f64 + ctx.f25.f64));
	// fadds f21,f23,f2
	ctx.f21.f64 = double(float(ctx.f23.f64 + ctx.f2.f64));
	// fsubs f22,f22,f2
	ctx.f22.f64 = double(float(ctx.f22.f64 - ctx.f2.f64));
	// fadds f25,f25,f24
	ctx.f25.f64 = double(float(ctx.f25.f64 + ctx.f24.f64));
	// fsubs f2,f23,f2
	ctx.f2.f64 = double(float(ctx.f23.f64 - ctx.f2.f64));
	// fmadds f8,f21,f21,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f21.f64, ctx.f21.f64, ctx.f8.f64)));
	// fmadds f9,f22,f22,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f22.f64, ctx.f22.f64, ctx.f9.f64)));
	// fmadds f10,f25,f25,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f25.f64, ctx.f25.f64, ctx.f10.f64)));
	// fmadds f7,f2,f2,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f2.f64, ctx.f2.f64, ctx.f7.f64)));
	// bdnz 0x82323c70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82323C70;
	// li r10,3
	ctx.r10.s64 = 3;
	// stfs f7,-260(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -260, temp.u32);
	// stfs f10,-272(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -272, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f9,-268(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -268, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f8,-264(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -264, temp.u32);
	// addi r9,r1,-268
	ctx.r9.s64 = ctx.r1.s64 + -268;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82323CE8:
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// ble cr6,0x82323cfc
	if (!ctx.cr6.gt) goto loc_82323CFC;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82323CFC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82323ce8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82323CE8;
	// rlwinm. r11,r8,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82323d1c
	if (ctx.cr0.eq) goto loc_82323D1C;
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// fmr f29,f13
	ctx.f29.f64 = ctx.f13.f64;
loc_82323D1C:
	// clrlwi. r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82323d30
	if (ctx.cr0.eq) goto loc_82323D30;
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64;
	// fmr f31,f28
	ctx.f31.f64 = ctx.f28.f64;
	// fmr f28,f13
	ctx.f28.f64 = ctx.f13.f64;
loc_82323D30:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f9,25304(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 25304);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,-288(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -288, temp.u32);
	// fcmpu cr6,f3,f9
	ctx.cr6.compare(ctx.f3.f64, ctx.f9.f64);
	// blt cr6,0x82323f5c
	if (ctx.cr6.lt) goto loc_82323F5C;
	// addi r8,r6,-1
	ctx.r8.s64 = ctx.r6.s64 + -1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrldi r11,r8,32
	ctx.r11.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// std r11,-272(r1)
	REX_STORE_U64(ctx.r1.u32 + -272, ctx.r11.u64);
	// lfd f13,-272(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -272);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f24,7264(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 7264);
	ctx.f24.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f23,6008(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6008);
	ctx.f23.f64 = double(temp.f32);
	// frsp f25,f13
	ctx.f25.f64 = double(float(ctx.f13.f64));
	// lfs f22,-30544(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -30544);
	ctx.f22.f64 = double(temp.f32);
	// b 0x82323d80
	goto loc_82323D80;
loc_82323D7C:
	// lfs f9,-288(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -288);
	ctx.f9.f64 = double(temp.f32);
loc_82323D80:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82323dcc
	if (ctx.cr6.eq) goto loc_82323DCC;
	// addi r10,r1,-264
	ctx.r10.s64 = ctx.r1.s64 + -264;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r9,r31,r30
	ctx.r9.u64 = ctx.r30.u64 - ctx.r31.u64;
loc_82323D98:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// lfsx f11,r9,r11
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f1
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmadds f12,f11,f26,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, ctx.f26.f64, ctx.f12.f64)));
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmadds f12,f11,f29,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, ctx.f29.f64, ctx.f10.f64)));
	// stfs f12,12(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fmadds f13,f11,f28,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f28.f64, ctx.f13.f64)));
	// stfsu f13,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82323d98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82323D98;
loc_82323DCC:
	// fsubs f13,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f1.f64));
	// fsubs f12,f28,f31
	ctx.f12.f64 = double(float(ctx.f28.f64 - ctx.f31.f64));
	// fsubs f11,f26,f30
	ctx.f11.f64 = double(float(ctx.f26.f64 - ctx.f30.f64));
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f10,f12,f12,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f10.f64)));
	// fmadds f10,f11,f11,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f10.f64)));
	// fcmpu cr6,f10,f9
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// blt cr6,0x82323f5c
	if (ctx.cr6.lt) goto loc_82323F5C;
	// fdivs f21,f25,f10
	ctx.f21.f64 = double(float(ctx.f25.f64 / ctx.f10.f64));
	// li r10,16
	ctx.r10.s64 = 16;
	// fmr f3,f0
	ctx.f3.f64 = ctx.f0.f64;
	// addi r11,r5,-16
	ctx.r11.s64 = ctx.r5.s64 + -16;
	// fmr f4,f0
	ctx.f4.f64 = ctx.f0.f64;
	// fmr f5,f0
	ctx.f5.f64 = ctx.f0.f64;
	// fmr f6,f0
	ctx.f6.f64 = ctx.f0.f64;
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// fmuls f11,f21,f11
	ctx.f11.f64 = double(float(ctx.f21.f64 * ctx.f11.f64));
	// fmuls f2,f21,f13
	ctx.f2.f64 = double(float(ctx.f21.f64 * ctx.f13.f64));
	// fmuls f12,f21,f12
	ctx.f12.f64 = double(float(ctx.f21.f64 * ctx.f12.f64));
loc_82323E28:
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// lfs f21,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f21.f64 = double(temp.f32);
	// fsubs f21,f21,f31
	ctx.f21.f64 = double(float(ctx.f21.f64 - ctx.f31.f64));
	// lfs f20,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f20.f64 = double(temp.f32);
	// fsubs f20,f20,f30
	ctx.f20.f64 = double(float(ctx.f20.f64 - ctx.f30.f64));
	// fmuls f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fmadds f13,f21,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f21.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmadds f13,f20,f11,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f20.f64, ctx.f11.f64, ctx.f13.f64)));
	// fcmpu cr6,f13,f25
	ctx.cr6.compare(ctx.f13.f64, ctx.f25.f64);
	// blt cr6,0x82323e5c
	if (ctx.cr6.lt) goto loc_82323E5C;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82323e6c
	goto loc_82323E6C;
loc_82323E5C:
	// fadds f13,f13,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f27.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,-272(r1)
	REX_STORE_U64(ctx.r1.u32 + -272, ctx.f13.u64);
	// lwz r10,-268(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
loc_82323E6C:
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f21,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f21.f64 = double(temp.f32);
	// addi r29,r1,-256
	ctx.r29.s64 = ctx.r1.s64 + -256;
	// lfs f20,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f20.f64 = double(temp.f32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsu f13,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// addi r28,r1,-252
	ctx.r28.s64 = ctx.r1.s64 + -252;
	// addi r27,r1,-248
	ctx.r27.s64 = ctx.r1.s64 + -248;
	// lfsx f16,r9,r29
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	ctx.f16.f64 = double(temp.f32);
	// fsubs f21,f16,f21
	ctx.f21.f64 = double(float(ctx.f16.f64 - ctx.f21.f64));
	// lfsx f19,r10,r31
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f19.f64 = double(temp.f32);
	// lfsx f18,r10,r30
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	ctx.f18.f64 = double(temp.f32);
	// fmuls f17,f19,f23
	ctx.f17.f64 = double(float(ctx.f19.f64 * ctx.f23.f64));
	// lfsx f14,r9,r28
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	ctx.f14.f64 = double(temp.f32);
	// fmuls f15,f18,f23
	ctx.f15.f64 = double(float(ctx.f18.f64 * ctx.f23.f64));
	// lfsx f16,r9,r27
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	ctx.f16.f64 = double(temp.f32);
	// fsubs f20,f14,f20
	ctx.f20.f64 = double(float(ctx.f14.f64 - ctx.f20.f64));
	// fsubs f13,f16,f13
	ctx.f13.f64 = double(float(ctx.f16.f64 - ctx.f13.f64));
	// fmadds f10,f19,f17,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f19.f64, ctx.f17.f64, ctx.f10.f64)));
	// fmadds f9,f18,f15,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f18.f64, ctx.f15.f64, ctx.f9.f64)));
	// fmadds f8,f17,f21,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f17.f64, ctx.f21.f64, ctx.f8.f64)));
	// fmadds f7,f17,f20,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f17.f64, ctx.f20.f64, ctx.f7.f64)));
	// fmadds f6,f17,f13,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f17.f64, ctx.f13.f64, ctx.f6.f64)));
	// fmadds f5,f15,f21,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f15.f64, ctx.f21.f64, ctx.f5.f64)));
	// fmadds f4,f15,f20,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f15.f64, ctx.f20.f64, ctx.f4.f64)));
	// fmadds f3,f15,f13,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f15.f64, ctx.f13.f64, ctx.f3.f64)));
	// bdnz 0x82323e28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82323E28;
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x82323ef0
	if (!ctx.cr6.gt) goto loc_82323EF0;
	// fdivs f13,f24,f10
	ctx.f13.f64 = double(float(ctx.f24.f64 / ctx.f10.f64));
	// fmadds f30,f13,f8,f30
	ctx.f30.f64 = double(float(std::fma(ctx.f13.f64, ctx.f8.f64, ctx.f30.f64)));
	// fmadds f1,f13,f7,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, ctx.f1.f64)));
	// fmadds f31,f13,f6,f31
	ctx.f31.f64 = double(float(std::fma(ctx.f13.f64, ctx.f6.f64, ctx.f31.f64)));
loc_82323EF0:
	// fcmpu cr6,f9,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// ble cr6,0x82323f08
	if (!ctx.cr6.gt) goto loc_82323F08;
	// fdivs f13,f24,f9
	ctx.f13.f64 = double(float(ctx.f24.f64 / ctx.f9.f64));
	// fmadds f26,f13,f5,f26
	ctx.f26.f64 = double(float(std::fma(ctx.f13.f64, ctx.f5.f64, ctx.f26.f64)));
	// fmadds f29,f13,f4,f29
	ctx.f29.f64 = double(float(std::fma(ctx.f13.f64, ctx.f4.f64, ctx.f29.f64)));
	// fmadds f28,f13,f3,f28
	ctx.f28.f64 = double(float(std::fma(ctx.f13.f64, ctx.f3.f64, ctx.f28.f64)));
loc_82323F08:
	// fmuls f13,f8,f8
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fcmpu cr6,f13,f22
	ctx.cr6.compare(ctx.f13.f64, ctx.f22.f64);
	// bge cr6,0x82323f50
	if (!ctx.cr6.lt) goto loc_82323F50;
	// fmuls f13,f7,f7
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fcmpu cr6,f13,f22
	ctx.cr6.compare(ctx.f13.f64, ctx.f22.f64);
	// bge cr6,0x82323f50
	if (!ctx.cr6.lt) goto loc_82323F50;
	// fmuls f13,f6,f6
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fcmpu cr6,f13,f22
	ctx.cr6.compare(ctx.f13.f64, ctx.f22.f64);
	// bge cr6,0x82323f50
	if (!ctx.cr6.lt) goto loc_82323F50;
	// fmuls f13,f5,f5
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fcmpu cr6,f13,f22
	ctx.cr6.compare(ctx.f13.f64, ctx.f22.f64);
	// bge cr6,0x82323f50
	if (!ctx.cr6.lt) goto loc_82323F50;
	// fmuls f13,f4,f4
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fcmpu cr6,f13,f22
	ctx.cr6.compare(ctx.f13.f64, ctx.f22.f64);
	// bge cr6,0x82323f50
	if (!ctx.cr6.lt) goto loc_82323F50;
	// fmuls f13,f3,f3
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fcmpu cr6,f13,f22
	ctx.cr6.compare(ctx.f13.f64, ctx.f22.f64);
	// blt cr6,0x82323f5c
	if (ctx.cr6.lt) goto loc_82323F5C;
loc_82323F50:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r7,8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 8, ctx.xer);
	// blt cr6,0x82323d7c
	if (ctx.cr6.lt) goto loc_82323D7C;
loc_82323F5C:
	// stfs f30,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f1,4(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f31,8(r3)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f26,0(r4)
	temp.f32 = float(ctx.f26.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f29,4(r4)
	temp.f32 = float(ctx.f29.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f28,8(r4)
	temp.f32 = float(ctx.f28.f64);
	REX_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x825e417c
	ctx.lr = 0x82323F7C;
	__restfpr_14(ctx, base);
	// b 0x825e3654
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8234CF90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35f8
	ctx.lr = 0x8234CF98;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// lis r10,28720
	ctx.r10.s64 = 1882193920;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r11,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// clrlwi r30,r11,12
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8234d1a8
	if (!ctx.cr6.eq) goto loc_8234D1A8;
	// lwz r29,260(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// li r11,517
	ctx.r11.s64 = 517;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r24,256(r3)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// li r7,2
	ctx.r7.s64 = 2;
	// rlwimi r4,r11,20,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82348ec0
	ctx.lr = 0x8234CFE0;
	sub_82348EC0(ctx, base);
	// lwz r28,88(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8234d1a8
	if (ctx.cr6.eq) goto loc_8234D1A8;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8234d030
	if (ctx.cr6.eq) goto loc_8234D030;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r8,r30,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,16(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8234D008:
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwzx r5,r11,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8234d1a8
	if (!ctx.cr6.eq) goto loc_8234D1A8;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8234d008
	if (ctx.cr6.lt) goto loc_8234D008;
loc_8234D030:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,8(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r30,8(r28)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// add r27,r11,r31
	ctx.r27.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r26,r30,r11
	ctx.r26.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// bl 0x82346940
	ctx.lr = 0x8234D068;
	sub_82346940(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8234d078
	if (!ctx.cr0.eq) goto loc_8234D078;
loc_8234D070:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8234d1ac
	goto loc_8234D1AC;
loc_8234D078:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82346940
	ctx.lr = 0x8234D09C;
	sub_82346940(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8234d070
	if (ctx.cr0.eq) goto loc_8234D070;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82346940
	ctx.lr = 0x8234D0C8;
	sub_82346940(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8234d070
	if (ctx.cr0.eq) goto loc_8234D070;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82346940
	ctx.lr = 0x8234D0F4;
	sub_82346940(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8234d070
	if (ctx.cr0.eq) goto loc_8234D070;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82346940
	ctx.lr = 0x8234D120;
	sub_82346940(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8234d070
	if (ctx.cr0.eq) goto loc_8234D070;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82346940
	ctx.lr = 0x8234D14C;
	sub_82346940(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8234d070
	if (ctx.cr0.eq) goto loc_8234D070;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82346940
	ctx.lr = 0x8234D178;
	sub_82346940(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8234d070
	if (ctx.cr0.eq) goto loc_8234D070;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82346940
	ctx.lr = 0x8234D1A4;
	sub_82346940(ctx, base);
	// b 0x8234d1ac
	goto loc_8234D1AC;
loc_8234D1A8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8234D1AC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x825e3648
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823570F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35d8
	ctx.lr = 0x82357100;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82357124
	if (!ctx.cr0.eq) goto loc_82357124;
	// bl 0x82356de8
	ctx.lr = 0x8235711C;
	sub_82356DE8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82357af8
	if (ctx.cr0.lt) goto loc_82357AF8;
loc_82357124:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r19,4416
	ctx.r19.s64 = 289406976;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82357188
	if (!ctx.cr6.gt) goto loc_82357188;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8235713C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// stw r29,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r29.u32);
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x82357164
	if (ctx.cr6.eq) goto loc_82357164;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82357174
	goto loc_82357174;
loc_82357164:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82343d50
	ctx.lr = 0x8235716C;
	sub_82343D50(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82357af8
	if (ctx.cr0.lt) goto loc_82357AF8;
loc_82357174:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8235713c
	if (ctx.cr6.lt) goto loc_8235713C;
loc_82357188:
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823571f8
	if (ctx.cr0.eq) goto loc_823571F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e030
	ctx.lr = 0x8235719C;
	sub_8235E030(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823571f0
	if (!ctx.cr6.gt) goto loc_823571F0;
	// li r28,0
	ctx.r28.s64 = 0;
loc_823571B0:
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// stw r29,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r29.u32);
	// lwzx r10,r28,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// stw r10,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r10.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823571dc
	if (!ctx.cr6.eq) goto loc_823571DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82341fd8
	ctx.lr = 0x823571DC;
	sub_82341FD8(ctx, base);
loc_823571DC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823571b0
	if (ctx.cr6.lt) goto loc_823571B0;
loc_823571F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362ec0
	ctx.lr = 0x823571F8;
	sub_82362EC0(ctx, base);
loc_823571F8:
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// lis r17,4176
	ctx.r17.s64 = 273678336;
	// lis r16,20480
	ctx.r16.s64 = 1342177280;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r18,28720
	ctx.r18.s64 = 1882193920;
	// lis r22,29792
	ctx.r22.s64 = 1952448512;
	// lis r21,29808
	ctx.r21.s64 = 1953497088;
	// lis r23,29760
	ctx.r23.s64 = 1950351360;
	// lis r20,29776
	ctx.r20.s64 = 1951399936;
	// bne 0x823577b0
	if (!ctx.cr0.eq) goto loc_823577B0;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r26,8192
	ctx.r26.s64 = 536870912;
	// lis r25,8208
	ctx.r25.s64 = 537919488;
	// lis r27,12288
	ctx.r27.s64 = 805306368;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823572c8
	if (!ctx.cr6.gt) goto loc_823572C8;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82357240:
	// stw r29,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r29.u32);
	// lis r10,4112
	ctx.r10.s64 = 269484032;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8235729c
	if (ctx.cr6.eq) goto loc_8235729C;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82357284
	if (ctx.cr6.eq) goto loc_82357284;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82357284
	if (ctx.cr6.eq) goto loc_82357284;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82357284
	if (ctx.cr6.eq) goto loc_82357284;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x823572b4
	goto loc_823572B4;
loc_82357284:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234bb18
	ctx.lr = 0x8235728C;
	sub_8234BB18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340fa0
	ctx.lr = 0x82357298;
	sub_82340FA0(ctx, base);
	// b 0x823572ac
	goto loc_823572AC;
loc_8235729C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234efc8
	ctx.lr = 0x823572A8;
	sub_8234EFC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_823572AC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82357af8
	if (ctx.cr6.lt) goto loc_82357AF8;
loc_823572B4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82357240
	if (ctx.cr6.lt) goto loc_82357240;
loc_823572C8:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82357428
	if (ctx.cr0.eq) goto loc_82357428;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82357428
	if (ctx.cr0.eq) goto loc_82357428;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82357370
	if (!ctx.cr6.gt) goto loc_82357370;
	// li r28,0
	ctx.r28.s64 = 0;
loc_823572F4:
	// stw r29,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r29.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8235731c
	if (ctx.cr6.eq) goto loc_8235731C;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x8235735c
	goto loc_8235735C;
loc_8235731C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82357af8
	if (ctx.cr6.lt) goto loc_82357AF8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82342088
	ctx.lr = 0x82357338;
	sub_82342088(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82357af8
	if (ctx.cr0.lt) goto loc_82357AF8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82342720
	ctx.lr = 0x82357354;
	sub_82342720(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82357af8
	if (ctx.cr0.lt) goto loc_82357AF8;
loc_8235735C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823572f4
	if (ctx.cr6.lt) goto loc_823572F4;
loc_82357370:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82363b08
	ctx.lr = 0x82357378;
	sub_82363B08(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82357af8
	if (ctx.cr0.lt) goto loc_82357AF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340fa0
	ctx.lr = 0x82357388;
	sub_82340FA0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82357428
	if (!ctx.cr6.gt) goto loc_82357428;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8235739C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// stw r29,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r29.u32);
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x823573f8
	if (ctx.cr6.eq) goto loc_823573F8;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x823573d8
	if (ctx.cr6.eq) goto loc_823573D8;
	// lis r10,28848
	ctx.r10.s64 = 1890582528;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823573f8
	if (ctx.cr6.eq) goto loc_823573F8;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82357414
	goto loc_82357414;
loc_823573D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823465b0
	ctx.lr = 0x823573E0;
	sub_823465B0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82357af8
	if (ctx.cr0.lt) goto loc_82357AF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82346690
	ctx.lr = 0x823573F0;
	sub_82346690(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8235740c
	goto loc_8235740C;
loc_823573F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234bb18
	ctx.lr = 0x82357400;
	sub_8234BB18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340fa0
	ctx.lr = 0x8235740C;
	sub_82340FA0(ctx, base);
loc_8235740C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82357af8
	if (ctx.cr6.lt) goto loc_82357AF8;
loc_82357414:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8235739c
	if (ctx.cr6.lt) goto loc_8235739C;
loc_82357428:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r24,8272
	ctx.r24.s64 = 542113792;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82357598
	if (!ctx.cr6.gt) goto loc_82357598;
	// li r26,0
	ctx.r26.s64 = 0;
loc_82357440:
	// stw r27,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r27.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r26,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// beq cr6,0x82357504
	if (ctx.cr6.eq) goto loc_82357504;
	// lis r10,4336
	ctx.r10.s64 = 284164096;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823574f8
	if (ctx.cr6.eq) goto loc_823574F8;
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x823574ec
	if (ctx.cr6.eq) goto loc_823574EC;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x823574d4
	if (ctx.cr6.eq) goto loc_823574D4;
	// lis r10,8256
	ctx.r10.s64 = 541065216;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823574a4
	if (ctx.cr6.eq) goto loc_823574A4;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x82357498
	if (ctx.cr6.eq) goto loc_82357498;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x8235752c
	goto loc_8235752C;
loc_82357498:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82345840
	ctx.lr = 0x823574A0;
	sub_82345840(ctx, base);
	// b 0x82357518
	goto loc_82357518;
loc_823574A4:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823574bc
	if (ctx.cr0.eq) goto loc_823574BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82345cc8
	ctx.lr = 0x823574B8;
	sub_82345CC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_823574BC:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x82357524
	if (!ctx.cr6.eq) goto loc_82357524;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234c930
	ctx.lr = 0x823574D0;
	sub_8234C930(ctx, base);
	// b 0x82357518
	goto loc_82357518;
loc_823574D4:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 202);
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// blt cr6,0x82357520
	if (ctx.cr6.lt) goto loc_82357520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82346470
	ctx.lr = 0x823574E8;
	sub_82346470(ctx, base);
	// b 0x82357518
	goto loc_82357518;
loc_823574EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82343d50
	ctx.lr = 0x823574F4;
	sub_82343D50(ctx, base);
	// b 0x82357518
	goto loc_82357518;
loc_823574F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82342fa8
	ctx.lr = 0x82357500;
	sub_82342FA8(ctx, base);
	// b 0x82357518
	goto loc_82357518;
loc_82357504:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 202);
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// blt cr6,0x82357520
	if (ctx.cr6.lt) goto loc_82357520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82341e40
	ctx.lr = 0x82357518;
	sub_82341E40(ctx, base);
loc_82357518:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82357524
	goto loc_82357524;
loc_82357520:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82357524:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82357af8
	if (ctx.cr6.lt) goto loc_82357AF8;
loc_8235752C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82357584
	if (!ctx.cr6.gt) goto loc_82357584;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82357544:
	// stw r28,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r28.u32);
	// lis r11,28672
	ctx.r11.s64 = 1879048192;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r10,r29,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// stw r10,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r10.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82357570
	if (!ctx.cr6.eq) goto loc_82357570;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234f028
	ctx.lr = 0x82357570;
	sub_8234F028(ctx, base);
loc_82357570:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82357544
	if (ctx.cr6.lt) goto loc_82357544;
loc_82357584:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82357440
	if (ctx.cr6.lt) goto loc_82357440;
loc_82357598:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82363b08
	ctx.lr = 0x823575A0;
	sub_82363B08(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82357af8
	if (ctx.cr0.lt) goto loc_82357AF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340fa0
	ctx.lr = 0x823575B0;
	sub_82340FA0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r25,29520
	ctx.r25.s64 = 1934622720;
	// lis r26,29536
	ctx.r26.s64 = 1935671296;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823576ac
	if (!ctx.cr6.gt) goto loc_823576AC;
	// li r28,0
	ctx.r28.s64 = 0;
loc_823575CC:
	// stw r29,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r29.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x82357684
	if (ctx.cr6.eq) goto loc_82357684;
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r16.u32, ctx.xer);
	// beq cr6,0x8235766c
	if (ctx.cr6.eq) goto loc_8235766C;
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// beq cr6,0x8235765c
	if (ctx.cr6.eq) goto loc_8235765C;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82357640
	if (ctx.cr6.eq) goto loc_82357640;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82357640
	if (ctx.cr6.eq) goto loc_82357640;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x82357624
	if (ctx.cr6.eq) goto loc_82357624;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x82357624
	if (ctx.cr6.eq) goto loc_82357624;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82357698
	goto loc_82357698;
loc_82357624:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82345270
	ctx.lr = 0x8235762C;
	sub_82345270(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82357af8
	if (ctx.cr0.lt) goto loc_82357AF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82345410
	ctx.lr = 0x8235763C;
	sub_82345410(ctx, base);
	// b 0x8235768c
	goto loc_8235768C;
loc_82357640:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82343780
	ctx.lr = 0x82357648;
	sub_82343780(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82357af8
	if (ctx.cr0.lt) goto loc_82357AF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82343920
	ctx.lr = 0x82357658;
	sub_82343920(ctx, base);
	// b 0x8235768c
	goto loc_8235768C;
loc_8235765C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82346d38
	ctx.lr = 0x82357668;
	sub_82346D38(ctx, base);
	// b 0x8235768c
	goto loc_8235768C;
loc_8235766C:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82357690
	if (ctx.cr0.eq) goto loc_82357690;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82346000
	ctx.lr = 0x82357680;
	sub_82346000(ctx, base);
	// b 0x8235768c
	goto loc_8235768C;
loc_82357684:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823459e0
	ctx.lr = 0x8235768C;
	sub_823459E0(ctx, base);
loc_8235768C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82357690:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82357af8
	if (ctx.cr6.lt) goto loc_82357AF8;
loc_82357698:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823575cc
	if (ctx.cr6.lt) goto loc_823575CC;
loc_823576AC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r27,29552
	ctx.r27.s64 = 1936719872;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82357758
	if (!ctx.cr6.gt) goto loc_82357758;
	// li r28,0
	ctx.r28.s64 = 0;
loc_823576C4:
	// stw r29,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r29.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bgt cr6,0x82357718
	if (ctx.cr6.gt) goto loc_82357718;
	// beq cr6,0x82357730
	if (ctx.cr6.eq) goto loc_82357730;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x8235770c
	if (ctx.cr6.eq) goto loc_8235770C;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x8235770c
	if (ctx.cr6.eq) goto loc_8235770C;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8235770c
	if (ctx.cr6.eq) goto loc_8235770C;
	// lis r10,29568
	ctx.r10.s64 = 1937768448;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82357744
	if (!ctx.cr6.eq) goto loc_82357744;
loc_8235770C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82343ac0
	ctx.lr = 0x82357714;
	sub_82343AC0(ctx, base);
	// b 0x82357738
	goto loc_82357738;
loc_82357718:
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// beq cr6,0x82357730
	if (ctx.cr6.eq) goto loc_82357730;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x82357730
	if (ctx.cr6.eq) goto loc_82357730;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x82357744
	if (!ctx.cr6.eq) goto loc_82357744;
loc_82357730:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823455b0
	ctx.lr = 0x82357738;
	sub_823455B0(ctx, base);
loc_82357738:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82357af8
	if (ctx.cr6.lt) goto loc_82357AF8;
loc_82357744:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823576c4
	if (ctx.cr6.lt) goto loc_823576C4;
loc_82357758:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823577b0
	if (!ctx.cr6.gt) goto loc_823577B0;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8235776C:
	// stw r29,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r29.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8235779c
	if (!ctx.cr6.eq) goto loc_8235779C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82343650
	ctx.lr = 0x82357794;
	sub_82343650(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82357af8
	if (ctx.cr0.lt) goto loc_82357AF8;
loc_8235779C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8235776c
	if (ctx.cr6.lt) goto loc_8235776C;
loc_823577B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340fa0
	ctx.lr = 0x823577B8;
	sub_82340FA0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82357828
	if (!ctx.cr6.gt) goto loc_82357828;
	// li r28,0
	ctx.r28.s64 = 0;
loc_823577CC:
	// stw r29,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r29.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x823577f4
	if (ctx.cr6.eq) goto loc_823577F4;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x82357814
	if (!ctx.cr6.eq) goto loc_82357814;
loc_823577F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82345270
	ctx.lr = 0x823577FC;
	sub_82345270(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82357af8
	if (ctx.cr0.lt) goto loc_82357AF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82345410
	ctx.lr = 0x8235780C;
	sub_82345410(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82357af8
	if (ctx.cr0.lt) goto loc_82357AF8;
loc_82357814:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823577cc
	if (ctx.cr6.lt) goto loc_823577CC;
loc_82357828:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82357890
	if (!ctx.cr6.gt) goto loc_82357890;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8235783C:
	// stw r30,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x82357874
	if (ctx.cr6.eq) goto loc_82357874;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// beq cr6,0x82357874
	if (ctx.cr6.eq) goto loc_82357874;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x82357874
	if (ctx.cr6.eq) goto loc_82357874;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x8235787c
	if (!ctx.cr6.eq) goto loc_8235787C;
loc_82357874:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823455b0
	ctx.lr = 0x8235787C;
	sub_823455B0(ctx, base);
loc_8235787C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8235783c
	if (ctx.cr6.lt) goto loc_8235783C;
loc_82357890:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r27,8336
	ctx.r27.s64 = 546308096;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823578ec
	if (!ctx.cr6.gt) goto loc_823578EC;
	// li r28,0
	ctx.r28.s64 = 0;
loc_823578A8:
	// stw r29,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r29.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x823578d8
	if (!ctx.cr6.eq) goto loc_823578D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82344868
	ctx.lr = 0x823578D0;
	sub_82344868(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82357af8
	if (ctx.cr0.lt) goto loc_82357AF8;
loc_823578D8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823578a8
	if (ctx.cr6.lt) goto loc_823578A8;
loc_823578EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340fa0
	ctx.lr = 0x823578F4;
	sub_82340FA0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8235794c
	if (!ctx.cr6.gt) goto loc_8235794C;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82357908:
	// stw r29,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r29.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82357938
	if (!ctx.cr6.eq) goto loc_82357938;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82344208
	ctx.lr = 0x82357930;
	sub_82344208(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82357af8
	if (ctx.cr0.lt) goto loc_82357AF8;
loc_82357938:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82357908
	if (ctx.cr6.lt) goto loc_82357908;
loc_8235794C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823579a4
	if (!ctx.cr6.gt) goto loc_823579A4;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82357960:
	// stw r29,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r29.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// bne cr6,0x82357990
	if (!ctx.cr6.eq) goto loc_82357990;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82341168
	ctx.lr = 0x82357988;
	sub_82341168(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82357af8
	if (ctx.cr0.lt) goto loc_82357AF8;
loc_82357990:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82357960
	if (ctx.cr6.lt) goto loc_82357960;
loc_823579A4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82357a00
	if (!ctx.cr6.gt) goto loc_82357A00;
	// li r28,0
	ctx.r28.s64 = 0;
loc_823579B8:
	// stw r29,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r29.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x823579ec
	if (!ctx.cr6.eq) goto loc_823579EC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82346d38
	ctx.lr = 0x823579E4;
	sub_82346D38(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82357af8
	if (ctx.cr0.lt) goto loc_82357AF8;
loc_823579EC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823579b8
	if (ctx.cr6.lt) goto loc_823579B8;
loc_82357A00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340fa0
	ctx.lr = 0x82357A08;
	sub_82340FA0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82357aa4
	if (!ctx.cr6.gt) goto loc_82357AA4;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82357A1C:
	// stw r29,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r29.u32);
	// lis r10,4144
	ctx.r10.s64 = 271581184;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82357a7c
	if (ctx.cr6.eq) goto loc_82357A7C;
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// beq cr6,0x82357a7c
	if (ctx.cr6.eq) goto loc_82357A7C;
	// lis r10,4192
	ctx.r10.s64 = 274726912;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82357a7c
	if (ctx.cr6.eq) goto loc_82357A7C;
	// lis r10,4208
	ctx.r10.s64 = 275775488;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82357a7c
	if (ctx.cr6.eq) goto loc_82357A7C;
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r16.u32, ctx.xer);
	// beq cr6,0x82357a7c
	if (ctx.cr6.eq) goto loc_82357A7C;
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x82357a90
	if (!ctx.cr6.eq) goto loc_82357A90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234cf90
	ctx.lr = 0x82357A78;
	sub_8234CF90(ctx, base);
	// b 0x82357a84
	goto loc_82357A84;
loc_82357A7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82342ba0
	ctx.lr = 0x82357A84;
	sub_82342BA0(ctx, base);
loc_82357A84:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82357af8
	if (ctx.cr6.lt) goto loc_82357AF8;
loc_82357A90:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82357a1c
	if (ctx.cr6.lt) goto loc_82357A1C;
loc_82357AA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340fa0
	ctx.lr = 0x82357AAC;
	sub_82340FA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82363b08
	ctx.lr = 0x82357AB4;
	sub_82363B08(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82357af8
	if (ctx.cr0.lt) goto loc_82357AF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82364208
	ctx.lr = 0x82357AC4;
	sub_82364208(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82357af8
	if (ctx.cr0.lt) goto loc_82357AF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e700
	ctx.lr = 0x82357AD4;
	sub_8235E700(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82357af8
	if (ctx.cr0.lt) goto loc_82357AF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82366c50
	ctx.lr = 0x82357AE4;
	sub_82366C50(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82357af8
	if (ctx.cr0.lt) goto loc_82357AF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340fa0
	ctx.lr = 0x82357AF4;
	sub_82340FA0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_82357AF8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x825e3628
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823A93C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e3608
	ctx.lr = 0x823A93C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1368(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1368);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823a944c
	if (!ctx.cr0.eq) goto loc_823A944C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-22908
	ctx.r4.s64 = ctx.r11.s64 + -22908;
	// bl 0x8231bd38
	ctx.lr = 0x823A93F0;
	sub_8231BD38(ctx, base);
loc_823A93F0:
	// lbz r11,1558(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 1558);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x823a94d0
	if (!ctx.cr6.eq) goto loc_823A94D0;
	// lwz r11,1368(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1368);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823a9418
	if (!ctx.cr0.eq) goto loc_823A9418;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-22936
	ctx.r4.s64 = ctx.r11.s64 + -22936;
	// bl 0x8231bd70
	ctx.lr = 0x823A9418;
	sub_8231BD70(ctx, base);
loc_823A9418:
	// lhz r11,1544(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 1544);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a94c4
	if (ctx.cr6.gt) goto loc_823A94C4;
	// cmplwi cr6,r30,256
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 256, ctx.xer);
	// bgt cr6,0x823a94c4
	if (ctx.cr6.gt) goto loc_823A94C4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x823a9480
	if (!ctx.cr6.eq) goto loc_823A9480;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-22960
	ctx.r4.s64 = ctx.r11.s64 + -22960;
	// bl 0x8231bd70
	ctx.lr = 0x823A9444;
	sub_8231BD70(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823a95e4
	goto loc_823A95E4;
loc_823A944C:
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823a9460
	if (ctx.cr0.eq) goto loc_823A9460;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-22984
	ctx.r4.s64 = ctx.r11.s64 + -22984;
	// b 0x823a95d8
	goto loc_823A95D8;
loc_823A9460:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823a93f0
	if (ctx.cr6.eq) goto loc_823A93F0;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823a93f0
	if (ctx.cr0.eq) goto loc_823A93F0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-23008
	ctx.r4.s64 = ctx.r11.s64 + -23008;
	// b 0x823a95d8
	goto loc_823A95D8;
loc_823A9480:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823a0980
	ctx.lr = 0x823A9488;
	sub_823A0980(ctx, base);
	// lwz r11,1372(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1372);
	// stw r3,1628(r31)
	REX_STORE_U32(ctx.r31.u32 + 1628, ctx.r3.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,1372(r31)
	REX_STORE_U32(ctx.r31.u32 + 1372, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823236f0
	ctx.lr = 0x823A94AC;
	sub_823236F0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231bf50
	ctx.lr = 0x823A94BC;
	sub_8231BF50(ctx, base);
	// sth r30,1546(r31)
	REX_STORE_U16(ctx.r31.u32 + 1546, ctx.r30.u16);
	// b 0x823a95a0
	goto loc_823A95A0;
loc_823A94C4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-23036
	ctx.r4.s64 = ctx.r11.s64 + -23036;
	// b 0x823a95d8
	goto loc_823A95D8;
loc_823A94D0:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x823a9554
	if (!ctx.cr6.eq) goto loc_823A9554;
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 6, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823a94f0
	if (ctx.cr6.eq) goto loc_823A94F0;
loc_823A94E4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-23036
	ctx.r4.s64 = ctx.r11.s64 + -23036;
	// b 0x823a95dc
	goto loc_823A95DC;
loc_823A94F0:
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823236f0
	ctx.lr = 0x823A94FC;
	sub_823236F0(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231bf50
	ctx.lr = 0x823A950C;
	sub_8231BF50(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r9,82(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// sth r11,1546(r31)
	REX_STORE_U16(ctx.r31.u32 + 1546, ctx.r11.u16);
	// lbz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// rotlwi r8,r9,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// rotlwi r6,r7,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r9,83(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// rotlwi r10,r11,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,85(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 85);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// sth r11,1634(r31)
	REX_STORE_U16(ctx.r31.u32 + 1634, ctx.r11.u16);
	// sth r10,1636(r31)
	REX_STORE_U16(ctx.r31.u32 + 1636, ctx.r10.u16);
	// sth r9,1638(r31)
	REX_STORE_U16(ctx.r31.u32 + 1638, ctx.r9.u16);
	// b 0x823a95a0
	goto loc_823A95A0;
loc_823A9554:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a95d0
	if (!ctx.cr6.eq) goto loc_823A95D0;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x823a94e4
	if (!ctx.cr6.eq) goto loc_823A94E4;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x823236f0
	ctx.lr = 0x823A9574;
	sub_823236F0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231bf50
	ctx.lr = 0x823A9584;
	sub_8231BF50(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r9,89(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 89);
	// sth r11,1546(r31)
	REX_STORE_U16(ctx.r31.u32 + 1546, ctx.r11.u16);
	// lbz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 88);
	// rotlwi r10,r11,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r11,1640(r31)
	REX_STORE_U16(ctx.r31.u32 + 1640, ctx.r11.u16);
loc_823A95A0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a8ab8
	ctx.lr = 0x823A95AC;
	sub_823A8AB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823a95ec
	if (!ctx.cr0.eq) goto loc_823A95EC;
	// addi r7,r31,1632
	ctx.r7.s64 = ctx.r31.s64 + 1632;
	// lhz r6,1546(r31)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 1546);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,1628(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1628);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82320a58
	ctx.lr = 0x823A95CC;
	sub_82320A58(ctx, base);
	// b 0x823a95ec
	goto loc_823A95EC;
loc_823A95D0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-23080
	ctx.r4.s64 = ctx.r11.s64 + -23080;
loc_823A95D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823A95DC:
	// bl 0x8231bd70
	ctx.lr = 0x823A95E0;
	sub_8231BD70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823A95E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a8ab8
	ctx.lr = 0x823A95EC;
	sub_823A8AB8(ctx, base);
loc_823A95EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825e3658
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823B4530) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35f0
	ctx.lr = 0x823B4538;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,372(r3)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 372);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823b3a40
	ctx.lr = 0x823B454C;
	sub_823B3A40(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,324(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 324);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,252(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 252);
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// rlwinm r22,r7,27,31,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// ble cr6,0x823b4618
	if (!ctx.cr6.gt) goto loc_823B4618;
	// addi r25,r31,256
	ctx.r25.s64 = ctx.r31.s64 + 256;
	// li r24,1
	ctx.r24.s64 = 1;
loc_823B4580:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x823b45a0
	if (ctx.cr6.eq) goto loc_823B45A0;
	// lwz r10,332(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823b4604
	if (!ctx.cr6.eq) goto loc_823B4604;
	// lwz r29,20(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x823b45a4
	goto loc_823B45A4;
loc_823B45A0:
	// lwz r29,24(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
loc_823B45A4:
	// rlwinm r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r28,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823b4604
	if (!ctx.cr6.eq) goto loc_823B4604;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r11,r29,22
	ctx.r11.s64 = ctx.r29.s64 + 22;
	// bne cr6,0x823b45c8
	if (!ctx.cr6.eq) goto loc_823B45C8;
	// addi r11,r29,26
	ctx.r11.s64 = ctx.r29.s64 + 26;
loc_823B45C8:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b45e8
	if (!ctx.cr6.eq) goto loc_823B45E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a2698
	ctx.lr = 0x823B45E4;
	sub_823A2698(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_823B45E8:
	// addi r11,r29,23
	ctx.r11.s64 = ctx.r29.s64 + 23;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r26
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// bl 0x823b2d00
	ctx.lr = 0x823B4600;
	sub_823B2D00(ctx, base);
	// stwx r24,r28,r27
	REX_STORE_U32(ctx.r28.u32 + ctx.r27.u32, ctx.r24.u32);
loc_823B4604:
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 252);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823b4580
	if (ctx.cr6.lt) goto loc_823B4580;
loc_823B4618:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x825e3640
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823BA808) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e3608
	ctx.lr = 0x823BA810;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,40(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823BA838;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x823ba848
	if (!ctx.cr0.eq) goto loc_823BA848;
loc_823BA840:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823ba8e8
	goto loc_823BA8E8;
loc_823BA848:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// li r5,1440
	ctx.r5.s64 = 1440;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823BA860;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// bne 0x823ba884
	if (!ctx.cr0.eq) goto loc_823BA884;
loc_823BA870:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823BA880;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823ba840
	goto loc_823BA840;
loc_823BA884:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823BA898;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x823ba8c0
	if (!ctx.cr0.eq) goto loc_823BA8C0;
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823BA8B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// b 0x823ba870
	goto loc_823BA870;
loc_823BA8C0:
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// stw r28,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r28.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ba740
	ctx.lr = 0x823BA8E4;
	sub_823BA740(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823BA8E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825e3658
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823C2388) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35d0
	ctx.lr = 0x823C2390;
	__savegprlr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// stw r4,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r4.u32);
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// stw r6,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r6.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// li r14,0
	ctx.r14.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823c23d0
	if (!ctx.cr6.eq) goto loc_823C23D0;
	// stw r7,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// addi r28,r1,112
	ctx.r28.s64 = ctx.r1.s64 + 112;
	// stw r8,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// stw r14,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r14.u32);
	// stw r14,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
loc_823C23D0:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,12(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r6,4(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// subf r17,r10,r11
	ctx.r17.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r25,r6,r9
	ctx.r25.u64 = ctx.r9.u64 - ctx.r6.u64;
	// stw r17,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r17.u32);
	// stw r25,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// bne cr6,0x823c2404
	if (!ctx.cr6.eq) goto loc_823C2404;
	// stw r14,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r14.u32);
	// addi r20,r1,104
	ctx.r20.s64 = ctx.r1.s64 + 104;
	// stw r14,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r14.u32);
loc_823C2404:
	// addi r11,r7,31
	ctx.r11.s64 = ctx.r7.s64 + 31;
	// cmplw cr6,r27,r18
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r18.u32, ctx.xer);
	// rlwinm r26,r11,0,0,26
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// bne cr6,0x823c244c
	if (!ctx.cr6.eq) goto loc_823C244C;
	// addi r11,r8,31
	ctx.r11.s64 = ctx.r8.s64 + 31;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r30,r11,0,0,19
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a9d28
	ctx.lr = 0x823C2438;
	sub_822A9D28(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// bl 0x823c1d88
	ctx.lr = 0x823C2448;
	sub_823C1D88(ctx, base);
	// b 0x823c2450
	goto loc_823C2450;
loc_823C244C:
	// mr r19,r27
	ctx.r19.u64 = ctx.r27.u64;
loc_823C2450:
	// rlwinm r10,r31,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r9,r31,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0xFFFFFFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// rlwinm r7,r31,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r6,r9,3
	ctx.r6.s64 = ctx.r9.s64 + 3;
	// srw r9,r7,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// slw r8,r8,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// add r5,r11,r17
	ctx.r5.u64 = ctx.r11.u64 + ctx.r17.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// andc r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r6.u64;
	// add r29,r9,r10
	ctx.r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// andc r10,r5,r8
	ctx.r10.u64 = ctx.r5.u64 & ~ctx.r8.u64;
	// subf r15,r11,r7
	ctx.r15.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subf r16,r11,r10
	ctx.r16.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r30,r29,6
	ctx.r30.s64 = ctx.r29.s64 + 6;
	// cmplw cr6,r15,r17
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r17.u32, ctx.xer);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// bgt cr6,0x823c24b0
	if (ctx.cr6.gt) goto loc_823C24B0;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_823C24B0:
	// slw r11,r11,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r29.u8 & 0x3F));
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823c273c
	if (ctx.cr6.eq) goto loc_823C273C;
	// rlwinm r11,r26,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 27) & 0x7FFFFFF;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_823C24C8:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r8,0(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r14,r11
	ctx.r11.u64 = ctx.r14.u64 + ctx.r11.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r10,r8,29
	ctx.r10.u64 = ctx.r8.u32 & 0x7;
	// lwz r7,4(r20)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r20.u32 + 4);
	// rlwinm r27,r11,2,27,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x18;
	// lwz r4,0(r20)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// rlwinm r6,r11,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r3,316(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// add r31,r10,r27
	ctx.r31.u64 = ctx.r10.u64 + ctx.r27.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mullw r26,r6,r9
	ctx.r26.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// rlwinm r10,r8,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// slw r9,r31,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r30.u8 & 0x3F));
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// rlwinm r6,r9,26,6,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// slw r10,r10,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r9,r6,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r31,r11,29,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r9,r6,28
	ctx.r9.u64 = ctx.r6.u32 & 0xF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r11,30,30,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x2;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r8,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// slw r24,r31,r30
	ctx.r24.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r23,r11,4,27,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x10;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + ctx.r25.u64;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// rlwinm r22,r11,28,31,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + ctx.r23.u64;
	// rlwinm r11,r9,1,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x6;
	// srawi r9,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 6;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// clrlwi r6,r9,29
	ctx.r6.u64 = ctx.r9.u32 & 0x7;
	// rlwinm r8,r11,3,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x8;
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// add r11,r8,r6
	ctx.r11.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r8,r10,0,0,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFE00;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r14
	ctx.r7.u64 = ctx.r7.u64 + ctx.r14.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r9,r10,26
	ctx.r9.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r21,r7,r3
	ctx.r21.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// slw r10,r4,r29
	ctx.r10.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r29.u8 & 0x3F));
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r21
	ctx.r10.u64 = ctx.r10.u64 + ctx.r21.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r10,r18
	ctx.r3.u64 = ctx.r10.u64 + ctx.r18.u64;
	// add r4,r11,r19
	ctx.r4.u64 = ctx.r11.u64 + ctx.r19.u64;
	// bl 0x825e3c00
	ctx.lr = 0x823C25A4;
	sub_825E3C00(ctx, base);
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
	// cmpw cr6,r15,r16
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x823c2674
	if (!ctx.cr6.lt) goto loc_823C2674;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// slw r17,r11,r29
	ctx.r17.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r29.u8 & 0x3F));
loc_823C25B8:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// lwz r10,0(r20)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r6,r10,r31
	ctx.r6.u64 = ctx.r10.u64 + ctx.r31.u64;
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// slw r9,r9,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r7,r9,26,6,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// slw r10,r10,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
	// clrlwi r9,r10,3
	ctx.r9.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r8,r7,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r10,r7,28
	ctx.r10.u64 = ctx.r7.u32 & 0xF;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + ctx.r25.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x6;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// rlwinm r8,r10,3,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x8;
	// srawi r9,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 6;
	// rlwinm r7,r10,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r10,r9,29
	ctx.r10.u64 = ctx.r9.u32 & 0x7;
	// rlwinm r9,r11,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// slw r11,r6,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r29.u8 & 0x3F));
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r8,r11,r21
	ctx.r8.u64 = ctx.r11.u64 + ctx.r21.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r8,r18
	ctx.r3.u64 = ctx.r8.u64 + ctx.r18.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r11,r19
	ctx.r4.u64 = ctx.r11.u64 + ctx.r19.u64;
	// bl 0x825e3c00
	ctx.lr = 0x823C2660;
	sub_825E3C00(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmpw cr6,r31,r16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r16.s32, ctx.xer);
	// blt cr6,0x823c25b8
	if (ctx.cr6.lt) goto loc_823C25B8;
	// lwz r17,92(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_823C2674:
	// cmplw cr6,r31,r17
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r17.u32, ctx.xer);
	// bge cr6,0x823c2728
	if (!ctx.cr6.lt) goto loc_823C2728;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// subf r6,r31,r17
	ctx.r6.u64 = ctx.r17.u64 - ctx.r31.u64;
	// lwz r10,0(r20)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + ctx.r31.u64;
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// slw r9,r9,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r7,r9,26,6,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// slw r10,r10,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
	// clrlwi r9,r10,3
	ctx.r9.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r8,r7,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r10,r7,28
	ctx.r10.u64 = ctx.r7.u32 & 0xF;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + ctx.r25.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x6;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// rlwinm r9,r10,3,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x8;
	// srawi r8,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 6;
	// rlwinm r7,r10,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r10,r8,29
	ctx.r10.u64 = ctx.r8.u32 & 0x7;
	// rlwinm r8,r11,0,0,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// slw r11,r5,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r29.u8 & 0x3F));
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r18
	ctx.r3.u64 = ctx.r11.u64 + ctx.r18.u64;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// slw r5,r6,r29
	ctx.r5.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r29.u8 & 0x3F));
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r11,r19
	ctx.r4.u64 = ctx.r11.u64 + ctx.r19.u64;
	// bl 0x825e3c00
	ctx.lr = 0x823C2728;
	sub_825E3C00(ctx, base);
loc_823C2728:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// cmplw cr6,r14,r11
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823c24c8
	if (ctx.cr6.lt) goto loc_823C24C8;
	// lwz r27,332(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
loc_823C273C:
	// cmplw cr6,r27,r18
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x823c2750
	if (!ctx.cr6.eq) goto loc_823C2750;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x822a9dc0
	ctx.lr = 0x823C2750;
	sub_822A9DC0(ctx, base);
loc_823C2750:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x825e3620
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823DDF28) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35f8
	ctx.lr = 0x823DDF30;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823de00c
	if (!ctx.cr0.eq) goto loc_823DE00C;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r11,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// andi. r10,r10,24702
	ctx.r10.u64 = ctx.r10.u64 & 24702;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x823de00c
	if (ctx.cr0.eq) goto loc_823DE00C;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r9,r11,4,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x30;
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm r8,r10,4,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xF;
	// rlwinm. r11,r10,20,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r27,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r27.u64);
	// clrlwi r30,r10,20
	ctx.r30.u64 = ctx.r10.u32 & 0xFFF;
	// rlwinm r31,r10,16,20,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFF;
	// or r29,r9,r8
	ctx.r29.u64 = ctx.r9.u64 | ctx.r8.u64;
	// beq 0x823de00c
	if (ctx.cr0.eq) goto loc_823DE00C;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_823DDF90:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822bef70
	ctx.lr = 0x823DDFA0;
	sub_822BEF70(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// clrlwi r4,r31,31
	ctx.r4.u64 = ctx.r31.u32 & 0x1;
	// rlwinm r5,r31,31,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x1;
	// clrlwi r6,r29,31
	ctx.r6.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r29,r29,31,1,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r31,r31,30,2,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x823dc3c0
	ctx.lr = 0x823DDFC0;
	sub_823DC3C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823ddfe4
	if (ctx.cr0.eq) goto loc_823DDFE4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// slw r11,r11,r27
	ctx.r11.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r27.u8 & 0x3F));
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r11,r10,0,16,3
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF000FFFF) | (ctx.r11.u64 & 0xFFF0000);
	// stw r11,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_823DDFE4:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bne 0x823ddf90
	if (!ctx.cr0.eq) goto loc_823DDF90;
	// ld r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r28.u32 + 0);
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// beq cr6,0x823de00c
	if (ctx.cr6.eq) goto loc_823DE00C;
	// addi r4,r24,1
	ctx.r4.s64 = ctx.r24.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823ddc40
	ctx.lr = 0x823DE00C;
	sub_823DDC40(ctx, base);
loc_823DE00C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x825e3648
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823E4720) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35f0
	ctx.lr = 0x823E4728;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// lis r9,0
	ctx.r9.s64 = 0;
	// subfic r11,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r11.u64 = static_cast<uint64_t>(16) - ctx.r10.u64;
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// ori r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 32768;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// lwz r8,276(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// sraw r11,r9,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r11.s64 = ctx.r9.s32 >> temp.u32;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r25,r11,-1
	ctx.r25.s64 = ctx.r11.s64 + -1;
	// neg r24,r11
	ctx.r24.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// beq cr6,0x823e4768
	if (ctx.cr6.eq) goto loc_823E4768;
	// srawi r31,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r10.s32 >> 1;
	// li r28,2
	ctx.r28.s64 = 2;
	// b 0x823e4770
	goto loc_823E4770;
loc_823E4768:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// li r28,1
	ctx.r28.s64 = 1;
loc_823E4770:
	// lhz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 52);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823e4860
	if (ctx.cr0.eq) goto loc_823E4860;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// rlwinm r26,r4,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r5
	ctx.r30.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_823E4790:
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x823e3d40
	ctx.lr = 0x823E47A4;
	sub_823E3D40(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// bne cr6,0x823e47b8
	if (!ctx.cr6.eq) goto loc_823E47B8;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_823E47B8:
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823e47c8
	if (ctx.cr6.eq) goto loc_823E47C8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_823E47C8:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e4800
	if (ctx.cr6.eq) goto loc_823E4800;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x823e4848
	if (!ctx.cr6.gt) goto loc_823E4848;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// addi r9,r10,-2
	ctx.r9.s64 = ctx.r10.s64 + -2;
	// subf r10,r11,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r11.u64;
loc_823E47F0:
	// lwzux r8,r10,r11
	ea = ctx.r10.u32 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x823e47f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E47F0;
	// b 0x823e4848
	goto loc_823E4848;
loc_823E4800:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x823e4848
	if (!ctx.cr6.gt) goto loc_823E4848;
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_823E4814:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x823e4830
	if (!ctx.cr6.gt) goto loc_823E4830;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x823e483c
	goto loc_823E483C;
loc_823E4830:
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x823e483c
	if (!ctx.cr6.lt) goto loc_823E483C;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_823E483C:
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sthu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x823e4814
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E4814;
loc_823E4848:
	// lhz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 52);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// add r30,r26,r30
	ctx.r30.u64 = ctx.r26.u64 + ctx.r30.u64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823e4790
	if (ctx.cr6.lt) goto loc_823E4790;
loc_823E4860:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x825e3640
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823EF738) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35ec
	ctx.lr = 0x823EF740;
	__savegprlr_21(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x823ef774
	if (ctx.cr6.eq) goto loc_823EF774;
	// bl 0x825f3700
	ctx.lr = 0x823EF774;
	sub_825F3700(ctx, base);
loc_823EF774:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823ef788
	if (!ctx.cr6.lt) goto loc_823EF788;
	// bl 0x825f3700
	ctx.lr = 0x823EF788;
	sub_825F3700(ctx, base);
loc_823EF788:
	// lwzu r29,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r29.u64 = REX_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// lwzu r30,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r30.u64 = REX_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r21,r31,4
	ctx.r21.s64 = ctx.r31.s64 + 4;
	// rlwimi r11,r30,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// clrlwi r31,r30,21
	ctx.r31.u64 = ctx.r30.u32 & 0x7FF;
	// rlwinm r11,r11,24,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x823ef818
	if (!ctx.cr6.eq) goto loc_823EF818;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x823ef7d8
	if (ctx.cr6.lt) goto loc_823EF7D8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,5105
	ctx.r5.s64 = 5105;
	// addi r6,r11,6516
	ctx.r6.s64 = ctx.r11.s64 + 6516;
loc_823EF7C0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x823EF7D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x823ef968
	goto loc_823EF968;
loc_823EF7D8:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// rlwinm r4,r29,0,1,4
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x78000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ef3a8
	ctx.lr = 0x823EF7E8;
	sub_823EF3A8(ctx, base);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823ef7fc
	if (!ctx.cr6.lt) goto loc_823EF7FC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823EF7FC:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// lwz r9,12(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// slw r11,r10,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,12(r28)
	REX_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// b 0x823ef960
	goto loc_823EF960;
loc_823EF818:
	// rlwinm r27,r30,0,12,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF0000;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823ef88c
	if (ctx.cr6.eq) goto loc_823EF88C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823ef850
	if (ctx.cr6.eq) goto loc_823EF850;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x823ef83c
	if (ctx.cr6.eq) goto loc_823EF83C;
loc_823EF834:
	// bl 0x825f3700
	ctx.lr = 0x823EF838;
	sub_825F3700(ctx, base);
	// b 0x823ef960
	goto loc_823EF960;
loc_823EF83C:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823ef960
	if (!ctx.cr6.lt) goto loc_823EF960;
	// b 0x823ef834
	goto loc_823EF834;
loc_823EF850:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823ef864
	if (ctx.cr6.lt) goto loc_823EF864;
	// bl 0x825f3700
	ctx.lr = 0x823EF864;
	sub_825F3700(ctx, base);
loc_823EF864:
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// blt cr6,0x823ef870
	if (ctx.cr6.lt) goto loc_823EF870;
	// bl 0x825f3700
	ctx.lr = 0x823EF870;
	sub_825F3700(ctx, base);
loc_823EF870:
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r11,-29348
	ctx.r7.s64 = ctx.r11.s64 + -29348;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// b 0x823ef950
	goto loc_823EF950;
loc_823EF88C:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823ef914
	if (ctx.cr6.lt) goto loc_823EF914;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x823ef8a8
	if (ctx.cr6.lt) goto loc_823EF8A8;
	// bl 0x825f3700
	ctx.lr = 0x823EF8A8;
	sub_825F3700(ctx, base);
loc_823EF8A8:
	// clrlwi r4,r29,28
	ctx.r4.u64 = ctx.r29.u32 & 0xF;
	// rlwinm r6,r30,10,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 10) & 0x1;
	// rlwinm r5,r29,16,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xF;
	// cmpwi cr6,r4,10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10, ctx.xer);
	// bne cr6,0x823ef8c0
	if (!ctx.cr6.eq) goto loc_823EF8C0;
	// li r6,1
	ctx.r6.s64 = 1;
loc_823EF8C0:
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x823ef8f4
	if (!ctx.cr6.eq) goto loc_823EF8F4;
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// blt cr6,0x823ef8f4
	if (ctx.cr6.lt) goto loc_823EF8F4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r5,r11,6400
	ctx.r5.s64 = ctx.r11.s64 + 6400;
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825e5b20
	ctx.lr = 0x823EF8E8;
	sub_825E5B20(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,5106
	ctx.r5.s64 = 5106;
	// b 0x823ef7c0
	goto loc_823EF7C0;
loc_823EF8F4:
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r7,r11,-29332
	ctx.r7.s64 = ctx.r11.s64 + -29332;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ef448
	ctx.lr = 0x823EF910;
	sub_823EF448(ctx, base);
	// b 0x823ef960
	goto loc_823EF960;
loc_823EF914:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823ef928
	if (!ctx.cr6.eq) goto loc_823EF928;
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// addi r30,r11,-29380
	ctx.r30.s64 = ctx.r11.s64 + -29380;
	// b 0x823ef93c
	goto loc_823EF93C;
loc_823EF928:
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// addi r30,r11,-29364
	ctx.r30.s64 = ctx.r11.s64 + -29364;
	// blt cr6,0x823ef93c
	if (ctx.cr6.lt) goto loc_823EF93C;
	// bl 0x825f3700
	ctx.lr = 0x823EF93C;
	sub_825F3700(ctx, base);
loc_823EF93C:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823EF950:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// bl 0x823ef5f8
	ctx.lr = 0x823EF960;
	sub_823EF5F8(ctx, base);
loc_823EF960:
	// stw r21,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r21.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EF968:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x825e363c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823FCA90) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823fcaa4
	if (!ctx.cr0.eq) goto loc_823FCAA4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823FCAA4:
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x823fcac4
	if (ctx.cr6.eq) goto loc_823FCAC4;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// beq cr6,0x823fcac4
	if (ctx.cr6.eq) goto loc_823FCAC4;
	// cmplwi cr6,r11,56
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x823fcac8
	if (!ctx.cr6.eq) goto loc_823FCAC8;
loc_823FCAC4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823FCAC8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823FD178) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,84
	ctx.r4.s64 = 84;
	// bl 0x823fcdc0
	ctx.lr = 0x823FD1A0;
	sub_823FCDC0(ctx, base);
	// addi r11,r31,-32
	ctx.r11.s64 = ctx.r31.s64 + -32;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823FE740) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e3608
	ctx.lr = 0x823FE748;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823fe76c
	if (!ctx.cr0.eq) goto loc_823FE76C;
loc_823FE764:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823fe824
	goto loc_823FE824;
loc_823FE76C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x824ccc98
	ctx.lr = 0x823FE77C;
	sub_824CCC98(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq 0x823fe820
	if (ctx.cr0.eq) goto loc_823FE820;
	// li r31,0
	ctx.r31.s64 = 0;
loc_823FE794:
	// rlwinm r10,r11,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// srw r10,r10,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r31.u8 & 0x3F));
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// slw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// and. r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 & ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x823fe764
	if (ctx.cr0.eq) goto loc_823FE764;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,30,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1FFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r8,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r7,r10,1,27,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1E;
	// li r6,-1
	ctx.r6.s64 = -1;
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// slw r8,r6,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// srw r4,r9,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r7.u8 & 0x3F));
	// lfdx f1,r10,r6
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r6.u32);
	// bl 0x824c6cd8
	ctx.lr = 0x823FE800;
	sub_824C6CD8(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bne cr6,0x823fe764
	if (!ctx.cr6.eq) goto loc_823FE764;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// rlwinm r10,r11,7,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823fe794
	if (ctx.cr6.lt) goto loc_823FE794;
loc_823FE820:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823FE824:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x825e3658
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82408038) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e360c
	ctx.lr = 0x82408040;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82407ae8
	ctx.lr = 0x82408050;
	sub_82407AE8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82408064
	if (!ctx.cr0.eq) goto loc_82408064;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r3,44(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 44);
	// bl 0x823e2770
	ctx.lr = 0x82408064;
	sub_823E2770(ctx, base);
loc_82408064:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82407d68
	ctx.lr = 0x82408070;
	sub_82407D68(ctx, base);
	// lwz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240811c
	if (ctx.cr6.eq) goto loc_8240811C;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15360
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15360, ctx.xer);
	// beq cr6,0x824080d0
	if (ctx.cr6.eq) goto loc_824080D0;
	// lwz r31,4(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
loc_82408090:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824080d0
	if (ctx.cr6.eq) goto loc_824080D0;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824080c8
	if (ctx.cr6.eq) goto loc_824080C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd1c0
	ctx.lr = 0x824080AC;
	sub_823FD1C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824080c8
	if (ctx.cr0.eq) goto loc_824080C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82407728
	ctx.lr = 0x824080BC;
	sub_82407728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,52(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 52);
	// bl 0x82407fb0
	ctx.lr = 0x824080C8;
	sub_82407FB0(ctx, base);
loc_824080C8:
	// lwz r31,8(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x82408090
	goto loc_82408090;
loc_824080D0:
	// lwz r31,0(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
loc_824080D4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8240811c
	if (ctx.cr6.eq) goto loc_8240811C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd1c0
	ctx.lr = 0x824080E4;
	sub_823FD1C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82408114
	if (ctx.cr0.eq) goto loc_82408114;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15360
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15360, ctx.xer);
	// beq cr6,0x82408114
	if (ctx.cr6.eq) goto loc_82408114;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82407728
	ctx.lr = 0x82408108;
	sub_82407728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,52(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 52);
	// bl 0x82407f50
	ctx.lr = 0x82408114;
	sub_82407F50(ctx, base);
loc_82408114:
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x824080d4
	goto loc_824080D4;
loc_8240811C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825e365c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82410938) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e3608
	ctx.lr = 0x82410940;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82410878
	ctx.lr = 0x82410954;
	sub_82410878(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwimi r11,r31,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82410338
	ctx.lr = 0x8241096C;
	sub_82410338(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwimi r11,r30,5,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825e3658
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824126B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e3604
	ctx.lr = 0x824126B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x824ca1f0
	ctx.lr = 0x824126E0;
	sub_824CA1F0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq cr6,0x82412704
	if (ctx.cr6.eq) goto loc_82412704;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x824099a0
	ctx.lr = 0x82412700;
	sub_824099A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82412704:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410a40
	ctx.lr = 0x8241270C;
	sub_82410A40(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// beq cr6,0x82412730
	if (ctx.cr6.eq) goto loc_82412730;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,12(r27)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x824099a0
	ctx.lr = 0x8241272C;
	sub_824099A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82412730:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410a40
	ctx.lr = 0x82412738;
	sub_82410A40(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// stw r3,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// rlwimi r10,r11,14,15,17
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1C000) | (ctx.r10.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// beq cr6,0x82412790
	if (ctx.cr6.eq) goto loc_82412790;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r29,-36
	ctx.r10.s64 = ctx.r29.s64 + -36;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_82412790:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825e3654
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8241F4B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35d0
	ctx.lr = 0x8241F4B8;
	__savegprlr_14(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r17,1
	ctx.r17.s64 = 1;
	// stw r5,388(r1)
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,396(r1)
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r6.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r17,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r17.u32);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// blt cr6,0x8242361c
	if (ctx.cr6.lt) goto loc_8242361C;
	// clrlwi r14,r4,24
	ctx.r14.u64 = ctx.r4.u32 & 0xFF;
	// stw r14,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// b 0x8241f4f4
	goto loc_8241F4F4;
loc_8241F4EC:
	// lwz r14,116(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r17,1
	ctx.r17.s64 = 1;
loc_8241F4F4:
	// li r21,0
	ctx.r21.s64 = 0;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// bne cr6,0x8241f818
	if (!ctx.cr6.eq) goto loc_8241F818;
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8241f68c
	if (ctx.cr0.eq) goto loc_8241F68C;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8241f68c
	if (!ctx.cr0.eq) goto loc_8241F68C;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8241f68c
	if (ctx.cr0.eq) goto loc_8241F68C;
loc_8241F524:
	// lwz r11,28(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8241f670
	if (!ctx.cr0.eq) goto loc_8241F670;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8241f670
	if (ctx.cr0.eq) goto loc_8241F670;
loc_8241F53C:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,13312
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13312, ctx.xer);
	// bne cr6,0x8241f654
	if (!ctx.cr6.eq) goto loc_8241F654;
	// rlwinm. r5,r11,31,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8241f654
	if (ctx.cr0.eq) goto loc_8241F654;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8241f570
	if (!ctx.cr6.eq) goto loc_8241F570;
	// rlwinm r11,r11,0,31,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE1;
	// rlwinm r11,r11,0,18,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFE3FFF;
	// stw r11,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// b 0x8241f654
	goto loc_8241F654;
loc_8241F570:
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// lwz r6,44(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 44);
	// li r10,3
	ctx.r10.s64 = 3;
	// andc r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 & ~ctx.r11.u64;
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// li r11,2
	ctx.r11.s64 = 2;
	// subfic r4,r8,31
	ctx.xer.ca = ctx.r8.u32 <= 31;
	ctx.r4.u64 = static_cast<uint64_t>(31) - ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r8,r9,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xFF;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// ori r10,r10,228
	ctx.r10.u64 = ctx.r10.u64 | 228;
loc_8241F5AC:
	// slw r4,r17,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r17.u32 << (ctx.r7.u8 & 0x3F));
	// and. r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8241f5c0
	if (ctx.cr0.eq) goto loc_8241F5C0;
	// srw r4,r8,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// b 0x8241f5c8
	goto loc_8241F5C8;
loc_8241F5C0:
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// srw r4,r10,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r4.u8 & 0x3F));
loc_8241F5C8:
	// li r3,3
	ctx.r3.s64 = 3;
	// clrlwi r4,r4,30
	ctx.r4.u64 = ctx.r4.u32 & 0x3;
	// slw r3,r3,r11
	ctx.r3.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r11.u8 & 0x3F));
	// slw r4,r4,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r11.u8 & 0x3F));
	// andc r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r3.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x8241f5ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241F5AC;
	// lwz r31,12(r6)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8241f630
	if (ctx.cr6.eq) goto loc_8241F630;
	// rlwimi r9,r10,5,19,26
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1FE0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r9,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8241f61c
	if (ctx.cr6.lt) goto loc_8241F61C;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// ble cr6,0x8241f620
	if (!ctx.cr6.gt) goto loc_8241F620;
loc_8241F61C:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_8241F620:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8241f630
	if (ctx.cr0.eq) goto loc_8241F630;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410bf0
	ctx.lr = 0x8241F630;
	sub_82410BF0(ctx, base);
loc_8241F630:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8241f648
	if (!ctx.cr0.eq) goto loc_8241F648;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8244f280
	ctx.lr = 0x8241F648;
	sub_8244F280(ctx, base);
loc_8241F648:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8241F654:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8241f670
	if (!ctx.cr0.eq) goto loc_8241F670;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8241f53c
	if (!ctx.cr6.eq) goto loc_8241F53C;
loc_8241F670:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8241f68c
	if (!ctx.cr0.eq) goto loc_8241F68C;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8241f524
	if (!ctx.cr6.eq) goto loc_8241F524;
loc_8241F68C:
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8241f6a4
	if (ctx.cr0.eq) goto loc_8241F6A4;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// beq 0x8241f6a8
	if (ctx.cr0.eq) goto loc_8241F6A8;
loc_8241F6A4:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_8241F6A8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8241f818
	if (ctx.cr0.eq) goto loc_8241F818;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82409068
	ctx.lr = 0x8241F6B8;
	sub_82409068(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8241f818
	if (!ctx.cr0.eq) goto loc_8241F818;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8241f818
	if (ctx.cr0.eq) goto loc_8241F818;
loc_8241F6D0:
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8241f700
	if (ctx.cr0.eq) goto loc_8241F700;
	// lwz r11,28(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8241f6f4
	if (ctx.cr0.eq) goto loc_8241F6F4;
	// lwz r10,36(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 36);
	// addi r11,r27,32
	ctx.r11.s64 = ctx.r27.s64 + 32;
	// b 0x8241f708
	goto loc_8241F708;
loc_8241F6F4:
	// lwz r10,28(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 28);
	// addi r11,r27,24
	ctx.r11.s64 = ctx.r27.s64 + 24;
	// b 0x8241f708
	goto loc_8241F708;
loc_8241F700:
	// lwz r10,20(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// addi r11,r27,16
	ctx.r11.s64 = ctx.r27.s64 + 16;
loc_8241F708:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// addic r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8241f7f4
	goto loc_8241F7F4;
loc_8241F720:
	// lwz r29,8(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r29,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8241f79c
	if (ctx.cr0.eq) goto loc_8241F79C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82405718
	ctx.lr = 0x8241F734;
	sub_82405718(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8241f790
	if (ctx.cr0.eq) goto loc_8241F790;
	// rlwinm. r11,r29,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x1E;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8241f790
	if (ctx.cr0.eq) goto loc_8241F790;
	// rlwinm. r11,r29,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8241f790
	if (!ctx.cr0.eq) goto loc_8241F790;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
loc_8241F750:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241f778
	if (ctx.cr6.eq) goto loc_8241F778;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241f76c
	if (!ctx.cr0.eq) goto loc_8241F76C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8241f750
	goto loc_8241F750;
loc_8241F76C:
	// rlwinm. r11,r10,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// bne 0x8241f77c
	if (!ctx.cr0.eq) goto loc_8241F77C;
loc_8241F778:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_8241F77C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8241f790
	if (!ctx.cr0.eq) goto loc_8241F790;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8244f280
	ctx.lr = 0x8241F790;
	sub_8244F280(ctx, base);
loc_8241F790:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8241F79C:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8241f7b4
	if (!ctx.cr0.eq) goto loc_8241F7B4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8241f720
	if (!ctx.cr6.eq) goto loc_8241F720;
loc_8241F7B4:
	// addi r10,r27,32
	ctx.r10.s64 = ctx.r27.s64 + 32;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8241f7fc
	if (ctx.cr6.eq) goto loc_8241F7FC;
	// addi r11,r27,24
	ctx.r11.s64 = ctx.r27.s64 + 24;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8241f7e4
	if (ctx.cr6.eq) goto loc_8241F7E4;
	// lwz r9,28(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 28);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241f7e4
	if (!ctx.cr0.eq) goto loc_8241F7E4;
	// lwz r31,4(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x8241f7ec
	goto loc_8241F7EC;
loc_8241F7E4:
	// lwz r31,4(r10)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_8241F7EC:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8241f7fc
	if (!ctx.cr0.eq) goto loc_8241F7FC;
loc_8241F7F4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8241f720
	if (!ctx.cr6.eq) goto loc_8241F720;
loc_8241F7FC:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8241f818
	if (!ctx.cr0.eq) goto loc_8241F818;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8241f6d0
	if (!ctx.cr6.eq) goto loc_8241F6D0;
loc_8241F818:
	// lwz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 116);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,668(r30)
	REX_STORE_U32(ctx.r30.u32 + 668, ctx.r11.u32);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823fd9c8
	ctx.lr = 0x8241F834;
	sub_823FD9C8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r3,708(r30)
	REX_STORE_U32(ctx.r30.u32 + 708, ctx.r3.u32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8241f970
	if (!ctx.cr0.eq) goto loc_8241F970;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8241f970
	if (ctx.cr0.eq) goto loc_8241F970;
loc_8241F850:
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8241f880
	if (ctx.cr0.eq) goto loc_8241F880;
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8241f874
	if (ctx.cr0.eq) goto loc_8241F874;
	// lwz r10,36(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// b 0x8241f888
	goto loc_8241F888;
loc_8241F874:
	// lwz r10,28(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// addi r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 + 24;
	// b 0x8241f888
	goto loc_8241F888;
loc_8241F880:
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
loc_8241F888:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addic r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8241f94c
	goto loc_8241F94C;
loc_8241F8A0:
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r9,r11,9,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8241f8f4
	if (ctx.cr0.eq) goto loc_8241F8F4;
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r6,r11,31,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r9,r9,16,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x7;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8241f8f4
	if (!ctx.cr6.lt) goto loc_8241F8F4;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8241F8D0:
	// and. r3,r8,r6
	ctx.r3.u64 = ctx.r8.u64 & ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8241f8e0
	if (ctx.cr0.eq) goto loc_8241F8E0;
	// lwz r3,708(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 708);
	// stwx r10,r3,r7
	REX_STORE_U32(ctx.r3.u32 + ctx.r7.u32, ctx.r10.u32);
loc_8241F8E0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8241f8d0
	if (ctx.cr6.lt) goto loc_8241F8D0;
loc_8241F8F4:
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8241f90c
	if (!ctx.cr0.eq) goto loc_8241F90C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8241f8a0
	if (!ctx.cr6.eq) goto loc_8241F8A0;
loc_8241F90C:
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8241f954
	if (ctx.cr6.eq) goto loc_8241F954;
	// addi r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 + 24;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8241f93c
	if (ctx.cr6.eq) goto loc_8241F93C;
	// lwz r10,28(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8241f93c
	if (!ctx.cr0.eq) goto loc_8241F93C;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x8241f944
	goto loc_8241F944;
loc_8241F93C:
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
loc_8241F944:
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8241f954
	if (!ctx.cr0.eq) goto loc_8241F954;
loc_8241F94C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8241f8a0
	if (!ctx.cr6.eq) goto loc_8241F8A0;
loc_8241F954:
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8241f970
	if (!ctx.cr0.eq) goto loc_8241F970;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8241f850
	if (!ctx.cr6.eq) goto loc_8241F850;
loc_8241F970:
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 668);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823fd9c8
	ctx.lr = 0x8241F984;
	sub_823FD9C8(ctx, base);
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 668);
	// lwz r4,708(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 708);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// bl 0x825e3c00
	ctx.lr = 0x8241F99C;
	sub_825E3C00(ctx, base);
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 668);
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// addi r19,r15,4
	ctx.r19.s64 = ctx.r15.s64 + 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r10,-15776
	ctx.r6.s64 = ctx.r10.s64 + -15776;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x825e30b8
	ctx.lr = 0x8241F9BC;
	sub_825E30B8(ctx, base);
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 668);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mulli r4,r11,40
	ctx.r4.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// bl 0x823fd9c8
	ctx.lr = 0x8241F9D0;
	sub_823FD9C8(ctx, base);
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 668);
	// stw r3,676(r30)
	REX_STORE_U32(ctx.r30.u32 + 676, ctx.r3.u32);
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8241fa3c
	if (!ctx.cr6.gt) goto loc_8241FA3C;
	// li r31,40
	ctx.r31.s64 = 40;
loc_8241F9E8:
	// lwz r11,676(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 676);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stwx r30,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
	// std r21,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r21.u64);
	// std r21,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r21.u64);
	// std r21,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r21.u64);
	// std r21,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r21.u64);
	// lwz r11,792(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8241fa14
	if (!ctx.cr6.eq) goto loc_8241FA14;
	// li r11,32
	ctx.r11.s64 = 32;
loc_8241FA14:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x8241fa28
	if (!ctx.cr6.lt) goto loc_8241FA28;
	// subfic r5,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r5.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82424a60
	ctx.lr = 0x8241FA28;
	sub_82424A60(ctx, base);
loc_8241FA28:
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 668);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8241f9e8
	if (ctx.cr6.lt) goto loc_8241F9E8;
loc_8241FA3C:
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8241fbb4
	if (ctx.cr6.eq) goto loc_8241FBB4;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// bne 0x8241fcb8
	if (!ctx.cr0.eq) goto loc_8241FCB8;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8241fcb8
	if (ctx.cr0.eq) goto loc_8241FCB8;
loc_8241FA88:
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14464
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14464, ctx.xer);
	// bne cr6,0x8241fb58
	if (!ctx.cr6.eq) goto loc_8241FB58;
	// lwz r10,536(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 536);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8241fb58
	if (!ctx.cr6.gt) goto loc_8241FB58;
	// addi r10,r30,352
	ctx.r10.s64 = ctx.r30.s64 + 352;
loc_8241FAAC:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8241fad0
	if (ctx.cr6.eq) goto loc_8241FAD0;
	// lwz r9,536(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 536);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8241faac
	if (ctx.cr6.lt) goto loc_8241FAAC;
	// b 0x8241fb58
	goto loc_8241FB58;
loc_8241FAD0:
	// addi r11,r11,29
	ctx.r11.s64 = ctx.r11.s64 + 29;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bne cr6,0x8241faf0
	if (!ctx.cr6.eq) goto loc_8241FAF0;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// b 0x8241fb58
	goto loc_8241FB58;
loc_8241FAF0:
	// lwz r11,544(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 544);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241fb38
	if (ctx.cr6.eq) goto loc_8241FB38;
	// lwz r9,536(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 536);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// addi r11,r30,348
	ctx.r11.s64 = ctx.r30.s64 + 348;
loc_8241FB0C:
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8241fb28
	if (!ctx.cr6.eq) goto loc_8241FB28;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r6,r6,27
	ctx.r6.u64 = ctx.r6.u32 & 0x1F;
	// slw r6,r17,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r17.u32 << (ctx.r6.u8 & 0x3F));
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
loc_8241FB28:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8241fb0c
	if (ctx.cr6.lt) goto loc_8241FB0C;
loc_8241FB38:
	// rlwinm. r11,r8,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8241fb4c
	if (ctx.cr6.eq) goto loc_8241FB4C;
	// beq 0x8241fb54
	if (ctx.cr0.eq) goto loc_8241FB54;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_8241FB4C:
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// b 0x8241fb58
	goto loc_8241FB58;
loc_8241FB54:
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
loc_8241FB58:
	// rlwinm r11,r7,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8241fb74
	if (!ctx.cr0.eq) goto loc_8241FB74;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8241fa88
	if (!ctx.cr6.eq) goto loc_8241FA88;
loc_8241FB74:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8241fba0
	if (ctx.cr6.eq) goto loc_8241FBA0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241e4b8
	ctx.lr = 0x8241FB88;
	sub_8241E4B8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8241fba0
	if (ctx.cr6.eq) goto loc_8241FBA0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241e4b8
	ctx.lr = 0x8241FBA0;
	sub_8241E4B8(ctx, base);
loc_8241FBA0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8241fcb8
	if (ctx.cr6.eq) goto loc_8241FCB8;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x8241fcb0
	goto loc_8241FCB0;
loc_8241FBB4:
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// bne 0x8241fcb8
	if (!ctx.cr0.eq) goto loc_8241FCB8;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8241fcb8
	if (ctx.cr0.eq) goto loc_8241FCB8;
loc_8241FBD0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14464
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14464, ctx.xer);
	// bne cr6,0x8241fc6c
	if (!ctx.cr6.eq) goto loc_8241FC6C;
	// lwz r9,536(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 536);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8241fc50
	if (ctx.cr6.eq) goto loc_8241FC50;
	// addi r11,r30,352
	ctx.r11.s64 = ctx.r30.s64 + 352;
loc_8241FBF4:
	// lwz r8,-4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// rlwinm. r8,r8,0,18,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8241fc0c
	if (ctx.cr0.eq) goto loc_8241FC0C;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8241fc24
	if (ctx.cr6.eq) goto loc_8241FC24;
loc_8241FC0C:
	// lwz r8,536(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 536);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8241fbf4
	if (ctx.cr6.lt) goto loc_8241FBF4;
	// b 0x8241fc50
	goto loc_8241FC50;
loc_8241FC24:
	// addi r11,r10,29
	ctx.r11.s64 = ctx.r10.s64 + 29;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bne cr6,0x8241fc44
	if (!ctx.cr6.eq) goto loc_8241FC44;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// b 0x8241fc50
	goto loc_8241FC50;
loc_8241FC44:
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bne cr6,0x8241fc50
	if (!ctx.cr6.eq) goto loc_8241FC50;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_8241FC50:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8241fc6c
	if (!ctx.cr6.eq) goto loc_8241FC6C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241e4b8
	ctx.lr = 0x8241FC68;
	sub_8241E4B8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8241FC6C:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8241fc88
	if (!ctx.cr0.eq) goto loc_8241FC88;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8241fbd0
	if (!ctx.cr6.eq) goto loc_8241FBD0;
loc_8241FC88:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8241fca0
	if (ctx.cr6.eq) goto loc_8241FCA0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241e4b8
	ctx.lr = 0x8241FCA0;
	sub_8241E4B8(ctx, base);
loc_8241FCA0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8241fcb8
	if (ctx.cr6.eq) goto loc_8241FCB8;
	// addi r5,r29,1
	ctx.r5.s64 = ctx.r29.s64 + 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8241FCB0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241e4b8
	ctx.lr = 0x8241FCB8;
	sub_8241E4B8(ctx, base);
loc_8241FCB8:
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 668);
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8241fe78
	if (!ctx.cr6.gt) goto loc_8241FE78;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
loc_8241FCCC:
	// lwz r29,0(r27)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8241fe78
	if (ctx.cr6.eq) goto loc_8241FE78;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x8241fcf0
	if (ctx.cr6.eq) goto loc_8241FCF0;
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// bne cr6,0x8241fd84
	if (!ctx.cr6.eq) goto loc_8241FD84;
loc_8241FCF0:
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// oris r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 1048576;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r10,16(r29)
	REX_STORE_U32(ctx.r29.u32 + 16, ctx.r10.u32);
	// rlwinm r10,r10,16,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x7;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8241fd84
	if (!ctx.cr6.lt) goto loc_8241FD84;
	// mulli r7,r11,40
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// subf r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8241FD1C:
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
loc_8241FD24:
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8241fd64
	if (ctx.cr6.eq) goto loc_8241FD64;
	// lwz r10,676(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 676);
	// lis r8,4369
	ctx.r8.s64 = 286326784;
	// li r11,4
	ctx.r11.s64 = 4;
	// ori r8,r8,4369
	ctx.r8.u64 = ctx.r8.u64 | 4369;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rldimi r8,r8,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// sld r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r9.u8 & 0x7F));
	// addi r11,r10,-8
	ctx.r11.s64 = ctx.r10.s64 + -8;
loc_8241FD54:
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8241fd54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241FD54;
loc_8241FD64:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// blt cr6,0x8241fd24
	if (ctx.cr6.lt) goto loc_8241FD24;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r7,r7,40
	ctx.r7.s64 = ctx.r7.s64 + 40;
	// bne 0x8241fd1c
	if (!ctx.cr0.eq) goto loc_8241FD1C;
loc_8241FD84:
	// lwz r28,4(r29)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
loc_8241FD88:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8241fe64
	if (ctx.cr6.eq) goto loc_8241FE64;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241fe5c
	if (ctx.cr6.eq) goto loc_8241FE5C;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8241fe5c
	if (ctx.cr0.eq) goto loc_8241FE5C;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r9,25,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r9,74
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 74, ctx.xer);
	// blt cr6,0x8241fe5c
	if (ctx.cr6.lt) goto loc_8241FE5C;
	// cmpwi cr6,r9,79
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 79, ctx.xer);
	// bgt cr6,0x8241fe5c
	if (ctx.cr6.gt) goto loc_8241FE5C;
	// lwz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8241fe5c
	if (!ctx.cr6.eq) goto loc_8241FE5C;
	// lwz r7,44(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// rlwinm r9,r10,27,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3;
	// li r11,4
	ctx.r11.s64 = 4;
	// lhz r10,18(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 18);
	// lwz r8,676(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 676);
	// lis r6,4369
	ctx.r6.s64 = 286326784;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r9,r6,4369
	ctx.r9.u64 = ctx.r6.u64 | 4369;
	// lwz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mulli r11,r10,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(40));
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rldimi r9,r9,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// rldicl r8,r7,59,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u64, 59) & 0x3;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// sld r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
loc_8241FE10:
	// ld r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// or r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stdu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r8.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8241fe10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241FE10;
	// lwz r10,676(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 676);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,792(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bne cr6,0x8241fe40
	if (!ctx.cr6.eq) goto loc_8241FE40;
	// li r31,32
	ctx.r31.s64 = 32;
loc_8241FE40:
	// bl 0x8241ca98
	ctx.lr = 0x8241FE44;
	sub_8241CA98(ctx, base);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82423650
	if (!ctx.cr6.lt) goto loc_82423650;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// stw r11,16(r29)
	REX_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
loc_8241FE5C:
	// lwz r28,8(r28)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// b 0x8241fd88
	goto loc_8241FD88;
loc_8241FE64:
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 668);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8241fccc
	if (ctx.cr6.lt) goto loc_8241FCCC;
loc_8241FE78:
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 668);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r11,63
	ctx.r10.s64 = ctx.r11.s64 + 63;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r16,r10,29,3,28
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFF8;
	// rlwinm r11,r16,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r16,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r16.u32);
	// stw r11,672(r30)
	REX_STORE_U32(ctx.r30.u32 + 672, ctx.r11.u32);
	// bl 0x823fd9c8
	ctx.lr = 0x8241FEA0;
	sub_823FD9C8(ctx, base);
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 668);
	// stw r3,680(r30)
	REX_STORE_U32(ctx.r30.u32 + 680, ctx.r3.u32);
	// mr r23,r17
	ctx.r23.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x824201f4
	if (!ctx.cr6.gt) goto loc_824201F4;
	// mr r22,r19
	ctx.r22.u64 = ctx.r19.u64;
loc_8241FEB8:
	// lwz r31,0(r22)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824201f4
	if (ctx.cr6.eq) goto loc_824201F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fcad0
	ctx.lr = 0x8241FECC;
	sub_823FCAD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824201e0
	if (ctx.cr0.eq) goto loc_824201E0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824201e0
	if (!ctx.cr0.eq) goto loc_824201E0;
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823fd280
	ctx.lr = 0x8241FEF0;
	sub_823FD280(ctx, base);
	// addi r24,r3,4
	ctx.r24.s64 = ctx.r3.s64 + 4;
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// ori r11,r24,1
	ctx.r11.u64 = ctx.r24.u64 | 1;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bne 0x8241ff30
	if (!ctx.cr0.eq) goto loc_8241FF30;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8241ff30
	if (ctx.cr0.eq) goto loc_8241FF30;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8241ff3c
	if (!ctx.cr6.gt) goto loc_8241FF3C;
loc_8241FF30:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8248a418
	ctx.lr = 0x8241FF3C;
	sub_8248A418(ctx, base);
loc_8241FF3C:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r31.u32);
loc_8241FF54:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824201d0
	if (!ctx.cr0.eq) goto loc_824201D0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824201d0
	if (ctx.cr0.eq) goto loc_824201D0;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r26,r10,r4
	ctx.r26.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x8241ffc8
	if (!ctx.cr0.eq) goto loc_8241FFC8;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823e2710
	ctx.lr = 0x8241FFC8;
	sub_823E2710(ctx, base);
loc_8241FFC8:
	// lwz r29,8(r26)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r11,r29,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x82420180
	if (!ctx.cr6.eq) goto loc_82420180;
	// lwz r31,0(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8241ff54
	if (!ctx.cr6.eq) goto loc_8241FF54;
loc_8241FFE8:
	// rlwinm. r11,r29,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x1E;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8241ff54
	if (ctx.cr0.eq) goto loc_8241FF54;
	// lwz r27,12(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82420100
	if (ctx.cr0.eq) goto loc_82420100;
	// lhz r28,18(r26)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r26.u32 + 18);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x82420010;
	sub_8241C1D8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r11,18(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 18);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r10,r10,27,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x8242002C;
	sub_8241C1D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82420100
	if (ctx.cr6.eq) goto loc_82420100;
	// lwz r10,676(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 676);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// mulli r9,r3,5
	ctx.r9.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(5));
	// mulli r8,r29,5
	ctx.r8.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(5));
loc_82420048:
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r6,r6,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r7,r7,r10
	ctx.r7.u64 = REX_LOAD_U64(ctx.r7.u32 + ctx.r10.u32);
	// ldx r6,r6,r10
	ctx.r6.u64 = REX_LOAD_U64(ctx.r6.u32 + ctx.r10.u32);
	// nor r7,r7,r6
	ctx.r7.u64 = ~(ctx.r7.u64 | ctx.r6.u64);
	// cmpldi cr6,r7,0
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, 0, ctx.xer);
	// bne cr6,0x824201c8
	if (!ctx.cr6.eq) goto loc_824201C8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82420048
	if (ctx.cr6.lt) goto loc_82420048;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82420084:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq 0x82423668
	if (ctx.cr0.eq) goto loc_82423668;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8241d2d8
	ctx.lr = 0x8242009C;
	sub_8241D2D8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241d2d8
	ctx.lr = 0x824200AC;
	sub_8241D2D8(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824200dc
	if (!ctx.cr0.eq) goto loc_824200DC;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824200dc
	if (ctx.cr0.eq) goto loc_824200DC;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x824200e8
	if (!ctx.cr6.gt) goto loc_824200E8;
loc_824200DC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8248a418
	ctx.lr = 0x824200E8;
	sub_8248A418(ctx, base);
loc_824200E8:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r27,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r27.u32);
loc_82420100:
	// lwz r29,4(r26)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
loc_82420104:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8241ff54
	if (ctx.cr6.eq) goto loc_8241FF54;
	// lwz r31,16(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82420178
	if (ctx.cr6.eq) goto loc_82420178;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82420178
	if (ctx.cr0.eq) goto loc_82420178;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82420154
	if (!ctx.cr0.eq) goto loc_82420154;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82420154
	if (ctx.cr0.eq) goto loc_82420154;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82420160
	if (!ctx.cr6.gt) goto loc_82420160;
loc_82420154:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8248a418
	ctx.lr = 0x82420160;
	sub_8248A418(ctx, base);
loc_82420160:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r31.u32);
loc_82420178:
	// lwz r29,8(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// b 0x82420104
	goto loc_82420104;
loc_82420180:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823fcad0
	ctx.lr = 0x82420188;
	sub_823FCAD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8241ff54
	if (ctx.cr0.eq) goto loc_8241FF54;
	// rlwinm. r11,r29,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8241ff54
	if (!ctx.cr0.eq) goto loc_8241FF54;
	// rlwinm. r11,r29,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x380000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824201a8
	if (ctx.cr0.eq) goto loc_824201A8;
	// lwz r31,44(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 44);
	// b 0x8241ffe8
	goto loc_8241FFE8;
loc_824201A8:
	// lwz r31,0(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
loc_824201AC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8242365c
	if (ctx.cr6.eq) goto loc_8242365C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8241ffe8
	if (!ctx.cr0.eq) goto loc_8241FFE8;
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x824201ac
	goto loc_824201AC;
loc_824201C8:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// b 0x82420084
	goto loc_82420084;
loc_824201D0:
	// lwz r10,976(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 976);
	// addi r11,r30,972
	ctx.r11.s64 = ctx.r30.s64 + 972;
	// stw r10,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// stw r25,976(r30)
	REX_STORE_U32(ctx.r30.u32 + 976, ctx.r25.u32);
loc_824201E0:
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 668);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8241feb8
	if (ctx.cr6.lt) goto loc_8241FEB8;
loc_824201F4:
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 668);
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82420328
	if (!ctx.cr6.gt) goto loc_82420328;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
loc_82420208:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82420328
	if (ctx.cr6.eq) goto loc_82420328;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14336
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14336, ctx.xer);
	// bne cr6,0x82420314
	if (!ctx.cr6.eq) goto loc_82420314;
	// lwz r31,0(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82420240
	if (ctx.cr6.eq) goto loc_82420240;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// bne cr6,0x82420244
	if (!ctx.cr6.eq) goto loc_82420244;
loc_82420240:
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
loc_82420244:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82420314
	if (!ctx.cr0.eq) goto loc_82420314;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,48(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm. r9,r10,11,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82420314
	if (!ctx.cr0.eq) goto loc_82420314;
	// rlwinm. r10,r10,12,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82420314
	if (!ctx.cr0.eq) goto loc_82420314;
	// lhz r28,18(r11)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,12(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x82420278;
	sub_8241C1D8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r11,18(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 18);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r10,r10,27,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x82420294;
	sub_8241C1D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82420314
	if (ctx.cr6.eq) goto loc_82420314;
	// lwz r10,676(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 676);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// mulli r9,r3,5
	ctx.r9.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(5));
	// mulli r8,r29,5
	ctx.r8.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(5));
loc_824202B0:
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r6,r6,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r7,r7,r10
	ctx.r7.u64 = REX_LOAD_U64(ctx.r7.u32 + ctx.r10.u32);
	// ldx r6,r6,r10
	ctx.r6.u64 = REX_LOAD_U64(ctx.r6.u32 + ctx.r10.u32);
	// nor r7,r7,r6
	ctx.r7.u64 = ~(ctx.r7.u64 | ctx.r6.u64);
	// cmpldi cr6,r7,0
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, 0, ctx.xer);
	// bne cr6,0x82420484
	if (!ctx.cr6.eq) goto loc_82420484;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x824202b0
	if (ctx.cr6.lt) goto loc_824202B0;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_824202EC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82420314
	if (ctx.cr0.eq) goto loc_82420314;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241d2d8
	ctx.lr = 0x82420304;
	sub_8241D2D8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241d2d8
	ctx.lr = 0x82420314;
	sub_8241D2D8(ctx, base);
loc_82420314:
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 668);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82420208
	if (ctx.cr6.lt) goto loc_82420208;
loc_82420328:
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 668);
	// mr r18,r17
	ctx.r18.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8242062c
	if (!ctx.cr6.gt) goto loc_8242062C;
loc_82420338:
	// lwz r20,0(r19)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8242062c
	if (ctx.cr6.eq) goto loc_8242062C;
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x82420614
	if (!ctx.cr6.eq) goto loc_82420614;
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82420370
	if (ctx.cr6.eq) goto loc_82420370;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// bne cr6,0x82420374
	if (!ctx.cr6.eq) goto loc_82420374;
loc_82420370:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82420374:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82420614
	if (ctx.cr0.eq) goto loc_82420614;
	// lwz r11,28(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 28);
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82420614
	if (!ctx.cr0.eq) goto loc_82420614;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82420614
	if (ctx.cr0.eq) goto loc_82420614;
loc_824203A0:
	// cmplw cr6,r20,r22
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x824205dc
	if (ctx.cr6.eq) goto loc_824205DC;
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x824205dc
	if (!ctx.cr6.eq) goto loc_824205DC;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824203d4
	if (ctx.cr6.eq) goto loc_824203D4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// bne cr6,0x824203d8
	if (!ctx.cr6.eq) goto loc_824203D8;
loc_824203D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824203D8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824205dc
	if (ctx.cr0.eq) goto loc_824205DC;
	// lhz r21,18(r20)
	ctx.r21.u64 = REX_LOAD_U16(ctx.r20.u32 + 18);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x824203F0;
	sub_8241C1D8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,18(r22)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r22.u32 + 18);
	// bl 0x8241c1d8
	ctx.lr = 0x82420400;
	sub_8241C1D8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplw cr6,r23,r3
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x824205dc
	if (ctx.cr6.eq) goto loc_824205DC;
	// lwz r10,676(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 676);
	// li r11,0
	ctx.r11.s64 = 0;
	// mulli r9,r3,5
	ctx.r9.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(5));
	// mulli r8,r23,5
	ctx.r8.s64 = static_cast<int64_t>(ctx.r23.u64 * static_cast<uint64_t>(5));
loc_8242041C:
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r6,r6,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r7,r7,r10
	ctx.r7.u64 = REX_LOAD_U64(ctx.r7.u32 + ctx.r10.u32);
	// ldx r6,r6,r10
	ctx.r6.u64 = REX_LOAD_U64(ctx.r6.u32 + ctx.r10.u32);
	// nor r7,r7,r6
	ctx.r7.u64 = ~(ctx.r7.u64 | ctx.r6.u64);
	// cmpldi cr6,r7,0
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, 0, ctx.xer);
	// bne cr6,0x8242048c
	if (!ctx.cr6.eq) goto loc_8242048C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8242041c
	if (ctx.cr6.lt) goto loc_8242041C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82420458:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824205dc
	if (ctx.cr0.eq) goto loc_824205DC;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82420498
	if (!ctx.cr6.eq) goto loc_82420498;
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
loc_82420470:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82420494
	if (ctx.cr6.eq) goto loc_82420494;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x82420470
	goto loc_82420470;
loc_82420484:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// b 0x824202ec
	goto loc_824202EC;
loc_8242048C:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// b 0x82420458
	goto loc_82420458;
loc_82420494:
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
loc_82420498:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
loc_824204A0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824204b4
	if (ctx.cr6.eq) goto loc_824204B4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x824204a0
	goto loc_824204A0;
loc_824204B4:
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x824205dc
	if (!ctx.cr6.eq) goto loc_824205DC;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82420528
	if (!ctx.cr6.eq) goto loc_82420528;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r26,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823fd9c8
	ctx.lr = 0x824204D4;
	sub_823FD9C8(ctx, base);
	// lwz r31,0(r20)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r29,r3,-4
	ctx.r29.s64 = ctx.r3.s64 + -4;
loc_824204E0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82420510
	if (ctx.cr6.eq) goto loc_82420510;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,27,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3;
	// lhz r11,18(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x82420504;
	sub_8241C1D8(ctx, base);
	// stwu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x824204e0
	goto loc_824204E0;
loc_82420510:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,-15792
	ctx.r6.s64 = ctx.r11.s64 + -15792;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x825e30b8
	ctx.lr = 0x82420528;
	sub_825E30B8(ctx, base);
loc_82420528:
	// rlwinm r28,r26,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,0(r22)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// add r29,r28,r25
	ctx.r29.u64 = ctx.r28.u64 + ctx.r25.u64;
	// addi r27,r29,-4
	ctx.r27.s64 = ctx.r29.s64 + -4;
loc_82420538:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82420568
	if (ctx.cr6.eq) goto loc_82420568;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,27,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3;
	// lhz r11,18(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x8242055C;
	sub_8241C1D8(ctx, base);
	// stwu r3,4(r27)
	ea = 4 + ctx.r27.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r27.u32 = ea;
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82420538
	goto loc_82420538;
loc_82420568:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,-15792
	ctx.r6.s64 = ctx.r11.s64 + -15792;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825e30b8
	ctx.lr = 0x82420580;
	sub_825E30B8(ctx, base);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq 0x824205b4
	if (ctx.cr0.eq) goto loc_824205B4;
	// add r9,r25,r28
	ctx.r9.u64 = ctx.r25.u64 + ctx.r28.u64;
loc_82420594:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// subf. r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824205b4
	if (!ctx.cr0.eq) goto loc_824205B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82420594
	if (!ctx.cr6.eq) goto loc_82420594;
loc_824205B4:
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824205dc
	if (!ctx.cr0.eq) goto loc_824205DC;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241d2d8
	ctx.lr = 0x824205CC;
	sub_8241D2D8(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241d2d8
	ctx.lr = 0x824205DC;
	sub_8241D2D8(ctx, base);
loc_824205DC:
	// rlwinm r11,r22,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824205f8
	if (!ctx.cr0.eq) goto loc_824205F8;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824203a0
	if (!ctx.cr6.eq) goto loc_824203A0;
loc_824205F8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82420614
	if (ctx.cr6.eq) goto loc_82420614;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r26,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824057e0
	ctx.lr = 0x82420614;
	sub_824057E0(ctx, base);
loc_82420614:
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 668);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, ctx.xer);
	// li r21,0
	ctx.r21.s64 = 0;
	// blt cr6,0x82420338
	if (ctx.cr6.lt) goto loc_82420338;
loc_8242062C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82420828
	if (!ctx.cr0.eq) goto loc_82420828;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82420828
	if (ctx.cr0.eq) goto loc_82420828;
loc_82420648:
	// lwz r11,672(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 672);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x823fd9c8
	ctx.lr = 0x8242065C;
	sub_823FD9C8(ctx, base);
	// lwz r11,672(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 672);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823fd9c8
	ctx.lr = 0x82420674;
	sub_823FD9C8(ctx, base);
	// stw r3,88(r25)
	REX_STORE_U32(ctx.r25.u32 + 88, ctx.r3.u32);
	// lwz r11,20(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824206fc
	if (!ctx.cr0.eq) goto loc_824206FC;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824206fc
	if (ctx.cr0.eq) goto loc_824206FC;
loc_82420690:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824206e0
	if (ctx.cr0.eq) goto loc_824206E0;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r11,16,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x824206d8
	goto loc_824206D8;
loc_824206B0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x824206BC;
	sub_8241C1D8(ctx, base);
	// rlwinm r11,r3,29,3,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r10,r3,58
	ctx.r10.u64 = ctx.r3.u64 & 0x3F;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// sld r10,r17,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r17.u64 << (ctx.r10.u8 & 0x7F));
	// ldx r9,r11,r23
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r23.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stdx r10,r11,r23
	REX_STORE_U64(ctx.r11.u32 + ctx.r23.u32, ctx.r10.u64);
loc_824206D8:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x824206b0
	if (ctx.cr6.lt) goto loc_824206B0;
loc_824206E0:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824206fc
	if (!ctx.cr0.eq) goto loc_824206FC;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82420690
	if (!ctx.cr6.eq) goto loc_82420690;
loc_824206FC:
	// lwz r11,28(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82420714
	if (ctx.cr0.eq) goto loc_82420714;
	// lwz r10,36(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 36);
	// addi r11,r25,32
	ctx.r11.s64 = ctx.r25.s64 + 32;
	// b 0x8242071c
	goto loc_8242071C;
loc_82420714:
	// lwz r10,28(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 28);
	// addi r11,r25,24
	ctx.r11.s64 = ctx.r25.s64 + 24;
loc_8242071C:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// addic r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x824207e0
	if (ctx.cr6.eq) goto loc_824207E0;
loc_82420738:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824207a4
	if (ctx.cr0.eq) goto loc_824207A4;
	// lwz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r26,r11,31,28,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r10,r10,16,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x7;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x824207a4
	if (!ctx.cr6.lt) goto loc_824207A4;
loc_82420768:
	// and. r11,r27,r26
	ctx.r11.u64 = ctx.r27.u64 & ctx.r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82420794
	if (ctx.cr0.eq) goto loc_82420794;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x8242077C;
	sub_8241C1D8(ctx, base);
	// rlwinm r11,r3,29,3,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r10,r3,58
	ctx.r10.u64 = ctx.r3.u64 & 0x3F;
	// sld r10,r17,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r17.u64 << (ctx.r10.u8 & 0x7F));
	// ldx r9,r11,r23
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r23.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stdx r10,r11,r23
	REX_STORE_U64(ctx.r11.u32 + ctx.r23.u32, ctx.r10.u64);
loc_82420794:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r27,r27,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82420768
	if (ctx.cr6.lt) goto loc_82420768;
loc_824207A4:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r29,40(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824207bc
	if (!ctx.cr0.eq) goto loc_824207BC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82420738
	if (!ctx.cr6.eq) goto loc_82420738;
loc_824207BC:
	// addi r11,r25,32
	ctx.r11.s64 = ctx.r25.s64 + 32;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824207e0
	if (ctx.cr6.eq) goto loc_824207E0;
	// lwz r29,4(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824207e0
	if (!ctx.cr0.eq) goto loc_824207E0;
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne 0x82420738
	if (!ctx.cr0.eq) goto loc_82420738;
loc_824207E0:
	// stw r23,84(r25)
	REX_STORE_U32(ctx.r25.u32 + 84, ctx.r23.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,672(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 672);
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823fd9c8
	ctx.lr = 0x824207F8;
	sub_823FD9C8(ctx, base);
	// lwz r10,48(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 48);
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r3,80(r25)
	REX_STORE_U32(ctx.r25.u32 + 80, ctx.r3.u32);
	// rlwinm r10,r10,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1;
	// clrlwi r9,r22,24
	ctx.r9.u64 = ctx.r22.u32 & 0xFF;
	// or r22,r10,r9
	ctx.r22.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82420828
	if (!ctx.cr0.eq) goto loc_82420828;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82420648
	if (!ctx.cr6.eq) goto loc_82420648;
loc_82420828:
	// lwz r11,672(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 672);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x823fd9c8
	ctx.lr = 0x8242083C;
	sub_823FD9C8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82420840:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82420aec
	if (!ctx.cr0.eq) goto loc_82420AEC;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82420aec
	if (ctx.cr0.eq) goto loc_82420AEC;
loc_8242085C:
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825e3710
	ctx.lr = 0x8242086C;
	sub_825E3710(ctx, base);
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 48);
	// rlwinm. r11,r11,12,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82420938
	if (!ctx.cr0.eq) goto loc_82420938;
	// lwz r29,12(r28)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
loc_8242087C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82420a4c
	if (ctx.cr6.eq) goto loc_82420A4C;
	// lwz r31,0(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,672(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 672);
	// lwz r4,80(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x8241c520
	ctx.lr = 0x82420898;
	sub_8241C520(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82420930
	if (!ctx.cr0.eq) goto loc_82420930;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82420930
	if (ctx.cr0.eq) goto loc_82420930;
loc_824208B0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x82420914
	if (!ctx.cr6.eq) goto loc_82420914;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82480ca8
	ctx.lr = 0x824208D8;
	sub_82480CA8(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82420914
	if (ctx.cr0.eq) goto loc_82420914;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// lhz r10,18(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 18);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x824208FC;
	sub_8241C1D8(ctx, base);
	// rlwinm r11,r3,29,3,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r10,r3,58
	ctx.r10.u64 = ctx.r3.u64 & 0x3F;
	// sld r10,r17,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r17.u64 << (ctx.r10.u8 & 0x7F));
	// ldx r9,r11,r26
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r26.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stdx r10,r11,r26
	REX_STORE_U64(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u64);
loc_82420914:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82420930
	if (!ctx.cr0.eq) goto loc_82420930;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824208b0
	if (!ctx.cr6.eq) goto loc_824208B0;
loc_82420930:
	// lwz r29,8(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// b 0x8242087c
	goto loc_8242087C;
loc_82420938:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241c118
	ctx.lr = 0x82420940;
	sub_8241C118(ctx, base);
	// lwz r27,8(r3)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82420948:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82420a4c
	if (ctx.cr6.eq) goto loc_82420A4C;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
loc_82420958:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82420978
	if (ctx.cr6.eq) goto loc_82420978;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r9,r9,11,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8242097c
	if (!ctx.cr0.eq) goto loc_8242097C;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82420958
	goto loc_82420958;
loc_82420978:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_8242097C:
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82420a44
	if (!ctx.cr0.eq) goto loc_82420A44;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82420a44
	if (ctx.cr0.eq) goto loc_82420A44;
loc_82420994:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x82420a28
	if (!ctx.cr6.eq) goto loc_82420A28;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82480ca8
	ctx.lr = 0x824209BC;
	sub_82480CA8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82420a28
	if (ctx.cr0.eq) goto loc_82420A28;
	// lwz r10,48(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r9,r10,13
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFF;
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// lwz r8,28(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r9,r17,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r17.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r8,40(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// and. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82420a28
	if (ctx.cr0.eq) goto loc_82420A28;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r10,18(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// rlwinm r11,r9,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x3;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x82420A10;
	sub_8241C1D8(ctx, base);
	// rlwinm r11,r3,29,3,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r10,r3,58
	ctx.r10.u64 = ctx.r3.u64 & 0x3F;
	// sld r10,r17,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r17.u64 << (ctx.r10.u8 & 0x7F));
	// ldx r9,r11,r26
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r26.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stdx r10,r11,r26
	REX_STORE_U64(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u64);
loc_82420A28:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82420a44
	if (!ctx.cr0.eq) goto loc_82420A44;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82420994
	if (!ctx.cr6.eq) goto loc_82420994;
loc_82420A44:
	// lwz r27,12(r27)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// b 0x82420948
	goto loc_82420948;
loc_82420A4C:
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// lwz r3,88(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 88);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x825e3c00
	ctx.lr = 0x82420A5C;
	sub_825E3C00(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,672(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 672);
	// lwz r4,84(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// bl 0x8241c568
	ctx.lr = 0x82420A6C;
	sub_8241C568(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,672(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 672);
	// lwz r4,80(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 80);
	// bl 0x8241c520
	ctx.lr = 0x82420A7C;
	sub_8241C520(ctx, base);
	// lwz r3,80(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 80);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// cmplwi r16,0
	ctx.cr0.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// beq 0x82420ab8
	if (ctx.cr0.eq) goto loc_82420AB8;
	// add r8,r3,r16
	ctx.r8.u64 = ctx.r3.u64 + ctx.r16.u64;
loc_82420A98:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82420ab8
	if (!ctx.cr0.eq) goto loc_82420AB8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82420a98
	if (!ctx.cr6.eq) goto loc_82420A98;
loc_82420AB8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82420ad0
	if (ctx.cr0.eq) goto loc_82420AD0;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x825e3c00
	ctx.lr = 0x82420ACC;
	sub_825E3C00(ctx, base);
	// mr r25,r17
	ctx.r25.u64 = ctx.r17.u64;
loc_82420AD0:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82420aec
	if (!ctx.cr0.eq) goto loc_82420AEC;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8242085c
	if (!ctx.cr6.eq) goto loc_8242085C;
loc_82420AEC:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82420840
	if (!ctx.cr0.eq) goto loc_82420840;
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82420c6c
	if (ctx.cr0.eq) goto loc_82420C6C;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82420c6c
	if (!ctx.cr0.eq) goto loc_82420C6C;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82420c6c
	if (ctx.cr0.eq) goto loc_82420C6C;
loc_82420B18:
	// lwz r11,40(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 40);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82420c50
	if (ctx.cr0.eq) goto loc_82420C50;
	// lwz r11,28(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82420c50
	if (!ctx.cr0.eq) goto loc_82420C50;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82420c50
	if (ctx.cr0.eq) goto loc_82420C50;
loc_82420B40:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82420c34
	if (ctx.cr0.eq) goto loc_82420C34;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823fcad0
	ctx.lr = 0x82420B54;
	sub_823FCAD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82420c34
	if (ctx.cr0.eq) goto loc_82420C34;
	// rlwinm r31,r27,0,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82420c34
	if (!ctx.cr0.eq) goto loc_82420C34;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82420c34
	if (ctx.cr6.eq) goto loc_82420C34;
	// lwz r8,4(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
loc_82420B80:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82420B84:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82420bb0
	if (ctx.cr6.eq) goto loc_82420BB0;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82420ba4
	if (ctx.cr6.eq) goto loc_82420BA4;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82420bac
	if (ctx.cr6.eq) goto loc_82420BAC;
loc_82420BA4:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82420b84
	goto loc_82420B84;
loc_82420BAC:
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
loc_82420BB0:
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82420bcc
	if (!ctx.cr0.eq) goto loc_82420BCC;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82420b80
	if (!ctx.cr6.eq) goto loc_82420B80;
loc_82420BCC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82420c34
	if (ctx.cr6.eq) goto loc_82420C34;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,18(r29)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r29.u32 + 18);
	// bl 0x8241c1d8
	ctx.lr = 0x82420BE0;
	sub_8241C1D8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82420c24
	goto loc_82420C24;
loc_82420BE8:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82420c34
	if (ctx.cr6.eq) goto loc_82420C34;
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// rlwinm r9,r3,29,3,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r8,r3,58
	ctx.r8.u64 = ctx.r3.u64 & 0x3F;
	// rlwinm r7,r11,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// sld r8,r17,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r17.u64 << (ctx.r8.u8 & 0x7F));
	// ldx r6,r9,r10
	ctx.r6.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r10.u32);
	// or r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 | ctx.r6.u64;
	// stdx r6,r9,r10
	REX_STORE_U64(ctx.r9.u32 + ctx.r10.u32, ctx.r6.u64);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// ldx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stdx r10,r9,r11
	REX_STORE_U64(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u64);
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
loc_82420C24:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82420c34
	if (!ctx.cr0.eq) goto loc_82420C34;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82420be8
	if (!ctx.cr6.eq) goto loc_82420BE8;
loc_82420C34:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82420c50
	if (!ctx.cr0.eq) goto loc_82420C50;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82420b40
	if (!ctx.cr6.eq) goto loc_82420B40;
loc_82420C50:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82420c6c
	if (!ctx.cr0.eq) goto loc_82420C6C;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82420b18
	if (!ctx.cr6.eq) goto loc_82420B18;
loc_82420C6C:
	// clrlwi. r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82420e88
	if (ctx.cr0.eq) goto loc_82420E88;
	// lwz r31,4(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82420cb0
	if (!ctx.cr0.eq) goto loc_82420CB0;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82420cb0
	if (ctx.cr0.eq) goto loc_82420CB0;
loc_82420C88:
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x825e3c00
	ctx.lr = 0x82420C98;
	sub_825E3C00(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,4(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82420cb0
	if (!ctx.cr0.eq) goto loc_82420CB0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82420c88
	if (!ctx.cr6.eq) goto loc_82420C88;
loc_82420CB0:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82420e88
	if (!ctx.cr0.eq) goto loc_82420E88;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82420e88
	if (ctx.cr0.eq) goto loc_82420E88;
loc_82420CC8:
	// lwz r10,12(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82420CD0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82420e6c
	if (ctx.cr6.eq) goto loc_82420E6C;
	// lwz r29,0(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,48(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// rlwinm. r9,r9,13,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82420cf0
	if (!ctx.cr0.eq) goto loc_82420CF0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82420cd0
	goto loc_82420CD0;
loc_82420CF0:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82420CF4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82420d14
	if (ctx.cr6.eq) goto loc_82420D14;
	// lwz r31,0(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm. r10,r10,11,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82420d18
	if (!ctx.cr0.eq) goto loc_82420D18;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82420cf4
	goto loc_82420CF4;
loc_82420D14:
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_82420D18:
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// lwz r4,80(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825e3c00
	ctx.lr = 0x82420D28;
	sub_825E3C00(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82420dc0
	if (!ctx.cr0.eq) goto loc_82420DC0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82420dc0
	if (ctx.cr0.eq) goto loc_82420DC0;
loc_82420D40:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x82420da4
	if (!ctx.cr6.eq) goto loc_82420DA4;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82480ca8
	ctx.lr = 0x82420D68;
	sub_82480CA8(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82420da4
	if (ctx.cr0.eq) goto loc_82420DA4;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// lhz r10,18(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 18);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x82420D8C;
	sub_8241C1D8(ctx, base);
	// rlwinm r11,r3,29,3,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r10,r3,58
	ctx.r10.u64 = ctx.r3.u64 & 0x3F;
	// sld r10,r17,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r17.u64 << (ctx.r10.u8 & 0x7F));
	// ldx r9,r11,r26
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r26.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stdx r10,r11,r26
	REX_STORE_U64(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u64);
loc_82420DA4:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82420dc0
	if (!ctx.cr0.eq) goto loc_82420DC0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82420d40
	if (!ctx.cr6.eq) goto loc_82420D40;
loc_82420DC0:
	// lwz r11,116(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 116);
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82420e0c
	if (ctx.cr6.eq) goto loc_82420E0C;
loc_82420DD4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82420e0c
	if (ctx.cr6.eq) goto loc_82420E0C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r9,r10,10,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82420e04
	if (!ctx.cr0.eq) goto loc_82420E04;
	// rlwinm. r10,r10,12,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82420e04
	if (ctx.cr0.eq) goto loc_82420E04;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,672(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 672);
	// lwz r4,88(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// bl 0x8241c568
	ctx.lr = 0x82420E04;
	sub_8241C568(ctx, base);
loc_82420E04:
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82420dd4
	goto loc_82420DD4;
loc_82420E0C:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82420E10:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,672(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 672);
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x8241c520
	ctx.lr = 0x82420E20;
	sub_8241C520(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,672(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 672);
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x8241c520
	ctx.lr = 0x82420E30;
	sub_8241C520(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82420e60
	if (!ctx.cr6.eq) goto loc_82420E60;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82420e6c
	if (ctx.cr6.eq) goto loc_82420E6C;
loc_82420E44:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82420e60
	if (!ctx.cr6.eq) goto loc_82420E60;
	// lwz r31,52(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82420e44
	if (!ctx.cr6.eq) goto loc_82420E44;
	// b 0x82420e64
	goto loc_82420E64;
loc_82420E60:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82420E64:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82420e10
	if (!ctx.cr6.eq) goto loc_82420E10;
loc_82420E6C:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82420e88
	if (!ctx.cr0.eq) goto loc_82420E88;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82420cc8
	if (!ctx.cr6.eq) goto loc_82420CC8;
loc_82420E88:
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 668);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mullw r4,r11,r16
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r16.s32);
	// bl 0x823fd9c8
	ctx.lr = 0x82420E9C;
	sub_823FD9C8(ctx, base);
	// stw r3,684(r30)
	REX_STORE_U32(ctx.r30.u32 + 684, ctx.r3.u32);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82420eb8
	if (ctx.cr6.eq) goto loc_82420EB8;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82437130
	ctx.lr = 0x82420EB4;
	sub_82437130(ctx, base);
	// b 0x82420ec8
	goto loc_82420EC8;
loc_82420EB8:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8241d928
	ctx.lr = 0x82420EC8;
	sub_8241D928(ctx, base);
loc_82420EC8:
	// lwz r11,672(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 672);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824057e0
	ctx.lr = 0x82420EE0;
	sub_824057E0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82421074
	if (!ctx.cr0.eq) goto loc_82421074;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82421074
	if (ctx.cr0.eq) goto loc_82421074;
loc_82420F0C:
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14464
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14464, ctx.xer);
	// bne cr6,0x82421058
	if (!ctx.cr6.eq) goto loc_82421058;
	// lwz r11,16(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 16);
	// clrlwi r23,r11,16
	ctx.r23.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r11,16,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// add r25,r23,r11
	ctx.r25.u64 = ctx.r23.u64 + ctx.r11.u64;
	// cmplw cr6,r23,r25
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x82420f8c
	if (!ctx.cr6.lt) goto loc_82420F8C;
loc_82420F38:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x82420F44;
	sub_8241C1D8(ctx, base);
	// addi r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x82420f80
	if (!ctx.cr6.lt) goto loc_82420F80;
loc_82420F58:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x82420F64;
	sub_8241C1D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241ca38
	ctx.lr = 0x82420F74;
	sub_8241CA38(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82420f58
	if (ctx.cr6.lt) goto loc_82420F58;
loc_82420F80:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82420f38
	if (ctx.cr6.lt) goto loc_82420F38;
loc_82420F8C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82421058
	if (!ctx.cr0.eq) goto loc_82421058;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82421058
	if (ctx.cr0.eq) goto loc_82421058;
loc_82420FB8:
	// cmplw cr6,r24,r22
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x8242103c
	if (ctx.cr6.eq) goto loc_8242103C;
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14464
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14464, ctx.xer);
	// bne cr6,0x8242103c
	if (!ctx.cr6.eq) goto loc_8242103C;
	// lwz r10,16(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 16);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// cmplw cr6,r23,r25
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r25.u32, ctx.xer);
	// rlwinm r11,r10,16,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x7;
	// clrlwi r29,r10,16
	ctx.r29.u64 = ctx.r10.u32 & 0xFFFF;
	// bge cr6,0x8242103c
	if (!ctx.cr6.lt) goto loc_8242103C;
	// add r27,r29,r11
	ctx.r27.u64 = ctx.r29.u64 + ctx.r11.u64;
loc_82420FEC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x82420FF8;
	sub_8241C1D8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82421030
	if (!ctx.cr6.lt) goto loc_82421030;
loc_82421008:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x82421014;
	sub_8241C1D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241ca38
	ctx.lr = 0x82421024;
	sub_8241CA38(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82421008
	if (ctx.cr6.lt) goto loc_82421008;
loc_82421030:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82420fec
	if (ctx.cr6.lt) goto loc_82420FEC;
loc_8242103C:
	// rlwinm r11,r24,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82421058
	if (!ctx.cr0.eq) goto loc_82421058;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82420fb8
	if (!ctx.cr6.eq) goto loc_82420FB8;
loc_82421058:
	// rlwinm r11,r22,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82421074
	if (!ctx.cr0.eq) goto loc_82421074;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82420f0c
	if (!ctx.cr6.eq) goto loc_82420F0C;
loc_82421074:
	// lwz r10,668(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 668);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// stb r21,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r21.u8);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// stw r17,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r17.u32);
	// ble cr6,0x82422000
	if (!ctx.cr6.gt) goto loc_82422000;
loc_82421094:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r16,r10,r15
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r15.u32);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82422000
	if (ctx.cr6.eq) goto loc_82422000;
	// lwz r10,8(r16)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r16.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14336
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14336, ctx.xer);
	// bne cr6,0x82421fec
	if (!ctx.cr6.eq) goto loc_82421FEC;
	// lhz r15,18(r16)
	ctx.r15.u64 = REX_LOAD_U16(ctx.r16.u32 + 18);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x824210C4;
	sub_8241C1D8(ctx, base);
	// lwz r10,0(r16)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_824210D0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824210e4
	if (ctx.cr6.eq) goto loc_824210E4;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x824210d0
	goto loc_824210D0;
loc_824210E4:
	// rlwinm r31,r11,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r4,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// bl 0x823fd9c8
	ctx.lr = 0x82421100;
	sub_823FD9C8(ctx, base);
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// add r23,r31,r3
	ctx.r23.u64 = ctx.r31.u64 + ctx.r3.u64;
	// ori r18,r11,65534
	ctx.r18.u64 = ctx.r11.u64 | 65534;
	// ori r19,r10,65535
	ctx.r19.u64 = ctx.r10.u64 | 65535;
loc_82421118:
	// stw r21,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r21.u32);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r28,0(r16)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// mr r25,r14
	ctx.r25.u64 = ctx.r14.u64;
loc_82421128:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82421470
	if (ctx.cr6.eq) goto loc_82421470;
	// lwz r24,12(r28)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// stw r22,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r22.u32);
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82421404
	if (ctx.cr0.eq) goto loc_82421404;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r10,18(r24)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r24.u32 + 18);
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x8242115C;
	sub_8241C1D8(ctx, base);
	// lwz r11,28(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 28);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824211bc
	if (!ctx.cr0.eq) goto loc_824211BC;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824211bc
	if (ctx.cr0.eq) goto loc_824211BC;
loc_8242117C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824211a4
	if (ctx.cr0.eq) goto loc_824211A4;
	// cmplw cr6,r31,r16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r16.u32, ctx.xer);
	// beq cr6,0x824211a4
	if (ctx.cr6.eq) goto loc_824211A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,18(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 18);
	// bl 0x8241c1d8
	ctx.lr = 0x8242119C;
	sub_8241C1D8(ctx, base);
	// cmplw cr6,r26,r3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8242143c
	if (ctx.cr6.eq) goto loc_8242143C;
loc_824211A4:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824211bc
	if (!ctx.cr0.eq) goto loc_824211BC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8242117c
	if (!ctx.cr6.eq) goto loc_8242117C;
loc_824211BC:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241ccd0
	ctx.lr = 0x824211CC;
	sub_8241CCD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8242126c
	if (ctx.cr0.eq) goto loc_8242126C;
	// lwz r11,680(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 680);
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,28(r16)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r16.u32 + 28);
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r4,80(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82421200
	if (ctx.cr6.eq) goto loc_82421200;
	// lwz r5,672(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 672);
	// bl 0x8241c4d8
	ctx.lr = 0x824211F8;
	sub_8241C4D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x82421228
	goto loc_82421228;
loc_82421200:
	// rlwinm r11,r26,29,3,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r10,r26,58
	ctx.r10.u64 = ctx.r26.u64 & 0x3F;
	// sld r10,r17,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r17.u64 << (ctx.r10.u8 & 0x7F));
	// ldx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r4.u32);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// bne cr6,0x82421224
	if (!ctx.cr6.eq) goto loc_82421224;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82421224:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_82421228:
	// bne 0x82421458
	if (!ctx.cr0.eq) goto loc_82421458;
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// addi r7,r23,4
	ctx.r7.s64 = ctx.r23.s64 + 4;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241c370
	ctx.lr = 0x82421248;
	sub_8241C370(ctx, base);
	// lwz r10,28(r16)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r16.u32 + 28);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r10,68(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 68);
	// clrlwi r10,r10,4
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// ble cr6,0x82421268
	if (!ctx.cr6.gt) goto loc_82421268;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_82421268:
	// stw r11,4(r25)
	REX_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
loc_8242126C:
	// lwz r29,0(r16)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// addi r27,r14,4
	ctx.r27.s64 = ctx.r14.s64 + 4;
loc_82421274:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82421404
	if (ctx.cr6.eq) goto loc_82421404;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82421404
	if (ctx.cr6.eq) goto loc_82421404;
	// lwz r31,12(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824213f8
	if (ctx.cr0.eq) goto loc_824213F8;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r10,18(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 18);
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x824212AC;
	sub_8241C1D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241ccd0
	ctx.lr = 0x824212BC;
	sub_8241CCD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824213f8
	if (ctx.cr0.eq) goto loc_824213F8;
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,116
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 116, ctx.xer);
	// beq cr6,0x824212e4
	if (ctx.cr6.eq) goto loc_824212E4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14848
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14848, ctx.xer);
	// bne cr6,0x82421364
	if (!ctx.cr6.eq) goto loc_82421364;
loc_824212E4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14848
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14848, ctx.xer);
	// bne cr6,0x82421328
	if (!ctx.cr6.eq) goto loc_82421328;
	// lwz r11,28(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 28);
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,40(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// clrlwi r8,r11,13
	ctx.r8.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r8,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r8,r17,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r17.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// and. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82421414
	if (!ctx.cr0.eq) goto loc_82421414;
loc_82421328:
	// cmplwi cr6,r10,116
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 116, ctx.xer);
	// bne cr6,0x82421364
	if (!ctx.cr6.eq) goto loc_82421364;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,28(r24)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 28);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,40(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// clrlwi r8,r11,13
	ctx.r8.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r8,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r8,r17,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r17.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// and. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82421414
	if (!ctx.cr0.eq) goto loc_82421414;
loc_82421364:
	// lwz r11,28(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 28);
	// rlwinm r10,r5,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r9,r5,58
	ctx.r9.u64 = ctx.r5.u64 & 0x3F;
	// sld r9,r17,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r17.u64 << (ctx.r9.u8 & 0x7F));
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// ldx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// bne cr6,0x82421390
	if (!ctx.cr6.eq) goto loc_82421390;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82421390:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824213a0
	if (ctx.cr0.eq) goto loc_824213A0;
	// stw r18,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r18.u32);
	// b 0x824213f8
	goto loc_824213F8;
loc_824213A0:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r10,r26,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r9,r26,58
	ctx.r9.u64 = ctx.r26.u64 & 0x3F;
	// sld r9,r17,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r17.u64 << (ctx.r9.u8 & 0x7F));
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// ldx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// bne cr6,0x824213cc
	if (!ctx.cr6.eq) goto loc_824213CC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824213CC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824213dc
	if (ctx.cr0.eq) goto loc_824213DC;
	// stw r18,4(r25)
	REX_STORE_U32(ctx.r25.u32 + 4, ctx.r18.u32);
	// b 0x824213f8
	goto loc_824213F8;
loc_824213DC:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r7,r25,4
	ctx.r7.s64 = ctx.r25.s64 + 4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241c370
	ctx.lr = 0x824213F8;
	sub_8241C370(ctx, base);
loc_824213F8:
	// lwz r29,4(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// b 0x82421274
	goto loc_82421274;
loc_82421404:
	// lwz r28,4(r28)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
	// b 0x82421128
	goto loc_82421128;
loc_82421414:
	// cmplwi cr6,r10,116
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 116, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// beq cr6,0x8242142c
	if (ctx.cr6.eq) goto loc_8242142C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8242142C:
	// bl 0x82411188
	ctx.lr = 0x82421430;
	sub_82411188(ctx, base);
	// addi r21,r21,-1
	ctx.r21.s64 = ctx.r21.s64 + -1;
	// addi r23,r23,-8
	ctx.r23.s64 = ctx.r23.s64 + -8;
	// b 0x82421118
	goto loc_82421118;
loc_8242143C:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82421470
	if (ctx.cr6.eq) goto loc_82421470;
	// addi r11,r14,-4
	ctx.r11.s64 = ctx.r14.s64 + -4;
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
loc_8242144C:
	// stwu r19,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r19.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242144c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242144C;
	// b 0x82421470
	goto loc_82421470;
loc_82421458:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82421470
	if (ctx.cr6.eq) goto loc_82421470;
	// addi r11,r14,-4
	ctx.r11.s64 = ctx.r14.s64 + -4;
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
loc_82421468:
	// stwu r19,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r19.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82421468
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82421468;
loc_82421470:
	// addic. r8,r21,1
	ctx.xer.ca = ctx.r21.u32 > 4294967294;
	ctx.r8.s64 = ctx.r21.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// beq 0x82423670
	if (ctx.cr0.eq) goto loc_82423670;
	// addi r11,r14,4
	ctx.r11.s64 = ctx.r14.s64 + 4;
loc_82421488:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8242149c
	if (!ctx.cr6.lt) goto loc_8242149C;
	// lwz r6,-4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8242149C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82421488
	if (ctx.cr6.lt) goto loc_82421488;
	// cmplw cr6,r10,r19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x82423670
	if (ctx.cr6.eq) goto loc_82423670;
	// cmplw cr6,r6,r21
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x82421500
	if (ctx.cr6.eq) goto loc_82421500;
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
loc_824214C4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824214e0
	if (ctx.cr6.eq) goto loc_824214E0;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x824214e0
	if (ctx.cr6.eq) goto loc_824214E0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x824214c4
	goto loc_824214C4;
loc_824214E0:
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r11,27,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// lhz r11,18(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 18);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x824214FC;
	sub_8241C1D8(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
loc_82421500:
	// li r17,0
	ctx.r17.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82421508:
	// lwz r19,0(r16)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
loc_8242150C:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82421e60
	if (ctx.cr6.eq) goto loc_82421E60;
	// lwz r23,12(r19)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r19.u32 + 12);
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82421590
	if (ctx.cr0.eq) goto loc_82421590;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r10,18(r23)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r23.u32 + 18);
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x82421540;
	sub_8241C1D8(ctx, base);
	// clrlwi. r18,r17,24
	ctx.r18.u64 = ctx.r17.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bne 0x82421554
	if (!ctx.cr0.eq) goto loc_82421554;
	// cmplw cr6,r3,r20
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r20.u32, ctx.xer);
	// beq cr6,0x82421590
	if (ctx.cr6.eq) goto loc_82421590;
loc_82421554:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// bne cr6,0x82421598
	if (!ctx.cr6.eq) goto loc_82421598;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241ccd0
	ctx.lr = 0x8242156C;
	sub_8241CCD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82421598
	if (!ctx.cr0.eq) goto loc_82421598;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241d2d8
	ctx.lr = 0x82421580;
	sub_8241D2D8(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241d2d8
	ctx.lr = 0x82421590;
	sub_8241D2D8(ctx, base);
loc_82421590:
	// lwz r19,4(r19)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r19.u32 + 4);
	// b 0x8242150c
	goto loc_8242150C;
loc_82421598:
	// lwz r21,28(r16)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r16.u32 + 28);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// bl 0x82405440
	ctx.lr = 0x824215B0;
	sub_82405440(ctx, base);
	// b 0x82421e28
	goto loc_82421E28;
loc_824215B4:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82480ca8
	ctx.lr = 0x824215CC;
	sub_82480CA8(ctx, base);
	// cmplw cr6,r19,r3
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82421e28
	if (!ctx.cr6.eq) goto loc_82421E28;
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82421618
	if (ctx.cr6.eq) goto loc_82421618;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,28(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 28);
	// clrlwi r9,r11,13
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r9,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82421c24
	if (!ctx.cr0.eq) goto loc_82421C24;
	// lwz r25,180(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// b 0x82421c24
	goto loc_82421C24;
loc_82421618:
	// lwz r11,48(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 48);
	// rlwinm. r10,r11,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82421c24
	if (!ctx.cr0.eq) goto loc_82421C24;
	// rlwinm. r11,r11,11,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82421c24
	if (!ctx.cr0.eq) goto loc_82421C24;
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82421648
	if (ctx.cr6.eq) goto loc_82421648;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// bne cr6,0x8242164c
	if (!ctx.cr6.eq) goto loc_8242164C;
loc_82421648:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8242164C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82421c24
	if (ctx.cr0.eq) goto loc_82421C24;
	// lwz r11,28(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82421680
	if (!ctx.cr0.eq) goto loc_82421680;
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 24);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r24,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r24.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq 0x82421680
	if (ctx.cr0.eq) goto loc_82421680;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823fcb88
	ctx.lr = 0x82421678;
	sub_823FCB88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824216ac
	if (!ctx.cr0.eq) goto loc_824216AC;
loc_82421680:
	// lwz r11,36(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82423694
	if (!ctx.cr0.eq) goto loc_82423694;
	// lwz r11,32(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r24,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r24.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq 0x82423694
	if (ctx.cr0.eq) goto loc_82423694;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823fcb88
	ctx.lr = 0x824216A4;
	sub_823FCB88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82423694
	if (ctx.cr0.eq) goto loc_82423694;
loc_824216AC:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// beq cr6,0x82421c1c
	if (ctx.cr6.eq) goto loc_82421C1C;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x82421c1c
	if (ctx.cr6.eq) goto loc_82421C1C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824058c8
	ctx.lr = 0x824216CC;
	sub_824058C8(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r10,68(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r11,r10,0,0,3
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000000) | (ctx.r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// lwz r11,48(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 48);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82421ac8
	if (ctx.cr0.eq) goto loc_82421AC8;
	// lwz r29,8(r24)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r6,r29,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 18) & 0x7;
	// rlwinm r5,r29,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 13) & 0x7;
	// rlwinm r4,r29,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 25) & 0x7F;
	// bl 0x823fcdc0
	ctx.lr = 0x82421708;
	sub_823FCDC0(ctx, base);
	// addi r11,r24,-16
	ctx.r11.s64 = ctx.r24.s64 + -16;
	// rlwinm r26,r29,14,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 14) & 0x1;
	// lwzx r28,r3,r11
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmplw cr6,r28,r21
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x82421728
	if (ctx.cr6.eq) goto loc_82421728;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r26,r11,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82421728:
	// rlwinm. r11,r29,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 15) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// beq 0x8242199c
	if (ctx.cr0.eq) goto loc_8242199C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x824055c8
	ctx.lr = 0x8242173C;
	sub_824055C8(ctx, base);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// blt cr6,0x8242175c
	if (ctx.cr6.lt) goto loc_8242175C;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82421760
	if (!ctx.cr6.gt) goto loc_82421760;
loc_8242175C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82421760:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8242193c
	if (ctx.cr0.eq) goto loc_8242193C;
	// cmplw cr6,r21,r28
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8242193c
	if (!ctx.cr6.eq) goto loc_8242193C;
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// li r26,1
	ctx.r26.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82421780:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824217ec
	if (ctx.cr6.eq) goto loc_824217EC;
	// lwz r10,16(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824217e4
	if (ctx.cr6.eq) goto loc_824217E4;
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r8,r8,0,18,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r8,14336
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 14336, ctx.xer);
	// bne cr6,0x824217e4
	if (!ctx.cr6.eq) goto loc_824217E4;
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_824217A8:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824217dc
	if (ctx.cr6.eq) goto loc_824217DC;
	// lwz r10,16(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824217d0
	if (ctx.cr6.eq) goto loc_824217D0;
	// lwz r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// rlwinm r10,r6,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,8192
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8192, ctx.xer);
	// beq cr6,0x824217d8
	if (ctx.cr6.eq) goto loc_824217D8;
loc_824217D0:
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// b 0x824217a8
	goto loc_824217A8;
loc_824217D8:
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
loc_824217DC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824217f4
	if (!ctx.cr6.eq) goto loc_824217F4;
loc_824217E4:
	// lwz r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// b 0x82421780
	goto loc_82421780;
loc_824217EC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8242367c
	if (ctx.cr6.eq) goto loc_8242367C;
loc_824217F4:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r8,63
	ctx.r8.s64 = 63;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwimi r10,r8,7,18,24
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x3F80) | (ctx.r10.u64 & 0xFFFFFFFFFFFFC07F);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r28,12(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x824ca298
	ctx.lr = 0x8242181C;
	sub_824CA298(ctx, base);
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82410a40
	ctx.lr = 0x82421828;
	sub_82410A40(ctx, base);
	// lwz r9,16(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// rlwimi r9,r11,16,13,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x70000) | (ctx.r9.u64 & 0xFFFFFFFFFFF8FFFF);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,16(r29)
	REX_STORE_U32(ctx.r29.u32 + 16, ctx.r9.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r11,18(r28)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 18);
	// stw r10,32(r29)
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r10.u32);
	// sth r11,18(r29)
	REX_STORE_U16(ctx.r29.u32 + 18, ctx.r11.u16);
	// bl 0x824ca1f0
	ctx.lr = 0x82421868;
	sub_824CA1F0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82410878
	ctx.lr = 0x82421878;
	sub_82410878(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82408f60
	ctx.lr = 0x82421888;
	sub_82408F60(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// beq 0x824218dc
	if (ctx.cr0.eq) goto loc_824218DC;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
	// addi r10,r10,-36
	ctx.r10.s64 = ctx.r10.s64 + -36;
	// ori r7,r10,1
	ctx.r7.u64 = ctx.r10.u64 | 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// b 0x82421908
	goto loc_82421908;
loc_824218DC:
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// addi r10,r10,-36
	ctx.r10.s64 = ctx.r10.s64 + -36;
	// ori r7,r10,1
	ctx.r7.u64 = ctx.r10.u64 | 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
loc_82421908:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82405360
	ctx.lr = 0x8242191C;
	sub_82405360(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82410bf0
	ctx.lr = 0x82421924;
	sub_82410BF0(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
loc_8242193C:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// rlwimi r11,r10,23,8,8
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x800000) | (ctx.r11.u64 & 0xFFFFFFFFFF7FFFFF);
	// stw r25,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r25.u32);
	// oris r10,r9,128
	ctx.r10.u64 = ctx.r9.u64 | 8388608;
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// stw r10,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lwz r11,76(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 76);
	// rlwinm. r10,r11,8,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82421a68
	if (ctx.cr0.eq) goto loc_82421A68;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r29,72(r25)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r25.u32 + 72);
	// rlwinm r28,r11,7,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// bl 0x8241c0d0
	ctx.lr = 0x8242197C;
	sub_8241C0D0(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// rlwimi r11,r28,25,6,6
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 25) & 0x2000000) | (ctx.r11.u64 & 0xFFFFFFFFFDFFFFFF);
	// stw r29,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// oris r10,r10,384
	ctx.r10.u64 = ctx.r10.u64 | 25165824;
	// stw r3,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// b 0x82421a60
	goto loc_82421A60;
loc_8242199C:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r29,44(r24)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r24.u32 + 44);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ca1f0
	ctx.lr = 0x824219BC;
	sub_824CA1F0(ctx, base);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r9,r3,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r11,r9,36
	ctx.r11.s64 = ctx.r9.s64 + 36;
	// stw r8,40(r9)
	REX_STORE_U32(ctx.r9.u32 + 40, ctx.r8.u32);
	// ori r7,r10,1
	ctx.r7.u64 = ctx.r10.u64 | 1;
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r11,r11,-36
	ctx.r11.s64 = ctx.r11.s64 + -36;
	// stw r10,36(r8)
	REX_STORE_U32(ctx.r8.u32 + 36, ctx.r10.u32);
	// stw r7,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r7.u32);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// oris r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 50331648;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x82410a40
	ctx.lr = 0x82421A08;
	sub_82410A40(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// stw r25,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r25.u32);
	// rlwimi r11,r10,25,6,6
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x2000000) | (ctx.r11.u64 & 0xFFFFFFFFFDFFFFFF);
	// stw r3,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// oris r10,r9,384
	ctx.r10.u64 = ctx.r9.u64 | 25165824;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r10,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lwz r11,76(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 76);
	// rlwinm. r10,r11,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82421a68
	if (ctx.cr0.eq) goto loc_82421A68;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwinm r29,r11,9,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// bl 0x823fcce0
	ctx.lr = 0x82421A48;
	sub_823FCCE0(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// rlwimi r11,r29,23,8,8
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 23) & 0x800000) | (ctx.r11.u64 & 0xFFFFFFFFFF7FFFFF);
	// stw r3,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// oris r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 8388608;
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
loc_82421A60:
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r10,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
loc_82421A68:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 48);
	// rlwinm. r11,r11,5,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82421aac
	if (ctx.cr0.eq) goto loc_82421AAC;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_82421AAC:
	// lwz r11,48(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 48);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// stw r11,48(r27)
	REX_STORE_U32(ctx.r27.u32 + 48, ctx.r11.u32);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// rlwimi r10,r11,0,6,6
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000) | (ctx.r10.u64 & 0xFFFFFFFFFDFFFFFF);
	// stw r10,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// b 0x82421b1c
	goto loc_82421B1C;
loc_82421AC8:
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82423688
	if (!ctx.cr0.eq) goto loc_82423688;
	// rlwinm r11,r21,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82421ae8
	if (ctx.cr0.eq) goto loc_82421AE8;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x82421af0
	goto loc_82421AF0;
loc_82421AE8:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r27,r11,-4
	ctx.r27.s64 = ctx.r11.s64 + -4;
loc_82421AF0:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82421B1C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x824d5330
	ctx.lr = 0x82421B2C;
	sub_824D5330(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r4,172(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// bl 0x824d5138
	ctx.lr = 0x82421B4C;
	sub_824D5138(ctx, base);
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x823fcdc0
	ctx.lr = 0x82421B64;
	sub_823FCDC0(ctx, base);
	// addi r11,r24,-16
	ctx.r11.s64 = ctx.r24.s64 + -16;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x82421bf8
	if (!ctx.cr6.eq) goto loc_82421BF8;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82421bf8
	if (!ctx.cr6.eq) goto loc_82421BF8;
	// lwz r8,8(r24)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm r10,r8,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,11520
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11520, ctx.xer);
	// bne cr6,0x82421bf8
	if (!ctx.cr6.eq) goto loc_82421BF8;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi. r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82421bb4
	if (!ctx.cr0.eq) goto loc_82421BB4;
	// rlwinm r10,r10,30,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0xF;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// beq cr6,0x82421bf8
	if (ctx.cr6.eq) goto loc_82421BF8;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// beq cr6,0x82421bf8
	if (ctx.cr6.eq) goto loc_82421BF8;
loc_82421BB4:
	// lwz r9,12(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 12);
loc_82421BB8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82421bd4
	if (ctx.cr6.eq) goto loc_82421BD4;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82421bd8
	if (!ctx.cr6.eq) goto loc_82421BD8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x82421bb8
	goto loc_82421BB8;
loc_82421BD4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82421BD8:
	// not r9,r8
	ctx.r9.u64 = ~ctx.r8.u64;
	// rlwimi r9,r8,0,14,12
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF) | (ctx.r9.u64 & 0x40000);
	// stw r9,8(r24)
	REX_STORE_U32(ctx.r24.u32 + 8, ctx.r9.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// rlwimi r9,r10,0,31,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD) | (ctx.r9.u64 & 0x2);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
loc_82421BF8:
	// lwz r11,88(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// lwz r11,84(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// stw r11,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x82483ac8
	ctx.lr = 0x82421C14;
	sub_82483AC8(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x82421c24
	goto loc_82421C24;
loc_82421C1C:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82421e58
	if (ctx.cr6.eq) goto loc_82421E58;
loc_82421C24:
	// clrlwi. r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82421c5c
	if (ctx.cr0.eq) goto loc_82421C5C;
	// lwz r10,0(r16)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
loc_82421C30:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82421c5c
	if (ctx.cr6.eq) goto loc_82421C5C;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r9,r9,9,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82421c54
	if (!ctx.cr0.eq) goto loc_82421C54;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82421e28
	if (ctx.cr6.eq) goto loc_82421E28;
loc_82421C54:
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82421c30
	goto loc_82421C30;
loc_82421C5C:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82410a40
	ctx.lr = 0x82421C68;
	sub_82410A40(ctx, base);
	// lwz r11,28(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82421d38
	if (!ctx.cr6.eq) goto loc_82421D38;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x82421c94
	if (ctx.cr6.lt) goto loc_82421C94;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// ble cr6,0x82421c98
	if (!ctx.cr6.gt) goto loc_82421C98;
loc_82421C94:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82421C98:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82421d38
	if (ctx.cr0.eq) goto loc_82421D38;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241cef8
	ctx.lr = 0x82421CB0;
	sub_8241CEF8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82421d38
	if (ctx.cr0.eq) goto loc_82421D38;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// lwz r10,16(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 16);
	// rlwinm r11,r11,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// lwz r9,708(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 708);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// stb r27,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// andc r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rlwinm r7,r11,1,27,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1E;
	// andc r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,22,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x3E0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// ori r8,r11,7296
	ctx.r8.u64 = ctx.r11.u64 | 7296;
	// stwx r23,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r23.u32);
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// or r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwinm r11,r10,0,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFC000;
	// addi r11,r11,16384
	ctx.r11.s64 = ctx.r11.s64 + 16384;
	// rlwimi r11,r10,0,18,14
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFE3FFF) | (ctx.r11.u64 & 0x1C000);
	// stw r11,8(r23)
	REX_STORE_U32(ctx.r23.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,0,27,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF9F;
	// rlwinm r11,r11,0,24,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82421e24
	goto loc_82421E24;
loc_82421D38:
	// lwz r11,28(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 28);
	// addi r28,r25,24
	ctx.r28.s64 = ctx.r25.s64 + 24;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82421d98
	if (!ctx.cr0.eq) goto loc_82421D98;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x82421d8c
	goto loc_82421D8C;
loc_82421D50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8240a058
	ctx.lr = 0x82421D58;
	sub_8240A058(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82421d7c
	if (ctx.cr0.eq) goto loc_82421D7C;
	// lwz r11,48(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 48);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82421e4c
	if (ctx.cr0.eq) goto loc_82421E4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fca40
	ctx.lr = 0x82421D74;
	sub_823FCA40(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82421e4c
	if (ctx.cr0.eq) goto loc_82421E4C;
loc_82421D7C:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82421d98
	if (!ctx.cr0.eq) goto loc_82421D98;
loc_82421D8C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82421d50
	if (!ctx.cr0.eq) goto loc_82421D50;
loc_82421D98:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r5,r11,2
	ctx.r5.u64 = ctx.r11.u64 | 2;
loc_82421DA0:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824cf4d0
	ctx.lr = 0x82421DB0;
	sub_824CF4D0(ctx, base);
	// lwz r11,28(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 28);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// lwz r31,12(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// beq cr6,0x82421e08
	if (ctx.cr6.eq) goto loc_82421E08;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8244fe50
	ctx.lr = 0x82421DD0;
	sub_8244FE50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8244fe50
	ctx.lr = 0x82421DE4;
	sub_8244FE50(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// clrlwi. r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82421e08
	if (!ctx.cr0.eq) goto loc_82421E08;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwimi r11,r27,16,13,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0x70000) | (ctx.r11.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r11,16(r29)
	REX_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// sth r20,18(r29)
	REX_STORE_U16(ctx.r29.u32 + 18, ctx.r20.u16);
	// stw r10,32(r29)
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r10.u32);
loc_82421E08:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwimi r11,r27,16,13,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0x70000) | (ctx.r11.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// sth r20,18(r31)
	REX_STORE_U16(ctx.r31.u32 + 18, ctx.r20.u16);
	// stw r9,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
loc_82421E24:
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
loc_82421E28:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82405490
	ctx.lr = 0x82421E30;
	sub_82405490(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne 0x824215b4
	if (!ctx.cr0.eq) goto loc_824215B4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82411188
	ctx.lr = 0x82421E48;
	sub_82411188(ctx, base);
	// b 0x82421508
	goto loc_82421508;
loc_82421E4C:
	// rlwimi r31,r27,0,30,31
	ctx.r31.u64 = (__builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x3) | (ctx.r31.u64 & 0xFFFFFFFFFFFFFFFC);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// b 0x82421da0
	goto loc_82421DA0;
loc_82421E58:
	// mr r17,r27
	ctx.r17.u64 = ctx.r27.u64;
	// b 0x82421508
	goto loc_82421508;
loc_82421E60:
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x82421E6C;
	sub_8241C1D8(ctx, base);
	// clrlwi. r11,r17,24
	ctx.r11.u64 = ctx.r17.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bne 0x82421e80
	if (!ctx.cr0.eq) goto loc_82421E80;
	// cmplw cr6,r3,r20
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r20.u32, ctx.xer);
	// beq cr6,0x82421fc8
	if (ctx.cr6.eq) goto loc_82421FC8;
loc_82421E80:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82421ec0
	if (!ctx.cr6.eq) goto loc_82421EC0;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241ccd0
	ctx.lr = 0x82421E98;
	sub_8241CCD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82421ec0
	if (!ctx.cr0.eq) goto loc_82421EC0;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241d2d8
	ctx.lr = 0x82421EAC;
	sub_8241D2D8(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241d2d8
	ctx.lr = 0x82421EBC;
	sub_8241D2D8(ctx, base);
	// b 0x82421fc8
	goto loc_82421FC8;
loc_82421EC0:
	// lwz r31,28(r16)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r16.u32 + 28);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r5,r11,2
	ctx.r5.u64 = ctx.r11.u64 | 2;
	// bl 0x824d04c8
	ctx.lr = 0x82421EE0;
	sub_824D04C8(ctx, base);
	// lwz r7,16(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r15,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwimi r7,r27,16,13,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0x70000) | (ctx.r7.u64 & 0xFFFFFFFFFFF8FFFF);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// oris r6,r6,128
	ctx.r6.u64 = ctx.r6.u64 | 8388608;
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r7,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r6,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// sth r15,18(r3)
	REX_STORE_U16(ctx.r3.u32 + 18, ctx.r15.u16);
	// lwz r10,708(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 708);
	// stwx r3,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// stwx r3,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,684(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 684);
	// lwz r9,672(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 672);
	// mullw r9,r29,r9
	ctx.r9.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r9.s32);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bne 0x82421fbc
	if (!ctx.cr0.eq) goto loc_82421FBC;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82421fbc
	if (ctx.cr0.eq) goto loc_82421FBC;
loc_82421F44:
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x82421fa0
	if (!ctx.cr6.eq) goto loc_82421FA0;
	// lwz r8,0(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
loc_82421F58:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82421fa0
	if (ctx.cr6.eq) goto loc_82421FA0;
	// lwz r11,12(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82421f98
	if (ctx.cr0.eq) goto loc_82421F98;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lhz r11,18(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// rlwinm r10,r10,27,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r11,r11,58
	ctx.r11.u64 = ctx.r11.u64 & 0x3F;
	// sld r11,r27,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r27.u64 << (ctx.r11.u8 & 0x7F));
	// ldx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// stdx r11,r10,r9
	REX_STORE_U64(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u64);
loc_82421F98:
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// b 0x82421f58
	goto loc_82421F58;
loc_82421FA0:
	// rlwinm r11,r7,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82421fbc
	if (!ctx.cr0.eq) goto loc_82421FBC;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82421f44
	if (!ctx.cr6.eq) goto loc_82421F44;
loc_82421FBC:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
loc_82421FC8:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824057e0
	ctx.lr = 0x82421FDC;
	sub_824057E0(ctx, base);
	// lwz r15,108(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r17,1
	ctx.r17.s64 = 1;
	// li r21,0
	ctx.r21.s64 = 0;
loc_82421FEC:
	// lwz r10,668(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 668);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82421094
	if (ctx.cr6.lt) goto loc_82421094;
loc_82422000:
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 668);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,63
	ctx.r11.s64 = ctx.r11.s64 + 63;
	// rlwinm r4,r11,29,3,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFF8;
	// bl 0x823fd9c8
	ctx.lr = 0x8242201C;
	sub_823FD9C8(ctx, base);
	// stw r3,692(r30)
	REX_STORE_U32(ctx.r30.u32 + 692, ctx.r3.u32);
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 668);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823fd9c8
	ctx.lr = 0x82422034;
	sub_823FD9C8(ctx, base);
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 668);
	// stw r3,688(r30)
	REX_STORE_U32(ctx.r30.u32 + 688, ctx.r3.u32);
	// stw r21,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r17,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r17.u32);
	// ble cr6,0x824231d8
	if (!ctx.cr6.gt) goto loc_824231D8;
loc_8242204C:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r16,r11,r10
	ctx.r16.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r15,0(r16)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x824231d8
	if (ctx.cr6.eq) goto loc_824231D8;
	// lwz r11,8(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14336
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14336, ctx.xer);
	// bne cr6,0x824220c8
	if (!ctx.cr6.eq) goto loc_824220C8;
	// lhz r31,18(r15)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r15.u32 + 18);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x82422088;
	sub_8241C1D8(ctx, base);
	// lwz r11,688(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 688);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824231c0
	if (!ctx.cr6.eq) goto loc_824231C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241d828
	ctx.lr = 0x824220A8;
	sub_8241D828(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241d058
	ctx.lr = 0x824220C4;
	sub_8241D058(ctx, base);
	// b 0x824231c0
	goto loc_824231C0;
loc_824220C8:
	// lwz r10,16(r15)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r15.u32 + 16);
	// rlwinm r20,r11,31,28,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// li r18,0
	ctx.r18.s64 = 0;
	// rlwinm r19,r10,16,29,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x7;
	// clrlwi r14,r10,16
	ctx.r14.u64 = ctx.r10.u32 & 0xFFFF;
	// add r17,r14,r19
	ctx.r17.u64 = ctx.r14.u64 + ctx.r19.u64;
loc_824220E0:
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r21,1
	ctx.r21.s64 = 1;
	// mr r26,r14
	ctx.r26.u64 = ctx.r14.u64;
	// cmplw cr6,r14,r17
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r17.u32, ctx.xer);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bge cr6,0x82422248
	if (!ctx.cr6.lt) goto loc_82422248;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
loc_82422104:
	// and. r11,r21,r20
	ctx.r11.u64 = ctx.r21.u64 & ctx.r20.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82422230
	if (ctx.cr0.eq) goto loc_82422230;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x82422118;
	sub_8241C1D8(ctx, base);
	// lwz r11,688(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 688);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r31,r14
	ctx.r31.u64 = ctx.r14.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwzx r28,r10,r11
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// li r29,0
	ctx.r29.s64 = 0;
loc_82422138:
	// and. r11,r24,r20
	ctx.r11.u64 = ctx.r24.u64 & ctx.r20.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82422218
	if (ctx.cr0.eq) goto loc_82422218;
	// cmplw cr6,r26,r31
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82422218
	if (ctx.cr6.eq) goto loc_82422218;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x82422154;
	sub_8241C1D8(ctx, base);
	// lwz r10,688(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 688);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwzx r4,r9,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// beq cr6,0x824221a0
	if (ctx.cr6.eq) goto loc_824221A0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82422194
	if (ctx.cr6.eq) goto loc_82422194;
	// cmplw cr6,r28,r4
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x824221cc
	if (ctx.cr6.eq) goto loc_824221CC;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241f3e0
	ctx.lr = 0x82422190;
	sub_8241F3E0(ctx, base);
	// b 0x824221b8
	goto loc_824221B8;
loc_82422194:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x824221b0
	goto loc_824221B0;
loc_824221A0:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824221c8
	if (ctx.cr6.eq) goto loc_824221C8;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_824221B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241e7c0
	ctx.lr = 0x824221B8;
	sub_8241E7C0(ctx, base);
loc_824221B8:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x824221cc
	goto loc_824221CC;
loc_824221C8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824221CC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82422218
	if (ctx.cr0.eq) goto loc_82422218;
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// rlwinm r10,r23,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 29) & 0x1FFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrlwi r9,r23,27
	ctx.r9.u64 = ctx.r23.u32 & 0x1F;
	// slw r7,r8,r27
	ctx.r7.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r27.u8 & 0x3F));
	// lwzx r6,r10,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// or r7,r9,r6
	ctx.r7.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rlwinm r9,r29,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFFC;
	// stwx r7,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// slw r8,r8,r22
	ctx.r8.u64 = ctx.r22.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r22.u8 & 0x3F));
	// clrlwi r10,r29,27
	ctx.r10.u64 = ctx.r29.u32 & 0x1F;
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stwx r10,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
loc_82422218:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// rlwinm r24,r24,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r31,r17
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r17.u32, ctx.xer);
	// blt cr6,0x82422138
	if (ctx.cr6.lt) goto loc_82422138;
loc_82422230:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// rlwinm r21,r21,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r26,r17
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r17.u32, ctx.xer);
	// blt cr6,0x82422104
	if (ctx.cr6.lt) goto loc_82422104;
loc_82422248:
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x824222f0
	if (ctx.cr6.eq) goto loc_824222F0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
loc_8242226C:
	// and. r10,r7,r20
	ctx.r10.u64 = ctx.r7.u64 & ctx.r20.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824222e0
	if (ctx.cr0.eq) goto loc_824222E0;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// li r3,2
	ctx.r3.s64 = 2;
	// rlwinm r5,r11,29,3,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// slw r10,r3,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r5,r5,r4
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r31,r11,27
	ctx.r31.u64 = ctx.r11.u32 & 0x1F;
	// and r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 & ctx.r5.u64;
	// slw r4,r6,r31
	ctx.r4.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r31.u8 & 0x3F));
	// and r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
	// lis r5,-28311
	ctx.r5.s64 = -1855389696;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r5,r5,5192
	ctx.r5.u64 = ctx.r5.u64 | 5192;
	// srw r10,r10,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r31.u8 & 0x3F));
	// ori r4,r3,36262
	ctx.r4.u64 = ctx.r3.u64 | 36262;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldimi r5,r4,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// srd r5,r5,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r10.u8 & 0x7F));
	// srd r5,r5,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r10.u8 & 0x7F));
	// srd r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r10.u8 & 0x7F));
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x824222e0
	if (!ctx.cr6.lt) goto loc_824222E0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
loc_824222E0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bdnz 0x8242226c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242226C;
loc_824222F0:
	// add r28,r29,r14
	ctx.r28.u64 = ctx.r29.u64 + ctx.r14.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x82422300;
	sub_8241C1D8(ctx, base);
	// lwz r11,688(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 688);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82422348
	if (!ctx.cr6.eq) goto loc_82422348;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241d828
	ctx.lr = 0x8242231C;
	sub_8241D828(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x8242232C;
	sub_8241C1D8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8241d058
	ctx.lr = 0x82422348;
	sub_8241D058(ctx, base);
loc_82422348:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r10,r29,31,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// li r8,2
	ctx.r8.s64 = 2;
	// rlwinm r7,r29,2,27,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x1C;
	// slw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// slw r10,r9,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r7.u8 & 0x3F));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// srw r11,r11,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r7.u8 & 0x3F));
	// andc. r27,r20,r11
	ctx.r27.u64 = ctx.r20.u64 & ~ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82422454
	if (ctx.cr0.eq) goto loc_82422454;
loc_8242238C:
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// andc r29,r27,r11
	ctx.r29.u64 = ctx.r27.u64 & ~ctx.r11.u64;
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// subf r27,r29,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r29.u64;
	// subf r11,r11,r14
	ctx.r11.u64 = ctx.r14.u64 - ctx.r11.u64;
	// addi r26,r11,31
	ctx.r26.s64 = ctx.r11.s64 + 31;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x824223B0;
	sub_8241C1D8(ctx, base);
	// lwz r11,688(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 688);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwzx r28,r10,r11
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r28,r31
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82422448
	if (ctx.cr6.eq) goto loc_82422448;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8242241c
	if (ctx.cr6.eq) goto loc_8242241C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8241f3e0
	ctx.lr = 0x824223E0;
	sub_8241F3E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8242244c
	if (ctx.cr0.eq) goto loc_8242244C;
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,124(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x8241f188
	ctx.lr = 0x82422414;
	sub_8241F188(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82422448
	goto loc_82422448;
loc_8242241C:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x8241e7c0
	ctx.lr = 0x82422428;
	sub_8241E7C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8242244c
	if (ctx.cr0.eq) goto loc_8242244C;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241de90
	ctx.lr = 0x82422448;
	sub_8241DE90(ctx, base);
loc_82422448:
	// subf r20,r29,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r29.u64;
loc_8242244C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8242238c
	if (!ctx.cr6.eq) goto loc_8242238C;
loc_82422454:
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x824220e0
	if (!ctx.cr6.eq) goto loc_824220E0;
	// lwz r11,8(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 8);
	// cmplwi cr6,r18,1
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 1, ctx.xer);
	// ble cr6,0x824226e8
	if (!ctx.cr6.gt) goto loc_824226E8;
	// lwz r22,88(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r24,r11,31,28,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// li r23,1
	ctx.r23.s64 = 1;
loc_82422478:
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// mr r29,r14
	ctx.r29.u64 = ctx.r14.u64;
	// cmplw cr6,r14,r17
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r17.u32, ctx.xer);
	// bge cr6,0x824224d8
	if (!ctx.cr6.lt) goto loc_824224D8;
loc_82422490:
	// and. r11,r31,r24
	ctx.r11.u64 = ctx.r31.u64 & ctx.r24.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824224c8
	if (ctx.cr0.eq) goto loc_824224C8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x824224A4;
	sub_8241C1D8(ctx, base);
	// lwz r11,688(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 688);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// beq cr6,0x824224c0
	if (ctx.cr6.eq) goto loc_824224C0;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x824224c8
	if (!ctx.cr6.eq) goto loc_824224C8;
loc_824224C0:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// or r27,r31,r27
	ctx.r27.u64 = ctx.r31.u64 | ctx.r27.u64;
loc_824224C8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r29,r17
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r17.u32, ctx.xer);
	// blt cr6,0x82422490
	if (ctx.cr6.lt) goto loc_82422490;
loc_824224D8:
	// subf r24,r27,r24
	ctx.r24.u64 = ctx.r24.u64 - ctx.r27.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x824226bc
	if (ctx.cr6.eq) goto loc_824226BC;
	// addi r25,r15,4
	ctx.r25.s64 = ctx.r15.s64 + 4;
loc_824224E8:
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// lwz r31,0(r25)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// andc r26,r27,r11
	ctx.r26.u64 = ctx.r27.u64 & ~ctx.r11.u64;
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// subfic r29,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r29.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
loc_824224FC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824226b4
	if (ctx.cr6.eq) goto loc_824226B4;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82422538
	if (ctx.cr6.eq) goto loc_82422538;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82422538
	if (ctx.cr0.eq) goto loc_82422538;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82422538
	if (!ctx.cr0.eq) goto loc_82422538;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fcbd0
	ctx.lr = 0x82422530;
	sub_823FCBD0(ctx, base);
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82422540
	if (ctx.cr6.eq) goto loc_82422540;
loc_82422538:
	// lwz r31,8(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x824224fc
	goto loc_824224FC;
loc_82422540:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x8240a118
	ctx.lr = 0x82422548;
	sub_8240A118(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8242255c
	if (ctx.cr0.eq) goto loc_8242255C;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// rlwimi r5,r23,0,30,31
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x3) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFFC);
	// b 0x8242256c
	goto loc_8242256C;
loc_8242255C:
	// lwz r11,28(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 28);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r5,r11,2
	ctx.r5.u64 = ctx.r11.u64 | 2;
loc_8242256C:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r4,28(r15)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r15.u32 + 28);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824d0720
	ctx.lr = 0x82422580;
	sub_824D0720(ctx, base);
	// lwz r11,16(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8242259c
	if (ctx.cr0.eq) goto loc_8242259C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// b 0x824225a4
	goto loc_824225A4;
loc_8242259C:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r31,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
loc_824225A4:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// add r11,r29,r14
	ctx.r11.u64 = ctx.r29.u64 + ctx.r14.u64;
	// rlwimi r10,r23,16,13,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 16) & 0x70000) | (ctx.r10.u64 & 0xFFFFFFFFFFF8FFFF);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// oris r10,r9,128
	ctx.r10.u64 = ctx.r9.u64 | 8388608;
	// sth r11,18(r31)
	REX_STORE_U16(ctx.r31.u32 + 18, ctx.r11.u16);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r10,708(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 708);
	// stwx r31,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r31.u32);
	// lwz r10,668(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 668);
	// cmplw cr6,r22,r10
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82422614
	if (!ctx.cr6.lt) goto loc_82422614;
	// addi r10,r16,-4
	ctx.r10.s64 = ctx.r16.s64 + -4;
loc_824225F4:
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r15
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82422614
	if (!ctx.cr6.eq) goto loc_82422614;
	// stwu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r31.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,668(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 668);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824225f4
	if (ctx.cr6.lt) goto loc_824225F4;
loc_82422614:
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_82422618:
	// lwz r29,0(r28)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x824226b4
	if (ctx.cr6.eq) goto loc_824226B4;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824226a0
	if (ctx.cr6.eq) goto loc_824226A0;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824226a0
	if (ctx.cr0.eq) goto loc_824226A0;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824226a0
	if (!ctx.cr0.eq) goto loc_824226A0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823fcbd0
	ctx.lr = 0x82422650;
	sub_823FCBD0(ctx, base);
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x824226a0
	if (!ctx.cr6.eq) goto loc_824226A0;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82422670
	goto loc_82422670;
loc_82422668:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_82422670:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82422668
	if (!ctx.cr6.eq) goto loc_82422668;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r29,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r31,12(r29)
	REX_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_824226A0:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82422618
	if (!ctx.cr6.eq) goto loc_82422618;
	// addi r28,r29,8
	ctx.r28.s64 = ctx.r29.s64 + 8;
	// b 0x82422618
	goto loc_82422618;
loc_824226B4:
	// subf. r27,r26,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x824224e8
	if (!ctx.cr0.eq) goto loc_824224E8;
loc_824226BC:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82422478
	if (!ctx.cr6.eq) goto loc_82422478;
	// lwz r11,16(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 16);
	// rlwinm. r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824231c0
	if (!ctx.cr0.eq) goto loc_824231C0;
	// lwz r11,8(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// sth r10,18(r15)
	REX_STORE_U16(ctx.r15.u32 + 18, ctx.r10.u16);
	// stw r11,8(r15)
	REX_STORE_U32(ctx.r15.u32 + 8, ctx.r11.u32);
	// b 0x824231c0
	goto loc_824231C0;
loc_824226E8:
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14080, ctx.xer);
	// bne cr6,0x824231c0
	if (!ctx.cr6.eq) goto loc_824231C0;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r20,r11,31,28,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// bl 0x8241c1d8
	ctx.lr = 0x82422704;
	sub_8241C1D8(ctx, base);
	// lwz r11,688(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 688);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r18,r15,44
	ctx.r18.s64 = ctx.r15.s64 + 44;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r22,r18
	ctx.r22.u64 = ctx.r18.u64;
	// li r21,2
	ctx.r21.s64 = 2;
	// lwzx r19,r10,r11
	ctx.r19.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// li r17,1
	ctx.r17.s64 = 1;
loc_82422724:
	// lwz r11,8(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 8);
	// rlwinm r10,r11,13,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r24,r10
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824229e0
	if (!ctx.cr6.lt) goto loc_824229E0;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// slw r31,r17,r24
	ctx.r31.u64 = ctx.r24.u8 & 0x20 ? 0 : (ctx.r17.u32 << (ctx.r24.u8 & 0x3F));
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r9,r9,9,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82422754
	if (!ctx.cr0.eq) goto loc_82422754;
loc_8242274C:
	// subf r20,r31,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r31.u64;
	// b 0x824229bc
	goto loc_824229BC;
loc_82422754:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r10,18(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 18);
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// add r23,r10,r11
	ctx.r23.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x82422770;
	sub_8241C1D8(ctx, base);
	// lwz r11,688(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 688);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwzx r27,r10,r11
	ctx.r27.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r27,r19
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x8242274c
	if (ctx.cr6.eq) goto loc_8242274C;
	// rlwinm r11,r15,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x8242286c
	goto loc_8242286C;
loc_82422790:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82422868
	if (ctx.cr0.eq) goto loc_82422868;
	// li r26,0
	ctx.r26.s64 = 0;
	// rlwinm r31,r11,31,28,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
loc_824227A4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824227cc
	if (ctx.cr6.eq) goto loc_824227CC;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// lhz r10,18(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 18);
	// andc r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 & ~ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r4,r11,31
	ctx.r4.s64 = ctx.r11.s64 + 31;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x824227d4
	goto loc_824227D4;
loc_824227CC:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824227D4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82422860
	if (ctx.cr6.eq) goto loc_82422860;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x824227E4;
	sub_8241C1D8(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x824229c8
	if (ctx.cr6.eq) goto loc_824229C8;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,692(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 692);
	// rlwinm r8,r28,1,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFC0;
	// subf r11,r10,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r10.u64;
	// rlwinm r7,r28,30,3,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 30) & 0x1FFFFFF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// ldx r9,r7,r9
	ctx.r9.u64 = REX_LOAD_U64(ctx.r7.u32 + ctx.r9.u32);
	// slw r11,r21,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r11.u8 & 0x3F));
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r9,r3,29,3,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFF8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// clrldi r10,r3,58
	ctx.r10.u64 = ctx.r3.u64 & 0x3F;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// sld r10,r17,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r17.u64 << (ctx.r10.u8 & 0x7F));
	// lwzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// ldx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r9.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// bne cr6,0x82422854
	if (!ctx.cr6.eq) goto loc_82422854;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82422854:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824229d0
	if (ctx.cr0.eq) goto loc_824229D0;
loc_8242285C:
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
loc_82422860:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824229bc
	if (!ctx.cr0.eq) goto loc_824229BC;
loc_82422868:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
loc_8242286C:
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82422884
	if (!ctx.cr0.eq) goto loc_82422884;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bne cr6,0x82422790
	if (!ctx.cr6.eq) goto loc_82422790;
loc_82422884:
	// add r4,r24,r14
	ctx.r4.u64 = ctx.r24.u64 + ctx.r14.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x82422890;
	sub_8241C1D8(ctx, base);
	// lwz r11,672(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 672);
	// rlwinm r7,r3,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,692(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 692);
	// mullw r10,r11,r28
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// lwz r11,684(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 684);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r6,r3,1,0,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFC0;
	// rlwinm r5,r3,30,3,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x1FFFFFF8;
	// subf r9,r7,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r7.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r10,r6,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r6.u64;
	// rlwinm r29,r3,29,3,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFF8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// ldx r8,r5,r8
	ctx.r8.u64 = REX_LOAD_U64(ctx.r5.u32 + ctx.r8.u32);
	// clrldi r7,r3,58
	ctx.r7.u64 = ctx.r3.u64 & 0x3F;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// sld r7,r17,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r17.u64 << (ctx.r7.u8 & 0x7F));
	// ldx r6,r29,r11
	ctx.r6.u64 = REX_LOAD_U64(ctx.r29.u32 + ctx.r11.u32);
	// srd r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r10.u8 & 0x7F));
	// slw r10,r21,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r9.u8 & 0x3F));
	// not r26,r7
	ctx.r26.u64 = ~ctx.r7.u64;
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r8,r26,r6
	ctx.r8.u64 = ctx.r26.u64 & ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// and r25,r9,r10
	ctx.r25.u64 = ctx.r9.u64 & ctx.r10.u64;
	// stdx r8,r29,r11
	REX_STORE_U64(ctx.r29.u32 + ctx.r11.u32, ctx.r8.u64);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82422930
	if (!ctx.cr6.eq) goto loc_82422930;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241d828
	ctx.lr = 0x82422910;
	sub_8241D828(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241d058
	ctx.lr = 0x82422930;
	sub_8241D058(ctx, base);
loc_82422930:
	// rlwinm r9,r28,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,692(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 692);
	// rlwinm r7,r28,1,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFC0;
	// lwz r5,672(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 672);
	// subf r11,r9,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r9.u64;
	// lwz r10,684(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 684);
	// rlwinm r6,r28,30,3,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 30) & 0x1FFFFFF8;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// ldx r8,r6,r8
	ctx.r8.u64 = REX_LOAD_U64(ctx.r6.u32 + ctx.r8.u32);
	// mullw r7,r5,r31
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r31.s32);
	// slw r11,r21,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r11.u8 & 0x3F));
	// srd r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// and r28,r9,r8
	ctx.r28.u64 = ctx.r9.u64 & ctx.r8.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r31,r28,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r31,r27
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// bl 0x8241c568
	ctx.lr = 0x8242298C;
	sub_8241C568(ctx, base);
	// addi r11,r25,4
	ctx.r11.s64 = ctx.r25.s64 + 4;
	// lwz r5,672(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 672);
	// lwzx r4,r31,r27
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r19
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
	// bl 0x8241c568
	ctx.lr = 0x824229A4;
	sub_8241C568(ctx, base);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// ldx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U64(ctx.r29.u32 + ctx.r11.u32);
	// and r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 & ctx.r26.u64;
	// stdx r10,r29,r11
	REX_STORE_U64(ctx.r29.u32 + ctx.r11.u32, ctx.r10.u64);
loc_824229BC:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// b 0x82422724
	goto loc_82422724;
loc_824229C8:
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8242285c
	if (ctx.cr6.eq) goto loc_8242285C;
loc_824229D0:
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// andc r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 & ~ctx.r11.u64;
	// subf r31,r11,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r11.u64;
	// b 0x824227a4
	goto loc_824227A4;
loc_824229E0:
	// rlwinm r11,r11,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// lwz r16,84(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r17,1
	ctx.r17.s64 = 1;
	// subf r22,r20,r11
	ctx.r22.u64 = ctx.r11.u64 - ctx.r20.u64;
loc_824229F0:
	// li r24,0
	ctx.r24.s64 = 0;
loc_824229F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241d828
	ctx.lr = 0x824229FC;
	sub_8241D828(ctx, base);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// lwz r7,8(r15)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r15.u32 + 8);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r24,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r7,r7,13,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 13) & 0x7;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// oris r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 50331648;
	// oris r6,r11,12288
	ctx.r6.u64 = ctx.r11.u64 | 805306368;
	// stw r6,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// bl 0x8241f188
	ctx.lr = 0x82422A4C;
	sub_8241F188(ctx, base);
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82422ca4
	if (ctx.cr6.eq) goto loc_82422CA4;
loc_82422A58:
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// andc r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 & ~ctx.r11.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r27,r11,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r11.u64;
	// subfic r26,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r26.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// addi r11,r26,11
	ctx.r11.s64 = ctx.r26.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r15.u32);
	// lwz r23,12(r11)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// lhz r10,18(r23)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r23.u32 + 18);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x82422A98;
	sub_8241C1D8(ctx, base);
	// lwz r11,688(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 688);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r28,r10,r11
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82422ad8
	if (!ctx.cr6.eq) goto loc_82422AD8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241d828
	ctx.lr = 0x82422AB8;
	sub_8241D828(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241d058
	ctx.lr = 0x82422AD8;
	sub_8241D058(ctx, base);
loc_82422AD8:
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,692(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 692);
	// rlwinm r8,r31,1,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFC0;
	// lwz r5,672(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 672);
	// subf r11,r10,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r10.u64;
	// rlwinm r7,r31,30,3,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x1FFFFFF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// ldx r9,r7,r9
	ctx.r9.u64 = REX_LOAD_U64(ctx.r7.u32 + ctx.r9.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// slw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// rlwinm r25,r11,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r25,r28
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r28.u32);
	// bl 0x824078e8
	ctx.lr = 0x82422B2C;
	sub_824078E8(ctx, base);
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 668);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82422c9c
	if (ctx.cr6.gt) goto loc_82422C9C;
	// rlwinm r24,r26,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
loc_82422B44:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x82422B50;
	sub_8241C1D8(ctx, base);
	// lwzx r11,r24,r21
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r21.u32);
	// rlwinm r8,r3,29,3,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r10,r3,58
	ctx.r10.u64 = ctx.r3.u64 & 0x3F;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// sld r7,r17,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r17.u64 << (ctx.r10.u8 & 0x7F));
	// ldx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r8.u32);
	// and r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// bne cr6,0x82422b7c
	if (!ctx.cr6.eq) goto loc_82422B7C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82422B7C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82422bc0
	if (ctx.cr0.eq) goto loc_82422BC0;
	// rlwinm r10,r31,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r9,r31,58
	ctx.r9.u64 = ctx.r31.u64 & 0x3F;
	// sld r9,r17,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r17.u64 << (ctx.r9.u8 & 0x7F));
	// ldx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// and r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// bne cr6,0x82422ba8
	if (!ctx.cr6.eq) goto loc_82422BA8;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82422BA8:
	// clrlwi. r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82422c5c
	if (!ctx.cr0.eq) goto loc_82422C5C;
	// ldx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stdx r9,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u64);
	// b 0x82422c5c
	goto loc_82422C5C;
loc_82422BC0:
	// lwz r10,8(r15)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r15.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm. r6,r10,13,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82422c18
	if (ctx.cr0.eq) goto loc_82422C18;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
loc_82422BD4:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82422c00
	if (ctx.cr6.eq) goto loc_82422C00;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ldx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + ctx.r10.u32);
	// and r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// bne cr6,0x82422bf8
	if (!ctx.cr6.eq) goto loc_82422BF8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82422BF8:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82422c18
	if (!ctx.cr0.eq) goto loc_82422C18;
loc_82422C00:
	// lwz r10,8(r15)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r15.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r10,r10,13,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82422bd4
	if (ctx.cr6.lt) goto loc_82422BD4;
loc_82422C18:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82422e48
	if (!ctx.cr6.eq) goto loc_82422E48;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241e5d8
	ctx.lr = 0x82422C38;
	sub_8241E5D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82422e48
	if (ctx.cr0.eq) goto loc_82422E48;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241d058
	ctx.lr = 0x82422C5C;
	sub_8241D058(ctx, base);
loc_82422C5C:
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 668);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82422c74
	if (!ctx.cr6.eq) goto loc_82422C74;
	// li r31,-1
	ctx.r31.s64 = -1;
	// b 0x82422c88
	goto loc_82422C88;
loc_82422C74:
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// lwz r5,672(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 672);
	// lwzx r3,r25,r28
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r28.u32);
	// bl 0x824078e8
	ctx.lr = 0x82422C84;
	sub_824078E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82422C88:
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 668);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82422b44
	if (!ctx.cr6.gt) goto loc_82422B44;
	// li r24,0
	ctx.r24.s64 = 0;
loc_82422C9C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82422a58
	if (!ctx.cr6.eq) goto loc_82422A58;
loc_82422CA4:
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// stw r24,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// stw r24,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r24.u32);
	// stw r24,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// stw r24,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// stw r24,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r24.u32);
	// lwz r25,104(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
loc_82422CC4:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82422f8c
	if (ctx.cr6.eq) goto loc_82422F8C;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_82422CD8:
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// andc r28,r31,r11
	ctx.r28.u64 = ctx.r31.u64 & ~ctx.r11.u64;
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// subf r31,r28,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r28.u64;
	// subfic r27,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r27.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// addi r11,r27,11
	ctx.r11.s64 = ctx.r27.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r15.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// lhz r10,18(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 18);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x82422D14;
	sub_8241C1D8(ctx, base);
	// lwz r11,688(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 688);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r27,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r11,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// beq cr6,0x82422d3c
	if (ctx.cr6.eq) goto loc_82422D3C;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82422d44
	if (!ctx.cr6.eq) goto loc_82422D44;
loc_82422D3C:
	// or r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 | ctx.r29.u64;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_82422D44:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82422cd8
	if (!ctx.cr6.eq) goto loc_82422CD8;
	// subf r20,r29,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r29.u64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82422D5C:
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// andc r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 & ~ctx.r11.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r31,r11,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r11.u64;
	// subfic r11,r10,42
	ctx.xer.ca = ctx.r10.u32 <= 42;
	ctx.r11.u64 = static_cast<uint64_t>(42) - ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r15.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r11,27,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// lhz r11,18(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 18);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x82422D94;
	sub_8241C1D8(ctx, base);
	// rlwinm r8,r3,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,692(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 692);
	// rlwinm r7,r3,1,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFC0;
	// subf r11,r8,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r8.u64;
	// rlwinm r6,r3,30,3,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x1FFFFFF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// li r9,2
	ctx.r9.s64 = 2;
	// ldx r10,r6,r10
	ctx.r10.u64 = REX_LOAD_U64(ctx.r6.u32 + ctx.r10.u32);
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// srd r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// slw r11,r17,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r17.u32 << (ctx.r11.u8 & 0x3F));
	// or r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 | ctx.r27.u64;
	// bne cr6,0x82422d5c
	if (!ctx.cr6.eq) goto loc_82422D5C;
	// lwz r11,192(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 192);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82422cc4
	if (!ctx.cr6.lt) goto loc_82422CC4;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241efe8
	ctx.lr = 0x82422E18;
	sub_8241EFE8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82422ed8
	if (ctx.cr0.eq) goto loc_82422ED8;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241f188
	ctx.lr = 0x82422E44;
	sub_8241F188(ctx, base);
	// b 0x82422cc4
	goto loc_82422CC4;
loc_82422E48:
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
loc_82422E50:
	// lwz r11,8(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82422ec4
	if (!ctx.cr6.lt) goto loc_82422EC4;
	// lwz r31,0(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82422eb8
	if (!ctx.cr6.eq) goto loc_82422EB8;
	// rlwinm r5,r15,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r4,28(r15)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r15.u32 + 28);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// slw r27,r17,r29
	ctx.r27.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r17.u32 << (ctx.r29.u8 & 0x3F));
	// bl 0x824cf4d0
	ctx.lr = 0x82422E88;
	sub_824CF4D0(ctx, base);
	// add r4,r29,r14
	ctx.r4.u64 = ctx.r29.u64 + ctx.r14.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,12(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwimi r11,r17,16,13,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 16) & 0x70000) | (ctx.r11.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x8241c1d8
	ctx.lr = 0x82422EA4;
	sub_8241C1D8(ctx, base);
	// stw r16,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r16.u32);
	// mr r16,r31
	ctx.r16.u64 = ctx.r31.u64;
	// sth r3,18(r31)
	REX_STORE_U16(ctx.r31.u32 + 18, ctx.r3.u16);
	// or r22,r27,r22
	ctx.r22.u64 = ctx.r27.u64 | ctx.r22.u64;
	// subf r20,r27,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r27.u64;
loc_82422EB8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// b 0x82422e50
	goto loc_82422E50;
loc_82422EC4:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stw r16,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r16.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241ce80
	ctx.lr = 0x82422ED4;
	sub_8241CE80(ctx, base);
	// b 0x824229f0
	goto loc_824229F0;
loc_82422ED8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82422f4c
	if (ctx.cr6.eq) goto loc_82422F4C;
	// rlwinm r28,r15,0,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0xFFFFFFFC;
loc_82422EE4:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// lwz r4,28(r15)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r15.u32 + 28);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// andc r27,r29,r11
	ctx.r27.u64 = ctx.r29.u64 & ~ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cntlzw r11,r27
	ctx.r11.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// subfic r31,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r31.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// addi r11,r31,11
	ctx.r11.s64 = ctx.r31.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r26,r11,r15
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r15.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x824cf4d0
	ctx.lr = 0x82422F14;
	sub_824CF4D0(ctx, base);
	// add r4,r31,r14
	ctx.r4.u64 = ctx.r31.u64 + ctx.r14.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,12(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwimi r11,r17,16,13,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 16) & 0x70000) | (ctx.r11.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x8241c1d8
	ctx.lr = 0x82422F30;
	sub_8241C1D8(ctx, base);
	// stw r16,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r16.u32);
	// subf. r29,r27,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// sth r3,18(r31)
	REX_STORE_U16(ctx.r31.u32 + 18, ctx.r3.u16);
	// mr r16,r31
	ctx.r16.u64 = ctx.r31.u64;
	// or r22,r27,r22
	ctx.r22.u64 = ctx.r27.u64 | ctx.r22.u64;
	// bne 0x82422ee4
	if (!ctx.cr0.eq) goto loc_82422EE4;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
loc_82422F4C:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241ce80
	ctx.lr = 0x82422F58;
	sub_8241CE80(ctx, base);
	// b 0x824229f4
	goto loc_824229F4;
loc_82422F5C:
	// lwz r11,672(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 672);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x823fd9c8
	ctx.lr = 0x82422F70;
	sub_823FD9C8(ctx, base);
	// lwz r11,192(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 192);
	// rlwinm r11,r11,2,27,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// stwx r3,r11,r19
	REX_STORE_U32(ctx.r11.u32 + ctx.r19.u32, ctx.r3.u32);
	// lwz r11,192(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 192);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwimi r10,r11,0,0,28
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8) | (ctx.r10.u64 & 0xFFFFFFFF00000007);
	// stw r10,192(r19)
	REX_STORE_U32(ctx.r19.u32 + 192, ctx.r10.u32);
loc_82422F8C:
	// lwz r10,192(r19)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r19.u32 + 192);
	// lwz r11,192(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 192);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82422f5c
	if (ctx.cr6.lt) goto loc_82422F5C;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82423180
	if (ctx.cr6.eq) goto loc_82423180;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// addi r27,r19,40
	ctx.r27.s64 = ctx.r19.s64 + 40;
	// addi r29,r19,16
	ctx.r29.s64 = ctx.r19.s64 + 16;
loc_82422FBC:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82423140
	goto loc_82423140;
loc_82422FC4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x82422FD0;
	sub_8241C1D8(ctx, base);
	// lwz r10,-16(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + -16);
	// rlwinm r11,r3,29,3,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r9,r3,58
	ctx.r9.u64 = ctx.r3.u64 & 0x3F;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sld r8,r17,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r17.u64 << (ctx.r9.u8 & 0x7F));
	// ldx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// bne cr6,0x82422ffc
	if (!ctx.cr6.eq) goto loc_82422FFC;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_82422FFC:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824230ec
	if (!ctx.cr0.eq) goto loc_824230EC;
	// lwz r10,-16(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + -16);
	// rlwinm r9,r28,29,3,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r7,r28,58
	ctx.r7.u64 = ctx.r28.u64 & 0x3F;
	// sld r7,r17,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r17.u64 << (ctx.r7.u8 & 0x7F));
	// ldx r6,r9,r10
	ctx.r6.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r10.u32);
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stdx r7,r9,r10
	REX_STORE_U64(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u64);
	// lwz r10,-16(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + -16);
	// ldx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stdx r9,r11,r10
	REX_STORE_U64(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u64);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r5,672(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 672);
	// lwz r11,684(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 684);
	// mullw r10,r31,r5
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r5.s32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8241c520
	ctx.lr = 0x8242304C;
	sub_8241C520(ctx, base);
	// lwz r5,672(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 672);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,-16(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + -16);
	// bl 0x8241c568
	ctx.lr = 0x8242305C;
	sub_8241C568(ctx, base);
	// lwz r10,676(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 676);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mulli r9,r31,5
	ctx.r9.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(5));
loc_82423068:
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r8,r8,r10
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + ctx.r10.u32);
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bne cr6,0x824230e4
	if (!ctx.cr6.eq) goto loc_824230E4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82423068
	if (ctx.cr6.lt) goto loc_82423068;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82423090:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824230cc
	if (ctx.cr0.eq) goto loc_824230CC;
	// li r9,4
	ctx.r9.s64 = 4;
	// mulli r11,r31,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(40));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r27,-8
	ctx.r11.s64 = ctx.r27.s64 + -8;
loc_824230AC:
	// ldu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// ld r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x824230ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824230AC;
	// lwz r11,192(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 192);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,192(r19)
	REX_STORE_U32(ctx.r19.u32 + 192, ctx.r11.u32);
loc_824230CC:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241c5f8
	ctx.lr = 0x824230E0;
	sub_8241C5F8(ctx, base);
	// b 0x82423124
	goto loc_82423124;
loc_824230E4:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// b 0x82423090
	goto loc_82423090;
loc_824230EC:
	// rlwinm r11,r28,29,3,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r9,r28,58
	ctx.r9.u64 = ctx.r28.u64 & 0x3F;
	// sld r9,r17,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r17.u64 << (ctx.r9.u8 & 0x7F));
	// ldx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// and r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// bne cr6,0x82423110
	if (!ctx.cr6.eq) goto loc_82423110;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
loc_82423110:
	// clrlwi. r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82423124
	if (!ctx.cr0.eq) goto loc_82423124;
	// ldx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stdx r9,r11,r10
	REX_STORE_U64(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u64);
loc_82423124:
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 668);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8242313c
	if (!ctx.cr6.eq) goto loc_8242313C;
	// li r28,-1
	ctx.r28.s64 = -1;
	// b 0x82423150
	goto loc_82423150;
loc_8242313C:
	// addi r4,r28,1
	ctx.r4.s64 = ctx.r28.s64 + 1;
loc_82423140:
	// lwz r5,672(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 672);
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x824078e8
	ctx.lr = 0x8242314C;
	sub_824078E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82423150:
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 668);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82422fc4
	if (!ctx.cr6.gt) goto loc_82422FC4;
	// lwz r11,192(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 192);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r27,r27,40
	ctx.r27.s64 = ctx.r27.s64 + 40;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82422fbc
	if (ctx.cr6.lt) goto loc_82422FBC;
loc_82423180:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241ce80
	ctx.lr = 0x8242318C;
	sub_8241CE80(ctx, base);
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
	// li r29,4
	ctx.r29.s64 = 4;
loc_82423194:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824231b4
	if (ctx.cr6.eq) goto loc_824231B4;
	// lwz r11,192(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 192);
	// clrlwi. r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824231b4
	if (ctx.cr0.eq) goto loc_824231B4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241ce80
	ctx.lr = 0x824231B4;
	sub_8241CE80(ctx, base);
loc_824231B4:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82423194
	if (!ctx.cr0.eq) goto loc_82423194;
loc_824231C0:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,668(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 668);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8242204c
	if (ctx.cr6.lt) goto loc_8242204C;
loc_824231D8:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82423508
	if (!ctx.cr6.eq) goto loc_82423508;
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82423508
	if (ctx.cr0.eq) goto loc_82423508;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82423508
	if (!ctx.cr0.eq) goto loc_82423508;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82423508
	if (ctx.cr0.eq) goto loc_82423508;
	// lwz r17,84(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r19,0
	ctx.r19.s64 = 0;
	// li r20,2
	ctx.r20.s64 = 2;
	// li r18,-1
	ctx.r18.s64 = -1;
loc_82423218:
	// lwz r24,28(r21)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r21.u32 + 28);
	// clrlwi. r11,r24,31
	ctx.r11.u64 = ctx.r24.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824234e8
	if (!ctx.cr0.eq) goto loc_824234E8;
	// cmplwi r24,0
	ctx.cr0.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq 0x824234e8
	if (ctx.cr0.eq) goto loc_824234E8;
loc_8242322C:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,13312
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13312, ctx.xer);
	// bne cr6,0x824234d0
	if (!ctx.cr6.eq) goto loc_824234D0;
	// rlwinm. r11,r11,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824234d0
	if (ctx.cr0.eq) goto loc_824234D0;
	// lwz r26,44(r24)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r24.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r25,12(r26)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8241c650
	ctx.lr = 0x82423258;
	sub_8241C650(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241c650
	ctx.lr = 0x82423268;
	sub_8241C650(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,8(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// rlwinm r29,r10,31,28,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xF;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// stw r19,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r19.u32);
loc_82423284:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x824232ac
	if (ctx.cr6.eq) goto loc_824232AC;
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// lhz r10,18(r24)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r24.u32 + 18);
	// andc r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 & ~ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r28,r11,31
	ctx.r28.s64 = ctx.r11.s64 + 31;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x824232b4
	goto loc_824232B4;
loc_824232AC:
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_824232B4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824233c0
	if (ctx.cr6.eq) goto loc_824233C0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x824232C8;
	sub_8241C1D8(ctx, base);
	// lhz r11,18(r24)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r24.u32 + 18);
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// subf r9,r11,r28
	ctx.r9.u64 = ctx.r28.u64 - ctx.r11.u64;
	// lhz r11,18(r25)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 18);
	// rlwinm r10,r10,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8241c1d8
	ctx.lr = 0x824232F8;
	sub_8241C1D8(ctx, base);
	// rlwinm r10,r16,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,692(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 692);
	// rlwinm r9,r16,1,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFC0;
	// subf r11,r10,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r10.u64;
	// rlwinm r7,r16,30,3,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 30) & 0x1FFFFFF8;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// ldx r7,r7,r8
	ctx.r7.u64 = REX_LOAD_U64(ctx.r7.u32 + ctx.r8.u32);
	// clrlwi r6,r31,27
	ctx.r6.u64 = ctx.r31.u32 & 0x1F;
	// slw r9,r20,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r11.u8 & 0x3F));
	// srd r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r10.u8 & 0x7F));
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r10,r31,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// and r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 & ctx.r9.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// slw r9,r9,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r6,r29,-1
	ctx.r6.s64 = ctx.r29.s64 + -1;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r7,r3,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// rlwinm r10,r3,1,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFC0;
	// subf r11,r7,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r7.u64;
	// rlwinm r9,r3,30,3,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x1FFFFFF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r10,r10,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r10.u64;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// ldx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r8.u32);
	// slw r8,r20,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r7.u8 & 0x3F));
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// srd r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// and r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ctx.r8.u64;
	// lwzx r7,r9,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// slw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// andc r8,r29,r6
	ctx.r8.u64 = ctx.r29.u64 & ~ctx.r6.u64;
	// stwx r11,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// subf r29,r8,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r8.u64;
	// b 0x82423284
	goto loc_82423284;
loc_824233C0:
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// cmplw cr6,r23,r22
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x8242345c
	if (!ctx.cr6.eq) goto loc_8242345C;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x824234b4
	if (ctx.cr6.eq) goto loc_824234B4;
	// li r11,4
	ctx.r11.s64 = 4;
loc_824233DC:
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// rlwinm r6,r11,29,3,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// rlwinm r4,r10,29,3,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// slw r9,r20,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r6,r6,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// slw r8,r20,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r5,r4,r3
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// clrlwi r4,r11,27
	ctx.r4.u64 = ctx.r11.u32 & 0x1F;
	// and r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 & ctx.r6.u64;
	// and r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 & ctx.r5.u64;
	// slw r5,r18,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r10.u8 & 0x3F));
	// slw r6,r18,r4
	ctx.r6.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r4.u8 & 0x3F));
	// and r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 & ctx.r6.u64;
	// and r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 & ctx.r5.u64;
	// srw r9,r9,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r4.u8 & 0x3F));
	// srw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824234b0
	if (!ctx.cr6.eq) goto loc_824234B0;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r7,r27
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x824233dc
	if (ctx.cr6.lt) goto loc_824233DC;
	// b 0x824234b4
	goto loc_824234B4;
loc_8242345C:
	// lwz r31,96(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241efe8
	ctx.lr = 0x82423480;
	sub_8241EFE8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824234b0
	if (ctx.cr0.eq) goto loc_824234B0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241f188
	ctx.lr = 0x824234AC;
	sub_8241F188(ctx, base);
	// b 0x824234b4
	goto loc_824234B4;
loc_824234B0:
	// li r29,1
	ctx.r29.s64 = 1;
loc_824234B4:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824234d0
	if (ctx.cr0.eq) goto loc_824234D0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241c8c0
	ctx.lr = 0x824234C8;
	sub_8241C8C0(ctx, base);
	// stw r17,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r17.u32);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
loc_824234D0:
	// rlwinm r11,r24,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r24,40(r11)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r24,31
	ctx.r11.u64 = ctx.r24.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824234e8
	if (!ctx.cr0.eq) goto loc_824234E8;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x8242322c
	if (!ctx.cr6.eq) goto loc_8242322C;
loc_824234E8:
	// rlwinm r11,r21,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82423510
	if (!ctx.cr0.eq) goto loc_82423510;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82423218
	if (!ctx.cr6.eq) goto loc_82423218;
	// b 0x82423510
	goto loc_82423510;
loc_82423508:
	// lwz r17,84(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r19,0
	ctx.r19.s64 = 0;
loc_82423510:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// bne cr6,0x82423590
	if (!ctx.cr6.eq) goto loc_82423590;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82423590
	if (!ctx.cr6.eq) goto loc_82423590;
	// lwz r31,92(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82423594
	if (!ctx.cr6.eq) goto loc_82423594;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82423594
	if (!ctx.cr0.eq) goto loc_82423594;
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 668);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,676(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 676);
	// mulli r5,r11,40
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// bl 0x824057e0
	ctx.lr = 0x82423554;
	sub_824057E0(ctx, base);
	// stw r19,676(r30)
	REX_STORE_U32(ctx.r30.u32 + 676, ctx.r19.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,668(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 668);
	// lwz r4,684(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 684);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mullw r5,r10,r11
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// bl 0x824057e0
	ctx.lr = 0x82423574;
	sub_824057E0(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,388(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// stw r19,684(r30)
	REX_STORE_U32(ctx.r30.u32 + 684, ctx.r19.u32);
	// lbz r3,81(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x825e3620
	__restgprlr_14(ctx, base);
	return;
loc_82423590:
	// lwz r31,92(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_82423594:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r19,680(r30)
	REX_STORE_U32(ctx.r30.u32 + 680, ctx.r19.u32);
	// stw r19,684(r30)
	REX_STORE_U32(ctx.r30.u32 + 684, ctx.r19.u32);
	// stw r19,696(r30)
	REX_STORE_U32(ctx.r30.u32 + 696, ctx.r19.u32);
	// stw r19,700(r30)
	REX_STORE_U32(ctx.r30.u32 + 700, ctx.r19.u32);
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// stw r19,704(r30)
	REX_STORE_U32(ctx.r30.u32 + 704, ctx.r19.u32);
	// stw r19,708(r30)
	REX_STORE_U32(ctx.r30.u32 + 708, ctx.r19.u32);
	// b 0x824235d4
	goto loc_824235D4;
loc_824235B8:
	// lwz r11,16(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 16);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// stw r11,16(r17)
	REX_STORE_U32(ctx.r17.u32 + 16, ctx.r11.u32);
	// bl 0x8244ece0
	ctx.lr = 0x824235D0;
	sub_8244ECE0(ctx, base);
	// lwz r17,32(r17)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r17.u32 + 32);
loc_824235D4:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// bne cr6,0x824235b8
	if (!ctx.cr6.eq) goto loc_824235B8;
	// b 0x824235f4
	goto loc_824235F4;
loc_824235E0:
	// lwz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 116);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,116(r30)
	REX_STORE_U32(ctx.r30.u32 + 116, ctx.r11.u32);
	// sth r11,18(r31)
	REX_STORE_U16(ctx.r31.u32 + 18, ctx.r11.u16);
	// lwz r31,32(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
loc_824235F4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824235e0
	if (!ctx.cr6.eq) goto loc_824235E0;
	// addi r3,r30,972
	ctx.r3.s64 = ctx.r30.s64 + 972;
	// bl 0x823e2930
	ctx.lr = 0x82423604;
	sub_823E2930(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,396(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8241f4ec
	if (!ctx.cr6.gt) goto loc_8241F4EC;
loc_8242361C:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82423644
	if (ctx.cr0.eq) goto loc_82423644;
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82423644
	if (!ctx.cr0.eq) goto loc_82423644;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,52(r30)
	REX_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
	// bl 0x823e23f8
	ctx.lr = 0x82423644;
	sub_823E23F8(ctx, base);
loc_82423644:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823e2770
	ctx.lr = 0x82423650;
	sub_823E2770(ctx, base);
loc_82423650:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823e2770
	ctx.lr = 0x8242365C;
	sub_823E2770(ctx, base);
loc_8242365C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823e2770
	ctx.lr = 0x82423668;
	sub_823E2770(ctx, base);
loc_82423668:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x823e2770
	ctx.lr = 0x82423670;
	sub_823E2770(ctx, base);
loc_82423670:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823e2770
	ctx.lr = 0x8242367C;
	sub_823E2770(ctx, base);
loc_8242367C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823e2770
	ctx.lr = 0x82423688;
	sub_823E2770(ctx, base);
loc_82423688:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823e2770
	ctx.lr = 0x82423694;
	sub_823E2770(ctx, base);
loc_82423694:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823e2770
	ctx.lr = 0x824236A0;
	sub_823E2770(ctx, base);
}

DEFINE_REX_FUNC(sub_825F3C88) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e3604
	ctx.lr = 0x825F3C90;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// not r10,r3
	ctx.r10.u64 = ~ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r30,r10,20,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1;
	// clrlwi r29,r11,31
	ctx.r29.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r28,r11,0,29,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825f3e48
	if (ctx.cr6.eq) goto loc_825F3E48;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x825f3e48
	if (ctx.cr6.eq) goto loc_825F3E48;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// blt cr6,0x825f3e48
	if (ctx.cr6.lt) goto loc_825F3E48;
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// blt cr6,0x825f3e48
	if (ctx.cr6.lt) goto loc_825F3E48;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x825f3e2c
	if (ctx.cr6.eq) goto loc_825F3E2C;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// addi r31,r11,19056
	ctx.r31.s64 = ctx.r11.s64 + 19056;
loc_825F3CDC:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x825f3e24
	if (ctx.cr6.eq) goto loc_825F3E24;
	// lbz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// extsb. r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825f3cfc
	if (!ctx.cr0.eq) goto loc_825F3CFC;
	// lbz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x825f3e00
	if (ctx.cr0.eq) goto loc_825F3E00;
loc_825F3CFC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825f3e14
	if (ctx.cr6.eq) goto loc_825F3E14;
	// lbz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825f3e1c
	if (ctx.cr0.eq) goto loc_825F3E1C;
	// rlwinm r9,r10,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC;
	// rlwinm r27,r11,2,22,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwzx r8,r9,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwzx r9,r27,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// beq cr6,0x825f3d8c
	if (ctx.cr6.eq) goto loc_825F3D8C;
	// rlwinm. r27,r8,0,15,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x825f3d70
	if (ctx.cr0.eq) goto loc_825F3D70;
	// rlwinm. r11,r9,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825f3d5c
	if (ctx.cr0.eq) goto loc_825F3D5C;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x825f3d50
	if (!ctx.cr6.lt) goto loc_825F3D50;
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x825f3de4
	goto loc_825F3DE4;
loc_825F3D50:
	// ble cr6,0x825f3de4
	if (!ctx.cr6.gt) goto loc_825F3DE4;
	// li r3,11
	ctx.r3.s64 = 11;
	// b 0x825f3de4
	goto loc_825F3DE4;
loc_825F3D5C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x825f3d68
	if (!ctx.cr6.eq) goto loc_825F3D68;
	// li r3,4
	ctx.r3.s64 = 4;
loc_825F3D68:
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// b 0x825f3dec
	goto loc_825F3DEC;
loc_825F3D70:
	// rlwinm. r27,r9,0,15,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x825f3d8c
	if (ctx.cr0.eq) goto loc_825F3D8C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x825f3d84
	if (!ctx.cr6.eq) goto loc_825F3D84;
	// li r3,8
	ctx.r3.s64 = 8;
loc_825F3D84:
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// b 0x825f3da4
	goto loc_825F3DA4;
loc_825F3D8C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x825f3db0
	if (ctx.cr6.eq) goto loc_825F3DB0;
	// rlwinm. r27,r8,0,14,14
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x825f3dec
	if (!ctx.cr0.eq) goto loc_825F3DEC;
	// rlwinm. r27,r9,0,14,14
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x825f3db0
	if (ctx.cr0.eq) goto loc_825F3DB0;
loc_825F3DA4:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// b 0x825f3df4
	goto loc_825F3DF4;
loc_825F3DB0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x825f3dd8
	if (ctx.cr6.eq) goto loc_825F3DD8;
	// rlwinm. r27,r8,0,11,11
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x825f3dc8
	if (ctx.cr0.eq) goto loc_825F3DC8;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// oris r8,r10,8
	ctx.r8.u64 = ctx.r10.u64 | 524288;
loc_825F3DC8:
	// rlwinm. r10,r9,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825f3dd8
	if (ctx.cr0.eq) goto loc_825F3DD8;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// oris r9,r11,8
	ctx.r9.u64 = ctx.r11.u64 | 524288;
loc_825F3DD8:
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x825f3e14
	if (ctx.cr6.lt) goto loc_825F3E14;
	// bgt cr6,0x825f3e1c
	if (ctx.cr6.gt) goto loc_825F3E1C;
loc_825F3DE4:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_825F3DEC:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_825F3DF4:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x825f3cdc
	if (!ctx.cr6.eq) goto loc_825F3CDC;
	// b 0x825f3e2c
	goto loc_825F3E2C;
loc_825F3E00:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,20080
	ctx.r11.s64 = ctx.r11.s64 + 20080;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x825f3e54
	goto loc_825F3E54;
loc_825F3E14:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825f3e54
	goto loc_825F3E54;
loc_825F3E1C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x825f3e54
	goto loc_825F3E54;
loc_825F3E24:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x825f3e34
	if (!ctx.cr6.eq) goto loc_825F3E34;
loc_825F3E2C:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x825f3e00
	if (ctx.cr6.eq) goto loc_825F3E00;
loc_825F3E34:
	// subfic r11,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r5.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// b 0x825f3e54
	goto loc_825F3E54;
loc_825F3E48:
	// li r3,87
	ctx.r3.s64 = 87;
	// bl 0x822ab958
	ctx.lr = 0x825F3E50;
	sub_822AB958(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_825F3E54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825e3654
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8260B090) {
	REX_FUNC_PROLOGUE();
	// lis r10,22358
	ctx.r10.s64 = 1465253888;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,17201
	ctx.r9.u64 = ctx.r10.u64 | 17201;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8260b0c0
	if (!ctx.cr6.eq) goto loc_8260B0C0;
	// lis r10,22349
	ctx.r10.s64 = 1464664064;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r8,r10,22081
	ctx.r8.u64 = ctx.r10.u64 | 22081;
	// stw r9,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r8,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// blr 
	return;
loc_8260B0C0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8260B7A0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// stw r4,31104(r11)
	REX_STORE_U32(ctx.r11.u32 + 31104, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8260BE80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e3604
	ctx.lr = 0x8260BE88;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,552(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 552);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r4,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.r4.u64);
	// std r5,216(r1)
	REX_STORE_U64(ctx.r1.u32 + 216, ctx.r5.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r6,224(r1)
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.r6.u64);
	// lwz r28,264(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 264);
	// std r7,232(r1)
	REX_STORE_U64(ctx.r1.u32 + 232, ctx.r7.u64);
	// beq cr6,0x8260bf30
	if (ctx.cr6.eq) goto loc_8260BF30;
	// lwz r3,232(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8260c0e8
	if (!ctx.cr6.eq) goto loc_8260C0E8;
	// lwz r11,220(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8260c0e8
	if (!ctx.cr6.eq) goto loc_8260C0E8;
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 280);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8260bedc
	if (!ctx.cr6.eq) goto loc_8260BEDC;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x825e3654
	__restgprlr_27(ctx, base);
	return;
loc_8260BEDC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x8260bf30
	if (!ctx.cr6.gt) goto loc_8260BF30;
	// lwz r11,568(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,564(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r28.u64;
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// bl 0x8267ce48
	ctx.lr = 0x8260BEFC;
	sub_8267CE48(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8260bf30
	if (!ctx.cr6.eq) goto loc_8260BF30;
loc_8260BF04:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8260bf30
	if (ctx.cr6.eq) goto loc_8260BF30;
	// lwz r11,568(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,564(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r28.u64;
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// bl 0x8267ce48
	ctx.lr = 0x8260BF28;
	sub_8267CE48(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8260bf04
	if (ctx.cr6.eq) goto loc_8260BF04;
loc_8260BF30:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8260c0e4
	if (ctx.cr6.eq) goto loc_8260C0E4;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r3,560(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// lwz r11,568(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// lfd f0,-26200(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + -26200);
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// stfd f0,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8260c0e4
	if (ctx.cr6.eq) goto loc_8260C0E4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8260c0e4
	if (ctx.cr6.gt) goto loc_8260C0E4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8267c1c0
	ctx.lr = 0x8260BF80;
	sub_8267C1C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8260c0e4
	if (ctx.cr6.eq) goto loc_8260C0E4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8260c0e4
	if (ctx.cr6.eq) goto loc_8260C0E4;
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8260bfc0
	if (!ctx.cr6.eq) goto loc_8260BFC0;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82671420
	ctx.lr = 0x8260BFB4;
	sub_82671420(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r27.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8260BFC0:
	// lwz r10,568(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,4(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r10,-2
	ctx.r5.s64 = ctx.r10.s64 + -2;
	// bl 0x8260b748
	ctx.lr = 0x8260BFD8;
	sub_8260B748(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8260c0e4
	if (ctx.cr6.eq) goto loc_8260C0E4;
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8260c00c
	if (!ctx.cr6.eq) goto loc_8260C00C;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82671420
	ctx.lr = 0x8260C000;
	sub_82671420(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r27.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8260C00C:
	// lwz r10,568(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,4(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r10,-3
	ctx.r5.s64 = ctx.r10.s64 + -3;
	// bl 0x8260b748
	ctx.lr = 0x8260C024;
	sub_8260B748(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8260c0e4
	if (ctx.cr6.eq) goto loc_8260C0E4;
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8260c058
	if (!ctx.cr6.eq) goto loc_8260C058;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82671420
	ctx.lr = 0x8260C04C;
	sub_82671420(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r27.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8260C058:
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r28,4(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x826b2db8
	ctx.lr = 0x8260C074;
	sub_826B2DB8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x826b2db8
	ctx.lr = 0x8260C08C;
	sub_826B2DB8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x826b2db8
	ctx.lr = 0x8260C0A4;
	sub_826B2DB8(ctx, base);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x826b2db8
	ctx.lr = 0x8260C0BC;
	sub_826B2DB8(ctx, base);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// li r28,0
	ctx.r28.s64 = 0;
	// lfd f12,104(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fadd f11,f13,f0
	ctx.f11.f64 = ctx.f13.f64 + ctx.f0.f64;
	// lfd f10,112(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fadd f9,f10,f12
	ctx.f9.f64 = ctx.f10.f64 + ctx.f12.f64;
	// fcmpu cr6,f11,f9
	ctx.cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// blt cr6,0x8260c0e4
	if (ctx.cr6.lt) goto loc_8260C0E4;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_8260C0E4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8260C0E8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x825e3654
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8262BFF0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e3608
	ctx.lr = 0x8262BFF8;
	__savegprlr_28(ctx, base);
	// addi r28,r6,-1
	ctx.r28.s64 = ctx.r6.s64 + -1;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// ble cr6,0x8262c04c
	if (!ctx.cr6.gt) goto loc_8262C04C;
	// addi r10,r28,-2
	ctx.r10.s64 = ctx.r28.s64 + -2;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8262C020:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r31,r9,r11
	ctx.r31.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbzx r30,r11,r7
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 + ctx.r8.u64;
	// rotlwi r8,r30,4
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r30.u32, 4);
	// mulli r31,r31,-406
	ctx.r31.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(-406));
	// srawi r31,r31,4
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 4;
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// stwu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8262c020
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8262C020;
loc_8262C04C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r8,r11,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// addi r30,r5,4
	ctx.r30.s64 = ctx.r5.s64 + 4;
	// mulli r11,r9,-406
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(-406));
	// add r29,r10,r5
	ctx.r29.u64 = ctx.r10.u64 + ctx.r5.u64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// rotlwi r10,r8,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 4);
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,-4(r29)
	REX_STORE_U32(ctx.r29.u32 + -4, ctx.r10.u32);
	// lbz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mulli r11,r8,-217
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(-217));
	// srawi r11,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 10;
	// rotlwi r10,r9,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// ble cr6,0x8262c0d8
	if (!ctx.cr6.gt) goto loc_8262C0D8;
	// addi r11,r6,-3
	ctx.r11.s64 = ctx.r6.s64 + -3;
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8262C0B0:
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbzux r10,r4,r31
	ea = ctx.r4.u32 + ctx.r31.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rotlwi r9,r10,5
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 5);
	// mulli r10,r8,-217
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(-217));
	// srawi r10,r10,11
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 11;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8262c0b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8262C0B0;
loc_8262C0D8:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// ble cr6,0x8262c11c
	if (!ctx.cr6.gt) goto loc_8262C11C;
	// addi r10,r28,-2
	ctx.r10.s64 = ctx.r28.s64 + -2;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8262C0F4:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mulli r8,r10,226
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(226));
	// srawi r10,r8,9
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 9;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x8262c0f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8262C0F4;
loc_8262C11C:
	// addi r11,r6,-2
	ctx.r11.s64 = ctx.r6.s64 + -2;
	// lwz r10,-4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + -4);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwzx r5,r8,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// mulli r4,r5,226
	ctx.r4.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(226));
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,-4(r29)
	REX_STORE_U32(ctx.r29.u32 + -4, ctx.r3.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// ble cr6,0x8262c1b8
	if (!ctx.cr6.gt) goto loc_8262C1B8;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r30,-8
	ctx.r11.s64 = ctx.r30.s64 + -8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// li r3,255
	ctx.r3.s64 = 255;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8262C16C:
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// mulli r6,r10,227
	ctx.r6.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(227));
	// srawi r10,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// mulli r8,r10,26
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(26));
	// srawi r10,r8,10
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 10;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// ble cr6,0x8262c1a4
	if (!ctx.cr6.gt) goto loc_8262C1A4;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 & ctx.r3.u64;
loc_8262C1A4:
	// stb r10,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// stbx r4,r9,r7
	REX_STORE_U8(ctx.r9.u32 + ctx.r7.u32, ctx.r4.u8);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lwzu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// bdnz 0x8262c16c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8262C16C;
loc_8262C1B8:
	// b 0x825e3658
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826369E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35d0
	ctx.lr = 0x826369E8;
	__savegprlr_14(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826369f8
	if (!ctx.cr6.eq) goto loc_826369F8;
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x825e3620
	__restgprlr_14(ctx, base);
	return;
loc_826369F8:
	// fmul f0,f2,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f2.f64 * ctx.f2.f64;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// fmul f13,f5,f5
	ctx.f13.f64 = ctx.f5.f64 * ctx.f5.f64;
	// lwz r20,15376(r3)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r3.u32 + 15376);
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// lwz r19,15380(r3)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r3.u32 + 15380);
	// lwz r8,15384(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 15384);
	// lwz r7,15388(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 15388);
	// addze r28,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r28.s64 = temp.s64;
	// lwz r5,15392(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 15392);
	// fmadd f12,f1,f1,f0
	ctx.f12.f64 = std::fma(ctx.f1.f64, ctx.f1.f64, ctx.f0.f64);
	// fmadd f11,f4,f4,f13
	ctx.f11.f64 = std::fma(ctx.f4.f64, ctx.f4.f64, ctx.f13.f64);
	// fsqrt f0,f12
	ctx.f0.f64 = sqrt(ctx.f12.f64);
	// fsqrt f13,f11
	ctx.f13.f64 = sqrt(ctx.f11.f64);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82636a40
	if (!ctx.cr6.lt) goto loc_82636A40;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// b 0x82636a44
	goto loc_82636A44;
loc_82636A40:
	// fmr f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f13.f64;
loc_82636A44:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f10,-26192(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r11.u32 + -26192);
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// bge cr6,0x82636a78
	if (!ctx.cr6.lt) goto loc_82636A78;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82636a64
	if (!ctx.cr6.lt) goto loc_82636A64;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// b 0x82636a68
	goto loc_82636A68;
loc_82636A64:
	// fmr f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f13.f64;
loc_82636A68:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lfd f12,12792(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 12792);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x82636aac
	if (!ctx.cr6.gt) goto loc_82636AAC;
loc_82636A78:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82636a88
	if (!ctx.cr6.lt) goto loc_82636A88;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// b 0x82636a8c
	goto loc_82636A8C;
loc_82636A88:
	// fmr f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f13.f64;
loc_82636A8C:
	// fcmpu cr6,f12,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// bge cr6,0x82636aa4
	if (!ctx.cr6.lt) goto loc_82636AA4;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82636ab0
	if (ctx.cr6.lt) goto loc_82636AB0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82636ab0
	goto loc_82636AB0;
loc_82636AA4:
	// fmr f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64;
	// b 0x82636ab0
	goto loc_82636AB0;
loc_82636AAC:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_82636AB0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfd f13,7296(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 7296);
	// lfd f12,11720(r9)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r9.u32 + 11720);
	// fmadd f13,f7,f13,f12
	ctx.f13.f64 = std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f12.f64);
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.f11.u64);
	// lwz r4,-164(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82636ae8
	if (!ctx.cr6.gt) goto loc_82636AE8;
	// cmpwi cr6,r4,256
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 256, ctx.xer);
	// ble cr6,0x82636aec
	if (!ctx.cr6.gt) goto loc_82636AEC;
	// li r4,256
	ctx.r4.s64 = 256;
	// b 0x82636aec
	goto loc_82636AEC;
loc_82636AE8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82636AEC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,5360(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 5360);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82636b10
	if (!ctx.cr6.lt) goto loc_82636B10;
	// li r30,512
	ctx.r30.s64 = 512;
	// li r11,9
	ctx.r11.s64 = 9;
	// li r22,10
	ctx.r22.s64 = 10;
	// li r6,511
	ctx.r6.s64 = 511;
	// b 0x82636b3c
	goto loc_82636B3C;
loc_82636B10:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82636b2c
	if (!ctx.cr6.lt) goto loc_82636B2C;
	// li r30,256
	ctx.r30.s64 = 256;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r22,9
	ctx.r22.s64 = 9;
	// li r6,255
	ctx.r6.s64 = 255;
	// b 0x82636b3c
	goto loc_82636B3C;
loc_82636B2C:
	// li r30,128
	ctx.r30.s64 = 128;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r22,8
	ctx.r22.s64 = 8;
	// li r6,127
	ctx.r6.s64 = 127;
loc_82636B3C:
	// extsw r9,r30
	ctx.r9.s64 = ctx.r30.s32;
	// lwz r31,15356(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 15356);
	// lwz r29,15364(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 15364);
	// mullw r17,r10,r30
	ctx.r17.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// std r9,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r9.u64);
	// stw r17,-204(r1)
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r17.u32);
	// mullw r16,r31,r30
	ctx.r16.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r30.s32);
	// stw r16,-200(r1)
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r16.u32);
	// li r21,0
	ctx.r21.s64 = 0;
	// lfd f0,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fmul f12,f13,f1
	ctx.f12.f64 = ctx.f13.f64 * ctx.f1.f64;
	// fmul f11,f13,f3
	ctx.f11.f64 = ctx.f13.f64 * ctx.f3.f64;
	// fmul f9,f13,f6
	ctx.f9.f64 = ctx.f13.f64 * ctx.f6.f64;
	// fmul f10,f13,f4
	ctx.f10.f64 = ctx.f13.f64 * ctx.f4.f64;
	// fmul f7,f13,f5
	ctx.f7.f64 = ctx.f13.f64 * ctx.f5.f64;
	// fmul f8,f13,f2
	ctx.f8.f64 = ctx.f13.f64 * ctx.f2.f64;
	// fctiwz f6,f12
	ctx.f6.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f6,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.f6.u64);
	// fctiwz f5,f11
	ctx.f5.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f5,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.f5.u64);
	// fctiwz f3,f9
	ctx.f3.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// lwz r18,-164(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
	// fctiwz f4,f10
	ctx.f4.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// lwz r10,-172(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// stfd f4,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.f4.u64);
	// fctiwz f1,f7
	ctx.f1.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f3,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.f3.u64);
	// fctiwz f2,f8
	ctx.f2.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// lwz r31,-180(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// stfd f2,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.f2.u64);
	// lwz r9,-188(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// stfd f1,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.f1.u64);
	// ble cr6,0x82636e48
	if (!ctx.cr6.gt) goto loc_82636E48;
	// subf r27,r31,r9
	ctx.r27.u64 = ctx.r9.u64 - ctx.r31.u64;
	// subf r26,r18,r10
	ctx.r26.u64 = ctx.r10.u64 - ctx.r18.u64;
	// addi r23,r5,-1
	ctx.r23.s64 = ctx.r5.s64 + -1;
	// addi r24,r7,-1
	ctx.r24.s64 = ctx.r7.s64 + -1;
	// addi r29,r8,-1
	ctx.r29.s64 = ctx.r8.s64 + -1;
loc_82636BDC:
	// lwz r10,15360(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15360);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82636d64
	if (!ctx.cr6.gt) goto loc_82636D64;
loc_82636BF8:
	// lwz r10,-180(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// add. r9,r9,r18
	ctx.r9.u64 = ctx.r9.u64 + ctx.r18.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// blt 0x82636d54
	if (ctx.cr0.lt) goto loc_82636D54;
	// cmpw cr6,r9,r17
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x82636d54
	if (!ctx.cr6.lt) goto loc_82636D54;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x82636d54
	if (ctx.cr6.lt) goto loc_82636D54;
	// cmpw cr6,r8,r16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x82636d54
	if (!ctx.cr6.lt) goto loc_82636D54;
	// lwz r15,20(r3)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// sraw r7,r8,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r7.s64 = ctx.r8.s32 >> temp.u32;
	// mullw r7,r7,r15
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r15.s32);
	// lwz r5,15372(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 15372);
	// sraw r10,r9,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r10.s64 = ctx.r9.s32 >> temp.u32;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// and r14,r8,r6
	ctx.r14.u64 = ctx.r8.u64 & ctx.r6.u64;
	// and r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 & ctx.r6.u64;
	// subf r7,r14,r30
	ctx.r7.u64 = ctx.r30.u64 - ctx.r14.u64;
	// lbz r31,0(r10)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf r7,r5,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r5.u64;
	// lbzx r15,r15,r10
	ctx.r15.u64 = REX_LOAD_U8(ctx.r15.u32 + ctx.r10.u32);
	// lbz r10,1(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// mullw r7,r7,r31
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r31.s32);
	// stw r10,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r10.u32);
	// mullw r10,r15,r14
	ctx.r10.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r14.s32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwz r31,-208(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// mullw r10,r31,r5
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r5.s32);
	// add r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mullw r10,r5,r4
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// srawi r7,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 8;
	// sraw r5,r7,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r5.s64 = ctx.r7.s32 >> temp.u32;
	// stb r5,1(r29)
	REX_STORE_U8(ctx.r29.u32 + 1, ctx.r5.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// beq cr6,0x82636d50
	if (ctx.cr6.eq) goto loc_82636D50;
	// srawi r5,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 1;
	// std r9,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r9.u64);
	// srawi r31,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r8.s32 >> 1;
	// lwz r17,-204(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// sraw r7,r8,r22
	temp.u32 = ctx.r22.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r7.s64 = ctx.r8.s32 >> temp.u32;
	// lwz r16,-200(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// sraw r10,r9,r22
	temp.u32 = ctx.r22.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r10.s64 = ctx.r9.s32 >> temp.u32;
	// mullw r7,r7,r28
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r28.s32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// and r15,r31,r6
	ctx.r15.u64 = ctx.r31.u64 & ctx.r6.u64;
	// add r10,r7,r20
	ctx.r10.u64 = ctx.r7.u64 + ctx.r20.u64;
	// and r14,r5,r6
	ctx.r14.u64 = ctx.r5.u64 & ctx.r6.u64;
	// subf r5,r15,r30
	ctx.r5.u64 = ctx.r30.u64 - ctx.r15.u64;
	// lbzx r31,r7,r20
	ctx.r31.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r20.u32);
	// subf r5,r14,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r14.u64;
	// lbzx r9,r10,r28
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// lbz r10,1(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// stw r5,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r5.u32);
	// mullw r5,r9,r15
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r15.s32);
	// stw r31,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r31.u32);
	// lwz r9,-192(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// mullw r10,r10,r14
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r14.s32);
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// lwz r10,-208(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// li r31,0
	ctx.r31.s64 = 0;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r10,r7,r19
	ctx.r10.u64 = ctx.r7.u64 + ctx.r19.u64;
	// mullw r5,r5,r4
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// srawi r5,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 8;
	// sraw r5,r5,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r5.s64 = ctx.r5.s32 >> temp.u32;
	// stbu r5,1(r24)
	ea = 1 + ctx.r24.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r24.u32 = ea;
	// lbz r5,1(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbzx r10,r10,r28
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// lbzx r7,r7,r19
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r19.u32);
	// stw r7,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r7.u32);
	// mullw r7,r10,r15
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r15.s32);
	// mullw r10,r5,r14
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r14.s32);
	// lwz r5,-192(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mullw r10,r5,r9
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// ld r9,-160(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mullw r7,r10,r4
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// srawi r5,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 8;
	// sraw r10,r5,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r10.s64 = ctx.r5.s32 >> temp.u32;
	// stbu r10,1(r23)
	ea = 1 + ctx.r23.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r23.u32 = ea;
	// b 0x82636d54
	goto loc_82636D54;
loc_82636D50:
	// li r31,1
	ctx.r31.s64 = 1;
loc_82636D54:
	// lwz r10,15360(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15360);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82636bf8
	if (ctx.cr6.lt) goto loc_82636BF8;
loc_82636D64:
	// lwz r9,-172(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// addi r25,r21,1
	ctx.r25.s64 = ctx.r21.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r31,r26,r9
	ctx.r31.u64 = ctx.r26.u64 + ctx.r9.u64;
	// lwz r9,-164(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
	// li r26,0
	ctx.r26.s64 = 0;
	// add r27,r27,r9
	ctx.r27.u64 = ctx.r27.u64 + ctx.r9.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// ble cr6,0x82636e28
	if (!ctx.cr6.gt) goto loc_82636E28;
loc_82636D8C:
	// lwz r10,-180(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// add. r9,r9,r18
	ctx.r9.u64 = ctx.r9.u64 + ctx.r18.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// blt 0x82636e18
	if (ctx.cr0.lt) goto loc_82636E18;
	// cmpw cr6,r9,r17
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x82636e18
	if (!ctx.cr6.lt) goto loc_82636E18;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x82636e18
	if (ctx.cr6.lt) goto loc_82636E18;
	// cmpw cr6,r8,r16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x82636e18
	if (!ctx.cr6.lt) goto loc_82636E18;
	// lwz r21,20(r3)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// sraw r10,r8,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r10.s64 = ctx.r8.s32 >> temp.u32;
	// mullw r10,r10,r21
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r21.s32);
	// lwz r7,15372(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 15372);
	// sraw r5,r9,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r5.s64 = ctx.r9.s32 >> temp.u32;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// and r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 & ctx.r6.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// subf r7,r5,r30
	ctx.r7.u64 = ctx.r30.u64 - ctx.r5.u64;
	// and r15,r9,r6
	ctx.r15.u64 = ctx.r9.u64 & ctx.r6.u64;
	// subf r14,r15,r7
	ctx.r14.u64 = ctx.r7.u64 - ctx.r15.u64;
	// lbzx r7,r21,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r10.u32);
	// lbz r21,0(r10)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r10,1(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// mullw r7,r7,r5
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// stw r10,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r10.u32);
	// mullw r10,r14,r21
	ctx.r10.s64 = int64_t(ctx.r14.s32) * int64_t(ctx.r21.s32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r5,-192(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// mullw r7,r5,r15
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r15.s32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// mullw r7,r10,r4
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// srawi r5,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 8;
	// sraw r10,r5,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r10.s64 = ctx.r5.s32 >> temp.u32;
	// stbu r10,1(r29)
	ea = 1 + ctx.r29.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r29.u32 = ea;
loc_82636E18:
	// lwz r10,15360(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15360);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82636d8c
	if (ctx.cr6.lt) goto loc_82636D8C;
loc_82636E28:
	// lwz r10,-172(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// addi r21,r25,1
	ctx.r21.s64 = ctx.r25.s64 + 1;
	// lwz r9,15364(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 15364);
	// add r26,r31,r10
	ctx.r26.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwz r10,-164(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
	// cmpw cr6,r21,r9
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r9.s32, ctx.xer);
	// add r27,r27,r10
	ctx.r27.u64 = ctx.r27.u64 + ctx.r10.u64;
	// blt cr6,0x82636bdc
	if (ctx.cr6.lt) goto loc_82636BDC;
loc_82636E48:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825e3620
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82654BA8) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// lwz r11,-7072(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -7072);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-7072(r10)
	REX_STORE_U32(ctx.r10.u32 + -7072, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// beq cr6,0x82654bcc
	if (ctx.cr6.eq) goto loc_82654BCC;
	// lwz r3,-17320(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -17320);
	// blr 
	return;
loc_82654BCC:
	// addi r8,r11,-17320
	ctx.r8.s64 = ctx.r11.s64 + -17320;
	// li r10,10240
	ctx.r10.s64 = 10240;
	// addi r9,r8,8
	ctx.r9.s64 = ctx.r8.s64 + 8;
	// li r11,-5120
	ctx.r11.s64 = -5120;
	// addi r9,r9,5120
	ctx.r9.s64 = ctx.r9.s64 + 5120;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
loc_82654BE8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82654bf8
	if (!ctx.cr6.lt) goto loc_82654BF8;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82654c08
	goto loc_82654C08;
loc_82654BF8:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// li r10,255
	ctx.r10.s64 = 255;
	// bgt cr6,0x82654c08
	if (ctx.cr6.gt) goto loc_82654C08;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82654C08:
	// addi r9,r8,8
	ctx.r9.s64 = ctx.r8.s64 + 8;
	// addi r9,r9,5120
	ctx.r9.s64 = ctx.r9.s64 + 5120;
	// stbx r10,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82654be8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82654BE8;
	// addi r11,r8,8
	ctx.r11.s64 = ctx.r8.s64 + 8;
	// addi r3,r11,5120
	ctx.r3.s64 = ctx.r11.s64 + 5120;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826567C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35d0
	ctx.lr = 0x826567C8;
	__savegprlr_14(ctx, base);
	// lis r23,-32117
	ctx.r23.s64 = -2104819712;
	// stw r9,68(r1)
	REX_STORE_U32(ctx.r1.u32 + 68, ctx.r9.u32);
	// add r11,r4,r7
	ctx.r11.u64 = ctx.r4.u64 + ctx.r7.u64;
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r31,r3,r7
	ctx.r31.u64 = ctx.r3.u64 + ctx.r7.u64;
	// lwz r18,92(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// neg r30,r10
	ctx.r30.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lwz r7,-31300(r23)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r23.u32 + -31300);
	// addi r28,r29,-1
	ctx.r28.s64 = ctx.r29.s64 + -1;
	// clrlwi r22,r30,29
	ctx.r22.u64 = ctx.r30.u32 & 0x7;
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r31,r10
	ctx.r30.u64 = ctx.r31.u64 + ctx.r10.u64;
	// subf r20,r7,r31
	ctx.r20.u64 = ctx.r31.u64 - ctx.r7.u64;
	// add r31,r29,r22
	ctx.r31.u64 = ctx.r29.u64 + ctx.r22.u64;
	// subf r21,r7,r11
	ctx.r21.u64 = ctx.r11.u64 - ctx.r7.u64;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// srawi r27,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r10.s32 >> 2;
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// stw r27,-156(r1)
	REX_STORE_U32(ctx.r1.u32 + -156, ctx.r27.u32);
	// mr r15,r20
	ctx.r15.u64 = ctx.r20.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// rlwinm r31,r9,0,28,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE;
	// subf r19,r7,r10
	ctx.r19.u64 = ctx.r10.u64 - ctx.r7.u64;
	// rlwinm r31,r31,0,30,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// addi r29,r31,10
	ctx.r29.s64 = ctx.r31.s64 + 10;
	// stw r29,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r29.u32);
	// bge cr6,0x82656964
	if (!ctx.cr6.lt) goto loc_82656964;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// subf r17,r4,r3
	ctx.r17.u64 = ctx.r3.u64 - ctx.r4.u64;
	// subf r16,r21,r20
	ctx.r16.u64 = ctx.r20.u64 - ctx.r21.u64;
	// subf r9,r5,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r5.u64;
loc_82656854:
	// lbzx r10,r17,r24
	ctx.r10.u64 = REX_LOAD_U8(ctx.r17.u32 + ctx.r24.u32);
	// add r3,r19,r25
	ctx.r3.u64 = ctx.r19.u64 + ctx.r25.u64;
	// lbz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r29,0(r28)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r28.u32 + 0);
	// rldicr r31,r10,8,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r5,0(r24)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r24.u32 + 0);
	// rldicr r26,r4,8,63
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r14,r29,8,63
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r29.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r27,r5,8,63
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 | ctx.r10.u64;
	// or r4,r26,r4
	ctx.r4.u64 = ctx.r26.u64 | ctx.r4.u64;
	// or r31,r14,r29
	ctx.r31.u64 = ctx.r14.u64 | ctx.r29.u64;
	// or r5,r27,r5
	ctx.r5.u64 = ctx.r27.u64 | ctx.r5.u64;
	// rldicr r26,r4,16,47
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicr r14,r31,16,47
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r31.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicr r29,r10,16,47
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicr r27,r5,16,47
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r5.u64, 16) & 0xFFFFFFFFFFFF0000;
	// or r4,r26,r4
	ctx.r4.u64 = ctx.r26.u64 | ctx.r4.u64;
	// or r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 | ctx.r10.u64;
	// or r5,r27,r5
	ctx.r5.u64 = ctx.r27.u64 | ctx.r5.u64;
	// or r26,r14,r31
	ctx.r26.u64 = ctx.r14.u64 | ctx.r31.u64;
	// rldicr r27,r4,32,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r31,r10,32,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r29,r5,32,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r14,r26,32,31
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r26.u64, 32) & 0xFFFFFFFF00000000;
	// or r27,r27,r4
	ctx.r27.u64 = ctx.r27.u64 | ctx.r4.u64;
	// or r31,r31,r10
	ctx.r31.u64 = ctx.r31.u64 | ctx.r10.u64;
	// or r29,r29,r5
	ctx.r29.u64 = ctx.r29.u64 | ctx.r5.u64;
	// or r26,r14,r26
	ctx.r26.u64 = ctx.r14.u64 | ctx.r26.u64;
	// add r4,r16,r3
	ctx.r4.u64 = ctx.r16.u64 + ctx.r3.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x82656900
	if (!ctx.cr6.gt) goto loc_82656900;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// addi r7,r28,1
	ctx.r7.s64 = ctx.r28.s64 + 1;
loc_826568E4:
	// lbz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// stbx r5,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u8);
	// lbz r5,0(r28)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r28.u32 + 0);
	// stbx r5,r7,r11
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x826568e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826568E4;
	// lwz r7,-31300(r23)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r23.u32 + -31300);
loc_82656900:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82656940
	if (!ctx.cr6.gt) goto loc_82656940;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// subf r5,r25,r15
	ctx.r5.u64 = ctx.r15.u64 - ctx.r25.u64;
	// subf r4,r25,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r25.u64;
	// subf r3,r25,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r25.u64;
loc_8265691C:
	// stdx r31,r5,r11
	REX_STORE_U64(ctx.r5.u32 + ctx.r11.u32, ctx.r31.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r29,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r29.u64);
	// stdx r27,r4,r11
	REX_STORE_U64(ctx.r4.u32 + ctx.r11.u32, ctx.r27.u64);
	// stdx r26,r3,r11
	REX_STORE_U64(ctx.r3.u32 + ctx.r11.u32, ctx.r26.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r7,-31300(r23)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r23.u32 + -31300);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8265691c
	if (ctx.cr6.lt) goto loc_8265691C;
loc_82656940:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r15,r15,r18
	ctx.r15.u64 = ctx.r15.u64 + ctx.r18.u64;
	// add r25,r25,r18
	ctx.r25.u64 = ctx.r25.u64 + ctx.r18.u64;
	// add r24,r24,r18
	ctx.r24.u64 = ctx.r24.u64 + ctx.r18.u64;
	// add r30,r30,r18
	ctx.r30.u64 = ctx.r30.u64 + ctx.r18.u64;
	// add r28,r28,r18
	ctx.r28.u64 = ctx.r28.u64 + ctx.r18.u64;
	// bne 0x82656854
	if (!ctx.cr0.eq) goto loc_82656854;
	// lwz r29,-160(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// lwz r27,-156(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -156);
loc_82656964:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x826569d8
	if (ctx.cr6.eq) goto loc_826569D8;
	// mullw r11,r29,r18
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r18.s32);
	// subf r8,r11,r20
	ctx.r8.u64 = ctx.r20.u64 - ctx.r11.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x826569d8
	if (!ctx.cr6.gt) goto loc_826569D8;
	// subf r11,r20,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r20.u64;
	// neg r30,r18
	ctx.r30.s64 = static_cast<int64_t>(-ctx.r18.u64);
	// add r7,r11,r21
	ctx.r7.u64 = ctx.r11.u64 + ctx.r21.u64;
	// subf r10,r8,r21
	ctx.r10.u64 = ctx.r21.u64 - ctx.r8.u64;
	// subf r31,r21,r20
	ctx.r31.u64 = ctx.r20.u64 - ctx.r21.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82656994:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x826569c4
	if (!ctx.cr6.gt) goto loc_826569C4;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// add r5,r31,r10
	ctx.r5.u64 = ctx.r31.u64 + ctx.r10.u64;
	// subf r4,r8,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r8.u64;
loc_826569AC:
	// lwzx r9,r11,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r9,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x826569ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826569AC;
loc_826569C4:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// add r8,r8,r18
	ctx.r8.u64 = ctx.r8.u64 + ctx.r18.u64;
	// add r7,r7,r18
	ctx.r7.u64 = ctx.r7.u64 + ctx.r18.u64;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// bne 0x82656994
	if (!ctx.cr0.eq) goto loc_82656994;
loc_826569D8:
	// lwz r11,68(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82656a68
	if (ctx.cr6.eq) goto loc_82656A68;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subf r8,r18,r15
	ctx.r8.u64 = ctx.r15.u64 - ctx.r18.u64;
	// subf r9,r18,r25
	ctx.r9.u64 = ctx.r25.u64 - ctx.r18.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// neg r11,r6
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// beq cr6,0x82656a04
	if (ctx.cr6.eq) goto loc_82656A04;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// b 0x82656a08
	goto loc_82656A08;
loc_82656A04:
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
loc_82656A08:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82656a68
	if (!ctx.cr6.gt) goto loc_82656A68;
	// neg r5,r18
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r18.u64);
	// subf r10,r15,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r15.u64;
	// subf r6,r9,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r9.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82656A24:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82656a54
	if (!ctx.cr6.gt) goto loc_82656A54;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
	// subf r8,r15,r25
	ctx.r8.u64 = ctx.r25.u64 - ctx.r15.u64;
loc_82656A3C:
	// lwzx r4,r9,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r3,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82656a3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82656A3C;
loc_82656A54:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r15,r15,r18
	ctx.r15.u64 = ctx.r15.u64 + ctx.r18.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r25,r25,r18
	ctx.r25.u64 = ctx.r25.u64 + ctx.r18.u64;
	// bne 0x82656a24
	if (!ctx.cr0.eq) goto loc_82656A24;
loc_82656A68:
	// b 0x825e3620
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82667A98) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35d0
	ctx.lr = 0x82667AA0;
	__savegprlr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,152(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// stw r10,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82667ae4
	if (ctx.cr6.eq) goto loc_82667AE4;
	// lwz r11,15916(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15916);
	// lwz r31,388(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r30,380(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r29,372(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bctrl 
	ctx.lr = 0x82667ADC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x825e3620
	__restgprlr_14(ctx, base);
	return;
loc_82667AE4:
	// lwz r30,52(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r29,48(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r31,404(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r15,56(r3)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// rlwinm r27,r29,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lwz r14,60(r3)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// srawi. r31,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// rlwinm r24,r15,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// add r26,r30,r29
	ctx.r26.u64 = ctx.r30.u64 + ctx.r29.u64;
	// add r10,r7,r25
	ctx.r10.u64 = ctx.r7.u64 + ctx.r25.u64;
	// ble 0x82667c80
	if (!ctx.cr0.gt) goto loc_82667C80;
	// lwz r4,396(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// subf r6,r5,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r5.u64;
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// stw r6,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// stw r3,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
loc_82667B3C:
	// lwz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82667c40
	if (!ctx.cr6.gt) goto loc_82667C40;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// addi r25,r7,-2
	ctx.r25.s64 = ctx.r7.s64 + -2;
	// subf r21,r10,r7
	ctx.r21.u64 = ctx.r7.u64 - ctx.r10.u64;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r23,r11,r22
	ctx.r23.u64 = ctx.r11.u64 + ctx.r22.u64;
	// add r7,r14,r15
	ctx.r7.u64 = ctx.r14.u64 + ctx.r15.u64;
	// add r11,r23,r14
	ctx.r11.u64 = ctx.r23.u64 + ctx.r14.u64;
	// subf r18,r23,r22
	ctx.r18.u64 = ctx.r22.u64 - ctx.r23.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// add r3,r15,r22
	ctx.r3.u64 = ctx.r15.u64 + ctx.r22.u64;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// subf r20,r14,r7
	ctx.r20.u64 = ctx.r7.u64 - ctx.r14.u64;
	// subf r19,r14,r15
	ctx.r19.u64 = ctx.r15.u64 - ctx.r14.u64;
	// subf r17,r9,r8
	ctx.r17.u64 = ctx.r8.u64 - ctx.r9.u64;
	// subf r16,r15,r7
	ctx.r16.u64 = ctx.r7.u64 - ctx.r15.u64;
	// subf r23,r22,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r22.u64;
loc_82667B90:
	// lbzu r7,2(r25)
	ea = 2 + ctx.r25.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r25.u32 = ea;
	// std r10,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// stbx r7,r5,r26
	REX_STORE_U8(ctx.r5.u32 + ctx.r26.u32, ctx.r7.u8);
	// stbx r7,r5,r30
	REX_STORE_U8(ctx.r5.u32 + ctx.r30.u32, ctx.r7.u8);
	// stbx r7,r5,r29
	REX_STORE_U8(ctx.r5.u32 + ctx.r29.u32, ctx.r7.u8);
	// stb r7,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r7.u8);
	// add r7,r5,r27
	ctx.r7.u64 = ctx.r5.u64 + ctx.r27.u64;
	// lbz r10,-1(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + -1);
	// stbx r10,r6,r26
	REX_STORE_U8(ctx.r6.u32 + ctx.r26.u32, ctx.r10.u8);
	// stbx r10,r6,r30
	REX_STORE_U8(ctx.r6.u32 + ctx.r30.u32, ctx.r10.u8);
	// stbx r10,r6,r29
	REX_STORE_U8(ctx.r6.u32 + ctx.r29.u32, ctx.r10.u8);
	// stb r10,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r10.u8);
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + ctx.r27.u64;
	// lbzx r10,r21,r4
	ctx.r10.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r4.u32);
	// stbx r10,r7,r26
	REX_STORE_U8(ctx.r7.u32 + ctx.r26.u32, ctx.r10.u8);
	// stbx r10,r7,r30
	REX_STORE_U8(ctx.r7.u32 + ctx.r30.u32, ctx.r10.u8);
	// stbx r10,r7,r29
	REX_STORE_U8(ctx.r7.u32 + ctx.r29.u32, ctx.r10.u8);
	// stbx r10,r5,r27
	REX_STORE_U8(ctx.r5.u32 + ctx.r27.u32, ctx.r10.u8);
	// add r5,r7,r27
	ctx.r5.u64 = ctx.r7.u64 + ctx.r27.u64;
	// lbz r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// stbx r7,r6,r26
	REX_STORE_U8(ctx.r6.u32 + ctx.r26.u32, ctx.r7.u8);
	// stbx r7,r6,r30
	REX_STORE_U8(ctx.r6.u32 + ctx.r30.u32, ctx.r7.u8);
	// stbx r7,r6,r29
	REX_STORE_U8(ctx.r6.u32 + ctx.r29.u32, ctx.r7.u8);
	// stb r7,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r7.u8);
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + ctx.r27.u64;
	// lbzx r7,r17,r31
	ctx.r7.u64 = REX_LOAD_U8(ctx.r17.u32 + ctx.r31.u32);
	// stbx r7,r16,r3
	REX_STORE_U8(ctx.r16.u32 + ctx.r3.u32, ctx.r7.u8);
	// stbx r7,r18,r11
	REX_STORE_U8(ctx.r18.u32 + ctx.r11.u32, ctx.r7.u8);
	// stb r7,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// stb r7,0(r28)
	REX_STORE_U8(ctx.r28.u32 + 0, ctx.r7.u8);
	// lbz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stbx r7,r20,r11
	REX_STORE_U8(ctx.r20.u32 + ctx.r11.u32, ctx.r7.u8);
	// stb r7,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// stbx r7,r19,r11
	REX_STORE_U8(ctx.r19.u32 + ctx.r11.u32, ctx.r7.u8);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stbx r7,r23,r28
	REX_STORE_U8(ctx.r23.u32 + ctx.r28.u32, ctx.r7.u8);
	// add r28,r28,r24
	ctx.r28.u64 = ctx.r28.u64 + ctx.r24.u64;
	// ld r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// bdnz 0x82667b90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82667B90;
	// lwz r25,364(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r3,124(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
loc_82667C40:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r6,r30,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,116(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// add r7,r10,r25
	ctx.r7.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r4,372(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r31,r6,r11
	ctx.r31.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r6,r14,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r5,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// add r10,r7,r25
	ctx.r10.u64 = ctx.r7.u64 + ctx.r25.u64;
	// stw r31,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r22,r6,r22
	ctx.r22.u64 = ctx.r6.u64 + ctx.r22.u64;
	// bne 0x82667b3c
	if (!ctx.cr0.eq) goto loc_82667B3C;
loc_82667C80:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x825e3620
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8266FE50) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,25696
	ctx.r9.s64 = ctx.r11.s64 + 25696;
	// lwzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mullw r6,r7,r4
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// addis r5,r6,2
	ctx.r5.s64 = ctx.r6.s64 + 131072;
	// srawi r4,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 18;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82670348) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e360c
	ctx.lr = 0x82670350;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1280(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1280);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,7868(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 7868);
	// li r5,1
	ctx.r5.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826703e0
	if (ctx.cr6.eq) goto loc_826703E0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82703308
	ctx.lr = 0x82670374;
	sub_82703308(ctx, base);
	// lwz r11,1348(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1348);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826703e8
	if (!ctx.cr6.gt) goto loc_826703E8;
	// addi r30,r31,1272
	ctx.r30.s64 = ctx.r31.s64 + 1272;
loc_82670388:
	// li r5,18
	ctx.r5.s64 = 18;
	// lwz r4,20(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82703308
	ctx.lr = 0x82670398;
	sub_82703308(ctx, base);
	// li r5,18
	ctx.r5.s64 = 18;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r4,24(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82703308
	ctx.lr = 0x826703A8;
	sub_82703308(ctx, base);
	// li r5,14
	ctx.r5.s64 = 14;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82703308
	ctx.lr = 0x826703B8;
	sub_82703308(ctx, base);
	// li r5,14
	ctx.r5.s64 = 14;
	// lwzu r4,16(r30)
	ea = 16 + ctx.r30.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82703308
	ctx.lr = 0x826703C8;
	sub_82703308(ctx, base);
	// lwz r11,1348(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1348);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82670388
	if (ctx.cr6.lt) goto loc_82670388;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825e365c
	__restgprlr_29(ctx, base);
	return;
loc_826703E0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82703308
	ctx.lr = 0x826703E8;
	sub_82703308(ctx, base);
loc_826703E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825e365c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82674728) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35d0
	ctx.lr = 0x82674730;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x825e4164
	ctx.lr = 0x82674738;
	__savefpr_27(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,780(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 780);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,588(r1)
	REX_STORE_U32(ctx.r1.u32 + 588, ctx.r6.u32);
	// stw r7,596(r1)
	REX_STORE_U32(ctx.r1.u32 + 596, ctx.r7.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r16,-1
	ctx.r16.s64 = -1;
	// lwz r3,0(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// li r20,1
	ctx.r20.s64 = 1;
	// stw r3,624(r31)
	REX_STORE_U32(ctx.r31.u32 + 624, ctx.r3.u32);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// stw r11,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// li r29,2
	ctx.r29.s64 = 2;
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// li r24,-100
	ctx.r24.s64 = -100;
	// stw r11,628(r31)
	REX_STORE_U32(ctx.r31.u32 + 628, ctx.r11.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stw r4,572(r1)
	REX_STORE_U32(ctx.r1.u32 + 572, ctx.r4.u32);
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r10,632(r31)
	REX_STORE_U32(ctx.r31.u32 + 632, ctx.r10.u32);
	// stw r9,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// lwz r9,12(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// stw r9,636(r31)
	REX_STORE_U32(ctx.r31.u32 + 636, ctx.r9.u32);
	// stw r7,644(r31)
	REX_STORE_U32(ctx.r31.u32 + 644, ctx.r7.u32);
	// stw r6,640(r31)
	REX_STORE_U32(ctx.r31.u32 + 640, ctx.r6.u32);
	// stw r4,652(r31)
	REX_STORE_U32(ctx.r31.u32 + 652, ctx.r4.u32);
	// stw r16,648(r31)
	REX_STORE_U32(ctx.r31.u32 + 648, ctx.r16.u32);
	// stw r5,580(r1)
	REX_STORE_U32(ctx.r1.u32 + 580, ctx.r5.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// std r30,736(r31)
	REX_STORE_U64(ctx.r31.u32 + 736, ctx.r30.u64);
	// stw r30,768(r31)
	REX_STORE_U32(ctx.r31.u32 + 768, ctx.r30.u32);
	// stw r30,772(r31)
	REX_STORE_U32(ctx.r31.u32 + 772, ctx.r30.u32);
	// stw r30,780(r31)
	REX_STORE_U32(ctx.r31.u32 + 780, ctx.r30.u32);
	// stw r30,788(r31)
	REX_STORE_U32(ctx.r31.u32 + 788, ctx.r30.u32);
	// stw r30,792(r31)
	REX_STORE_U32(ctx.r31.u32 + 792, ctx.r30.u32);
	// stw r20,836(r31)
	REX_STORE_U32(ctx.r31.u32 + 836, ctx.r20.u32);
	// stw r30,868(r31)
	REX_STORE_U32(ctx.r31.u32 + 868, ctx.r30.u32);
	// stw r30,872(r31)
	REX_STORE_U32(ctx.r31.u32 + 872, ctx.r30.u32);
	// stw r30,1260(r31)
	REX_STORE_U32(ctx.r31.u32 + 1260, ctx.r30.u32);
	// stw r30,1264(r31)
	REX_STORE_U32(ctx.r31.u32 + 1264, ctx.r30.u32);
	// stw r30,1268(r31)
	REX_STORE_U32(ctx.r31.u32 + 1268, ctx.r30.u32);
	// stw r30,1272(r31)
	REX_STORE_U32(ctx.r31.u32 + 1272, ctx.r30.u32);
	// stw r30,1276(r31)
	REX_STORE_U32(ctx.r31.u32 + 1276, ctx.r30.u32);
	// stw r30,1424(r31)
	REX_STORE_U32(ctx.r31.u32 + 1424, ctx.r30.u32);
	// stw r30,1428(r31)
	REX_STORE_U32(ctx.r31.u32 + 1428, ctx.r30.u32);
	// stw r30,1436(r31)
	REX_STORE_U32(ctx.r31.u32 + 1436, ctx.r30.u32);
	// stw r30,1440(r31)
	REX_STORE_U32(ctx.r31.u32 + 1440, ctx.r30.u32);
	// stw r30,1444(r31)
	REX_STORE_U32(ctx.r31.u32 + 1444, ctx.r30.u32);
	// stw r30,1448(r31)
	REX_STORE_U32(ctx.r31.u32 + 1448, ctx.r30.u32);
	// stw r20,1480(r31)
	REX_STORE_U32(ctx.r31.u32 + 1480, ctx.r20.u32);
	// stw r30,1488(r31)
	REX_STORE_U32(ctx.r31.u32 + 1488, ctx.r30.u32);
	// stw r30,1492(r31)
	REX_STORE_U32(ctx.r31.u32 + 1492, ctx.r30.u32);
	// stw r30,1496(r31)
	REX_STORE_U32(ctx.r31.u32 + 1496, ctx.r30.u32);
	// stw r30,1500(r31)
	REX_STORE_U32(ctx.r31.u32 + 1500, ctx.r30.u32);
	// stw r30,1504(r31)
	REX_STORE_U32(ctx.r31.u32 + 1504, ctx.r30.u32);
	// stw r30,1508(r31)
	REX_STORE_U32(ctx.r31.u32 + 1508, ctx.r30.u32);
	// stw r30,1512(r31)
	REX_STORE_U32(ctx.r31.u32 + 1512, ctx.r30.u32);
	// stw r30,1536(r31)
	REX_STORE_U32(ctx.r31.u32 + 1536, ctx.r30.u32);
	// stw r30,1540(r31)
	REX_STORE_U32(ctx.r31.u32 + 1540, ctx.r30.u32);
	// stw r20,1544(r31)
	REX_STORE_U32(ctx.r31.u32 + 1544, ctx.r20.u32);
	// stw r30,1560(r31)
	REX_STORE_U32(ctx.r31.u32 + 1560, ctx.r30.u32);
	// stw r30,1564(r31)
	REX_STORE_U32(ctx.r31.u32 + 1564, ctx.r30.u32);
	// stw r30,1568(r31)
	REX_STORE_U32(ctx.r31.u32 + 1568, ctx.r30.u32);
	// stw r30,1572(r31)
	REX_STORE_U32(ctx.r31.u32 + 1572, ctx.r30.u32);
	// stw r30,1576(r31)
	REX_STORE_U32(ctx.r31.u32 + 1576, ctx.r30.u32);
	// stw r30,1580(r31)
	REX_STORE_U32(ctx.r31.u32 + 1580, ctx.r30.u32);
	// stw r30,1584(r31)
	REX_STORE_U32(ctx.r31.u32 + 1584, ctx.r30.u32);
	// stw r30,1604(r31)
	REX_STORE_U32(ctx.r31.u32 + 1604, ctx.r30.u32);
	// stw r30,1608(r31)
	REX_STORE_U32(ctx.r31.u32 + 1608, ctx.r30.u32);
	// stw r30,1612(r31)
	REX_STORE_U32(ctx.r31.u32 + 1612, ctx.r30.u32);
	// stw r30,1616(r31)
	REX_STORE_U32(ctx.r31.u32 + 1616, ctx.r30.u32);
	// stw r30,1620(r31)
	REX_STORE_U32(ctx.r31.u32 + 1620, ctx.r30.u32);
	// stw r20,1624(r31)
	REX_STORE_U32(ctx.r31.u32 + 1624, ctx.r20.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r30,1628(r31)
	REX_STORE_U32(ctx.r31.u32 + 1628, ctx.r30.u32);
	// stw r5,1632(r31)
	REX_STORE_U32(ctx.r31.u32 + 1632, ctx.r5.u32);
	// stw r29,1640(r31)
	REX_STORE_U32(ctx.r31.u32 + 1640, ctx.r29.u32);
	// stw r30,1656(r31)
	REX_STORE_U32(ctx.r31.u32 + 1656, ctx.r30.u32);
	// stw r30,1660(r31)
	REX_STORE_U32(ctx.r31.u32 + 1660, ctx.r30.u32);
	// stw r30,1664(r31)
	REX_STORE_U32(ctx.r31.u32 + 1664, ctx.r30.u32);
	// stw r30,1668(r31)
	REX_STORE_U32(ctx.r31.u32 + 1668, ctx.r30.u32);
	// stw r30,1672(r31)
	REX_STORE_U32(ctx.r31.u32 + 1672, ctx.r30.u32);
	// stw r30,1676(r31)
	REX_STORE_U32(ctx.r31.u32 + 1676, ctx.r30.u32);
	// stw r30,1680(r31)
	REX_STORE_U32(ctx.r31.u32 + 1680, ctx.r30.u32);
	// stw r24,1684(r31)
	REX_STORE_U32(ctx.r31.u32 + 1684, ctx.r24.u32);
	// stw r24,1688(r31)
	REX_STORE_U32(ctx.r31.u32 + 1688, ctx.r24.u32);
	// stw r24,1692(r31)
	REX_STORE_U32(ctx.r31.u32 + 1692, ctx.r24.u32);
	// stw r24,1696(r31)
	REX_STORE_U32(ctx.r31.u32 + 1696, ctx.r24.u32);
	// stw r30,1700(r31)
	REX_STORE_U32(ctx.r31.u32 + 1700, ctx.r30.u32);
	// stw r16,2088(r31)
	REX_STORE_U32(ctx.r31.u32 + 2088, ctx.r16.u32);
	// stw r16,2092(r31)
	REX_STORE_U32(ctx.r31.u32 + 2092, ctx.r16.u32);
	// stw r30,2096(r31)
	REX_STORE_U32(ctx.r31.u32 + 2096, ctx.r30.u32);
	// stw r30,2100(r31)
	REX_STORE_U32(ctx.r31.u32 + 2100, ctx.r30.u32);
	// stw r30,2108(r31)
	REX_STORE_U32(ctx.r31.u32 + 2108, ctx.r30.u32);
	// stw r30,2112(r31)
	REX_STORE_U32(ctx.r31.u32 + 2112, ctx.r30.u32);
	// stw r30,2116(r31)
	REX_STORE_U32(ctx.r31.u32 + 2116, ctx.r30.u32);
	// stw r30,2120(r31)
	REX_STORE_U32(ctx.r31.u32 + 2120, ctx.r30.u32);
	// stw r30,2124(r31)
	REX_STORE_U32(ctx.r31.u32 + 2124, ctx.r30.u32);
	// stw r30,2148(r31)
	REX_STORE_U32(ctx.r31.u32 + 2148, ctx.r30.u32);
	// stw r16,2152(r31)
	REX_STORE_U32(ctx.r31.u32 + 2152, ctx.r16.u32);
	// stw r30,2164(r31)
	REX_STORE_U32(ctx.r31.u32 + 2164, ctx.r30.u32);
	// stw r30,2168(r31)
	REX_STORE_U32(ctx.r31.u32 + 2168, ctx.r30.u32);
	// stw r30,2172(r31)
	REX_STORE_U32(ctx.r31.u32 + 2172, ctx.r30.u32);
	// stw r30,2176(r31)
	REX_STORE_U32(ctx.r31.u32 + 2176, ctx.r30.u32);
	// stw r16,2180(r31)
	REX_STORE_U32(ctx.r31.u32 + 2180, ctx.r16.u32);
	// stw r16,2184(r31)
	REX_STORE_U32(ctx.r31.u32 + 2184, ctx.r16.u32);
	// stw r30,2188(r31)
	REX_STORE_U32(ctx.r31.u32 + 2188, ctx.r30.u32);
	// stw r30,2204(r31)
	REX_STORE_U32(ctx.r31.u32 + 2204, ctx.r30.u32);
	// stw r30,2260(r31)
	REX_STORE_U32(ctx.r31.u32 + 2260, ctx.r30.u32);
	// stw r30,2268(r31)
	REX_STORE_U32(ctx.r31.u32 + 2268, ctx.r30.u32);
	// stw r30,2272(r31)
	REX_STORE_U32(ctx.r31.u32 + 2272, ctx.r30.u32);
	// stw r30,2276(r31)
	REX_STORE_U32(ctx.r31.u32 + 2276, ctx.r30.u32);
	// stw r30,2280(r31)
	REX_STORE_U32(ctx.r31.u32 + 2280, ctx.r30.u32);
	// stw r30,2284(r31)
	REX_STORE_U32(ctx.r31.u32 + 2284, ctx.r30.u32);
	// stw r30,2288(r31)
	REX_STORE_U32(ctx.r31.u32 + 2288, ctx.r30.u32);
	// stw r30,2296(r31)
	REX_STORE_U32(ctx.r31.u32 + 2296, ctx.r30.u32);
	// stw r20,2300(r31)
	REX_STORE_U32(ctx.r31.u32 + 2300, ctx.r20.u32);
	// stw r30,2312(r31)
	REX_STORE_U32(ctx.r31.u32 + 2312, ctx.r30.u32);
	// stw r30,2324(r31)
	REX_STORE_U32(ctx.r31.u32 + 2324, ctx.r30.u32);
	// stw r30,2328(r31)
	REX_STORE_U32(ctx.r31.u32 + 2328, ctx.r30.u32);
	// stw r30,2336(r31)
	REX_STORE_U32(ctx.r31.u32 + 2336, ctx.r30.u32);
	// stw r30,2340(r31)
	REX_STORE_U32(ctx.r31.u32 + 2340, ctx.r30.u32);
	// stw r30,2344(r31)
	REX_STORE_U32(ctx.r31.u32 + 2344, ctx.r30.u32);
	// stw r30,2424(r31)
	REX_STORE_U32(ctx.r31.u32 + 2424, ctx.r30.u32);
	// stw r30,2428(r31)
	REX_STORE_U32(ctx.r31.u32 + 2428, ctx.r30.u32);
	// stb r30,2432(r31)
	REX_STORE_U8(ctx.r31.u32 + 2432, ctx.r30.u8);
	// stw r30,2436(r31)
	REX_STORE_U32(ctx.r31.u32 + 2436, ctx.r30.u32);
	// stw r30,2440(r31)
	REX_STORE_U32(ctx.r31.u32 + 2440, ctx.r30.u32);
	// stw r30,2444(r31)
	REX_STORE_U32(ctx.r31.u32 + 2444, ctx.r30.u32);
	// stw r30,2448(r31)
	REX_STORE_U32(ctx.r31.u32 + 2448, ctx.r30.u32);
	// stw r30,2456(r31)
	REX_STORE_U32(ctx.r31.u32 + 2456, ctx.r30.u32);
	// stw r30,2464(r31)
	REX_STORE_U32(ctx.r31.u32 + 2464, ctx.r30.u32);
	// stw r30,2472(r31)
	REX_STORE_U32(ctx.r31.u32 + 2472, ctx.r30.u32);
	// stw r30,2480(r31)
	REX_STORE_U32(ctx.r31.u32 + 2480, ctx.r30.u32);
	// stw r30,2484(r31)
	REX_STORE_U32(ctx.r31.u32 + 2484, ctx.r30.u32);
	// stw r30,2544(r31)
	REX_STORE_U32(ctx.r31.u32 + 2544, ctx.r30.u32);
	// stw r30,2552(r31)
	REX_STORE_U32(ctx.r31.u32 + 2552, ctx.r30.u32);
	// stw r30,2564(r31)
	REX_STORE_U32(ctx.r31.u32 + 2564, ctx.r30.u32);
	// stw r30,2568(r31)
	REX_STORE_U32(ctx.r31.u32 + 2568, ctx.r30.u32);
	// stw r30,2572(r31)
	REX_STORE_U32(ctx.r31.u32 + 2572, ctx.r30.u32);
	// stw r30,2576(r31)
	REX_STORE_U32(ctx.r31.u32 + 2576, ctx.r30.u32);
	// stw r30,2580(r31)
	REX_STORE_U32(ctx.r31.u32 + 2580, ctx.r30.u32);
	// stw r30,2584(r31)
	REX_STORE_U32(ctx.r31.u32 + 2584, ctx.r30.u32);
	// stw r30,2588(r31)
	REX_STORE_U32(ctx.r31.u32 + 2588, ctx.r30.u32);
	// stw r30,2592(r31)
	REX_STORE_U32(ctx.r31.u32 + 2592, ctx.r30.u32);
	// stw r16,2620(r31)
	REX_STORE_U32(ctx.r31.u32 + 2620, ctx.r16.u32);
	// stw r30,2624(r31)
	REX_STORE_U32(ctx.r31.u32 + 2624, ctx.r30.u32);
	// stw r30,2628(r31)
	REX_STORE_U32(ctx.r31.u32 + 2628, ctx.r30.u32);
	// stw r30,2632(r31)
	REX_STORE_U32(ctx.r31.u32 + 2632, ctx.r30.u32);
	// stw r30,2636(r31)
	REX_STORE_U32(ctx.r31.u32 + 2636, ctx.r30.u32);
	// stw r30,2640(r31)
	REX_STORE_U32(ctx.r31.u32 + 2640, ctx.r30.u32);
	// stw r30,2644(r31)
	REX_STORE_U32(ctx.r31.u32 + 2644, ctx.r30.u32);
	// stw r30,2648(r31)
	REX_STORE_U32(ctx.r31.u32 + 2648, ctx.r30.u32);
	// stw r30,2792(r31)
	REX_STORE_U32(ctx.r31.u32 + 2792, ctx.r30.u32);
	// li r7,14
	ctx.r7.s64 = 14;
	// stw r30,2796(r31)
	REX_STORE_U32(ctx.r31.u32 + 2796, ctx.r30.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// stw r30,2812(r31)
	REX_STORE_U32(ctx.r31.u32 + 2812, ctx.r30.u32);
	// stw r30,2816(r31)
	REX_STORE_U32(ctx.r31.u32 + 2816, ctx.r30.u32);
	// stw r30,2820(r31)
	REX_STORE_U32(ctx.r31.u32 + 2820, ctx.r30.u32);
	// stw r30,2824(r31)
	REX_STORE_U32(ctx.r31.u32 + 2824, ctx.r30.u32);
	// stw r8,6720(r31)
	REX_STORE_U32(ctx.r31.u32 + 6720, ctx.r8.u32);
	// lfd f31,-26200(r6)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r6.u32 + -26200);
	// stw r30,6724(r31)
	REX_STORE_U32(ctx.r31.u32 + 6724, ctx.r30.u32);
	// stw r30,6728(r31)
	REX_STORE_U32(ctx.r31.u32 + 6728, ctx.r30.u32);
	// stw r20,6736(r31)
	REX_STORE_U32(ctx.r31.u32 + 6736, ctx.r20.u32);
	// stw r30,6740(r31)
	REX_STORE_U32(ctx.r31.u32 + 6740, ctx.r30.u32);
	// stw r30,6768(r31)
	REX_STORE_U32(ctx.r31.u32 + 6768, ctx.r30.u32);
	// stw r30,6772(r31)
	REX_STORE_U32(ctx.r31.u32 + 6772, ctx.r30.u32);
	// stw r30,6776(r31)
	REX_STORE_U32(ctx.r31.u32 + 6776, ctx.r30.u32);
	// stw r30,6780(r31)
	REX_STORE_U32(ctx.r31.u32 + 6780, ctx.r30.u32);
	// stw r30,6784(r31)
	REX_STORE_U32(ctx.r31.u32 + 6784, ctx.r30.u32);
	// stw r30,6788(r31)
	REX_STORE_U32(ctx.r31.u32 + 6788, ctx.r30.u32);
	// stw r30,6792(r31)
	REX_STORE_U32(ctx.r31.u32 + 6792, ctx.r30.u32);
	// stw r30,6796(r31)
	REX_STORE_U32(ctx.r31.u32 + 6796, ctx.r30.u32);
	// stw r30,6804(r31)
	REX_STORE_U32(ctx.r31.u32 + 6804, ctx.r30.u32);
	// stw r30,6808(r31)
	REX_STORE_U32(ctx.r31.u32 + 6808, ctx.r30.u32);
	// stw r30,6812(r31)
	REX_STORE_U32(ctx.r31.u32 + 6812, ctx.r30.u32);
	// stw r30,6816(r31)
	REX_STORE_U32(ctx.r31.u32 + 6816, ctx.r30.u32);
	// stw r30,6820(r31)
	REX_STORE_U32(ctx.r31.u32 + 6820, ctx.r30.u32);
	// stw r30,6824(r31)
	REX_STORE_U32(ctx.r31.u32 + 6824, ctx.r30.u32);
	// stw r30,6836(r31)
	REX_STORE_U32(ctx.r31.u32 + 6836, ctx.r30.u32);
	// stw r30,6840(r31)
	REX_STORE_U32(ctx.r31.u32 + 6840, ctx.r30.u32);
	// stw r30,6844(r31)
	REX_STORE_U32(ctx.r31.u32 + 6844, ctx.r30.u32);
	// lwz r5,772(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 772);
	// lwz r27,580(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 580);
	// lwz r28,812(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 812);
	// lwz r4,652(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 652);
	// lwz r3,676(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 676);
	// lwz r11,6720(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6720);
	// stw r11,6856(r31)
	REX_STORE_U32(ctx.r31.u32 + 6856, ctx.r11.u32);
	// stw r16,6860(r31)
	REX_STORE_U32(ctx.r31.u32 + 6860, ctx.r16.u32);
	// stw r30,6864(r31)
	REX_STORE_U32(ctx.r31.u32 + 6864, ctx.r30.u32);
	// stw r30,6876(r31)
	REX_STORE_U32(ctx.r31.u32 + 6876, ctx.r30.u32);
	// stw r30,6880(r31)
	REX_STORE_U32(ctx.r31.u32 + 6880, ctx.r30.u32);
	// stw r30,6888(r31)
	REX_STORE_U32(ctx.r31.u32 + 6888, ctx.r30.u32);
	// stw r30,6908(r31)
	REX_STORE_U32(ctx.r31.u32 + 6908, ctx.r30.u32);
	// stw r30,7048(r31)
	REX_STORE_U32(ctx.r31.u32 + 7048, ctx.r30.u32);
	// stw r30,7052(r31)
	REX_STORE_U32(ctx.r31.u32 + 7052, ctx.r30.u32);
	// stw r30,7072(r31)
	REX_STORE_U32(ctx.r31.u32 + 7072, ctx.r30.u32);
	// stw r30,7076(r31)
	REX_STORE_U32(ctx.r31.u32 + 7076, ctx.r30.u32);
	// stw r20,7080(r31)
	REX_STORE_U32(ctx.r31.u32 + 7080, ctx.r20.u32);
	// stw r30,7140(r31)
	REX_STORE_U32(ctx.r31.u32 + 7140, ctx.r30.u32);
	// stw r20,7144(r31)
	REX_STORE_U32(ctx.r31.u32 + 7144, ctx.r20.u32);
	// stw r30,7148(r31)
	REX_STORE_U32(ctx.r31.u32 + 7148, ctx.r30.u32);
	// stw r30,7152(r31)
	REX_STORE_U32(ctx.r31.u32 + 7152, ctx.r30.u32);
	// stw r30,7156(r31)
	REX_STORE_U32(ctx.r31.u32 + 7156, ctx.r30.u32);
	// std r30,7160(r31)
	REX_STORE_U64(ctx.r31.u32 + 7160, ctx.r30.u64);
	// stw r30,7176(r31)
	REX_STORE_U32(ctx.r31.u32 + 7176, ctx.r30.u32);
	// stw r30,7184(r31)
	REX_STORE_U32(ctx.r31.u32 + 7184, ctx.r30.u32);
	// stw r29,7188(r31)
	REX_STORE_U32(ctx.r31.u32 + 7188, ctx.r29.u32);
	// stw r30,7192(r31)
	REX_STORE_U32(ctx.r31.u32 + 7192, ctx.r30.u32);
	// stw r5,7196(r31)
	REX_STORE_U32(ctx.r31.u32 + 7196, ctx.r5.u32);
	// stw r30,7200(r31)
	REX_STORE_U32(ctx.r31.u32 + 7200, ctx.r30.u32);
	// stw r30,7204(r31)
	REX_STORE_U32(ctx.r31.u32 + 7204, ctx.r30.u32);
	// stw r30,7208(r31)
	REX_STORE_U32(ctx.r31.u32 + 7208, ctx.r30.u32);
	// stw r20,7212(r31)
	REX_STORE_U32(ctx.r31.u32 + 7212, ctx.r20.u32);
	// stw r20,7216(r31)
	REX_STORE_U32(ctx.r31.u32 + 7216, ctx.r20.u32);
	// stw r30,7220(r31)
	REX_STORE_U32(ctx.r31.u32 + 7220, ctx.r30.u32);
	// stw r30,7224(r31)
	REX_STORE_U32(ctx.r31.u32 + 7224, ctx.r30.u32);
	// stw r30,7228(r31)
	REX_STORE_U32(ctx.r31.u32 + 7228, ctx.r30.u32);
	// stw r30,7232(r31)
	REX_STORE_U32(ctx.r31.u32 + 7232, ctx.r30.u32);
	// stw r7,7572(r31)
	REX_STORE_U32(ctx.r31.u32 + 7572, ctx.r7.u32);
	// stw r27,7596(r31)
	REX_STORE_U32(ctx.r31.u32 + 7596, ctx.r27.u32);
	// stw r30,7604(r31)
	REX_STORE_U32(ctx.r31.u32 + 7604, ctx.r30.u32);
	// stw r30,7608(r31)
	REX_STORE_U32(ctx.r31.u32 + 7608, ctx.r30.u32);
	// stw r30,7612(r31)
	REX_STORE_U32(ctx.r31.u32 + 7612, ctx.r30.u32);
	// stw r30,7624(r31)
	REX_STORE_U32(ctx.r31.u32 + 7624, ctx.r30.u32);
	// stw r30,7628(r31)
	REX_STORE_U32(ctx.r31.u32 + 7628, ctx.r30.u32);
	// stw r30,7632(r31)
	REX_STORE_U32(ctx.r31.u32 + 7632, ctx.r30.u32);
	// stfd f31,7640(r31)
	REX_STORE_U64(ctx.r31.u32 + 7640, ctx.f31.u64);
	// stfd f31,7648(r31)
	REX_STORE_U64(ctx.r31.u32 + 7648, ctx.f31.u64);
	// stfd f31,7656(r31)
	REX_STORE_U64(ctx.r31.u32 + 7656, ctx.f31.u64);
	// stw r30,7664(r31)
	REX_STORE_U32(ctx.r31.u32 + 7664, ctx.r30.u32);
	// stw r30,7676(r31)
	REX_STORE_U32(ctx.r31.u32 + 7676, ctx.r30.u32);
	// stfd f3,7688(r31)
	REX_STORE_U64(ctx.r31.u32 + 7688, ctx.f3.u64);
	// stw r30,7696(r31)
	REX_STORE_U32(ctx.r31.u32 + 7696, ctx.r30.u32);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// stw r30,7700(r31)
	REX_STORE_U32(ctx.r31.u32 + 7700, ctx.r30.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// std r30,7712(r31)
	REX_STORE_U64(ctx.r31.u32 + 7712, ctx.r30.u64);
	// addi r9,r10,-14704
	ctx.r9.s64 = ctx.r10.s64 + -14704;
	// std r30,7736(r31)
	REX_STORE_U64(ctx.r31.u32 + 7736, ctx.r30.u64);
	// stw r30,7756(r31)
	REX_STORE_U32(ctx.r31.u32 + 7756, ctx.r30.u32);
	// stw r30,7764(r31)
	REX_STORE_U32(ctx.r31.u32 + 7764, ctx.r30.u32);
	// stw r30,7768(r31)
	REX_STORE_U32(ctx.r31.u32 + 7768, ctx.r30.u32);
	// stw r30,7772(r31)
	REX_STORE_U32(ctx.r31.u32 + 7772, ctx.r30.u32);
	// stw r30,7844(r31)
	REX_STORE_U32(ctx.r31.u32 + 7844, ctx.r30.u32);
	// stw r30,7848(r31)
	REX_STORE_U32(ctx.r31.u32 + 7848, ctx.r30.u32);
	// stw r30,7852(r31)
	REX_STORE_U32(ctx.r31.u32 + 7852, ctx.r30.u32);
	// stw r30,7856(r31)
	REX_STORE_U32(ctx.r31.u32 + 7856, ctx.r30.u32);
	// stw r30,7864(r31)
	REX_STORE_U32(ctx.r31.u32 + 7864, ctx.r30.u32);
	// lwz r8,668(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 668);
	// stw r30,7868(r31)
	REX_STORE_U32(ctx.r31.u32 + 7868, ctx.r30.u32);
	// stfd f1,7888(r31)
	REX_STORE_U64(ctx.r31.u32 + 7888, ctx.f1.u64);
	// stfd f2,7896(r31)
	REX_STORE_U64(ctx.r31.u32 + 7896, ctx.f2.u64);
	// stw r4,7904(r31)
	REX_STORE_U32(ctx.r31.u32 + 7904, ctx.r4.u32);
	// lwz r7,684(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 684);
	// stw r8,7936(r31)
	REX_STORE_U32(ctx.r31.u32 + 7936, ctx.r8.u32);
	// stw r30,7972(r31)
	REX_STORE_U32(ctx.r31.u32 + 7972, ctx.r30.u32);
	// stw r30,7976(r31)
	REX_STORE_U32(ctx.r31.u32 + 7976, ctx.r30.u32);
	// stw r30,7980(r31)
	REX_STORE_U32(ctx.r31.u32 + 7980, ctx.r30.u32);
	// stw r30,7984(r31)
	REX_STORE_U32(ctx.r31.u32 + 7984, ctx.r30.u32);
	// stw r30,7988(r31)
	REX_STORE_U32(ctx.r31.u32 + 7988, ctx.r30.u32);
	// stw r30,7992(r31)
	REX_STORE_U32(ctx.r31.u32 + 7992, ctx.r30.u32);
	// stw r30,8024(r31)
	REX_STORE_U32(ctx.r31.u32 + 8024, ctx.r30.u32);
	// stw r30,8028(r31)
	REX_STORE_U32(ctx.r31.u32 + 8028, ctx.r30.u32);
	// stw r30,8032(r31)
	REX_STORE_U32(ctx.r31.u32 + 8032, ctx.r30.u32);
	// stfd f31,8040(r31)
	REX_STORE_U64(ctx.r31.u32 + 8040, ctx.f31.u64);
	// stw r30,8048(r31)
	REX_STORE_U32(ctx.r31.u32 + 8048, ctx.r30.u32);
	// stw r3,8104(r31)
	REX_STORE_U32(ctx.r31.u32 + 8104, ctx.r3.u32);
	// stw r7,8108(r31)
	REX_STORE_U32(ctx.r31.u32 + 8108, ctx.r7.u32);
	// stw r30,8176(r31)
	REX_STORE_U32(ctx.r31.u32 + 8176, ctx.r30.u32);
	// stw r28,8180(r31)
	REX_STORE_U32(ctx.r31.u32 + 8180, ctx.r28.u32);
	// stw r30,8236(r31)
	REX_STORE_U32(ctx.r31.u32 + 8236, ctx.r30.u32);
	// stw r30,17536(r31)
	REX_STORE_U32(ctx.r31.u32 + 17536, ctx.r30.u32);
	// stw r30,17540(r31)
	REX_STORE_U32(ctx.r31.u32 + 17540, ctx.r30.u32);
	// stw r30,19108(r31)
	REX_STORE_U32(ctx.r31.u32 + 19108, ctx.r30.u32);
	// stw r30,19112(r31)
	REX_STORE_U32(ctx.r31.u32 + 19112, ctx.r30.u32);
	// stw r30,19196(r31)
	REX_STORE_U32(ctx.r31.u32 + 19196, ctx.r30.u32);
	// stw r30,19200(r31)
	REX_STORE_U32(ctx.r31.u32 + 19200, ctx.r30.u32);
	// stw r30,19204(r31)
	REX_STORE_U32(ctx.r31.u32 + 19204, ctx.r30.u32);
	// stw r30,19208(r31)
	REX_STORE_U32(ctx.r31.u32 + 19208, ctx.r30.u32);
	// stw r30,19212(r31)
	REX_STORE_U32(ctx.r31.u32 + 19212, ctx.r30.u32);
	// stw r30,19216(r31)
	REX_STORE_U32(ctx.r31.u32 + 19216, ctx.r30.u32);
	// stw r30,19456(r31)
	REX_STORE_U32(ctx.r31.u32 + 19456, ctx.r30.u32);
	// stw r20,19468(r31)
	REX_STORE_U32(ctx.r31.u32 + 19468, ctx.r20.u32);
	// stw r30,20196(r31)
	REX_STORE_U32(ctx.r31.u32 + 20196, ctx.r30.u32);
	// stw r30,20200(r31)
	REX_STORE_U32(ctx.r31.u32 + 20200, ctx.r30.u32);
	// stw r30,20204(r31)
	REX_STORE_U32(ctx.r31.u32 + 20204, ctx.r30.u32);
	// stw r30,20212(r31)
	REX_STORE_U32(ctx.r31.u32 + 20212, ctx.r30.u32);
	// stw r30,20216(r31)
	REX_STORE_U32(ctx.r31.u32 + 20216, ctx.r30.u32);
	// stw r30,20256(r31)
	REX_STORE_U32(ctx.r31.u32 + 20256, ctx.r30.u32);
	// stw r30,20268(r31)
	REX_STORE_U32(ctx.r31.u32 + 20268, ctx.r30.u32);
	// stw r30,20272(r31)
	REX_STORE_U32(ctx.r31.u32 + 20272, ctx.r30.u32);
	// stw r30,20276(r31)
	REX_STORE_U32(ctx.r31.u32 + 20276, ctx.r30.u32);
	// stw r30,20280(r31)
	REX_STORE_U32(ctx.r31.u32 + 20280, ctx.r30.u32);
	// stw r20,20284(r31)
	REX_STORE_U32(ctx.r31.u32 + 20284, ctx.r20.u32);
	// stw r9,20820(r31)
	REX_STORE_U32(ctx.r31.u32 + 20820, ctx.r9.u32);
	// stw r30,20836(r31)
	REX_STORE_U32(ctx.r31.u32 + 20836, ctx.r30.u32);
	// stw r30,20840(r31)
	REX_STORE_U32(ctx.r31.u32 + 20840, ctx.r30.u32);
	// stw r30,20844(r31)
	REX_STORE_U32(ctx.r31.u32 + 20844, ctx.r30.u32);
	// stw r30,20872(r31)
	REX_STORE_U32(ctx.r31.u32 + 20872, ctx.r30.u32);
	// stw r30,20912(r31)
	REX_STORE_U32(ctx.r31.u32 + 20912, ctx.r30.u32);
	// stw r30,20916(r31)
	REX_STORE_U32(ctx.r31.u32 + 20916, ctx.r30.u32);
	// stw r11,21004(r31)
	REX_STORE_U32(ctx.r31.u32 + 21004, ctx.r11.u32);
	// stw r30,21072(r31)
	REX_STORE_U32(ctx.r31.u32 + 21072, ctx.r30.u32);
	// stw r30,21076(r31)
	REX_STORE_U32(ctx.r31.u32 + 21076, ctx.r30.u32);
	// stw r20,21080(r31)
	REX_STORE_U32(ctx.r31.u32 + 21080, ctx.r20.u32);
	// stw r20,21084(r31)
	REX_STORE_U32(ctx.r31.u32 + 21084, ctx.r20.u32);
	// stw r30,21088(r31)
	REX_STORE_U32(ctx.r31.u32 + 21088, ctx.r30.u32);
	// stw r30,21092(r31)
	REX_STORE_U32(ctx.r31.u32 + 21092, ctx.r30.u32);
	// stw r30,21096(r31)
	REX_STORE_U32(ctx.r31.u32 + 21096, ctx.r30.u32);
	// stw r30,21104(r31)
	REX_STORE_U32(ctx.r31.u32 + 21104, ctx.r30.u32);
	// stw r30,21108(r31)
	REX_STORE_U32(ctx.r31.u32 + 21108, ctx.r30.u32);
	// stw r30,21140(r31)
	REX_STORE_U32(ctx.r31.u32 + 21140, ctx.r30.u32);
	// addi r3,r31,30308
	ctx.r3.s64 = ctx.r31.s64 + 30308;
	// stw r30,21156(r31)
	REX_STORE_U32(ctx.r31.u32 + 21156, ctx.r30.u32);
	// stw r30,21160(r31)
	REX_STORE_U32(ctx.r31.u32 + 21160, ctx.r30.u32);
	// stw r30,21256(r31)
	REX_STORE_U32(ctx.r31.u32 + 21256, ctx.r30.u32);
	// stw r20,27968(r31)
	REX_STORE_U32(ctx.r31.u32 + 27968, ctx.r20.u32);
	// stw r30,27988(r31)
	REX_STORE_U32(ctx.r31.u32 + 27988, ctx.r30.u32);
	// stw r30,27992(r31)
	REX_STORE_U32(ctx.r31.u32 + 27992, ctx.r30.u32);
	// stw r30,27996(r31)
	REX_STORE_U32(ctx.r31.u32 + 27996, ctx.r30.u32);
	// stw r20,28000(r31)
	REX_STORE_U32(ctx.r31.u32 + 28000, ctx.r20.u32);
	// stw r20,28004(r31)
	REX_STORE_U32(ctx.r31.u32 + 28004, ctx.r20.u32);
	// stw r20,28008(r31)
	REX_STORE_U32(ctx.r31.u32 + 28008, ctx.r20.u32);
	// stw r20,28012(r31)
	REX_STORE_U32(ctx.r31.u32 + 28012, ctx.r20.u32);
	// stw r30,28016(r31)
	REX_STORE_U32(ctx.r31.u32 + 28016, ctx.r30.u32);
	// stw r30,28020(r31)
	REX_STORE_U32(ctx.r31.u32 + 28020, ctx.r30.u32);
	// stw r30,28024(r31)
	REX_STORE_U32(ctx.r31.u32 + 28024, ctx.r30.u32);
	// stw r30,28028(r31)
	REX_STORE_U32(ctx.r31.u32 + 28028, ctx.r30.u32);
	// stw r30,28032(r31)
	REX_STORE_U32(ctx.r31.u32 + 28032, ctx.r30.u32);
	// stw r30,28036(r31)
	REX_STORE_U32(ctx.r31.u32 + 28036, ctx.r30.u32);
	// stw r20,28040(r31)
	REX_STORE_U32(ctx.r31.u32 + 28040, ctx.r20.u32);
	// stw r30,28044(r31)
	REX_STORE_U32(ctx.r31.u32 + 28044, ctx.r30.u32);
	// stw r30,28048(r31)
	REX_STORE_U32(ctx.r31.u32 + 28048, ctx.r30.u32);
	// stw r30,28052(r31)
	REX_STORE_U32(ctx.r31.u32 + 28052, ctx.r30.u32);
	// stw r20,28056(r31)
	REX_STORE_U32(ctx.r31.u32 + 28056, ctx.r20.u32);
	// stw r30,28060(r31)
	REX_STORE_U32(ctx.r31.u32 + 28060, ctx.r30.u32);
	// stw r30,28064(r31)
	REX_STORE_U32(ctx.r31.u32 + 28064, ctx.r30.u32);
	// stw r30,28068(r31)
	REX_STORE_U32(ctx.r31.u32 + 28068, ctx.r30.u32);
	// stfd f31,28072(r31)
	REX_STORE_U64(ctx.r31.u32 + 28072, ctx.f31.u64);
	// stfd f31,28080(r31)
	REX_STORE_U64(ctx.r31.u32 + 28080, ctx.f31.u64);
	// stw r30,28088(r31)
	REX_STORE_U32(ctx.r31.u32 + 28088, ctx.r30.u32);
	// stw r30,28092(r31)
	REX_STORE_U32(ctx.r31.u32 + 28092, ctx.r30.u32);
	// stw r30,28096(r31)
	REX_STORE_U32(ctx.r31.u32 + 28096, ctx.r30.u32);
	// stw r11,28100(r31)
	REX_STORE_U32(ctx.r31.u32 + 28100, ctx.r11.u32);
	// stw r20,28104(r31)
	REX_STORE_U32(ctx.r31.u32 + 28104, ctx.r20.u32);
	// stw r20,28108(r31)
	REX_STORE_U32(ctx.r31.u32 + 28108, ctx.r20.u32);
	// stw r30,28132(r31)
	REX_STORE_U32(ctx.r31.u32 + 28132, ctx.r30.u32);
	// stw r30,28136(r31)
	REX_STORE_U32(ctx.r31.u32 + 28136, ctx.r30.u32);
	// stw r30,28148(r31)
	REX_STORE_U32(ctx.r31.u32 + 28148, ctx.r30.u32);
	// stw r20,28164(r31)
	REX_STORE_U32(ctx.r31.u32 + 28164, ctx.r20.u32);
	// stw r30,28168(r31)
	REX_STORE_U32(ctx.r31.u32 + 28168, ctx.r30.u32);
	// stw r30,28172(r31)
	REX_STORE_U32(ctx.r31.u32 + 28172, ctx.r30.u32);
	// stw r30,28176(r31)
	REX_STORE_U32(ctx.r31.u32 + 28176, ctx.r30.u32);
	// stw r30,28180(r31)
	REX_STORE_U32(ctx.r31.u32 + 28180, ctx.r30.u32);
	// stw r30,28184(r31)
	REX_STORE_U32(ctx.r31.u32 + 28184, ctx.r30.u32);
	// stw r30,28188(r31)
	REX_STORE_U32(ctx.r31.u32 + 28188, ctx.r30.u32);
	// stw r30,28192(r31)
	REX_STORE_U32(ctx.r31.u32 + 28192, ctx.r30.u32);
	// stw r30,28196(r31)
	REX_STORE_U32(ctx.r31.u32 + 28196, ctx.r30.u32);
	// stw r30,28200(r31)
	REX_STORE_U32(ctx.r31.u32 + 28200, ctx.r30.u32);
	// stw r30,28204(r31)
	REX_STORE_U32(ctx.r31.u32 + 28204, ctx.r30.u32);
	// stw r30,28208(r31)
	REX_STORE_U32(ctx.r31.u32 + 28208, ctx.r30.u32);
	// stw r30,28212(r31)
	REX_STORE_U32(ctx.r31.u32 + 28212, ctx.r30.u32);
	// stw r30,28216(r31)
	REX_STORE_U32(ctx.r31.u32 + 28216, ctx.r30.u32);
	// stw r30,28220(r31)
	REX_STORE_U32(ctx.r31.u32 + 28220, ctx.r30.u32);
	// stw r30,28224(r31)
	REX_STORE_U32(ctx.r31.u32 + 28224, ctx.r30.u32);
	// stw r30,28228(r31)
	REX_STORE_U32(ctx.r31.u32 + 28228, ctx.r30.u32);
	// stw r30,28416(r31)
	REX_STORE_U32(ctx.r31.u32 + 28416, ctx.r30.u32);
	// stw r30,28424(r31)
	REX_STORE_U32(ctx.r31.u32 + 28424, ctx.r30.u32);
	// stw r30,28428(r31)
	REX_STORE_U32(ctx.r31.u32 + 28428, ctx.r30.u32);
	// stw r20,28488(r31)
	REX_STORE_U32(ctx.r31.u32 + 28488, ctx.r20.u32);
	// stw r30,28492(r31)
	REX_STORE_U32(ctx.r31.u32 + 28492, ctx.r30.u32);
	// stw r20,28496(r31)
	REX_STORE_U32(ctx.r31.u32 + 28496, ctx.r20.u32);
	// stw r30,28500(r31)
	REX_STORE_U32(ctx.r31.u32 + 28500, ctx.r30.u32);
	// stw r30,28504(r31)
	REX_STORE_U32(ctx.r31.u32 + 28504, ctx.r30.u32);
	// stw r20,28508(r31)
	REX_STORE_U32(ctx.r31.u32 + 28508, ctx.r20.u32);
	// stw r30,28512(r31)
	REX_STORE_U32(ctx.r31.u32 + 28512, ctx.r30.u32);
	// stw r16,28516(r31)
	REX_STORE_U32(ctx.r31.u32 + 28516, ctx.r16.u32);
	// stw r30,28520(r31)
	REX_STORE_U32(ctx.r31.u32 + 28520, ctx.r30.u32);
	// stw r30,28524(r31)
	REX_STORE_U32(ctx.r31.u32 + 28524, ctx.r30.u32);
	// stw r30,28528(r31)
	REX_STORE_U32(ctx.r31.u32 + 28528, ctx.r30.u32);
	// stw r30,28532(r31)
	REX_STORE_U32(ctx.r31.u32 + 28532, ctx.r30.u32);
	// stw r30,28536(r31)
	REX_STORE_U32(ctx.r31.u32 + 28536, ctx.r30.u32);
	// stw r30,28540(r31)
	REX_STORE_U32(ctx.r31.u32 + 28540, ctx.r30.u32);
	// stw r30,28552(r31)
	REX_STORE_U32(ctx.r31.u32 + 28552, ctx.r30.u32);
	// stw r30,28556(r31)
	REX_STORE_U32(ctx.r31.u32 + 28556, ctx.r30.u32);
	// stw r30,28560(r31)
	REX_STORE_U32(ctx.r31.u32 + 28560, ctx.r30.u32);
	// stw r30,28564(r31)
	REX_STORE_U32(ctx.r31.u32 + 28564, ctx.r30.u32);
	// stw r30,28568(r31)
	REX_STORE_U32(ctx.r31.u32 + 28568, ctx.r30.u32);
	// stw r30,30220(r31)
	REX_STORE_U32(ctx.r31.u32 + 30220, ctx.r30.u32);
	// stw r30,30224(r31)
	REX_STORE_U32(ctx.r31.u32 + 30224, ctx.r30.u32);
	// stw r30,30228(r31)
	REX_STORE_U32(ctx.r31.u32 + 30228, ctx.r30.u32);
	// stw r30,30304(r31)
	REX_STORE_U32(ctx.r31.u32 + 30304, ctx.r30.u32);
	// bl 0x82718f30
	ctx.lr = 0x82674D94;
	sub_82718F30(ctx, base);
	// addi r3,r31,30344
	ctx.r3.s64 = ctx.r31.s64 + 30344;
	// bl 0x82718f48
	ctx.lr = 0x82674D9C;
	sub_82718F48(ctx, base);
	// lwz r11,788(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 788);
	// stw r30,30396(r31)
	REX_STORE_U32(ctx.r31.u32 + 30396, ctx.r30.u32);
	// li r6,30
	ctx.r6.s64 = 30;
	// stw r30,30400(r31)
	REX_STORE_U32(ctx.r31.u32 + 30400, ctx.r30.u32);
	// li r5,5000
	ctx.r5.s64 = 5000;
	// stw r30,30404(r31)
	REX_STORE_U32(ctx.r31.u32 + 30404, ctx.r30.u32);
	// stw r11,30408(r31)
	REX_STORE_U32(ctx.r31.u32 + 30408, ctx.r11.u32);
	// stw r11,30412(r31)
	REX_STORE_U32(ctx.r31.u32 + 30412, ctx.r11.u32);
	// stw r30,30416(r31)
	REX_STORE_U32(ctx.r31.u32 + 30416, ctx.r30.u32);
	// stw r30,30420(r31)
	REX_STORE_U32(ctx.r31.u32 + 30420, ctx.r30.u32);
	// stw r30,30424(r31)
	REX_STORE_U32(ctx.r31.u32 + 30424, ctx.r30.u32);
	// stw r20,30428(r31)
	REX_STORE_U32(ctx.r31.u32 + 30428, ctx.r20.u32);
	// stfd f31,30440(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r31.u32 + 30440, ctx.f31.u64);
	// stfd f31,30448(r31)
	REX_STORE_U64(ctx.r31.u32 + 30448, ctx.f31.u64);
	// stfd f31,30456(r31)
	REX_STORE_U64(ctx.r31.u32 + 30456, ctx.f31.u64);
	// stfd f31,30464(r31)
	REX_STORE_U64(ctx.r31.u32 + 30464, ctx.f31.u64);
	// stfd f31,30472(r31)
	REX_STORE_U64(ctx.r31.u32 + 30472, ctx.f31.u64);
	// stw r6,30480(r31)
	REX_STORE_U32(ctx.r31.u32 + 30480, ctx.r6.u32);
	// stfd f31,30488(r31)
	REX_STORE_U64(ctx.r31.u32 + 30488, ctx.f31.u64);
	// stfd f31,30496(r31)
	REX_STORE_U64(ctx.r31.u32 + 30496, ctx.f31.u64);
	// stfd f31,30504(r31)
	REX_STORE_U64(ctx.r31.u32 + 30504, ctx.f31.u64);
	// stw r30,30512(r31)
	REX_STORE_U32(ctx.r31.u32 + 30512, ctx.r30.u32);
	// stw r20,30516(r31)
	REX_STORE_U32(ctx.r31.u32 + 30516, ctx.r20.u32);
	// std r30,30520(r31)
	REX_STORE_U64(ctx.r31.u32 + 30520, ctx.r30.u64);
	// std r30,30528(r31)
	REX_STORE_U64(ctx.r31.u32 + 30528, ctx.r30.u64);
	// std r30,30536(r31)
	REX_STORE_U64(ctx.r31.u32 + 30536, ctx.r30.u64);
	// stw r20,30544(r31)
	REX_STORE_U32(ctx.r31.u32 + 30544, ctx.r20.u32);
	// std r5,30552(r31)
	REX_STORE_U64(ctx.r31.u32 + 30552, ctx.r5.u64);
	// stw r30,30584(r31)
	REX_STORE_U32(ctx.r31.u32 + 30584, ctx.r30.u32);
	// stw r20,30588(r31)
	REX_STORE_U32(ctx.r31.u32 + 30588, ctx.r20.u32);
	// stw r30,30592(r31)
	REX_STORE_U32(ctx.r31.u32 + 30592, ctx.r30.u32);
	// stw r30,30596(r31)
	REX_STORE_U32(ctx.r31.u32 + 30596, ctx.r30.u32);
	// stw r30,30864(r31)
	REX_STORE_U32(ctx.r31.u32 + 30864, ctx.r30.u32);
	// stw r30,30868(r31)
	REX_STORE_U32(ctx.r31.u32 + 30868, ctx.r30.u32);
	// stw r30,30872(r31)
	REX_STORE_U32(ctx.r31.u32 + 30872, ctx.r30.u32);
	// stw r30,30876(r31)
	REX_STORE_U32(ctx.r31.u32 + 30876, ctx.r30.u32);
	// stw r30,30880(r31)
	REX_STORE_U32(ctx.r31.u32 + 30880, ctx.r30.u32);
	// stw r30,30884(r31)
	REX_STORE_U32(ctx.r31.u32 + 30884, ctx.r30.u32);
	// stw r30,30888(r31)
	REX_STORE_U32(ctx.r31.u32 + 30888, ctx.r30.u32);
	// stw r30,30892(r31)
	REX_STORE_U32(ctx.r31.u32 + 30892, ctx.r30.u32);
	// stw r30,30896(r31)
	REX_STORE_U32(ctx.r31.u32 + 30896, ctx.r30.u32);
	// stw r30,30900(r31)
	REX_STORE_U32(ctx.r31.u32 + 30900, ctx.r30.u32);
	// stw r30,30904(r31)
	REX_STORE_U32(ctx.r31.u32 + 30904, ctx.r30.u32);
	// stw r30,30908(r31)
	REX_STORE_U32(ctx.r31.u32 + 30908, ctx.r30.u32);
	// stw r30,30912(r31)
	REX_STORE_U32(ctx.r31.u32 + 30912, ctx.r30.u32);
	// stw r30,30916(r31)
	REX_STORE_U32(ctx.r31.u32 + 30916, ctx.r30.u32);
	// stw r16,30920(r31)
	REX_STORE_U32(ctx.r31.u32 + 30920, ctx.r16.u32);
	// stw r16,30924(r31)
	REX_STORE_U32(ctx.r31.u32 + 30924, ctx.r16.u32);
	// stw r16,30928(r31)
	REX_STORE_U32(ctx.r31.u32 + 30928, ctx.r16.u32);
	// stw r16,30932(r31)
	REX_STORE_U32(ctx.r31.u32 + 30932, ctx.r16.u32);
	// stw r30,30936(r31)
	REX_STORE_U32(ctx.r31.u32 + 30936, ctx.r30.u32);
	// stw r30,30940(r31)
	REX_STORE_U32(ctx.r31.u32 + 30940, ctx.r30.u32);
	// stw r30,30944(r31)
	REX_STORE_U32(ctx.r31.u32 + 30944, ctx.r30.u32);
	// stw r30,30948(r31)
	REX_STORE_U32(ctx.r31.u32 + 30948, ctx.r30.u32);
	// stw r30,30952(r31)
	REX_STORE_U32(ctx.r31.u32 + 30952, ctx.r30.u32);
	// stw r30,30956(r31)
	REX_STORE_U32(ctx.r31.u32 + 30956, ctx.r30.u32);
	// stw r16,30960(r31)
	REX_STORE_U32(ctx.r31.u32 + 30960, ctx.r16.u32);
	// stw r16,30964(r31)
	REX_STORE_U32(ctx.r31.u32 + 30964, ctx.r16.u32);
	// stw r16,30968(r31)
	REX_STORE_U32(ctx.r31.u32 + 30968, ctx.r16.u32);
	// stw r16,30972(r31)
	REX_STORE_U32(ctx.r31.u32 + 30972, ctx.r16.u32);
	// stw r29,30976(r31)
	REX_STORE_U32(ctx.r31.u32 + 30976, ctx.r29.u32);
	// stw r29,30980(r31)
	REX_STORE_U32(ctx.r31.u32 + 30980, ctx.r29.u32);
	// stw r29,30984(r31)
	REX_STORE_U32(ctx.r31.u32 + 30984, ctx.r29.u32);
	// stw r29,30988(r31)
	REX_STORE_U32(ctx.r31.u32 + 30988, ctx.r29.u32);
	// stw r29,30992(r31)
	REX_STORE_U32(ctx.r31.u32 + 30992, ctx.r29.u32);
	// stw r30,30996(r31)
	REX_STORE_U32(ctx.r31.u32 + 30996, ctx.r30.u32);
	// stw r29,31000(r31)
	REX_STORE_U32(ctx.r31.u32 + 31000, ctx.r29.u32);
	// stw r29,31004(r31)
	REX_STORE_U32(ctx.r31.u32 + 31004, ctx.r29.u32);
	// stw r29,31008(r31)
	REX_STORE_U32(ctx.r31.u32 + 31008, ctx.r29.u32);
	// stw r29,31012(r31)
	REX_STORE_U32(ctx.r31.u32 + 31012, ctx.r29.u32);
	// stw r29,31016(r31)
	REX_STORE_U32(ctx.r31.u32 + 31016, ctx.r29.u32);
	// stw r29,31020(r31)
	REX_STORE_U32(ctx.r31.u32 + 31020, ctx.r29.u32);
	// stw r20,31024(r31)
	REX_STORE_U32(ctx.r31.u32 + 31024, ctx.r20.u32);
	// stw r29,31028(r31)
	REX_STORE_U32(ctx.r31.u32 + 31028, ctx.r29.u32);
	// stw r29,31032(r31)
	REX_STORE_U32(ctx.r31.u32 + 31032, ctx.r29.u32);
	// stw r30,31036(r31)
	REX_STORE_U32(ctx.r31.u32 + 31036, ctx.r30.u32);
	// stw r30,31040(r31)
	REX_STORE_U32(ctx.r31.u32 + 31040, ctx.r30.u32);
	// stw r29,31044(r31)
	REX_STORE_U32(ctx.r31.u32 + 31044, ctx.r29.u32);
	// stw r16,31048(r31)
	REX_STORE_U32(ctx.r31.u32 + 31048, ctx.r16.u32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// stw r16,31052(r31)
	REX_STORE_U32(ctx.r31.u32 + 31052, ctx.r16.u32);
	// addi r11,r31,552
	ctx.r11.s64 = ctx.r31.s64 + 552;
	// stw r16,31056(r31)
	REX_STORE_U32(ctx.r31.u32 + 31056, ctx.r16.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r16,31060(r31)
	REX_STORE_U32(ctx.r31.u32 + 31060, ctx.r16.u32);
	// stw r16,31064(r31)
	REX_STORE_U32(ctx.r31.u32 + 31064, ctx.r16.u32);
	// stw r16,31068(r31)
	REX_STORE_U32(ctx.r31.u32 + 31068, ctx.r16.u32);
	// lfd f28,-26192(r4)
	ctx.f28.u64 = REX_LOAD_U64(ctx.r4.u32 + -26192);
	// stw r16,31072(r31)
	REX_STORE_U32(ctx.r31.u32 + 31072, ctx.r16.u32);
	// stw r16,31076(r31)
	REX_STORE_U32(ctx.r31.u32 + 31076, ctx.r16.u32);
	// stw r29,31080(r31)
	REX_STORE_U32(ctx.r31.u32 + 31080, ctx.r29.u32);
	// stw r30,31084(r31)
	REX_STORE_U32(ctx.r31.u32 + 31084, ctx.r30.u32);
	// stw r30,31092(r31)
	REX_STORE_U32(ctx.r31.u32 + 31092, ctx.r30.u32);
	// stw r30,31096(r31)
	REX_STORE_U32(ctx.r31.u32 + 31096, ctx.r30.u32);
	// stw r30,31100(r31)
	REX_STORE_U32(ctx.r31.u32 + 31100, ctx.r30.u32);
	// stw r30,31104(r31)
	REX_STORE_U32(ctx.r31.u32 + 31104, ctx.r30.u32);
	// stw r30,31108(r31)
	REX_STORE_U32(ctx.r31.u32 + 31108, ctx.r30.u32);
	// stw r20,31112(r31)
	REX_STORE_U32(ctx.r31.u32 + 31112, ctx.r20.u32);
	// stw r30,31116(r31)
	REX_STORE_U32(ctx.r31.u32 + 31116, ctx.r30.u32);
	// stw r30,31472(r31)
	REX_STORE_U32(ctx.r31.u32 + 31472, ctx.r30.u32);
	// stw r30,31476(r31)
	REX_STORE_U32(ctx.r31.u32 + 31476, ctx.r30.u32);
	// stw r30,31480(r31)
	REX_STORE_U32(ctx.r31.u32 + 31480, ctx.r30.u32);
	// stw r30,31484(r31)
	REX_STORE_U32(ctx.r31.u32 + 31484, ctx.r30.u32);
	// stw r30,31488(r31)
	REX_STORE_U32(ctx.r31.u32 + 31488, ctx.r30.u32);
	// stw r30,31492(r31)
	REX_STORE_U32(ctx.r31.u32 + 31492, ctx.r30.u32);
	// stw r30,31496(r31)
	REX_STORE_U32(ctx.r31.u32 + 31496, ctx.r30.u32);
	// stw r30,31500(r31)
	REX_STORE_U32(ctx.r31.u32 + 31500, ctx.r30.u32);
	// stw r30,31504(r31)
	REX_STORE_U32(ctx.r31.u32 + 31504, ctx.r30.u32);
	// stfd f28,31512(r31)
	REX_STORE_U64(ctx.r31.u32 + 31512, ctx.f28.u64);
	// stfd f28,31520(r31)
	REX_STORE_U64(ctx.r31.u32 + 31520, ctx.f28.u64);
	// stw r30,31532(r31)
	REX_STORE_U32(ctx.r31.u32 + 31532, ctx.r30.u32);
	// stb r30,31536(r31)
	REX_STORE_U8(ctx.r31.u32 + 31536, ctx.r30.u8);
	// stb r30,31537(r31)
	REX_STORE_U8(ctx.r31.u32 + 31537, ctx.r30.u8);
	// stb r30,31538(r31)
	REX_STORE_U8(ctx.r31.u32 + 31538, ctx.r30.u8);
	// stb r30,31539(r31)
	REX_STORE_U8(ctx.r31.u32 + 31539, ctx.r30.u8);
	// stw r30,31540(r31)
	REX_STORE_U32(ctx.r31.u32 + 31540, ctx.r30.u32);
	// stw r30,31544(r31)
	REX_STORE_U32(ctx.r31.u32 + 31544, ctx.r30.u32);
	// stw r30,31548(r31)
	REX_STORE_U32(ctx.r31.u32 + 31548, ctx.r30.u32);
	// stw r30,31552(r31)
	REX_STORE_U32(ctx.r31.u32 + 31552, ctx.r30.u32);
	// stw r20,30432(r31)
	REX_STORE_U32(ctx.r31.u32 + 30432, ctx.r20.u32);
	// stw r30,548(r31)
	REX_STORE_U32(ctx.r31.u32 + 548, ctx.r30.u32);
	// stw r30,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,552(r31)
	REX_STORE_U32(ctx.r31.u32 + 552, ctx.r30.u32);
	// stw r30,556(r31)
	REX_STORE_U32(ctx.r31.u32 + 556, ctx.r30.u32);
	// stw r30,560(r31)
	REX_STORE_U32(ctx.r31.u32 + 560, ctx.r30.u32);
	// stw r30,564(r31)
	REX_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// beq cr6,0x82674fc8
	if (ctx.cr6.eq) goto loc_82674FC8;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,8176(r31)
	REX_STORE_U32(ctx.r31.u32 + 8176, ctx.r11.u32);
	// lwz r10,124(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 124);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82674fb4
	if (ctx.cr6.eq) goto loc_82674FB4;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// stw r11,19212(r31)
	REX_STORE_U32(ctx.r31.u32 + 19212, ctx.r11.u32);
loc_82674FB4:
	// lwz r11,196(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82674fc8
	if (ctx.cr6.eq) goto loc_82674FC8;
	// lwz r11,88(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 88);
	// stw r11,1272(r31)
	REX_STORE_U32(ctx.r31.u32 + 1272, ctx.r11.u32);
loc_82674FC8:
	// lwz r11,8176(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82674fec
	if (ctx.cr6.eq) goto loc_82674FEC;
	// lwz r11,8180(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8180);
	// lwz r10,120(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82674fec
	if (ctx.cr6.eq) goto loc_82674FEC;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,21156(r31)
	REX_STORE_U32(ctx.r31.u32 + 21156, ctx.r11.u32);
loc_82674FEC:
	// cmpwi cr6,r27,5
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 5, ctx.xer);
	// beq cr6,0x82674ffc
	if (ctx.cr6.eq) goto loc_82674FFC;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82675008
	if (!ctx.cr6.eq) goto loc_82675008;
loc_82674FFC:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bgt cr6,0x82675008
	if (ctx.cr6.gt) goto loc_82675008;
	// stfd f29,7896(r31)
	REX_STORE_U64(ctx.r31.u32 + 7896, ctx.f29.u64);
loc_82675008:
	// stw r30,860(r31)
	REX_STORE_U32(ctx.r31.u32 + 860, ctx.r30.u32);
	// stw r30,856(r31)
	REX_STORE_U32(ctx.r31.u32 + 856, ctx.r30.u32);
	// lwz r11,796(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
	// stw r30,840(r31)
	REX_STORE_U32(ctx.r31.u32 + 840, ctx.r30.u32);
	// stw r30,844(r31)
	REX_STORE_U32(ctx.r31.u32 + 844, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,864(r31)
	REX_STORE_U32(ctx.r31.u32 + 864, ctx.r30.u32);
	// lwz r26,588(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 588);
	// stw r30,6748(r31)
	REX_STORE_U32(ctx.r31.u32 + 6748, ctx.r30.u32);
	// beq cr6,0x82675038
	if (ctx.cr6.eq) goto loc_82675038;
	// stw r11,808(r31)
	REX_STORE_U32(ctx.r31.u32 + 808, ctx.r11.u32);
	// b 0x8267503c
	goto loc_8267503C;
loc_82675038:
	// stw r26,808(r31)
	REX_STORE_U32(ctx.r31.u32 + 808, ctx.r26.u32);
loc_8267503C:
	// lwz r11,804(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 804);
	// lwz r27,596(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82675054
	if (ctx.cr6.eq) goto loc_82675054;
	// stw r11,812(r31)
	REX_STORE_U32(ctx.r31.u32 + 812, ctx.r11.u32);
	// b 0x82675058
	goto loc_82675058;
loc_82675054:
	// stw r27,812(r31)
	REX_STORE_U32(ctx.r31.u32 + 812, ctx.r27.u32);
loc_82675058:
	// lwz r17,572(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 572);
	// stw r17,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r17.u32);
	// lwz r11,30432(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8267507c
	if (!ctx.cr6.eq) goto loc_8267507C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8267dea0
	ctx.lr = 0x8267507C;
	sub_8267DEA0(ctx, base);
loc_8267507C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826c0990
	ctx.lr = 0x82675084;
	sub_826C0990(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82675098
	if (!ctx.cr6.eq) goto loc_82675098;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82682860
	ctx.lr = 0x82675098;
	sub_82682860(ctx, base);
loc_82675098:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8267de50
	ctx.lr = 0x826750A8;
	sub_8267DE50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8267dda8
	ctx.lr = 0x826750B0;
	sub_8267DDA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8267ddc8
	ctx.lr = 0x826750B8;
	sub_8267DDC8(ctx, base);
	// li r5,3872
	ctx.r5.s64 = 3872;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2848
	ctx.r3.s64 = ctx.r31.s64 + 2848;
	// bl 0x825e3710
	ctx.lr = 0x826750C8;
	sub_825E3710(ctx, base);
	// lwz r11,7596(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7596);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82675114
	if (!ctx.cr6.eq) goto loc_82675114;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x826750f8
	if (!ctx.cr6.eq) goto loc_826750F8;
	// lfd f0,7896(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7896);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x826750f8
	if (ctx.cr6.eq) goto loc_826750F8;
	// lfd f0,7888(r31)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82675114
	if (!ctx.cr6.eq) goto loc_82675114;
loc_826750F8:
	// lwz r11,748(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 748);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r24,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x825e41b0
	ctx.lr = 0x82675110;
	__restfpr_27(ctx, base);
	// b 0x825e3620
	__restgprlr_14(ctx, base);
	return;
loc_82675114:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82675150
	if (!ctx.cr6.eq) goto loc_82675150;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r20,30408(r31)
	REX_STORE_U32(ctx.r31.u32 + 30408, ctx.r20.u32);
	// lwz r10,30432(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 30432);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82675144
	if (!ctx.cr6.eq) goto loc_82675144;
	// stw r20,31548(r31)
	REX_STORE_U32(ctx.r31.u32 + 31548, ctx.r20.u32);
	// stw r20,30428(r31)
	REX_STORE_U32(ctx.r31.u32 + 30428, ctx.r20.u32);
	// b 0x8267514c
	goto loc_8267514C;
loc_82675144:
	// stw r30,31548(r31)
	REX_STORE_U32(ctx.r31.u32 + 31548, ctx.r30.u32);
	// stw r30,30428(r31)
	REX_STORE_U32(ctx.r31.u32 + 30428, ctx.r30.u32);
loc_8267514C:
	// stw r20,1620(r31)
	REX_STORE_U32(ctx.r31.u32 + 1620, ctx.r20.u32);
loc_82675150:
	// lwz r11,8108(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8108);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82675160
	if (!ctx.cr6.eq) goto loc_82675160;
	// stw r20,8108(r31)
	REX_STORE_U32(ctx.r31.u32 + 8108, ctx.r20.u32);
loc_82675160:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r25,756(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 756);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// lwz r11,700(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 700);
	// bne cr6,0x826751d8
	if (!ctx.cr6.eq) goto loc_826751D8;
	// lwz r10,716(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
	// stw r11,28492(r31)
	REX_STORE_U32(ctx.r31.u32 + 28492, ctx.r11.u32);
	// stw r11,27988(r31)
	REX_STORE_U32(ctx.r31.u32 + 27988, ctx.r11.u32);
	// stw r20,2572(r31)
	REX_STORE_U32(ctx.r31.u32 + 2572, ctx.r20.u32);
	// stw r10,2824(r31)
	REX_STORE_U32(ctx.r31.u32 + 2824, ctx.r10.u32);
	// lwz r9,30408(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 30408);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826751bc
	if (ctx.cr6.eq) goto loc_826751BC;
	// lwz r11,30432(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826751bc
	if (!ctx.cr6.eq) goto loc_826751BC;
	// lwz r28,740(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 740);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82716680
	ctx.lr = 0x826751B8;
	sub_82716680(ctx, base);
	// b 0x82675214
	goto loc_82675214;
loc_826751BC:
	// lwz r28,740(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 740);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266fa28
	ctx.lr = 0x826751D4;
	sub_8266FA28(ctx, base);
	// b 0x82675214
	goto loc_82675214;
loc_826751D8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x826751fc
	if (ctx.cr6.eq) goto loc_826751FC;
	// lwz r11,748(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 748);
	// stw r24,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x825e41b0
	ctx.lr = 0x826751F8;
	__restfpr_27(ctx, base);
	// b 0x825e3620
	__restgprlr_14(ctx, base);
	return;
loc_826751FC:
	// lwz r11,716(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r28,740(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 740);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,2824(r31)
	REX_STORE_U32(ctx.r31.u32 + 2824, ctx.r11.u32);
	// bl 0x8266f800
	ctx.lr = 0x82675214;
	sub_8266F800(ctx, base);
loc_82675214:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82675260
	if (ctx.cr6.eq) goto loc_82675260;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8267524c
	if (!ctx.cr6.eq) goto loc_8267524C;
	// lwz r11,256(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// stw r11,2824(r31)
	REX_STORE_U32(ctx.r31.u32 + 2824, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82675260
	if (!ctx.cr6.eq) goto loc_82675260;
	// lwz r11,308(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r11,2124(r31)
	REX_STORE_U32(ctx.r31.u32 + 2124, ctx.r11.u32);
	// stw r11,7840(r31)
	REX_STORE_U32(ctx.r31.u32 + 7840, ctx.r11.u32);
	// b 0x82675260
	goto loc_82675260;
loc_8267524C:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82675260
	if (!ctx.cr6.eq) goto loc_82675260;
	// lwz r11,248(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// stw r11,28492(r31)
	REX_STORE_U32(ctx.r31.u32 + 28492, ctx.r11.u32);
	// stw r11,27988(r31)
	REX_STORE_U32(ctx.r31.u32 + 27988, ctx.r11.u32);
loc_82675260:
	// lwz r11,708(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 708);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,2176(r31)
	REX_STORE_U32(ctx.r31.u32 + 2176, ctx.r11.u32);
	// lfd f0,8104(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 8104);
	// stw r26,796(r31)
	REX_STORE_U32(ctx.r31.u32 + 796, ctx.r26.u32);
	// stw r27,800(r31)
	REX_STORE_U32(ctx.r31.u32 + 800, ctx.r27.u32);
	// lwz r9,796(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// mullw r8,r9,r27
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// stw r8,804(r31)
	REX_STORE_U32(ctx.r31.u32 + 804, ctx.r8.u32);
	// lfd f13,7688(r31)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82675294
	if (!ctx.cr6.lt) goto loc_82675294;
	// stfd f0,7688(r31)
	REX_STORE_U64(ctx.r31.u32 + 7688, ctx.f0.u64);
loc_82675294:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfd f13,7888(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// lwz r22,644(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 644);
	// lfd f0,26560(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 26560);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x826752b8
	if (!ctx.cr6.gt) goto loc_826752B8;
	// cmplwi cr6,r22,1
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 1, ctx.xer);
	// beq cr6,0x826752b8
	if (ctx.cr6.eq) goto loc_826752B8;
	// stfd f0,7888(r31)
	REX_STORE_U64(ctx.r31.u32 + 7888, ctx.f0.u64);
loc_826752B8:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r10,7596(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7596);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lfd f29,632(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + 632);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// lfd f27,12784(r11)
	ctx.f27.u64 = REX_LOAD_U64(ctx.r11.u32 + 12784);
	// lfd f30,12792(r9)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r9.u32 + 12792);
	// bne cr6,0x826753a4
	if (!ctx.cr6.eq) goto loc_826753A4;
	// lfd f0,7896(r31)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7896);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82675300
	if (!ctx.cr6.gt) goto loc_82675300;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfd f12,7888(r31)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// lfd f13,-29384(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + -29384);
	// fmul f11,f12,f13
	ctx.f11.f64 = ctx.f12.f64 * ctx.f13.f64;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x82675300
	if (ctx.cr6.gt) goto loc_82675300;
	// stw r30,7188(r31)
	REX_STORE_U32(ctx.r31.u32 + 7188, ctx.r30.u32);
loc_82675300:
	// fcfid f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f29.s64);
	// lfd f12,7688(r31)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,-888(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -888);
	// fmul f11,f13,f12
	ctx.f11.f64 = ctx.f13.f64 * ctx.f12.f64;
	// fmul f10,f11,f30
	ctx.f10.f64 = ctx.f11.f64 * ctx.f30.f64;
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x82675324
	if (!ctx.cr6.lt) goto loc_82675324;
	// stw r30,7188(r31)
	REX_STORE_U32(ctx.r31.u32 + 7188, ctx.r30.u32);
loc_82675324:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lfd f0,7888(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,796(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// beq cr6,0x82675368
	if (ctx.cr6.eq) goto loc_82675368;
	// lwz r9,800(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// fmul f13,f0,f27
	ctx.f13.f64 = ctx.f0.f64 * ctx.f27.f64;
	// mullw r8,r11,r9
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lfd f0,26552(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 26552);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r7.u64);
	// lfd f12,144(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fmadd f10,f11,f0,f28
	ctx.f10.f64 = std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f28.f64);
	// fdiv f0,f13,f10
	ctx.f0.f64 = ctx.f13.f64 / ctx.f10.f64;
	// b 0x82675390
	goto loc_82675390;
loc_82675368:
	// lwz r10,800(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// lfd f13,7688(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// fmul f12,f0,f27
	ctx.f12.f64 = ctx.f0.f64 * ctx.f27.f64;
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lfd f11,144(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fmadd f9,f10,f13,f28
	ctx.f9.f64 = std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f28.f64);
	// fdiv f0,f12,f9
	ctx.f0.f64 = ctx.f12.f64 / ctx.f9.f64;
loc_82675390:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfd f13,26544(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 26544);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x826753a4
	if (!ctx.cr6.lt) goto loc_826753A4;
	// stw r30,7188(r31)
	REX_STORE_U32(ctx.r31.u32 + 7188, ctx.r30.u32);
loc_826753A4:
	// lwz r11,7188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826753b4
	if (ctx.cr6.eq) goto loc_826753B4;
	// stw r29,7188(r31)
	REX_STORE_U32(ctx.r31.u32 + 7188, ctx.r29.u32);
loc_826753B4:
	// lwz r11,7596(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7596);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x826753cc
	if (ctx.cr6.eq) goto loc_826753CC;
	// lwz r11,7188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826753d0
	if (!ctx.cr6.eq) goto loc_826753D0;
loc_826753CC:
	// stw r20,30304(r31)
	REX_STORE_U32(ctx.r31.u32 + 30304, ctx.r20.u32);
loc_826753D0:
	// lwz r11,7596(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7596);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x826753e8
	if (!ctx.cr6.eq) goto loc_826753E8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfd f0,20432(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 20432);
	// stfd f0,7888(r31)
	REX_STORE_U64(ctx.r31.u32 + 7888, ctx.f0.u64);
loc_826753E8:
	// lwz r11,8104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8104);
	// stw r30,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// stw r30,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// stw r16,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r16.u32);
	// stw r16,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r16.u32);
	// stw r30,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r30,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// stw r16,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r16.u32);
	// stw r16,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r16.u32);
	// blt cr6,0x82676cb0
	if (ctx.cr6.lt) goto loc_82676CB0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bgt cr6,0x82676cb0
	if (ctx.cr6.gt) goto loc_82676CB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266c2b8
	ctx.lr = 0x82675428;
	sub_8266C2B8(ctx, base);
	// stw r30,6868(r31)
	REX_STORE_U32(ctx.r31.u32 + 6868, ctx.r30.u32);
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// li r3,60
	ctx.r3.s64 = 60;
	// ori r19,r11,32768
	ctx.r19.u64 = ctx.r11.u64 | 32768;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822a9d28
	ctx.lr = 0x82675440;
	sub_822A9D28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82675468
	if (ctx.cr6.eq) goto loc_82675468;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x827032c8
	ctx.lr = 0x82675464;
	sub_827032C8(ctx, base);
	// b 0x8267546c
	goto loc_8267546C;
loc_82675468:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8267546C:
	// stw r3,7868(r31)
	REX_STORE_U32(ctx.r31.u32 + 7868, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// bl 0x827032a8
	ctx.lr = 0x8267547C;
	sub_827032A8(ctx, base);
	// fcfid f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f29.s64);
	// lfd f13,7688(r31)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// lfd f13,11720(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 11720);
	// fmul f12,f0,f30
	ctx.f12.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// ble cr6,0x826754b0
	if (!ctx.cr6.gt) goto loc_826754B0;
	// fmadd f0,f0,f30,f13
	ctx.f0.f64 = std::fma(ctx.f0.f64, ctx.f30.f64, ctx.f13.f64);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f13.u64);
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// b 0x826754c0
	goto loc_826754C0;
loc_826754B0:
	// fmsub f0,f0,f30,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = std::fma(ctx.f0.f64, ctx.f30.f64, -ctx.f13.f64);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f13.u64);
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
loc_826754C0:
	// lwz r4,764(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 764);
	// stw r11,7752(r31)
	REX_STORE_U32(ctx.r31.u32 + 7752, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826754d8
	if (ctx.cr6.eq) goto loc_826754D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266cb20
	ctx.lr = 0x826754D8;
	sub_8266CB20(ctx, base);
loc_826754D8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r25,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r25.u32);
	// addi r4,r1,296
	ctx.r4.s64 = ctx.r1.s64 + 296;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x825e3c00
	ctx.lr = 0x826754EC;
	sub_825E3C00(ctx, base);
	// ld r29,240(r1)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + 240);
	// ld r28,248(r1)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + 248);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r27,256(r1)
	ctx.r27.u64 = REX_LOAD_U64(ctx.r1.u32 + 256);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r26,264(r1)
	ctx.r26.u64 = REX_LOAD_U64(ctx.r1.u32 + 264);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// ld r25,272(r1)
	ctx.r25.u64 = REX_LOAD_U64(ctx.r1.u32 + 272);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// ld r24,280(r1)
	ctx.r24.u64 = REX_LOAD_U64(ctx.r1.u32 + 280);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// ld r23,288(r1)
	ctx.r23.u64 = REX_LOAD_U64(ctx.r1.u32 + 288);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// bl 0x8266c618
	ctx.lr = 0x8267552C;
	sub_8266C618(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,296
	ctx.r4.s64 = ctx.r1.s64 + 296;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x825e3c00
	ctx.lr = 0x8267553C;
	sub_825E3C00(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82672da8
	ctx.lr = 0x82675560;
	sub_82672DA8(ctx, base);
	// stw r20,6864(r31)
	REX_STORE_U32(ctx.r31.u32 + 6864, ctx.r20.u32);
	// lwz r11,1612(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1612);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826755c8
	if (ctx.cr6.eq) goto loc_826755C8;
	// lwz r11,724(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 724);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82675584
	if (!ctx.cr6.eq) goto loc_82675584;
	// stw r20,7228(r31)
	REX_STORE_U32(ctx.r31.u32 + 7228, ctx.r20.u32);
	// b 0x826755c8
	goto loc_826755C8;
loc_82675584:
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// beq cr6,0x82675594
	if (ctx.cr6.eq) goto loc_82675594;
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// bne cr6,0x82676cb0
	if (!ctx.cr6.eq) goto loc_82676CB0;
loc_82675594:
	// lwz r10,732(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 732);
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// beq cr6,0x826755a8
	if (ctx.cr6.eq) goto loc_826755A8;
	// cmpwi cr6,r10,50
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 50, ctx.xer);
	// bne cr6,0x82676cb0
	if (!ctx.cr6.eq) goto loc_82676CB0;
loc_826755A8:
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// bne cr6,0x826755b4
	if (!ctx.cr6.eq) goto loc_826755B4;
	// stw r20,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r20.u32);
loc_826755B4:
	// cmpwi cr6,r10,50
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 50, ctx.xer);
	// bne cr6,0x826755c8
	if (!ctx.cr6.eq) goto loc_826755C8;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_826755C8:
	// lwz r11,30408(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826755dc
	if (ctx.cr6.eq) goto loc_826755DC;
	// stw r30,7880(r31)
	REX_STORE_U32(ctx.r31.u32 + 7880, ctx.r30.u32);
	// b 0x826755e8
	goto loc_826755E8;
loc_826755DC:
	// lwz r11,692(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 692);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,7880(r31)
	REX_STORE_U32(ctx.r31.u32 + 7880, ctx.r10.u32);
loc_826755E8:
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// lis r24,-32121
	ctx.r24.s64 = -2105081856;
	// addi r10,r11,20000
	ctx.r10.s64 = ctx.r11.s64 + 20000;
	// lis r23,-32121
	ctx.r23.s64 = -2105081856;
	// stw r10,8184(r31)
	REX_STORE_U32(ctx.r31.u32 + 8184, ctx.r10.u32);
	// stw r16,748(r31)
	REX_STORE_U32(ctx.r31.u32 + 748, ctx.r16.u32);
	// lwz r11,-7044(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + -7044);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82675618
	if (!ctx.cr6.eq) goto loc_82675618;
	// lwz r11,-7040(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + -7040);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8267561c
	if (ctx.cr6.eq) goto loc_8267561C;
loc_82675618:
	// stw r30,748(r31)
	REX_STORE_U32(ctx.r31.u32 + 748, ctx.r30.u32);
loc_8267561C:
	// lwz r11,7752(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7752);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82675634
	if (!ctx.cr6.eq) goto loc_82675634;
	// stw r20,7752(r31)
	REX_STORE_U32(ctx.r31.u32 + 7752, ctx.r20.u32);
	// stw r20,19464(r31)
	REX_STORE_U32(ctx.r31.u32 + 19464, ctx.r20.u32);
	// b 0x82675638
	goto loc_82675638;
loc_82675634:
	// stw r30,19464(r31)
	REX_STORE_U32(ctx.r31.u32 + 19464, ctx.r30.u32);
loc_82675638:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82675654
	if (ctx.cr6.eq) goto loc_82675654;
	// lwz r11,7752(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7752);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x82675650
	if (ctx.cr6.lt) goto loc_82675650;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82675650:
	// stw r11,7752(r31)
	REX_STORE_U32(ctx.r31.u32 + 7752, ctx.r11.u32);
loc_82675654:
	// ld r11,632(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 632);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,7704(r31)
	REX_STORE_U64(ctx.r31.u32 + 7704, ctx.r11.u64);
	// lfd f0,7688(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// fdiv f13,f27,f0
	ctx.f13.f64 = ctx.f27.f64 / ctx.f0.f64;
	// fctidz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,7720(r31)
	REX_STORE_U64(ctx.r31.u32 + 7720, ctx.f12.u64);
	// stw r30,7872(r31)
	REX_STORE_U32(ctx.r31.u32 + 7872, ctx.r30.u32);
	// bl 0x8271d5e0
	ctx.lr = 0x82675678;
	sub_8271D5E0(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822a9d28
	ctx.lr = 0x82675684;
	sub_822A9D28(ctx, base);
	// stw r3,17536(r31)
	REX_STORE_U32(ctx.r31.u32 + 17536, ctx.r3.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822a9d28
	ctx.lr = 0x82675694;
	sub_822A9D28(ctx, base);
	// stw r3,17540(r31)
	REX_STORE_U32(ctx.r31.u32 + 17540, ctx.r3.u32);
	// lwz r11,17536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 17536);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x825e3710
	ctx.lr = 0x826756BC;
	sub_825E3710(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,17540(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 17540);
	// bl 0x825e3710
	ctx.lr = 0x826756CC;
	sub_825E3710(ctx, base);
	// lwz r11,17536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 17536);
	// li r21,128
	ctx.r21.s64 = 128;
	// sth r21,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r21.u16);
	// lwz r10,17540(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 17540);
	// sth r21,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r21.u16);
	// bl 0x826ff238
	ctx.lr = 0x826756E4;
	sub_826FF238(ctx, base);
	// lis r9,-32121
	ctx.r9.s64 = -2105081856;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// stw r20,25060(r9)
	REX_STORE_U32(ctx.r9.u32 + 25060, ctx.r20.u32);
	// bl 0x826ff238
	ctx.lr = 0x826756F4;
	sub_826FF238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266f630
	ctx.lr = 0x826756FC;
	sub_8266F630(ctx, base);
	// lis r8,-32143
	ctx.r8.s64 = -2106523648;
	// lis r7,-32143
	ctx.r7.s64 = -2106523648;
	// lis r6,-32143
	ctx.r6.s64 = -2106523648;
	// addi r5,r8,-24040
	ctx.r5.s64 = ctx.r8.s64 + -24040;
	// addi r3,r7,-21968
	ctx.r3.s64 = ctx.r7.s64 + -21968;
	// addi r10,r6,-23864
	ctx.r10.s64 = ctx.r6.s64 + -23864;
	// stw r5,8084(r31)
	REX_STORE_U32(ctx.r31.u32 + 8084, ctx.r5.u32);
	// stw r3,8088(r31)
	REX_STORE_U32(ctx.r31.u32 + 8088, ctx.r3.u32);
	// lis r4,-32143
	ctx.r4.s64 = -2106523648;
	// stw r10,8092(r31)
	REX_STORE_U32(ctx.r31.u32 + 8092, ctx.r10.u32);
	// lis r11,-32143
	ctx.r11.s64 = -2106523648;
	// addi r9,r4,-23112
	ctx.r9.s64 = ctx.r4.s64 + -23112;
	// lis r8,-32121
	ctx.r8.s64 = -2105081856;
	// addi r7,r11,-22384
	ctx.r7.s64 = ctx.r11.s64 + -22384;
	// stw r9,8096(r31)
	REX_STORE_U32(ctx.r31.u32 + 8096, ctx.r9.u32);
	// lis r6,-32120
	ctx.r6.s64 = -2105016320;
	// lis r5,-32143
	ctx.r5.s64 = -2106523648;
	// stw r7,8100(r31)
	REX_STORE_U32(ctx.r31.u32 + 8100, ctx.r7.u32);
	// lis r4,-32143
	ctx.r4.s64 = -2106523648;
	// stw r20,28552(r31)
	REX_STORE_U32(ctx.r31.u32 + 28552, ctx.r20.u32);
	// addi r10,r5,14256
	ctx.r10.s64 = ctx.r5.s64 + 14256;
	// addi r9,r4,16536
	ctx.r9.s64 = ctx.r4.s64 + 16536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,22976(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 22976);
	// stw r11,25536(r6)
	REX_STORE_U32(ctx.r6.u32 + 25536, ctx.r11.u32);
	// stw r11,1600(r31)
	REX_STORE_U32(ctx.r31.u32 + 1600, ctx.r11.u32);
	// stw r10,1588(r31)
	REX_STORE_U32(ctx.r31.u32 + 1588, ctx.r10.u32);
	// stw r9,1592(r31)
	REX_STORE_U32(ctx.r31.u32 + 1592, ctx.r9.u32);
	// bl 0x82721b30
	ctx.lr = 0x82675770;
	sub_82721B30(ctx, base);
	// lwz r8,2572(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2572);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82675790
	if (ctx.cr6.eq) goto loc_82675790;
	// lis r11,-32143
	ctx.r11.s64 = -2106523648;
	// lis r10,-32143
	ctx.r10.s64 = -2106523648;
	// addi r9,r11,19848
	ctx.r9.s64 = ctx.r11.s64 + 19848;
	// addi r8,r10,20264
	ctx.r8.s64 = ctx.r10.s64 + 20264;
	// b 0x826757a0
	goto loc_826757A0;
loc_82675790:
	// lis r11,-32143
	ctx.r11.s64 = -2106523648;
	// lis r10,-32143
	ctx.r10.s64 = -2106523648;
	// addi r9,r11,19072
	ctx.r9.s64 = ctx.r11.s64 + 19072;
	// addi r8,r10,19368
	ctx.r8.s64 = ctx.r10.s64 + 19368;
loc_826757A0:
	// stw r9,8188(r31)
	REX_STORE_U32(ctx.r31.u32 + 8188, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,8192(r31)
	REX_STORE_U32(ctx.r31.u32 + 8192, ctx.r8.u32);
	// bl 0x82703618
	ctx.lr = 0x826757B0;
	sub_82703618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8272ab08
	ctx.lr = 0x826757B8;
	sub_8272AB08(ctx, base);
	// bl 0x82726ed0
	ctx.lr = 0x826757BC;
	sub_82726ED0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266edc0
	ctx.lr = 0x826757C4;
	sub_8266EDC0(ctx, base);
	// stw r30,7760(r31)
	REX_STORE_U32(ctx.r31.u32 + 7760, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266d0b0
	ctx.lr = 0x826757D0;
	sub_8266D0B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82672b80
	ctx.lr = 0x826757D8;
	sub_82672B80(ctx, base);
	// lwz r11,748(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 748);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// bne cr6,0x82676cb0
	if (!ctx.cr6.eq) goto loc_82676CB0;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-7036(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -7036);
	// stw r11,6776(r31)
	REX_STORE_U32(ctx.r31.u32 + 6776, ctx.r11.u32);
	// bl 0x8266c3b0
	ctx.lr = 0x826757FC;
	sub_8266C3B0(ctx, base);
	// bl 0x82591720
	ctx.lr = 0x82675800;
	sub_82591720(ctx, base);
	// lwz r11,1624(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x82675810
	if (!ctx.cr6.gt) goto loc_82675810;
	// stw r30,2336(r31)
	REX_STORE_U32(ctx.r31.u32 + 2336, ctx.r30.u32);
loc_82675810:
	// subfic r11,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r11.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// lwz r10,720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// subfe r8,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r22,r9,65535
	ctx.r22.u64 = ctx.r9.u64 | 65535;
	// rlwinm r11,r8,0,22,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x380;
	// li r14,-1
	ctx.r14.s64 = -1;
	// addi r7,r11,640
	ctx.r7.s64 = ctx.r11.s64 + 640;
	// mullw r11,r7,r10
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x82675848
	if (!ctx.cr6.gt) goto loc_82675848;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_82675848:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822a9d28
	ctx.lr = 0x82675850;
	sub_822A9D28(ctx, base);
	// stw r3,2344(r31)
	REX_STORE_U32(ctx.r31.u32 + 2344, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// addi r11,r3,7
	ctx.r11.s64 = ctx.r3.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r11,2348(r31)
	REX_STORE_U32(ctx.r31.u32 + 2348, ctx.r11.u32);
	// lwz r10,720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,2352(r31)
	REX_STORE_U32(ctx.r31.u32 + 2352, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,720(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r8,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,2356(r31)
	REX_STORE_U32(ctx.r31.u32 + 2356, ctx.r7.u32);
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,720(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r6,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,2360(r31)
	REX_STORE_U32(ctx.r31.u32 + 2360, ctx.r5.u32);
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r4,720(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r4,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,2364(r31)
	REX_STORE_U32(ctx.r31.u32 + 2364, ctx.r3.u32);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r10,720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r10,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,2368(r31)
	REX_STORE_U32(ctx.r31.u32 + 2368, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,720(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r8,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,2372(r31)
	REX_STORE_U32(ctx.r31.u32 + 2372, ctx.r11.u32);
	// lwz r7,1624(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// ble cr6,0x826759ac
	if (!ctx.cr6.gt) goto loc_826759AC;
	// lwz r10,720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r10,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,2376(r31)
	REX_STORE_U32(ctx.r31.u32 + 2376, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,720(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r8,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,2380(r31)
	REX_STORE_U32(ctx.r31.u32 + 2380, ctx.r7.u32);
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,720(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r6,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,2384(r31)
	REX_STORE_U32(ctx.r31.u32 + 2384, ctx.r5.u32);
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r4,720(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,2388(r31)
	REX_STORE_U32(ctx.r31.u32 + 2388, ctx.r3.u32);
	// lwz r11,720(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,2392(r31)
	REX_STORE_U32(ctx.r31.u32 + 2392, ctx.r10.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,720(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r9,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,2396(r31)
	REX_STORE_U32(ctx.r31.u32 + 2396, ctx.r8.u32);
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,720(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r7,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,2400(r31)
	REX_STORE_U32(ctx.r31.u32 + 2400, ctx.r6.u32);
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r5,720(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r5,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,2404(r31)
	REX_STORE_U32(ctx.r31.u32 + 2404, ctx.r4.u32);
	// rotlwi r11,r4,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r3,720(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r3,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,2408(r31)
	REX_STORE_U32(ctx.r31.u32 + 2408, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r10,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,2412(r31)
	REX_STORE_U32(ctx.r31.u32 + 2412, ctx.r9.u32);
loc_826759AC:
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x826759cc
	if (!ctx.cr6.gt) goto loc_826759CC;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_826759CC:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822a9d28
	ctx.lr = 0x826759D4;
	sub_822A9D28(ctx, base);
	// stw r3,2312(r31)
	REX_STORE_U32(ctx.r31.u32 + 2312, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// lis r9,8191
	ctx.r9.s64 = 536805376;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r15,r9,65535
	ctx.r15.u64 = ctx.r9.u64 | 65535;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r15.u32, ctx.xer);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x82675a04
	if (!ctx.cr6.gt) goto loc_82675A04;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_82675A04:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822a9d28
	ctx.lr = 0x82675A0C;
	sub_822A9D28(ctx, base);
	// stw r3,2796(r31)
	REX_STORE_U32(ctx.r31.u32 + 2796, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// stw r30,2328(r31)
	REX_STORE_U32(ctx.r31.u32 + 2328, ctx.r30.u32);
	// lwz r9,1360(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1360);
	// lwz r11,1352(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1352);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r9,72
	ctx.r9.s64 = ctx.r9.s64 + 72;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r10,160
	ctx.r3.s64 = ctx.r10.s64 + 160;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82675a48
	if (!ctx.cr6.lt) goto loc_82675A48;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82675A48:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822a9d28
	ctx.lr = 0x82675A50;
	sub_822A9D28(ctx, base);
	// stw r3,2328(r31)
	REX_STORE_U32(ctx.r31.u32 + 2328, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// addi r11,r3,31
	ctx.r11.s64 = ctx.r3.s64 + 31;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r10,r11,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r10,2332(r31)
	REX_STORE_U32(ctx.r31.u32 + 2332, ctx.r10.u32);
	// lwz r9,728(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// lwz r11,2312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2312);
	// rlwinm r10,r9,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,2316(r31)
	REX_STORE_U32(ctx.r31.u32 + 2316, ctx.r8.u32);
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,728(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r10,r7,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,2320(r31)
	REX_STORE_U32(ctx.r31.u32 + 2320, ctx.r6.u32);
	// lwz r3,2312(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2312);
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r5,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// bl 0x825e3710
	ctx.lr = 0x82675AAC;
	sub_825E3710(ctx, base);
	// lwz r4,728(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x82675ac4
	if (!ctx.cr6.gt) goto loc_82675AC4;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_82675AC4:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822a9d28
	ctx.lr = 0x82675ACC;
	sub_822A9D28(ctx, base);
	// stw r3,2440(r31)
	REX_STORE_U32(ctx.r31.u32 + 2440, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,2444(r31)
	REX_STORE_U32(ctx.r31.u32 + 2444, ctx.r10.u32);
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// lwz r9,720(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x82675b0c
	if (!ctx.cr6.gt) goto loc_82675B0C;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_82675B0C:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822a9d28
	ctx.lr = 0x82675B14;
	sub_822A9D28(ctx, base);
	// stw r3,2448(r31)
	REX_STORE_U32(ctx.r31.u32 + 2448, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r5,r8,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x825e3710
	ctx.lr = 0x82675B3C;
	sub_825E3710(ctx, base);
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// lwz r6,720(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// mullw r5,r7,r6
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,2448(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2448);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,2452(r31)
	REX_STORE_U32(ctx.r31.u32 + 2452, ctx.r4.u32);
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r3,720(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mullw r10,r11,r3
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x82675b80
	if (!ctx.cr6.gt) goto loc_82675B80;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_82675B80:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822a9d28
	ctx.lr = 0x82675B88;
	sub_822A9D28(ctx, base);
	// stw r3,7848(r31)
	REX_STORE_U32(ctx.r31.u32 + 7848, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r5,r8,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x825e3710
	ctx.lr = 0x82675BB0;
	sub_825E3710(ctx, base);
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// lwz r6,720(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// mullw r5,r7,r6
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,7848(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7848);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,7852(r31)
	REX_STORE_U32(ctx.r31.u32 + 7852, ctx.r4.u32);
	// lwz r3,728(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x82675be8
	if (!ctx.cr6.gt) goto loc_82675BE8;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_82675BE8:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822a9d28
	ctx.lr = 0x82675BF0;
	sub_822A9D28(ctx, base);
	// stw r3,2472(r31)
	REX_STORE_U32(ctx.r31.u32 + 2472, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,2476(r31)
	REX_STORE_U32(ctx.r31.u32 + 2476, ctx.r10.u32);
	// lwz r9,728(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x82675c24
	if (!ctx.cr6.gt) goto loc_82675C24;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_82675C24:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822a9d28
	ctx.lr = 0x82675C2C;
	sub_822A9D28(ctx, base);
	// stw r3,2456(r31)
	REX_STORE_U32(ctx.r31.u32 + 2456, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,2460(r31)
	REX_STORE_U32(ctx.r31.u32 + 2460, ctx.r10.u32);
	// lwz r9,728(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x82675c60
	if (!ctx.cr6.gt) goto loc_82675C60;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_82675C60:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822a9d28
	ctx.lr = 0x82675C68;
	sub_822A9D28(ctx, base);
	// stw r3,2464(r31)
	REX_STORE_U32(ctx.r31.u32 + 2464, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// lis r10,10922
	ctx.r10.s64 = 715784192;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r9,r10,43690
	ctx.r9.u64 = ctx.r10.u64 | 43690;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r8,2468(r31)
	REX_STORE_U32(ctx.r31.u32 + 2468, ctx.r8.u32);
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82675ca8
	if (ctx.cr6.gt) goto loc_82675CA8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x82675cac
	goto loc_82675CAC;
loc_82675CA8:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_82675CAC:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822a9d28
	ctx.lr = 0x82675CB4;
	sub_822A9D28(ctx, base);
	// stw r3,2164(r31)
	REX_STORE_U32(ctx.r31.u32 + 2164, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// lwz r11,720(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r9,724(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r8,r11,31
	ctx.r8.s64 = ctx.r11.s64 + 31;
	// ori r18,r10,65535
	ctx.r18.u64 = ctx.r10.u64 | 65535;
	// rlwinm r7,r8,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// mullw r11,r7,r9
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82675cec
	if (!ctx.cr6.gt) goto loc_82675CEC;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_82675CEC:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822a9d28
	ctx.lr = 0x82675CF4;
	sub_822A9D28(ctx, base);
	// stw r3,1680(r31)
	REX_STORE_U32(ctx.r31.u32 + 1680, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// lis r11,237
	ctx.r11.s64 = 15532032;
	// lwz r29,728(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// li r25,-5
	ctx.r25.s64 = -5;
	// ori r26,r11,29443
	ctx.r26.u64 = ctx.r11.u64 | 29443;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x82675d28
	if (ctx.cr6.gt) goto loc_82675D28;
	// mulli r11,r29,276
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(276));
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x82675d2c
	if (!ctx.cr6.gt) goto loc_82675D2C;
loc_82675D28:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_82675D2C:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822a9d28
	ctx.lr = 0x82675D34;
	sub_822A9D28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82675d6c
	if (ctx.cr6.eq) goto loc_82675D6C;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// blt 0x82675d64
	if (ctx.cr0.lt) goto loc_82675D64;
loc_82675D50:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826f5b20
	ctx.lr = 0x82675D58;
	sub_826F5B20(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,276
	ctx.r28.s64 = ctx.r28.s64 + 276;
	// bge 0x82675d50
	if (!ctx.cr0.lt) goto loc_82675D50;
loc_82675D64:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x82675d70
	goto loc_82675D70;
loc_82675D6C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82675D70:
	// stw r3,7764(r31)
	REX_STORE_U32(ctx.r31.u32 + 7764, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r5,r11,276
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(276));
	// bl 0x825e3710
	ctx.lr = 0x82675D8C;
	sub_825E3710(ctx, base);
	// lwz r29,728(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x82675da8
	if (ctx.cr6.gt) goto loc_82675DA8;
	// mulli r11,r29,276
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(276));
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x82675dac
	if (!ctx.cr6.gt) goto loc_82675DAC;
loc_82675DA8:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_82675DAC:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822a9d28
	ctx.lr = 0x82675DB4;
	sub_822A9D28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82675dec
	if (ctx.cr6.eq) goto loc_82675DEC;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// blt 0x82675de4
	if (ctx.cr0.lt) goto loc_82675DE4;
loc_82675DD0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826f5b20
	ctx.lr = 0x82675DD8;
	sub_826F5B20(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,276
	ctx.r28.s64 = ctx.r28.s64 + 276;
	// bge 0x82675dd0
	if (!ctx.cr0.lt) goto loc_82675DD0;
loc_82675DE4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x82675df0
	goto loc_82675DF0;
loc_82675DEC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82675DF0:
	// stw r3,7768(r31)
	REX_STORE_U32(ctx.r31.u32 + 7768, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r5,r11,276
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(276));
	// bl 0x825e3710
	ctx.lr = 0x82675E0C;
	sub_825E3710(ctx, base);
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82675ef8
	if (ctx.cr6.eq) goto loc_82675EF8;
	// lwz r9,720(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
loc_82675E24:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82675ee8
	if (ctx.cr6.eq) goto loc_82675EE8;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// mulli r10,r6,276
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(276));
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_82675E3C:
	// lwz r5,724(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// cntlzw r3,r11
	ctx.r3.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r9,7764(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7764);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// subf r4,r11,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r11.u64;
	// subf r5,r8,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r8.u64;
	// cntlzw r4,r4
	ctx.r4.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r4,r4,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// rlwinm r5,r5,28,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0x2;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// or r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 | ctx.r4.u64;
	// rlwinm r4,r3,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// or r5,r3,r7
	ctx.r5.u64 = ctx.r3.u64 | ctx.r7.u64;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// or r5,r3,r4
	ctx.r5.u64 = ctx.r3.u64 | ctx.r4.u64;
	// stw r5,120(r9)
	REX_STORE_U32(ctx.r9.u32 + 120, ctx.r5.u32);
	// lwz r5,720(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lwz r9,724(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// subf r5,r11,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r9,-1
	ctx.r3.s64 = ctx.r9.s64 + -1;
	// lwz r9,7768(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7768);
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// subf r3,r8,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r8.u64;
	// rlwinm r5,r5,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// cntlzw r3,r3
	ctx.r3.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r3,r3,28,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0x2;
	// addi r10,r10,276
	ctx.r10.s64 = ctx.r10.s64 + 276;
	// or r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 | ctx.r5.u64;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// or r5,r3,r7
	ctx.r5.u64 = ctx.r3.u64 | ctx.r7.u64;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// or r5,r3,r4
	ctx.r5.u64 = ctx.r3.u64 | ctx.r4.u64;
	// stw r5,120(r9)
	REX_STORE_U32(ctx.r9.u32 + 120, ctx.r5.u32);
	// lwz r9,720(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82675e3c
	if (ctx.cr6.lt) goto loc_82675E3C;
loc_82675EE8:
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82675e24
	if (ctx.cr6.lt) goto loc_82675E24;
loc_82675EF8:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82675f98
	if (ctx.cr6.eq) goto loc_82675F98;
	// lwz r9,720(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
loc_82675F0C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82675f88
	if (ctx.cr6.eq) goto loc_82675F88;
	// cntlzw r7,r6
	ctx.r7.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// mulli r10,r8,276
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(276));
	// rlwinm r5,r7,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_82675F24:
	// lwz r7,724(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// cntlzw r3,r11
	ctx.r3.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r9,7764(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7764);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// subf r4,r11,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r11.u64;
	// subf r7,r6,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r6.u64;
	// cntlzw r4,r4
	ctx.r4.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r4,r4,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// rlwinm r7,r7,28,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0x2;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// or r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 | ctx.r4.u64;
	// rlwinm r4,r3,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// or r7,r3,r5
	ctx.r7.u64 = ctx.r3.u64 | ctx.r5.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,276
	ctx.r10.s64 = ctx.r10.s64 + 276;
	// or r7,r3,r4
	ctx.r7.u64 = ctx.r3.u64 | ctx.r4.u64;
	// stw r7,120(r9)
	REX_STORE_U32(ctx.r9.u32 + 120, ctx.r7.u32);
	// lwz r9,720(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82675f24
	if (ctx.cr6.lt) goto loc_82675F24;
loc_82675F88:
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82675f0c
	if (ctx.cr6.lt) goto loc_82675F0C;
loc_82675F98:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,276
	ctx.r3.s64 = 276;
	// bl 0x822a9d28
	ctx.lr = 0x82675FA4;
	sub_822A9D28(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82675fbc
	if (ctx.cr6.eq) goto loc_82675FBC;
	// bl 0x826f5b20
	ctx.lr = 0x82675FB4;
	sub_826F5B20(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82675fc0
	goto loc_82675FC0;
loc_82675FBC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82675FC0:
	// stw r11,7772(r31)
	REX_STORE_U32(ctx.r31.u32 + 7772, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r11,7772(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7772);
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// lwz r10,7772(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7772);
	// stw r30,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r30.u32);
	// lwz r9,7772(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7772);
	// stw r30,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r30.u32);
	// lwz r8,7772(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7772);
	// stw r30,20(r8)
	REX_STORE_U32(ctx.r8.u32 + 20, ctx.r30.u32);
	// lwz r7,7772(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7772);
	// stw r30,24(r7)
	REX_STORE_U32(ctx.r7.u32 + 24, ctx.r30.u32);
	// lwz r6,6864(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 6864);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82676228
	if (ctx.cr6.eq) goto loc_82676228;
	// lwz r29,728(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x82676020
	if (ctx.cr6.gt) goto loc_82676020;
	// mulli r11,r29,276
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(276));
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x82676024
	if (!ctx.cr6.gt) goto loc_82676024;
loc_82676020:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_82676024:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822a9d28
	ctx.lr = 0x8267602C;
	sub_822A9D28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676064
	if (ctx.cr6.eq) goto loc_82676064;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// blt 0x8267605c
	if (ctx.cr0.lt) goto loc_8267605C;
loc_82676048:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826f5b20
	ctx.lr = 0x82676050;
	sub_826F5B20(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,276
	ctx.r28.s64 = ctx.r28.s64 + 276;
	// bge 0x82676048
	if (!ctx.cr0.lt) goto loc_82676048;
loc_8267605C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82676068
	goto loc_82676068;
loc_82676064:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82676068:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,7788(r31)
	REX_STORE_U32(ctx.r31.u32 + 7788, ctx.r11.u32);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// lwz r29,728(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x82676090
	if (ctx.cr6.gt) goto loc_82676090;
	// mulli r11,r29,276
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(276));
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x82676094
	if (!ctx.cr6.gt) goto loc_82676094;
loc_82676090:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_82676094:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822a9d28
	ctx.lr = 0x8267609C;
	sub_822A9D28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826760d4
	if (ctx.cr6.eq) goto loc_826760D4;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// blt 0x826760cc
	if (ctx.cr0.lt) goto loc_826760CC;
loc_826760B8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826f5b20
	ctx.lr = 0x826760C0;
	sub_826F5B20(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,276
	ctx.r28.s64 = ctx.r28.s64 + 276;
	// bge 0x826760b8
	if (!ctx.cr0.lt) goto loc_826760B8;
loc_826760CC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x826760d8
	goto loc_826760D8;
loc_826760D4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_826760D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,7792(r31)
	REX_STORE_U32(ctx.r31.u32 + 7792, ctx.r11.u32);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,7788(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7788);
	// mulli r5,r11,276
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(276));
	// bl 0x825e3710
	ctx.lr = 0x826760F8;
	sub_825E3710(ctx, base);
	// lwz r10,728(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// lwz r3,7792(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7792);
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r5,r10,276
	ctx.r5.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(276));
	// bl 0x825e3710
	ctx.lr = 0x8267610C;
	sub_825E3710(ctx, base);
	// lwz r9,724(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x826761bc
	if (!ctx.cr6.gt) goto loc_826761BC;
	// lwz r9,720(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
loc_82676124:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826761ac
	if (ctx.cr6.eq) goto loc_826761AC;
	// cntlzw r7,r6
	ctx.r7.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// mulli r10,r8,276
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(276));
	// rlwinm r5,r7,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_8267613C:
	// lwz r7,724(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// cntlzw r3,r11
	ctx.r3.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r9,7788(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7788);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// subf r4,r11,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r11.u64;
	// subf r7,r6,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r6.u64;
	// cntlzw r4,r4
	ctx.r4.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r4,r4,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// rlwinm r7,r7,28,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0x2;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// or r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 | ctx.r4.u64;
	// rlwinm r4,r3,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// or r7,r3,r5
	ctx.r7.u64 = ctx.r3.u64 | ctx.r5.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// or r7,r3,r4
	ctx.r7.u64 = ctx.r3.u64 | ctx.r4.u64;
	// stw r7,120(r9)
	REX_STORE_U32(ctx.r9.u32 + 120, ctx.r7.u32);
	// lwz r9,7792(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7792);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,120(r4)
	REX_STORE_U32(ctx.r4.u32 + 120, ctx.r7.u32);
	// addi r10,r10,276
	ctx.r10.s64 = ctx.r10.s64 + 276;
	// lwz r9,720(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8267613c
	if (ctx.cr6.lt) goto loc_8267613C;
loc_826761AC:
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82676124
	if (ctx.cr6.lt) goto loc_82676124;
loc_826761BC:
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x822a9d28
	ctx.lr = 0x826761CC;
	sub_822A9D28(ctx, base);
	// stw r3,7832(r31)
	REX_STORE_U32(ctx.r31.u32 + 7832, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// lwz r10,728(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// lwz r11,2796(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2796);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,7780(r31)
	REX_STORE_U32(ctx.r31.u32 + 7780, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,728(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,7784(r31)
	REX_STORE_U32(ctx.r31.u32 + 7784, ctx.r7.u32);
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,728(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,7796(r31)
	REX_STORE_U32(ctx.r31.u32 + 7796, ctx.r5.u32);
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r4,728(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,7800(r31)
	REX_STORE_U32(ctx.r31.u32 + 7800, ctx.r3.u32);
loc_82676228:
	// lwz r11,1612(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1612);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82676264
	if (ctx.cr6.eq) goto loc_82676264;
	// lwz r10,1360(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1360);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,1352(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1352);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// addze r3,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r3.s64 = temp.s64;
	// bl 0x822a9d28
	ctx.lr = 0x82676258;
	sub_822A9D28(ctx, base);
	// stw r3,7232(r31)
	REX_STORE_U32(ctx.r31.u32 + 7232, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
loc_82676264:
	// lwz r11,2336(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2336);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826762d8
	if (ctx.cr6.eq) goto loc_826762D8;
	// lwz r11,796(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82676288
	if (!ctx.cr6.eq) goto loc_82676288;
	// lwz r11,720(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// b 0x826762a0
	goto loc_826762A0;
loc_82676288:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// lwz r11,720(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// bge cr6,0x8267629c
	if (!ctx.cr6.lt) goto loc_8267629C;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// b 0x826762a0
	goto loc_826762A0;
loc_8267629C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_826762A0:
	// stw r11,7072(r31)
	REX_STORE_U32(ctx.r31.u32 + 7072, ctx.r11.u32);
	// lwz r11,800(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826762bc
	if (!ctx.cr6.eq) goto loc_826762BC;
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// b 0x826762d4
	goto loc_826762D4;
loc_826762BC:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// bge cr6,0x826762d0
	if (!ctx.cr6.lt) goto loc_826762D0;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// b 0x826762d4
	goto loc_826762D4;
loc_826762D0:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_826762D4:
	// stw r11,7076(r31)
	REX_STORE_U32(ctx.r31.u32 + 7076, ctx.r11.u32);
loc_826762D8:
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lwz r11,-6948(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -6948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82676360
	if (ctx.cr6.eq) goto loc_82676360;
	// stw r20,28568(r31)
	REX_STORE_U32(ctx.r31.u32 + 28568, ctx.r20.u32);
	// li r5,504
	ctx.r5.s64 = 504;
	// stw r30,28588(r31)
	REX_STORE_U32(ctx.r31.u32 + 28588, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,28592(r31)
	REX_STORE_U32(ctx.r31.u32 + 28592, ctx.r30.u32);
	// addi r3,r31,29412
	ctx.r3.s64 = ctx.r31.s64 + 29412;
	// stw r30,28596(r31)
	REX_STORE_U32(ctx.r31.u32 + 28596, ctx.r30.u32);
	// stw r30,28600(r31)
	REX_STORE_U32(ctx.r31.u32 + 28600, ctx.r30.u32);
	// stw r30,28640(r31)
	REX_STORE_U32(ctx.r31.u32 + 28640, ctx.r30.u32);
	// stw r30,28644(r31)
	REX_STORE_U32(ctx.r31.u32 + 28644, ctx.r30.u32);
	// stw r30,28648(r31)
	REX_STORE_U32(ctx.r31.u32 + 28648, ctx.r30.u32);
	// stw r30,30152(r31)
	REX_STORE_U32(ctx.r31.u32 + 30152, ctx.r30.u32);
	// stw r30,28652(r31)
	REX_STORE_U32(ctx.r31.u32 + 28652, ctx.r30.u32);
	// stw r30,28656(r31)
	REX_STORE_U32(ctx.r31.u32 + 28656, ctx.r30.u32);
	// stw r30,28660(r31)
	REX_STORE_U32(ctx.r31.u32 + 28660, ctx.r30.u32);
	// stw r30,28664(r31)
	REX_STORE_U32(ctx.r31.u32 + 28664, ctx.r30.u32);
	// stw r30,28672(r31)
	REX_STORE_U32(ctx.r31.u32 + 28672, ctx.r30.u32);
	// stw r30,28668(r31)
	REX_STORE_U32(ctx.r31.u32 + 28668, ctx.r30.u32);
	// stw r30,30160(r31)
	REX_STORE_U32(ctx.r31.u32 + 30160, ctx.r30.u32);
	// stw r30,30168(r31)
	REX_STORE_U32(ctx.r31.u32 + 30168, ctx.r30.u32);
	// stw r30,30176(r31)
	REX_STORE_U32(ctx.r31.u32 + 30176, ctx.r30.u32);
	// stw r30,30184(r31)
	REX_STORE_U32(ctx.r31.u32 + 30184, ctx.r30.u32);
	// stw r30,30196(r31)
	REX_STORE_U32(ctx.r31.u32 + 30196, ctx.r30.u32);
	// bl 0x825e3710
	ctx.lr = 0x82676348;
	sub_825E3710(ctx, base);
	// lis r29,-32121
	ctx.r29.s64 = -2105081856;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,-7020(r29)
	REX_STORE_U32(ctx.r29.u32 + -7020, ctx.r30.u32);
	// bl 0x825e07a8
	ctx.lr = 0x82676358;
	sub_825E07A8(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// stw r11,-7020(r29)
	REX_STORE_U32(ctx.r29.u32 + -7020, ctx.r11.u32);
loc_82676360:
	// lwz r11,-7044(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + -7044);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82676384
	if (ctx.cr6.eq) goto loc_82676384;
	// lis r29,-32121
	ctx.r29.s64 = -2105081856;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,-7028(r29)
	REX_STORE_U32(ctx.r29.u32 + -7028, ctx.r30.u32);
	// bl 0x825e07a8
	ctx.lr = 0x8267637C;
	sub_825E07A8(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// stw r11,-7028(r29)
	REX_STORE_U32(ctx.r29.u32 + -7028, ctx.r11.u32);
loc_82676384:
	// lwz r11,-7040(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + -7040);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826763a8
	if (ctx.cr6.eq) goto loc_826763A8;
	// lis r29,-32121
	ctx.r29.s64 = -2105081856;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,-7024(r29)
	REX_STORE_U32(ctx.r29.u32 + -7024, ctx.r30.u32);
	// bl 0x825e07a8
	ctx.lr = 0x826763A0;
	sub_825E07A8(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// stw r11,-7024(r29)
	REX_STORE_U32(ctx.r29.u32 + -7024, ctx.r11.u32);
loc_826763A8:
	// cmpwi cr6,r17,7
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 7, ctx.xer);
	// beq cr6,0x826763b8
	if (ctx.cr6.eq) goto loc_826763B8;
	// cmpwi cr6,r17,8
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 8, ctx.xer);
	// bne cr6,0x826763c8
	if (!ctx.cr6.eq) goto loc_826763C8;
loc_826763B8:
	// lwz r11,2112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2112);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826763c8
	if (!ctx.cr6.eq) goto loc_826763C8;
	// stw r30,2104(r31)
	REX_STORE_U32(ctx.r31.u32 + 2104, ctx.r30.u32);
loc_826763C8:
	// lwz r11,-7044(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + -7044);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826763e0
	if (!ctx.cr6.eq) goto loc_826763E0;
	// lwz r11,-7040(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + -7040);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82676410
	if (ctx.cr6.eq) goto loc_82676410;
loc_826763E0:
	// lwz r10,800(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,796(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// addze r3,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r3.s64 = temp.s64;
	// bl 0x822a9d28
	ctx.lr = 0x82676404;
	sub_822A9D28(ctx, base);
	// stw r3,20216(r31)
	REX_STORE_U32(ctx.r31.u32 + 20216, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
loc_82676410:
	// lwz r10,800(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,796(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// addze r3,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r3.s64 = temp.s64;
	// bl 0x822a9d28
	ctx.lr = 0x82676434;
	sub_822A9D28(ctx, base);
	// stw r3,20196(r31)
	REX_STORE_U32(ctx.r31.u32 + 20196, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82707ac8
	ctx.lr = 0x82676448;
	sub_82707AC8(ctx, base);
	// stw r30,7192(r31)
	REX_STORE_U32(ctx.r31.u32 + 7192, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82725830
	ctx.lr = 0x82676454;
	sub_82725830(ctx, base);
	// lwz r11,1584(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1584);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// bne cr6,0x82676470
	if (!ctx.cr6.eq) goto loc_82676470;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82676480
	goto loc_82676480;
loc_82676470:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
loc_82676480:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x822a9d28
	ctx.lr = 0x8267648C;
	sub_822A9D28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826764a4
	if (ctx.cr6.eq) goto loc_826764A4;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82716310
	ctx.lr = 0x826764A0;
	sub_82716310(ctx, base);
	// b 0x826764a8
	goto loc_826764A8;
loc_826764A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_826764A8:
	// stw r3,7192(r31)
	REX_STORE_U32(ctx.r31.u32 + 7192, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82676cb0
	if (!ctx.cr6.eq) goto loc_82676CB0;
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x826764d8
	if (!ctx.cr6.gt) goto loc_826764D8;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_826764D8:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822a9d28
	ctx.lr = 0x826764E0;
	sub_822A9D28(ctx, base);
	// stw r3,2324(r31)
	REX_STORE_U32(ctx.r31.u32 + 2324, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82676504
	if (!ctx.cr6.gt) goto loc_82676504;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_82676504:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822a9d28
	ctx.lr = 0x8267650C;
	sub_822A9D28(ctx, base);
	// stw r3,7856(r31)
	REX_STORE_U32(ctx.r31.u32 + 7856, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// lwz r11,1624(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// rlwinm r3,r11,15,0,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFFFF8000;
	// bl 0x822a9d28
	ctx.lr = 0x82676528;
	sub_822A9D28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,2940(r31)
	REX_STORE_U32(ctx.r31.u32 + 2940, ctx.r3.u32);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// lwz r11,1624(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82676574
	if (ctx.cr6.lt) goto loc_82676574;
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// addi r11,r11,-32768
	ctx.r11.s64 = ctx.r11.s64 + -32768;
	// stw r11,3908(r31)
	REX_STORE_U32(ctx.r31.u32 + 3908, ctx.r11.u32);
	// lwz r10,1624(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// ble cr6,0x82676574
	if (!ctx.cr6.gt) goto loc_82676574;
	// lwz r11,2940(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2940);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// stw r10,4876(r31)
	REX_STORE_U32(ctx.r31.u32 + 4876, ctx.r10.u32);
	// lwz r9,2940(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2940);
	// addis r8,r9,2
	ctx.r8.s64 = ctx.r9.s64 + 131072;
	// addi r8,r8,-32768
	ctx.r8.s64 = ctx.r8.s64 + -32768;
	// stw r8,5844(r31)
	REX_STORE_U32(ctx.r31.u32 + 5844, ctx.r8.u32);
loc_82676574:
	// stw r30,2944(r31)
	REX_STORE_U32(ctx.r31.u32 + 2944, ctx.r30.u32);
	// stw r30,3912(r31)
	REX_STORE_U32(ctx.r31.u32 + 3912, ctx.r30.u32);
	// stw r30,4880(r31)
	REX_STORE_U32(ctx.r31.u32 + 4880, ctx.r30.u32);
	// stw r30,5848(r31)
	REX_STORE_U32(ctx.r31.u32 + 5848, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82676690
	if (!ctx.cr6.eq) goto loc_82676690;
	// lwz r11,2564(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2564);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826765a8
	if (ctx.cr6.eq) goto loc_826765A8;
	// li r29,256
	ctx.r29.s64 = 256;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// b 0x826765b0
	goto loc_826765B0;
loc_826765A8:
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// li r28,64
	ctx.r28.s64 = 64;
loc_826765B0:
	// lwz r11,1624(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// mullw r10,r28,r29
	ctx.r10.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x826765cc
	if (!ctx.cr6.gt) goto loc_826765CC;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_826765CC:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822a9d28
	ctx.lr = 0x826765D4;
	sub_822A9D28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,2948(r31)
	REX_STORE_U32(ctx.r31.u32 + 2948, ctx.r3.u32);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// lwz r11,1624(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// mullw r10,r28,r29
	ctx.r10.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x826765fc
	if (!ctx.cr6.gt) goto loc_826765FC;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_826765FC:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822a9d28
	ctx.lr = 0x82676604;
	sub_822A9D28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,2952(r31)
	REX_STORE_U32(ctx.r31.u32 + 2952, ctx.r3.u32);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// lwz r9,2948(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2948);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// lwz r11,1624(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82676690
	if (ctx.cr6.lt) goto loc_82676690;
	// mullw r11,r28,r29
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r9,3916(r31)
	REX_STORE_U32(ctx.r31.u32 + 3916, ctx.r9.u32);
	// lwz r9,2952(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2952);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,3920(r31)
	REX_STORE_U32(ctx.r31.u32 + 3920, ctx.r8.u32);
	// lwz r7,1624(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// ble cr6,0x82676690
	if (!ctx.cr6.gt) goto loc_82676690;
	// lwz r8,2948(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2948);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r8,4884(r31)
	REX_STORE_U32(ctx.r31.u32 + 4884, ctx.r8.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,2952(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2952);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,4888(r31)
	REX_STORE_U32(ctx.r31.u32 + 4888, ctx.r6.u32);
	// lwz r10,2948(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2948);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,5852(r31)
	REX_STORE_U32(ctx.r31.u32 + 5852, ctx.r5.u32);
	// lwz r10,2952(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2952);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,5856(r31)
	REX_STORE_U32(ctx.r31.u32 + 5856, ctx.r4.u32);
loc_82676690:
	// stw r30,6908(r31)
	REX_STORE_U32(ctx.r31.u32 + 6908, ctx.r30.u32);
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// mulli r11,r11,14
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(14));
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x826766ac
	if (!ctx.cr6.gt) goto loc_826766AC;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_826766AC:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822a9d28
	ctx.lr = 0x826766B4;
	sub_822A9D28(ctx, base);
	// stw r3,6908(r31)
	REX_STORE_U32(ctx.r31.u32 + 6908, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r5,r11,28
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(28));
	// bl 0x825e3710
	ctx.lr = 0x826766D0;
	sub_825E3710(ctx, base);
	// lwz r9,728(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// lwz r10,6908(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6908);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,6912(r31)
	REX_STORE_U32(ctx.r31.u32 + 6912, ctx.r8.u32);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,728(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,6916(r31)
	REX_STORE_U32(ctx.r31.u32 + 6916, ctx.r6.u32);
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r5,728(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,6920(r31)
	REX_STORE_U32(ctx.r31.u32 + 6920, ctx.r3.u32);
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,6924(r31)
	REX_STORE_U32(ctx.r31.u32 + 6924, ctx.r11.u32);
	// stw r11,2552(r31)
	REX_STORE_U32(ctx.r31.u32 + 2552, ctx.r11.u32);
	// lwz r9,728(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,6924(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6924);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,6928(r31)
	REX_STORE_U32(ctx.r31.u32 + 6928, ctx.r11.u32);
	// stw r11,2556(r31)
	REX_STORE_U32(ctx.r31.u32 + 2556, ctx.r11.u32);
	// lwz r8,728(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,6928(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6928);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,2544(r31)
	REX_STORE_U32(ctx.r31.u32 + 2544, ctx.r7.u32);
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,728(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,2548(r31)
	REX_STORE_U32(ctx.r31.u32 + 2548, ctx.r5.u32);
	// lwz r3,6908(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 6908);
	// stw r3,7044(r31)
	REX_STORE_U32(ctx.r31.u32 + 7044, ctx.r3.u32);
	// lwz r3,728(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// bl 0x822a9d28
	ctx.lr = 0x82676778;
	sub_822A9D28(ctx, base);
	// stw r3,7048(r31)
	REX_STORE_U32(ctx.r31.u32 + 7048, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// lwz r10,720(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r10,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r9,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// mullw r3,r8,r7
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// bl 0x822a9d28
	ctx.lr = 0x826767A8;
	sub_822A9D28(ctx, base);
	// stw r3,7052(r31)
	REX_STORE_U32(ctx.r31.u32 + 7052, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// lwz r11,6908(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6908);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stw r11,7532(r31)
	REX_STORE_U32(ctx.r31.u32 + 7532, ctx.r11.u32);
	// lwz r10,728(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,7536(r31)
	REX_STORE_U32(ctx.r31.u32 + 7536, ctx.r9.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,728(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,7540(r31)
	REX_STORE_U32(ctx.r31.u32 + 7540, ctx.r7.u32);
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,728(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,7544(r31)
	REX_STORE_U32(ctx.r31.u32 + 7544, ctx.r5.u32);
	// rotlwi r10,r5,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r4,728(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,7548(r31)
	REX_STORE_U32(ctx.r31.u32 + 7548, ctx.r3.u32);
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,7552(r31)
	REX_STORE_U32(ctx.r31.u32 + 7552, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,728(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,7524(r31)
	REX_STORE_U32(ctx.r31.u32 + 7524, ctx.r8.u32);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,728(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,7528(r31)
	REX_STORE_U32(ctx.r31.u32 + 7528, ctx.r6.u32);
	// lwz r5,1624(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// ble cr6,0x826768b4
	if (!ctx.cr6.gt) goto loc_826768B4;
	// addi r29,r31,2864
	ctx.r29.s64 = ctx.r31.s64 + 2864;
loc_82676858:
	// stw r30,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,480
	ctx.r3.s64 = 480;
	// bl 0x822a9d28
	ctx.lr = 0x82676868;
	sub_822A9D28(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// addi r11,r3,80
	ctx.r11.s64 = ctx.r3.s64 + 80;
	// addi r9,r29,783
	ctx.r9.s64 = ctx.r29.s64 + 783;
	// addi r10,r11,80
	ctx.r10.s64 = ctx.r11.s64 + 80;
	// stw r11,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// rlwinm r8,r9,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r11,r10,80
	ctx.r11.s64 = ctx.r10.s64 + 80;
	// stw r10,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// stw r8,928(r29)
	REX_STORE_U32(ctx.r29.u32 + 928, ctx.r8.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r11,12(r29)
	REX_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// addi r7,r11,80
	ctx.r7.s64 = ctx.r11.s64 + 80;
	// stw r7,16(r29)
	REX_STORE_U32(ctx.r29.u32 + 16, ctx.r7.u32);
	// addi r29,r29,968
	ctx.r29.s64 = ctx.r29.s64 + 968;
	// lwz r6,1624(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// cmplw cr6,r28,r6
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82676858
	if (ctx.cr6.lt) goto loc_82676858;
loc_826768B4:
	// lwz r11,7832(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7832);
	// stw r11,7836(r31)
	REX_STORE_U32(ctx.r31.u32 + 7836, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x82676924
	if (!ctx.cr6.eq) goto loc_82676924;
	// lwz r11,6916(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6916);
	// stw r11,21136(r31)
	REX_STORE_U32(ctx.r31.u32 + 21136, ctx.r11.u32);
	// lwz r10,6920(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6920);
	// stw r10,28416(r31)
	REX_STORE_U32(ctx.r31.u32 + 28416, ctx.r10.u32);
	// lwz r9,6912(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 6912);
	// stw r9,28424(r31)
	REX_STORE_U32(ctx.r31.u32 + 28424, ctx.r9.u32);
	// lwz r11,1624(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x82676904
	if (!ctx.cr6.gt) goto loc_82676904;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_82676904:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822a9d28
	ctx.lr = 0x8267690C;
	sub_822A9D28(ctx, base);
	// stw r3,2480(r31)
	REX_STORE_U32(ctx.r31.u32 + 2480, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// addi r11,r3,31
	ctx.r11.s64 = ctx.r3.s64 + 31;
	// rlwinm r10,r11,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r10,2484(r31)
	REX_STORE_U32(ctx.r31.u32 + 2484, ctx.r10.u32);
loc_82676924:
	// lwz r28,720(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r29,724(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mullw r26,r29,r28
	ctx.r26.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r28.s32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82676948
	if (!ctx.cr6.eq) goto loc_82676948;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// rlwinm r29,r11,0,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// mullw r26,r29,r28
	ctx.r26.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r28.s32);
loc_82676948:
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r27,r11,4
	ctx.r27.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r3,r11,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x822a9d28
	ctx.lr = 0x82676964;
	sub_822A9D28(ctx, base);
	// stw r3,6804(r31)
	REX_STORE_U32(ctx.r31.u32 + 6804, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,4
	ctx.r10.s64 = ctx.r28.s64 + 4;
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r8,r29,4
	ctx.r8.s64 = ctx.r29.s64 + 4;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// mullw r29,r8,r10
	ctx.r29.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r28,r29,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r7,6800(r31)
	REX_STORE_U32(ctx.r31.u32 + 6800, ctx.r7.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a9d28
	ctx.lr = 0x826769A0;
	sub_822A9D28(ctx, base);
	// stw r3,6808(r31)
	REX_STORE_U32(ctx.r31.u32 + 6808, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a9d28
	ctx.lr = 0x826769B8;
	sub_822A9D28(ctx, base);
	// stw r3,6812(r31)
	REX_STORE_U32(ctx.r31.u32 + 6812, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r3,r11,7,0,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// bl 0x822a9d28
	ctx.lr = 0x826769D8;
	sub_822A9D28(ctx, base);
	// stw r3,6816(r31)
	REX_STORE_U32(ctx.r31.u32 + 6816, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// rlwinm r11,r29,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r3,6820(r31)
	REX_STORE_U32(ctx.r31.u32 + 6820, ctx.r3.u32);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,6824(r31)
	REX_STORE_U32(ctx.r31.u32 + 6824, ctx.r10.u32);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r9,6828(r31)
	REX_STORE_U32(ctx.r31.u32 + 6828, ctx.r9.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,6832(r31)
	REX_STORE_U32(ctx.r31.u32 + 6832, ctx.r10.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r9,6836(r31)
	REX_STORE_U32(ctx.r31.u32 + 6836, ctx.r9.u32);
	// stw r11,6840(r31)
	REX_STORE_U32(ctx.r31.u32 + 6840, ctx.r11.u32);
	// lwz r10,1480(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1480);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82676b30
	if (ctx.cr6.eq) goto loc_82676B30;
	// mulli r11,r29,84
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(84));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x82676a38
	if (!ctx.cr6.gt) goto loc_82676A38;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_82676A38:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822a9d28
	ctx.lr = 0x82676A40;
	sub_822A9D28(ctx, base);
	// addi r11,r3,30
	ctx.r11.s64 = ctx.r3.s64 + 30;
	// stw r3,1484(r31)
	REX_STORE_U32(ctx.r31.u32 + 1484, ctx.r3.u32);
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,1488(r31)
	REX_STORE_U32(ctx.r31.u32 + 1488, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// rlwinm r9,r29,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r10,r29,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r26,r22
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r22.u32, ctx.xer);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,1492(r31)
	REX_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// rlwinm r3,r26,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,1496(r31)
	REX_STORE_U32(ctx.r31.u32 + 1496, ctx.r10.u32);
	// ble cr6,0x82676a80
	if (!ctx.cr6.gt) goto loc_82676A80;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_82676A80:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822a9d28
	ctx.lr = 0x82676A88;
	sub_822A9D28(ctx, base);
	// stw r3,1500(r31)
	REX_STORE_U32(ctx.r31.u32 + 1500, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// rlwinm r29,r26,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x825e3710
	ctx.lr = 0x82676AA4;
	sub_825E3710(ctx, base);
	// cmplw cr6,r26,r22
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r26,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x82676ab4
	if (!ctx.cr6.gt) goto loc_82676AB4;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_82676AB4:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822a9d28
	ctx.lr = 0x82676ABC;
	sub_822A9D28(ctx, base);
	// stw r3,1504(r31)
	REX_STORE_U32(ctx.r31.u32 + 1504, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x825e3710
	ctx.lr = 0x82676AD4;
	sub_825E3710(ctx, base);
	// cmplw cr6,r26,r22
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r3,r26,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x82676ae4
	if (!ctx.cr6.gt) goto loc_82676AE4;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_82676AE4:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822a9d28
	ctx.lr = 0x82676AEC;
	sub_822A9D28(ctx, base);
	// stw r3,1508(r31)
	REX_STORE_U32(ctx.r31.u32 + 1508, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x825e3710
	ctx.lr = 0x82676B04;
	sub_825E3710(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,29688
	ctx.r3.s64 = 29688;
	// bl 0x822a9d28
	ctx.lr = 0x82676B10;
	sub_822A9D28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676b20
	if (ctx.cr6.eq) goto loc_82676B20;
	// bl 0x827b2f48
	ctx.lr = 0x82676B1C;
	sub_827B2F48(ctx, base);
	// b 0x82676b24
	goto loc_82676B24;
loc_82676B20:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82676B24:
	// stw r3,1512(r31)
	REX_STORE_U32(ctx.r31.u32 + 1512, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
loc_82676B30:
	// stw r30,6792(r31)
	REX_STORE_U32(ctx.r31.u32 + 6792, ctx.r30.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x822a9d28
	ctx.lr = 0x82676B44;
	sub_822A9D28(ctx, base);
	// stw r3,6792(r31)
	REX_STORE_U32(ctx.r31.u32 + 6792, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// stw r30,6796(r31)
	REX_STORE_U32(ctx.r31.u32 + 6796, ctx.r30.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x822a9d28
	ctx.lr = 0x82676B64;
	sub_822A9D28(ctx, base);
	// stw r3,6796(r31)
	REX_STORE_U32(ctx.r31.u32 + 6796, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826735b8
	ctx.lr = 0x82676B78;
	sub_826735B8(ctx, base);
	// lwz r25,748(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 748);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// bne cr6,0x82676cb0
	if (!ctx.cr6.eq) goto loc_82676CB0;
	// lwz r11,720(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// stw r10,19452(r31)
	REX_STORE_U32(ctx.r31.u32 + 19452, ctx.r10.u32);
	// lwz r8,7936(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7936);
	// lfd f0,7688(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// std r8,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lfd f13,144(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmul f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f10,f11,f30
	ctx.f10.f64 = ctx.f11.f64 * ctx.f30.f64;
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f9.u64);
	// lwz r7,148(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r7,7940(r31)
	REX_STORE_U32(ctx.r31.u32 + 7940, ctx.r7.u32);
	// bgt cr6,0x82676bd4
	if (ctx.cr6.gt) goto loc_82676BD4;
	// stw r20,7940(r31)
	REX_STORE_U32(ctx.r31.u32 + 7940, ctx.r20.u32);
loc_82676BD4:
	// lwz r11,7596(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7596);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82676c04
	if (!ctx.cr6.eq) goto loc_82676C04;
	// lwz r11,7188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82676c04
	if (ctx.cr6.eq) goto loc_82676C04;
	// lwz r11,7940(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7940);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x82676c04
	if (!ctx.cr6.lt) goto loc_82676C04;
	// li r24,8
	ctx.r24.s64 = 8;
	// stw r24,7940(r31)
	REX_STORE_U32(ctx.r31.u32 + 7940, ctx.r24.u32);
	// b 0x82676c08
	goto loc_82676C08;
loc_82676C04:
	// li r24,8
	ctx.r24.s64 = 8;
loc_82676C08:
	// lwz r11,7188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7188);
	// lfd f0,7896(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7896);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82676c88
	if (!ctx.cr6.eq) goto loc_82676C88;
	// lfd f13,7888(r31)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82676c30
	if (!ctx.cr6.lt) goto loc_82676C30;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82676c30
	if (!ctx.cr6.gt) goto loc_82676C30;
	// stfd f0,7888(r31)
	REX_STORE_U64(ctx.r31.u32 + 7888, ctx.f0.u64);
loc_82676C30:
	// stfd f31,7896(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r31.u32 + 7896, ctx.f31.u64);
	// lwz r9,668(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 668);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// std r9,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// lfd f13,26536(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 26536);
	// lwz r8,7880(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7880);
	// lfd f0,7688(r31)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// lfd f12,7888(r31)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r7.u64);
	// lfd f11,144(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfd f9,160(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fmul f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmadd f0,f10,f12,f7
	ctx.f0.f64 = std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f7.f64);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82676e84
	if (!ctx.cr6.gt) goto loc_82676E84;
	// lis r11,15258
	ctx.r11.s64 = 999948288;
	// ori r10,r11,51712
	ctx.r10.u64 = ctx.r11.u64 | 51712;
	// stw r10,7952(r31)
	REX_STORE_U32(ctx.r31.u32 + 7952, ctx.r10.u32);
	// b 0x82676e90
	goto loc_82676E90;
loc_82676C88:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82676d5c
	if (!ctx.cr6.gt) goto loc_82676D5C;
	// lwz r11,7596(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7596);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82676d5c
	if (!ctx.cr6.eq) goto loc_82676D5C;
	// lfd f13,7888(r31)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82676ce4
	if (!ctx.cr6.lt) goto loc_82676CE4;
	// li r11,-100
	ctx.r11.s64 = -100;
	// stw r11,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_82676CB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82671dd0
	ctx.lr = 0x82676CB8;
	sub_82671DD0(ctx, base);
	// lwz r11,748(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 748);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82676cd0
	if (!ctx.cr6.eq) goto loc_82676CD0;
	// li r10,-3
	ctx.r10.s64 = -3;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82676CD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x825e41b0
	ctx.lr = 0x82676CE0;
	__restfpr_27(ctx, base);
	// b 0x825e3620
	__restgprlr_14(ctx, base);
	return;
loc_82676CE4:
	// lwz r11,7880(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7880);
	// lfd f12,7688(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// lwz r7,668(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 668);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// std r7,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r7.u64);
	// lfd f13,26536(r9)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + 26536);
	// lfd f11,144(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfd f9,160(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fmul f7,f10,f12
	ctx.f7.f64 = ctx.f10.f64 * ctx.f12.f64;
	// fmadd f0,f8,f0,f7
	ctx.f0.f64 = std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f7.f64);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82676d40
	if (!ctx.cr6.gt) goto loc_82676D40;
	// lis r11,15258
	ctx.r11.s64 = 999948288;
	// ori r10,r11,51712
	ctx.r10.u64 = ctx.r11.u64 | 51712;
	// stw r10,7952(r31)
	REX_STORE_U32(ctx.r31.u32 + 7952, ctx.r10.u32);
	// lfd f0,7896(r31)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7896);
	// stfd f0,8008(r31)
	REX_STORE_U64(ctx.r31.u32 + 8008, ctx.f0.u64);
	// lfd f13,7896(r31)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 7896);
	// b 0x82676e9c
	goto loc_82676E9C;
loc_82676D40:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r12,7952
	ctx.r12.s64 = 7952;
	// stfiwx f0,r31,r12
	REX_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f0.u32);
	// lfd f0,7896(r31)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7896);
	// stfd f0,8008(r31)
	REX_STORE_U64(ctx.r31.u32 + 8008, ctx.f0.u64);
	// lfd f13,7896(r31)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 7896);
	// b 0x82676e9c
	goto loc_82676E9C;
loc_82676D5C:
	// lwz r11,7596(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7596);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82676e2c
	if (!ctx.cr6.eq) goto loc_82676E2C;
	// lwz r11,7880(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7880);
	// lfd f12,7688(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// lwz r7,668(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 668);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// std r7,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r7.u64);
	// lfd f13,26536(r9)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + 26536);
	// lfd f11,144(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfd f9,160(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fmul f7,f10,f12
	ctx.f7.f64 = ctx.f10.f64 * ctx.f12.f64;
	// fmadd f0,f8,f0,f7
	ctx.f0.f64 = std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f7.f64);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82676db8
	if (!ctx.cr6.gt) goto loc_82676DB8;
	// lis r11,15258
	ctx.r11.s64 = 999948288;
	// ori r10,r11,51712
	ctx.r10.u64 = ctx.r11.u64 | 51712;
	// stw r10,7952(r31)
	REX_STORE_U32(ctx.r31.u32 + 7952, ctx.r10.u32);
	// b 0x82676dc4
	goto loc_82676DC4;
loc_82676DB8:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r12,7952
	ctx.r12.s64 = 7952;
	// stfiwx f0,r31,r12
	REX_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f0.u32);
loc_82676DC4:
	// lfd f0,7896(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7896);
	// li r11,30576
	ctx.r11.s64 = 30576;
	// stfd f0,8008(r31)
	REX_STORE_U64(ctx.r31.u32 + 8008, ctx.f0.u64);
	// li r10,30560
	ctx.r10.s64 = 30560;
	// lfd f13,7896(r31)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 7896);
	// fmul f12,f13,f27
	ctx.f12.f64 = ctx.f13.f64 * ctx.f27.f64;
	// lfd f11,7688(r31)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// fdiv f10,f12,f11
	ctx.f10.f64 = ctx.f12.f64 / ctx.f11.f64;
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// li r12,7884
	ctx.r12.s64 = 7884;
	// stfiwx f9,r31,r12
	REX_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f9.u32);
	// lfd f8,7888(r31)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// stfd f8,30568(r31)
	REX_STORE_U64(ctx.r31.u32 + 30568, ctx.f8.u64);
	// lfd f7,7888(r31)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// fmul f6,f7,f27
	ctx.f6.f64 = ctx.f7.f64 * ctx.f27.f64;
	// lfd f5,7688(r31)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// fdiv f4,f6,f5
	ctx.f4.f64 = ctx.f6.f64 / ctx.f5.f64;
	// fctiwz f3,f4
	ctx.f3.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfiwx f3,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f3.u32);
	// lfd f1,7888(r31)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// fmul f0,f1,f27
	ctx.f0.f64 = ctx.f1.f64 * ctx.f27.f64;
	// lfd f2,7688(r31)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// fdiv f13,f0,f2
	ctx.f13.f64 = ctx.f0.f64 / ctx.f2.f64;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f12,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.f12.u32);
	// b 0x82676eb4
	goto loc_82676EB4;
loc_82676E2C:
	// stfd f31,7896(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r31.u32 + 7896, ctx.f31.u64);
	// lwz r9,668(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 668);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// std r9,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// lfd f13,26536(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 26536);
	// lwz r8,7880(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7880);
	// lfd f0,7688(r31)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// lfd f12,7888(r31)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r7.u64);
	// lfd f11,144(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfd f9,160(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fmul f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmadd f0,f10,f12,f7
	ctx.f0.f64 = std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f7.f64);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82676e84
	if (!ctx.cr6.gt) goto loc_82676E84;
	// lis r11,15258
	ctx.r11.s64 = 999948288;
	// ori r10,r11,51712
	ctx.r10.u64 = ctx.r11.u64 | 51712;
	// stw r10,7952(r31)
	REX_STORE_U32(ctx.r31.u32 + 7952, ctx.r10.u32);
	// b 0x82676e90
	goto loc_82676E90;
loc_82676E84:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r12,7952
	ctx.r12.s64 = 7952;
	// stfiwx f0,r31,r12
	REX_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f0.u32);
loc_82676E90:
	// lfd f0,7888(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
	// stfd f0,8008(r31)
	REX_STORE_U64(ctx.r31.u32 + 8008, ctx.f0.u64);
	// lfd f13,7888(r31)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 7888);
loc_82676E9C:
	// fmul f12,f13,f27
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f13.f64 * ctx.f27.f64;
	// lfd f11,7688(r31)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r31.u32 + 7688);
	// fdiv f10,f12,f11
	ctx.f10.f64 = ctx.f12.f64 / ctx.f11.f64;
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// li r12,7884
	ctx.r12.s64 = 7884;
	// stfiwx f9,r31,r12
	REX_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f9.u32);
loc_82676EB4:
	// lwz r11,7952(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7952);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// li r9,8016
	ctx.r9.s64 = 8016;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// stw r11,8000(r31)
	REX_STORE_U32(ctx.r31.u32 + 8000, ctx.r11.u32);
	// lfd f0,26528(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 26528);
	// lfs f13,-29340(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -29340);
	ctx.f13.f64 = double(temp.f32);
	// li r7,7960
	ctx.r7.s64 = 7960;
	// li r5,7964
	ctx.r5.s64 = 7964;
	// lfs f12,-29304(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -29304);
	ctx.f12.f64 = double(temp.f32);
	// li r11,7968
	ctx.r11.s64 = 7968;
	// lfs f11,-29344(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + -29344);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,7952(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7952);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lfd f10,144(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// fmul f8,f9,f0
	ctx.f8.f64 = ctx.f9.f64 * ctx.f0.f64;
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f7,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.f7.u32);
	// lwz r6,8000(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 8000);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// std r4,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// lfd f6,144(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fctiwz f2,f3
	ctx.f2.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfiwx f2,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.f2.u32);
	// lwz r10,8000(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8000);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// lfd f1,144(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fctiwz f10,f12
	ctx.f10.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f10,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.f10.u32);
	// lwz r8,8000(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8000);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r7.u64);
	// lfd f9,144(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fctiwz f5,f6
	ctx.f5.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfiwx f5,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f5.u32);
	// lwz r6,8000(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 8000);
	// stw r6,7956(r31)
	REX_STORE_U32(ctx.r31.u32 + 7956, ctx.r6.u32);
	// lwz r5,7884(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 7884);
	// stw r5,7944(r31)
	REX_STORE_U32(ctx.r31.u32 + 7944, ctx.r5.u32);
	// stw r5,7948(r31)
	REX_STORE_U32(ctx.r31.u32 + 7948, ctx.r5.u32);
	// bl 0x8266d120
	ctx.lr = 0x82676F94;
	sub_8266D120(ctx, base);
	// stw r3,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82676cb0
	if (!ctx.cr6.eq) goto loc_82676CB0;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,636(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 636);
	// lwz r29,652(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 652);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x82676fc0
	if (!ctx.cr6.eq) goto loc_82676FC0;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// srawi r29,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 1;
loc_82676FC0:
	// lwz r10,632(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 632);
	// li r9,-32
	ctx.r9.s64 = -32;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stw r9,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// stw r9,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// stw r10,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r10.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r11,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// bl 0x826cb230
	ctx.lr = 0x82676FEC;
	sub_826CB230(ctx, base);
	// li r11,-16
	ctx.r11.s64 = -16;
	// addi r9,r29,16
	ctx.r9.s64 = ctx.r29.s64 + 16;
	// stw r11,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// stw r11,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r9,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r9.u32);
	// lwz r11,648(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 648);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// stw r8,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r8.u32);
	// bl 0x826cb230
	ctx.lr = 0x82677018;
	sub_826CB230(ctx, base);
	// lwz r7,21096(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 21096);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x826771d8
	if (ctx.cr6.eq) goto loc_826771D8;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,148
	ctx.r3.s64 = 148;
	// bl 0x822a9d28
	ctx.lr = 0x82677030;
	sub_822A9D28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267708c
	if (ctx.cr6.eq) goto loc_8267708C;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r16,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r16.u32);
	// stw r16,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r16.u32);
	// stw r30,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r30,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r16,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r16.u32);
	// stw r16,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r16.u32);
	// stw r30,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r30.u32);
	// stw r30,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r30.u32);
	// stw r16,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r16.u32);
	// stw r16,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r16.u32);
	// stw r30,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r30.u32);
	// stw r30,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r30.u32);
	// stw r16,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r16.u32);
	// stw r16,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r16.u32);
	// stw r30,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r30.u32);
	// stw r30,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r30.u32);
	// stw r16,132(r3)
	REX_STORE_U32(ctx.r3.u32 + 132, ctx.r16.u32);
	// stw r16,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r16.u32);
	// b 0x82677090
	goto loc_82677090;
loc_8267708C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82677090:
	// stw r3,21104(r31)
	REX_STORE_U32(ctx.r31.u32 + 21104, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r9,800(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// lwz r8,796(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r11,r24
	ctx.r7.u64 = ctx.r11.u64 & ctx.r24.u64;
	// bl 0x82718d48
	ctx.lr = 0x826770C8;
	sub_82718D48(ctx, base);
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82676cb0
	if (!ctx.cr6.eq) goto loc_82676CB0;
	// lwz r11,21104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21104);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// stw r10,21112(r31)
	REX_STORE_U32(ctx.r31.u32 + 21112, ctx.r10.u32);
	// lwz r9,21104(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 21104);
	// lwz r8,88(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 88);
	// stw r8,21116(r31)
	REX_STORE_U32(ctx.r31.u32 + 21116, ctx.r8.u32);
	// lwz r7,21104(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 21104);
	// lwz r6,112(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 112);
	// stw r6,21120(r31)
	REX_STORE_U32(ctx.r31.u32 + 21120, ctx.r6.u32);
	// lwz r5,27988(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 27988);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x826771d8
	if (ctx.cr6.eq) goto loc_826771D8;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,148
	ctx.r3.s64 = 148;
	// bl 0x822a9d28
	ctx.lr = 0x82677110;
	sub_822A9D28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267716c
	if (ctx.cr6.eq) goto loc_8267716C;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r16,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r16.u32);
	// stw r16,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r16.u32);
	// stw r30,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r30,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r16,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r16.u32);
	// stw r16,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r16.u32);
	// stw r30,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r30.u32);
	// stw r30,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r30.u32);
	// stw r16,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r16.u32);
	// stw r16,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r16.u32);
	// stw r30,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r30.u32);
	// stw r30,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r30.u32);
	// stw r16,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r16.u32);
	// stw r16,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r16.u32);
	// stw r30,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r30.u32);
	// stw r30,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r30.u32);
	// stw r16,132(r3)
	REX_STORE_U32(ctx.r3.u32 + 132, ctx.r16.u32);
	// stw r16,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r16.u32);
	// b 0x82677170
	goto loc_82677170;
loc_8267716C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82677170:
	// stw r3,21108(r31)
	REX_STORE_U32(ctx.r31.u32 + 21108, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r9,800(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// lwz r8,796(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r11,r24
	ctx.r7.u64 = ctx.r11.u64 & ctx.r24.u64;
	// bl 0x82718d48
	ctx.lr = 0x826771A8;
	sub_82718D48(ctx, base);
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82676cb0
	if (!ctx.cr6.eq) goto loc_82676CB0;
	// lwz r11,21108(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21108);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// stw r10,21124(r31)
	REX_STORE_U32(ctx.r31.u32 + 21124, ctx.r10.u32);
	// lwz r9,21108(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 21108);
	// lwz r8,88(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 88);
	// stw r8,21128(r31)
	REX_STORE_U32(ctx.r31.u32 + 21128, ctx.r8.u32);
	// lwz r7,21108(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 21108);
	// lwz r6,112(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 112);
	// stw r6,21132(r31)
	REX_STORE_U32(ctx.r31.u32 + 21132, ctx.r6.u32);
loc_826771D8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82677214
	if (!ctx.cr6.eq) goto loc_82677214;
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r15.u32, ctx.xer);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x826771fc
	if (!ctx.cr6.gt) goto loc_826771FC;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_826771FC:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822a9d28
	ctx.lr = 0x82677204;
	sub_822A9D28(ctx, base);
	// stw r3,28428(r31)
	REX_STORE_U32(ctx.r31.u32 + 28428, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// stw r3,28432(r31)
	REX_STORE_U32(ctx.r31.u32 + 28432, ctx.r3.u32);
loc_82677214:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x822a9d28
	ctx.lr = 0x82677220;
	sub_822A9D28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82677234
	if (ctx.cr6.eq) goto loc_82677234;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826bfc30
	ctx.lr = 0x82677230;
	sub_826BFC30(ctx, base);
	// b 0x82677238
	goto loc_82677238;
loc_82677234:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82677238:
	// stw r3,31552(r31)
	REX_STORE_U32(ctx.r31.u32 + 31552, ctx.r3.u32);
	// lbz r6,31536(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 31536);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// bgt cr6,0x8267724c
	if (ctx.cr6.gt) goto loc_8267724C;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
loc_8267724C:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,800(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// lwz r4,796(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// bl 0x826bf8a8
	ctx.lr = 0x8267725C;
	sub_826BF8A8(ctx, base);
	// lwz r11,1360(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1360);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,28152(r31)
	REX_STORE_U32(ctx.r31.u32 + 28152, ctx.r11.u32);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82677280
	if (!ctx.cr6.gt) goto loc_82677280;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_82677280:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822a9d28
	ctx.lr = 0x82677288;
	sub_822A9D28(ctx, base);
	// stw r3,28148(r31)
	REX_STORE_U32(ctx.r31.u32 + 28148, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// lwz r11,1360(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1360);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2292(r31)
	REX_STORE_U32(ctx.r31.u32 + 2292, ctx.r11.u32);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x826772b4
	if (!ctx.cr6.gt) goto loc_826772B4;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_826772B4:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822a9d28
	ctx.lr = 0x826772BC;
	sub_822A9D28(ctx, base);
	// stw r3,2268(r31)
	REX_STORE_U32(ctx.r31.u32 + 2268, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// lwz r11,2292(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2292);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x825e3710
	ctx.lr = 0x826772D8;
	sub_825E3710(ctx, base);
	// lwz r10,2268(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2268);
	// stw r10,2264(r31)
	REX_STORE_U32(ctx.r31.u32 + 2264, ctx.r10.u32);
	// lwz r11,2292(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2292);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x826772f4
	if (!ctx.cr6.gt) goto loc_826772F4;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_826772F4:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822a9d28
	ctx.lr = 0x826772FC;
	sub_822A9D28(ctx, base);
	// stw r3,2276(r31)
	REX_STORE_U32(ctx.r31.u32 + 2276, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// lwz r11,2292(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2292);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x825e3710
	ctx.lr = 0x82677318;
	sub_825E3710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82710f70
	ctx.lr = 0x82677320;
	sub_82710F70(ctx, base);
	// stw r3,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82676cb0
	if (!ctx.cr6.eq) goto loc_82676CB0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x826773ec
	if (!ctx.cr6.eq) goto loc_826773EC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8266eef8
	ctx.lr = 0x82677344;
	sub_8266EEF8(ctx, base);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r4,r31,12928
	ctx.r4.s64 = ctx.r31.s64 + 12928;
	// lwz r5,8264(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8264);
	// bl 0x82709358
	ctx.lr = 0x82677354;
	sub_82709358(ctx, base);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r4,r31,14976
	ctx.r4.s64 = ctx.r31.s64 + 14976;
	// lwz r5,8268(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8268);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82709358
	ctx.lr = 0x82677368;
	sub_82709358(ctx, base);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r4,r31,16000
	ctx.r4.s64 = ctx.r31.s64 + 16000;
	// lwz r5,8272(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8272);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82709358
	ctx.lr = 0x8267737C;
	sub_82709358(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r31,17024
	ctx.r4.s64 = ctx.r31.s64 + 17024;
	// lwz r5,8276(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8276);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82709358
	ctx.lr = 0x82677390;
	sub_82709358(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266eef8
	ctx.lr = 0x8267739C;
	sub_8266EEF8(ctx, base);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r4,r31,8320
	ctx.r4.s64 = ctx.r31.s64 + 8320;
	// lwz r5,8264(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8264);
	// bl 0x82709358
	ctx.lr = 0x826773AC;
	sub_82709358(ctx, base);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r4,r31,10368
	ctx.r4.s64 = ctx.r31.s64 + 10368;
	// lwz r5,8268(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8268);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82709358
	ctx.lr = 0x826773C0;
	sub_82709358(ctx, base);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r4,r31,11392
	ctx.r4.s64 = ctx.r31.s64 + 11392;
	// lwz r5,8272(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8272);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82709358
	ctx.lr = 0x826773D4;
	sub_82709358(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r31,12416
	ctx.r4.s64 = ctx.r31.s64 + 12416;
	// lwz r5,8276(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8276);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82709358
	ctx.lr = 0x826773E8;
	sub_82709358(ctx, base);
	// b 0x82677458
	goto loc_82677458;
loc_826773EC:
	// addi r29,r31,8320
	ctx.r29.s64 = ctx.r31.s64 + 8320;
	// lwz r5,8264(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8264);
	// li r6,64
	ctx.r6.s64 = 64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82709358
	ctx.lr = 0x82677400;
	sub_82709358(ctx, base);
	// addi r28,r31,10368
	ctx.r28.s64 = ctx.r31.s64 + 10368;
	// li r6,32
	ctx.r6.s64 = 32;
	// lwz r5,8268(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8268);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82709358
	ctx.lr = 0x82677418;
	sub_82709358(ctx, base);
	// addi r27,r31,11392
	ctx.r27.s64 = ctx.r31.s64 + 11392;
	// li r6,32
	ctx.r6.s64 = 32;
	// lwz r5,8272(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8272);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82709358
	ctx.lr = 0x82677430;
	sub_82709358(ctx, base);
	// addi r26,r31,12416
	ctx.r26.s64 = ctx.r31.s64 + 12416;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r5,8276(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8276);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82709358
	ctx.lr = 0x82677448;
	sub_82709358(ctx, base);
	// stw r29,8304(r31)
	REX_STORE_U32(ctx.r31.u32 + 8304, ctx.r29.u32);
	// stw r28,8308(r31)
	REX_STORE_U32(ctx.r31.u32 + 8308, ctx.r28.u32);
	// stw r27,8312(r31)
	REX_STORE_U32(ctx.r31.u32 + 8312, ctx.r27.u32);
	// stw r26,8316(r31)
	REX_STORE_U32(ctx.r31.u32 + 8316, ctx.r26.u32);
loc_82677458:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266f040
	ctx.lr = 0x82677460;
	sub_8266F040(ctx, base);
	// lwz r11,6864(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6864);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8267751c
	if (ctx.cr6.eq) goto loc_8267751C;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,148
	ctx.r3.s64 = 148;
	// bl 0x822a9d28
	ctx.lr = 0x82677478;
	sub_822A9D28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826774d4
	if (ctx.cr6.eq) goto loc_826774D4;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r16,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r16.u32);
	// stw r16,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r16.u32);
	// stw r30,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r30,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r16,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r16.u32);
	// stw r16,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r16.u32);
	// stw r30,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r30.u32);
	// stw r30,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r30.u32);
	// stw r16,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r16.u32);
	// stw r16,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r16.u32);
	// stw r30,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r30.u32);
	// stw r30,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r30.u32);
	// stw r16,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r16.u32);
	// stw r16,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r16.u32);
	// stw r30,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r30.u32);
	// stw r30,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r30.u32);
	// stw r16,132(r3)
	REX_STORE_U32(ctx.r3.u32 + 132, ctx.r16.u32);
	// stw r16,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r16.u32);
	// b 0x826774d8
	goto loc_826774D8;
loc_826774D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_826774D8:
	// stw r3,7776(r31)
	REX_STORE_U32(ctx.r31.u32 + 7776, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r9,800(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 800);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// lwz r8,796(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r11,r24
	ctx.r7.u64 = ctx.r11.u64 & ctx.r24.u64;
	// bl 0x82718d48
	ctx.lr = 0x82677510;
	sub_82718D48(ctx, base);
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82676cb0
	if (!ctx.cr6.eq) goto loc_82676CB0;
loc_8267751C:
	// lwz r11,7980(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8267752c
	if (ctx.cr6.eq) goto loc_8267752C;
	// stw r30,7976(r31)
	REX_STORE_U32(ctx.r31.u32 + 7976, ctx.r30.u32);
loc_8267752C:
	// lwz r11,2940(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2940);
	// stw r11,2924(r31)
	REX_STORE_U32(ctx.r31.u32 + 2924, ctx.r11.u32);
	// stw r30,2928(r31)
	REX_STORE_U32(ctx.r31.u32 + 2928, ctx.r30.u32);
	// lwz r10,3112(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3112);
	// stw r10,2932(r31)
	REX_STORE_U32(ctx.r31.u32 + 2932, ctx.r10.u32);
	// lwz r9,3116(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3116);
	// stw r9,2936(r31)
	REX_STORE_U32(ctx.r31.u32 + 2936, ctx.r9.u32);
	// lwz r8,3908(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3908);
	// stw r8,3892(r31)
	REX_STORE_U32(ctx.r31.u32 + 3892, ctx.r8.u32);
	// stw r30,3896(r31)
	REX_STORE_U32(ctx.r31.u32 + 3896, ctx.r30.u32);
	// lwz r7,4080(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4080);
	// stw r7,3900(r31)
	REX_STORE_U32(ctx.r31.u32 + 3900, ctx.r7.u32);
	// lwz r6,4084(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 4084);
	// stw r6,3904(r31)
	REX_STORE_U32(ctx.r31.u32 + 3904, ctx.r6.u32);
	// lwz r5,4876(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4876);
	// stw r5,4860(r31)
	REX_STORE_U32(ctx.r31.u32 + 4860, ctx.r5.u32);
	// stw r30,4864(r31)
	REX_STORE_U32(ctx.r31.u32 + 4864, ctx.r30.u32);
	// lwz r4,5048(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 5048);
	// stw r4,4868(r31)
	REX_STORE_U32(ctx.r31.u32 + 4868, ctx.r4.u32);
	// lwz r3,5052(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 5052);
	// stw r3,4872(r31)
	REX_STORE_U32(ctx.r31.u32 + 4872, ctx.r3.u32);
	// lwz r11,5844(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 5844);
	// stw r11,5828(r31)
	REX_STORE_U32(ctx.r31.u32 + 5828, ctx.r11.u32);
	// stw r30,5832(r31)
	REX_STORE_U32(ctx.r31.u32 + 5832, ctx.r30.u32);
	// lwz r10,6016(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6016);
	// stw r10,5836(r31)
	REX_STORE_U32(ctx.r31.u32 + 5836, ctx.r10.u32);
	// lwz r9,6020(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 6020);
	// stw r9,5840(r31)
	REX_STORE_U32(ctx.r31.u32 + 5840, ctx.r9.u32);
	// lwz r8,21160(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 21160);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82677688
	if (ctx.cr6.eq) goto loc_82677688;
	// lwz r11,1376(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1376);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82676cb0
	if (!ctx.cr6.gt) goto loc_82676CB0;
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82676cb0
	if (!ctx.cr6.gt) goto loc_82676CB0;
	// stw r24,21244(r31)
	REX_STORE_U32(ctx.r31.u32 + 21244, ctx.r24.u32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stw r24,21248(r31)
	REX_STORE_U32(ctx.r31.u32 + 21248, ctx.r24.u32);
	// addi r29,r31,21200
	ctx.r29.s64 = ctx.r31.s64 + 21200;
	// stw r24,21252(r31)
	REX_STORE_U32(ctx.r31.u32 + 21252, ctx.r24.u32);
loc_826775D4:
	// lwz r11,804(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 804);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r3,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 1;
	// bl 0x822a9d28
	ctx.lr = 0x826775EC;
	sub_822A9D28(ctx, base);
	// stw r3,-36(r29)
	REX_STORE_U32(ctx.r29.u32 + -36, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// lwz r11,804(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 804);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// cmpwi cr6,r28,5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 5, ctx.xer);
	// stw r11,-16(r29)
	REX_STORE_U32(ctx.r29.u32 + -16, ctx.r11.u32);
	// lwz r10,804(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 804);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r29.u32 = ea;
	// blt cr6,0x826775d4
	if (ctx.cr6.lt) goto loc_826775D4;
	// addi r29,r31,21224
	ctx.r29.s64 = ctx.r31.s64 + 21224;
loc_82677624:
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822a9d28
	ctx.lr = 0x82677634;
	sub_822A9D28(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676cb0
	if (ctx.cr6.eq) goto loc_82676CB0;
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x825e3710
	ctx.lr = 0x82677650;
	sub_825E3710(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// blt cr6,0x82677624
	if (ctx.cr6.lt) goto loc_82677624;
	// lwz r11,728(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x822a9d28
	ctx.lr = 0x82677670;
	sub_822A9D28(ctx, base);
	// stw r3,21256(r31)
	REX_STORE_U32(ctx.r31.u32 + 21256, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x825e41b0
	ctx.lr = 0x82677684;
	__restfpr_27(ctx, base);
	// b 0x825e3620
	__restgprlr_14(ctx, base);
	return;
loc_82677688:
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r11,r31,21220
	ctx.r11.s64 = ctx.r31.s64 + 21220;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82677694:
	// stw r30,-16(r11)
	REX_STORE_U32(ctx.r11.u32 + -16, ctx.r30.u32);
	// stw r30,-36(r11)
	REX_STORE_U32(ctx.r11.u32 + -36, ctx.r30.u32);
	// stw r30,-56(r11)
	REX_STORE_U32(ctx.r11.u32 + -56, ctx.r30.u32);
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82677694
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82677694;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x825e41b0
	ctx.lr = 0x826776B8;
	__restfpr_27(ctx, base);
	// b 0x825e3620
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_827C1470) {
	REX_FUNC_PROLOGUE();
	// addis r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 131072;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r11,0,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFE0000;
	// ori r11,r9,4096
	ctx.r11.u64 = ctx.r9.u64 | 4096;
	// addi r3,r10,4096
	ctx.r3.s64 = ctx.r10.s64 + 4096;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827C1AC8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822aaeb0
	ctx.lr = 0x827C1AF0;
	sub_822AAEB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827c1b1c
	if (!ctx.cr6.eq) goto loc_827C1B1C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32117
	ctx.r10.s64 = -2104819712;
	// addi r11,r11,-21324
	ctx.r11.s64 = ctx.r11.s64 + -21324;
	// stw r11,-21496(r10)
	REX_STORE_U32(ctx.r10.u32 + -21496, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827C1B1C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827C5390) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e3604
	ctx.lr = 0x827C5398;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// add r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// srawi r31,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r3.s32 >> 2;
	// bl 0x827c5d68
	ctx.lr = 0x827C53C0;
	sub_827C5D68(ctx, base);
	// cmpwi cr6,r29,512
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 512, ctx.xer);
	// ble cr6,0x827c5444
	if (!ctx.cr6.gt) goto loc_827C5444;
loc_827C53C8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c52b8
	ctx.lr = 0x827C53DC;
	sub_827C52B8(ctx, base);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c5390
	ctx.lr = 0x827C53F4;
	sub_827C5390(ctx, base);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c52b8
	ctx.lr = 0x827C540C;
	sub_827C52B8(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r31,r28
	ctx.r9.u64 = ctx.r28.u64 - ctx.r31.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// srawi r31,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 2;
	// bl 0x827c5d68
	ctx.lr = 0x827C543C;
	sub_827C5D68(ctx, base);
	// cmpwi cr6,r29,512
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 512, ctx.xer);
	// bgt cr6,0x827c53c8
	if (ctx.cr6.gt) goto loc_827C53C8;
loc_827C5444:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827c5728
	ctx.lr = 0x827C5458;
	sub_827C5728(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825e3654
	__restgprlr_27(ctx, base);
	return;
}

