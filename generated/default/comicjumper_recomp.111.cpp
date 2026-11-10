#include "comicjumper_funcs.111.h"

DEFINE_REX_FUNC(sub_82127628) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e360c
	ctx.lr = 0x82127630;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82127654
	if (ctx.cr6.eq) goto loc_82127654;
	// lwz r11,672(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 672);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r9,672(r3)
	REX_STORE_U32(ctx.r3.u32 + 672, ctx.r9.u32);
loc_82127654:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82127698
	if (ctx.cr6.eq) goto loc_82127698;
	// lwz r31,112(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82127698
	if (ctx.cr6.eq) goto loc_82127698;
loc_82127668:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212768c
	if (ctx.cr6.eq) goto loc_8212768C;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212768c
	if (ctx.cr6.eq) goto loc_8212768C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82127628
	ctx.lr = 0x8212768C;
	sub_82127628(ctx, base);
loc_8212768C:
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82127668
	if (!ctx.cr6.eq) goto loc_82127668;
loc_82127698:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825e365c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82129FA0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// addi r10,r11,-14032
	ctx.r10.s64 = ctx.r11.s64 + -14032;
	// lwz r3,52(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212A120) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// addi r10,r11,-14032
	ctx.r10.s64 = ctx.r11.s64 + -14032;
	// lwz r3,168(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 168);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212A2A0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// addi r10,r11,-14032
	ctx.r10.s64 = ctx.r11.s64 + -14032;
	// lwz r3,268(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 268);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212A530) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,3
	ctx.r11.s64 = 3;
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfd f0,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.f0.u64);
	// stw r11,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212B260) {
	REX_FUNC_PROLOGUE();
	// lwz r11,140(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 140);
	// li r10,3
	ctx.r10.s64 = 3;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// stw r10,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// std r9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stfd f13,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.f13.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212C790) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// bge cr6,0x8212c7c0
	if (!ctx.cr6.lt) goto loc_8212C7C0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8212C7C0:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8212c7e8
	if (ctx.cr6.eq) goto loc_8212C7E8;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x8212c7dc
	if (ctx.cr6.eq) goto loc_8212C7DC;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8212c7ec
	goto loc_8212C7EC;
loc_8212C7DC:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r31,r11,24
	ctx.r31.s64 = ctx.r11.s64 + 24;
	// b 0x8212c7ec
	goto loc_8212C7EC;
loc_8212C7E8:
	// lwz r31,0(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8212C7EC:
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8212c7fc
	if (!ctx.cr6.lt) goto loc_8212C7FC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8212C7FC:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8212c828
	if (ctx.cr6.eq) goto loc_8212C828;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8220d008
	ctx.lr = 0x8212C810;
	sub_8220D008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8212c828
	if (!ctx.cr6.eq) goto loc_8212C828;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,17232
	ctx.r10.s64 = ctx.r11.s64 + 17232;
	// lfd f0,184(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 184);
	// b 0x8212c82c
	goto loc_8212C82C;
loc_8212C828:
	// lfd f0,0(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
loc_8212C82C:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 4, temp.u32);
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

DEFINE_REX_FUNC(sub_82132BF0) {
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
	// bge cr6,0x82132c1c
	if (!ctx.cr6.lt) goto loc_82132C1C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82132C1C:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82132c44
	if (ctx.cr6.eq) goto loc_82132C44;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x82132c38
	if (ctx.cr6.eq) goto loc_82132C38;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82132c48
	goto loc_82132C48;
loc_82132C38:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// b 0x82132c48
	goto loc_82132C48;
loc_82132C44:
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82132C48:
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82132c58
	if (ctx.cr6.lt) goto loc_82132C58;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82132C58:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82132c80
	if (ctx.cr6.eq) goto loc_82132C80;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x82132c74
	if (ctx.cr6.eq) goto loc_82132C74;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82132c84
	goto loc_82132C84;
loc_82132C74:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r11,24
	ctx.r5.s64 = ctx.r11.s64 + 24;
	// b 0x82132c84
	goto loc_82132C84;
loc_82132C80:
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82132C84:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x821afa28
	ctx.lr = 0x82132C8C;
	sub_821AFA28(ctx, base);
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

DEFINE_REX_FUNC(sub_82136950) {
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
	// bge cr6,0x8213697c
	if (!ctx.cr6.lt) goto loc_8213697C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8213697C:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x821369a4
	if (ctx.cr6.eq) goto loc_821369A4;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x82136998
	if (ctx.cr6.eq) goto loc_82136998;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821369a8
	goto loc_821369A8;
loc_82136998:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// b 0x821369a8
	goto loc_821369A8;
loc_821369A4:
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_821369A8:
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x821369b8
	if (ctx.cr6.lt) goto loc_821369B8;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_821369B8:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x821369e0
	if (ctx.cr6.eq) goto loc_821369E0;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x821369d4
	if (ctx.cr6.eq) goto loc_821369D4;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x821369e4
	goto loc_821369E4;
loc_821369D4:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r11,24
	ctx.r5.s64 = ctx.r11.s64 + 24;
	// b 0x821369e4
	goto loc_821369E4;
loc_821369E0:
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_821369E4:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x821b5968
	ctx.lr = 0x821369EC;
	sub_821B5968(ctx, base);
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

DEFINE_REX_FUNC(sub_8213AEE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r6,r11,9688
	ctx.r6.s64 = ctx.r11.s64 + 9688;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// bge cr6,0x8213af08
	if (!ctx.cr6.lt) goto loc_8213AF08;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8213AF08:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8213af30
	if (ctx.cr6.eq) goto loc_8213AF30;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x8213af24
	if (ctx.cr6.eq) goto loc_8213AF24;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x8213af34
	goto loc_8213AF34;
loc_8213AF24:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r11,24
	ctx.r8.s64 = ctx.r11.s64 + 24;
	// b 0x8213af34
	goto loc_8213AF34;
loc_8213AF30:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8213AF34:
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8213af44
	if (ctx.cr6.lt) goto loc_8213AF44;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8213AF44:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8213af6c
	if (ctx.cr6.eq) goto loc_8213AF6C;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x8213af60
	if (ctx.cr6.eq) goto loc_8213AF60;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8213af70
	goto loc_8213AF70;
loc_8213AF60:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// b 0x8213af70
	goto loc_8213AF70;
loc_8213AF6C:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8213AF70:
	// lfs f0,52(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,56(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f12,60(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8213F4A0) {
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
	// blt cr6,0x8213f4bc
	if (ctx.cr6.lt) goto loc_8213F4BC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,9688
	ctx.r11.s64 = ctx.r11.s64 + 9688;
loc_8213F4BC:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8213f4e4
	if (ctx.cr6.eq) goto loc_8213F4E4;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x8213f4d8
	if (ctx.cr6.eq) goto loc_8213F4D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8213f4e8
	goto loc_8213F4E8;
loc_8213F4D8:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// b 0x8213f4e8
	goto loc_8213F4E8;
loc_8213F4E4:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8213F4E8:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16700(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16700);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8213f50c
	if (!ctx.cr6.gt) goto loc_8213F50C;
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8213f510
	if (!ctx.cr6.lt) goto loc_8213F510;
loc_8213F50C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8213F510:
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

DEFINE_REX_FUNC(sub_82144628) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e3600
	ctx.lr = 0x82144630;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,9688
	ctx.r27.s64 = ctx.r11.s64 + 9688;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// bge cr6,0x82144658
	if (!ctx.cr6.lt) goto loc_82144658;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82144658:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82144680
	if (ctx.cr6.eq) goto loc_82144680;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x82144674
	if (ctx.cr6.eq) goto loc_82144674;
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x82144684
	goto loc_82144684;
loc_82144674:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r26,r11,24
	ctx.r26.s64 = ctx.r11.s64 + 24;
	// b 0x82144684
	goto loc_82144684;
loc_82144680:
	// lwz r26,0(r11)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82144684:
	// addi r3,r9,16
	ctx.r3.s64 = ctx.r9.s64 + 16;
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82144694
	if (ctx.cr6.lt) goto loc_82144694;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82144694:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821446b8
	if (ctx.cr6.eq) goto loc_821446B8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8220d008
	ctx.lr = 0x821446A8;
	sub_8220D008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821446b8
	if (!ctx.cr6.eq) goto loc_821446B8;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x821446c8
	goto loc_821446C8;
loc_821446B8:
	// lfd f0,0(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r29,84(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_821446C8:
	// lwz r9,12(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r8,8(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// addi r11,r9,32
	ctx.r11.s64 = ctx.r9.s64 + 32;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x821446e0
	if (ctx.cr6.lt) goto loc_821446E0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_821446E0:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82144708
	if (ctx.cr6.eq) goto loc_82144708;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x821446fc
	if (ctx.cr6.eq) goto loc_821446FC;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8214470c
	goto loc_8214470C;
loc_821446FC:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r30,r11,24
	ctx.r30.s64 = ctx.r11.s64 + 24;
	// b 0x8214470c
	goto loc_8214470C;
loc_82144708:
	// lwz r30,0(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8214470C:
	// addi r3,r9,48
	ctx.r3.s64 = ctx.r9.s64 + 48;
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8214471c
	if (ctx.cr6.lt) goto loc_8214471C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8214471C:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82144740
	if (ctx.cr6.eq) goto loc_82144740;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8220d008
	ctx.lr = 0x82144730;
	sub_8220D008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82144740
	if (!ctx.cr6.eq) goto loc_82144740;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82144750
	goto loc_82144750;
loc_82144740:
	// lfd f0,0(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82144750:
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82144768
	if (ctx.cr6.lt) goto loc_82144768;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82144768:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8214478c
	if (ctx.cr6.eq) goto loc_8214478C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8220d008
	ctx.lr = 0x8214477C;
	sub_8220D008(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8214478c
	if (!ctx.cr6.eq) goto loc_8214478C;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8214479c
	goto loc_8214479C;
loc_8214478C:
	// lfd f0,0(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8214479C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x821447d0
	if (ctx.cr6.lt) goto loc_821447D0;
	// lwz r11,32(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 32);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821447d0
	if (!ctx.cr6.lt) goto loc_821447D0;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,12(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x821f8a08
	ctx.lr = 0x821447D0;
	sub_821F8A08(ctx, base);
loc_821447D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x825e3650
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82150BE0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r6,r11,9688
	ctx.r6.s64 = ctx.r11.s64 + 9688;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// bge cr6,0x82150c00
	if (!ctx.cr6.lt) goto loc_82150C00;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82150C00:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82150c28
	if (ctx.cr6.eq) goto loc_82150C28;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x82150c1c
	if (ctx.cr6.eq) goto loc_82150C1C;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82150c2c
	goto loc_82150C2C;
loc_82150C1C:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// b 0x82150c2c
	goto loc_82150C2C;
loc_82150C28:
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82150C2C:
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82150c3c
	if (ctx.cr6.lt) goto loc_82150C3C;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82150C3C:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82150c64
	if (ctx.cr6.eq) goto loc_82150C64;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x82150c58
	if (ctx.cr6.eq) goto loc_82150C58;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82150c68
	goto loc_82150C68;
loc_82150C58:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// b 0x82150c68
	goto loc_82150C68;
loc_82150C64:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82150C68:
	// lwz r11,44(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82150cb8
	if (ctx.cr6.eq) goto loc_82150CB8;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82150c98
	if (!ctx.cr6.eq) goto loc_82150C98;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// blr 
	return;
loc_82150C98:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82150cb8
	if (ctx.cr6.eq) goto loc_82150CB8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
loc_82150CB8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82157420) {
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
	// addi r7,r11,9688
	ctx.r7.s64 = ctx.r11.s64 + 9688;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// bge cr6,0x82157450
	if (!ctx.cr6.lt) goto loc_82157450;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82157450:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82157478
	if (ctx.cr6.eq) goto loc_82157478;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x8215746c
	if (ctx.cr6.eq) goto loc_8215746C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8215747c
	goto loc_8215747C;
loc_8215746C:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// b 0x8215747c
	goto loc_8215747C;
loc_82157478:
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8215747C:
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8215748c
	if (ctx.cr6.lt) goto loc_8215748C;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8215748C:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x821574b4
	if (ctx.cr6.eq) goto loc_821574B4;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x821574a8
	if (ctx.cr6.eq) goto loc_821574A8;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x821574b8
	goto loc_821574B8;
loc_821574A8:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r31,r11,24
	ctx.r31.s64 = ctx.r11.s64 + 24;
	// b 0x821574b8
	goto loc_821574B8;
loc_821574B4:
	// lwz r31,0(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_821574B8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821d0d30
	ctx.lr = 0x821574C0;
	sub_821D0D30(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x821f97e8
	ctx.lr = 0x821574D0;
	sub_821F97E8(ctx, base);
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

DEFINE_REX_FUNC(sub_8215CC40) {
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
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,9688
	ctx.r30.s64 = ctx.r11.s64 + 9688;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8215cc78
	if (ctx.cr6.lt) goto loc_8215CC78;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8215CC78:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8215cc90
	if (ctx.cr6.eq) goto loc_8215CC90;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8220d008
	ctx.lr = 0x8215CC90;
	sub_8220D008(ctx, base);
loc_8215CC90:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8215cca8
	if (ctx.cr6.lt) goto loc_8215CCA8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8215CCA8:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8215ccc0
	if (ctx.cr6.eq) goto loc_8215CCC0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8220d008
	ctx.lr = 0x8215CCC0;
	sub_8220D008(ctx, base);
loc_8215CCC0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8215ccd8
	if (ctx.cr6.lt) goto loc_8215CCD8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8215CCD8:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8215ccf0
	if (ctx.cr6.eq) goto loc_8215CCF0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8220d008
	ctx.lr = 0x8215CCF0;
	sub_8220D008(ctx, base);
loc_8215CCF0:
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

DEFINE_REX_FUNC(sub_82163240) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8216325c
	if (ctx.cr6.lt) goto loc_8216325C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,9688
	ctx.r11.s64 = ctx.r11.s64 + 9688;
loc_8216325C:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82163284
	if (ctx.cr6.eq) goto loc_82163284;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x82163278
	if (ctx.cr6.eq) goto loc_82163278;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82163288
	goto loc_82163288;
loc_82163278:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// b 0x82163288
	goto loc_82163288;
loc_82163284:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82163288:
	// lwz r11,800(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 800);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// subfe r6,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r6,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// stw r5,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82166A48) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e360c
	ctx.lr = 0x82166A50;
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
	// addi r30,r11,9688
	ctx.r30.s64 = ctx.r11.s64 + 9688;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bge cr6,0x82166a78
	if (!ctx.cr6.lt) goto loc_82166A78;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82166A78:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82166aa0
	if (ctx.cr6.eq) goto loc_82166AA0;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x82166a94
	if (ctx.cr6.eq) goto loc_82166A94;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82166aa4
	goto loc_82166AA4;
loc_82166A94:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r29,r11,24
	ctx.r29.s64 = ctx.r11.s64 + 24;
	// b 0x82166aa4
	goto loc_82166AA4;
loc_82166AA0:
	// lwz r29,0(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82166AA4:
	// addi r4,r9,16
	ctx.r4.s64 = ctx.r9.s64 + 16;
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82166ab4
	if (ctx.cr6.lt) goto loc_82166AB4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82166AB4:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82166b0c
	if (ctx.cr6.eq) goto loc_82166B0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220d088
	ctx.lr = 0x82166AC8;
	sub_8220D088(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82166ad8
	if (!ctx.cr6.eq) goto loc_82166AD8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82166b14
	goto loc_82166B14;
loc_82166AD8:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r9,76(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82166af4
	if (ctx.cr6.lt) goto loc_82166AF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220cd80
	ctx.lr = 0x82166AF4;
	sub_8220CD80(ctx, base);
loc_82166AF4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82166b0c
	if (ctx.cr6.lt) goto loc_82166B0C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82166B0C:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
loc_82166B14:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82166b2c
	if (ctx.cr6.lt) goto loc_82166B2C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82166B2C:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82166b74
	if (ctx.cr6.eq) goto loc_82166B74;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x82166b58
	if (ctx.cr6.eq) goto loc_82166B58;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821af2a8
	ctx.lr = 0x82166B4C;
	sub_821AF2A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825e365c
	__restgprlr_29(ctx, base);
	return;
loc_82166B58:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r11,24
	ctx.r5.s64 = ctx.r11.s64 + 24;
	// bl 0x821af2a8
	ctx.lr = 0x82166B68;
	sub_821AF2A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825e365c
	__restgprlr_29(ctx, base);
	return;
loc_82166B74:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821af2a8
	ctx.lr = 0x82166B80;
	sub_821AF2A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825e365c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8216EDD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35d0
	ctx.lr = 0x8216EDD8;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r19,-32118
	ctx.r19.s64 = -2104885248;
	// lis r11,20
	ctx.r11.s64 = 1310720;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// ori r24,r11,13852
	ctx.r24.u64 = ctx.r11.u64 | 13852;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,30956(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 30956);
	// addi r4,r10,20272
	ctx.r4.s64 = ctx.r10.s64 + 20272;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x8219be30
	ctx.lr = 0x8216EE04;
	sub_8219BE30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r9,4095
	ctx.r9.s64 = 268369920;
	// addi r14,r11,16688
	ctx.r14.s64 = ctx.r11.s64 + 16688;
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r25,r9,65535
	ctx.r25.u64 = ctx.r9.u64 | 65535;
	// lfs f31,12(r14)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r14.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// li r29,-5
	ctx.r29.s64 = -5;
	// li r15,-1
	ctx.r15.s64 = -1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r23,r11,30000
	ctx.r23.s64 = ctx.r11.s64 + 30000;
	// addi r22,r10,30408
	ctx.r22.s64 = ctx.r10.s64 + 30408;
	// beq cr6,0x8216eed0
	if (ctx.cr6.eq) goto loc_8216EED0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8216eed0
	if (!ctx.cr6.gt) goto loc_8216EED0;
	// stw r26,20(r22)
	REX_STORE_U32(ctx.r22.u32 + 20, ctx.r26.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// stw r31,20(r23)
	REX_STORE_U32(ctx.r23.u32 + 20, ctx.r31.u32);
	// bgt cr6,0x8216ee70
	if (ctx.cr6.gt) goto loc_8216EE70;
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x8216ee74
	if (!ctx.cr6.gt) goto loc_8216EE74;
loc_8216EE70:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_8216EE74:
	// bl 0x822a5ce0
	ctx.lr = 0x8216EE78;
	sub_822A5CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216eec4
	if (ctx.cr6.eq) goto loc_8216EEC4;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// blt 0x8216eeb8
	if (ctx.cr0.lt) goto loc_8216EEB8;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r10,r10,-12232
	ctx.r10.s64 = ctx.r10.s64 + -12232;
loc_8216EEA4:
	// stfs f31,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stfs f31,12(r11)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stwu r26,16(r11)
	ea = 16 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r26.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8216eea4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216EEA4;
loc_8216EEB8:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r9,30404(r11)
	REX_STORE_U32(ctx.r11.u32 + 30404, ctx.r9.u32);
	// b 0x8216eed0
	goto loc_8216EED0;
loc_8216EEC4:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,30404(r10)
	REX_STORE_U32(ctx.r10.u32 + 30404, ctx.r26.u32);
loc_8216EED0:
	// lwz r11,30956(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 30956);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,20304
	ctx.r4.s64 = ctx.r10.s64 + 20304;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x8219be30
	ctx.lr = 0x8216EEE8;
	sub_8219BE30(ctx, base);
	// lis r9,5461
	ctx.r9.s64 = 357892096;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ori r16,r9,21845
	ctx.r16.u64 = ctx.r9.u64 | 21845;
	// beq cr6,0x8216ef78
	if (ctx.cr6.eq) goto loc_8216EF78;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8216ef78
	if (!ctx.cr6.gt) goto loc_8216EF78;
	// stw r26,28(r22)
	REX_STORE_U32(ctx.r22.u32 + 28, ctx.r26.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r16.u32, ctx.xer);
	// stw r31,28(r23)
	REX_STORE_U32(ctx.r23.u32 + 28, ctx.r31.u32);
	// bgt cr6,0x8216ef2c
	if (ctx.cr6.gt) goto loc_8216EF2C;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x8216ef30
	goto loc_8216EF30;
loc_8216EF2C:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_8216EF30:
	// bl 0x822a5ce0
	ctx.lr = 0x8216EF34;
	sub_822A5CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216ef6c
	if (ctx.cr6.eq) goto loc_8216EF6C;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8216ef60
	if (ctx.cr0.lt) goto loc_8216EF60;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-12
	ctx.r11.s64 = ctx.r3.s64 + -12;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r10,r10,12400
	ctx.r10.s64 = ctx.r10.s64 + 12400;
loc_8216EF58:
	// stwu r10,12(r11)
	ea = 12 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8216ef58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216EF58;
loc_8216EF60:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r3,30812(r11)
	REX_STORE_U32(ctx.r11.u32 + 30812, ctx.r3.u32);
	// b 0x8216ef78
	goto loc_8216EF78;
loc_8216EF6C:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,30812(r10)
	REX_STORE_U32(ctx.r10.u32 + 30812, ctx.r26.u32);
loc_8216EF78:
	// lwz r11,30956(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 30956);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,20332
	ctx.r4.s64 = ctx.r10.s64 + 20332;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x8219be30
	ctx.lr = 0x8216EF90;
	sub_8219BE30(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r20,r11,-740
	ctx.r20.s64 = ctx.r11.s64 + -740;
	// beq cr6,0x8216f00c
	if (ctx.cr6.eq) goto loc_8216F00C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8216f00c
	if (!ctx.cr6.gt) goto loc_8216F00C;
	// stw r26,32(r22)
	REX_STORE_U32(ctx.r22.u32 + 32, ctx.r26.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// rlwinm r3,r31,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r31,32(r23)
	REX_STORE_U32(ctx.r23.u32 + 32, ctx.r31.u32);
	// ble cr6,0x8216efcc
	if (!ctx.cr6.gt) goto loc_8216EFCC;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_8216EFCC:
	// bl 0x822a5ce0
	ctx.lr = 0x8216EFD0;
	sub_822A5CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216f000
	if (ctx.cr6.eq) goto loc_8216F000;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8216eff4
	if (ctx.cr0.lt) goto loc_8216EFF4;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-16
	ctx.r11.s64 = ctx.r3.s64 + -16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8216EFEC:
	// stwu r20,16(r11)
	ea = 16 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r20.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8216efec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216EFEC;
loc_8216EFF4:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r3,30816(r11)
	REX_STORE_U32(ctx.r11.u32 + 30816, ctx.r3.u32);
	// b 0x8216f00c
	goto loc_8216F00C;
loc_8216F000:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,30816(r10)
	REX_STORE_U32(ctx.r10.u32 + 30816, ctx.r26.u32);
loc_8216F00C:
	// lwz r11,30956(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 30956);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,20360
	ctx.r4.s64 = ctx.r10.s64 + 20360;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x8219be30
	ctx.lr = 0x8216F024;
	sub_8219BE30(ctx, base);
	// lis r9,3276
	ctx.r9.s64 = 214695936;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ori r17,r9,52428
	ctx.r17.u64 = ctx.r9.u64 | 52428;
	// beq cr6,0x8216f0b4
	if (ctx.cr6.eq) goto loc_8216F0B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8216f0b4
	if (!ctx.cr6.gt) goto loc_8216F0B4;
	// stw r26,36(r22)
	REX_STORE_U32(ctx.r22.u32 + 36, ctx.r26.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r17
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r17.u32, ctx.xer);
	// stw r31,36(r23)
	REX_STORE_U32(ctx.r23.u32 + 36, ctx.r31.u32);
	// bgt cr6,0x8216f068
	if (ctx.cr6.gt) goto loc_8216F068;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x8216f06c
	goto loc_8216F06C;
loc_8216F068:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_8216F06C:
	// bl 0x822a5ce0
	ctx.lr = 0x8216F070;
	sub_822A5CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216f0a8
	if (ctx.cr6.eq) goto loc_8216F0A8;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8216f09c
	if (ctx.cr0.lt) goto loc_8216F09C;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-20
	ctx.r11.s64 = ctx.r3.s64 + -20;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r10,r10,12408
	ctx.r10.s64 = ctx.r10.s64 + 12408;
loc_8216F094:
	// stwu r10,20(r11)
	ea = 20 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8216f094
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216F094;
loc_8216F09C:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r3,30820(r11)
	REX_STORE_U32(ctx.r11.u32 + 30820, ctx.r3.u32);
	// b 0x8216f0b4
	goto loc_8216F0B4;
loc_8216F0A8:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,30820(r10)
	REX_STORE_U32(ctx.r10.u32 + 30820, ctx.r26.u32);
loc_8216F0B4:
	// lwz r11,30956(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 30956);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,20388
	ctx.r4.s64 = ctx.r10.s64 + 20388;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x8219be30
	ctx.lr = 0x8216F0CC;
	sub_8219BE30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216f160
	if (ctx.cr6.eq) goto loc_8216F160;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8216f160
	if (!ctx.cr6.gt) goto loc_8216F160;
	// lis r10,2730
	ctx.r10.s64 = 178913280;
	// stw r26,40(r22)
	REX_STORE_U32(ctx.r22.u32 + 40, ctx.r26.u32);
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// ori r9,r10,43690
	ctx.r9.u64 = ctx.r10.u64 | 43690;
	// stw r31,40(r23)
	REX_STORE_U32(ctx.r23.u32 + 40, ctx.r31.u32);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8216f110
	if (ctx.cr6.gt) goto loc_8216F110;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x8216f114
	goto loc_8216F114;
loc_8216F110:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_8216F114:
	// bl 0x822a5ce0
	ctx.lr = 0x8216F118;
	sub_822A5CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216f154
	if (ctx.cr6.eq) goto loc_8216F154;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8216f148
	if (ctx.cr0.lt) goto loc_8216F148;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-20
	ctx.r11.s64 = ctx.r3.s64 + -20;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
loc_8216F13C:
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stwu r20,24(r11)
	ea = 24 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r20.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8216f13c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216F13C;
loc_8216F148:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r3,30824(r11)
	REX_STORE_U32(ctx.r11.u32 + 30824, ctx.r3.u32);
	// b 0x8216f160
	goto loc_8216F160;
loc_8216F154:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,30824(r10)
	REX_STORE_U32(ctx.r10.u32 + 30824, ctx.r26.u32);
loc_8216F160:
	// lwz r11,30956(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 30956);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,20412
	ctx.r4.s64 = ctx.r10.s64 + 20412;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x8219be30
	ctx.lr = 0x8216F178;
	sub_8219BE30(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r21,r11,-112
	ctx.r21.s64 = ctx.r11.s64 + -112;
	// beq cr6,0x8216f200
	if (ctx.cr6.eq) goto loc_8216F200;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8216f200
	if (!ctx.cr6.gt) goto loc_8216F200;
	// stw r26,44(r22)
	REX_STORE_U32(ctx.r22.u32 + 44, ctx.r26.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r17
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r17.u32, ctx.xer);
	// stw r31,44(r23)
	REX_STORE_U32(ctx.r23.u32 + 44, ctx.r31.u32);
	// bgt cr6,0x8216f1bc
	if (ctx.cr6.gt) goto loc_8216F1BC;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x8216f1c0
	goto loc_8216F1C0;
loc_8216F1BC:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_8216F1C0:
	// bl 0x822a5ce0
	ctx.lr = 0x8216F1C4;
	sub_822A5CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216f1f4
	if (ctx.cr6.eq) goto loc_8216F1F4;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8216f1e8
	if (ctx.cr0.lt) goto loc_8216F1E8;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-20
	ctx.r11.s64 = ctx.r3.s64 + -20;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8216F1E0:
	// stwu r21,20(r11)
	ea = 20 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r21.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8216f1e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216F1E0;
loc_8216F1E8:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r3,30828(r11)
	REX_STORE_U32(ctx.r11.u32 + 30828, ctx.r3.u32);
	// b 0x8216f200
	goto loc_8216F200;
loc_8216F1F4:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,30828(r10)
	REX_STORE_U32(ctx.r10.u32 + 30828, ctx.r26.u32);
loc_8216F200:
	// lwz r11,30956(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 30956);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,20440
	ctx.r4.s64 = ctx.r10.s64 + 20440;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x8219be30
	ctx.lr = 0x8216F218;
	sub_8219BE30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216f29c
	if (ctx.cr6.eq) goto loc_8216F29C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8216f29c
	if (!ctx.cr6.gt) goto loc_8216F29C;
	// stw r26,48(r22)
	REX_STORE_U32(ctx.r22.u32 + 48, ctx.r26.u32);
	// lis r10,963
	ctx.r10.s64 = 63111168;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// ori r9,r10,50115
	ctx.r9.u64 = ctx.r10.u64 | 50115;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// mulli r3,r31,68
	ctx.r3.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(68));
	// stw r31,48(r23)
	REX_STORE_U32(ctx.r23.u32 + 48, ctx.r31.u32);
	// ble cr6,0x8216f254
	if (!ctx.cr6.gt) goto loc_8216F254;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_8216F254:
	// bl 0x822a5ce0
	ctx.lr = 0x8216F258;
	sub_822A5CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216f290
	if (ctx.cr6.eq) goto loc_8216F290;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8216f284
	if (ctx.cr0.lt) goto loc_8216F284;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-68
	ctx.r11.s64 = ctx.r3.s64 + -68;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r10,r10,-148
	ctx.r10.s64 = ctx.r10.s64 + -148;
loc_8216F27C:
	// stwu r10,68(r11)
	ea = 68 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8216f27c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216F27C;
loc_8216F284:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r3,30832(r11)
	REX_STORE_U32(ctx.r11.u32 + 30832, ctx.r3.u32);
	// b 0x8216f29c
	goto loc_8216F29C;
loc_8216F290:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,30832(r10)
	REX_STORE_U32(ctx.r10.u32 + 30832, ctx.r26.u32);
loc_8216F29C:
	// lwz r11,30956(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 30956);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,20464
	ctx.r4.s64 = ctx.r10.s64 + 20464;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x8219be30
	ctx.lr = 0x8216F2B4;
	sub_8219BE30(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,12488
	ctx.r30.s64 = ctx.r11.s64 + 12488;
	// beq cr6,0x8216f370
	if (ctx.cr6.eq) goto loc_8216F370;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8216f370
	if (!ctx.cr6.gt) goto loc_8216F370;
	// stw r26,60(r22)
	REX_STORE_U32(ctx.r22.u32 + 60, ctx.r26.u32);
	// lis r10,159
	ctx.r10.s64 = 10420224;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// ori r9,r10,4453
	ctx.r9.u64 = ctx.r10.u64 | 4453;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// mulli r3,r31,412
	ctx.r3.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(412));
	// stw r31,60(r23)
	REX_STORE_U32(ctx.r23.u32 + 60, ctx.r31.u32);
	// ble cr6,0x8216f2fc
	if (!ctx.cr6.gt) goto loc_8216F2FC;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_8216F2FC:
	// bl 0x822a5ce0
	ctx.lr = 0x8216F300;
	sub_822A5CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216f364
	if (ctx.cr6.eq) goto loc_8216F364;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8216f358
	if (ctx.cr0.lt) goto loc_8216F358;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r11,r3,-128
	ctx.r11.s64 = ctx.r3.s64 + -128;
	// addi r9,r9,12524
	ctx.r9.s64 = ctx.r9.s64 + 12524;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r10,r10,12540
	ctx.r10.s64 = ctx.r10.s64 + 12540;
loc_8216F32C:
	// stw r30,132(r11)
	REX_STORE_U32(ctx.r11.u32 + 132, ctx.r30.u32);
	// stb r26,136(r11)
	REX_STORE_U8(ctx.r11.u32 + 136, ctx.r26.u8);
	// stw r27,392(r11)
	REX_STORE_U32(ctx.r11.u32 + 392, ctx.r27.u32);
	// stw r26,396(r11)
	REX_STORE_U32(ctx.r11.u32 + 396, ctx.r26.u32);
	// stw r26,400(r11)
	REX_STORE_U32(ctx.r11.u32 + 400, ctx.r26.u32);
	// stw r26,404(r11)
	REX_STORE_U32(ctx.r11.u32 + 404, ctx.r26.u32);
	// stw r9,128(r11)
	REX_STORE_U32(ctx.r11.u32 + 128, ctx.r9.u32);
	// stw r10,132(r11)
	REX_STORE_U32(ctx.r11.u32 + 132, ctx.r10.u32);
	// stw r26,408(r11)
	REX_STORE_U32(ctx.r11.u32 + 408, ctx.r26.u32);
	// stbu r26,412(r11)
	ea = 412 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r26.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8216f32c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216F32C;
loc_8216F358:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r3,30836(r11)
	REX_STORE_U32(ctx.r11.u32 + 30836, ctx.r3.u32);
	// b 0x8216f370
	goto loc_8216F370;
loc_8216F364:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,30836(r10)
	REX_STORE_U32(ctx.r10.u32 + 30836, ctx.r26.u32);
loc_8216F370:
	// lwz r11,30956(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 30956);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,20500
	ctx.r4.s64 = ctx.r10.s64 + 20500;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x8219be30
	ctx.lr = 0x8216F388;
	sub_8219BE30(ctx, base);
	// li r18,-1
	ctx.r18.s64 = -1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216f444
	if (ctx.cr6.eq) goto loc_8216F444;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8216f444
	if (!ctx.cr6.gt) goto loc_8216F444;
	// stw r26,64(r22)
	REX_STORE_U32(ctx.r22.u32 + 64, ctx.r26.u32);
	// lis r10,97
	ctx.r10.s64 = 6356992;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// ori r9,r10,34328
	ctx.r9.u64 = ctx.r10.u64 | 34328;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// mulli r3,r31,672
	ctx.r3.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(672));
	// stw r31,64(r23)
	REX_STORE_U32(ctx.r23.u32 + 64, ctx.r31.u32);
	// ble cr6,0x8216f3c8
	if (!ctx.cr6.gt) goto loc_8216F3C8;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_8216F3C8:
	// bl 0x822a5ce0
	ctx.lr = 0x8216F3CC;
	sub_822A5CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216f438
	if (ctx.cr6.eq) goto loc_8216F438;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8216f42c
	if (ctx.cr0.lt) goto loc_8216F42C;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// addi r9,r9,12576
	ctx.r9.s64 = ctx.r9.s64 + 12576;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r10,r10,12592
	ctx.r10.s64 = ctx.r10.s64 + 12592;
loc_8216F3F8:
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stb r26,12(r11)
	REX_STORE_U8(ctx.r11.u32 + 12, ctx.r26.u8);
	// stw r27,268(r11)
	REX_STORE_U32(ctx.r11.u32 + 268, ctx.r27.u32);
	// stw r26,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r26.u32);
	// stw r26,276(r11)
	REX_STORE_U32(ctx.r11.u32 + 276, ctx.r26.u32);
	// stw r26,280(r11)
	REX_STORE_U32(ctx.r11.u32 + 280, ctx.r26.u32);
	// stw r26,284(r11)
	REX_STORE_U32(ctx.r11.u32 + 284, ctx.r26.u32);
	// stb r26,288(r11)
	REX_STORE_U8(ctx.r11.u32 + 288, ctx.r26.u8);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stb r26,416(r11)
	REX_STORE_U8(ctx.r11.u32 + 416, ctx.r26.u8);
	// stwu r18,672(r11)
	ea = 672 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r18.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8216f3f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216F3F8;
loc_8216F42C:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r3,30840(r11)
	REX_STORE_U32(ctx.r11.u32 + 30840, ctx.r3.u32);
	// b 0x8216f444
	goto loc_8216F444;
loc_8216F438:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,30840(r10)
	REX_STORE_U32(ctx.r10.u32 + 30840, ctx.r26.u32);
loc_8216F444:
	// lwz r11,30956(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 30956);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,20552
	ctx.r4.s64 = ctx.r10.s64 + 20552;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x8219be30
	ctx.lr = 0x8216F45C;
	sub_8219BE30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216f4ec
	if (ctx.cr6.eq) goto loc_8216F4EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8216f4ec
	if (!ctx.cr6.gt) goto loc_8216F4EC;
	// stw r26,88(r22)
	REX_STORE_U32(ctx.r22.u32 + 88, ctx.r26.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r16.u32, ctx.xer);
	// stw r31,88(r23)
	REX_STORE_U32(ctx.r23.u32 + 88, ctx.r31.u32);
	// bgt cr6,0x8216f498
	if (ctx.cr6.gt) goto loc_8216F498;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x8216f49c
	goto loc_8216F49C;
loc_8216F498:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_8216F49C:
	// bl 0x822a5ce0
	ctx.lr = 0x8216F4A0;
	sub_822A5CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216f4e0
	if (ctx.cr6.eq) goto loc_8216F4E0;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8216f4d4
	if (ctx.cr0.lt) goto loc_8216F4D4;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r10,r10,-11900
	ctx.r10.s64 = ctx.r10.s64 + -11900;
loc_8216F4C4:
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r26,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
	// stwu r26,12(r11)
	ea = 12 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r26.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8216f4c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216F4C4;
loc_8216F4D4:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r3,30844(r11)
	REX_STORE_U32(ctx.r11.u32 + 30844, ctx.r3.u32);
	// b 0x8216f4ec
	goto loc_8216F4EC;
loc_8216F4E0:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,30844(r10)
	REX_STORE_U32(ctx.r10.u32 + 30844, ctx.r26.u32);
loc_8216F4EC:
	// lwz r11,30956(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 30956);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,20584
	ctx.r4.s64 = ctx.r10.s64 + 20584;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x8219be30
	ctx.lr = 0x8216F504;
	sub_8219BE30(ctx, base);
	// lis r9,8191
	ctx.r9.s64 = 536805376;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ori r30,r9,65535
	ctx.r30.u64 = ctx.r9.u64 | 65535;
	// beq cr6,0x8216f58c
	if (ctx.cr6.eq) goto loc_8216F58C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8216f58c
	if (!ctx.cr6.gt) goto loc_8216F58C;
	// stw r26,92(r22)
	REX_STORE_U32(ctx.r22.u32 + 92, ctx.r26.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r31,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r31,92(r23)
	REX_STORE_U32(ctx.r23.u32 + 92, ctx.r31.u32);
	// ble cr6,0x8216f540
	if (!ctx.cr6.gt) goto loc_8216F540;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_8216F540:
	// bl 0x822a5ce0
	ctx.lr = 0x8216F544;
	sub_822A5CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216f580
	if (ctx.cr6.eq) goto loc_8216F580;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8216f574
	if (ctx.cr0.lt) goto loc_8216F574;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r10,r10,-11892
	ctx.r10.s64 = ctx.r10.s64 + -11892;
loc_8216F568:
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stwu r26,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r26.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8216f568
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216F568;
loc_8216F574:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r3,30848(r11)
	REX_STORE_U32(ctx.r11.u32 + 30848, ctx.r3.u32);
	// b 0x8216f58c
	goto loc_8216F58C;
loc_8216F580:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,30848(r10)
	REX_STORE_U32(ctx.r10.u32 + 30848, ctx.r26.u32);
loc_8216F58C:
	// lwz r11,30956(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 30956);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,20620
	ctx.r4.s64 = ctx.r10.s64 + 20620;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x8219be30
	ctx.lr = 0x8216F5A4;
	sub_8219BE30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216f624
	if (ctx.cr6.eq) goto loc_8216F624;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8216f624
	if (!ctx.cr6.gt) goto loc_8216F624;
	// stw r26,140(r22)
	REX_STORE_U32(ctx.r22.u32 + 140, ctx.r26.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r31,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r31,140(r23)
	REX_STORE_U32(ctx.r23.u32 + 140, ctx.r31.u32);
	// ble cr6,0x8216f5d8
	if (!ctx.cr6.gt) goto loc_8216F5D8;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_8216F5D8:
	// bl 0x822a5ce0
	ctx.lr = 0x8216F5DC;
	sub_822A5CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216f618
	if (ctx.cr6.eq) goto loc_8216F618;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8216f60c
	if (ctx.cr0.lt) goto loc_8216F60C;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r10,r10,19672
	ctx.r10.s64 = ctx.r10.s64 + 19672;
loc_8216F600:
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stwu r15,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r15.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8216f600
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216F600;
loc_8216F60C:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r3,30852(r11)
	REX_STORE_U32(ctx.r11.u32 + 30852, ctx.r3.u32);
	// b 0x8216f624
	goto loc_8216F624;
loc_8216F618:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,30852(r10)
	REX_STORE_U32(ctx.r10.u32 + 30852, ctx.r26.u32);
loc_8216F624:
	// lwz r11,30956(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 30956);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,20644
	ctx.r4.s64 = ctx.r10.s64 + 20644;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x8219be30
	ctx.lr = 0x8216F63C;
	sub_8219BE30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216f6d0
	if (ctx.cr6.eq) goto loc_8216F6D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8216f6d0
	if (!ctx.cr6.gt) goto loc_8216F6D0;
	// stw r26,196(r22)
	REX_STORE_U32(ctx.r22.u32 + 196, ctx.r26.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// stw r31,196(r23)
	REX_STORE_U32(ctx.r23.u32 + 196, ctx.r31.u32);
	// bgt cr6,0x8216f678
	if (ctx.cr6.gt) goto loc_8216F678;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x8216f67c
	if (!ctx.cr6.gt) goto loc_8216F67C;
loc_8216F678:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_8216F67C:
	// bl 0x822a5ce0
	ctx.lr = 0x8216F680;
	sub_822A5CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216f6c4
	if (ctx.cr6.eq) goto loc_8216F6C4;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// blt 0x8216f6b8
	if (ctx.cr0.lt) goto loc_8216F6B8;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r10,r10,11076
	ctx.r10.s64 = ctx.r10.s64 + 11076;
loc_8216F6AC:
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stwu r26,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r26.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8216f6ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216F6AC;
loc_8216F6B8:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r9,30856(r11)
	REX_STORE_U32(ctx.r11.u32 + 30856, ctx.r9.u32);
	// b 0x8216f6d0
	goto loc_8216F6D0;
loc_8216F6C4:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,30856(r10)
	REX_STORE_U32(ctx.r10.u32 + 30856, ctx.r26.u32);
loc_8216F6D0:
	// lwz r11,30956(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 30956);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,20672
	ctx.r4.s64 = ctx.r10.s64 + 20672;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x8219be30
	ctx.lr = 0x8216F6E8;
	sub_8219BE30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216f784
	if (ctx.cr6.eq) goto loc_8216F784;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8216f784
	if (!ctx.cr6.gt) goto loc_8216F784;
	// lis r10,63
	ctx.r10.s64 = 4128768;
	// stw r26,204(r22)
	REX_STORE_U32(ctx.r22.u32 + 204, ctx.r26.u32);
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// ori r9,r10,49215
	ctx.r9.u64 = ctx.r10.u64 | 49215;
	// stw r31,204(r23)
	REX_STORE_U32(ctx.r23.u32 + 204, ctx.r31.u32);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// mulli r3,r31,1028
	ctx.r3.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(1028));
	// ble cr6,0x8216f724
	if (!ctx.cr6.gt) goto loc_8216F724;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_8216F724:
	// bl 0x822a5ce0
	ctx.lr = 0x8216F728;
	sub_822A5CE0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216f778
	if (ctx.cr6.eq) goto loc_8216F778;
	// addic. r30,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r30.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8216f76c
	if (ctx.cr0.lt) goto loc_8216F76C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r31,r3,1024
	ctx.r31.s64 = ctx.r3.s64 + 1024;
	// addi r29,r11,-356
	ctx.r29.s64 = ctx.r11.s64 + -356;
loc_8216F748:
	// li r5,1020
	ctx.r5.s64 = 1020;
	// stw r29,-1024(r31)
	REX_STORE_U32(ctx.r31.u32 + -1024, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,-1020
	ctx.r3.s64 = ctx.r31.s64 + -1020;
	// bl 0x825e3710
	ctx.lr = 0x8216F75C;
	sub_825E3710(ctx, base);
	// stw r26,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,1028
	ctx.r31.s64 = ctx.r31.s64 + 1028;
	// bge 0x8216f748
	if (!ctx.cr0.lt) goto loc_8216F748;
loc_8216F76C:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r28,30860(r11)
	REX_STORE_U32(ctx.r11.u32 + 30860, ctx.r28.u32);
	// b 0x8216f784
	goto loc_8216F784;
loc_8216F778:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,30860(r10)
	REX_STORE_U32(ctx.r10.u32 + 30860, ctx.r26.u32);
loc_8216F784:
	// lwz r11,30956(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 30956);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,20704
	ctx.r4.s64 = ctx.r10.s64 + 20704;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x8219be30
	ctx.lr = 0x8216F79C;
	sub_8219BE30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216f82c
	if (ctx.cr6.eq) goto loc_8216F82C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8216f82c
	if (!ctx.cr6.gt) goto loc_8216F82C;
	// stw r26,224(r22)
	REX_STORE_U32(ctx.r22.u32 + 224, ctx.r26.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r16.u32, ctx.xer);
	// stw r31,224(r23)
	REX_STORE_U32(ctx.r23.u32 + 224, ctx.r31.u32);
	// bgt cr6,0x8216f7d8
	if (ctx.cr6.gt) goto loc_8216F7D8;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x8216f7dc
	goto loc_8216F7DC;
loc_8216F7D8:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_8216F7DC:
	// bl 0x822a5ce0
	ctx.lr = 0x8216F7E0;
	sub_822A5CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216f820
	if (ctx.cr6.eq) goto loc_8216F820;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8216f814
	if (ctx.cr0.lt) goto loc_8216F814;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r10,r10,19712
	ctx.r10.s64 = ctx.r10.s64 + 19712;
loc_8216F804:
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r26,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r26.u32);
	// stwu r26,12(r11)
	ea = 12 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r26.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8216f804
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216F804;
loc_8216F814:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r3,30864(r11)
	REX_STORE_U32(ctx.r11.u32 + 30864, ctx.r3.u32);
	// b 0x8216f82c
	goto loc_8216F82C;
loc_8216F820:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,30864(r10)
	REX_STORE_U32(ctx.r10.u32 + 30864, ctx.r26.u32);
loc_8216F82C:
	// lwz r11,30956(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 30956);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,20740
	ctx.r4.s64 = ctx.r10.s64 + 20740;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x8219be30
	ctx.lr = 0x8216F844;
	sub_8219BE30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216f8d4
	if (ctx.cr6.eq) goto loc_8216F8D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8216f8d4
	if (!ctx.cr6.gt) goto loc_8216F8D4;
	// stw r26,228(r22)
	REX_STORE_U32(ctx.r22.u32 + 228, ctx.r26.u32);
	// lis r10,468
	ctx.r10.s64 = 30670848;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// ori r9,r10,7489
	ctx.r9.u64 = ctx.r10.u64 | 7489;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// mulli r3,r31,140
	ctx.r3.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(140));
	// stw r31,228(r23)
	REX_STORE_U32(ctx.r23.u32 + 228, ctx.r31.u32);
	// ble cr6,0x8216f880
	if (!ctx.cr6.gt) goto loc_8216F880;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_8216F880:
	// bl 0x822a5ce0
	ctx.lr = 0x8216F884;
	sub_822A5CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216f8c8
	if (ctx.cr6.eq) goto loc_8216F8C8;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8216f8bc
	if (ctx.cr0.lt) goto loc_8216F8BC;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-136
	ctx.r11.s64 = ctx.r3.s64 + -136;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r10,r10,-12208
	ctx.r10.s64 = ctx.r10.s64 + -12208;
loc_8216F8A8:
	// stw r10,136(r11)
	REX_STORE_U32(ctx.r11.u32 + 136, ctx.r10.u32);
	// stw r26,144(r11)
	REX_STORE_U32(ctx.r11.u32 + 144, ctx.r26.u32);
	// stb r26,148(r11)
	REX_STORE_U8(ctx.r11.u32 + 148, ctx.r26.u8);
	// stwu r27,140(r11)
	ea = 140 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8216f8a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216F8A8;
loc_8216F8BC:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r3,30868(r11)
	REX_STORE_U32(ctx.r11.u32 + 30868, ctx.r3.u32);
	// b 0x8216f8d4
	goto loc_8216F8D4;
loc_8216F8C8:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,30868(r10)
	REX_STORE_U32(ctx.r10.u32 + 30868, ctx.r26.u32);
loc_8216F8D4:
	// lwz r11,30956(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 30956);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,20780
	ctx.r4.s64 = ctx.r10.s64 + 20780;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x8219be30
	ctx.lr = 0x8216F8EC;
	sub_8219BE30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216f974
	if (ctx.cr6.eq) goto loc_8216F974;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8216f974
	if (!ctx.cr6.gt) goto loc_8216F974;
	// stw r26,232(r22)
	REX_STORE_U32(ctx.r22.u32 + 232, ctx.r26.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// stw r31,232(r23)
	REX_STORE_U32(ctx.r23.u32 + 232, ctx.r31.u32);
	// rlwinm r3,r31,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x8216f920
	if (!ctx.cr6.gt) goto loc_8216F920;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_8216F920:
	// bl 0x822a5ce0
	ctx.lr = 0x8216F924;
	sub_822A5CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216f968
	if (ctx.cr6.eq) goto loc_8216F968;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8216f95c
	if (ctx.cr0.lt) goto loc_8216F95C;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-12
	ctx.r11.s64 = ctx.r3.s64 + -12;
	// li r9,2
	ctx.r9.s64 = 2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r10,r10,-12224
	ctx.r10.s64 = ctx.r10.s64 + -12224;
loc_8216F94C:
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r26,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r26.u32);
	// stwu r9,16(r11)
	ea = 16 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8216f94c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216F94C;
loc_8216F95C:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r3,30872(r11)
	REX_STORE_U32(ctx.r11.u32 + 30872, ctx.r3.u32);
	// b 0x8216f974
	goto loc_8216F974;
loc_8216F968:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,30872(r10)
	REX_STORE_U32(ctx.r10.u32 + 30872, ctx.r26.u32);
loc_8216F974:
	// lwz r11,30956(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 30956);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,20816
	ctx.r4.s64 = ctx.r10.s64 + 20816;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x8219be30
	ctx.lr = 0x8216F98C;
	sub_8219BE30(ctx, base);
	// lis r9,455
	ctx.r9.s64 = 29818880;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ori r29,r9,7281
	ctx.r29.u64 = ctx.r9.u64 | 7281;
	// beq cr6,0x8216fa2c
	if (ctx.cr6.eq) goto loc_8216FA2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8216fa2c
	if (!ctx.cr6.gt) goto loc_8216FA2C;
	// stw r26,236(r22)
	REX_STORE_U32(ctx.r22.u32 + 236, ctx.r26.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// stw r31,236(r23)
	REX_STORE_U32(ctx.r23.u32 + 236, ctx.r31.u32);
	// bgt cr6,0x8216f9d0
	if (ctx.cr6.gt) goto loc_8216F9D0;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x8216f9d4
	goto loc_8216F9D4;
loc_8216F9D0:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_8216F9D4:
	// bl 0x822a5ce0
	ctx.lr = 0x8216F9D8;
	sub_822A5CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216fa20
	if (ctx.cr6.eq) goto loc_8216FA20;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8216fa14
	if (ctx.cr0.lt) goto loc_8216FA14;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-140
	ctx.r11.s64 = ctx.r3.s64 + -140;
	// li r9,3
	ctx.r9.s64 = 3;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r10,r10,-12200
	ctx.r10.s64 = ctx.r10.s64 + -12200;
loc_8216FA00:
	// stw r10,140(r11)
	REX_STORE_U32(ctx.r11.u32 + 140, ctx.r10.u32);
	// stw r26,148(r11)
	REX_STORE_U32(ctx.r11.u32 + 148, ctx.r26.u32);
	// stb r26,152(r11)
	REX_STORE_U8(ctx.r11.u32 + 152, ctx.r26.u8);
	// stwu r9,144(r11)
	ea = 144 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8216fa00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216FA00;
loc_8216FA14:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r3,30876(r11)
	REX_STORE_U32(ctx.r11.u32 + 30876, ctx.r3.u32);
	// b 0x8216fa2c
	goto loc_8216FA2C;
loc_8216FA20:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,30876(r10)
	REX_STORE_U32(ctx.r10.u32 + 30876, ctx.r26.u32);
loc_8216FA2C:
	// lwz r11,30956(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 30956);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,20864
	ctx.r4.s64 = ctx.r10.s64 + 20864;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x8219be30
	ctx.lr = 0x8216FA44;
	sub_8219BE30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216facc
	if (ctx.cr6.eq) goto loc_8216FACC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8216facc
	if (!ctx.cr6.gt) goto loc_8216FACC;
	// stw r26,240(r22)
	REX_STORE_U32(ctx.r22.u32 + 240, ctx.r26.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// rlwinm r3,r31,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r31,240(r23)
	REX_STORE_U32(ctx.r23.u32 + 240, ctx.r31.u32);
	// ble cr6,0x8216fa78
	if (!ctx.cr6.gt) goto loc_8216FA78;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_8216FA78:
	// bl 0x822a5ce0
	ctx.lr = 0x8216FA7C;
	sub_822A5CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216fac0
	if (ctx.cr6.eq) goto loc_8216FAC0;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8216fab4
	if (ctx.cr0.lt) goto loc_8216FAB4;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-12
	ctx.r11.s64 = ctx.r3.s64 + -12;
	// li r9,4
	ctx.r9.s64 = 4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r10,r10,-12192
	ctx.r10.s64 = ctx.r10.s64 + -12192;
loc_8216FAA4:
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r26,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r26.u32);
	// stwu r9,16(r11)
	ea = 16 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8216faa4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216FAA4;
loc_8216FAB4:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r3,30880(r11)
	REX_STORE_U32(ctx.r11.u32 + 30880, ctx.r3.u32);
	// b 0x8216facc
	goto loc_8216FACC;
loc_8216FAC0:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,30880(r10)
	REX_STORE_U32(ctx.r10.u32 + 30880, ctx.r26.u32);
loc_8216FACC:
	// lwz r11,30956(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 30956);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,20904
	ctx.r4.s64 = ctx.r10.s64 + 20904;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x8219be30
	ctx.lr = 0x8216FAE4;
	sub_8219BE30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216fb80
	if (ctx.cr6.eq) goto loc_8216FB80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8216fb80
	if (!ctx.cr6.gt) goto loc_8216FB80;
	// stw r26,244(r22)
	REX_STORE_U32(ctx.r22.u32 + 244, ctx.r26.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r17
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r17.u32, ctx.xer);
	// stw r31,244(r23)
	REX_STORE_U32(ctx.r23.u32 + 244, ctx.r31.u32);
	// bgt cr6,0x8216fb20
	if (ctx.cr6.gt) goto loc_8216FB20;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x8216fb24
	goto loc_8216FB24;
loc_8216FB20:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_8216FB24:
	// bl 0x822a5ce0
	ctx.lr = 0x8216FB28;
	sub_822A5CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216fb74
	if (ctx.cr6.eq) goto loc_8216FB74;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8216fb68
	if (ctx.cr0.lt) goto loc_8216FB68;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r10,r10,-12184
	ctx.r10.s64 = ctx.r10.s64 + -12184;
loc_8216FB50:
	// stfs f31,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r26,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r26.u32);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stwu r26,20(r11)
	ea = 20 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r26.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8216fb50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216FB50;
loc_8216FB68:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r3,30884(r11)
	REX_STORE_U32(ctx.r11.u32 + 30884, ctx.r3.u32);
	// b 0x8216fb80
	goto loc_8216FB80;
loc_8216FB74:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,30884(r10)
	REX_STORE_U32(ctx.r10.u32 + 30884, ctx.r26.u32);
loc_8216FB80:
	// lwz r11,30956(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 30956);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,20948
	ctx.r4.s64 = ctx.r10.s64 + 20948;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x8219be30
	ctx.lr = 0x8216FB98;
	sub_8219BE30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216fc2c
	if (ctx.cr6.eq) goto loc_8216FC2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8216fc2c
	if (!ctx.cr6.gt) goto loc_8216FC2C;
	// stw r26,248(r22)
	REX_STORE_U32(ctx.r22.u32 + 248, ctx.r26.u32);
	// lis r10,2340
	ctx.r10.s64 = 153354240;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// ori r9,r10,37449
	ctx.r9.u64 = ctx.r10.u64 | 37449;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// mulli r3,r31,28
	ctx.r3.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(28));
	// stw r31,248(r23)
	REX_STORE_U32(ctx.r23.u32 + 248, ctx.r31.u32);
	// ble cr6,0x8216fbd4
	if (!ctx.cr6.gt) goto loc_8216FBD4;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_8216FBD4:
	// bl 0x822a5ce0
	ctx.lr = 0x8216FBD8;
	sub_822A5CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216fc20
	if (ctx.cr6.eq) goto loc_8216FC20;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8216fc14
	if (ctx.cr0.lt) goto loc_8216FC14;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-24
	ctx.r11.s64 = ctx.r3.s64 + -24;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r10,r10,-12176
	ctx.r10.s64 = ctx.r10.s64 + -12176;
loc_8216FC00:
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r26,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r26.u32);
	// stw r20,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r20.u32);
	// stwu r9,28(r11)
	ea = 28 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8216fc00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216FC00;
loc_8216FC14:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r3,30888(r11)
	REX_STORE_U32(ctx.r11.u32 + 30888, ctx.r3.u32);
	// b 0x8216fc2c
	goto loc_8216FC2C;
loc_8216FC20:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,30888(r10)
	REX_STORE_U32(ctx.r10.u32 + 30888, ctx.r26.u32);
loc_8216FC2C:
	// lwz r11,30956(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 30956);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,20988
	ctx.r4.s64 = ctx.r10.s64 + 20988;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x8219be30
	ctx.lr = 0x8216FC44;
	sub_8219BE30(ctx, base);
	// lis r9,2047
	ctx.r9.s64 = 134152192;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ori r30,r9,65535
	ctx.r30.u64 = ctx.r9.u64 | 65535;
	// beq cr6,0x8216fcd8
	if (ctx.cr6.eq) goto loc_8216FCD8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8216fcd8
	if (!ctx.cr6.gt) goto loc_8216FCD8;
	// stw r26,252(r22)
	REX_STORE_U32(ctx.r22.u32 + 252, ctx.r26.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r31,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r31,252(r23)
	REX_STORE_U32(ctx.r23.u32 + 252, ctx.r31.u32);
	// ble cr6,0x8216fc80
	if (!ctx.cr6.gt) goto loc_8216FC80;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_8216FC80:
	// bl 0x822a5ce0
	ctx.lr = 0x8216FC84;
	sub_822A5CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216fccc
	if (ctx.cr6.eq) goto loc_8216FCCC;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8216fcc0
	if (ctx.cr0.lt) goto loc_8216FCC0;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-28
	ctx.r11.s64 = ctx.r3.s64 + -28;
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r10,r10,-12168
	ctx.r10.s64 = ctx.r10.s64 + -12168;
loc_8216FCAC:
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r26,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r26.u32);
	// stw r20,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r20.u32);
	// stwu r9,32(r11)
	ea = 32 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8216fcac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216FCAC;
loc_8216FCC0:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r3,30892(r11)
	REX_STORE_U32(ctx.r11.u32 + 30892, ctx.r3.u32);
	// b 0x8216fcd8
	goto loc_8216FCD8;
loc_8216FCCC:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,30892(r10)
	REX_STORE_U32(ctx.r10.u32 + 30892, ctx.r26.u32);
loc_8216FCD8:
	// lwz r11,30956(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 30956);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,21036
	ctx.r4.s64 = ctx.r10.s64 + 21036;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x8219be30
	ctx.lr = 0x8216FCF0;
	sub_8219BE30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216fd7c
	if (ctx.cr6.eq) goto loc_8216FD7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8216fd7c
	if (!ctx.cr6.gt) goto loc_8216FD7C;
	// stw r26,256(r22)
	REX_STORE_U32(ctx.r22.u32 + 256, ctx.r26.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r31,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r31,256(r23)
	REX_STORE_U32(ctx.r23.u32 + 256, ctx.r31.u32);
	// ble cr6,0x8216fd24
	if (!ctx.cr6.gt) goto loc_8216FD24;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_8216FD24:
	// bl 0x822a5ce0
	ctx.lr = 0x8216FD28;
	sub_822A5CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216fd70
	if (ctx.cr6.eq) goto loc_8216FD70;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8216fd64
	if (ctx.cr0.lt) goto loc_8216FD64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-28
	ctx.r11.s64 = ctx.r3.s64 + -28;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r10,r10,-12160
	ctx.r10.s64 = ctx.r10.s64 + -12160;
loc_8216FD50:
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r26,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r26.u32);
	// stw r20,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r20.u32);
	// stwu r9,32(r11)
	ea = 32 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8216fd50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216FD50;
loc_8216FD64:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r3,30896(r11)
	REX_STORE_U32(ctx.r11.u32 + 30896, ctx.r3.u32);
	// b 0x8216fd7c
	goto loc_8216FD7C;
loc_8216FD70:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,30896(r10)
	REX_STORE_U32(ctx.r10.u32 + 30896, ctx.r26.u32);
loc_8216FD7C:
	// lwz r11,30956(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 30956);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,21084
	ctx.r4.s64 = ctx.r10.s64 + 21084;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x8219be30
	ctx.lr = 0x8216FD94;
	sub_8219BE30(ctx, base);
	// li r28,9
	ctx.r28.s64 = 9;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216fe2c
	if (ctx.cr6.eq) goto loc_8216FE2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8216fe2c
	if (!ctx.cr6.gt) goto loc_8216FE2C;
	// stw r26,260(r22)
	REX_STORE_U32(ctx.r22.u32 + 260, ctx.r26.u32);
	// lis r10,1489
	ctx.r10.s64 = 97583104;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// ori r9,r10,29789
	ctx.r9.u64 = ctx.r10.u64 | 29789;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// mulli r3,r31,44
	ctx.r3.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(44));
	// stw r31,260(r23)
	REX_STORE_U32(ctx.r23.u32 + 260, ctx.r31.u32);
	// ble cr6,0x8216fdd4
	if (!ctx.cr6.gt) goto loc_8216FDD4;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_8216FDD4:
	// bl 0x822a5ce0
	ctx.lr = 0x8216FDD8;
	sub_822A5CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216fe20
	if (ctx.cr6.eq) goto loc_8216FE20;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8216fe14
	if (ctx.cr0.lt) goto loc_8216FE14;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-40
	ctx.r11.s64 = ctx.r3.s64 + -40;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r10,r10,-12152
	ctx.r10.s64 = ctx.r10.s64 + -12152;
loc_8216FDFC:
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r26,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r26.u32);
	// stw r20,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r20.u32);
	// stw r20,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r20.u32);
	// stwu r28,44(r11)
	ea = 44 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r28.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8216fdfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216FDFC;
loc_8216FE14:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r3,30900(r11)
	REX_STORE_U32(ctx.r11.u32 + 30900, ctx.r3.u32);
	// b 0x8216fe2c
	goto loc_8216FE2C;
loc_8216FE20:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,30900(r10)
	REX_STORE_U32(ctx.r10.u32 + 30900, ctx.r26.u32);
loc_8216FE2C:
	// lwz r11,30956(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 30956);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,21128
	ctx.r4.s64 = ctx.r10.s64 + 21128;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x8219be30
	ctx.lr = 0x8216FE44;
	sub_8219BE30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216fecc
	if (ctx.cr6.eq) goto loc_8216FECC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8216fecc
	if (!ctx.cr6.gt) goto loc_8216FECC;
	// stw r26,264(r22)
	REX_STORE_U32(ctx.r22.u32 + 264, ctx.r26.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// rlwinm r3,r31,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r31,264(r23)
	REX_STORE_U32(ctx.r23.u32 + 264, ctx.r31.u32);
	// ble cr6,0x8216fe78
	if (!ctx.cr6.gt) goto loc_8216FE78;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_8216FE78:
	// bl 0x822a5ce0
	ctx.lr = 0x8216FE7C;
	sub_822A5CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216fec0
	if (ctx.cr6.eq) goto loc_8216FEC0;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8216feb4
	if (ctx.cr0.lt) goto loc_8216FEB4;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-12
	ctx.r11.s64 = ctx.r3.s64 + -12;
	// li r9,16
	ctx.r9.s64 = 16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r10,r10,-12144
	ctx.r10.s64 = ctx.r10.s64 + -12144;
loc_8216FEA4:
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r26,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r26.u32);
	// stwu r9,16(r11)
	ea = 16 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8216fea4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216FEA4;
loc_8216FEB4:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r3,30904(r11)
	REX_STORE_U32(ctx.r11.u32 + 30904, ctx.r3.u32);
	// b 0x8216fecc
	goto loc_8216FECC;
loc_8216FEC0:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,30904(r10)
	REX_STORE_U32(ctx.r10.u32 + 30904, ctx.r26.u32);
loc_8216FECC:
	// lwz r11,30956(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 30956);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,21172
	ctx.r4.s64 = ctx.r10.s64 + 21172;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x8219be30
	ctx.lr = 0x8216FEE4;
	sub_8219BE30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216ff6c
	if (ctx.cr6.eq) goto loc_8216FF6C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8216ff6c
	if (!ctx.cr6.gt) goto loc_8216FF6C;
	// stw r26,272(r22)
	REX_STORE_U32(ctx.r22.u32 + 272, ctx.r26.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// rlwinm r3,r31,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r31,272(r23)
	REX_STORE_U32(ctx.r23.u32 + 272, ctx.r31.u32);
	// ble cr6,0x8216ff18
	if (!ctx.cr6.gt) goto loc_8216FF18;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_8216FF18:
	// bl 0x822a5ce0
	ctx.lr = 0x8216FF1C;
	sub_822A5CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216ff60
	if (ctx.cr6.eq) goto loc_8216FF60;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8216ff54
	if (ctx.cr0.lt) goto loc_8216FF54;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-12
	ctx.r11.s64 = ctx.r3.s64 + -12;
	// li r9,10
	ctx.r9.s64 = 10;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r10,r10,-12136
	ctx.r10.s64 = ctx.r10.s64 + -12136;
loc_8216FF44:
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r26,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r26.u32);
	// stwu r9,16(r11)
	ea = 16 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8216ff44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216FF44;
loc_8216FF54:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r3,30908(r11)
	REX_STORE_U32(ctx.r11.u32 + 30908, ctx.r3.u32);
	// b 0x8216ff6c
	goto loc_8216FF6C;
loc_8216FF60:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,30908(r10)
	REX_STORE_U32(ctx.r10.u32 + 30908, ctx.r26.u32);
loc_8216FF6C:
	// lwz r11,30956(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 30956);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,21212
	ctx.r4.s64 = ctx.r10.s64 + 21212;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x8219be30
	ctx.lr = 0x8216FF84;
	sub_8219BE30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82170018
	if (ctx.cr6.eq) goto loc_82170018;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82170018
	if (!ctx.cr6.gt) goto loc_82170018;
	// stw r26,276(r22)
	REX_STORE_U32(ctx.r22.u32 + 276, ctx.r26.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r17
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r17.u32, ctx.xer);
	// stw r31,276(r23)
	REX_STORE_U32(ctx.r23.u32 + 276, ctx.r31.u32);
	// bgt cr6,0x8216ffc0
	if (ctx.cr6.gt) goto loc_8216FFC0;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x8216ffc4
	goto loc_8216FFC4;
loc_8216FFC0:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_8216FFC4:
	// bl 0x822a5ce0
	ctx.lr = 0x8216FFC8;
	sub_822A5CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217000c
	if (ctx.cr6.eq) goto loc_8217000C;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82170000
	if (ctx.cr0.lt) goto loc_82170000;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-16
	ctx.r11.s64 = ctx.r3.s64 + -16;
	// li r9,11
	ctx.r9.s64 = 11;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r10,r10,-12128
	ctx.r10.s64 = ctx.r10.s64 + -12128;
loc_8216FFF0:
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r26,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r26.u32);
	// stwu r9,20(r11)
	ea = 20 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8216fff0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216FFF0;
loc_82170000:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r3,30912(r11)
	REX_STORE_U32(ctx.r11.u32 + 30912, ctx.r3.u32);
	// b 0x82170018
	goto loc_82170018;
loc_8217000C:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,30912(r10)
	REX_STORE_U32(ctx.r10.u32 + 30912, ctx.r26.u32);
loc_82170018:
	// lwz r11,30956(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 30956);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,21256
	ctx.r4.s64 = ctx.r10.s64 + 21256;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x8219be30
	ctx.lr = 0x82170030;
	sub_8219BE30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821700bc
	if (ctx.cr6.eq) goto loc_821700BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821700bc
	if (!ctx.cr6.gt) goto loc_821700BC;
	// stw r26,280(r22)
	REX_STORE_U32(ctx.r22.u32 + 280, ctx.r26.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r31,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r31,280(r23)
	REX_STORE_U32(ctx.r23.u32 + 280, ctx.r31.u32);
	// ble cr6,0x82170064
	if (!ctx.cr6.gt) goto loc_82170064;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_82170064:
	// bl 0x822a5ce0
	ctx.lr = 0x82170068;
	sub_822A5CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821700b0
	if (ctx.cr6.eq) goto loc_821700B0;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x821700a4
	if (ctx.cr0.lt) goto loc_821700A4;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-28
	ctx.r11.s64 = ctx.r3.s64 + -28;
	// li r9,12
	ctx.r9.s64 = 12;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r10,r10,19720
	ctx.r10.s64 = ctx.r10.s64 + 19720;
loc_82170090:
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r26,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r26.u32);
	// stw r20,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r20.u32);
	// stwu r9,32(r11)
	ea = 32 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82170090
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82170090;
loc_821700A4:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r3,30916(r11)
	REX_STORE_U32(ctx.r11.u32 + 30916, ctx.r3.u32);
	// b 0x821700bc
	goto loc_821700BC;
loc_821700B0:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,30916(r10)
	REX_STORE_U32(ctx.r10.u32 + 30916, ctx.r26.u32);
loc_821700BC:
	// lwz r11,30956(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 30956);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,21304
	ctx.r4.s64 = ctx.r10.s64 + 21304;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x8219be30
	ctx.lr = 0x821700D4;
	sub_8219BE30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82170174
	if (ctx.cr6.eq) goto loc_82170174;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82170174
	if (!ctx.cr6.gt) goto loc_82170174;
	// stw r26,284(r22)
	REX_STORE_U32(ctx.r22.u32 + 284, ctx.r26.u32);
	// lis r10,1820
	ctx.r10.s64 = 119275520;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// ori r9,r10,29127
	ctx.r9.u64 = ctx.r10.u64 | 29127;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// stw r31,284(r23)
	REX_STORE_U32(ctx.r23.u32 + 284, ctx.r31.u32);
	// bgt cr6,0x82170118
	if (ctx.cr6.gt) goto loc_82170118;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x8217011c
	goto loc_8217011C;
loc_82170118:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_8217011C:
	// bl 0x822a5ce0
	ctx.lr = 0x82170120;
	sub_822A5CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82170168
	if (ctx.cr6.eq) goto loc_82170168;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8217015c
	if (ctx.cr0.lt) goto loc_8217015C;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-32
	ctx.r11.s64 = ctx.r3.s64 + -32;
	// li r9,13
	ctx.r9.s64 = 13;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r10,r10,-12120
	ctx.r10.s64 = ctx.r10.s64 + -12120;
loc_82170148:
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r26,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r26.u32);
	// stw r20,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r20.u32);
	// stwu r9,36(r11)
	ea = 36 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82170148
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82170148;
loc_8217015C:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r3,30920(r11)
	REX_STORE_U32(ctx.r11.u32 + 30920, ctx.r3.u32);
	// b 0x82170174
	goto loc_82170174;
loc_82170168:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,30920(r10)
	REX_STORE_U32(ctx.r10.u32 + 30920, ctx.r26.u32);
loc_82170174:
	// lwz r11,30956(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 30956);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,21356
	ctx.r4.s64 = ctx.r10.s64 + 21356;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x8219be30
	ctx.lr = 0x8217018C;
	sub_8219BE30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82170220
	if (ctx.cr6.eq) goto loc_82170220;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82170220
	if (!ctx.cr6.gt) goto loc_82170220;
	// stw r26,288(r22)
	REX_STORE_U32(ctx.r22.u32 + 288, ctx.r26.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// stw r31,288(r23)
	REX_STORE_U32(ctx.r23.u32 + 288, ctx.r31.u32);
	// bgt cr6,0x821701c8
	if (ctx.cr6.gt) goto loc_821701C8;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x821701cc
	goto loc_821701CC;
loc_821701C8:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_821701CC:
	// bl 0x822a5ce0
	ctx.lr = 0x821701D0;
	sub_822A5CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82170214
	if (ctx.cr6.eq) goto loc_82170214;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82170208
	if (ctx.cr0.lt) goto loc_82170208;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-140
	ctx.r11.s64 = ctx.r3.s64 + -140;
	// li r9,14
	ctx.r9.s64 = 14;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r10,r10,-12112
	ctx.r10.s64 = ctx.r10.s64 + -12112;
loc_821701F8:
	// stw r10,140(r11)
	REX_STORE_U32(ctx.r11.u32 + 140, ctx.r10.u32);
	// stw r26,148(r11)
	REX_STORE_U32(ctx.r11.u32 + 148, ctx.r26.u32);
	// stwu r9,144(r11)
	ea = 144 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821701f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821701F8;
loc_82170208:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r3,30924(r11)
	REX_STORE_U32(ctx.r11.u32 + 30924, ctx.r3.u32);
	// b 0x82170220
	goto loc_82170220;
loc_82170214:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,30924(r10)
	REX_STORE_U32(ctx.r10.u32 + 30924, ctx.r26.u32);
loc_82170220:
	// lwz r11,30956(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 30956);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,21400
	ctx.r4.s64 = ctx.r10.s64 + 21400;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x8219be30
	ctx.lr = 0x82170238;
	sub_8219BE30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821702c4
	if (ctx.cr6.eq) goto loc_821702C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821702c4
	if (!ctx.cr6.gt) goto loc_821702C4;
	// stw r26,292(r22)
	REX_STORE_U32(ctx.r22.u32 + 292, ctx.r26.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r31,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r31,292(r23)
	REX_STORE_U32(ctx.r23.u32 + 292, ctx.r31.u32);
	// ble cr6,0x8217026c
	if (!ctx.cr6.gt) goto loc_8217026C;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_8217026C:
	// bl 0x822a5ce0
	ctx.lr = 0x82170270;
	sub_822A5CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821702b8
	if (ctx.cr6.eq) goto loc_821702B8;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x821702ac
	if (ctx.cr0.lt) goto loc_821702AC;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-28
	ctx.r11.s64 = ctx.r3.s64 + -28;
	// li r9,15
	ctx.r9.s64 = 15;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r10,r10,-12104
	ctx.r10.s64 = ctx.r10.s64 + -12104;
loc_82170298:
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r26,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r26.u32);
	// stw r21,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r21.u32);
	// stwu r9,32(r11)
	ea = 32 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82170298
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82170298;
loc_821702AC:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r3,30928(r11)
	REX_STORE_U32(ctx.r11.u32 + 30928, ctx.r3.u32);
	// b 0x821702c4
	goto loc_821702C4;
loc_821702B8:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,30928(r10)
	REX_STORE_U32(ctx.r10.u32 + 30928, ctx.r26.u32);
loc_821702C4:
	// lwz r11,30956(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 30956);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,21444
	ctx.r4.s64 = ctx.r10.s64 + 21444;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x8219be30
	ctx.lr = 0x821702DC;
	sub_8219BE30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82170360
	if (ctx.cr6.eq) goto loc_82170360;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82170360
	if (!ctx.cr6.gt) goto loc_82170360;
	// stw r26,308(r22)
	REX_STORE_U32(ctx.r22.u32 + 308, ctx.r26.u32);
	// lis r10,42
	ctx.r10.s64 = 2752512;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// ori r9,r10,29202
	ctx.r9.u64 = ctx.r10.u64 | 29202;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// mulli r3,r31,1544
	ctx.r3.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(1544));
	// stw r31,308(r23)
	REX_STORE_U32(ctx.r23.u32 + 308, ctx.r31.u32);
	// ble cr6,0x82170318
	if (!ctx.cr6.gt) goto loc_82170318;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_82170318:
	// bl 0x822a5ce0
	ctx.lr = 0x8217031C;
	sub_822A5CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82170354
	if (ctx.cr6.eq) goto loc_82170354;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82170348
	if (ctx.cr0.lt) goto loc_82170348;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-1544
	ctx.r11.s64 = ctx.r3.s64 + -1544;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r10,r10,-12096
	ctx.r10.s64 = ctx.r10.s64 + -12096;
loc_82170340:
	// stwu r10,1544(r11)
	ea = 1544 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82170340
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82170340;
loc_82170348:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r3,30932(r11)
	REX_STORE_U32(ctx.r11.u32 + 30932, ctx.r3.u32);
	// b 0x82170360
	goto loc_82170360;
loc_82170354:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,30932(r10)
	REX_STORE_U32(ctx.r10.u32 + 30932, ctx.r26.u32);
loc_82170360:
	// lwz r11,30956(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 30956);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,21472
	ctx.r4.s64 = ctx.r10.s64 + 21472;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x8219be30
	ctx.lr = 0x82170378;
	sub_8219BE30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82170408
	if (ctx.cr6.eq) goto loc_82170408;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82170408
	if (!ctx.cr6.gt) goto loc_82170408;
	// stw r26,320(r22)
	REX_STORE_U32(ctx.r22.u32 + 320, ctx.r26.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r16.u32, ctx.xer);
	// stw r31,320(r23)
	REX_STORE_U32(ctx.r23.u32 + 320, ctx.r31.u32);
	// bgt cr6,0x821703b4
	if (ctx.cr6.gt) goto loc_821703B4;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x821703b8
	goto loc_821703B8;
loc_821703B4:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_821703B8:
	// bl 0x822a5ce0
	ctx.lr = 0x821703BC;
	sub_822A5CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821703fc
	if (ctx.cr6.eq) goto loc_821703FC;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x821703f0
	if (ctx.cr0.lt) goto loc_821703F0;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r10,r10,-12088
	ctx.r10.s64 = ctx.r10.s64 + -12088;
loc_821703E0:
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r26,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
	// stwu r26,12(r11)
	ea = 12 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r26.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821703e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821703E0;
loc_821703F0:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r3,30936(r11)
	REX_STORE_U32(ctx.r11.u32 + 30936, ctx.r3.u32);
	// b 0x82170408
	goto loc_82170408;
loc_821703FC:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,30936(r10)
	REX_STORE_U32(ctx.r10.u32 + 30936, ctx.r26.u32);
loc_82170408:
	// lwz r11,30956(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 30956);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,21508
	ctx.r4.s64 = ctx.r10.s64 + 21508;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x8219be30
	ctx.lr = 0x82170420;
	sub_8219BE30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82170500
	if (ctx.cr6.eq) goto loc_82170500;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82170500
	if (!ctx.cr6.gt) goto loc_82170500;
	// stw r26,332(r22)
	REX_STORE_U32(ctx.r22.u32 + 332, ctx.r26.u32);
	// lis r10,1170
	ctx.r10.s64 = 76677120;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// ori r9,r10,18724
	ctx.r9.u64 = ctx.r10.u64 | 18724;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// mulli r3,r31,56
	ctx.r3.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(56));
	// stw r31,332(r23)
	REX_STORE_U32(ctx.r23.u32 + 332, ctx.r31.u32);
	// ble cr6,0x8217045c
	if (!ctx.cr6.gt) goto loc_8217045C;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_8217045C:
	// bl 0x822a5ce0
	ctx.lr = 0x82170460;
	sub_822A5CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821704f4
	if (ctx.cr6.eq) goto loc_821704F4;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x821704e8
	if (ctx.cr0.lt) goto loc_821704E8;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lfs f0,0(r14)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r14.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// li r9,63
	ctx.r9.s64 = 63;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f13,-21920(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -21920);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r10,17232
	ctx.r7.s64 = ctx.r10.s64 + 17232;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r10,r10,228
	ctx.r10.s64 = ctx.r10.s64 + 228;
	// lfs f12,508(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 508);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,504(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 504);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,500(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 500);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,480(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 480);
	ctx.f9.f64 = double(temp.f32);
loc_821704AC:
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r20,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r20.u32);
	// stw r20,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r20.u32);
	// stw r20,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r20.u32);
	// stw r9,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// stfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f10,32(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f11,36(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f12,40(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f31,48(r11)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f31,52(r11)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfsu f31,56(r11)
	ea = 56 + ctx.r11.u32;
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821704ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821704AC;
loc_821704E8:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r3,30940(r11)
	REX_STORE_U32(ctx.r11.u32 + 30940, ctx.r3.u32);
	// b 0x82170500
	goto loc_82170500;
loc_821704F4:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,30940(r10)
	REX_STORE_U32(ctx.r10.u32 + 30940, ctx.r26.u32);
loc_82170500:
	// lwz r11,30956(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 30956);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,21544
	ctx.r4.s64 = ctx.r10.s64 + 21544;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x8219be30
	ctx.lr = 0x82170518;
	sub_8219BE30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821705a8
	if (ctx.cr6.eq) goto loc_821705A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821705a8
	if (!ctx.cr6.gt) goto loc_821705A8;
	// stw r26,360(r22)
	REX_STORE_U32(ctx.r22.u32 + 360, ctx.r26.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r16.u32, ctx.xer);
	// stw r31,360(r23)
	REX_STORE_U32(ctx.r23.u32 + 360, ctx.r31.u32);
	// bgt cr6,0x82170554
	if (ctx.cr6.gt) goto loc_82170554;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82170558
	goto loc_82170558;
loc_82170554:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_82170558:
	// bl 0x822a5ce0
	ctx.lr = 0x8217055C;
	sub_822A5CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217059c
	if (ctx.cr6.eq) goto loc_8217059C;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82170590
	if (ctx.cr0.lt) goto loc_82170590;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r10,r10,-12080
	ctx.r10.s64 = ctx.r10.s64 + -12080;
loc_82170580:
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r26,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
	// stfsu f31,12(r11)
	ctx.fpscr.disableFlushMode();
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82170580
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82170580;
loc_82170590:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r3,30944(r11)
	REX_STORE_U32(ctx.r11.u32 + 30944, ctx.r3.u32);
	// b 0x821705a8
	goto loc_821705A8;
loc_8217059C:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,30944(r10)
	REX_STORE_U32(ctx.r10.u32 + 30944, ctx.r26.u32);
loc_821705A8:
	// lwz r11,30956(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 30956);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,21584
	ctx.r4.s64 = ctx.r10.s64 + 21584;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x8219be30
	ctx.lr = 0x821705C0;
	sub_8219BE30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82170664
	if (ctx.cr6.eq) goto loc_82170664;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82170664
	if (!ctx.cr6.gt) goto loc_82170664;
	// stw r26,388(r22)
	REX_STORE_U32(ctx.r22.u32 + 388, ctx.r26.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r17
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r17.u32, ctx.xer);
	// stw r31,388(r23)
	REX_STORE_U32(ctx.r23.u32 + 388, ctx.r31.u32);
	// bgt cr6,0x821705fc
	if (ctx.cr6.gt) goto loc_821705FC;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82170600
	goto loc_82170600;
loc_821705FC:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_82170600:
	// bl 0x822a5ce0
	ctx.lr = 0x82170604;
	sub_822A5CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82170658
	if (ctx.cr6.eq) goto loc_82170658;
	// addic. r6,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r6.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt 0x8217064c
	if (ctx.cr0.lt) goto loc_8217064C;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// addi r7,r10,14624
	ctx.r7.s64 = ctx.r10.s64 + 14624;
loc_82170620:
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r7,-16(r11)
	REX_STORE_U32(ctx.r11.u32 + -16, ctx.r7.u32);
	// addi r10,r11,-13
	ctx.r10.s64 = ctx.r11.s64 + -13;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
loc_82170634:
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82170634
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82170634;
	// stw r18,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r18.u32);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// bge 0x82170620
	if (!ctx.cr0.lt) goto loc_82170620;
loc_8217064C:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r3,30948(r11)
	REX_STORE_U32(ctx.r11.u32 + 30948, ctx.r3.u32);
	// b 0x82170664
	goto loc_82170664;
loc_82170658:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,30948(r10)
	REX_STORE_U32(ctx.r10.u32 + 30948, ctx.r26.u32);
loc_82170664:
	// lwz r11,30956(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 30956);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,21612
	ctx.r4.s64 = ctx.r10.s64 + 21612;
	// lwzx r3,r11,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x8219be30
	ctx.lr = 0x8217067C;
	sub_8219BE30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217071c
	if (ctx.cr6.eq) goto loc_8217071C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8217071c
	if (!ctx.cr6.gt) goto loc_8217071C;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// stw r26,400(r22)
	REX_STORE_U32(ctx.r22.u32 + 400, ctx.r26.u32);
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// ori r9,r10,27930
	ctx.r9.u64 = ctx.r10.u64 | 27930;
	// stw r31,400(r23)
	REX_STORE_U32(ctx.r23.u32 + 400, ctx.r31.u32);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x821706c4
	if (ctx.cr6.gt) goto loc_821706C4;
	// mulli r11,r31,19128
	ctx.r11.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(19128));
	// li r10,-9
	ctx.r10.s64 = -9;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821706c8
	if (!ctx.cr6.gt) goto loc_821706C8;
loc_821706C4:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_821706C8:
	// bl 0x822a5ce0
	ctx.lr = 0x821706CC;
	sub_822A5CE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82170710
	if (ctx.cr6.eq) goto loc_82170710;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// blt 0x821706fc
	if (ctx.cr0.lt) goto loc_821706FC;
loc_821706E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218ecb8
	ctx.lr = 0x821706F0;
	sub_8218ECB8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,19128
	ctx.r30.s64 = ctx.r30.s64 + 19128;
	// bge 0x821706e8
	if (!ctx.cr0.lt) goto loc_821706E8;
loc_821706FC:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r29,30952(r11)
	REX_STORE_U32(ctx.r11.u32 + 30952, ctx.r29.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x825e3620
	__restgprlr_14(ctx, base);
	return;
loc_82170710:
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,30952(r10)
	REX_STORE_U32(ctx.r10.u32 + 30952, ctx.r26.u32);
loc_8217071C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x825e3620
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82251498) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822515c0
	if (ctx.cr6.eq) goto loc_822515C0;
	// addi r11,r5,8
	ctx.r11.s64 = ctx.r5.s64 + 8;
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
loc_822514AC:
	// lfs f0,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// lfs f13,16(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,32(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lfs f9,-8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,48(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f10,f11,f12
	ctx.f3.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, ctx.f12.f64)));
	// fmadds f2,f8,f9,f3
	ctx.f2.f64 = double(float(std::fma(ctx.f8.f64, ctx.f9.f64, ctx.f3.f64)));
	// fadds f1,f2,f7
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f7.f64));
	// stfs f1,-8(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// lfs f13,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,52(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,36(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmadds f3,f13,f9,f7
	ctx.f3.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, ctx.f7.f64)));
	// fmadds f2,f12,f0,f3
	ctx.f2.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f3.f64)));
	// fadds f1,f2,f10
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f10.f64));
	// stfs f1,-4(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f13,40(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,56(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,24(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmadds f3,f13,f11,f7
	ctx.f3.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f7.f64)));
	// fmadds f2,f9,f12,f3
	ctx.f2.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f3.f64)));
	// fadds f1,f2,f10
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f10.f64));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,32(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f5
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// fmadds f10,f0,f4,f11
	ctx.f10.f64 = double(float(std::fma(ctx.f0.f64, ctx.f4.f64, ctx.f11.f64)));
	// fmadds f9,f13,f6,f10
	ctx.f9.f64 = double(float(std::fma(ctx.f13.f64, ctx.f6.f64, ctx.f10.f64)));
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f8,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,20(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,36(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// fmadds f1,f8,f6,f2
	ctx.f1.f64 = double(float(std::fma(ctx.f8.f64, ctx.f6.f64, ctx.f2.f64)));
	// fmadds f0,f7,f5,f1
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, ctx.f5.f64, ctx.f1.f64)));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f13,40(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,24(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f5
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmadds f9,f13,f4,f10
	ctx.f9.f64 = double(float(std::fma(ctx.f13.f64, ctx.f4.f64, ctx.f10.f64)));
	// fmadds f8,f6,f12,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f6.f64, ctx.f12.f64, ctx.f9.f64)));
	// stfs f8,12(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// beq cr6,0x822515b0
	if (ctx.cr6.eq) goto loc_822515B0;
	// subf r4,r5,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r5.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
loc_822515A0:
	// lwz r31,0(r5)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stwx r31,r4,r5
	REX_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r31.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bdnz 0x822515a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822515A0;
loc_822515B0:
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822514ac
	if (!ctx.cr6.eq) goto loc_822514AC;
loc_822515C0:
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8225AC38) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e3608
	ctx.lr = 0x8225AC40;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x825e4164
	ctx.lr = 0x8225AC48;
	__savefpr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lfs f30,212(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 212);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,220(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 220);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,216(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 216);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x825dda78
	ctx.lr = 0x8225AC68;
	sub_825DDA78(ctx, base);
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// ori r30,r10,34079
	ctx.r30.u64 = ctx.r10.u64 | 34079;
	// addi r28,r9,17232
	ctx.r28.s64 = ctx.r9.s64 + 17232;
	// mulhw r8,r3,r30
	ctx.r8.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32)) >> 32;
	// lfs f0,60(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// srawi r11,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 5;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r6,r7,100
	ctx.r6.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(100));
	// subf r5,r6,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r6.u64;
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f31,f10,f0
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// bl 0x825dda78
	ctx.lr = 0x8225ACB4;
	sub_825DDA78(ctx, base);
	// mulhw r11,r3,r30
	ctx.r11.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32)) >> 32;
	// lfs f0,68(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r9,r10,100
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(100));
	// subf r8,r9,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r9.u64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f28,f7,f0
	ctx.f28.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x825de408
	ctx.lr = 0x8225ACF0;
	sub_825DE408(ctx, base);
	// frsp f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(ctx.f1.f64));
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x825de4e8
	ctx.lr = 0x8225ACFC;
	sub_825DE4E8(ctx, base);
	// fmuls f0,f27,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f29.f64));
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// frsp f6,f1
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// addi r11,r11,10904
	ctx.r11.s64 = ctx.r11.s64 + 10904;
	// stfs f31,4(r29)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f11,5796(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5796);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f5,f0,f0
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f13,f6,f30
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f30.f64));
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f31,4(r31)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmadds f4,f13,f13,f5
	ctx.f4.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f5.f64)));
	// fmadds f3,f31,f31,f4
	ctx.f3.f64 = double(float(std::fma(ctx.f31.f64, ctx.f31.f64, ctx.f4.f64)));
	// fsqrts f12,f3
	ctx.f12.f64 = double(float(sqrt(ctx.f3.f64)));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// beq cr6,0x8225ad64
	if (ctx.cr6.eq) goto loc_8225AD64;
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f10,f12,f31
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f10,4(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f9,8(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_8225AD64:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x825e41b0
	ctx.lr = 0x8225AD70;
	__restfpr_27(ctx, base);
	// b 0x825e3658
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822643C8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r8,r11,-24600
	ctx.r8.s64 = ctx.r11.s64 + -24600;
	// addi r7,r10,-24572
	ctx.r7.s64 = ctx.r10.s64 + -24572;
	// addi r10,r9,-24564
	ctx.r10.s64 = ctx.r9.s64 + -24564;
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r7,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// stw r4,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// addi r9,r5,16
	ctx.r9.s64 = ctx.r5.s64 + 16;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lwz r8,0(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r8,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// lwz r4,4(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stw r4,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// lwz r11,8(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r10,12(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// stw r10,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// ld r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// std r9,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r9.u64);
	// ld r8,8(r5)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r5.u32 + 8);
	// std r8,40(r3)
	REX_STORE_U64(ctx.r3.u32 + 40, ctx.r8.u64);
	// ld r7,16(r5)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r5.u32 + 16);
	// std r7,48(r3)
	REX_STORE_U64(ctx.r3.u32 + 48, ctx.r7.u64);
	// ld r6,24(r5)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r5.u32 + 24);
	// std r6,56(r3)
	REX_STORE_U64(ctx.r3.u32 + 56, ctx.r6.u64);
	// ld r4,32(r5)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r5.u32 + 32);
	// std r4,64(r3)
	REX_STORE_U64(ctx.r3.u32 + 64, ctx.r4.u64);
	// ld r11,40(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 40);
	// std r11,72(r3)
	REX_STORE_U64(ctx.r3.u32 + 72, ctx.r11.u64);
	// lwz r10,48(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 48);
	// stw r10,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// lwz r9,52(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 52);
	// stw r9,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r9.u32);
	// lwz r8,56(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 56);
	// stw r8,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// lwz r7,60(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 60);
	// stw r7,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r7.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8226AF98) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8226AFB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lfs f0,11128(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 11128);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8226BC20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35f4
	ctx.lr = 0x8226BC28;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// lwz r10,260(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8226bf58
	ctx.lr = 0x8226BC64;
	sub_8226BF58(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r9,116(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// mulli r10,r10,112
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(112));
	// add r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8226bcbc
	if (ctx.cr6.eq) goto loc_8226BCBC;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226BCB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,76(r24)
	REX_STORE_U32(ctx.r24.u32 + 76, ctx.r3.u32);
loc_8226BCBC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x825e3644
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8226DFF8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8226e058
	ctx.lr = 0x8226E018;
	sub_8226E058(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226e040
	if (ctx.cr6.eq) goto loc_8226E040;
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// lwz r11,31256(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 31256);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,31256(r10)
	REX_STORE_U32(ctx.r10.u32 + 31256, ctx.r11.u32);
	// bl 0x825dd800
	ctx.lr = 0x8226E03C;
	sub_825DD800(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8226E040:
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

DEFINE_REX_FUNC(sub_82270230) {
	REX_FUNC_PROLOGUE();
	// li r3,25
	ctx.r3.s64 = 25;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82270340) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35f8
	ctx.lr = 0x82270348;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r10,r11,16700
	ctx.r10.s64 = ctx.r11.s64 + 16700;
	// stw r27,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r27,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// addi r7,r9,17232
	ctx.r7.s64 = ctx.r9.s64 + 17232;
	// lfs f13,16700(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16700);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// addi r6,r8,-23528
	ctx.r6.s64 = ctx.r8.s64 + -23528;
	// lfs f0,-5796(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -5796);
	ctx.f0.f64 = double(temp.f32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// li r25,1
	ctx.r25.s64 = 1;
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f12,224(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 224);
	ctx.f12.f64 = double(temp.f32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stfs f12,48(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// addi r30,r3,112
	ctx.r30.s64 = ctx.r3.s64 + 112;
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f13,76(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f0,84(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f13,92(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stb r27,96(r3)
	REX_STORE_U8(ctx.r3.u32 + 96, ctx.r27.u8);
	// stw r27,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r27.u32);
	// stw r6,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stb r25,128(r3)
	REX_STORE_U8(ctx.r3.u32 + 128, ctx.r25.u8);
	// stw r27,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r27.u32);
	// stw r27,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r27.u32);
	// stw r27,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r27.u32);
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// lwz r29,116(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x822704f4
	if (ctx.cr6.lt) goto loc_822704F4;
	// ble cr6,0x822704b8
	if (!ctx.cr6.gt) goto loc_822704B8;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x822704b8
	if (!ctx.cr6.lt) goto loc_822704B8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82270434
	if (ctx.cr6.eq) goto loc_82270434;
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r28,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,31252(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 31252);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,31252(r10)
	REX_STORE_U32(ctx.r10.u32 + 31252, ctx.r11.u32);
	// bl 0x825dd818
	ctx.lr = 0x8227042C;
	sub_825DD818(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x82270438
	goto loc_82270438;
loc_82270434:
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_82270438:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8227047c
	if (!ctx.cr6.gt) goto loc_8227047C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_8227044C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227046c
	if (ctx.cr6.eq) goto loc_8227046C;
	// lwz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ldx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// std r6,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r6.u64);
	// ld r5,8(r7)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// std r5,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r5.u64);
loc_8227046C:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x8227044c
	if (!ctx.cr0.eq) goto loc_8227044C;
loc_8227047C:
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822704ac
	if (ctx.cr6.eq) goto loc_822704AC;
	// lbz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822704a8
	if (ctx.cr6.eq) goto loc_822704A8;
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// lwz r11,31256(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 31256);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,31256(r10)
	REX_STORE_U32(ctx.r10.u32 + 31256, ctx.r11.u32);
	// bl 0x825dd800
	ctx.lr = 0x822704A8;
	sub_825DD800(ctx, base);
loc_822704A8:
	// stw r27,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
loc_822704AC:
	// stw r26,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r26.u32);
	// stw r28,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// stb r25,16(r30)
	REX_STORE_U8(ctx.r30.u32 + 16, ctx.r25.u8);
loc_822704B8:
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x822704f4
	if (!ctx.cr6.lt) goto loc_822704F4;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r9,r29,r28
	ctx.r9.u64 = ctx.r28.u64 - ctx.r29.u64;
loc_822704C8:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822704e8
	if (ctx.cr0.eq) goto loc_822704E8;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// ld r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r6,8(r8)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// std r7,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// std r6,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
loc_822704E8:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x822704c8
	if (!ctx.cr0.eq) goto loc_822704C8;
loc_822704F4:
	// stw r28,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82270530
	if (!ctx.cr6.gt) goto loc_82270530;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82270508:
	// lwz r9,124(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// add r8,r11,r24
	ctx.r8.u64 = ctx.r11.u64 + ctx.r24.u64;
	// ldx r7,r11,r24
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r24.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// std r7,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// ld r5,8(r8)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// std r5,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r5.u64);
	// bne 0x82270508
	if (!ctx.cr0.eq) goto loc_82270508;
loc_82270530:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82272988
	ctx.lr = 0x82270538;
	sub_82272988(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x825e3648
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8227EC40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lbz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227ecbc
	if (ctx.cr6.eq) goto loc_8227ECBC;
	// lwz r9,128(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r1,-96
	ctx.r8.s64 = ctx.r1.s64 + -96;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r6,r1,-96
	ctx.r6.s64 = ctx.r1.s64 + -96;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// rlwinm r9,r5,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ld r31,0(r7)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// ld r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// ldx r30,r9,r11
	ctx.r30.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// std r31,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r31.u64);
	// std r7,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r7.u64);
	// ld r8,0(r6)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// ld r7,8(r6)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// stdx r30,r11,r10
	REX_STORE_U64(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u64);
	// ld r6,8(r4)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// std r6,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, ctx.r6.u64);
	// lwz r11,128(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stdx r8,r11,r9
	REX_STORE_U64(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u64);
	// std r7,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, ctx.r7.u64);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8227ECBC:
	// lwz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// rlwinm r9,r4,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// li r11,8
	ctx.r11.s64 = 8;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r1,-80
	ctx.r10.s64 = ctx.r1.s64 + -80;
	// addi r7,r10,-8
	ctx.r7.s64 = ctx.r10.s64 + -8;
	// addi r10,r8,-8
	ctx.r10.s64 = ctx.r8.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8227ECDC:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r7)
	ea = 8 + ctx.r7.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r7.u32 = ea;
	// bdnz 0x8227ecdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227ECDC;
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// rlwinm r10,r5,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// li r8,8
	ctx.r8.s64 = 8;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r7,-8
	ctx.r9.s64 = ctx.r7.s64 + -8;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8227ED08:
	// ldu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r8,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r8.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8227ed08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227ED08;
	// lwz r8,88(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r9,r1,-88
	ctx.r9.s64 = ctx.r1.s64 + -88;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8227ED2C:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8227ed2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227ED2C;
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82286798) {
	REX_FUNC_PROLOGUE();
	// li r3,30
	ctx.r3.s64 = 30;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82286968) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f12,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f11,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f9,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// addi r9,r11,16700
	ctx.r9.s64 = ctx.r11.s64 + 16700;
	// lfs f7,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f8
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// lfs f5,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// fmuls f4,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// lfs f0,16700(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16700);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-20(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// lfs f13,-5796(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -5796);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// fmsubs f3,f9,f7,f10
	ctx.f3.f64 = double(float(std::fma(ctx.f9.f64, ctx.f7.f64, -ctx.f10.f64)));
	// fmsubs f2,f12,f5,f6
	ctx.f2.f64 = double(float(std::fma(ctx.f12.f64, ctx.f5.f64, -ctx.f6.f64)));
	// fmsubs f1,f8,f11,f4
	ctx.f1.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, -ctx.f4.f64)));
	// fmuls f12,f3,f3
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fmadds f11,f2,f2,f12
	ctx.f11.f64 = double(float(std::fma(ctx.f2.f64, ctx.f2.f64, ctx.f12.f64)));
	// fmadds f10,f1,f1,f11
	ctx.f10.f64 = double(float(std::fma(ctx.f1.f64, ctx.f1.f64, ctx.f11.f64)));
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// fdivs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 / ctx.f9.f64));
	// fmuls f7,f1,f8
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// stfs f7,-32(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// fmuls f6,f3,f8
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// stfs f6,-28(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// fmuls f5,f2,f8
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f8.f64));
	// stfs f5,-24(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// ld r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r6,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r6.u64);
	// std r7,40(r3)
	REX_STORE_U64(ctx.r3.u32 + 40, ctx.r7.u64);
	// lfs f3,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f4,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,32(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmsubs f9,f3,f2,f10
	ctx.f9.f64 = double(float(std::fma(ctx.f3.f64, ctx.f2.f64, -ctx.f10.f64)));
	// fmuls f8,f4,f2
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f2.f64));
	// fmuls f7,f3,f1
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// fmuls f6,f9,f9
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmsubs f5,f12,f1,f8
	ctx.f5.f64 = double(float(std::fma(ctx.f12.f64, ctx.f1.f64, -ctx.f8.f64)));
	// fmsubs f4,f4,f11,f7
	ctx.f4.f64 = double(float(std::fma(ctx.f4.f64, ctx.f11.f64, -ctx.f7.f64)));
	// fmadds f3,f5,f5,f6
	ctx.f3.f64 = double(float(std::fma(ctx.f5.f64, ctx.f5.f64, ctx.f6.f64)));
	// fmadds f2,f4,f4,f3
	ctx.f2.f64 = double(float(std::fma(ctx.f4.f64, ctx.f4.f64, ctx.f3.f64)));
	// fsqrts f1,f2
	ctx.f1.f64 = double(float(sqrt(ctx.f2.f64)));
	// fdivs f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f1.f64));
	// fmuls f10,f9,f12
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f10,-12(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fmuls f9,f5,f12
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// stfs f9,-8(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// fmuls f11,f4,f12
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// stfs f11,-16(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// ld r5,8(r8)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// ld r4,0(r8)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// std r4,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r4.u64);
	// std r5,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r5.u64);
	// lfs f7,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,32(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fmuls f1,f8,f6
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmsubs f12,f7,f6,f2
	ctx.f12.f64 = double(float(std::fma(ctx.f7.f64, ctx.f6.f64, -ctx.f2.f64)));
	// fmuls f11,f7,f5
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmsubs f10,f5,f3,f1
	ctx.f10.f64 = double(float(std::fma(ctx.f5.f64, ctx.f3.f64, -ctx.f1.f64)));
	// fmuls f9,f12,f12
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmsubs f8,f8,f4,f11
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f4.f64, -ctx.f11.f64)));
	// fmadds f7,f10,f10,f9
	ctx.f7.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f9.f64)));
	// fmadds f6,f8,f8,f7
	ctx.f6.f64 = double(float(std::fma(ctx.f8.f64, ctx.f8.f64, ctx.f7.f64)));
	// fsqrts f5,f6
	ctx.f5.f64 = double(float(sqrt(ctx.f6.f64)));
	// fdivs f4,f13,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 / ctx.f5.f64));
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// fmuls f3,f8,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// stfs f3,-16(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fmuls f2,f12,f4
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// stfs f2,-12(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fmuls f1,f10,f4
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// stfs f1,-8(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// ld r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// std r9,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82294AA8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e360c
	ctx.lr = 0x82294AB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822630f0
	ctx.lr = 0x82294ABC;
	sub_822630F0(ctx, base);
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82294ad0
	if (ctx.cr6.eq) goto loc_82294AD0;
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// bl 0x8228e190
	ctx.lr = 0x82294AD0;
	sub_8228E190(ctx, base);
loc_82294AD0:
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82294b04
	if (!ctx.cr6.gt) goto loc_82294B04;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82294AE4:
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 252);
	// lwzx r3,r11,r29
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x8228d3c8
	ctx.lr = 0x82294AF0;
	sub_8228D3C8(ctx, base);
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82294ae4
	if (ctx.cr6.lt) goto loc_82294AE4;
loc_82294B04:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82294b38
	if (!ctx.cr6.gt) goto loc_82294B38;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82294B14:
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 252);
	// lwzx r3,r11,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// bl 0x82292910
	ctx.lr = 0x82294B24;
	sub_82292910(ctx, base);
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82294b14
	if (ctx.cr6.lt) goto loc_82294B14;
loc_82294B38:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82294b68
	if (!ctx.cr6.gt) goto loc_82294B68;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82294B48:
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 252);
	// lwzx r3,r11,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x8228e738
	ctx.lr = 0x82294B54;
	sub_8228E738(ctx, base);
	// lwz r10,244(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82294b48
	if (ctx.cr6.lt) goto loc_82294B48;
loc_82294B68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825e365c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82299BFC) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82299D80) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lwz r6,8(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r5,4(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r9,r6,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82299cc8
	ctx.lr = 0x82299DC8;
	sub_82299CC8(ctx, base);
	// lfs f0,8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f5,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f2,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f4,f5,f12
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmadds f1,f9,f3,f4
	ctx.f1.f64 = double(float(std::fma(ctx.f9.f64, ctx.f3.f64, ctx.f4.f64)));
	// fmadds f0,f2,f6,f1
	ctx.f0.f64 = double(float(std::fma(ctx.f2.f64, ctx.f6.f64, ctx.f1.f64)));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82299e14
	if (ctx.cr6.gt) goto loc_82299E14;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82299E14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8229DF10) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r10,r11,-20972
	ctx.r10.s64 = ctx.r11.s64 + -20972;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8229e0f0
	ctx.lr = 0x8229DF40;
	sub_8229E0F0(ctx, base);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// addi r7,r9,-24092
	ctx.r7.s64 = ctx.r9.s64 + -24092;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r7,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8229df64
	if (ctx.cr6.eq) goto loc_8229DF64;
	// bl 0x825dd800
	ctx.lr = 0x8229DF60;
	sub_825DD800(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8229DF64:
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

DEFINE_REX_FUNC(sub_822A0F58) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35ec
	ctx.lr = 0x822A0F60;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x825e4164
	ctx.lr = 0x822A0F68;
	__savefpr_27(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,16(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822a1330
	if (ctx.cr6.eq) goto loc_822A1330;
	// lbz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 12);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a0ff8
	if (ctx.cr6.eq) goto loc_822A0FF8;
	// lwz r11,712(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 712);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822a0ff4
	if (!ctx.cr6.gt) goto loc_822A0FF4;
	// addi r30,r29,108
	ctx.r30.s64 = ctx.r29.s64 + 108;
	// lis r27,-32118
	ctx.r27.s64 = -2104885248;
loc_822A0FB8:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822a0fe0
	if (ctx.cr6.eq) goto loc_822A0FE0;
	// lwz r11,32092(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 32092);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a0fe0
	if (ctx.cr6.eq) goto loc_822A0FE0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A0FDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_822A0FE0:
	// lwz r11,712(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 712);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,176
	ctx.r30.s64 = ctx.r30.s64 + 176;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822a0fb8
	if (ctx.cr6.lt) goto loc_822A0FB8;
loc_822A0FF4:
	// stw r31,712(r29)
	REX_STORE_U32(ctx.r29.u32 + 712, ctx.r31.u32);
loc_822A0FF8:
	// lbz r9,20(r26)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r26.u32 + 20);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822a1010
	if (!ctx.cr6.eq) goto loc_822A1010;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// beq cr6,0x822a1018
	if (ctx.cr6.eq) goto loc_822A1018;
loc_822A1010:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// b 0x822a101c
	goto loc_822A101C;
loc_822A1018:
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
loc_822A101C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822a1034
	if (ctx.cr6.eq) goto loc_822A1034;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x822a1044
	if (ctx.cr6.eq) goto loc_822A1044;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x822a1048
	goto loc_822A1048;
loc_822A1034:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x822a1044
	if (ctx.cr6.eq) goto loc_822A1044;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x822a1048
	goto loc_822A1048;
loc_822A1044:
	// lwz r11,204(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
loc_822A1048:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822a1064
	if (ctx.cr6.eq) goto loc_822A1064;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x822a1070
	if (ctx.cr6.eq) goto loc_822A1070;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x822a1074
	goto loc_822A1074;
loc_822A1064:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// bne cr6,0x822a1074
	if (!ctx.cr6.eq) goto loc_822A1074;
loc_822A1070:
	// lwz r11,204(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 204);
loc_822A1074:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// addi r9,r10,10904
	ctx.r9.s64 = ctx.r10.s64 + 10904;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lfs f30,10904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 10904);
	ctx.f30.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f30,124(r1)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfs f31,5796(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 5796);
	ctx.f31.f64 = double(temp.f32);
	// addi r30,r11,64
	ctx.r30.s64 = ctx.r11.s64 + 64;
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x822a09d0
	ctx.lr = 0x822A10B0;
	sub_822A09D0(ctx, base);
	// lwz r8,4(r25)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r7,28(r26)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + 28);
	// lwz r6,712(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 712);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x822a12cc
	if (!ctx.cr6.lt) goto loc_822A12CC;
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f11,4(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f13,21396(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 21396);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x822a1118
	if (!ctx.cr6.gt) goto loc_822A1118;
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// fmadds f9,f11,f11,f12
	ctx.f9.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f12.f64)));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fdivs f7,f30,f8
	ctx.f7.f64 = double(float(ctx.f30.f64 / ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f5,f11,f7
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fneg f4,f6
	ctx.f4.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// stfs f4,116(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// b 0x822a1148
	goto loc_822A1148;
loc_822A1118:
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,0(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f13.f64)));
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// fdivs f8,f30,f9
	ctx.f8.f64 = double(float(ctx.f30.f64 / ctx.f9.f64));
	// fmuls f7,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmuls f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f6,116(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fneg f5,f7
	ctx.f5.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// stfs f5,112(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_822A1148:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822A115C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32125
	ctx.r9.s64 = -2105344000;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r11,17232
	ctx.r29.s64 = ctx.r11.s64 + 17232;
	// lfs f0,-19584(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -19584);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,588(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 588);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822a1184
	if (!ctx.cr6.gt) goto loc_822A1184;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_822A1184:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82267f88
	ctx.lr = 0x822A1194;
	sub_82267F88(ctx, base);
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822a12cc
	if (!ctx.cr6.gt) goto loc_822A12CC;
	// lfs f31,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,356(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 356);
	ctx.f27.f64 = double(temp.f32);
loc_822A11B4:
	// extsw r10,r31
	ctx.r10.s64 = ctx.r31.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fdivs f9,f27,f11
	ctx.f9.f64 = double(float(ctx.f27.f64 / ctx.f11.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82267f88
	ctx.lr = 0x822A11F8;
	sub_82267F88(ctx, base);
	// lfs f13,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fneg f6,f13
	ctx.f6.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f11,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// fneg f4,f11
	ctx.f4.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fneg f5,f12
	ctx.f5.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lfs f0,140(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmuls f3,f31,f6
	ctx.f3.f64 = double(float(ctx.f31.f64 * ctx.f6.f64));
	// fmuls f2,f29,f6
	ctx.f2.f64 = double(float(ctx.f29.f64 * ctx.f6.f64));
	// fmuls f1,f4,f28
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f28.f64));
	// fmuls f10,f6,f28
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f28.f64));
	// fmadds f9,f30,f5,f3
	ctx.f9.f64 = double(float(std::fma(ctx.f30.f64, ctx.f5.f64, ctx.f3.f64)));
	// fmadds f8,f31,f4,f2
	ctx.f8.f64 = double(float(std::fma(ctx.f31.f64, ctx.f4.f64, ctx.f2.f64)));
	// fmadds f7,f31,f5,f1
	ctx.f7.f64 = double(float(std::fma(ctx.f31.f64, ctx.f5.f64, ctx.f1.f64)));
	// fmsubs f3,f31,f0,f10
	ctx.f3.f64 = double(float(std::fma(ctx.f31.f64, ctx.f0.f64, -ctx.f10.f64)));
	// fmadds f2,f0,f28,f9
	ctx.f2.f64 = double(float(std::fma(ctx.f0.f64, ctx.f28.f64, ctx.f9.f64)));
	// fmadds f1,f30,f0,f8
	ctx.f1.f64 = double(float(std::fma(ctx.f30.f64, ctx.f0.f64, ctx.f8.f64)));
	// fmadds f10,f29,f0,f7
	ctx.f10.f64 = double(float(std::fma(ctx.f29.f64, ctx.f0.f64, ctx.f7.f64)));
	// fnmsubs f9,f29,f5,f3
	ctx.f9.f64 = double(float(-std::fma(ctx.f29.f64, ctx.f5.f64, -ctx.f3.f64)));
	// fnmsubs f8,f29,f4,f2
	ctx.f8.f64 = double(float(-std::fma(ctx.f29.f64, ctx.f4.f64, -ctx.f2.f64)));
	// fnmsubs f7,f5,f28,f1
	ctx.f7.f64 = double(float(-std::fma(ctx.f5.f64, ctx.f28.f64, -ctx.f1.f64)));
	// fnmsubs f6,f30,f6,f10
	ctx.f6.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f6.f64, -ctx.f10.f64)));
	// fnmsubs f5,f30,f4,f9
	ctx.f5.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f4.f64, -ctx.f9.f64)));
	// fmuls f4,f0,f8
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f3,f7,f13
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f2,f12,f8
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmuls f1,f8,f13
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmadds f10,f6,f11,f4
	ctx.f10.f64 = double(float(std::fma(ctx.f6.f64, ctx.f11.f64, ctx.f4.f64)));
	// fmadds f9,f5,f12,f3
	ctx.f9.f64 = double(float(std::fma(ctx.f5.f64, ctx.f12.f64, ctx.f3.f64)));
	// fmadds f4,f5,f11,f2
	ctx.f4.f64 = double(float(std::fma(ctx.f5.f64, ctx.f11.f64, ctx.f2.f64)));
	// fmsubs f3,f5,f0,f1
	ctx.f3.f64 = double(float(std::fma(ctx.f5.f64, ctx.f0.f64, -ctx.f1.f64)));
	// fmadds f2,f5,f13,f10
	ctx.f2.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f1,f6,f0,f9
	ctx.f1.f64 = double(float(std::fma(ctx.f6.f64, ctx.f0.f64, ctx.f9.f64)));
	// fmadds f0,f7,f0,f4
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f4.f64)));
	// fnmsubs f10,f6,f12,f3
	ctx.f10.f64 = double(float(-std::fma(ctx.f6.f64, ctx.f12.f64, -ctx.f3.f64)));
	// fnmsubs f9,f7,f12,f2
	ctx.f9.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f12.f64, -ctx.f2.f64)));
	// stfs f9,144(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fnmsubs f8,f11,f8,f1
	ctx.f8.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f8.f64, -ctx.f1.f64)));
	// stfs f8,148(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fnmsubs f6,f6,f13,f0
	ctx.f6.f64 = double(float(-std::fma(ctx.f6.f64, ctx.f13.f64, -ctx.f0.f64)));
	// stfs f6,152(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fnmsubs f5,f7,f11,f10
	ctx.f5.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f11.f64, -ctx.f10.f64)));
	// stfs f5,156(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x822a09d0
	ctx.lr = 0x822A12BC;
	sub_822A09D0(ctx, base);
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 24);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822a11b4
	if (ctx.cr6.lt) goto loc_822A11B4;
loc_822A12CC:
	// lbz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a1330
	if (ctx.cr6.eq) goto loc_822A1330;
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r10,712(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 712);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822a1330
	if (ctx.cr6.eq) goto loc_822A1330;
	// lwz r3,4(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r11,712(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a1330
	if (ctx.cr6.eq) goto loc_822A1330;
	// lwz r11,704(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 704);
	// lwz r10,144(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 144);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822a1324
	if (ctx.cr6.eq) goto loc_822A1324;
	// addi r5,r25,16
	ctx.r5.s64 = ctx.r25.s64 + 16;
	// addi r4,r25,80
	ctx.r4.s64 = ctx.r25.s64 + 80;
	// bl 0x82275f60
	ctx.lr = 0x822A1314;
	sub_82275F60(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x825e41b0
	ctx.lr = 0x822A1320;
	__restfpr_27(ctx, base);
	// b 0x825e363c
	__restgprlr_21(ctx, base);
	return;
loc_822A1324:
	// addi r5,r25,80
	ctx.r5.s64 = ctx.r25.s64 + 80;
	// addi r4,r25,16
	ctx.r4.s64 = ctx.r25.s64 + 16;
	// bl 0x82275f60
	ctx.lr = 0x822A1330;
	sub_82275F60(ctx, base);
loc_822A1330:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x825e41b0
	ctx.lr = 0x822A133C;
	__restfpr_27(ctx, base);
	// b 0x825e363c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822B75F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e3608
	ctx.lr = 0x822B75F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x822a9d28
	ctx.lr = 0x822B7610;
	sub_822A9D28(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x822b7620
	if (!ctx.cr0.eq) goto loc_822B7620;
loc_822B7618:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822b76b0
	goto loc_822B76B0;
loc_822B7620:
	// lis r30,16
	ctx.r30.s64 = 1048576;
	// rlwinm. r10,r29,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,3
	ctx.r11.s64 = 3;
	// ori r30,r30,1
	ctx.r30.u64 = ctx.r30.u64 | 1;
	// beq 0x822b7640
	if (ctx.cr0.eq) goto loc_822B7640;
	// lis r30,48
	ctx.r30.s64 = 3145728;
	// li r11,2
	ctx.r11.s64 = 2;
	// ori r30,r30,1
	ctx.r30.u64 = ctx.r30.u64 | 1;
loc_822B7640:
	// rlwinm. r10,r29,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822b764c
	if (ctx.cr0.eq) goto loc_822B764C;
	// oris r30,r30,64
	ctx.r30.u64 = ctx.r30.u64 | 4194304;
loc_822B764C:
	// lis r4,-32128
	ctx.r4.s64 = -2105540608;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwimi r4,r11,28,1,3
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x70000000) | (ctx.r4.u64 & 0xFFFFFFFF8FFFFFFF);
	// bl 0x822a9d28
	ctx.lr = 0x822B765C;
	sub_822A9D28(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822b7674
	if (!ctx.cr0.eq) goto loc_822B7674;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a9dc0
	ctx.lr = 0x822B7670;
	sub_822A9DC0(ctx, base);
	// b 0x822b7618
	goto loc_822B7618;
loc_822B7674:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r10,r28,0,6,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x3FFFFFC;
	// ori r9,r3,3
	ctx.r9.u64 = ctx.r3.u64 | 3;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// rlwinm r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// stw r8,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_822B76B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825e3658
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822B9700) {
	REX_FUNC_PROLOGUE();
	// lwz r3,10752(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 10752);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B98B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12072(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12072);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B9BE0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r3,r11,4,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B9E88) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12628(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12628);
	// stw r4,12216(r3)
	REX_STORE_U32(ctx.r3.u32 + 12216, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,10388(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 10388);
	// rlwinm r11,r8,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x822b9ec0
	if (ctx.cr6.eq) goto loc_822B9EC0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x822b9ec0
	if (ctx.cr6.eq) goto loc_822B9EC0;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x822b9ec0
	if (ctx.cr6.eq) goto loc_822B9EC0;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_822B9EC0:
	// rlwinm r10,r8,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x1;
	// xor. r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// addi r9,r9,-3
	ctx.r9.s64 = ctx.r9.s64 + -3;
	// rlwinm r11,r11,17,0,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r7,r7,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// li r12,1
	ctx.r12.s64 = 1;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rldicr r12,r12,52,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFFFFFFFFFFFFFFF;
	// rlwimi r11,r8,0,16,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF) | (ctx.r11.u64 & 0xF0000);
	// stw r11,10388(r3)
	REX_STORE_U32(ctx.r3.u32 + 10388, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822BE400) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r10,r4,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// addi r10,r10,2286
	ctx.r10.s64 = ctx.r10.s64 + 2286;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe. r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// stw r11,12(r5)
	REX_STORE_U32(ctx.r5.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C21E0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9936));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// b 0x822c1868
	sub_822C1868(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822C26D0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822c18f0
	ctx.lr = 0x822C2700;
	sub_822C18F0(ctx, base);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x822c1618
	ctx.lr = 0x822C2710;
	sub_822C1618(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,19892(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 19892);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822c2760
	if (!ctx.cr0.eq) goto loc_822C2760;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bc428
	ctx.lr = 0x822C272C;
	sub_822BC428(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822c2760
	if (ctx.cr0.eq) goto loc_822C2760;
	// lwz r11,316(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 316);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,316(r31)
	REX_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,320
	ctx.r10.s64 = ctx.r11.s64 + 320;
	// lbz r10,320(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 320);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,320(r11)
	REX_STORE_U8(ctx.r11.u32 + 320, ctx.r10.u8);
loc_822C2760:
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
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

DEFINE_REX_FUNC(sub_822CAAC0) {
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
	// bl 0x8275920c
	ctx.lr = 0x822CAAD8;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822caaec
	if (!ctx.cr6.eq) goto loc_822CAAEC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2084(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2084);
	// b 0x822caaf4
	goto loc_822CAAF4;
loc_822CAAEC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2088(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2088);
loc_822CAAF4:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822ca9f0
	ctx.lr = 0x822CAB0C;
	sub_822CA9F0(ctx, base);
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

DEFINE_REX_FUNC(sub_822CC030) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// std r5,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	REX_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x827595cc
	ctx.lr = 0x822CC07C;
	__imp___vsnprintf(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x822cc098
	if (ctx.cr6.eq) goto loc_822CC098;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CC094;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822cc09c
	goto loc_822CC09C;
loc_822CC098:
	// bl 0x8275918c
	ctx.lr = 0x822CC09C;
	__imp__DbgPrint(ctx, base);
loc_822CC09C:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CE368) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,256
	ctx.r9.s64 = 256;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,1022
	ctx.r11.s64 = ctx.r3.s64 + 1022;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822CE378:
	// li r9,255
	ctx.r9.s64 = 255;
	// divwu r9,r10,r9
	ctx.r9.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// addi r10,r10,1023
	ctx.r10.s64 = ctx.r10.s64 + 1023;
	// rlwinm r9,r9,6,16,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFC0;
	// sth r9,-1022(r11)
	REX_STORE_U16(ctx.r11.u32 + -1022, ctx.r9.u16);
	// sth r9,-510(r11)
	REX_STORE_U16(ctx.r11.u32 + -510, ctx.r9.u16);
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x822ce378
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822CE378;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x822ce060
	sub_822CE060(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822D0B10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e3600
	ctx.lr = 0x822D0B18;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,68
	ctx.r27.s64 = ctx.r3.s64 + 68;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8275951c
	ctx.lr = 0x822D0B34;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r29,0(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822d0c30
	if (!ctx.cr6.eq) goto loc_822D0C30;
	// lis r29,256
	ctx.r29.s64 = 16777216;
	// stw r30,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// slw r11,r29,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r11.u8 & 0x3F));
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// bne 0x822d0bf4
	if (!ctx.cr0.eq) goto loc_822D0BF4;
	// bl 0x8275920c
	ctx.lr = 0x822D0B78;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822d0b8c
	if (!ctx.cr6.eq) goto loc_822D0B8C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2084(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2084);
	// b 0x822d0b94
	goto loc_822D0B94;
loc_822D0B8C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2088(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2088);
loc_822D0B94:
	// li r10,6
	ctx.r10.s64 = 6;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,11416
	ctx.r11.s64 = ctx.r11.s64 + 11416;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822D0BA8:
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// slw r10,r29,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r8.u8 & 0x3F));
	// and. r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822d0bd0
	if (ctx.cr0.eq) goto loc_822D0BD0;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// stw r10,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
loc_822D0BD0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// bdnz 0x822d0ba8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D0BA8;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d0bf4
	if (!ctx.cr6.eq) goto loc_822D0BF4;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_822D0BF4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8275950c
	ctx.lr = 0x822D0C00;
	__imp__KfReleaseSpinLock(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d0908
	ctx.lr = 0x822D0C08;
	sub_822D0908(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d0c1c
	if (ctx.cr6.eq) goto loc_822D0C1C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8275969c
	ctx.lr = 0x822D0C1C;
	__imp__KeUnlockL2(ctx, base);
loc_822D0C1C:
	// lwsync 
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x822d0c40
	goto loc_822D0C40;
loc_822D0C30:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8275950c
	ctx.lr = 0x822D0C3C;
	__imp__KfReleaseSpinLock(ctx, base);
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
loc_822D0C40:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825e3650
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822D8548) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35f8
	ctx.lr = 0x822D8550;
	__savegprlr_24(ctx, base);
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,24180(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 24180);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r30,r3,23572
	ctx.r30.s64 = ctx.r3.s64 + 23572;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d8580
	if (ctx.cr0.eq) goto loc_822D8580;
loc_822D8570:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822d80f8
	ctx.lr = 0x822D8578;
	sub_822D80F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d88a8
	goto loc_822D88A8;
loc_822D8580:
	// li r5,260
	ctx.r5.s64 = 260;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825df0c0
	ctx.lr = 0x822D858C;
	sub_825DF0C0(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stb r25,371(r1)
	REX_STORE_U8(ctx.r1.u32 + 371, ctx.r25.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822D859C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822d859c
	if (!ctx.cr6.eq) goto loc_822D859C;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822d85ec
	if (ctx.cr6.lt) goto loc_822D85EC;
loc_822D85D0:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// beq cr6,0x822d85ec
	if (ctx.cr6.eq) goto loc_822D85EC;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822d85d0
	if (!ctx.cr6.lt) goto loc_822D85D0;
loc_822D85EC:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// bne cr6,0x822d8570
	if (!ctx.cr6.eq) goto loc_822D8570;
	// stb r25,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r25.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x827592bc
	ctx.lr = 0x822D8608;
	__imp__RtlInitAnsiString(ctx, base);
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,24176
	ctx.r3.s64 = ctx.r11.s64 + 24176;
	// bl 0x8275976c
	ctx.lr = 0x822D8618;
	__imp__ObCreateSymbolicLink(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822d8570
	if (ctx.cr0.lt) goto loc_822D8570;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r5,r11,23764
	ctx.r5.s64 = ctx.r11.s64 + 23764;
	// addi r4,r10,23756
	ctx.r4.s64 = ctx.r10.s64 + 23756;
	// addi r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 1;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x827595dc
	ctx.lr = 0x822D863C;
	__imp__sprintf(ctx, base);
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822d7920
	ctx.lr = 0x822D864C;
	sub_822D7920(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822d8570
	if (ctx.cr0.lt) goto loc_822D8570;
	// li r5,260
	ctx.r5.s64 = 260;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825df0c0
	ctx.lr = 0x822D8664;
	sub_825DF0C0(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stb r25,371(r1)
	REX_STORE_U8(ctx.r1.u32 + 371, ctx.r25.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822D8670:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822d8670
	if (!ctx.cr6.eq) goto loc_822D8670;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822d86d0
	if (ctx.cr6.lt) goto loc_822D86D0;
loc_822D86A8:
	// lbz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,46
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 46, ctx.xer);
	// beq cr6,0x822d86d0
	if (ctx.cr6.eq) goto loc_822D86D0;
	// cmpwi cr6,r10,92
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 92, ctx.xer);
	// beq cr6,0x822d86d0
	if (ctx.cr6.eq) goto loc_822D86D0;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822d86a8
	if (!ctx.cr6.lt) goto loc_822D86A8;
loc_822D86D0:
	// lbz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// beq cr6,0x822d86e0
	if (ctx.cr6.eq) goto loc_822D86E0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_822D86E0:
	// lwz r10,596(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 596);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// rlwinm. r10,r10,0,12,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFC000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r27,r11,23748
	ctx.r27.s64 = ctx.r11.s64 + 23748;
	// beq 0x822d87c4
	if (ctx.cr0.eq) goto loc_822D87C4;
	// addi r28,r30,16
	ctx.r28.s64 = ctx.r30.s64 + 16;
	// lis r26,-32122
	ctx.r26.s64 = -2105147392;
loc_822D8700:
	// lbz r11,-1740(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + -1740);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822d8570
	if (!ctx.cr0.eq) goto loc_822D8570;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,480
	ctx.r10.s64 = ctx.r1.s64 + 480;
	// subf r11,r11,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r11.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827595dc
	ctx.lr = 0x822D872C;
	__imp__sprintf(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,26624
	ctx.r8.s64 = 1744830464;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822a9de0
	ctx.lr = 0x822D874C;
	sub_822A9DE0(ctx, base);
	// stw r3,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822d8570
	if (ctx.cr6.eq) goto loc_822D8570;
	// lwz r11,596(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 596);
	// rlwinm r11,r11,18,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822d878c
	if (!ctx.cr6.eq) goto loc_822D878C;
	// lwz r11,384(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d8780
	if (ctx.cr6.eq) goto loc_822D8780;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// b 0x822d8794
	goto loc_822D8794;
loc_822D8780:
	// li r11,1
	ctx.r11.s64 = 1;
	// rldicr r11,r11,32,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// b 0x822d8794
	goto loc_822D8794;
loc_822D878C:
	// li r11,0
	ctx.r11.s64 = 0;
	// oris r11,r11,65520
	ctx.r11.u64 = ctx.r11.u64 | 4293918720;
loc_822D8794:
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822ab378
	ctx.lr = 0x822D87A8;
	sub_822AB378(ctx, base);
	// lwzu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// bl 0x825f3340
	ctx.lr = 0x822D87B0;
	sub_825F3340(ctx, base);
	// lwz r11,596(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 596);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r11,r11,18,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822d8700
	if (ctx.cr6.lt) goto loc_822D8700;
loc_822D87C4:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,480
	ctx.r10.s64 = ctx.r1.s64 + 480;
	// subf r11,r11,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r11.u64;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_822D87D4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827595dc
	ctx.lr = 0x822D87E8;
	__imp__sprintf(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x822ab530
	ctx.lr = 0x822D87F4;
	sub_822AB530(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822d87d4
	if (!ctx.cr0.eq) goto loc_822D87D4;
	// stw r25,348(r30)
	REX_STORE_U32(ctx.r30.u32 + 348, ctx.r25.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r25,352(r30)
	REX_STORE_U32(ctx.r30.u32 + 352, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r25,356(r30)
	REX_STORE_U32(ctx.r30.u32 + 356, ctx.r25.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r25,360(r30)
	REX_STORE_U32(ctx.r30.u32 + 360, ctx.r25.u32);
	// addi r31,r30,348
	ctx.r31.s64 = ctx.r30.s64 + 348;
	// stw r25,364(r30)
	REX_STORE_U32(ctx.r30.u32 + 364, ctx.r25.u32);
	// bl 0x822aaaf0
	ctx.lr = 0x822D8824;
	sub_822AAAF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,364(r30)
	REX_STORE_U32(ctx.r30.u32 + 364, ctx.r3.u32);
	// beq 0x822d8570
	if (ctx.cr0.eq) goto loc_822D8570;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r25,356(r30)
	REX_STORE_U32(ctx.r30.u32 + 356, ctx.r25.u32);
	// stw r25,360(r30)
	REX_STORE_U32(ctx.r30.u32 + 360, ctx.r25.u32);
	// bl 0x825e3710
	ctx.lr = 0x822D8848;
	sub_825E3710(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x822aa068
	ctx.lr = 0x822D8860;
	sub_822AA068(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,364(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 364);
	// bl 0x822aac80
	ctx.lr = 0x822D886C;
	sub_822AAC80(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8275961c
	ctx.lr = 0x822D8874;
	__imp__VdGetCurrentDisplayInformation(ctx, base);
	// li r11,2048
	ctx.r11.s64 = 2048;
	// lbz r10,600(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 600);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,380(r30)
	REX_STORE_U32(ctx.r30.u32 + 380, ctx.r11.u32);
	// lwz r9,596(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 596);
	// stw r25,584(r30)
	REX_STORE_U32(ctx.r30.u32 + 584, ctx.r25.u32);
	// rlwinm r9,r9,0,12,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFC0FFFFF;
	// stw r9,596(r30)
	REX_STORE_U32(ctx.r30.u32 + 596, ctx.r9.u32);
	// lbz r11,389(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 389);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwimi r10,r11,2,24,24
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x80) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF7F);
	// stb r10,600(r30)
	REX_STORE_U8(ctx.r30.u32 + 600, ctx.r10.u8);
loc_822D88A8:
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x825e3648
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822F0768) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
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
	// bge cr6,0x822f084c
	if (!ctx.cr6.lt) goto loc_822F084C;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// li r5,-32768
	ctx.r5.s64 = -32768;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f0,-23700(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -23700);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,7024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 7024);
	ctx.f13.f64 = double(temp.f32);
loc_822F07D0:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stfs f13,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// subf r7,r5,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r5.u64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x822f07d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F07D0;
loc_822F084C:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f0868
	if (ctx.cr6.eq) goto loc_822F0868;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x824a4ce8
	ctx.lr = 0x822F0868;
	sub_824A4CE8(ctx, base);
loc_822F0868:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f0884
	if (ctx.cr6.eq) goto loc_822F0884;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x822e88a0
	ctx.lr = 0x822F0884;
	sub_822E88A0(ctx, base);
loc_822F0884:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F4ED0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e3608
	ctx.lr = 0x822F4ED8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822f5694
	if (!ctx.cr6.eq) goto loc_822F5694;
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822f5694
	if (!ctx.cr6.eq) goto loc_822F5694;
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r3,640
	ctx.r31.s64 = ctx.r3.s64 + 640;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f4f40
	if (ctx.cr6.eq) goto loc_822F4F40;
	// ld r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// std r10,640(r3)
	REX_STORE_U64(ctx.r3.u32 + 640, ctx.r10.u64);
	// ld r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// std r10,648(r3)
	REX_STORE_U64(ctx.r3.u32 + 648, ctx.r10.u64);
	// ld r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// std r10,656(r3)
	REX_STORE_U64(ctx.r3.u32 + 656, ctx.r10.u64);
	// ld r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// std r10,664(r3)
	REX_STORE_U64(ctx.r3.u32 + 664, ctx.r10.u64);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// stw r30,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// b 0x822f4f5c
	goto loc_822F4F5C;
loc_822F4F40:
	// lwz r11,672(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 672);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,632(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 632);
	// ori r4,r11,4
	ctx.r4.u64 = ctx.r11.u64 | 4;
	// bl 0x822fab10
	ctx.lr = 0x822F4F54;
	sub_822FAB10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822f569c
	if (ctx.cr0.lt) goto loc_822F569C;
loc_822F4F5C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822f55e8
	if (ctx.cr6.eq) goto loc_822F55E8;
	// ble cr6,0x822f568c
	if (!ctx.cr6.gt) goto loc_822F568C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x822f55e0
	if (!ctx.cr6.gt) goto loc_822F55E0;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x822f4fa8
	if (ctx.cr6.eq) goto loc_822F4FA8;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x822f4fa0
	if (ctx.cr6.eq) goto loc_822F4FA0;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x822f4f94
	if (ctx.cr6.eq) goto loc_822F4F94;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bne cr6,0x822f568c
	if (!ctx.cr6.eq) goto loc_822F568C;
loc_822F4F94:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,76(r28)
	REX_STORE_U32(ctx.r28.u32 + 76, ctx.r11.u32);
	// b 0x822f569c
	goto loc_822F569C;
loc_822F4FA0:
	// li r3,280
	ctx.r3.s64 = 280;
	// b 0x822f56a0
	goto loc_822F56A0;
loc_822F4FA8:
	// lwz r11,88(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f549c
	if (ctx.cr6.eq) goto loc_822F549C;
	// stw r30,88(r28)
	REX_STORE_U32(ctx.r28.u32 + 88, ctx.r30.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r30,100(r28)
	REX_STORE_U32(ctx.r28.u32 + 100, ctx.r30.u32);
	// lwz r11,92(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,648(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 648);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// beq cr6,0x822f52f0
	if (ctx.cr6.eq) goto loc_822F52F0;
	// cmplwi cr6,r10,100
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 100, ctx.xer);
	// beq cr6,0x822f52b4
	if (ctx.cr6.eq) goto loc_822F52B4;
	// cmplwi cr6,r10,101
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 101, ctx.xer);
	// beq cr6,0x822f51b4
	if (ctx.cr6.eq) goto loc_822F51B4;
	// cmplwi cr6,r10,105
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 105, ctx.xer);
	// beq cr6,0x822f50b8
	if (ctx.cr6.eq) goto loc_822F50B8;
	// cmplwi cr6,r10,108
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 108, ctx.xer);
	// beq cr6,0x822f507c
	if (ctx.cr6.eq) goto loc_822F507C;
	// cmplwi cr6,r10,112
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 112, ctx.xer);
	// beq cr6,0x822f5040
	if (ctx.cr6.eq) goto loc_822F5040;
	// cmplwi cr6,r10,117
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 117, ctx.xer);
	// bne cr6,0x822f53ac
	if (!ctx.cr6.eq) goto loc_822F53AC;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r10,r10,-20316
	ctx.r10.s64 = ctx.r10.s64 + -20316;
loc_822F500C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x822f5030
	if (ctx.cr0.eq) goto loc_822F5030;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822f500c
	if (ctx.cr6.eq) goto loc_822F500C;
loc_822F5030:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822f53ac
	if (!ctx.cr0.eq) goto loc_822F53AC;
	// li r3,258
	ctx.r3.s64 = 258;
	// b 0x822f56a0
	goto loc_822F56A0;
loc_822F5040:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r10,r10,-20324
	ctx.r10.s64 = ctx.r10.s64 + -20324;
loc_822F5048:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x822f506c
	if (ctx.cr0.eq) goto loc_822F506C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822f5048
	if (ctx.cr6.eq) goto loc_822F5048;
loc_822F506C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822f53ac
	if (!ctx.cr0.eq) goto loc_822F53AC;
	// li r3,270
	ctx.r3.s64 = 270;
	// b 0x822f56a0
	goto loc_822F56A0;
loc_822F507C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r10,r10,-20332
	ctx.r10.s64 = ctx.r10.s64 + -20332;
loc_822F5084:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x822f50a8
	if (ctx.cr0.eq) goto loc_822F50A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822f5084
	if (ctx.cr6.eq) goto loc_822F5084;
loc_822F50A8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822f53ac
	if (!ctx.cr0.eq) goto loc_822F53AC;
	// li r3,259
	ctx.r3.s64 = 259;
	// b 0x822f56a0
	goto loc_822F56A0;
loc_822F50B8:
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,26036
	ctx.r9.s64 = ctx.r9.s64 + 26036;
loc_822F50C4:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// beq 0x822f50e8
	if (ctx.cr0.eq) goto loc_822F50E8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822f50c4
	if (ctx.cr6.eq) goto loc_822F50C4;
loc_822F50E8:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822f50f8
	if (!ctx.cr0.eq) goto loc_822F50F8;
	// li r3,262
	ctx.r3.s64 = 262;
	// b 0x822f51f0
	goto loc_822F51F0;
loc_822F50F8:
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,-20340
	ctx.r9.s64 = ctx.r9.s64 + -20340;
loc_822F5104:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// beq 0x822f5128
	if (ctx.cr0.eq) goto loc_822F5128;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822f5104
	if (ctx.cr6.eq) goto loc_822F5104;
loc_822F5128:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822f5138
	if (!ctx.cr0.eq) goto loc_822F5138;
	// li r3,263
	ctx.r3.s64 = 263;
	// b 0x822f56a0
	goto loc_822F56A0;
loc_822F5138:
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,-20348
	ctx.r9.s64 = ctx.r9.s64 + -20348;
loc_822F5144:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// beq 0x822f5168
	if (ctx.cr0.eq) goto loc_822F5168;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822f5144
	if (ctx.cr6.eq) goto loc_822F5144;
loc_822F5168:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822f5178
	if (!ctx.cr0.eq) goto loc_822F5178;
	// li r3,264
	ctx.r3.s64 = 264;
	// b 0x822f56a0
	goto loc_822F56A0;
loc_822F5178:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r10,r10,-20356
	ctx.r10.s64 = ctx.r10.s64 + -20356;
loc_822F5180:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x822f51a4
	if (ctx.cr0.eq) goto loc_822F51A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822f5180
	if (ctx.cr6.eq) goto loc_822F5180;
loc_822F51A4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822f53ac
	if (!ctx.cr0.eq) goto loc_822F53AC;
	// li r3,260
	ctx.r3.s64 = 260;
	// b 0x822f56a0
	goto loc_822F56A0;
loc_822F51B4:
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,-20364
	ctx.r9.s64 = ctx.r9.s64 + -20364;
loc_822F51C0:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// beq 0x822f51e4
	if (ctx.cr0.eq) goto loc_822F51E4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822f51c0
	if (ctx.cr6.eq) goto loc_822F51C0;
loc_822F51E4:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822f51f8
	if (!ctx.cr0.eq) goto loc_822F51F8;
loc_822F51EC:
	// li r3,265
	ctx.r3.s64 = 265;
loc_822F51F0:
	// stw r29,100(r28)
	REX_STORE_U32(ctx.r28.u32 + 100, ctx.r29.u32);
	// b 0x822f56a0
	goto loc_822F56A0;
loc_822F51F8:
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,26056
	ctx.r9.s64 = ctx.r9.s64 + 26056;
loc_822F5204:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// beq 0x822f5228
	if (ctx.cr0.eq) goto loc_822F5228;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822f5204
	if (ctx.cr6.eq) goto loc_822F5204;
loc_822F5228:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822f5238
	if (!ctx.cr0.eq) goto loc_822F5238;
loc_822F5230:
	// li r3,266
	ctx.r3.s64 = 266;
	// b 0x822f56a0
	goto loc_822F56A0;
loc_822F5238:
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,-20372
	ctx.r9.s64 = ctx.r9.s64 + -20372;
loc_822F5244:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// beq 0x822f5268
	if (ctx.cr0.eq) goto loc_822F5268;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822f5244
	if (ctx.cr6.eq) goto loc_822F5244;
loc_822F5268:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822f5278
	if (!ctx.cr0.eq) goto loc_822F5278;
loc_822F5270:
	// li r3,267
	ctx.r3.s64 = 267;
	// b 0x822f56a0
	goto loc_822F56A0;
loc_822F5278:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r10,r10,23068
	ctx.r10.s64 = ctx.r10.s64 + 23068;
loc_822F5280:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x822f52a4
	if (ctx.cr0.eq) goto loc_822F52A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822f5280
	if (ctx.cr6.eq) goto loc_822F5280;
loc_822F52A4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822f53ac
	if (!ctx.cr0.eq) goto loc_822F53AC;
	// li r3,261
	ctx.r3.s64 = 261;
	// b 0x822f56a0
	goto loc_822F56A0;
loc_822F52B4:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r10,r10,-20380
	ctx.r10.s64 = ctx.r10.s64 + -20380;
loc_822F52BC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x822f52e0
	if (ctx.cr0.eq) goto loc_822F52E0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822f52bc
	if (ctx.cr6.eq) goto loc_822F52BC;
loc_822F52E0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822f53ac
	if (!ctx.cr0.eq) goto loc_822F53AC;
	// li r3,257
	ctx.r3.s64 = 257;
	// b 0x822f56a0
	goto loc_822F56A0;
loc_822F52F0:
	// cmplwi cr6,r10,101
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 101, ctx.xer);
	// beq cr6,0x822f53b8
	if (ctx.cr6.eq) goto loc_822F53B8;
	// cmplwi cr6,r10,105
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 105, ctx.xer);
	// bne cr6,0x822f53ac
	if (!ctx.cr6.eq) goto loc_822F53AC;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,26036
	ctx.r9.s64 = ctx.r9.s64 + 26036;
loc_822F530C:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// beq 0x822f5330
	if (ctx.cr0.eq) goto loc_822F5330;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822f530c
	if (ctx.cr6.eq) goto loc_822F530C;
loc_822F5330:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822f5340
	if (!ctx.cr0.eq) goto loc_822F5340;
loc_822F5338:
	// li r3,268
	ctx.r3.s64 = 268;
	// b 0x822f56a0
	goto loc_822F56A0;
loc_822F5340:
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,-20340
	ctx.r9.s64 = ctx.r9.s64 + -20340;
loc_822F534C:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// beq 0x822f5370
	if (ctx.cr0.eq) goto loc_822F5370;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822f534c
	if (ctx.cr6.eq) goto loc_822F534C;
loc_822F5370:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x822f5338
	if (ctx.cr0.eq) goto loc_822F5338;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r10,r10,-20348
	ctx.r10.s64 = ctx.r10.s64 + -20348;
loc_822F5380:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x822f53a4
	if (ctx.cr0.eq) goto loc_822F53A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822f5380
	if (ctx.cr6.eq) goto loc_822F5380;
loc_822F53A4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822f5338
	if (ctx.cr0.eq) goto loc_822F5338;
loc_822F53AC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,88(r28)
	REX_STORE_U32(ctx.r28.u32 + 88, ctx.r11.u32);
	// b 0x822f55d8
	goto loc_822F55D8;
loc_822F53B8:
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,26056
	ctx.r9.s64 = ctx.r9.s64 + 26056;
loc_822F53C4:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// beq 0x822f53e8
	if (ctx.cr0.eq) goto loc_822F53E8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822f53c4
	if (ctx.cr6.eq) goto loc_822F53C4;
loc_822F53E8:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x822f5230
	if (ctx.cr0.eq) goto loc_822F5230;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,-20372
	ctx.r9.s64 = ctx.r9.s64 + -20372;
loc_822F53FC:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// beq 0x822f5420
	if (ctx.cr0.eq) goto loc_822F5420;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822f53fc
	if (ctx.cr6.eq) goto loc_822F53FC;
loc_822F5420:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x822f5270
	if (ctx.cr0.eq) goto loc_822F5270;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r10,r10,-20364
	ctx.r10.s64 = ctx.r10.s64 + -20364;
loc_822F5430:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x822f5454
	if (ctx.cr0.eq) goto loc_822F5454;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822f5430
	if (ctx.cr6.eq) goto loc_822F5430;
loc_822F5454:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822f53ac
	if (!ctx.cr0.eq) goto loc_822F53AC;
	// lwz r11,628(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 628);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f5474
	if (!ctx.cr6.eq) goto loc_822F5474;
	// stw r29,92(r28)
	REX_STORE_U32(ctx.r28.u32 + 92, ctx.r29.u32);
	// b 0x822f51ec
	goto loc_822F51EC;
loc_822F5474:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822f5494
	if (ctx.cr6.eq) goto loc_822F5494;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822f5494
	if (!ctx.cr6.eq) goto loc_822F5494;
	// stw r10,92(r28)
	REX_STORE_U32(ctx.r28.u32 + 92, ctx.r10.u32);
	// b 0x822f51ec
	goto loc_822F51EC;
loc_822F5494:
	// li r3,269
	ctx.r3.s64 = 269;
	// b 0x822f56a0
	goto loc_822F56A0;
loc_822F549C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r4,648(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 648);
	// addi r10,r11,-20388
	ctx.r10.s64 = ctx.r11.s64 + -20388;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_822F54AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x822f54d0
	if (ctx.cr0.eq) goto loc_822F54D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822f54ac
	if (ctx.cr6.eq) goto loc_822F54AC;
loc_822F54D0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822f54e4
	if (!ctx.cr0.eq) goto loc_822F54E4;
	// li r3,271
	ctx.r3.s64 = 271;
	// stw r30,100(r28)
	REX_STORE_U32(ctx.r28.u32 + 100, ctx.r30.u32);
	// b 0x822f56a0
	goto loc_822F56A0;
loc_822F54E4:
	// lwz r11,100(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f55d8
	if (ctx.cr6.eq) goto loc_822F55D8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822f48e8
	ctx.lr = 0x822F5500;
	sub_822F48E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822f55d8
	if (ctx.cr0.eq) goto loc_822F55D8;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// ld r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 8);
	// li r29,1
	ctx.r29.s64 = 1;
	// ld r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 16);
	// ld r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r31.u32 + 24);
	// lwz r6,80(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 80);
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// std r8,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, ctx.r8.u64);
	// std r7,24(r10)
	REX_STORE_U64(ctx.r10.u32 + 24, ctx.r7.u64);
	// bne cr6,0x822f555c
	if (!ctx.cr6.eq) goto loc_822F555C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822f7fb8
	ctx.lr = 0x822F5550;
	sub_822F7FB8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// beq cr6,0x822f5560
	if (ctx.cr6.eq) goto loc_822F5560;
loc_822F555C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822F5560:
	// stw r11,80(r28)
	REX_STORE_U32(ctx.r28.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822f5584
	if (!ctx.cr6.eq) goto loc_822F5584;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822f4ed0
	ctx.lr = 0x822F5574;
	sub_822F4ED0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822f5588
	if (ctx.cr6.eq) goto loc_822F5588;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x822f558c
	goto loc_822F558C;
loc_822F5584:
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_822F5588:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822F558C:
	// stw r11,80(r28)
	REX_STORE_U32(ctx.r28.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f56a0
	if (ctx.cr6.eq) goto loc_822F56A0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r29,84(r28)
	REX_STORE_U32(ctx.r28.u32 + 84, ctx.r29.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r5,1518
	ctx.r5.s64 = 1518;
	// addi r6,r10,-20440
	ctx.r6.s64 = ctx.r10.s64 + -20440;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// addi r3,r28,24
	ctx.r3.s64 = ctx.r28.s64 + 24;
	// ld r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// ld r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// std r9,8(r31)
	REX_STORE_U64(ctx.r31.u32 + 8, ctx.r9.u64);
	// std r8,16(r31)
	REX_STORE_U64(ctx.r31.u32 + 16, ctx.r8.u64);
	// std r11,24(r31)
	REX_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// bl 0x822f9888
	ctx.lr = 0x822F55D8;
	sub_822F9888(ctx, base);
loc_822F55D8:
	// li r3,278
	ctx.r3.s64 = 278;
	// b 0x822f56a0
	goto loc_822F56A0;
loc_822F55E0:
	// li r3,279
	ctx.r3.s64 = 279;
	// b 0x822f56a0
	goto loc_822F56A0;
loc_822F55E8:
	// lbz r11,649(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 649);
	// extsb. r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822f5600
	if (!ctx.cr0.eq) goto loc_822F5600;
	// lbz r11,648(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 648);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// b 0x822f56a0
	goto loc_822F56A0;
loc_822F5600:
	// lbz r11,650(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 650);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822f568c
	if (!ctx.cr0.eq) goto loc_822F568C;
	// cmpwi cr6,r10,61
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 61, ctx.xer);
	// bne cr6,0x822f5658
	if (!ctx.cr6.eq) goto loc_822F5658;
	// lbz r11,648(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 648);
	// cmplwi cr6,r11,33
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 33, ctx.xer);
	// beq cr6,0x822f5650
	if (ctx.cr6.eq) goto loc_822F5650;
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// beq cr6,0x822f5648
	if (ctx.cr6.eq) goto loc_822F5648;
	// cmplwi cr6,r11,61
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61, ctx.xer);
	// beq cr6,0x822f5640
	if (ctx.cr6.eq) goto loc_822F5640;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// bne cr6,0x822f568c
	if (!ctx.cr6.eq) goto loc_822F568C;
	// li r3,273
	ctx.r3.s64 = 273;
	// b 0x822f56a0
	goto loc_822F56A0;
loc_822F5640:
	// li r3,274
	ctx.r3.s64 = 274;
	// b 0x822f56a0
	goto loc_822F56A0;
loc_822F5648:
	// li r3,272
	ctx.r3.s64 = 272;
	// b 0x822f56a0
	goto loc_822F56A0;
loc_822F5650:
	// li r3,275
	ctx.r3.s64 = 275;
	// b 0x822f56a0
	goto loc_822F56A0;
loc_822F5658:
	// lbz r11,648(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 648);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822f568c
	if (!ctx.cr6.eq) goto loc_822F568C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,38
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 38, ctx.xer);
	// beq cr6,0x822f5684
	if (ctx.cr6.eq) goto loc_822F5684;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// bne cr6,0x822f568c
	if (!ctx.cr6.eq) goto loc_822F568C;
	// li r3,277
	ctx.r3.s64 = 277;
	// b 0x822f56a0
	goto loc_822F56A0;
loc_822F5684:
	// li r3,276
	ctx.r3.s64 = 276;
	// b 0x822f56a0
	goto loc_822F56A0;
loc_822F568C:
	// li r3,281
	ctx.r3.s64 = 281;
	// b 0x822f56a0
	goto loc_822F56A0;
loc_822F5694:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,640(r28)
	REX_STORE_U32(ctx.r28.u32 + 640, ctx.r11.u32);
loc_822F569C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822F56A0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x825e3658
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823360B0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,592(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 592);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82336328) {
	REX_FUNC_PROLOGUE();
	// b 0x8214b000
	sub_8214B000(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823364D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35ec
	ctx.lr = 0x823364D8;
	__savegprlr_21(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823364f8
	if (!ctx.cr6.eq) goto loc_823364F8;
loc_823364F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823367a8
	goto loc_823367A8;
loc_823364F8:
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm. r11,r10,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823367a4
	if (ctx.cr0.eq) goto loc_823367A4;
	// lis r9,8304
	ctx.r9.s64 = 544210944;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823367a4
	if (ctx.cr6.eq) goto loc_823367A4;
	// clrlwi r22,r10,12
	ctx.r22.u64 = ctx.r10.u32 & 0xFFFFF;
	// lwz r9,4(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// lis r10,28752
	ctx.r10.s64 = 1884291072;
	// divwu r24,r9,r22
	ctx.r24.u64 = uint32_t(ctx.r22.u32 ? ctx.r9.u32 / ctx.r22.u32 : 0);
	// twllei r22,0
	if (ctx.r22.s32 == 0 || ctx.r22.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82336544
	if (ctx.cr6.eq) goto loc_82336544;
	// lis r10,28768
	ctx.r10.s64 = 1885339648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82336544
	if (ctx.cr6.eq) goto loc_82336544;
	// lis r10,28784
	ctx.r10.s64 = 1886388224;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82336548
	if (!ctx.cr6.eq) goto loc_82336548;
loc_82336544:
	// li r24,2
	ctx.r24.s64 = 2;
loc_82336548:
	// cmplwi cr6,r24,1
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 1, ctx.xer);
	// ble cr6,0x823367a4
	if (!ctx.cr6.gt) goto loc_823367A4;
	// lwz r11,128(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 128);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,136(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r7,124(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 124);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,148(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 148);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// stwx r31,r6,r10
	REX_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r31.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r9,r5
	REX_STORE_U32(ctx.r9.u32 + ctx.r5.u32, ctx.r31.u32);
	// addi r28,r1,160
	ctx.r28.s64 = ctx.r1.s64 + 160;
	// stwx r31,r7,r3
	REX_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// stwx r11,r6,r8
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r11.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// stwx r3,r9,r4
	REX_STORE_U32(ctx.r9.u32 + ctx.r4.u32, ctx.r3.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stwx r11,r7,r28
	REX_STORE_U32(ctx.r7.u32 + ctx.r28.u32, ctx.r11.u32);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// stwx r31,r29,r10
	REX_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.r31.u32);
	// stwx r11,r29,r5
	REX_STORE_U32(ctx.r29.u32 + ctx.r5.u32, ctx.r11.u32);
	// beq cr6,0x8233672c
	if (ctx.cr6.eq) goto loc_8233672C;
	// rlwinm r26,r22,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_823365D4:
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r10
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r4,108(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r4,17
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 17, ctx.xer);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bne cr6,0x82336610
	if (!ctx.cr6.eq) goto loc_82336610;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8233671c
	if (!ctx.cr0.eq) goto loc_8233671C;
loc_82336610:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8233662c
	if (ctx.cr0.eq) goto loc_8233662C;
	// rlwinm. r9,r11,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8233662c
	if (!ctx.cr0.eq) goto loc_8233662C;
	// lwz r5,124(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 124);
	// b 0x82336674
	goto loc_82336674;
loc_8233662C:
	// rlwinm. r9,r11,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8233663c
	if (ctx.cr0.eq) goto loc_8233663C;
	// lwz r5,148(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 148);
	// b 0x82336674
	goto loc_82336674;
loc_8233663C:
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82336670
	if (ctx.cr0.eq) goto loc_82336670;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82336670
	if (!ctx.cr6.eq) goto loc_82336670;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82336660;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,65535
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65535, ctx.xer);
	// beq cr6,0x82336670
	if (ctx.cr6.eq) goto loc_82336670;
	// lwz r5,128(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 128);
	// b 0x82336674
	goto loc_82336674;
loc_82336670:
	// lwz r5,136(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
loc_82336674:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823366d8
	if (ctx.cr6.eq) goto loc_823366D8;
	// lwz r9,8(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r7,4(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
loc_82336690:
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x823366c8
	if (!ctx.cr6.eq) goto loc_823366C8;
	// lwz r4,8(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r3,8(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x823366c8
	if (!ctx.cr6.eq) goto loc_823366C8;
	// lwz r4,12(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823366d8
	if (ctx.cr6.eq) goto loc_823366D8;
loc_823366C8:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// cmplw cr6,r6,r27
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82336690
	if (ctx.cr6.lt) goto loc_82336690;
loc_823366D8:
	// cmplw cr6,r6,r27
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82336704
	if (!ctx.cr6.eq) goto loc_82336704;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x823367b0
	if (ctx.cr6.gt) goto loc_823367B0;
loc_82336704:
	// lwz r11,124(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 124);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8233671c
	if (!ctx.cr6.eq) goto loc_8233671C;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmplwi cr6,r23,2
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 2, ctx.xer);
	// bgt cr6,0x823367b0
	if (ctx.cr6.gt) goto loc_823367B0;
loc_8233671C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// add r28,r26,r28
	ctx.r28.u64 = ctx.r26.u64 + ctx.r28.u64;
	// cmplw cr6,r27,r24
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x823365d4
	if (ctx.cr6.lt) goto loc_823365D4;
loc_8233672C:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x823367a4
	if (ctx.cr6.eq) goto loc_823367A4;
	// rlwinm r27,r22,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
loc_8233673C:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// lis r10,24576
	ctx.r10.s64 = 1610612736;
	// rlwinm r11,r11,0,0,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82336794
	if (!ctx.cr6.eq) goto loc_82336794;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,112(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 112);
	// lwzx r29,r11,r10
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r4,108(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// bctrl 
	ctx.lr = 0x8233677C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 18, ctx.xer);
	// bne cr6,0x82336794
	if (!ctx.cr6.eq) goto loc_82336794;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,128(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 128);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823367c0
	if (ctx.cr6.eq) goto loc_823367C0;
loc_82336794:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x8233673c
	if (ctx.cr6.lt) goto loc_8233673C;
loc_823367A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823367A8:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x825e363c
	__restgprlr_21(ctx, base);
	return;
loc_823367B0:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x823364f0
	if (ctx.cr6.eq) goto loc_823364F0;
	// stw r27,0(r21)
	REX_STORE_U32(ctx.r21.u32 + 0, ctx.r27.u32);
	// b 0x823364f0
	goto loc_823364F0;
loc_823367C0:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x823364f0
	if (ctx.cr6.eq) goto loc_823364F0;
	// stw r28,0(r21)
	REX_STORE_U32(ctx.r21.u32 + 0, ctx.r28.u32);
	// b 0x823364f0
	goto loc_823364F0;
}

DEFINE_REX_FUNC(sub_82352590) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e3608
	ctx.lr = 0x82352598;
	__savegprlr_28(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,104(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 104);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823525e8
	if (!ctx.cr6.eq) goto loc_823525E8;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823525D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,108(r29)
	REX_STORE_U32(ctx.r29.u32 + 108, ctx.r3.u32);
loc_823525DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823525E0:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x825e3658
	__restgprlr_28(ctx, base);
	return;
loc_823525E8:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,348(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// lwz r30,24(r4)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// beq cr6,0x82352718
	if (ctx.cr6.eq) goto loc_82352718;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8235260C:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8235260c
	if (!ctx.cr6.eq) goto loc_8235260C;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x82352718
	if (!ctx.cr6.gt) goto loc_82352718;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r11,r11,-7412
	ctx.r11.s64 = ctx.r11.s64 + -7412;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
loc_82352640:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82352660
	if (!ctx.cr0.eq) goto loc_82352660;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82352640
	if (!ctx.cr6.eq) goto loc_82352640;
loc_82352660:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82352718
	if (!ctx.cr0.eq) goto loc_82352718;
	// lwz r11,112(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x82352694
	if (!ctx.cr6.gt) goto loc_82352694;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r11,-1172
	ctx.r6.s64 = ctx.r11.s64 + -1172;
	// li r5,4543
	ctx.r5.s64 = 4543;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b1d0
	ctx.lr = 0x8235268C;
	sub_8236B1D0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82352694:
	// addi r28,r31,440
	ctx.r28.s64 = ctx.r31.s64 + 440;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822fb400
	ctx.lr = 0x823526A4;
	sub_822FB400(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x823526d8
	if (!ctx.cr0.eq) goto loc_823526D8;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,468(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 468);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822fbd88
	ctx.lr = 0x823526C0;
	sub_822FBD88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823525e0
	if (ctx.cr0.lt) goto loc_823525E0;
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 468);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,468(r31)
	REX_STORE_U32(ctx.r31.u32 + 468, ctx.r10.u32);
	// b 0x823526dc
	goto loc_823526DC;
loc_823526D8:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
loc_823526DC:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// lwz r11,108(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823526FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,108(r29)
	REX_STORE_U32(ctx.r29.u32 + 108, ctx.r3.u32);
loc_82352700:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823525dc
	if (ctx.cr6.eq) goto loc_823525DC;
loc_8235270C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x823525e0
	goto loc_823525E0;
loc_82352718:
	// lwz r11,108(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8235276c
	if (ctx.cr6.eq) goto loc_8235276C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8235276c
	if (ctx.cr0.eq) goto loc_8235276C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8235276c
	if (!ctx.cr6.eq) goto loc_8235276C;
	// li r6,512
	ctx.r6.s64 = 512;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235a260
	ctx.lr = 0x8235274C;
	sub_8235A260(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r11,-1184
	ctx.r6.s64 = ctx.r11.s64 + -1184;
loc_82352758:
	// li r5,4502
	ctx.r5.s64 = 4502;
	// lwz r4,104(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b1d0
	ctx.lr = 0x82352768;
	sub_8236B1D0(ctx, base);
	// b 0x8235270c
	goto loc_8235270C;
loc_8235276C:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// beq 0x8235280c
	if (ctx.cr0.eq) goto loc_8235280C;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823527e0
	if (ctx.cr0.eq) goto loc_823527E0;
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823527e0
	if (!ctx.cr0.eq) goto loc_823527E0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r5,244(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234e608
	ctx.lr = 0x823527A4;
	sub_8234E608(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823525e0
	if (ctx.cr0.lt) goto loc_823525E0;
	// lwz r11,108(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x82352700
	if (!ctx.cr6.eq) goto loc_82352700;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82352700
	if (!ctx.cr6.eq) goto loc_82352700;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823598a8
	ctx.lr = 0x823527D0;
	sub_823598A8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r11,-1220
	ctx.r6.s64 = ctx.r11.s64 + -1220;
	// b 0x82352758
	goto loc_82352758;
loc_823527E0:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823525dc
	if (ctx.cr0.eq) goto loc_823525DC;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// li r6,2
	ctx.r6.s64 = 2;
loc_823527F0:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234e608
	ctx.lr = 0x82352800;
	sub_8234E608(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82352700
	if (!ctx.cr0.lt) goto loc_82352700;
	// b 0x823525e0
	goto loc_823525E0;
loc_8235280C:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82352890
	if (ctx.cr0.eq) goto loc_82352890;
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82352890
	if (!ctx.cr0.eq) goto loc_82352890;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234e608
	ctx.lr = 0x82352834;
	sub_8234E608(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823525e0
	if (ctx.cr0.lt) goto loc_823525E0;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82352700
	if (!ctx.cr6.eq) goto loc_82352700;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,108(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352860;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 11, ctx.xer);
	// bne cr6,0x82352700
	if (!ctx.cr6.eq) goto loc_82352700;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// ori r10,r10,276
	ctx.r10.u64 = ctx.r10.u64 | 276;
	// stw r10,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lfd f0,-26200(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -26200);
	// lfd f13,-26192(r9)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + -26192);
	// stfd f0,32(r29)
	REX_STORE_U64(ctx.r29.u32 + 32, ctx.f0.u64);
	// stfd f13,40(r29)
	REX_STORE_U64(ctx.r29.u32 + 40, ctx.f13.u64);
	// b 0x82352700
	goto loc_82352700;
loc_82352890:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823525dc
	if (ctx.cr0.eq) goto loc_823525DC;
	// lwz r5,252(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 252);
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x823527f0
	goto loc_823527F0;
}

DEFINE_REX_FUNC(sub_82365F78) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35d8
	ctx.lr = 0x82365F80;
	__savegprlr_16(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r23,-1
	ctx.r23.s64 = -1;
	// li r17,1
	ctx.r17.s64 = 1;
	// li r18,0
	ctx.r18.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82366014
	if (!ctx.cr6.gt) goto loc_82366014;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82365FA8:
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwz r10,16(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,20(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,24(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwzx r10,r7,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// stw r6,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r6.u32);
	// stw r5,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r5.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r7,r10,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82365fe4
	if (ctx.cr0.eq) goto loc_82365FE4;
	// stw r17,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r17.u32);
	// b 0x82365ffc
	goto loc_82365FFC;
loc_82365FE4:
	// lis r12,1
	ctx.r12.s64 = 65536;
	// ori r12,r12,4136
	ctx.r12.u64 = ctx.r12.u64 | 4136;
	// and. r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82366000
	if (!ctx.cr0.eq) goto loc_82366000;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_82365FFC:
	// stw r23,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r23.u32);
loc_82366000:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82365fa8
	if (ctx.cr6.lt) goto loc_82365FA8;
loc_82366014:
	// lwz r25,12(r26)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// lis r22,8304
	ctx.r22.s64 = 544210944;
	// lis r19,8320
	ctx.r19.s64 = 545259520;
	// lis r20,4432
	ctx.r20.s64 = 290455552;
	// lis r21,4384
	ctx.r21.s64 = 287309824;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82366418
	if (ctx.cr6.eq) goto loc_82366418;
	// rlwinm r24,r25,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
loc_82366034:
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 24);
	// addi r24,r24,-4
	ctx.r24.s64 = ctx.r24.s64 + -4;
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// lwzx r31,r11,r24
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82366410
	if (ctx.cr0.eq) goto loc_82366410;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x823660a0
	if (!ctx.cr6.gt) goto loc_823660A0;
	// li r29,4
	ctx.r29.s64 = 4;
loc_82366064:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,20(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwzx r9,r29,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r9,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8235ee10
	ctx.lr = 0x8236608C;
	sub_8235EE10(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82366064
	if (ctx.cr6.lt) goto loc_82366064;
loc_823660A0:
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82366114
	if (!ctx.cr6.gt) goto loc_82366114;
	// li r10,4
	ctx.r10.s64 = 4;
loc_823660B0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r8,20(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// stw r8,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwzx r8,r7,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r11,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823660b0
	if (ctx.cr6.lt) goto loc_823660B0;
loc_82366114:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r10,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r9,r22
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x8236637c
	if (ctx.cr6.eq) goto loc_8236637C;
	// cmplw cr6,r9,r19
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x8236637c
	if (ctx.cr6.eq) goto loc_8236637C;
	// cmplw cr6,r9,r20
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r20.u32, ctx.xer);
	// beq cr6,0x8236637c
	if (ctx.cr6.eq) goto loc_8236637C;
	// cmplw cr6,r9,r21
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x823661ec
	if (!ctx.cr6.eq) goto loc_823661EC;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	// li r30,0
	ctx.r30.s64 = 0;
	// divwu r27,r9,r10
	ctx.r27.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82366410
	if (ctx.cr6.eq) goto loc_82366410;
loc_82366158:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823661d8
	if (ctx.cr6.eq) goto loc_823661D8;
loc_82366164:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r11,r29,r11
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823661cc
	if (ctx.cr6.eq) goto loc_823661CC;
	// rlwinm r28,r30,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82366188:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r16,r11,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r10,r28,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// lwzx r4,r16,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r16.u32 + ctx.r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8235ee10
	ctx.lr = 0x823661B8;
	sub_8235EE10(ctx, base);
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwzx r11,r16,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82366188
	if (!ctx.cr6.eq) goto loc_82366188;
loc_823661CC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82366164
	if (ctx.cr6.lt) goto loc_82366164;
loc_823661D8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82366158
	if (ctx.cr6.lt) goto loc_82366158;
	// b 0x82366410
	goto loc_82366410;
loc_823661EC:
	// rlwinm r9,r10,0,0,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000000;
	// lis r8,4096
	ctx.r8.s64 = 268435456;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x823662ac
	if (ctx.cr6.lt) goto loc_823662AC;
	// lis r8,16384
	ctx.r8.s64 = 1073741824;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x823662ac
	if (ctx.cr6.gt) goto loc_823662AC;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	// li r30,0
	ctx.r30.s64 = 0;
	// divwu r27,r9,r10
	ctx.r27.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82366410
	if (ctx.cr6.eq) goto loc_82366410;
loc_82366224:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82366298
	if (ctx.cr6.eq) goto loc_82366298;
loc_82366230:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r11,r29,r11
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8236628c
	if (ctx.cr6.eq) goto loc_8236628C;
	// rlwinm r28,r30,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82366254:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r16,r11,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r10,r28,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// lwzx r4,r16,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r16.u32 + ctx.r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8235ee10
	ctx.lr = 0x82366278;
	sub_8235EE10(ctx, base);
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwzx r11,r16,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82366254
	if (!ctx.cr6.eq) goto loc_82366254;
loc_8236628C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82366230
	if (ctx.cr6.lt) goto loc_82366230;
loc_82366298:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82366224
	if (ctx.cr6.lt) goto loc_82366224;
	// b 0x82366410
	goto loc_82366410;
loc_823662AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// beq cr6,0x82366324
	if (ctx.cr6.eq) goto loc_82366324;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82366410
	if (!ctx.cr6.gt) goto loc_82366410;
	// li r30,0
	ctx.r30.s64 = 0;
loc_823662C8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// b 0x82366304
	goto loc_82366304;
loc_823662D4:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r4,r28,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8235ee10
	ctx.lr = 0x823662F8;
	sub_8235EE10(ctx, base);
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_82366304:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823662d4
	if (!ctx.cr6.eq) goto loc_823662D4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823662c8
	if (ctx.cr6.lt) goto loc_823662C8;
	// b 0x82366410
	goto loc_82366410;
loc_82366324:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82366410
	if (!ctx.cr6.gt) goto loc_82366410;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82366334:
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r23,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r23.u32);
	// lwz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r17,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r17.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82366334
	if (ctx.cr6.lt) goto loc_82366334;
	// b 0x82366410
	goto loc_82366410;
loc_8236637C:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82366410
	if (ctx.cr6.eq) goto loc_82366410;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8236638C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,20(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r30,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r4,r9,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8235ee10
	ctx.lr = 0x823663C4;
	sub_8235EE10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,20(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r9,r30,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r5,r9,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8235ee10
	ctx.lr = 0x823663FC;
	sub_8235EE10(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8236638c
	if (ctx.cr6.lt) goto loc_8236638C;
loc_82366410:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82366034
	if (!ctx.cr6.eq) goto loc_82366034;
loc_82366418:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82591720
	ctx.lr = 0x82366420;
	sub_82591720(ctx, base);
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82366694
	if (!ctx.cr6.gt) goto loc_82366694;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82366434:
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 24);
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82366680
	if (ctx.cr0.eq) goto loc_82366680;
	// lis r10,4336
	ctx.r10.s64 = 284164096;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82366680
	if (ctx.cr6.eq) goto loc_82366680;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x82366680
	if (ctx.cr6.eq) goto loc_82366680;
	// lis r10,4368
	ctx.r10.s64 = 286261248;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82366680
	if (ctx.cr6.eq) goto loc_82366680;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x82366680
	if (ctx.cr6.eq) goto loc_82366680;
	// lis r10,4400
	ctx.r10.s64 = 288358400;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82366680
	if (ctx.cr6.eq) goto loc_82366680;
	// lis r10,4416
	ctx.r10.s64 = 289406976;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82366680
	if (ctx.cr6.eq) goto loc_82366680;
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x82366680
	if (ctx.cr6.eq) goto loc_82366680;
	// lis r10,8336
	ctx.r10.s64 = 546308096;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82366680
	if (ctx.cr6.eq) goto loc_82366680;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// beq cr6,0x82366680
	if (ctx.cr6.eq) goto loc_82366680;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwz r10,16(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82366680
	if (!ctx.cr0.eq) goto loc_82366680;
	// lwz r11,20(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82366510
	if (ctx.cr6.eq) goto loc_82366510;
loc_823664EC:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823664ec
	if (!ctx.cr6.eq) goto loc_823664EC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82366510
	if (ctx.cr6.eq) goto loc_82366510;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82366510:
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// b 0x82366558
	goto loc_82366558;
loc_82366518:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82366554
	if (ctx.cr6.eq) goto loc_82366554;
loc_82366530:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82366530
	if (!ctx.cr6.eq) goto loc_82366530;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82366554
	if (!ctx.cr6.lt) goto loc_82366554;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_82366554:
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_82366558:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82366518
	if (!ctx.cr6.eq) goto loc_82366518;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823665cc
	if (ctx.cr6.eq) goto loc_823665CC;
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82366574:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// b 0x823665bc
	goto loc_823665BC;
loc_8236657C:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823665b8
	if (ctx.cr6.eq) goto loc_823665B8;
loc_82366594:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82366594
	if (!ctx.cr6.eq) goto loc_82366594;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823665b8
	if (!ctx.cr6.lt) goto loc_823665B8;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_823665B8:
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_823665BC:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8236657c
	if (!ctx.cr6.eq) goto loc_8236657C;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x82366574
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82366574;
loc_823665CC:
	// lwz r11,20(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82366680
	if (!ctx.cr6.gt) goto loc_82366680;
	// subf r10,r6,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r6.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823665E0:
	// lwz r10,20(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82366670
	if (ctx.cr0.eq) goto loc_82366670;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82366670
	if (!ctx.cr6.gt) goto loc_82366670;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8236661C:
	// lwz r8,16(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,20(r26)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,24(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r6,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r6.u32);
	// lwz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwz r7,16(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwzx r6,r8,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r7,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r6,20(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// stw r6,20(r8)
	REX_STORE_U32(ctx.r8.u32 + 20, ctx.r6.u32);
	// lwz r8,12(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8236661c
	if (ctx.cr6.lt) goto loc_8236661C;
loc_82366670:
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bdnz 0x823665e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823665E0;
loc_82366680:
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82366434
	if (ctx.cr6.lt) goto loc_82366434;
loc_82366694:
	// lwz r7,8(r26)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823666ec
	if (ctx.cr6.eq) goto loc_823666EC;
	// lwz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
loc_823666AC:
	// lwzx r11,r8,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r6,48(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r5,20(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x823666d0
	if (!ctx.cr6.eq) goto loc_823666D0;
	// lwz r6,64(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823666d4
	if (ctx.cr6.eq) goto loc_823666D4;
loc_823666D0:
	// mr r18,r17
	ctx.r18.u64 = ctx.r17.u64;
loc_823666D4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x823666ac
	if (ctx.cr6.lt) goto loc_823666AC;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x82366704
	if (!ctx.cr6.eq) goto loc_82366704;
loc_823666EC:
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
loc_823666F0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82591720
	ctx.lr = 0x823666F8;
	sub_82591720(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x825e3628
	__restgprlr_16(ctx, base);
	return;
loc_82366704:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82362638
	ctx.lr = 0x8236670C;
	sub_82362638(ctx, base);
loc_8236670C:
	// lwz r31,12(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82366844
	if (ctx.cr6.eq) goto loc_82366844;
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_82366720:
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 24);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// lwzx r5,r11,r30
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm. r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82366834
	if (ctx.cr0.eq) goto loc_82366834;
	// lwz r6,12(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8236679c
	if (ctx.cr6.eq) goto loc_8236679C;
	// lwz r8,16(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,20(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
loc_8236675C:
	// lwzx r11,r8,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8236678c
	if (ctx.cr6.eq) goto loc_8236678C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8236678c
	if (!ctx.cr6.lt) goto loc_8236678C;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_8236678C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8236675c
	if (ctx.cr6.lt) goto loc_8236675C;
loc_8236679C:
	// lwz r6,4(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823667ec
	if (ctx.cr6.eq) goto loc_823667EC;
	// lwz r9,8(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
loc_823667B8:
	// lwzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r10,72(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x823667dc
	if (ctx.cr6.eq) goto loc_823667DC;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823667dc
	if (!ctx.cr6.lt) goto loc_823667DC;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_823667DC:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x823667b8
	if (ctx.cr6.lt) goto loc_823667B8;
loc_823667EC:
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82366834
	if (ctx.cr6.eq) goto loc_82366834;
	// bge cr6,0x8236681c
	if (!ctx.cr6.lt) goto loc_8236681C;
	// subf r10,r31,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r31.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82366804:
	// lwz r10,24(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 24);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bdnz 0x82366804
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82366804;
loc_8236681C:
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 24);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stwx r5,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// bl 0x82362638
	ctx.lr = 0x82366830;
	sub_82362638(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82366834:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82366720
	if (!ctx.cr6.eq) goto loc_82366720;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236670c
	if (ctx.cr6.eq) goto loc_8236670C;
loc_82366844:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x823666f0
	goto loc_823666F0;
}

DEFINE_REX_FUNC(sub_823AF8E8) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823AFBC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35f8
	ctx.lr = 0x823AFBC8;
	__savegprlr_24(ctx, base);
	// lwz r11,316(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r24,0(r6)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823afd20
	if (!ctx.cr6.gt) goto loc_823AFD20;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
loc_823AFBE0:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r26,0
	ctx.r26.s64 = 0;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// addi r27,r11,-4
	ctx.r27.s64 = ctx.r11.s64 + -4;
loc_823AFBF0:
	// lwz r8,0(r25)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x823afc04
	if (!ctx.cr6.eq) goto loc_823AFC04;
	// lwz r11,-4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + -4);
	// b 0x823afc08
	goto loc_823AFC08;
loc_823AFC04:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
loc_823AFC08:
	// lbz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lbzu r10,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// rotlwi r7,r9,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzu r6,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r6,r9,2
	ctx.r6.s64 = ctx.r9.s64 + 2;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// lwzu r11,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,7
	ctx.r7.s64 = ctx.r7.s64 + 7;
	// srawi r6,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 4;
	// srawi r5,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 4;
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stbu r5,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r11.u32 = ea;
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// lwz r9,40(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// addic. r8,r9,-2
	ctx.xer.ca = ctx.r9.u32 > 1;
	ctx.r8.s64 = ctx.r9.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// beq 0x823afcdc
	if (ctx.cr0.eq) goto loc_823AFCDC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r5,r31,-1
	ctx.r5.s64 = ctx.r31.s64 + -1;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
loc_823AFC8C:
	// lbzu r10,1(r6)
	ea = 1 + ctx.r6.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r6.u32 = ea;
	// rlwinm r30,r9,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzu r31,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r31.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// srawi r7,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 4;
	// addi r8,r8,7
	ctx.r8.s64 = ctx.r8.s64 + 7;
	// stb r7,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// srawi r8,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stbu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823afc8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823AFC8C;
loc_823AFCDC:
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r9,r9,7
	ctx.r9.s64 = ctx.r9.s64 + 7;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// srawi r7,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// srawi r6,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 4;
	// stb r7,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// stb r6,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
	// blt cr6,0x823afbf0
	if (ctx.cr6.lt) goto loc_823AFBF0;
	// lwz r11,316(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823afbe0
	if (ctx.cr6.lt) goto loc_823AFBE0;
loc_823AFD20:
	// b 0x825e3648
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823B8DD8) {
	REX_FUNC_PROLOGUE();
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lhz r7,2(r4)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r9,4
	ctx.r9.s64 = 4;
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x823b8e00
	if (!ctx.cr0.eq) goto loc_823B8E00;
	// li r11,138
	ctx.r11.s64 = 138;
	// li r9,3
	ctx.r9.s64 = 3;
loc_823B8E00:
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,-1
	ctx.r31.s64 = -1;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// sth r31,6(r10)
	REX_STORE_U16(ctx.r10.u32 + 6, ctx.r31.u16);
	// blt cr6,0x823b8ef8
	if (ctx.cr6.lt) goto loc_823B8EF8;
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// addi r5,r4,6
	ctx.r5.s64 = ctx.r4.s64 + 6;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823B8E24:
	// lhz r4,0(r5)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823b8e44
	if (!ctx.cr6.lt) goto loc_823B8E44;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x823b8ef0
	if (ctx.cr6.eq) goto loc_823B8EF0;
loc_823B8E44:
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823b8e64
	if (!ctx.cr6.lt) goto loc_823B8E64;
	// addi r11,r10,669
	ctx.r11.s64 = ctx.r10.s64 + 669;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r9,r11,r3
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sthx r9,r11,r3
	REX_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u16);
	// b 0x823b8ebc
	goto loc_823B8EBC;
loc_823B8E64:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823b8e98
	if (ctx.cr6.eq) goto loc_823B8E98;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x823b8e88
	if (ctx.cr6.eq) goto loc_823B8E88;
	// addi r11,r10,669
	ctx.r11.s64 = ctx.r10.s64 + 669;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r9,r11,r3
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sthx r9,r11,r3
	REX_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u16);
loc_823B8E88:
	// lhz r11,2740(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 2740);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,2740(r3)
	REX_STORE_U16(ctx.r3.u32 + 2740, ctx.r11.u16);
	// b 0x823b8ebc
	goto loc_823B8EBC;
loc_823B8E98:
	// cmpwi cr6,r8,10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10, ctx.xer);
	// bgt cr6,0x823b8eb0
	if (ctx.cr6.gt) goto loc_823B8EB0;
	// lhz r11,2744(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 2744);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,2744(r3)
	REX_STORE_U16(ctx.r3.u32 + 2744, ctx.r11.u16);
	// b 0x823b8ebc
	goto loc_823B8EBC;
loc_823B8EB0:
	// lhz r11,2748(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 2748);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,2748(r3)
	REX_STORE_U16(ctx.r3.u32 + 2748, ctx.r11.u16);
loc_823B8EBC:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x823b8ed4
	if (!ctx.cr6.eq) goto loc_823B8ED4;
	// li r11,138
	ctx.r11.s64 = 138;
	// b 0x823b8ee0
	goto loc_823B8EE0;
loc_823B8ED4:
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x823b8ee8
	if (!ctx.cr6.eq) goto loc_823B8EE8;
	// li r11,6
	ctx.r11.s64 = 6;
loc_823B8EE0:
	// li r9,3
	ctx.r9.s64 = 3;
	// b 0x823b8ef0
	goto loc_823B8EF0;
loc_823B8EE8:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r9,4
	ctx.r9.s64 = 4;
loc_823B8EF0:
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bdnz 0x823b8e24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B8E24;
loc_823B8EF8:
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823C2758) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35e8
	ctx.lr = 0x823C2760;
	__savegprlr_20(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cntlzw r8,r5
	ctx.r8.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// subfic r10,r8,31
	ctx.xer.ca = ctx.r8.u32 <= 31;
	ctx.r10.u64 = static_cast<uint64_t>(31) - ctx.r8.u64;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r8,r4,-1
	ctx.r8.s64 = ctx.r4.s64 + -1;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// subfic r11,r10,7
	ctx.xer.ca = ctx.r10.u32 <= 7;
	ctx.r11.u64 = static_cast<uint64_t>(7) - ctx.r10.u64;
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// slw r11,r6,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r31,r4,r7
	ctx.r31.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r20,r10,0,0,26
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// add r10,r31,r3
	ctx.r10.u64 = ctx.r31.u64 + ctx.r3.u64;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// divwu r10,r10,r31
	ctx.r10.u64 = uint32_t(ctx.r31.u32 ? ctx.r10.u32 / ctx.r31.u32 : 0);
	// andc r29,r8,r11
	ctx.r29.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// lwzx r25,r4,r5
	ctx.r25.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// twllei r31,0
	if (ctx.r31.s32 == 0 || ctx.r31.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r22,r10,r31
	ctx.r22.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x823c285c
	if (!ctx.cr6.lt) goto loc_823C285C;
	// add r11,r29,r25
	ctx.r11.u64 = ctx.r29.u64 + ctx.r25.u64;
	// addi r23,r11,-1
	ctx.r23.s64 = ctx.r11.s64 + -1;
loc_823C2810:
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// cmplw cr6,r20,r30
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x823c284c
	if (!ctx.cr6.lt) goto loc_823C284C;
	// addi r21,r31,-1
	ctx.r21.s64 = ctx.r31.s64 + -1;
loc_823C2820:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// add r3,r21,r26
	ctx.r3.u64 = ctx.r21.u64 + ctx.r26.u64;
	// bl 0x823c1ce8
	ctx.lr = 0x823C2834;
	sub_823C1CE8(ctx, base);
	// cmplw cr6,r24,r3
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x823c2840
	if (ctx.cr6.gt) goto loc_823C2840;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_823C2840:
	// add r26,r26,r31
	ctx.r26.u64 = ctx.r26.u64 + ctx.r31.u64;
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x823c2820
	if (ctx.cr6.lt) goto loc_823C2820;
loc_823C284C:
	// add r29,r29,r25
	ctx.r29.u64 = ctx.r29.u64 + ctx.r25.u64;
	// add r23,r23,r25
	ctx.r23.u64 = ctx.r23.u64 + ctx.r25.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x823c2810
	if (ctx.cr6.lt) goto loc_823C2810;
loc_823C285C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x825e3638
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823D1EA8) {
	REX_FUNC_PROLOGUE();
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r11,r7,31
	ctx.r11.s64 = ctx.r7.s64 + 31;
	// rlwinm r10,r5,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r11,r11,28,4,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFE;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cntlzw r30,r8
	ctx.r30.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// addi r11,r6,31
	ctx.r11.s64 = ctx.r6.s64 + 31;
	// rlwinm r7,r4,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r9,r3,29
	ctx.r9.u64 = ctx.r3.u32 & 0x7;
	// rlwinm r8,r4,2,27,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x18;
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// rlwinm r6,r11,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subfic r11,r30,31
	ctx.xer.ca = ctx.r30.u32 <= 31;
	ctx.r11.u64 = static_cast<uint64_t>(31) - ctx.r30.u64;
	// mullw r8,r7,r6
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// rlwinm r9,r3,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// slw r6,r5,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r8,r6,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r9,r4,3,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x8;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// clrldi r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// addi r30,r11,6
	ctx.r30.s64 = ctx.r11.s64 + 6;
	// rldicr r8,r9,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// sld r9,r7,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r5.u8 & 0x7F));
	// clrldi r7,r30,32
	ctx.r7.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r5,r31,62
	ctx.r5.u64 = ctx.r31.u64 & 0x3;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sld r8,r5,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r5.u64 << (ctx.r7.u8 & 0x7F));
	// rlwinm r7,r4,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// clrldi r8,r6,60
	ctx.r8.u64 = ctx.r6.u64 & 0xF;
	// clrldi r5,r10,63
	ctx.r5.u64 = ctx.r10.u64 & 0x1;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rldicr r8,r5,8,55
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rldicr r9,r10,0,54
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 0) & 0xFFFFFFFFFFFFFE00;
	// rlwinm r6,r10,0,23,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1C0;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rldicl r9,r3,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u64, 3) & 0x7FFFFFFFF;
	// rldicr r7,r8,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// rldicr r9,r9,0,57
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 0) & 0xFFFFFFFFFFFFFFC0;
	// mulli r8,r5,-128
	ctx.r8.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(-128));
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r7,r9,0,24,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC0;
	// rldicr r8,r8,2,61
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 2) & 0xFFFFFFFFFFFFFFFC;
	// clrldi r9,r10,58
	ctx.r9.u64 = ctx.r10.u64 & 0x3F;
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srd r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D5928) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35f0
	ctx.lr = 0x823D5930;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// beq cr6,0x823d597c
	if (ctx.cr6.eq) goto loc_823D597C;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r6,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// b 0x823d5988
	goto loc_823D5988;
loc_823D597C:
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
loc_823D5988:
	// lwz r10,356(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d59c0
	if (ctx.cr6.eq) goto loc_823D59C0;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,8(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r4,12(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// stw r8,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// stw r6,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// stw r5,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r5.u32);
	// stw r4,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// b 0x823d59d8
	goto loc_823D59D8;
loc_823D59C0:
	// stw r26,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r25,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r25.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stw r9,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stw r9,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
loc_823D59D8:
	// subf. r24,r11,r10
	ctx.r24.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// beq 0x823d5a58
	if (ctx.cr0.eq) goto loc_823D5A58;
	// lwz r29,340(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// mullw r9,r7,r27
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r27.s32);
	// lwz r10,324(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r30,r9,r31
	ctx.r30.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_823D59FC:
	// lwz r3,348(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r11,364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// lwz r10,332(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d4e08
	ctx.lr = 0x823D5A3C;
	sub_823D4E08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823d5a58
	if (ctx.cr0.lt) goto loc_823D5A58;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x823d59fc
	if (ctx.cr6.lt) goto loc_823D59FC;
loc_823D5A58:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x825e3640
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823D9C90) {
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
	// lwz r10,144(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// addi r11,r3,144
	ctx.r11.s64 = ctx.r3.s64 + 144;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823d9d00
	if (ctx.cr6.lt) goto loc_823D9D00;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r3,76(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwimi r6,r5,12,14,19
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 12) & 0x3F000) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0FFF);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// rlwinm r31,r4,20,0,11
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0xFFF00000;
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// rlwinm r7,r7,23,0,8
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 23) & 0xFF800000;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// clrlwi r10,r10,10
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFF;
	// or r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 | ctx.r31.u64;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwimi r11,r6,2,12,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFC) | (ctx.r11.u64 & 0xFFFFFFFFFFF00003);
	// rlwimi r10,r8,22,9,9
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 22) & 0x400000) | (ctx.r10.u64 & 0xFFFFFFFFFFBFFFFF);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x823d8cf8
	ctx.lr = 0x823D9D00;
	sub_823D8CF8(ctx, base);
loc_823D9D00:
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

DEFINE_REX_FUNC(sub_823DBE50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e3608
	ctx.lr = 0x823DBE58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,12(r4)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r28,8(r4)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823dbe70
	if (!ctx.cr6.eq) goto loc_823DBE70;
	// li r30,1
	ctx.r30.s64 = 1;
loc_823DBE70:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823dbe98
	if (ctx.cr6.eq) goto loc_823DBE98;
	// addi r29,r3,40
	ctx.r29.s64 = ctx.r3.s64 + 40;
loc_823DBE80:
	// add r4,r31,r28
	ctx.r4.u64 = ctx.r31.u64 + ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823dbd18
	ctx.lr = 0x823DBE8C;
	sub_823DBD18(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x823dbe80
	if (ctx.cr6.lt) goto loc_823DBE80;
loc_823DBE98:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825e3658
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823DD770) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35f8
	ctx.lr = 0x823DD778;
	__savegprlr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// add r25,r11,r10
	ctx.r25.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// bl 0x825e3710
	ctx.lr = 0x823DD7A8;
	sub_825E3710(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// std r30,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// std r30,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r30.u64);
	// std r30,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// std r30,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r30.u64);
	// std r30,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r30.u64);
	// std r30,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, ctx.r30.u64);
	// std r30,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, ctx.r30.u64);
	// stw r30,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// std r30,24(r10)
	REX_STORE_U64(ctx.r10.u32 + 24, ctx.r30.u64);
	// bge cr6,0x823dd9d8
	if (!ctx.cr6.lt) goto loc_823DD9D8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r24,r11,-4964
	ctx.r24.s64 = ctx.r11.s64 + -4964;
loc_823DD7F0:
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x823dd9d8
	if (ctx.cr6.eq) goto loc_823DD9D8;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r10,31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 31, ctx.xer);
	// beq cr6,0x823dd978
	if (ctx.cr6.eq) goto loc_823DD978;
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// beq cr6,0x823dd8fc
	if (ctx.cr6.eq) goto loc_823DD8FC;
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// beq cr6,0x823dd894
	if (ctx.cr6.eq) goto loc_823DD894;
	// cmplwi cr6,r10,81
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 81, ctx.xer);
	// beq cr6,0x823dd838
	if (ctx.cr6.eq) goto loc_823DD838;
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x823dd9d8
	if (!ctx.cr6.eq) goto loc_823DD9D8;
	// rlwinm r10,r9,18,15,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x1FFFC;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823dd9d0
	goto loc_823DD9D0;
loc_823DD838:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// clrlwi r4,r10,21
	ctx.r4.u64 = ctx.r10.u32 & 0x7FF;
	// cmplwi cr6,r4,256
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 256, ctx.xer);
	// bge cr6,0x823dd9e4
	if (!ctx.cr6.lt) goto loc_823DD9E4;
	// rlwinm r10,r4,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// rlwinm r11,r4,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// and. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823dd9f0
	if (!ctx.cr0.eq) goto loc_823DD9F0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// bl 0x822beee0
	ctx.lr = 0x823DD88C;
	sub_822BEEE0(ctx, base);
loc_823DD88C:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// b 0x823dd9d0
	goto loc_823DD9D0;
loc_823DD894:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// clrlwi r11,r10,21
	ctx.r11.u64 = ctx.r10.u32 & 0x7FF;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x823dd9fc
	if (!ctx.cr6.lt) goto loc_823DD9FC;
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// clrlwi r8,r11,27
	ctx.r8.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// slw r8,r27,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// and. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823dda08
	if (!ctx.cr0.eq) goto loc_823DDA08;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// beq cr6,0x823dd8ec
	if (ctx.cr6.eq) goto loc_823DD8EC;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
loc_823DD8EC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822c08f0
	ctx.lr = 0x823DD8F8;
	sub_822C08F0(ctx, base);
	// b 0x823dd88c
	goto loc_823DD88C;
loc_823DD8FC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// clrlwi r11,r10,21
	ctx.r11.u64 = ctx.r10.u32 & 0x7FF;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x823dda14
	if (!ctx.cr6.lt) goto loc_823DDA14;
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// clrlwi r8,r11,27
	ctx.r8.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// slw r8,r27,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// and. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823dda20
	if (!ctx.cr0.eq) goto loc_823DDA20;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// beq cr6,0x823dd954
	if (ctx.cr6.eq) goto loc_823DD954;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
loc_823DD954:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r31,r7,4
	ctx.r31.s64 = ctx.r7.s64 + 4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823dd96c
	if (!ctx.cr6.eq) goto loc_823DD96C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_823DD96C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822beec8
	ctx.lr = 0x823DD974;
	sub_822BEEC8(ctx, base);
	// b 0x823dd9d0
	goto loc_823DD9D0;
loc_823DD978:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// rlwimi r8,r10,12,21,23
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x700) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r8,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,2560
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2560, ctx.xer);
	// bne cr6,0x823dd9d0
	if (!ctx.cr6.eq) goto loc_823DD9D0;
	// clrlwi r11,r10,21
	ctx.r11.u64 = ctx.r10.u32 & 0x7FF;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x823dd9d0
	if (!ctx.cr6.lt) goto loc_823DD9D0;
	// rlwinm r10,r9,5,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0x7;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x823dd9d0
	if (ctx.cr6.lt) goto loc_823DD9D0;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x823dd9d0
	if (ctx.cr6.gt) goto loc_823DD9D0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x823dd9c4
	if (!ctx.cr6.eq) goto loc_823DD9C4;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_823DD9C4:
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// lbz r10,-2(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// stbx r10,r11,r26
	REX_STORE_U8(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u8);
loc_823DD9D0:
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x823dd7f0
	if (ctx.cr6.lt) goto loc_823DD7F0;
loc_823DD9D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823DD9DC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x825e3648
	__restgprlr_24(ctx, base);
	return;
loc_823DD9E4:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2935
	ctx.r3.u64 = ctx.r3.u64 | 2935;
	// b 0x823dd9dc
	goto loc_823DD9DC;
loc_823DD9F0:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2944
	ctx.r3.u64 = ctx.r3.u64 | 2944;
	// b 0x823dd9dc
	goto loc_823DD9DC;
loc_823DD9FC:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2934
	ctx.r3.u64 = ctx.r3.u64 | 2934;
	// b 0x823dd9dc
	goto loc_823DD9DC;
loc_823DDA08:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2943
	ctx.r3.u64 = ctx.r3.u64 | 2943;
	// b 0x823dd9dc
	goto loc_823DD9DC;
loc_823DDA14:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2933
	ctx.r3.u64 = ctx.r3.u64 | 2933;
	// b 0x823dd9dc
	goto loc_823DD9DC;
loc_823DDA20:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2942
	ctx.r3.u64 = ctx.r3.u64 | 2942;
	// b 0x823dd9dc
	goto loc_823DD9DC;
}

DEFINE_REX_FUNC(sub_823F08E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r5,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	REX_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stb r11,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823F092C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F3A98) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e3608
	ctx.lr = 0x823F3AA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823f3b78
	if (ctx.cr6.eq) goto loc_823F3B78;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,-5656
	ctx.r31.s64 = ctx.r11.s64 + -5656;
	// addi r30,r10,10296
	ctx.r30.s64 = ctx.r10.s64 + 10296;
	// bne cr6,0x823f3ae8
	if (!ctx.cr6.eq) goto loc_823F3AE8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,10464
	ctx.r5.s64 = ctx.r11.s64 + 10464;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,115
	ctx.r7.s64 = 115;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823f05c8
	ctx.lr = 0x823F3AE8;
	sub_823F05C8(ctx, base);
loc_823F3AE8:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823f3b10
	if (!ctx.cr6.eq) goto loc_823F3B10;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,10444
	ctx.r5.s64 = ctx.r11.s64 + 10444;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,116
	ctx.r7.s64 = 116;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823f05c8
	ctx.lr = 0x823F3B10;
	sub_823F05C8(ctx, base);
loc_823F3B10:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f3b38
	if (ctx.cr6.eq) goto loc_823F3B38;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,10416
	ctx.r5.s64 = ctx.r11.s64 + 10416;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,119
	ctx.r7.s64 = 119;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823f05c8
	ctx.lr = 0x823F3B38;
	sub_823F05C8(ctx, base);
loc_823F3B38:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f3b60
	if (ctx.cr6.eq) goto loc_823F3B60;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,10388
	ctx.r5.s64 = ctx.r11.s64 + 10388;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823f05c8
	ctx.lr = 0x823F3B60;
	sub_823F05C8(ctx, base);
loc_823F3B60:
	// stw r29,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r28,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
loc_823F3B78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825e3658
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823F61F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e3604
	ctx.lr = 0x823F61F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,72(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// addi r28,r11,-5656
	ctx.r28.s64 = ctx.r11.s64 + -5656;
	// addi r27,r10,-5304
	ctx.r27.s64 = ctx.r10.s64 + -5304;
	// blt cr6,0x823f6240
	if (ctx.cr6.lt) goto loc_823F6240;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-5144
	ctx.r5.s64 = ctx.r11.s64 + -5144;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,634
	ctx.r7.s64 = 634;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823f05c8
	ctx.lr = 0x823F6240;
	sub_823F05C8(ctx, base);
loc_823F6240:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// mulli r30,r30,12
	ctx.r30.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(12));
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823f6274
	if (ctx.cr6.lt) goto loc_823F6274;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-5216
	ctx.r5.s64 = ctx.r11.s64 + -5216;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,634
	ctx.r7.s64 = 634;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823f05c8
	ctx.lr = 0x823F6274;
	sub_823F05C8(ctx, base);
loc_823F6274:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r11,r9,r29
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r29.s32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823f5ec0
	ctx.lr = 0x823F6294;
	sub_823F5EC0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825e3654
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823FBEF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823fbfac
	if (!ctx.cr6.eq) goto loc_823FBFAC;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x823fbf58
	if (ctx.cr6.lt) goto loc_823FBF58;
	// beq cr6,0x823fbfac
	if (ctx.cr6.eq) goto loc_823FBFAC;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// blt cr6,0x823fbf20
	if (ctx.cr6.lt) goto loc_823FBF20;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_823FBF20:
	// addi r10,r6,12
	ctx.r10.s64 = ctx.r6.s64 + 12;
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r6,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,244
	ctx.r11.s64 = ctx.r11.s64 + 244;
	// clrlwi r8,r6,27
	ctx.r8.u64 = ctx.r6.u32 & 0x1F;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,1
	ctx.r7.s64 = 1;
	// stwx r9,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u32);
	// slw r10,r7,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r9,r11,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// b 0x823fbfac
	goto loc_823FBFAC;
loc_823FBF58:
	// rlwinm r10,r6,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r6,27
	ctx.r9.u64 = ctx.r6.u32 & 0x1F;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r6,r11,r3
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// addi r10,r10,236
	ctx.r10.s64 = ctx.r10.s64 + 236;
	// andc r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r8.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u32);
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addic r5,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r5.s64 = ctx.r7.s64 + -1;
	// subfe r7,r5,r7
	temp.u8 = (~ctx.r5.u32 + ctx.r7.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r5.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stwx r9,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwzx r11,r10,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwx r11,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
loc_823FBFAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82403160) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35ec
	ctx.lr = 0x82403168;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.r3.u64);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r29,208(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// rlwinm r22,r29,20,29,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 20) & 0x7;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// cmplwi cr6,r22,6
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 6, ctx.xer);
	// ble cr6,0x8240319c
	if (!ctx.cr6.gt) goto loc_8240319C;
loc_82403190:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824032a8
	goto loc_824032A8;
loc_8240319C:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82403280
	if (ctx.cr6.eq) goto loc_82403280;
	// lwz r28,212(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// clrlwi r21,r29,20
	ctx.r21.u64 = ctx.r29.u32 & 0xFFF;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
loc_824031B8:
	// add r4,r21,r30
	ctx.r4.u64 = ctx.r21.u64 + ctx.r30.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82403190
	if (!ctx.cr6.lt) goto loc_82403190;
	// rlwinm r10,r29,4,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xF;
	// rlwinm r11,r28,4,26,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0x30;
	// li r9,2
	ctx.r9.s64 = 2;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// slw r10,r27,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r30.u8 & 0x3F));
	// slw r9,r9,r31
	ctx.r9.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r31.u8 & 0x3F));
	// rlwinm r8,r29,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// and r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 & ctx.r8.u64;
	// slw r9,r27,r31
	ctx.r9.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r31.u8 & 0x3F));
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// clrlwi r10,r10,20
	ctx.r10.u64 = ctx.r10.u32 & 0xFFF;
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// subfe r5,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// clrlwi r9,r9,20
	ctx.r9.u64 = ctx.r9.u32 & 0xFFF;
	// subfe r6,r11,r10
	temp.u8 = (~ctx.r11.u32 + ctx.r10.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r11.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r10,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// rlwinm r11,r28,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 20) & 0xF;
	// subfe r7,r10,r9
	temp.u8 = (~ctx.r10.u32 + ctx.r9.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82403250
	if (ctx.cr6.eq) goto loc_82403250;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82403250
	if (ctx.cr6.eq) goto loc_82403250;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x82403248
	if (ctx.cr6.eq) goto loc_82403248;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// beq cr6,0x82403248
	if (ctx.cr6.eq) goto loc_82403248;
	// not r11,r28
	ctx.r11.u64 = ~ctx.r28.u64;
	// rlwinm r8,r11,23,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// b 0x82403254
	goto loc_82403254;
loc_82403248:
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82403254
	goto loc_82403254;
loc_82403250:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
loc_82403254:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82402f88
	ctx.lr = 0x82403268;
	sub_82402F88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82403190
	if (ctx.cr0.lt) goto loc_82403190;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmplw cr6,r30,r22
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x824031b8
	if (ctx.cr6.lt) goto loc_824031B8;
loc_82403280:
	// rlwinm. r11,r29,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824032a4
	if (ctx.cr0.eq) goto loc_824032A4;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,0,20,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_824032A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824032A8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x825e363c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8240CCF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35d0
	ctx.lr = 0x8240CCF8;
	__savegprlr_14(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// stw r4,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r4.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// bl 0x8240a480
	ctx.lr = 0x8240CD14;
	sub_8240A480(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8240a518
	ctx.lr = 0x8240CD24;
	sub_8240A518(ctx, base);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8240bb88
	ctx.lr = 0x8240CD34;
	sub_8240BB88(ctx, base);
	// lwz r11,4(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 4);
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
	// bne 0x8240cd80
	if (!ctx.cr0.eq) goto loc_8240CD80;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8240cd80
	if (ctx.cr0.eq) goto loc_8240CD80;
loc_8240CD5C:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r10,0,6,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,40(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240cd80
	if (!ctx.cr0.eq) goto loc_8240CD80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8240cd5c
	if (!ctx.cr6.eq) goto loc_8240CD5C;
loc_8240CD80:
	// lwz r11,28(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 28);
	// addi r19,r20,24
	ctx.r19.s64 = ctx.r20.s64 + 24;
	// lwz r15,16(r17)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r17.u32 + 16);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// bne 0x8240ce60
	if (!ctx.cr0.eq) goto loc_8240CE60;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8240ce60
	if (ctx.cr0.eq) goto loc_8240CE60;
	// li r14,0
	ctx.r14.s64 = 0;
loc_8240CDAC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// rlwinm r10,r10,0,7,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFF81FFFFFF;
	// stw r14,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r14.u32);
	// clrlwi r9,r9,7
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFFFFF;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// bl 0x824c7c90
	ctx.lr = 0x8240CDE0;
	sub_824C7C90(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r11,r10,21,8,10
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0xE00000) | (ctx.r11.u64 & 0xFFFFFFFFFF1FFFFF);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8240bc80
	ctx.lr = 0x8240CE08;
	sub_8240BC80(ctx, base);
	// lwz r11,16(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 16);
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r15.u32, ctx.xer);
	// ble cr6,0x8240ce18
	if (!ctx.cr6.gt) goto loc_8240CE18;
	// mr r15,r11
	ctx.r15.u64 = ctx.r11.u64;
loc_8240CE18:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8240ce3c
	if (ctx.cr0.eq) goto loc_8240CE3C;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// beq cr6,0x8240ce3c
	if (ctx.cr6.eq) goto loc_8240CE3C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8240a688
	ctx.lr = 0x8240CE3C;
	sub_8240A688(ctx, base);
loc_8240CE3C:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240ce58
	if (!ctx.cr0.eq) goto loc_8240CE58;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8240cdac
	if (!ctx.cr0.eq) goto loc_8240CDAC;
loc_8240CE58:
	// cmplw cr6,r30,r15
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x8240ce6c
	if (!ctx.cr6.eq) goto loc_8240CE6C;
loc_8240CE60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8240CE64:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x825e3620
	__restgprlr_14(ctx, base);
	return;
loc_8240CE6C:
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x823fd280
	ctx.lr = 0x8240CE7C;
	sub_823FD280(ctx, base);
	// addi r24,r3,4
	ctx.r24.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// ori r10,r24,1
	ctx.r10.u64 = ctx.r24.u64 | 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,20(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240cf04
	if (!ctx.cr0.eq) goto loc_8240CF04;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8240cf04
	if (ctx.cr0.eq) goto loc_8240CF04;
loc_8240CEAC:
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240cee8
	if (ctx.cr0.eq) goto loc_8240CEE8;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_8240CEBC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240ced8
	if (ctx.cr6.eq) goto loc_8240CED8;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8240ced8
	if (!ctx.cr0.eq) goto loc_8240CED8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8240cebc
	goto loc_8240CEBC;
loc_8240CED8:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r15.u32, ctx.xer);
	// beq cr6,0x8240ce60
	if (ctx.cr6.eq) goto loc_8240CE60;
loc_8240CEE8:
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240cf04
	if (!ctx.cr0.eq) goto loc_8240CF04;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8240ceac
	if (!ctx.cr6.eq) goto loc_8240CEAC;
loc_8240CF04:
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240d0d0
	if (!ctx.cr0.eq) goto loc_8240D0D0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8240d0d0
	if (ctx.cr0.eq) goto loc_8240D0D0;
loc_8240CF1C:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// rlwinm. r10,r11,0,15,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240cf68
	if (!ctx.cr0.eq) goto loc_8240CF68;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240d0b4
	if (ctx.cr0.eq) goto loc_8240D0B4;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
loc_8240CF38:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240cf54
	if (ctx.cr6.eq) goto loc_8240CF54;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240cf54
	if (!ctx.cr0.eq) goto loc_8240CF54;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8240cf38
	goto loc_8240CF38;
loc_8240CF54:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r15.u32, ctx.xer);
	// beq cr6,0x8240ce60
	if (ctx.cr6.eq) goto loc_8240CE60;
	// b 0x8240d0b4
	goto loc_8240D0B4;
loc_8240CF68:
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x8240d0b4
	if (!ctx.cr6.eq) goto loc_8240D0B4;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// li r28,8191
	ctx.r28.s64 = 8191;
	// lwz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// lwz r30,4(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// oris r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 | 67108864;
	// stw r11,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r10,16(r29)
	REX_STORE_U32(ctx.r29.u32 + 16, ctx.r10.u32);
loc_8240CF94:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8240d004
	if (ctx.cr6.eq) goto loc_8240D004;
	// lwz r31,16(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8240cffc
	if (ctx.cr6.eq) goto loc_8240CFFC;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x8240cffc
	if (!ctx.cr6.eq) goto loc_8240CFFC;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14336
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14336, ctx.xer);
	// beq cr6,0x8240cffc
	if (ctx.cr6.eq) goto loc_8240CFFC;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x823fd1c0
	ctx.lr = 0x8240CFD4;
	sub_823FD1C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240cffc
	if (ctx.cr0.eq) goto loc_8240CFFC;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// oris r9,r11,1024
	ctx.r9.u64 = ctx.r11.u64 | 67108864;
	// clrlwi r11,r10,19
	ctx.r11.u64 = ctx.r10.u32 & 0x1FFF;
	// stw r9,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x8240cffc
	if (!ctx.cr6.lt) goto loc_8240CFFC;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_8240CFFC:
	// lwz r30,8(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x8240cf94
	goto loc_8240CF94;
loc_8240D004:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r31,r10,19
	ctx.r31.u64 = ctx.r10.u32 & 0x1FFF;
	// bne 0x8240d03c
	if (!ctx.cr0.eq) goto loc_8240D03C;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8240d03c
	if (ctx.cr0.eq) goto loc_8240D03C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8240d048
	if (!ctx.cr6.gt) goto loc_8240D048;
loc_8240D03C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8248a418
	ctx.lr = 0x8240D048;
	sub_8248A418(ctx, base);
loc_8240D048:
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
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240d090
	if (!ctx.cr0.eq) goto loc_8240D090;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8240d090
	if (ctx.cr0.eq) goto loc_8240D090;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8240d09c
	if (!ctx.cr6.gt) goto loc_8240D09C;
loc_8240D090:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8248a418
	ctx.lr = 0x8240D09C;
	sub_8248A418(ctx, base);
loc_8240D09C:
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
	// stwx r28,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r28.u32);
loc_8240D0B4:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240d0d0
	if (!ctx.cr0.eq) goto loc_8240D0D0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8240cf1c
	if (!ctx.cr6.eq) goto loc_8240CF1C;
loc_8240D0D0:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240ce60
	if (!ctx.cr0.eq) goto loc_8240CE60;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8240ce60
	if (ctx.cr0.eq) goto loc_8240CE60;
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 4);
	// li r26,8191
	ctx.r26.s64 = 8191;
	// li r27,8191
	ctx.r27.s64 = 8191;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240d308
	if (!ctx.cr0.eq) goto loc_8240D308;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// b 0x8240d2fc
	goto loc_8240D2FC;
loc_8240D100:
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x8240d218
	if (ctx.cr6.gt) goto loc_8240D218;
loc_8240D110:
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8240d210
	if (!ctx.cr0.eq) goto loc_8240D210;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8240d210
	if (ctx.cr0.eq) goto loc_8240D210;
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
	// lwzx r30,r10,r4
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x8240d184
	if (!ctx.cr0.eq) goto loc_8240D184;
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
	ctx.lr = 0x8240D184;
	sub_823E2710(ctx, base);
loc_8240D184:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240d19c
	if (ctx.cr0.eq) goto loc_8240D19C;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// b 0x8240d1a8
	goto loc_8240D1A8;
loc_8240D19C:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_8240D1A8:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r4
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x8240d1fc
	if (!ctx.cr0.eq) goto loc_8240D1FC;
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
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823e2710
	ctx.lr = 0x8240D1FC;
	sub_823E2710(ctx, base);
loc_8240D1FC:
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x8240d110
	if (!ctx.cr6.gt) goto loc_8240D110;
loc_8240D210:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x8240d2ec
	if (!ctx.cr6.gt) goto loc_8240D2EC;
loc_8240D218:
	// lwz r30,4(r28)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8240D220:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8240d2ec
	if (ctx.cr6.eq) goto loc_8240D2EC;
	// lwz r31,16(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8240d270
	if (ctx.cr6.eq) goto loc_8240D270;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823fd1c0
	ctx.lr = 0x8240D23C;
	sub_823FD1C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240d270
	if (ctx.cr0.eq) goto loc_8240D270;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x8240d270
	if (!ctx.cr6.eq) goto loc_8240D270;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// beq cr6,0x8240d270
	if (ctx.cr6.eq) goto loc_8240D270;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8240d278
	if (ctx.cr6.lt) goto loc_8240D278;
loc_8240D270:
	// lwz r29,8(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// b 0x8240d220
	goto loc_8240D220;
loc_8240D278:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r10,16(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// oris r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 | 67108864;
	// stw r11,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// stw r10,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r10.u32);
loc_8240D290:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8240d2ec
	if (ctx.cr6.eq) goto loc_8240D2EC;
	// lwz r31,16(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8240d2e4
	if (ctx.cr6.eq) goto loc_8240D2E4;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x8240d2e4
	if (!ctx.cr6.eq) goto loc_8240D2E4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14336
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14336, ctx.xer);
	// beq cr6,0x8240d2e4
	if (ctx.cr6.eq) goto loc_8240D2E4;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x823fd1c0
	ctx.lr = 0x8240D2D0;
	sub_823FD1C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240d2e4
	if (ctx.cr0.eq) goto loc_8240D2E4;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8240D2E4:
	// lwz r30,8(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x8240d290
	goto loc_8240D290;
loc_8240D2EC:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240d308
	if (!ctx.cr0.eq) goto loc_8240D308;
loc_8240D2FC:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r28,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r28.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x8240d100
	if (!ctx.cr0.eq) goto loc_8240D100;
loc_8240D308:
	// li r16,1
	ctx.r16.s64 = 1;
loc_8240D30C:
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 4);
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240d378
	if (!ctx.cr0.eq) goto loc_8240D378;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8240d378
	if (ctx.cr0.eq) goto loc_8240D378;
loc_8240D324:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r10,r9,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240d360
	if (!ctx.cr0.eq) goto loc_8240D360;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8240D334:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8240d360
	if (ctx.cr6.eq) goto loc_8240D360;
	// lwz r8,12(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm. r8,r8,6,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8240d354
	if (!ctx.cr0.eq) goto loc_8240D354;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8240d334
	goto loc_8240D334;
loc_8240D354:
	// oris r10,r9,1024
	ctx.r10.u64 = ctx.r9.u64 | 67108864;
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8240D360:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240d378
	if (!ctx.cr0.eq) goto loc_8240D378;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8240d324
	if (!ctx.cr6.eq) goto loc_8240D324;
loc_8240D378:
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240d404
	if (!ctx.cr0.eq) goto loc_8240D404;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// b 0x8240d3f8
	goto loc_8240D3F8;
loc_8240D38C:
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r10,r8,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240d3e8
	if (!ctx.cr0.eq) goto loc_8240D3E8;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8240D39C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8240d3e8
	if (ctx.cr6.eq) goto loc_8240D3E8;
	// lwz r10,16(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8240d3d4
	if (ctx.cr6.eq) goto loc_8240D3D4;
	// lwz r6,28(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// cmplw cr6,r6,r20
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x8240d3d4
	if (!ctx.cr6.eq) goto loc_8240D3D4;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r6,r10,0,18,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r6,14336
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 14336, ctx.xer);
	// beq cr6,0x8240d3d4
	if (ctx.cr6.eq) goto loc_8240D3D4;
	// rlwinm. r10,r10,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240d3dc
	if (!ctx.cr0.eq) goto loc_8240D3DC;
loc_8240D3D4:
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x8240d39c
	goto loc_8240D39C;
loc_8240D3DC:
	// oris r10,r8,1024
	ctx.r10.u64 = ctx.r8.u64 | 67108864;
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8240D3E8:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240d404
	if (!ctx.cr0.eq) goto loc_8240D404;
loc_8240D3F8:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240d38c
	if (!ctx.cr0.eq) goto loc_8240D38C;
loc_8240D404:
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240d30c
	if (!ctx.cr0.eq) goto loc_8240D30C;
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 4);
	// mr r26,r16
	ctx.r26.u64 = ctx.r16.u64;
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r23,r14
	ctx.r23.u64 = ctx.r14.u64;
	// mr r21,r14
	ctx.r21.u64 = ctx.r14.u64;
	// mr r22,r14
	ctx.r22.u64 = ctx.r14.u64;
	// bne 0x8240d768
	if (!ctx.cr0.eq) goto loc_8240D768;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// b 0x8240d75c
	goto loc_8240D75C;
loc_8240D434:
	// lwz r24,8(r27)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm. r11,r24,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240d74c
	if (ctx.cr0.eq) goto loc_8240D74C;
	// stw r14,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// stb r14,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r14.u8);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82409b48
	ctx.lr = 0x8240D464;
	sub_82409B48(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8240d498
	if (!ctx.cr0.eq) goto loc_8240D498;
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm. r10,r11,0,15,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8240d498
	if (ctx.cr0.eq) goto loc_8240D498;
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x8240d498
	if (!ctx.cr6.eq) goto loc_8240D498;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
loc_8240D498:
	// clrlwi. r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240d548
	if (!ctx.cr0.eq) goto loc_8240D548;
	// lwz r30,4(r27)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
loc_8240D4A4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8240d548
	if (ctx.cr6.eq) goto loc_8240D548;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240d540
	if (ctx.cr6.eq) goto loc_8240D540;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8240d540
	if (ctx.cr0.eq) goto loc_8240D540;
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r8,380(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8240d540
	if (!ctx.cr6.eq) goto loc_8240D540;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,14336
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14336, ctx.xer);
	// beq cr6,0x8240d540
	if (ctx.cr6.eq) goto loc_8240D540;
	// lwz r31,0(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8240D4E8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8240d538
	if (ctx.cr6.eq) goto loc_8240D538;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fd1c0
	ctx.lr = 0x8240D4F8;
	sub_823FD1C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240d52c
	if (ctx.cr0.eq) goto loc_8240D52C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,380(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8240d52c
	if (!ctx.cr6.eq) goto loc_8240D52C;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm. r10,r11,0,15,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8240d52c
	if (ctx.cr0.eq) goto loc_8240D52C;
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r15.u32, ctx.xer);
	// beq cr6,0x8240d534
	if (ctx.cr6.eq) goto loc_8240D534;
loc_8240D52C:
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x8240d4e8
	goto loc_8240D4E8;
loc_8240D534:
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
loc_8240D538:
	// clrlwi. r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240d548
	if (!ctx.cr0.eq) goto loc_8240D548;
loc_8240D540:
	// lwz r30,8(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x8240d4a4
	goto loc_8240D4A4;
loc_8240D548:
	// lwz r30,84(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8240d58c
	if (!ctx.cr6.eq) goto loc_8240D58C;
	// rlwinm r11,r15,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8240d588
	if (!ctx.cr6.lt) goto loc_8240D588;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8240d58c
	if (ctx.cr6.eq) goto loc_8240D58C;
	// cmpw cr6,r25,r28
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x8240d588
	if (ctx.cr6.gt) goto loc_8240D588;
	// neg r11,r15
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r15.u64);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8240d58c
	if (!ctx.cr6.lt) goto loc_8240D58C;
loc_8240D588:
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
loc_8240D58C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82407688
	ctx.lr = 0x8240D594;
	sub_82407688(ctx, base);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bne 0x8240d5bc
	if (!ctx.cr0.eq) goto loc_8240D5BC;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x8240d5bc
	if (ctx.cr6.eq) goto loc_8240D5BC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8240d5bc
	if (ctx.cr6.eq) goto loc_8240D5BC;
	// cmpw cr6,r21,r3
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8240d5bc
	if (ctx.cr6.eq) goto loc_8240D5BC;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
loc_8240D5BC:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240d648
	if (!ctx.cr0.eq) goto loc_8240D648;
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
loc_8240D5CC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8240d648
	if (ctx.cr6.eq) goto loc_8240D648;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240d63c
	if (ctx.cr6.eq) goto loc_8240D63C;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r8,r8,0,4,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8240d63c
	if (ctx.cr0.eq) goto loc_8240D63C;
	// lwz r8,28(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r7,380(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8240d63c
	if (!ctx.cr6.eq) goto loc_8240D63C;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r8,0,18,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r8,14336
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 14336, ctx.xer);
	// beq cr6,0x8240d63c
	if (ctx.cr6.eq) goto loc_8240D63C;
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r11,r8,27,5,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFF8000000);
	// rlwinm r11,r11,12,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x7FF;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x8240d63c
	if (ctx.cr6.eq) goto loc_8240D63C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8240d634
	if (!ctx.cr6.eq) goto loc_8240D634;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x8240d63c
	goto loc_8240D63C;
loc_8240D634:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8240d644
	if (!ctx.cr6.eq) goto loc_8240D644;
loc_8240D63C:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8240d5cc
	goto loc_8240D5CC;
loc_8240D644:
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
loc_8240D648:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240d6a8
	if (!ctx.cr0.eq) goto loc_8240D6A8;
	// rlwinm r11,r24,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8240d68c
	if (ctx.cr6.eq) goto loc_8240D68C;
	// cmpwi cr6,r11,37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
	// beq cr6,0x8240d670
	if (ctx.cr6.eq) goto loc_8240D670;
	// cmpwi cr6,r11,110
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 110, ctx.xer);
	// bne cr6,0x8240d6a8
	if (!ctx.cr6.eq) goto loc_8240D6A8;
	// b 0x8240d6a0
	goto loc_8240D6A0;
loc_8240D670:
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 44);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm. r11,r11,0,25,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240d6a8
	if (!ctx.cr0.eq) goto loc_8240D6A8;
	// b 0x8240d6a0
	goto loc_8240D6A0;
loc_8240D68C:
	// lwz r4,48(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 48);
	// lwz r3,44(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 44);
	// bl 0x823fcc18
	ctx.lr = 0x8240D698;
	sub_823FCC18(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240d6a8
	if (ctx.cr0.eq) goto loc_8240D6A8;
loc_8240D6A0:
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// mr r20,r16
	ctx.r20.u64 = ctx.r16.u64;
loc_8240D6A8:
	// lwz r11,52(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 52);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240d6bc
	if (ctx.cr0.eq) goto loc_8240D6BC;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// mr r20,r16
	ctx.r20.u64 = ctx.r16.u64;
loc_8240D6BC:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8240d6e8
	if (ctx.cr6.eq) goto loc_8240D6E8;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240d6e8
	if (ctx.cr0.eq) goto loc_8240D6E8;
	// cmplwi cr6,r26,2047
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 2047, ctx.xer);
	// bge cr6,0x8240d788
	if (!ctx.cr6.lt) goto loc_8240D788;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// mr r23,r14
	ctx.r23.u64 = ctx.r14.u64;
	// mr r22,r14
	ctx.r22.u64 = ctx.r14.u64;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
loc_8240D6E8:
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// lwz r10,20(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwimi r11,r26,20,1,4
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 20) & 0x78000000) | (ctx.r11.u64 & 0xFFFFFFFF87FFFFFF);
	// rlwimi r10,r26,25,0,6
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 25) & 0xFE000000) | (ctx.r10.u64 & 0xFFFFFFFF01FFFFFF);
	// stw r11,16(r27)
	REX_STORE_U32(ctx.r27.u32 + 16, ctx.r11.u32);
	// stw r10,20(r27)
	REX_STORE_U32(ctx.r27.u32 + 20, ctx.r10.u32);
	// beq cr6,0x8240d70c
	if (ctx.cr6.eq) goto loc_8240D70C;
	// stw r27,32(r23)
	REX_STORE_U32(ctx.r23.u32 + 32, ctx.r27.u32);
loc_8240D70C:
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x8240d724
	if (!ctx.cr6.eq) goto loc_8240D724;
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
loc_8240D724:
	// clrlwi. r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240d748
	if (ctx.cr0.eq) goto loc_8240D748;
	// cmplwi cr6,r26,2047
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 2047, ctx.xer);
	// bge cr6,0x8240d794
	if (!ctx.cr6.lt) goto loc_8240D794;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// mr r23,r14
	ctx.r23.u64 = ctx.r14.u64;
	// mr r22,r14
	ctx.r22.u64 = ctx.r14.u64;
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
	// mr r21,r14
	ctx.r21.u64 = ctx.r14.u64;
loc_8240D748:
	// lwz r20,380(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
loc_8240D74C:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240d768
	if (!ctx.cr0.eq) goto loc_8240D768;
loc_8240D75C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r27,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r27.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x8240d434
	if (!ctx.cr0.eq) goto loc_8240D434;
loc_8240D768:
	// rlwinm r31,r26,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r18,972
	ctx.r30.s64 = ctx.r18.s64 + 972;
	// cmplwi cr6,r31,132
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 132, ctx.xer);
	// ble cr6,0x8240d7a0
	if (!ctx.cr6.gt) goto loc_8240D7A0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823fd8a0
	ctx.lr = 0x8240D784;
	sub_823FD8A0(ctx, base);
	// b 0x8240d808
	goto loc_8240D808;
loc_8240D788:
	// li r4,3641
	ctx.r4.s64 = 3641;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x823e2770
	ctx.lr = 0x8240D794;
	sub_823E2770(ctx, base);
loc_8240D794:
	// li r4,3641
	ctx.r4.s64 = 3641;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x823e2770
	ctx.lr = 0x8240D7A0;
	sub_823E2770(ctx, base);
loc_8240D7A0:
	// lwz r10,140(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 140);
	// lwz r11,144(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 144);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r10,r10,4096
	ctx.r10.s64 = ctx.r10.s64 + 4096;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x8240d7c4
	if (ctx.cr6.lt) goto loc_8240D7C4;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,144(r30)
	REX_STORE_U32(ctx.r30.u32 + 144, ctx.r10.u32);
	// b 0x8240d80c
	goto loc_8240D80C;
loc_8240D7C4:
	// rlwinm r11,r31,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r30
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8240d7fc
	if (ctx.cr6.eq) goto loc_8240D7FC;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r10,r11,r30
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// bl 0x825e3710
	ctx.lr = 0x8240D7F4;
	sub_825E3710(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8240d80c
	goto loc_8240D80C;
loc_8240D7FC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823fcf80
	ctx.lr = 0x8240D808;
	sub_823FCF80(ctx, base);
loc_8240D808:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8240D80C:
	// stw r11,724(r18)
	REX_STORE_U32(ctx.r18.u32 + 724, ctx.r11.u32);
	// cmplwi cr6,r31,132
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 132, ctx.xer);
	// ble cr6,0x8240d828
	if (!ctx.cr6.gt) goto loc_8240D828;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823fd8a0
	ctx.lr = 0x8240D824;
	sub_823FD8A0(ctx, base);
	// b 0x8240d890
	goto loc_8240D890;
loc_8240D828:
	// lwz r10,140(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 140);
	// lwz r11,144(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 144);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r10,r10,4096
	ctx.r10.s64 = ctx.r10.s64 + 4096;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x8240d84c
	if (ctx.cr6.lt) goto loc_8240D84C;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,144(r30)
	REX_STORE_U32(ctx.r30.u32 + 144, ctx.r10.u32);
	// b 0x8240d894
	goto loc_8240D894;
loc_8240D84C:
	// rlwinm r11,r31,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r30
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8240d884
	if (ctx.cr6.eq) goto loc_8240D884;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r10,r11,r30
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// bl 0x825e3710
	ctx.lr = 0x8240D87C;
	sub_825E3710(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8240d894
	goto loc_8240D894;
loc_8240D884:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823fcf80
	ctx.lr = 0x8240D890;
	sub_823FCF80(ctx, base);
loc_8240D890:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8240D894:
	// cmplwi cr6,r31,132
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 132, ctx.xer);
	// stw r11,720(r18)
	REX_STORE_U32(ctx.r18.u32 + 720, ctx.r11.u32);
	// ble cr6,0x8240d8b0
	if (!ctx.cr6.gt) goto loc_8240D8B0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823fd8a0
	ctx.lr = 0x8240D8AC;
	sub_823FD8A0(ctx, base);
	// b 0x8240d918
	goto loc_8240D918;
loc_8240D8B0:
	// lwz r10,140(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 140);
	// lwz r11,144(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 144);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r10,r10,4096
	ctx.r10.s64 = ctx.r10.s64 + 4096;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x8240d8d4
	if (ctx.cr6.lt) goto loc_8240D8D4;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,144(r30)
	REX_STORE_U32(ctx.r30.u32 + 144, ctx.r10.u32);
	// b 0x8240d91c
	goto loc_8240D91C;
loc_8240D8D4:
	// rlwinm r11,r31,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r30
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8240d90c
	if (ctx.cr6.eq) goto loc_8240D90C;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r10,r11,r30
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// bl 0x825e3710
	ctx.lr = 0x8240D904;
	sub_825E3710(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8240d91c
	goto loc_8240D91C;
loc_8240D90C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823fcf80
	ctx.lr = 0x8240D918;
	sub_823FCF80(ctx, base);
loc_8240D918:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8240D91C:
	// stw r11,728(r18)
	REX_STORE_U32(ctx.r18.u32 + 728, ctx.r11.u32);
	// mr r29,r14
	ctx.r29.u64 = ctx.r14.u64;
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240d9c4
	if (!ctx.cr0.eq) goto loc_8240D9C4;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// b 0x8240d9b8
	goto loc_8240D9B8;
loc_8240D938:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240d9a8
	if (ctx.cr0.eq) goto loc_8240D9A8;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// rlwimi r11,r10,27,5,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFF8000000);
	// rlwinm r5,r11,12,21,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x7FF;
	// cmplw cr6,r5,r29
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8240d9a8
	if (ctx.cr6.eq) goto loc_8240D9A8;
	// lwz r10,720(r18)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 720);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r14,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r14,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r14.u8);
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// stw r30,-4(r10)
	REX_STORE_U32(ctx.r10.u32 + -4, ctx.r30.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r10,728(r18)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 728);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// bl 0x82409b48
	ctx.lr = 0x8240D99C;
	sub_82409B48(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,-4(r31)
	REX_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
loc_8240D9A8:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240d9c4
	if (!ctx.cr0.eq) goto loc_8240D9C4;
loc_8240D9B8:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r30,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r30.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8240d938
	if (!ctx.cr0.eq) goto loc_8240D938;
loc_8240D9C4:
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240de58
	if (!ctx.cr0.eq) goto loc_8240DE58;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8240de58
	if (ctx.cr0.eq) goto loc_8240DE58;
loc_8240D9DC:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8240de3c
	if (ctx.cr0.eq) goto loc_8240DE3C;
	// rlwinm. r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240da14
	if (!ctx.cr0.eq) goto loc_8240DA14;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x8240da08
	if (ctx.cr6.lt) goto loc_8240DA08;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// ble cr6,0x8240da0c
	if (!ctx.cr6.gt) goto loc_8240DA0C;
loc_8240DA08:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_8240DA0C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240de3c
	if (ctx.cr0.eq) goto loc_8240DE3C;
loc_8240DA14:
	// lwz r6,4(r26)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// addi r25,r26,4
	ctx.r25.s64 = ctx.r26.s64 + 4;
	// mr r24,r16
	ctx.r24.u64 = ctx.r16.u64;
loc_8240DA20:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8240db14
	if (ctx.cr6.eq) goto loc_8240DB14;
	// lwz r9,16(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8240db08
	if (ctx.cr6.eq) goto loc_8240DB08;
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240da4c
	if (ctx.cr0.eq) goto loc_8240DA4C;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// beq 0x8240da50
	if (ctx.cr0.eq) goto loc_8240DA50;
loc_8240DA4C:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_8240DA50:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240db08
	if (ctx.cr0.eq) goto loc_8240DB08;
	// rlwinm. r11,r10,0,7,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFE000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240db08
	if (!ctx.cr0.eq) goto loc_8240DB08;
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r10,16(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r9,16(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwimi r10,r11,27,5,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF) | (ctx.r10.u64 & 0xFFFFFFFFF8000000);
	// rlwimi r9,r8,27,5,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF) | (ctx.r9.u64 & 0xFFFFFFFFF8000000);
	// rlwinm r7,r10,12,21,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x7FF;
	// rlwinm r11,r9,12,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x7FF;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8240db08
	if (ctx.cr6.eq) goto loc_8240DB08;
	// lwz r11,720(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 720);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x8240db00
	goto loc_8240DB00;
loc_8240DA9C:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
loc_8240DAA0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8240dafc
	if (ctx.cr6.eq) goto loc_8240DAFC;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r11,r8,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240dac0
	if (ctx.cr0.eq) goto loc_8240DAC0;
	// rlwinm. r11,r8,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// beq 0x8240dac4
	if (ctx.cr0.eq) goto loc_8240DAC4;
loc_8240DAC0:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_8240DAC4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240daf4
	if (ctx.cr0.eq) goto loc_8240DAF4;
	// rlwinm r11,r8,0,7,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1FFE000;
	// cmplwi cr6,r11,49152
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49152, ctx.xer);
	// bne cr6,0x8240daf4
	if (!ctx.cr6.eq) goto loc_8240DAF4;
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r11,r8,27,5,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFF8000000);
	// rlwinm r11,r11,12,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x7FF;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8240db10
	if (!ctx.cr6.eq) goto loc_8240DB10;
loc_8240DAF4:
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8240daa0
	goto loc_8240DAA0;
loc_8240DAFC:
	// lwz r10,32(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
loc_8240DB00:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8240da9c
	if (!ctx.cr6.eq) goto loc_8240DA9C;
loc_8240DB08:
	// lwz r6,8(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// b 0x8240da20
	goto loc_8240DA20;
loc_8240DB10:
	// mr r24,r14
	ctx.r24.u64 = ctx.r14.u64;
loc_8240DB14:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8240DB18:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8240de3c
	if (ctx.cr6.eq) goto loc_8240DE3C;
	// lwz r29,16(r9)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8240dbd0
	if (ctx.cr6.eq) goto loc_8240DBD0;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240db48
	if (ctx.cr0.eq) goto loc_8240DB48;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// beq 0x8240db4c
	if (ctx.cr0.eq) goto loc_8240DB4C;
loc_8240DB48:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_8240DB4C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240dbd0
	if (ctx.cr0.eq) goto loc_8240DBD0;
	// rlwinm. r27,r10,19,20,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0xFFF;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt 0x8240dbd0
	if (ctx.cr0.lt) goto loc_8240DBD0;
	// cmpwi cr6,r27,6
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 6, ctx.xer);
	// bgt cr6,0x8240dbd0
	if (ctx.cr6.gt) goto loc_8240DBD0;
	// cmpwi cr6,r27,8
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 8, ctx.xer);
	// beq cr6,0x8240dbd0
	if (ctx.cr6.eq) goto loc_8240DBD0;
	// cmpwi cr6,r27,5
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 5, ctx.xer);
	// beq cr6,0x8240dbd0
	if (ctx.cr6.eq) goto loc_8240DBD0;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// beq cr6,0x8240dbd0
	if (ctx.cr6.eq) goto loc_8240DBD0;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r8,16(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r7,20(r26)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwimi r10,r11,27,5,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF) | (ctx.r10.u64 & 0xFFFFFFFFF8000000);
	// rlwimi r8,r7,27,5,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF) | (ctx.r8.u64 & 0xFFFFFFFFF8000000);
	// rlwinm r28,r10,12,21,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x7FF;
	// rlwinm r11,r8,12,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0x7FF;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8240dbd0
	if (ctx.cr6.eq) goto loc_8240DBD0;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// blt cr6,0x8240dbc8
	if (ctx.cr6.lt) goto loc_8240DBC8;
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// blt cr6,0x8240dbd8
	if (ctx.cr6.lt) goto loc_8240DBD8;
	// cmplwi cr6,r27,6
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 6, ctx.xer);
	// beq cr6,0x8240dbd0
	if (ctx.cr6.eq) goto loc_8240DBD0;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x823e2770
	ctx.lr = 0x8240DBC8;
	sub_823E2770(ctx, base);
loc_8240DBC8:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240dbd8
	if (!ctx.cr0.eq) goto loc_8240DBD8;
loc_8240DBD0:
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
	// b 0x8240db18
	goto loc_8240DB18;
loc_8240DBD8:
	// lwz r30,44(r26)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 44);
	// lwz r31,12(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240dc74
	if (ctx.cr0.eq) goto loc_8240DC74;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x824099a0
	ctx.lr = 0x8240DBFC;
	sub_824099A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// rlwinm r5,r26,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x824cf4d0
	ctx.lr = 0x8240DC14;
	sub_824CF4D0(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// oris r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 | 67108864;
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r7,16(r26)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r10,20(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwimi r7,r10,27,5,31
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF) | (ctx.r7.u64 & 0xFFFFFFFFF8000000);
	// rlwinm r10,r7,12,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0x7FF;
	// rlwimi r9,r10,20,1,4
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x78000000) | (ctx.r9.u64 & 0xFFFFFFFF87FFFFFF);
	// rlwimi r8,r10,25,0,6
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0xFE000000) | (ctx.r8.u64 & 0xFFFFFFFF01FFFFFF);
	// stw r9,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r8,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// lwz r10,32(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 32);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r11,32(r26)
	REX_STORE_U32(ctx.r26.u32 + 32, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// beq cr6,0x8240dc74
	if (ctx.cr6.eq) goto loc_8240DC74;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8240a688
	ctx.lr = 0x8240DC74;
	sub_8240A688(ctx, base);
loc_8240DC74:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r6,r11,25,25,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x824ca1f0
	ctx.lr = 0x8240DC94;
	sub_824CA1F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82410a40
	ctx.lr = 0x8240DCA0;
	sub_82410A40(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r30,0(r26)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
loc_8240DCB4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8240dcdc
	if (ctx.cr6.eq) goto loc_8240DCDC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240dcd4
	if (!ctx.cr0.eq) goto loc_8240DCD4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410a40
	ctx.lr = 0x8240DCD4;
	sub_82410A40(ctx, base);
loc_8240DCD4:
	// lwz r30,4(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8240dcb4
	goto loc_8240DCB4;
loc_8240DCDC:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_8240DCE0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8240DCE4:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240dd2c
	if (!ctx.cr0.eq) goto loc_8240DD2C;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240dd2c
	if (ctx.cr0.eq) goto loc_8240DD2C;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r10,r10,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8240dce4
	if (ctx.cr0.eq) goto loc_8240DCE4;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r9,r10,27,5,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF) | (ctx.r9.u64 & 0xFFFFFFFFF8000000);
	// rlwinm r10,r9,12,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x7FF;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8240dd2c
	if (!ctx.cr6.eq) goto loc_8240DD2C;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// b 0x8240dce0
	goto loc_8240DCE0;
loc_8240DD2C:
	// rlwinm r11,r8,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r6,r11,-36
	ctx.r6.s64 = ctx.r11.s64 + -36;
	// addi r5,r10,-36
	ctx.r5.s64 = ctx.r10.s64 + -36;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// stw r4,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r4,r4,0,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r5,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwimi r10,r28,25,0,6
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 25) & 0xFE000000) | (ctx.r10.u64 & 0xFFFFFFFF01FFFFFF);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// oris r9,r9,1024
	ctx.r9.u64 = ctx.r9.u64 | 67108864;
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// rlwimi r11,r28,20,1,4
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 20) & 0x78000000) | (ctx.r11.u64 & 0xFFFFFFFF87FFFFFF);
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r31,32(r8)
	REX_STORE_U32(ctx.r8.u32 + 32, ctx.r31.u32);
loc_8240DD90:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240db14
	if (ctx.cr6.eq) goto loc_8240DB14;
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8240de28
	if (ctx.cr6.eq) goto loc_8240DE28;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r9,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8240ddc0
	if (ctx.cr0.eq) goto loc_8240DDC0;
	// rlwinm. r10,r9,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// beq 0x8240ddc4
	if (ctx.cr0.eq) goto loc_8240DDC4;
loc_8240DDC0:
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
loc_8240DDC4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8240de28
	if (ctx.cr0.eq) goto loc_8240DE28;
	// rlwinm r10,r9,19,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0xFFF;
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x8240de28
	if (!ctx.cr6.eq) goto loc_8240DE28;
	// lwz r10,20(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r9,16(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// rlwimi r9,r10,27,5,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF) | (ctx.r9.u64 & 0xFFFFFFFFF8000000);
	// rlwinm r10,r9,12,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x7FF;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8240de28
	if (!ctx.cr6.eq) goto loc_8240DE28;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8240de08
	goto loc_8240DE08;
loc_8240DE00:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_8240DE08:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8240de00
	if (!ctx.cr6.eq) goto loc_8240DE00;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
loc_8240DE28:
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8240dd90
	if (!ctx.cr6.eq) goto loc_8240DD90;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// b 0x8240dd90
	goto loc_8240DD90;
loc_8240DE3C:
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240de58
	if (!ctx.cr0.eq) goto loc_8240DE58;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8240d9dc
	if (!ctx.cr6.eq) goto loc_8240D9DC;
loc_8240DE58:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8240a518
	ctx.lr = 0x8240DE68;
	sub_8240A518(ctx, base);
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240df60
	if (!ctx.cr0.eq) goto loc_8240DF60;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8240df60
	if (ctx.cr0.eq) goto loc_8240DF60;
loc_8240DE80:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8240df44
	if (ctx.cr0.eq) goto loc_8240DF44;
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240df44
	if (!ctx.cr0.eq) goto loc_8240DF44;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// addi r9,r27,4
	ctx.r9.s64 = ctx.r27.s64 + 4;
loc_8240DE9C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240df44
	if (ctx.cr6.eq) goto loc_8240DF44;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8240ded0
	if (ctx.cr6.eq) goto loc_8240DED0;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r8,r8,0,4,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8240ded0
	if (ctx.cr0.eq) goto loc_8240DED0;
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// rlwinm r10,r8,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14080, ctx.xer);
	// beq cr6,0x8240ded8
	if (ctx.cr6.eq) goto loc_8240DED8;
loc_8240DED0:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8240de9c
	goto loc_8240DE9C;
loc_8240DED8:
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
loc_8240DEDC:
	// lwz r30,0(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8240df44
	if (ctx.cr6.eq) goto loc_8240DF44;
	// lwz r31,16(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8240df30
	if (ctx.cr6.eq) goto loc_8240DF30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823fd1c0
	ctx.lr = 0x8240DEFC;
	sub_823FD1C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240df30
	if (ctx.cr0.eq) goto loc_8240DF30;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8240df30
	if (ctx.cr6.eq) goto loc_8240DF30;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8240a178
	ctx.lr = 0x8240DF18;
	sub_8240A178(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240df30
	if (ctx.cr0.eq) goto loc_8240DF30;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82410b08
	ctx.lr = 0x8240DF30;
	sub_82410B08(ctx, base);
loc_8240DF30:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8240dedc
	if (!ctx.cr6.eq) goto loc_8240DEDC;
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// b 0x8240dedc
	goto loc_8240DEDC;
loc_8240DF44:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240df60
	if (!ctx.cr0.eq) goto loc_8240DF60;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8240de80
	if (!ctx.cr6.eq) goto loc_8240DE80;
loc_8240DF60:
	// lwz r31,4(r19)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r19.u32 + 4);
	// clrlwi. r29,r31,31
	ctx.r29.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8240df74
	if (ctx.cr0.eq) goto loc_8240DF74;
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// b 0x8240df80
	goto loc_8240DF80;
loc_8240DF74:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r30,r11,-40
	ctx.r30.s64 = ctx.r11.s64 + -40;
loc_8240DF80:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x8240dfbc
	if (ctx.cr6.eq) goto loc_8240DFBC;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x8240dfbc
	if (ctx.cr6.eq) goto loc_8240DFBC;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x8240dfbc
	if (ctx.cr6.eq) goto loc_8240DFBC;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x8240dfbc
	if (ctx.cr6.eq) goto loc_8240DFBC;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x8240dfbc
	if (ctx.cr6.eq) goto loc_8240DFBC;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// bne cr6,0x8240dfc0
	if (!ctx.cr6.eq) goto loc_8240DFC0;
loc_8240DFBC:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_8240DFC0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240dfd8
	if (!ctx.cr0.eq) goto loc_8240DFD8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823fca40
	ctx.lr = 0x8240DFD0;
	sub_823FCA40(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240e028
	if (ctx.cr0.eq) goto loc_8240E028;
loc_8240DFD8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8240e028
	if (!ctx.cr6.eq) goto loc_8240E028;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8240e028
	if (ctx.cr0.eq) goto loc_8240E028;
loc_8240DFE8:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8240e028
	if (ctx.cr6.eq) goto loc_8240E028;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82405718
	ctx.lr = 0x8240DFF8;
	sub_82405718(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240e010
	if (ctx.cr0.eq) goto loc_8240E010;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82410b08
	ctx.lr = 0x8240E010;
	sub_82410B08(ctx, base);
loc_8240E010:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240e028
	if (!ctx.cr0.eq) goto loc_8240E028;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8240dfe8
	if (!ctx.cr6.eq) goto loc_8240DFE8;
loc_8240E028:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8240a480
	ctx.lr = 0x8240E038;
	sub_8240A480(ctx, base);
	// stw r14,712(r18)
	REX_STORE_U32(ctx.r18.u32 + 712, ctx.r14.u32);
	// stw r14,716(r18)
	REX_STORE_U32(ctx.r18.u32 + 716, ctx.r14.u32);
	// li r5,53
	ctx.r5.s64 = 53;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x823fd280
	ctx.lr = 0x8240E050;
	sub_823FD280(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// addi r22,r24,4
	ctx.r22.s64 = ctx.r24.s64 + 4;
	// ori r11,r24,1
	ctx.r11.u64 = ctx.r24.u64 | 1;
	// ori r10,r22,1
	ctx.r10.u64 = ctx.r22.u64 | 1;
	// stw r11,4(r24)
	REX_STORE_U32(ctx.r24.u32 + 4, ctx.r11.u32);
	// stw r10,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// bl 0x8240afb8
	ctx.lr = 0x8240E070;
	sub_8240AFB8(ctx, base);
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240e0a4
	if (!ctx.cr0.eq) goto loc_8240E0A4;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8240e0a4
	if (ctx.cr0.eq) goto loc_8240E0A4;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8240e0b0
	if (!ctx.cr6.gt) goto loc_8240E0B0;
loc_8240E0A4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8248a418
	ctx.lr = 0x8240E0B0;
	sub_8248A418(ctx, base);
loc_8240E0B0:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r14
	ctx.r29.u64 = ctx.r14.u64;
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r23,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r23.u32);
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240e1f8
	if (!ctx.cr0.eq) goto loc_8240E1F8;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8240e1f8
	if (ctx.cr0.eq) goto loc_8240E1F8;
loc_8240E0EC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240e15c
	if (ctx.cr0.eq) goto loc_8240E15C;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwimi r11,r10,27,5,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFF8000000);
	// rlwinm r11,r11,12,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x7FF;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8240e134
	if (ctx.cr6.eq) goto loc_8240E134;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bl 0x82409798
	ctx.lr = 0x8240E11C;
	sub_82409798(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240e134
	if (ctx.cr0.eq) goto loc_8240E134;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,4(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8240cb80
	ctx.lr = 0x8240E134;
	sub_8240CB80(ctx, base);
loc_8240E134:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8240E15C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8240e1b4
	if (ctx.cr6.eq) goto loc_8240E1B4;
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240e17c
	if (ctx.cr0.eq) goto loc_8240E17C;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// b 0x8240e184
	goto loc_8240E184;
loc_8240E17C:
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
loc_8240E184:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8240e1a4
	if (!ctx.cr6.eq) goto loc_8240E1A4;
loc_8240E18C:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240e1f8
	if (!ctx.cr0.eq) goto loc_8240E1F8;
	// b 0x8240e1e8
	goto loc_8240E1E8;
loc_8240E1A4:
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240e1f8
	if (!ctx.cr0.eq) goto loc_8240E1F8;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x8240e1ec
	goto loc_8240E1EC;
loc_8240E1B4:
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8240e1c8
	if (ctx.cr0.eq) goto loc_8240E1C8;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// b 0x8240e1d4
	goto loc_8240E1D4;
loc_8240E1C8:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
loc_8240E1D4:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8240e18c
	if (ctx.cr6.eq) goto loc_8240E18C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8240e1f8
	if (!ctx.cr6.eq) goto loc_8240E1F8;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
loc_8240E1E8:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_8240E1EC:
	// addi r31,r11,-40
	ctx.r31.s64 = ctx.r11.s64 + -40;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8240e0ec
	if (!ctx.cr6.eq) goto loc_8240E0EC;
loc_8240E1F8:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8240a338
	ctx.lr = 0x8240E200;
	sub_8240A338(ctx, base);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8240bb88
	ctx.lr = 0x8240E210;
	sub_8240BB88(ctx, base);
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8240c6c0
	ctx.lr = 0x8240E22C;
	sub_8240C6C0(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r23)
	REX_STORE_U32(ctx.r23.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8240e248
	if (ctx.cr6.eq) goto loc_8240E248;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x8240e250
	goto loc_8240E250;
loc_8240E248:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8240E250:
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
	// stw r11,16(r23)
	REX_STORE_U32(ctx.r23.u32 + 16, ctx.r11.u32);
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,20(r23)
	REX_STORE_U32(ctx.r23.u32 + 20, ctx.r11.u32);
	// bl 0x825f3708
	ctx.lr = 0x8240E274;
	sub_825F3708(ctx, base);
	// addi r25,r3,10000
	ctx.r25.s64 = ctx.r3.s64 + 10000;
loc_8240E278:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240e6f4
	if (!ctx.cr0.eq) goto loc_8240E6F4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8240e6f4
	if (ctx.cr0.eq) goto loc_8240E6F4;
	// bl 0x825f3708
	ctx.lr = 0x8240E290;
	sub_825F3708(ctx, base);
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x8240e6f4
	if (!ctx.cr6.lt) goto loc_8240E6F4;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240e2ac
	if (ctx.cr0.eq) goto loc_8240E2AC;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// b 0x8240e2b8
	goto loc_8240E2B8;
loc_8240E2AC:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8240E2B8:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x8240e2dc
	goto loc_8240E2DC;
loc_8240E2D4:
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
loc_8240E2DC:
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8240e2d4
	if (!ctx.cr6.lt) goto loc_8240E2D4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwzx r26,r11,r10
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8240c9a0
	ctx.lr = 0x8240E314;
	sub_8240C9A0(ctx, base);
	// lbz r11,184(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 184);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8240e278
	if (!ctx.cr0.eq) goto loc_8240E278;
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// rlwinm. r11,r11,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240e610
	if (!ctx.cr0.eq) goto loc_8240E610;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8240e610
	if (!ctx.cr6.eq) goto loc_8240E610;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8240c7b0
	ctx.lr = 0x8240E350;
	sub_8240C7B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240e278
	if (ctx.cr0.eq) goto loc_8240E278;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8240afb8
	ctx.lr = 0x8240E360;
	sub_8240AFB8(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8240e380
	if (ctx.cr6.eq) goto loc_8240E380;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x8240e388
	goto loc_8240E388;
loc_8240E380:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8240E388:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,16(r27)
	REX_STORE_U32(ctx.r27.u32 + 16, ctx.r11.u32);
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,20(r27)
	REX_STORE_U32(ctx.r27.u32 + 20, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240e3e4
	if (!ctx.cr0.eq) goto loc_8240E3E4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8240e3e4
	if (ctx.cr0.eq) goto loc_8240E3E4;
loc_8240E3C4:
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240e3e4
	if (!ctx.cr0.eq) goto loc_8240E3E4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8240e3c4
	if (!ctx.cr6.eq) goto loc_8240E3C4;
loc_8240E3E4:
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8240e4c8
	if (ctx.cr6.eq) goto loc_8240E4C8;
loc_8240E3F0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8240e4bc
	if (ctx.cr6.eq) goto loc_8240E4BC;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
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
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8240e44c
	if (ctx.cr6.lt) goto loc_8240E44C;
loc_8240E424:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
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
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8240e424
	if (!ctx.cr6.lt) goto loc_8240E424;
loc_8240E44C:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r11
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm. r11,r11,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240e4bc
	if (!ctx.cr0.eq) goto loc_8240E4BC;
	// lwz r3,4(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240e498
	if (!ctx.cr0.eq) goto loc_8240E498;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240e498
	if (ctx.cr0.eq) goto loc_8240E498;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8240e4a4
	if (!ctx.cr6.gt) goto loc_8240E4A4;
loc_8240E498:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8248a418
	ctx.lr = 0x8240E4A0;
	sub_8248A418(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8240E4A4:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stwx r29,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u32);
loc_8240E4BC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8240e3f0
	if (ctx.cr6.lt) goto loc_8240E3F0;
loc_8240E4C8:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_8240E4CC:
	// lwz r30,0(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
loc_8240E4D0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8240e53c
	if (ctx.cr6.eq) goto loc_8240E53C;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r10,r10,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8240e534
	if (ctx.cr0.eq) goto loc_8240E534;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm. r9,r10,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8240e534
	if (!ctx.cr0.eq) goto loc_8240E534;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r10,12,21,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x780;
	// lwz r11,720(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 720);
	// rlwinm r9,r9,7,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x7F;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,-4(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82409798
	ctx.lr = 0x8240E51C;
	sub_82409798(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240e534
	if (ctx.cr0.eq) goto loc_8240E534;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,4(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8240cb80
	ctx.lr = 0x8240E534;
	sub_8240CB80(ctx, base);
loc_8240E534:
	// lwz r30,4(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8240e4d0
	goto loc_8240E4D0;
loc_8240E53C:
	// lwz r29,32(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8240e4cc
	if (!ctx.cr6.eq) goto loc_8240E4CC;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240e560
	if (!ctx.cr0.eq) goto loc_8240E560;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8240e598
	if (!ctx.cr0.eq) goto loc_8240E598;
loc_8240E560:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8240b028
	ctx.lr = 0x8240E56C;
	sub_8240B028(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8240cab8
	ctx.lr = 0x8240E574;
	sub_8240CAB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240e278
	if (ctx.cr0.eq) goto loc_8240E278;
	// mr r31,r16
	ctx.r31.u64 = ctx.r16.u64;
loc_8240E580:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8240a518
	ctx.lr = 0x8240E590;
	sub_8240A518(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8240ce64
	goto loc_8240CE64;
loc_8240E598:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8240b250
	ctx.lr = 0x8240E5A4;
	sub_8240B250(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240e5b8
	if (ctx.cr0.eq) goto loc_8240E5B8;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8240b028
	ctx.lr = 0x8240E5B4;
	sub_8240B028(ctx, base);
	// b 0x8240e278
	goto loc_8240E278;
loc_8240E5B8:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240e5e8
	if (!ctx.cr0.eq) goto loc_8240E5E8;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8240e5e8
	if (ctx.cr0.eq) goto loc_8240E5E8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8240e5f4
	if (!ctx.cr6.gt) goto loc_8240E5F4;
loc_8240E5E8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8248a418
	ctx.lr = 0x8240E5F4;
	sub_8248A418(ctx, base);
loc_8240E5F4:
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
	// b 0x8240e278
	goto loc_8240E278;
loc_8240E610:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8240e658
	if (!ctx.cr0.eq) goto loc_8240E658;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8240e658
	if (ctx.cr0.eq) goto loc_8240E658;
loc_8240E638:
	// rlwinm r8,r11,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8240e658
	if (!ctx.cr0.eq) goto loc_8240E658;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8240e638
	if (!ctx.cr6.eq) goto loc_8240E638;
loc_8240E658:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8240e6ec
	if (!ctx.cr6.eq) goto loc_8240E6EC;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8240b150
	ctx.lr = 0x8240E670;
	sub_8240B150(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240e680
	if (!ctx.cr0.eq) goto loc_8240E680;
	// stb r16,184(r1)
	REX_STORE_U8(ctx.r1.u32 + 184, ctx.r16.u8);
	// stb r16,185(r1)
	REX_STORE_U8(ctx.r1.u32 + 185, ctx.r16.u8);
loc_8240E680:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240e694
	if (ctx.cr0.eq) goto loc_8240E694;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// b 0x8240e6a0
	goto loc_8240E6A0;
loc_8240E694:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_8240E6A0:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x8240e278
	if (!ctx.cr0.eq) goto loc_8240E278;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823e2710
	ctx.lr = 0x8240E6E8;
	sub_823E2710(ctx, base);
	// b 0x8240e278
	goto loc_8240E278;
loc_8240E6EC:
	// stw r14,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r14.u32);
	// b 0x8240e278
	goto loc_8240E278;
loc_8240E6F4:
	// lwz r11,792(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8240e704
	if (!ctx.cr6.eq) goto loc_8240E704;
	// li r11,32
	ctx.r11.s64 = 32;
loc_8240E704:
	// cmplw cr6,r15,r11
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8240ea30
	if (!ctx.cr6.lt) goto loc_8240EA30;
	// stb r14,185(r1)
	REX_STORE_U8(ctx.r1.u32 + 185, ctx.r14.u8);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stb r16,186(r1)
	REX_STORE_U8(ctx.r1.u32 + 186, ctx.r16.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8240c9a0
	ctx.lr = 0x8240E720;
	sub_8240C9A0(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8240afb8
	ctx.lr = 0x8240E728;
	sub_8240AFB8(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8240e748
	if (ctx.cr6.eq) goto loc_8240E748;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x8240e750
	goto loc_8240E750;
loc_8240E748:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8240E750:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r14,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,16(r27)
	REX_STORE_U32(ctx.r27.u32 + 16, ctx.r11.u32);
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,20(r27)
	REX_STORE_U32(ctx.r27.u32 + 20, ctx.r11.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// subfe r11,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_8240E794:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8240e7b0
	if (ctx.cr6.eq) goto loc_8240E7B0;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// bne cr6,0x8240e7b4
	if (!ctx.cr6.eq) goto loc_8240E7B4;
loc_8240E7B0:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_8240E7B4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240e828
	if (!ctx.cr0.eq) goto loc_8240E828;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82459538
	ctx.lr = 0x8240E7C4;
	sub_82459538(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240e7fc
	if (!ctx.cr0.eq) goto loc_8240E7FC;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r10,-4
	ctx.xer.ca = ctx.r10.u32 > 3;
	ctx.r3.s64 = ctx.r10.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8240e7fc
	if (ctx.cr0.eq) goto loc_8240E7FC;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8240e808
	if (!ctx.cr6.gt) goto loc_8240E808;
loc_8240E7FC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8248a418
	ctx.lr = 0x8240E808;
	sub_8248A418(ctx, base);
loc_8240E808:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stwx r31,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r31.u32);
	// b 0x8240e794
	goto loc_8240E794;
loc_8240E828:
	// lwz r30,4(r27)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240ea0c
	if (!ctx.cr0.eq) goto loc_8240EA0C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8240ea0c
	if (ctx.cr0.eq) goto loc_8240EA0C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r14,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
	// mr r31,r14
	ctx.r31.u64 = ctx.r14.u64;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
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
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_8240E868:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240e888
	if (ctx.cr6.eq) goto loc_8240E888;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// bne cr6,0x8240e88c
	if (!ctx.cr6.eq) goto loc_8240E88C;
loc_8240E888:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_8240E88C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240e8f4
	if (!ctx.cr0.eq) goto loc_8240E8F4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82459538
	ctx.lr = 0x8240E89C;
	sub_82459538(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8240e8ec
	if (ctx.cr6.eq) goto loc_8240E8EC;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi r10,r10,19
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFF;
	// clrlwi r9,r9,19
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8240e8ec
	if (ctx.cr6.lt) goto loc_8240E8EC;
	// bne cr6,0x8240e868
	if (!ctx.cr6.eq) goto loc_8240E868;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// blt cr6,0x8240e8e0
	if (ctx.cr6.lt) goto loc_8240E8E0;
	// cmplwi cr6,r10,82
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 82, ctx.xer);
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// ble cr6,0x8240e8e4
	if (!ctx.cr6.gt) goto loc_8240E8E4;
loc_8240E8E0:
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
loc_8240E8E4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8240e868
	if (ctx.cr0.eq) goto loc_8240E868;
loc_8240E8EC:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x8240e868
	goto loc_8240E868;
loc_8240E8F4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8240a9f8
	ctx.lr = 0x8240E900;
	sub_8240A9F8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8240c7b0
	ctx.lr = 0x8240E910;
	sub_8240C7B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240ea00
	if (ctx.cr0.eq) goto loc_8240EA00;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8240e828
	if (ctx.cr6.eq) goto loc_8240E828;
loc_8240E924:
	// lwz r29,0(r28)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
loc_8240E928:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8240e9f0
	if (ctx.cr6.eq) goto loc_8240E9F0;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r10,r10,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8240e9e8
	if (ctx.cr0.eq) goto loc_8240E9E8;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm. r9,r10,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8240e9e8
	if (!ctx.cr0.eq) goto loc_8240E9E8;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r10,12,21,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x780;
	// lwz r11,720(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 720);
	// rlwinm r9,r9,7,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x7F;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,-4(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82409798
	ctx.lr = 0x8240E974;
	sub_82409798(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240e9e8
	if (ctx.cr0.eq) goto loc_8240E9E8;
	// lwz r30,4(r27)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8240a980
	ctx.lr = 0x8240E98C;
	sub_8240A980(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240e9e8
	if (!ctx.cr0.eq) goto loc_8240E9E8;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240e9c4
	if (!ctx.cr0.eq) goto loc_8240E9C4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8240e9c4
	if (ctx.cr0.eq) goto loc_8240E9C4;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8240e9d0
	if (!ctx.cr6.gt) goto loc_8240E9D0;
loc_8240E9C4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248a418
	ctx.lr = 0x8240E9D0;
	sub_8248A418(ctx, base);
loc_8240E9D0:
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
loc_8240E9E8:
	// lwz r29,4(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x8240e928
	goto loc_8240E928;
loc_8240E9F0:
	// lwz r28,32(r28)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + 32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8240e924
	if (!ctx.cr6.eq) goto loc_8240E924;
	// b 0x8240e828
	goto loc_8240E828;
loc_8240EA00:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x823e2770
	ctx.lr = 0x8240EA0C;
	sub_823E2770(ctx, base);
loc_8240EA0C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8240cab8
	ctx.lr = 0x8240EA14;
	sub_8240CAB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240ea28
	if (!ctx.cr0.eq) goto loc_8240EA28;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x823e2770
	ctx.lr = 0x8240EA28;
	sub_823E2770(ctx, base);
loc_8240EA28:
	// mr r31,r14
	ctx.r31.u64 = ctx.r14.u64;
	// b 0x8240e580
	goto loc_8240E580;
loc_8240EA30:
	// lwz r11,52(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 52);
	// rlwinm. r10,r11,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x600;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240ea58
	if (!ctx.cr0.eq) goto loc_8240EA58;
	// lwz r10,44(r18)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 44);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8240ea58
	if (ctx.cr0.eq) goto loc_8240EA58;
	// ori r11,r11,1025
	ctx.r11.u64 = ctx.r11.u64 | 1025;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// stw r11,52(r18)
	REX_STORE_U32(ctx.r18.u32 + 52, ctx.r11.u32);
	// bl 0x823e23f8
	ctx.lr = 0x8240EA58;
	sub_823E23F8(ctx, base);
loc_8240EA58:
	// lwz r11,52(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 52);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240ea74
	if (!ctx.cr0.eq) goto loc_8240EA74;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// stw r11,52(r18)
	REX_STORE_U32(ctx.r18.u32 + 52, ctx.r11.u32);
	// bl 0x823e23f8
	ctx.lr = 0x8240EA74;
	sub_823E23F8(ctx, base);
loc_8240EA74:
	// lwz r11,792(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 792);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240ea8c
	if (ctx.cr6.eq) goto loc_8240EA8C;
	// li r4,3518
	ctx.r4.s64 = 3518;
	// bl 0x823e2770
	ctx.lr = 0x8240EA8C;
	sub_823E2770(ctx, base);
loc_8240EA8C:
	// li r4,3565
	ctx.r4.s64 = 3565;
	// bl 0x823e2770
	ctx.lr = 0x8240EA94;
	sub_823E2770(ctx, base);
}

DEFINE_REX_FUNC(sub_825161C0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,616
	ctx.r3.s64 = ctx.r3.s64 + 616;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82512810
	ctx.lr = 0x825161EC;
	sub_82512810(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82516224
	if (ctx.cr0.lt) goto loc_82516224;
	// lwz r31,80(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r30,624
	ctx.r3.s64 = ctx.r30.s64 + 624;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825159b0
	ctx.lr = 0x82516204;
	sub_825159B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82516214
	if (ctx.cr0.eq) goto loc_82516214;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82516224
	goto loc_82516224;
loc_82516214:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// bl 0x8252e288
	ctx.lr = 0x82516224;
	sub_8252E288(ctx, base);
loc_82516224:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

DEFINE_REX_FUNC(sub_82518260) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35f8
	ctx.lr = 0x82518268;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// b 0x8251829c
	goto loc_8251829C;
loc_82518280:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x825182a8
	if (ctx.cr6.eq) goto loc_825182A8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825182b0
	if (ctx.cr6.eq) goto loc_825182B0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8251829C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82518280
	if (!ctx.cr6.eq) goto loc_82518280;
	// b 0x825182b0
	goto loc_825182B0;
loc_825182A8:
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_825182B0:
	// lwz r11,232(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 232);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82518320
	if (ctx.cr6.eq) goto loc_82518320;
	// lwz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
loc_825182D0:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x825182f4
	if (!ctx.cr6.eq) goto loc_825182F4;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// b 0x8251830c
	goto loc_8251830C;
loc_825182F4:
	// lwz r8,4(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8251830c
	if (!ctx.cr6.eq) goto loc_8251830C;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_8251830C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82518320
	if (ctx.cr6.eq) goto loc_82518320;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825182d0
	if (!ctx.cr6.eq) goto loc_825182D0;
loc_82518320:
	// lwz r30,0(r28)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r31,4(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// beq cr6,0x8251834c
	if (ctx.cr6.eq) goto loc_8251834C;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,0(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8252e288
	ctx.lr = 0x82518340;
	sub_8252E288(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r29,124
	ctx.r3.s64 = ctx.r29.s64 + 124;
	// bl 0x825170f0
	ctx.lr = 0x8251834C;
	sub_825170F0(ctx, base);
loc_8251834C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82518370
	if (ctx.cr6.eq) goto loc_82518370;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8252e288
	ctx.lr = 0x82518364;
	sub_8252E288(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r29,124
	ctx.r3.s64 = ctx.r29.s64 + 124;
	// bl 0x825170f0
	ctx.lr = 0x82518370;
	sub_825170F0(ctx, base);
loc_82518370:
	// stw r30,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r31,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825170f0
	ctx.lr = 0x82518384;
	sub_825170F0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r29,124
	ctx.r3.s64 = ctx.r29.s64 + 124;
	// bl 0x82517908
	ctx.lr = 0x82518390;
	sub_82517908(ctx, base);
	// lwz r11,260(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 260);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x825183a0
	if (ctx.cr6.gt) goto loc_825183A0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_825183A0:
	// stw r11,260(r29)
	REX_STORE_U32(ctx.r29.u32 + 260, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x825e3648
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8251FFD8) {
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
	// bl 0x8251ff50
	ctx.lr = 0x8251FFF0;
	sub_8251FF50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252fc50
	ctx.lr = 0x8251FFF8;
	sub_8252FC50(ctx, base);
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

DEFINE_REX_FUNC(sub_82520EB0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e3608
	ctx.lr = 0x82520EB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82520EE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82520d20
	ctx.lr = 0x82520EF0;
	sub_82520D20(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82520a70
	ctx.lr = 0x82520F00;
	sub_82520A70(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82520F1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825e3658
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82524A78) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35e4
	ctx.lr = 0x82524A80;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x825e4164
	ctx.lr = 0x82524A88;
	__savefpr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,352(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 352);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r19,360(r3)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r3.u32 + 360);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r31,384(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 384);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lhz r20,34(r11)
	ctx.r20.u64 = REX_LOAD_U16(ctx.r11.u32 + 34);
	// beq cr6,0x825250b4
	if (ctx.cr6.eq) goto loc_825250B4;
	// lwz r11,424(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82524ac4
	if (ctx.cr6.eq) goto loc_82524AC4;
	// li r19,6
	ctx.r19.s64 = 6;
loc_82524AC4:
	// cmpwi cr6,r20,6
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 6, ctx.xer);
	// bne cr6,0x82524cf4
	if (!ctx.cr6.eq) goto loc_82524CF4;
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 2, ctx.xer);
	// bne cr6,0x82524cf4
	if (!ctx.cr6.eq) goto loc_82524CF4;
	// lwz r10,372(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 372);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,16(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,20(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// blt cr6,0x82524c74
	if (ctx.cr6.lt) goto loc_82524C74;
	// addi r10,r5,-3
	ctx.r10.s64 = ctx.r5.s64 + -3;
loc_82524B20:
	// lfs f2,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f10
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// lfs f31,20(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f2,f2,f4
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// lfs f30,12(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,8(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,4(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,0(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f1,f31,f9,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f31.f64, ctx.f9.f64, ctx.f1.f64)));
	// fmadds f2,f31,f3,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f31.f64, ctx.f3.f64, ctx.f2.f64)));
	// fmadds f1,f30,f11,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f30.f64, ctx.f11.f64, ctx.f1.f64)));
	// fmadds f2,f30,f5,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f30.f64, ctx.f5.f64, ctx.f2.f64)));
	// fmadds f1,f29,f12,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f29.f64, ctx.f12.f64, ctx.f1.f64)));
	// fmadds f2,f29,f6,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f29.f64, ctx.f6.f64, ctx.f2.f64)));
	// fmadds f1,f28,f13,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f28.f64, ctx.f13.f64, ctx.f1.f64)));
	// fmadds f2,f28,f7,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f28.f64, ctx.f7.f64, ctx.f2.f64)));
	// fmadds f1,f27,f0,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f27.f64, ctx.f0.f64, ctx.f1.f64)));
	// stfs f1,0(r27)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// fmadds f2,f27,f8,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f27.f64, ctx.f8.f64, ctx.f2.f64)));
	// stfs f2,4(r27)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// lfs f1,44(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,36(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,32(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,40(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f29,f30,f10
	ctx.f29.f64 = double(float(ctx.f30.f64 * ctx.f10.f64));
	// fmuls f30,f30,f4
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f4.f64));
	// lfs f28,24(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f29,f1,f9,f29
	ctx.f29.f64 = double(float(std::fma(ctx.f1.f64, ctx.f9.f64, ctx.f29.f64)));
	// lfs f27,28(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f1,f1,f3,f30
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f3.f64, ctx.f30.f64)));
	// fmadds f30,f2,f11,f29
	ctx.f30.f64 = double(float(std::fma(ctx.f2.f64, ctx.f11.f64, ctx.f29.f64)));
	// fmadds f2,f2,f5,f1
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f5.f64, ctx.f1.f64)));
	// fmadds f1,f31,f12,f30
	ctx.f1.f64 = double(float(std::fma(ctx.f31.f64, ctx.f12.f64, ctx.f30.f64)));
	// fmadds f2,f31,f6,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f31.f64, ctx.f6.f64, ctx.f2.f64)));
	// fmadds f1,f27,f13,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f27.f64, ctx.f13.f64, ctx.f1.f64)));
	// fmadds f2,f27,f7,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f27.f64, ctx.f7.f64, ctx.f2.f64)));
	// fmadds f1,f28,f0,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f28.f64, ctx.f0.f64, ctx.f1.f64)));
	// stfs f1,8(r27)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// fmadds f2,f28,f8,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f28.f64, ctx.f8.f64, ctx.f2.f64)));
	// stfs f2,12(r27)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r27.u32 + 12, temp.u32);
	// lfs f1,68(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,60(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 60);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,56(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 56);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,64(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 64);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f29,f30,f10
	ctx.f29.f64 = double(float(ctx.f30.f64 * ctx.f10.f64));
	// fmuls f30,f30,f4
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f4.f64));
	// lfs f28,48(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f29,f1,f9,f29
	ctx.f29.f64 = double(float(std::fma(ctx.f1.f64, ctx.f9.f64, ctx.f29.f64)));
	// lfs f27,52(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 52);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f1,f1,f3,f30
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f3.f64, ctx.f30.f64)));
	// fmadds f30,f2,f11,f29
	ctx.f30.f64 = double(float(std::fma(ctx.f2.f64, ctx.f11.f64, ctx.f29.f64)));
	// fmadds f2,f2,f5,f1
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f5.f64, ctx.f1.f64)));
	// fmadds f1,f31,f12,f30
	ctx.f1.f64 = double(float(std::fma(ctx.f31.f64, ctx.f12.f64, ctx.f30.f64)));
	// fmadds f2,f31,f6,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f31.f64, ctx.f6.f64, ctx.f2.f64)));
	// fmadds f1,f27,f13,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f27.f64, ctx.f13.f64, ctx.f1.f64)));
	// fmadds f2,f27,f7,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f27.f64, ctx.f7.f64, ctx.f2.f64)));
	// fmadds f1,f28,f0,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f28.f64, ctx.f0.f64, ctx.f1.f64)));
	// stfs f1,16(r27)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r27.u32 + 16, temp.u32);
	// fmadds f2,f28,f8,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f28.f64, ctx.f8.f64, ctx.f2.f64)));
	// stfs f2,20(r27)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r27.u32 + 20, temp.u32);
	// lfs f1,92(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,84(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,80(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,88(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f29,f30,f10
	ctx.f29.f64 = double(float(ctx.f30.f64 * ctx.f10.f64));
	// fmuls f30,f30,f4
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f4.f64));
	// lfs f28,72(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 72);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f29,f1,f9,f29
	ctx.f29.f64 = double(float(std::fma(ctx.f1.f64, ctx.f9.f64, ctx.f29.f64)));
	// lfs f27,76(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 76);
	ctx.f27.f64 = double(temp.f32);
	// addi r29,r29,96
	ctx.r29.s64 = ctx.r29.s64 + 96;
	// fmadds f1,f1,f3,f30
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f3.f64, ctx.f30.f64)));
	// fmadds f30,f2,f11,f29
	ctx.f30.f64 = double(float(std::fma(ctx.f2.f64, ctx.f11.f64, ctx.f29.f64)));
	// fmadds f2,f2,f5,f1
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f5.f64, ctx.f1.f64)));
	// fmadds f1,f31,f12,f30
	ctx.f1.f64 = double(float(std::fma(ctx.f31.f64, ctx.f12.f64, ctx.f30.f64)));
	// fmadds f2,f31,f6,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f31.f64, ctx.f6.f64, ctx.f2.f64)));
	// fmadds f1,f27,f13,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f27.f64, ctx.f13.f64, ctx.f1.f64)));
	// fmadds f2,f27,f7,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f27.f64, ctx.f7.f64, ctx.f2.f64)));
	// fmadds f1,f28,f0,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f28.f64, ctx.f0.f64, ctx.f1.f64)));
	// stfs f1,24(r27)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r27.u32 + 24, temp.u32);
	// fmadds f2,f28,f8,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f28.f64, ctx.f8.f64, ctx.f2.f64)));
	// stfs f2,28(r27)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r27.u32 + 28, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r27,r27,32
	ctx.r27.s64 = ctx.r27.s64 + 32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82524b20
	if (ctx.cr6.lt) goto loc_82524B20;
loc_82524C74:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x825250b4
	if (!ctx.cr6.lt) goto loc_825250B4;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82524C8C:
	// lfs f2,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f10
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// lfs f31,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f30,f2,f4
	ctx.f30.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// lfs f29,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f27.f64 = double(temp.f32);
	// lfsu f2,24(r11)
	ea = 24 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f2.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f1,f2,f9,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f2.f64, ctx.f9.f64, ctx.f1.f64)));
	// fmadds f2,f2,f3,f30
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f3.f64, ctx.f30.f64)));
	// fmadds f1,f27,f11,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f27.f64, ctx.f11.f64, ctx.f1.f64)));
	// fmadds f2,f27,f5,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f27.f64, ctx.f5.f64, ctx.f2.f64)));
	// fmadds f1,f28,f12,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f28.f64, ctx.f12.f64, ctx.f1.f64)));
	// fmadds f2,f28,f6,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f28.f64, ctx.f6.f64, ctx.f2.f64)));
	// fmadds f1,f29,f13,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f29.f64, ctx.f13.f64, ctx.f1.f64)));
	// fmadds f2,f29,f7,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f29.f64, ctx.f7.f64, ctx.f2.f64)));
	// fmadds f1,f31,f0,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f31.f64, ctx.f0.f64, ctx.f1.f64)));
	// stfs f1,4(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmadds f2,f31,f8,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f31.f64, ctx.f8.f64, ctx.f2.f64)));
	// stfsu f2,8(r10)
	ea = 8 + ctx.r10.u32;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82524c8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82524C8C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x825e41b0
	ctx.lr = 0x82524CF0;
	__restfpr_27(ctx, base);
	// b 0x825e3634
	__restgprlr_19(ctx, base);
	return;
loc_82524CF4:
	// cmpw cr6,r20,r19
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r19.s32, ctx.xer);
	// blt cr6,0x82524ed4
	if (ctx.cr6.lt) goto loc_82524ED4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x825250b4
	if (!ctx.cr6.gt) goto loc_825250B4;
	// neg r11,r19
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r19.u64);
	// neg r10,r20
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r20.u64);
	// rlwinm r23,r20,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r19,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r22,r11,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r21,r10,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r26,r6,r31
	ctx.r26.u64 = ctx.r31.u64 - ctx.r6.u64;
	// subfic r28,r4,-8
	ctx.xer.ca = ctx.r4.u32 <= 4294967288;
	ctx.r28.u64 = static_cast<uint64_t>(-8) - ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
loc_82524D28:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e3710
	ctx.lr = 0x82524D38;
	sub_825E3710(ctx, base);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x82524e38
	if (!ctx.cr6.gt) goto loc_82524E38;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_82524D48:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r20,4
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 4, ctx.xer);
	// blt cr6,0x82524df4
	if (ctx.cr6.lt) goto loc_82524DF4;
	// addi r5,r20,-3
	ctx.r5.s64 = ctx.r20.s64 + -3;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// addi r4,r28,12
	ctx.r4.s64 = ctx.r28.s64 + 12;
loc_82524D64:
	// lwz r6,372(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 372);
	// add r7,r28,r10
	ctx.r7.u64 = ctx.r28.u64 + ctx.r10.u64;
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfsx f13,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// lwzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lfsx f12,r6,r7
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfsx f11,r11,r31
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// lwz r6,372(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 372);
	// lfs f10,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmr f9,f11
	ctx.f9.f64 = ctx.f11.f64;
	// lwzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lfs f8,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f8,f10,f11
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f10.f64, ctx.f11.f64)));
	// stfsx f7,r11,r31
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// lwz r6,372(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 372);
	// lfs f6,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmr f5,f7
	ctx.f5.f64 = ctx.f7.f64;
	// lwzx r7,r6,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lfsx f4,r7,r9
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f4,f6,f7
	ctx.f3.f64 = double(float(std::fma(ctx.f4.f64, ctx.f6.f64, ctx.f7.f64)));
	// stfsx f3,r11,r31
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// lwz r6,372(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 372);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// lfs f2,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lwzx r7,r6,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lfsx f0,r7,r4
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f0,f2,f3
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f2.f64, ctx.f3.f64)));
	// stfsx f13,r11,r31
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// blt cr6,0x82524d64
	if (ctx.cr6.lt) goto loc_82524D64;
loc_82524DF4:
	// cmpw cr6,r8,r20
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r20.s32, ctx.xer);
	// bge cr6,0x82524e2c
	if (!ctx.cr6.lt) goto loc_82524E2C;
	// subf r9,r8,r20
	ctx.r9.u64 = ctx.r20.u64 - ctx.r8.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82524E08:
	// lwz r9,372(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 372);
	// lfsx f0,r10,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lfsx f12,r8,r10
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfsx f11,r11,r31
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// bdnz 0x82524e08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82524E08;
loc_82524E2C:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82524d48
	if (!ctx.cr0.eq) goto loc_82524D48;
loc_82524E38:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r19,4
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 4, ctx.xer);
	// blt cr6,0x82524e80
	if (ctx.cr6.lt) goto loc_82524E80;
	// addi r8,r19,-3
	ctx.r8.s64 = ctx.r19.s64 + -3;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
loc_82524E50:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f13,r26,r11
	temp.u32 = REX_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x82524e50
	if (ctx.cr6.lt) goto loc_82524E50;
loc_82524E80:
	// cmpw cr6,r9,r19
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r19.s32, ctx.xer);
	// bge cr6,0x82524ea8
	if (!ctx.cr6.lt) goto loc_82524EA8;
	// subf r10,r9,r19
	ctx.r10.u64 = ctx.r19.u64 - ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82524E98:
	// lfsx f0,r26,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82524e98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82524E98;
loc_82524EA8:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// add r29,r23,r29
	ctx.r29.u64 = ctx.r23.u64 + ctx.r29.u64;
	// add r28,r28,r21
	ctx.r28.u64 = ctx.r28.u64 + ctx.r21.u64;
	// add r27,r24,r27
	ctx.r27.u64 = ctx.r24.u64 + ctx.r27.u64;
	// add r26,r26,r22
	ctx.r26.u64 = ctx.r26.u64 + ctx.r22.u64;
	// bne 0x82524d28
	if (!ctx.cr0.eq) goto loc_82524D28;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x825e41b0
	ctx.lr = 0x82524ED0;
	__restfpr_27(ctx, base);
	// b 0x825e3634
	__restgprlr_19(ctx, base);
	return;
loc_82524ED4:
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// mullw r10,r11,r20
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r20.s32);
	// mullw r9,r11,r19
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r19.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r10,r4
	ctx.r28.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r26,r9,r6
	ctx.r26.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x825250b4
	if (ctx.cr6.lt) goto loc_825250B4;
	// neg r11,r19
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r19.u64);
	// neg r10,r20
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r20.u64);
	// rlwinm r23,r20,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r19,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r22,r11,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r21,r10,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r27,r26,r31
	ctx.r27.u64 = ctx.r31.u64 - ctx.r26.u64;
	// subfic r29,r28,-8
	ctx.xer.ca = ctx.r28.u32 <= 4294967288;
	ctx.r29.u64 = static_cast<uint64_t>(-8) - ctx.r28.u64;
loc_82524F1C:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e3710
	ctx.lr = 0x82524F2C;
	sub_825E3710(ctx, base);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x8252502c
	if (!ctx.cr6.gt) goto loc_8252502C;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_82524F3C:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r20,4
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 4, ctx.xer);
	// blt cr6,0x82524fe8
	if (ctx.cr6.lt) goto loc_82524FE8;
	// addi r5,r20,-3
	ctx.r5.s64 = ctx.r20.s64 + -3;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r28,8
	ctx.r10.s64 = ctx.r28.s64 + 8;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
loc_82524F58:
	// lwz r6,372(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 372);
	// add r7,r29,r10
	ctx.r7.u64 = ctx.r29.u64 + ctx.r10.u64;
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfsx f13,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// lwzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lfsx f12,r6,r7
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfsx f11,r11,r31
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// fmr f9,f11
	ctx.f9.f64 = ctx.f11.f64;
	// lwz r6,372(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 372);
	// lfs f10,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// lwzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lfs f8,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f8,f10,f11
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f10.f64, ctx.f11.f64)));
	// stfsx f7,r11,r31
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// lwz r6,372(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 372);
	// fmr f5,f7
	ctx.f5.f64 = ctx.f7.f64;
	// lfs f6,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lwzx r7,r6,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lfsx f4,r7,r9
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f4,f6,f7
	ctx.f3.f64 = double(float(std::fma(ctx.f4.f64, ctx.f6.f64, ctx.f7.f64)));
	// stfsx f3,r11,r31
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// lwz r6,372(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 372);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// lfs f1,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwzx r7,r6,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lfsx f0,r7,r10
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f0,f1,f3
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f1.f64, ctx.f3.f64)));
	// stfsx f13,r11,r31
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// blt cr6,0x82524f58
	if (ctx.cr6.lt) goto loc_82524F58;
loc_82524FE8:
	// cmpw cr6,r8,r20
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r20.s32, ctx.xer);
	// bge cr6,0x82525020
	if (!ctx.cr6.lt) goto loc_82525020;
	// subf r9,r8,r20
	ctx.r9.u64 = ctx.r20.u64 - ctx.r8.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82524FFC:
	// lwz r9,372(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 372);
	// lfsx f0,r10,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lfsx f12,r8,r10
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfsx f11,r11,r31
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// bdnz 0x82524ffc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82524FFC;
loc_82525020:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82524f3c
	if (!ctx.cr0.eq) goto loc_82524F3C;
loc_8252502C:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r19,4
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 4, ctx.xer);
	// blt cr6,0x82525074
	if (ctx.cr6.lt) goto loc_82525074;
	// addi r8,r19,-3
	ctx.r8.s64 = ctx.r19.s64 + -3;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// addi r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 4;
loc_82525044:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f13,r27,r11
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x82525044
	if (ctx.cr6.lt) goto loc_82525044;
loc_82525074:
	// cmpw cr6,r9,r19
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r19.s32, ctx.xer);
	// bge cr6,0x8252509c
	if (!ctx.cr6.lt) goto loc_8252509C;
	// subf r10,r9,r19
	ctx.r10.u64 = ctx.r19.u64 - ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8252508C:
	// lfsx f0,r27,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8252508c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252508C;
loc_8252509C:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// subf r28,r23,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r23.u64;
	// subf r29,r21,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r21.u64;
	// subf r26,r24,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r24.u64;
	// subf r27,r22,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r22.u64;
	// bge 0x82524f1c
	if (!ctx.cr0.lt) goto loc_82524F1C;
loc_825250B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x825e41b0
	ctx.lr = 0x825250C4;
	__restfpr_27(ctx, base);
	// b 0x825e3634
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8255EFA0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8255efd0
	if (ctx.cr6.eq) goto loc_8255EFD0;
	// bl 0x82543c70
	ctx.lr = 0x8255EFCC;
	sub_82543C70(ctx, base);
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_8255EFD0:
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8255efe4
	if (ctx.cr6.eq) goto loc_8255EFE4;
	// bl 0x82543c70
	ctx.lr = 0x8255EFE0;
	sub_82543C70(ctx, base);
	// stw r30,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_8255EFE4:
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
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

DEFINE_REX_FUNC(sub_82560200) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e3608
	ctx.lr = 0x82560208;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r28.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82560248
	if (ctx.cr6.eq) goto loc_82560248;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r29,r4,16
	ctx.r29.u64 = ctx.r4.u32 & 0xFFFF;
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8256023C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r9,21(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 21);
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82560258
	if (ctx.cr6.lt) goto loc_82560258;
loc_82560248:
	// lis r3,-30009
	ctx.r3.s64 = -1966669824;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825e3658
	__restgprlr_28(ctx, base);
	return;
loc_82560258:
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// rlwinm r11,r29,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825e3658
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825616B0) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,25728
	ctx.r9.s64 = ctx.r11.s64 + 25728;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825616ec
	if (ctx.cr6.eq) goto loc_825616EC;
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// ori r4,r4,32781
	ctx.r4.u64 = ctx.r4.u64 | 32781;
	// bl 0x82562cf8
	ctx.lr = 0x825616E8;
	sub_82562CF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825616EC:
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

DEFINE_REX_FUNC(sub_82562690) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e3604
	ctx.lr = 0x82562698;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825602f8
	ctx.lr = 0x825626A4;
	sub_825602F8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82562860
	if (ctx.cr6.lt) goto loc_82562860;
	// addi r28,r31,48
	ctx.r28.s64 = ctx.r31.s64 + 48;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8275911c
	ctx.lr = 0x825626BC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825626f4
	if (ctx.cr6.eq) goto loc_825626F4;
	// addi r30,r31,204
	ctx.r30.s64 = ctx.r31.s64 + 204;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8275911c
	ctx.lr = 0x825626D4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825626EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8275913c
	ctx.lr = 0x825626F4;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_825626F4:
	// lwz r3,176(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// addi r29,r31,172
	ctx.r29.s64 = ctx.r31.s64 + 172;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82562744
	if (ctx.cr6.eq) goto loc_82562744;
loc_82562704:
	// lwz r30,4(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r3,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r3,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r3.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82562738;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82562704
	if (!ctx.cr6.eq) goto loc_82562704;
loc_82562744:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// addi r29,r31,104
	ctx.r29.s64 = ctx.r31.s64 + 104;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82562778
	if (ctx.cr6.eq) goto loc_82562778;
loc_82562754:
	// lwz r10,-12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -12);
	// addi r3,r11,-12
	ctx.r3.s64 = ctx.r11.s64 + -12;
	// lwz r30,4(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8256276C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82562754
	if (!ctx.cr6.eq) goto loc_82562754;
loc_82562778:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// addi r29,r31,116
	ctx.r29.s64 = ctx.r31.s64 + 116;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x825627ac
	if (ctx.cr6.eq) goto loc_825627AC;
loc_82562788:
	// lwz r10,-8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// lwz r30,4(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825627A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82562788
	if (!ctx.cr6.eq) goto loc_82562788;
loc_825627AC:
	// addi r30,r31,204
	ctx.r30.s64 = ctx.r31.s64 + 204;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8275911c
	ctx.lr = 0x825627B8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825627CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,260(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// stw r29,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r29.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825627E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8275913c
	ctx.lr = 0x825627F4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8275911c
	ctx.lr = 0x825627FC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562400
	ctx.lr = 0x82562804;
	sub_82562400(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8275913c
	ctx.lr = 0x8256280C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r3,184(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8256282c
	if (ctx.cr6.eq) goto loc_8256282C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8256282C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8256282C:
	// stw r29,184(r31)
	REX_STORE_U32(ctx.r31.u32 + 184, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8275911c
	ctx.lr = 0x82562838;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8256284C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8275913c
	ctx.lr = 0x82562858;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8275913c
	ctx.lr = 0x82562860;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82562860:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825e3654
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8256A968) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e360c
	ctx.lr = 0x8256A970;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8256A98C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8256A9A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r29,1,15,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x1FFFE;
	// lwz r9,66(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 66);
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825e365c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8256C168) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35f8
	ctx.lr = 0x8256C170;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r30,r11,204
	ctx.r30.s64 = ctx.r11.s64 + 204;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// bl 0x8275911c
	ctx.lr = 0x8256C19C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// stw r31,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8256C1E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8256c204
	if (ctx.cr6.lt) goto loc_8256C204;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8256c200
	if (ctx.cr6.eq) goto loc_8256C200;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
loc_8256C200:
	// stw r31,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
loc_8256C204:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8275913c
	ctx.lr = 0x8256C20C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x825e3648
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8256F9E0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,36(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8256f9fc
	if (ctx.cr6.eq) goto loc_8256F9FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8256F9FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82570708) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e360c
	ctx.lr = 0x82570710;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bne cr6,0x82570770
	if (!ctx.cr6.eq) goto loc_82570770;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5380);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82570744
	if (ctx.cr6.lt) goto loc_82570744;
	// stfs f1,124(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// b 0x82570748
	goto loc_82570748;
loc_82570744:
	// stfs f0,124(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 124, temp.u32);
loc_82570748:
	// lwz r31,48(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// addi r29,r30,44
	ctx.r29.s64 = ctx.r30.s64 + 44;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82570770
	if (ctx.cr6.eq) goto loc_82570770;
loc_82570758:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,124(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 124);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82573e20
	ctx.lr = 0x82570764;
	sub_82573E20(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82570758
	if (!ctx.cr6.eq) goto loc_82570758;
loc_82570770:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825e365c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825739E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e3604
	ctx.lr = 0x825739F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82573a28
	if (ctx.cr6.eq) goto loc_82573A28;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8256f608
	ctx.lr = 0x82573A20;
	sub_8256F608(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82573a4c
	if (ctx.cr6.lt) goto loc_82573A4C;
loc_82573A28:
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82573a4c
	if (ctx.cr6.eq) goto loc_82573A4C;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8256f608
	ctx.lr = 0x82573A4C;
	sub_8256F608(ctx, base);
loc_82573A4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825e3654
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82574D18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e360c
	ctx.lr = 0x82574D20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x82574d58
	if (ctx.cr6.eq) goto loc_82574D58;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x82574d58
	if (ctx.cr6.eq) goto loc_82574D58;
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x82574d74
	if (!ctx.cr6.eq) goto loc_82574D74;
loc_82574D58:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82574D6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// b 0x82574d78
	goto loc_82574D78;
loc_82574D74:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82574D78:
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r8,r9,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r8,16
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16, ctx.xer);
	// bne cr6,0x82574da0
	if (!ctx.cr6.eq) goto loc_82574DA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82574b98
	ctx.lr = 0x82574D98;
	sub_82574B98(ctx, base);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// b 0x82574da4
	goto loc_82574DA4;
loc_82574DA0:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82574DA4:
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r11,r30,3,13,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0x7FFF8;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// clrlwi r9,r29,16
	ctx.r9.u64 = ctx.r29.u32 & 0xFFFF;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,10
	ctx.r3.s64 = ctx.r11.s64 + 10;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825e365c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8257A9A8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257A9CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257aa0c
	if (ctx.cr6.eq) goto loc_8257AA0C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257A9E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8257A9F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
loc_8257AA0C:
	// li r3,0
	ctx.r3.s64 = 0;
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

DEFINE_REX_FUNC(sub_8257CCE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e360c
	ctx.lr = 0x8257CCE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r4,4,12,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFF0;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x825e3c00
	ctx.lr = 0x8257CD14;
	sub_825E3C00(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stw r9,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825e365c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8257ECD8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,72(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8257EDF0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257EE14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257ee5c
	if (ctx.cr6.eq) goto loc_8257EE5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257EE30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r7,32(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 32);
	// lbz r4,8(r9)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8257EE48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
loc_8257EE5C:
	// li r3,0
	ctx.r3.s64 = 0;
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

DEFINE_REX_FUNC(sub_825832C8) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8275992c
	__imp__NetDll_WSACleanup(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82583400) {
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
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r31,196(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x827599cc
	ctx.lr = 0x82583444;
	__imp__NetDll_WSASendTo(ctx, base);
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

DEFINE_REX_FUNC(sub_82584C50) {
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
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// lwz r9,16(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r9,12(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// stw r11,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// bne cr6,0x82584ca4
	if (!ctx.cr6.eq) goto loc_82584CA4;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82584CA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82584CA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82592350
	ctx.lr = 0x82584CAC;
	sub_82592350(ctx, base);
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

DEFINE_REX_FUNC(sub_8258A600) {
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
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_8258A618:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	// bne 0x8258a618
	if (!ctx.cr0.eq) goto loc_8258A618;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8258a654
	if (!ctx.cr6.eq) goto loc_8258A654;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82589230
	ctx.lr = 0x8258A648;
	sub_82589230(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x82591250
	ctx.lr = 0x8258A654;
	sub_82591250(ctx, base);
loc_8258A654:
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

DEFINE_REX_FUNC(sub_8258FD60) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e360c
	ctx.lr = 0x8258FD68;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8258fda4
	if (ctx.cr6.eq) goto loc_8258FDA4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82758ebc
	ctx.lr = 0x8258FD8C;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8258fda4
	if (ctx.cr0.eq) goto loc_8258FDA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8258e0b8
	ctx.lr = 0x8258FDA4;
	sub_8258E0B8(ctx, base);
loc_8258FDA4:
	// lwz r3,432(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 432);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bge cr6,0x8258fdfc
	if (!ctx.cr6.lt) goto loc_8258FDFC;
	// bl 0x822aa780
	ctx.lr = 0x8258FDB4;
	sub_822AA780(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8258fdfc
	if (!ctx.cr6.eq) goto loc_8258FDFC;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8258fdd8
	if (ctx.cr6.eq) goto loc_8258FDD8;
	// ld r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 48);
	// ld r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 456);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x8258fdf4
	if (ctx.cr6.eq) goto loc_8258FDF4;
loc_8258FDD8:
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r31,436
	ctx.r5.s64 = ctx.r31.s64 + 436;
	// lwz r4,432(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 432);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258FDF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8258FDF4:
	// li r11,254
	ctx.r11.s64 = 254;
	// stw r11,432(r31)
	REX_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
loc_8258FDFC:
	// lwz r30,196(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 196);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8258fe50
	if (ctx.cr6.eq) goto loc_8258FE50;
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x8258fe50
	if (ctx.cr6.eq) goto loc_8258FE50;
	// bl 0x822ab2e0
	ctx.lr = 0x8258FE1C;
	sub_822AB2E0(ctx, base);
	// rlwinm. r11,r3,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF0000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8258fe38
	if (!ctx.cr0.eq) goto loc_8258FE38;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8258fe38
	if (!ctx.cr6.gt) goto loc_8258FE38;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r4,r11,32775
	ctx.r4.u64 = ctx.r11.u64 | 2147942400;
	// b 0x8258fe3c
	goto loc_8258FE3C;
loc_8258FE38:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8258FE3C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,196(r31)
	REX_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x8258FE50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8258FE50:
	// lwz r30,412(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 412);
	// addi r29,r31,412
	ctx.r29.s64 = ctx.r31.s64 + 412;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8258fe8c
	if (ctx.cr6.eq) goto loc_8258FE8C;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x8258fe8c
	if (ctx.cr0.eq) goto loc_8258FE8C;
loc_8258FE68:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r30,-12
	ctx.r3.s64 = ctx.r30.s64 + -12;
	// subf r10,r11,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r11.u64;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x825923b8
	ctx.lr = 0x8258FE84;
	sub_825923B8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8258fe68
	if (!ctx.cr6.eq) goto loc_8258FE68;
loc_8258FE8C:
	// lwz r3,420(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8258fea4
	if (ctx.cr6.eq) goto loc_8258FEA4;
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 740);
	// rlwinm r4,r11,9,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// bl 0x82593950
	ctx.lr = 0x8258FEA4;
	sub_82593950(ctx, base);
loc_8258FEA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825885d8
	ctx.lr = 0x8258FEAC;
	sub_825885D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258fb50
	ctx.lr = 0x8258FEB4;
	sub_8258FB50(ctx, base);
	// lwz r3,408(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 408);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8258fedc
	if (ctx.cr6.eq) goto loc_8258FEDC;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825948d8
	ctx.lr = 0x8258FECC;
	sub_825948D8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x8258fedc
	if (!ctx.cr0.lt) goto loc_8258FEDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82588958
	ctx.lr = 0x8258FEDC;
	sub_82588958(ctx, base);
loc_8258FEDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258d7a0
	ctx.lr = 0x8258FEE4;
	sub_8258D7A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825e365c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82596090) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e3608
	ctx.lr = 0x82596098;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,292(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 292);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8259614c
	if (!ctx.cr0.eq) goto loc_8259614C;
	// li r4,9
	ctx.r4.s64 = 9;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x825a98f8
	ctx.lr = 0x825960C4;
	sub_825A98F8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x825960d8
	if (!ctx.cr0.eq) goto loc_825960D8;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x8259619c
	goto loc_8259619C;
loc_825960D8:
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// li r7,131
	ctx.r7.s64 = 131;
	// stw r28,73(r31)
	REX_STORE_U32(ctx.r31.u32 + 73, ctx.r28.u32);
	// addi r5,r31,36
	ctx.r5.s64 = ctx.r31.s64 + 36;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,69(r31)
	REX_STORE_U32(ctx.r31.u32 + 69, ctx.r11.u32);
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x825a4bf0
	ctx.lr = 0x825960FC;
	sub_825A4BF0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a5008
	ctx.lr = 0x82596118;
	sub_825A5008(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82596154
	if (!ctx.cr0.eq) goto loc_82596154;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82596134
	if (!ctx.cr6.eq) goto loc_82596134;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82596154
	goto loc_82596154;
loc_82596134:
	// lis r4,32767
	ctx.r4.s64 = 2147418112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,65534
	ctx.r4.u64 = ctx.r4.u64 | 65534;
	// bl 0x825a4c88
	ctx.lr = 0x82596144;
	sub_825A4C88(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82596154
	goto loc_82596154;
loc_8259614C:
	// lis r30,-32646
	ctx.r30.s64 = -2139488256;
	// ori r30,r30,4113
	ctx.r30.u64 = ctx.r30.u64 | 4113;
loc_82596154:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8259619c
	if (ctx.cr6.eq) goto loc_8259619C;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_82596160:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	// bne 0x82596160
	if (!ctx.cr0.eq) goto loc_82596160;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8259619c
	if (!ctx.cr6.eq) goto loc_8259619C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259619C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8259619C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x825e3658
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8259D980) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35f0
	ctx.lr = 0x8259D988;
	__savegprlr_22(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,292(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 292);
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,292(r4)
	REX_STORE_U32(ctx.r4.u32 + 292, ctx.r11.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,180(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 180);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8259d9d8
	if (!ctx.cr6.eq) goto loc_8259D9D8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8259d9d0
	if (!ctx.cr6.eq) goto loc_8259D9D0;
loc_8259D9C4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8259fb48
	ctx.lr = 0x8259D9D0;
	sub_8259FB48(ctx, base);
loc_8259D9D0:
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// b 0x8259de54
	goto loc_8259DE54;
loc_8259D9D8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8259df00
	ctx.lr = 0x8259D9E8;
	sub_8259DF00(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8259de54
	if (!ctx.cr0.eq) goto loc_8259DE54;
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 292);
	// rlwinm. r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8259da24
	if (ctx.cr0.eq) goto loc_8259DA24;
	// rlwinm r11,r11,0,12,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// stw r11,292(r31)
	REX_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// lwz r11,236(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 236);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,236(r26)
	REX_STORE_U32(ctx.r26.u32 + 236, ctx.r11.u32);
	// bne 0x8259da24
	if (!ctx.cr0.eq) goto loc_8259DA24;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82599d18
	ctx.lr = 0x8259DA1C;
	sub_82599D18(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8259de54
	if (!ctx.cr0.eq) goto loc_8259DE54;
loc_8259DA24:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82596878
	ctx.lr = 0x8259DA34;
	sub_82596878(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8259de54
	if (!ctx.cr0.eq) goto loc_8259DE54;
	// addi r24,r26,8
	ctx.r24.s64 = ctx.r26.s64 + 8;
	// lwz r4,60(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x825a89a8
	ctx.lr = 0x8259DA54;
	sub_825A89A8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8259de54
	if (!ctx.cr0.eq) goto loc_8259DE54;
	// lwz r11,428(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 428);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8259da9c
	if (ctx.cr0.eq) goto loc_8259DA9C;
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 292);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8259da9c
	if (ctx.cr0.eq) goto loc_8259DA9C;
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8259d9c4
	if (ctx.cr6.eq) goto loc_8259D9C4;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8259d9d0
	if (ctx.cr6.eq) goto loc_8259D9D0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8259c2b8
	ctx.lr = 0x8259DA98;
	sub_8259C2B8(ctx, base);
	// b 0x8259d9d0
	goto loc_8259D9D0;
loc_8259DA9C:
	// lwz r11,28(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 28);
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8259dac0
	if (!ctx.cr6.eq) goto loc_8259DAC0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8259bf98
	ctx.lr = 0x8259DAB8;
	sub_8259BF98(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8259de54
	if (!ctx.cr0.eq) goto loc_8259DE54;
loc_8259DAC0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8259d9d0
	if (!ctx.cr6.eq) goto loc_8259D9D0;
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 292);
	// lis r10,4626
	ctx.r10.s64 = 303169536;
	// lis r9,13364
	ctx.r9.s64 = 875823104;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r25,r10,4626
	ctx.r25.u64 = ctx.r10.u64 | 4626;
	// ori r23,r9,13364
	ctx.r23.u64 = ctx.r9.u64 | 13364;
	// beq 0x8259dc18
	if (ctx.cr0.eq) goto loc_8259DC18;
	// lwz r30,64(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8259db64
	if (!ctx.cr6.eq) goto loc_8259DB64;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,38
	ctx.r5.s64 = 38;
	// bl 0x825e3c00
	ctx.lr = 0x8259DB00;
	sub_825E3C00(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x825a61d0
	ctx.lr = 0x8259DB10;
	sub_825A61D0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8259d9c4
	if (ctx.cr0.eq) goto loc_8259D9C4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x825a6658
	ctx.lr = 0x8259DB20;
	sub_825A6658(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8259d9d0
	if (ctx.cr0.eq) goto loc_8259D9D0;
	// bl 0x825a9528
	ctx.lr = 0x8259DB30;
	sub_825A9528(ctx, base);
	// stw r22,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r22.u32);
loc_8259DB34:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r31
	ea = ctx.r31.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r31
	ea = ctx.r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	// bne 0x8259db34
	if (!ctx.cr0.eq) goto loc_8259DB34;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8259d9d0
	if (!ctx.cr6.eq) goto loc_8259D9D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a46f0
	ctx.lr = 0x8259DB60;
	sub_825A46F0(ctx, base);
	// b 0x8259d9d0
	goto loc_8259D9D0;
loc_8259DB64:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x825a6178
	ctx.lr = 0x8259DB70;
	sub_825A6178(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x8259db8c
	if (!ctx.cr0.eq) goto loc_8259DB8C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x825a6440
	ctx.lr = 0x8259DB84;
	sub_825A6440(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8259dc18
	if (ctx.cr0.eq) goto loc_8259DC18;
loc_8259DB8C:
	// lwz r10,172(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 172);
	// li r11,2
	ctx.r11.s64 = 2;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// adde r28,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r28.u64 = ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blt cr6,0x8259dbb4
	if (ctx.cr6.lt) goto loc_8259DBB4;
	// lis r27,-32646
	ctx.r27.s64 = -2139488256;
	// ori r27,r27,4113
	ctx.r27.u64 = ctx.r27.u64 | 4113;
loc_8259DBB4:
	// lwz r11,116(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 116);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x8259dbe0
	if (ctx.cr6.eq) goto loc_8259DBE0;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// beq cr6,0x8259dbe0
	if (ctx.cr6.eq) goto loc_8259DBE0;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bgt cr6,0x8259dc04
	if (ctx.cr6.gt) goto loc_8259DC04;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8259a018
	ctx.lr = 0x8259DBDC;
	sub_8259A018(ctx, base);
	// b 0x8259dbfc
	goto loc_8259DBFC;
loc_8259DBE0:
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 292);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r11,292(r31)
	REX_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// bl 0x825a8300
	ctx.lr = 0x8259DBFC;
	sub_825A8300(ctx, base);
loc_8259DBFC:
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8259de40
	if (!ctx.cr0.eq) goto loc_8259DE40;
loc_8259DC04:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x825a6658
	ctx.lr = 0x8259DC10;
	sub_825A6658(ctx, base);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// b 0x8259dc1c
	goto loc_8259DC1C;
loc_8259DC18:
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
loc_8259DC1C:
	// lwz r10,292(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 292);
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8259dd38
	if (ctx.cr0.eq) goto loc_8259DD38;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r27,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x825a61d0
	ctx.lr = 0x8259DC44;
	sub_825A61D0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8259dc98
	if (ctx.cr0.eq) goto loc_8259DC98;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r10,24(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 24);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8259de3c
	if (ctx.cr6.eq) goto loc_8259DE3C;
	// lwz r10,116(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 116);
	// addi r11,r29,116
	ctx.r11.s64 = ctx.r29.s64 + 116;
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x8259de3c
	if (ctx.cr6.eq) goto loc_8259DE3C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x8259dc80
	if (ctx.cr6.eq) goto loc_8259DC80;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bne cr6,0x8259de3c
	if (!ctx.cr6.eq) goto loc_8259DE3C;
loc_8259DC80:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x825a8300
	ctx.lr = 0x8259DC90;
	sub_825A8300(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8259de40
	goto loc_8259DE40;
loc_8259DC98:
	// lwz r11,172(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 172);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8259d9d0
	if (!ctx.cr6.eq) goto loc_8259D9D0;
	// lwz r11,428(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 428);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8259de3c
	if (ctx.cr0.eq) goto loc_8259DE3C;
loc_8259DCB0:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r31
	ea = ctx.r31.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r31
	ea = ctx.r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	// bne 0x8259dcb0
	if (!ctx.cr0.eq) goto loc_8259DCB0;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8250e930
	ctx.lr = 0x8259DCD8;
	sub_8250E930(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r4,24(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 24);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x825a6c38
	ctx.lr = 0x8259DD00;
	sub_825A6C38(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8259de3c
	if (ctx.cr0.eq) goto loc_8259DE3C;
loc_8259DD08:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r31
	ea = ctx.r31.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r31
	ea = ctx.r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	// bne 0x8259dd08
	if (!ctx.cr0.eq) goto loc_8259DD08;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8259de54
	if (!ctx.cr6.eq) goto loc_8259DE54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a46f0
	ctx.lr = 0x8259DD34;
	sub_825A46F0(ctx, base);
	// b 0x8259de40
	goto loc_8259DE40;
loc_8259DD38:
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8259de3c
	if (!ctx.cr6.eq) goto loc_8259DE3C;
	// lwz r29,168(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8259ddf4
	if (ctx.cr6.eq) goto loc_8259DDF4;
	// rlwinm. r11,r10,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8259ddec
	if (ctx.cr0.eq) goto loc_8259DDEC;
	// lwz r9,12(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// addi r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 + 12;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8259ddec
	if (!ctx.cr6.eq) goto loc_8259DDEC;
	// rlwinm. r11,r10,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// beq 0x8259dde8
	if (ctx.cr0.eq) goto loc_8259DDE8;
	// lwz r11,112(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 112);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// stw r11,112(r29)
	REX_STORE_U32(ctx.r29.u32 + 112, ctx.r11.u32);
	// bl 0x82596a88
	ctx.lr = 0x8259DD88;
	sub_82596A88(ctx, base);
	// stw r22,56(r29)
	REX_STORE_U32(ctx.r29.u32 + 56, ctx.r22.u32);
	// stw r22,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r22.u32);
loc_8259DD90:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	ea = ctx.r29.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ea = ctx.r29.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	// bne 0x8259dd90
	if (!ctx.cr0.eq) goto loc_8259DD90;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8259fb48
	ctx.lr = 0x8259DDB8;
	sub_8259FB48(ctx, base);
loc_8259DDB8:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r31
	ea = ctx.r31.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r31
	ea = ctx.r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	// bne 0x8259ddb8
	if (!ctx.cr0.eq) goto loc_8259DDB8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8259ddec
	if (!ctx.cr6.eq) goto loc_8259DDEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a46f0
	ctx.lr = 0x8259DDE4;
	sub_825A46F0(ctx, base);
	// b 0x8259ddec
	goto loc_8259DDEC;
loc_8259DDE8:
	// bl 0x82596a88
	ctx.lr = 0x8259DDEC;
	sub_82596A88(ctx, base);
loc_8259DDEC:
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// b 0x8259de3c
	goto loc_8259DE3C;
loc_8259DDF4:
	// rlwinm. r11,r10,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8259de20
	if (ctx.cr0.eq) goto loc_8259DE20;
	// lwz r11,172(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 172);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8259de3c
	if (ctx.cr6.lt) goto loc_8259DE3C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8259de3c
	if (!ctx.cr6.eq) goto loc_8259DE3C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8259fb48
	ctx.lr = 0x8259DE1C;
	sub_8259FB48(ctx, base);
	// b 0x8259de3c
	goto loc_8259DE3C;
loc_8259DE20:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8259de3c
	if (!ctx.cr6.eq) goto loc_8259DE3C;
	// oris r11,r10,1024
	ctx.r11.u64 = ctx.r10.u64 | 67108864;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,292(r31)
	REX_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82596a30
	ctx.lr = 0x8259DE3C;
	sub_82596A30(ctx, base);
loc_8259DE3C:
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_8259DE40:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8259de54
	if (ctx.cr6.eq) goto loc_8259DE54;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x825a6658
	ctx.lr = 0x8259DE54;
	sub_825A6658(ctx, base);
loc_8259DE54:
	// lwz r11,428(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 428);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8259de94
	if (ctx.cr0.eq) goto loc_8259DE94;
	// lwz r11,240(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 240);
	// addi r10,r26,240
	ctx.r10.s64 = ctx.r26.s64 + 240;
	// b 0x8259de7c
	goto loc_8259DE7C;
loc_8259DE6C:
	// lbz r9,288(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 288);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8259de94
	if (ctx.cr0.eq) goto loc_8259DE94;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8259DE7C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8259de8c
	if (ctx.cr6.eq) goto loc_8259DE8C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8259de6c
	if (!ctx.cr0.eq) goto loc_8259DE6C;
loc_8259DE8C:
	// addi r3,r26,8
	ctx.r3.s64 = ctx.r26.s64 + 8;
	// bl 0x825a91b8
	ctx.lr = 0x8259DE94;
	sub_825A91B8(ctx, base);
loc_8259DE94:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x825e3640
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825BD480) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,512
	ctx.r3.s64 = ctx.r3.s64 + 512;
	// b 0x825bffe0
	sub_825BFFE0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825BD718) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825bddd8
	sub_825BDDD8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825BD8C0) {
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
	// std r4,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// std r5,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// addi r3,r3,616
	ctx.r3.s64 = ctx.r3.s64 + 616;
	// std r6,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// std r7,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// std r8,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r8.u64);
	// bl 0x825bf4c0
	ctx.lr = 0x825BD8F4;
	sub_825BF4C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825bd904
	if (!ctx.cr0.eq) goto loc_825BD904;
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x825bd910
	goto loc_825BD910;
loc_825BD904:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// bl 0x825c1628
	ctx.lr = 0x825BD910;
	sub_825C1628(ctx, base);
loc_825BD910:
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

DEFINE_REX_FUNC(sub_825BFD34) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825BFDB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,24(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x825bfde0
	if (!ctx.cr6.gt) goto loc_825BFDE0;
	// stw r30,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// b 0x825bfe60
	goto loc_825BFE60;
loc_825BFDE0:
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r11,r11,-29872
	ctx.r11.s64 = ctx.r11.s64 + -29872;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,24(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x825bfe24
	if (ctx.cr6.gt) goto loc_825BFE24;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_825BFE24:
	// clrldi r10,r30,32
	ctx.r10.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x825bfe5c
	if (ctx.cr6.lt) goto loc_825BFE5C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_825BFE5C:
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_825BFE60:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r11,444
	ctx.r3.s64 = ctx.r11.s64 + 444;
	// bl 0x825c28c0
	ctx.lr = 0x825BFE70;
	sub_825C28C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,30(r31)
	REX_STORE_U8(ctx.r31.u32 + 30, ctx.r11.u8);
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

DEFINE_REX_FUNC(sub_825C78C0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,104(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825C78F0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// bl 0x825c6b58
	ctx.lr = 0x825C7908;
	sub_825C6B58(ctx, base);
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

DEFINE_REX_FUNC(sub_825C8600) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x825c866c
	if (ctx.cr6.eq) goto loc_825C866C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x825c866c
	if (ctx.cr6.lt) goto loc_825C866C;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bge cr6,0x825c866c
	if (!ctx.cr6.lt) goto loc_825C866C;
	// lwz r10,292(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 292);
	// rlwinm r9,r4,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// ld r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// clrlwi r7,r4,27
	ctx.r7.u64 = ctx.r4.u32 & 0x1F;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r11,r3,324
	ctx.r11.s64 = ctx.r3.s64 + 324;
	// rlwinm r10,r4,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// std r8,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// slw r8,r6,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// ld r7,8(r5)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r5.u32 + 8);
	// std r7,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r7.u64);
	// ld r7,16(r5)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r5.u32 + 16);
	// std r7,16(r9)
	REX_STORE_U64(ctx.r9.u32 + 16, ctx.r7.u64);
	// ld r7,24(r5)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r5.u32 + 24);
	// std r7,24(r9)
	REX_STORE_U64(ctx.r9.u32 + 24, ctx.r7.u64);
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
loc_825C866C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825CCA98) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35d0
	ctx.lr = 0x825CCAA0;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x825e4160
	ctx.lr = 0x825CCAA8;
	__savefpr_26(ctx, base);
	// stwu r1,-1232(r1)
	ea = -1232 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r5,1268(r1)
	REX_STORE_U32(ctx.r1.u32 + 1268, ctx.r5.u32);
	// addi r11,r3,700
	ctx.r11.s64 = ctx.r3.s64 + 700;
	// stw r3,1252(r1)
	REX_STORE_U32(ctx.r1.u32 + 1252, ctx.r3.u32);
	// li r5,80
	ctx.r5.s64 = 80;
	// stw r31,700(r3)
	REX_STORE_U32(ctx.r3.u32 + 700, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r31,4272(r3)
	REX_STORE_U8(ctx.r3.u32 + 4272, ctx.r31.u8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r31,4273(r3)
	REX_STORE_U8(ctx.r3.u32 + 4273, ctx.r31.u8);
	// stw r31,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r31.u32);
	// stw r11,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// stw r31,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r31.u32);
	// stw r31,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r31,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r31,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r31,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// stw r31,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stw r31,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stw r31,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// stw r31,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stw r31,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r31.u32);
	// bl 0x825e3710
	ctx.lr = 0x825CCB10;
	sub_825E3710(ctx, base);
	// std r31,704(r30)
	REX_STORE_U64(ctx.r30.u32 + 704, ctx.r31.u64);
	// addi r3,r30,732
	ctx.r3.s64 = ctx.r30.s64 + 732;
	// std r31,712(r30)
	REX_STORE_U64(ctx.r30.u32 + 712, ctx.r31.u64);
	// li r5,32
	ctx.r5.s64 = 32;
	// std r31,720(r30)
	REX_STORE_U64(ctx.r30.u32 + 720, ctx.r31.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,728(r30)
	REX_STORE_U32(ctx.r30.u32 + 728, ctx.r31.u32);
	// bl 0x825e3710
	ctx.lr = 0x825CCB30;
	sub_825E3710(ctx, base);
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e3710
	ctx.lr = 0x825CCB40;
	sub_825E3710(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// addi r7,r11,-28128
	ctx.r7.s64 = ctx.r11.s64 + -28128;
	// addi r6,r10,-28112
	ctx.r6.s64 = ctx.r10.s64 + -28112;
	// addi r5,r9,-28096
	ctx.r5.s64 = ctx.r9.s64 + -28096;
	// addi r4,r8,-28080
	ctx.r4.s64 = ctx.r8.s64 + -28080;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// addi r31,r1,800
	ctx.r31.s64 = ctx.r1.s64 + 800;
	// addi r30,r1,816
	ctx.r30.s64 = ctx.r1.s64 + 816;
	// lis r29,-32248
	ctx.r29.s64 = -2113404928;
	// lis r28,-32248
	ctx.r28.s64 = -2113404928;
	// lis r27,-32248
	ctx.r27.s64 = -2113404928;
	// lwz r11,-28128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -28128);
	// lwz r26,4(r7)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r25,8(r7)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r10,-28112(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -28112);
	// lwz r24,4(r6)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r23,8(r6)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r22,4(r5)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r21,8(r5)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r7,12(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r6,12(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r9,-28096(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + -28096);
	// lwz r20,8(r4)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r11,r29,-28064
	ctx.r11.s64 = ctx.r29.s64 + -28064;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r5,12(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r8,-28080(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + -28080);
	// lwz r19,4(r4)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r26.u32);
	// stw r25,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r25.u32);
	// stw r7,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r24,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r24.u32);
	// stw r23,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r23.u32);
	// stw r6,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// stw r9,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r22,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r22.u32);
	// stw r21,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r21.u32);
	// stw r20,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// addi r7,r1,848
	ctx.r7.s64 = ctx.r1.s64 + 848;
	// lwz r6,-28048(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + -28048);
	// addi r4,r1,864
	ctx.r4.s64 = ctx.r1.s64 + 864;
	// lwz r9,-28064(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + -28064);
	// stw r7,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// addi r7,r28,-28048
	ctx.r7.s64 = ctx.r28.s64 + -28048;
	// addi r28,r27,-28032
	ctx.r28.s64 = ctx.r27.s64 + -28032;
	// stw r4,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// addi r23,r1,896
	ctx.r23.s64 = ctx.r1.s64 + 896;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lis r4,-32248
	ctx.r4.s64 = -2113404928;
	// lwz r29,8(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r23,712(r1)
	REX_STORE_U32(ctx.r1.u32 + 712, ctx.r23.u32);
	// lis r31,-32248
	ctx.r31.s64 = -2113404928;
	// addi r26,r4,-27904
	ctx.r26.s64 = ctx.r4.s64 + -27904;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r14,4(r28)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// addi r21,r1,912
	ctx.r21.s64 = ctx.r1.s64 + 912;
	// lwz r23,8(r28)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// lis r25,-32248
	ctx.r25.s64 = -2113404928;
	// lwz r28,12(r28)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// addi r24,r1,880
	ctx.r24.s64 = ctx.r1.s64 + 880;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r10,r31,-27968
	ctx.r10.s64 = ctx.r31.s64 + -27968;
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// addi r9,r1,832
	ctx.r9.s64 = ctx.r1.s64 + 832;
	// stw r6,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// stw r3,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// lis r3,-32248
	ctx.r3.s64 = -2113404928;
	// stw r28,716(r1)
	REX_STORE_U32(ctx.r1.u32 + 716, ctx.r28.u32);
	// addi r18,r6,-27936
	ctx.r18.s64 = ctx.r6.s64 + -27936;
	// lwz r28,4(r26)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// addi r16,r3,-27984
	ctx.r16.s64 = ctx.r3.s64 + -27984;
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// lis r29,-32248
	ctx.r29.s64 = -2113404928;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r22,4(r7)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// addi r15,r29,-27920
	ctx.r15.s64 = ctx.r29.s64 + -27920;
	// lwz r20,8(r7)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stw r28,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// lwz r28,8(r26)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r26,12(r26)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r7,12(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r11,-28032(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + -28032);
	// lis r27,-32248
	ctx.r27.s64 = -2113404928;
	// lwz r4,-27904(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + -27904);
	// lwz r31,-27968(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + -27968);
	// stw r26,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r26.u32);
	// lwz r26,4(r10)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r17,96(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r23,708(r1)
	REX_STORE_U32(ctx.r1.u32 + 708, ctx.r23.u32);
	// addi r23,r27,-27888
	ctx.r23.s64 = ctx.r27.s64 + -27888;
	// stw r28,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r28.u32);
	// stw r7,728(r1)
	REX_STORE_U32(ctx.r1.u32 + 728, ctx.r7.u32);
	// stw r27,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r27.u32);
	// lwz r28,92(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r7,104(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r27,112(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r21,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r21.u32);
	// addi r21,r25,-27952
	ctx.r21.s64 = ctx.r25.s64 + -27952;
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r29,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// stw r26,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r26.u32);
	// lwz r25,120(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r29,100(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r26,8(r10)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r14,724(r1)
	REX_STORE_U32(ctx.r1.u32 + 724, ctx.r14.u32);
	// stw r24,720(r1)
	REX_STORE_U32(ctx.r1.u32 + 720, ctx.r24.u32);
	// lwz r14,116(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r24,108(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r5,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r5.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stw r31,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r19,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r19.u32);
	// stw r17,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r17.u32);
	// addi r8,r1,928
	ctx.r8.s64 = ctx.r1.s64 + 928;
	// stw r28,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r28.u32);
	// lwz r9,-27936(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + -27936);
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// addi r28,r1,1008
	ctx.r28.s64 = ctx.r1.s64 + 1008;
	// stw r7,0(r14)
	REX_STORE_U32(ctx.r14.u32 + 0, ctx.r7.u32);
	// addi r31,r1,992
	ctx.r31.s64 = ctx.r1.s64 + 992;
	// lwz r7,4(r18)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r18.u32 + 4);
	// li r11,14
	ctx.r11.s64 = 14;
	// lwz r5,8(r18)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r18.u32 + 8);
	// addi r8,r1,960
	ctx.r8.s64 = ctx.r1.s64 + 960;
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// addi r9,r1,944
	ctx.r9.s64 = ctx.r1.s64 + 944;
	// stw r3,12(r14)
	REX_STORE_U32(ctx.r14.u32 + 12, ctx.r3.u32);
	// addi r3,r6,-28000
	ctx.r3.s64 = ctx.r6.s64 + -28000;
	// lwz r4,12(r18)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r18.u32 + 12);
	// stw r25,4(r14)
	REX_STORE_U32(ctx.r14.u32 + 4, ctx.r25.u32);
	// stw r7,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// addi r7,r1,976
	ctx.r7.s64 = ctx.r1.s64 + 976;
	// stw r22,4(r24)
	REX_STORE_U32(ctx.r24.u32 + 4, ctx.r22.u32);
	// stw r20,8(r24)
	REX_STORE_U32(ctx.r24.u32 + 8, ctx.r20.u32);
	// lwz r25,4(r16)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r16.u32 + 4);
	// lwz r22,8(r16)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r16.u32 + 8);
	// lwz r20,12(r16)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r16.u32 + 12);
	// lwz r6,-28000(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + -28000);
	// lwz r16,12(r15)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r15.u32 + 12);
	// lwz r18,4(r15)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r15.u32 + 4);
	// lwz r17,8(r15)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r15.u32 + 8);
	// lwz r15,92(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r27,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r27.u32);
	// lwz r27,112(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r5,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r5.u32);
	// stw r29,8(r14)
	REX_STORE_U32(ctx.r14.u32 + 8, ctx.r29.u32);
	// li r29,11
	ctx.r29.s64 = 11;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// lwz r14,4(r21)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r28,8(r21)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// stw r31,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lwz r21,12(r21)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r21.u32 + 12);
	// lwz r31,108(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r4,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r4.u32);
	// stw r6,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,120(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r21,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r21.u32);
	// lwz r21,116(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r6,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r15,-27952(r15)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r15.u32 + -27952);
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// lwz r28,96(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lwz r3,728(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 728);
	// stw r14,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r14.u32);
	// lwz r14,172(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// stw r15,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r15.u32);
	// lwz r19,104(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r15,128(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// stw r16,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r16.u32);
	// lwz r16,136(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// stw r3,12(r24)
	REX_STORE_U32(ctx.r24.u32 + 12, ctx.r3.u32);
	// lwz r3,720(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 720);
	// stw r10,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// li r10,9
	ctx.r10.s64 = 9;
	// lwz r27,-27984(r27)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + -27984);
	// lwz r16,-27888(r16)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r16.u32 + -27888);
	// lwz r19,-27920(r19)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r19.u32 + -27920);
	// stw r5,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// lwz r5,724(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 724);
	// stw r16,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r16.u32);
	// lwz r16,4(r23)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// lwz r5,708(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 708);
	// stw r16,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r16.u32);
	// lwz r16,8(r23)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// lwz r23,12(r23)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r23.u32 + 12);
	// stw r5,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// lwz r5,716(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
	// stw r11,736(r1)
	REX_STORE_U32(ctx.r1.u32 + 736, ctx.r11.u32);
	// stw r11,740(r1)
	REX_STORE_U32(ctx.r1.u32 + 740, ctx.r11.u32);
	// stw r11,744(r1)
	REX_STORE_U32(ctx.r1.u32 + 744, ctx.r11.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r10,748(r1)
	REX_STORE_U32(ctx.r1.u32 + 748, ctx.r10.u32);
	// stw r5,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// lwz r5,712(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 712);
	// stw r10,756(r1)
	REX_STORE_U32(ctx.r1.u32 + 756, ctx.r10.u32);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r21,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r21.u32);
	// stw r28,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r14,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r14.u32);
	// stw r4,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
	// lwz r4,152(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// stw r15,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r15.u32);
	// rotlwi r31,r22,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r22.u32, 0);
	// stw r29,764(r1)
	REX_STORE_U32(ctx.r1.u32 + 764, ctx.r29.u32);
	// lwz r29,1252(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1252);
	// stw r22,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r22.u32);
	// stw r4,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,168(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// stw r25,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r25.u32);
	// stw r20,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r20.u32);
	// stw r31,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r19,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r19.u32);
	// stw r4,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r4.u32);
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// stw r27,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
	// stw r18,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r18.u32);
	// stw r17,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r17.u32);
	// stw r4,12(r5)
	REX_STORE_U32(ctx.r5.u32 + 12, ctx.r4.u32);
	// lwz r4,192(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// stw r8,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r8.u32);
	// rotlwi r8,r27,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r27.u32, 0);
	// lwz r5,160(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,128(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// stw r7,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// stw r4,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
	// lwz r4,208(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// stw r8,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// stw r9,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// rotlwi r9,r7,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r8,172(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// rotlwi r7,r25,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r25.u32, 0);
	// stw r30,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r30.u32);
	// li r30,5
	ctx.r30.s64 = 5;
	// stw r26,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r26.u32);
	// li r26,6
	ctx.r26.s64 = 6;
	// stw r4,12(r5)
	REX_STORE_U32(ctx.r5.u32 + 12, ctx.r4.u32);
	// addi r5,r1,736
	ctx.r5.s64 = ctx.r1.s64 + 736;
	// stw r26,752(r1)
	REX_STORE_U32(ctx.r1.u32 + 752, ctx.r26.u32);
	// li r4,11
	ctx.r4.s64 = 11;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r30,760(r1)
	REX_STORE_U32(ctx.r1.u32 + 760, ctx.r30.u32);
	// stw r26,768(r1)
	REX_STORE_U32(ctx.r1.u32 + 768, ctx.r26.u32);
	// stw r26,772(r1)
	REX_STORE_U32(ctx.r1.u32 + 772, ctx.r26.u32);
	// stw r26,776(r1)
	REX_STORE_U32(ctx.r1.u32 + 776, ctx.r26.u32);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r8,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// lwz r8,120(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r8,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r8.u32);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,136(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// stw r16,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r16.u32);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r23,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r23.u32);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r6,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r8,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r8.u32);
	// bl 0x825cc908
	ctx.lr = 0x825CCFC0;
	sub_825CC908(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r6,224(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// ori r24,r11,61440
	ctx.r24.u64 = ctx.r11.u64 | 61440;
	// addi r3,r10,-28144
	ctx.r3.s64 = ctx.r10.s64 + -28144;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825cc1e0
	ctx.lr = 0x825CCFE0;
	sub_825CC1E0(ctx, base);
	// lwz r25,1268(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 1268);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// blt 0x825cdab4
	if (ctx.cr0.lt) goto loc_825CDAB4;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// addi r28,r1,880
	ctx.r28.s64 = ctx.r1.s64 + 880;
	// addi r31,r29,728
	ctx.r31.s64 = ctx.r29.s64 + 728;
loc_825CCFFC:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825cc1e0
	ctx.lr = 0x825CD010;
	sub_825CC1E0(ctx, base);
	// stw r3,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x825cdab4
	if (ctx.cr0.lt) goto loc_825CDAB4;
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// addi r28,r28,-16
	ctx.r28.s64 = ctx.r28.s64 + -16;
	// bge 0x825ccffc
	if (!ctx.cr0.lt) goto loc_825CCFFC;
	// li r27,3
	ctx.r27.s64 = 3;
	// addi r28,r1,1008
	ctx.r28.s64 = ctx.r1.s64 + 1008;
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// addi r31,r29,760
	ctx.r31.s64 = ctx.r29.s64 + 760;
loc_825CD03C:
	// addi r6,r31,-4
	ctx.r6.s64 = ctx.r31.s64 + -4;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r28,-16
	ctx.r3.s64 = ctx.r28.s64 + -16;
	// bl 0x825cc1e0
	ctx.lr = 0x825CD050;
	sub_825CC1E0(ctx, base);
	// stw r3,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x825cdab4
	if (ctx.cr0.lt) goto loc_825CDAB4;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825cc1e0
	ctx.lr = 0x825CD070;
	sub_825CC1E0(ctx, base);
	// stw r3,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x825cdab4
	if (ctx.cr0.lt) goto loc_825CDAB4;
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// addi r28,r28,-32
	ctx.r28.s64 = ctx.r28.s64 + -32;
	// bge 0x825cd03c
	if (!ctx.cr0.lt) goto loc_825CD03C;
	// lis r6,26
	ctx.r6.s64 = 1703936;
	// stb r27,549(r1)
	REX_STORE_U8(ctx.r1.u32 + 549, ctx.r27.u8);
	// lis r10,42
	ctx.r10.s64 = 2752512;
	// stb r30,597(r1)
	REX_STORE_U8(ctx.r1.u32 + 597, ctx.r30.u8);
	// lis r8,42
	ctx.r8.s64 = 2752512;
	// stb r30,609(r1)
	REX_STORE_U8(ctx.r1.u32 + 609, ctx.r30.u8);
	// lis r7,26
	ctx.r7.s64 = 1703936;
	// stb r30,621(r1)
	REX_STORE_U8(ctx.r1.u32 + 621, ctx.r30.u8);
	// lis r24,24
	ctx.r24.s64 = 1572864;
	// stb r30,633(r1)
	REX_STORE_U8(ctx.r1.u32 + 633, ctx.r30.u8);
	// lis r11,44
	ctx.r11.s64 = 2883584;
	// ori r5,r6,8838
	ctx.r5.u64 = ctx.r6.u64 | 8838;
	// ori r28,r10,9145
	ctx.r28.u64 = ctx.r10.u64 | 9145;
	// ori r3,r8,8592
	ctx.r3.u64 = ctx.r8.u64 | 8592;
	// stw r5,568(r1)
	REX_STORE_U32(ctx.r1.u32 + 568, ctx.r5.u32);
	// ori r4,r7,8326
	ctx.r4.u64 = ctx.r7.u64 | 8326;
	// stw r28,532(r1)
	REX_STORE_U32(ctx.r1.u32 + 532, ctx.r28.u32);
	// ori r6,r24,10374
	ctx.r6.u64 = ctx.r24.u64 | 10374;
	// stw r3,544(r1)
	REX_STORE_U32(ctx.r1.u32 + 544, ctx.r3.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r4,556(r1)
	REX_STORE_U32(ctx.r1.u32 + 556, ctx.r4.u32);
	// ori r11,r11,9055
	ctx.r11.u64 = ctx.r11.u64 | 9055;
	// stw r6,580(r1)
	REX_STORE_U32(ctx.r1.u32 + 580, ctx.r6.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// sth r31,528(r1)
	REX_STORE_U16(ctx.r1.u32 + 528, ctx.r31.u16);
	// li r15,2
	ctx.r15.s64 = 2;
	// sth r31,530(r1)
	REX_STORE_U16(ctx.r1.u32 + 530, ctx.r31.u16);
	// li r17,12
	ctx.r17.s64 = 12;
	// stb r31,536(r1)
	REX_STORE_U8(ctx.r1.u32 + 536, ctx.r31.u8);
	// li r16,16
	ctx.r16.s64 = 16;
	// stb r31,537(r1)
	REX_STORE_U8(ctx.r1.u32 + 537, ctx.r31.u8);
	// li r18,20
	ctx.r18.s64 = 20;
	// stb r31,538(r1)
	REX_STORE_U8(ctx.r1.u32 + 538, ctx.r31.u8);
	// li r19,24
	ctx.r19.s64 = 24;
	// sth r31,540(r1)
	REX_STORE_U16(ctx.r1.u32 + 540, ctx.r31.u16);
	// li r20,10
	ctx.r20.s64 = 10;
	// sth r17,542(r1)
	REX_STORE_U16(ctx.r1.u32 + 542, ctx.r17.u16);
	// li r21,28
	ctx.r21.s64 = 28;
	// stb r31,548(r1)
	REX_STORE_U8(ctx.r1.u32 + 548, ctx.r31.u8);
	// li r7,32
	ctx.r7.s64 = 32;
	// stb r31,550(r1)
	REX_STORE_U8(ctx.r1.u32 + 550, ctx.r31.u8);
	// lis r10,26
	ctx.r10.s64 = 1703936;
	// sth r31,552(r1)
	REX_STORE_U16(ctx.r1.u32 + 552, ctx.r31.u16);
	// li r8,36
	ctx.r8.s64 = 36;
	// sth r16,554(r1)
	REX_STORE_U16(ctx.r1.u32 + 554, ctx.r16.u16);
	// li r24,40
	ctx.r24.s64 = 40;
	// stb r31,560(r1)
	REX_STORE_U8(ctx.r1.u32 + 560, ctx.r31.u8);
	// stb r9,561(r1)
	REX_STORE_U8(ctx.r1.u32 + 561, ctx.r9.u8);
	// ori r10,r10,9126
	ctx.r10.u64 = ctx.r10.u64 | 9126;
	// stb r31,562(r1)
	REX_STORE_U8(ctx.r1.u32 + 562, ctx.r31.u8);
	// li r23,44
	ctx.r23.s64 = 44;
	// sth r31,564(r1)
	REX_STORE_U16(ctx.r1.u32 + 564, ctx.r31.u16);
	// li r14,48
	ctx.r14.s64 = 48;
	// sth r18,566(r1)
	REX_STORE_U16(ctx.r1.u32 + 566, ctx.r18.u16);
	// stb r31,572(r1)
	REX_STORE_U8(ctx.r1.u32 + 572, ctx.r31.u8);
	// stb r15,573(r1)
	REX_STORE_U8(ctx.r1.u32 + 573, ctx.r15.u8);
	// stb r31,574(r1)
	REX_STORE_U8(ctx.r1.u32 + 574, ctx.r31.u8);
	// sth r31,576(r1)
	REX_STORE_U16(ctx.r1.u32 + 576, ctx.r31.u16);
	// sth r19,578(r1)
	REX_STORE_U16(ctx.r1.u32 + 578, ctx.r19.u16);
	// stb r31,584(r1)
	REX_STORE_U8(ctx.r1.u32 + 584, ctx.r31.u8);
	// stb r20,585(r1)
	REX_STORE_U8(ctx.r1.u32 + 585, ctx.r20.u8);
	// stb r31,586(r1)
	REX_STORE_U8(ctx.r1.u32 + 586, ctx.r31.u8);
	// sth r31,588(r1)
	REX_STORE_U16(ctx.r1.u32 + 588, ctx.r31.u16);
	// sth r21,590(r1)
	REX_STORE_U16(ctx.r1.u32 + 590, ctx.r21.u16);
	// stw r11,592(r1)
	REX_STORE_U32(ctx.r1.u32 + 592, ctx.r11.u32);
	// stb r31,596(r1)
	REX_STORE_U8(ctx.r1.u32 + 596, ctx.r31.u8);
	// stb r31,598(r1)
	REX_STORE_U8(ctx.r1.u32 + 598, ctx.r31.u8);
	// sth r31,600(r1)
	REX_STORE_U16(ctx.r1.u32 + 600, ctx.r31.u16);
	// sth r7,602(r1)
	REX_STORE_U16(ctx.r1.u32 + 602, ctx.r7.u16);
	// stw r11,604(r1)
	REX_STORE_U32(ctx.r1.u32 + 604, ctx.r11.u32);
	// stb r31,608(r1)
	REX_STORE_U8(ctx.r1.u32 + 608, ctx.r31.u8);
	// stb r9,610(r1)
	REX_STORE_U8(ctx.r1.u32 + 610, ctx.r9.u8);
	// sth r31,612(r1)
	REX_STORE_U16(ctx.r1.u32 + 612, ctx.r31.u16);
	// sth r8,614(r1)
	REX_STORE_U16(ctx.r1.u32 + 614, ctx.r8.u16);
	// stw r11,616(r1)
	REX_STORE_U32(ctx.r1.u32 + 616, ctx.r11.u32);
	// stb r31,620(r1)
	REX_STORE_U8(ctx.r1.u32 + 620, ctx.r31.u8);
	// stb r15,622(r1)
	REX_STORE_U8(ctx.r1.u32 + 622, ctx.r15.u8);
	// sth r31,624(r1)
	REX_STORE_U16(ctx.r1.u32 + 624, ctx.r31.u16);
	// sth r24,626(r1)
	REX_STORE_U16(ctx.r1.u32 + 626, ctx.r24.u16);
	// stw r11,628(r1)
	REX_STORE_U32(ctx.r1.u32 + 628, ctx.r11.u32);
	// stb r31,632(r1)
	REX_STORE_U8(ctx.r1.u32 + 632, ctx.r31.u8);
	// li r8,4
	ctx.r8.s64 = 4;
	// std r29,224(r1)
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.r29.u64);
	// sth r23,638(r1)
	REX_STORE_U16(ctx.r1.u32 + 638, ctx.r23.u16);
	// li r22,7
	ctx.r22.s64 = 7;
	// stb r8,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// li r23,8
	ctx.r23.s64 = 8;
	// li r24,255
	ctx.r24.s64 = 255;
	// stb r27,634(r1)
	REX_STORE_U8(ctx.r1.u32 + 634, ctx.r27.u8);
	// li r8,-1
	ctx.r8.s64 = -1;
	// sth r31,636(r1)
	REX_STORE_U16(ctx.r1.u32 + 636, ctx.r31.u16);
	// stw r11,640(r1)
	REX_STORE_U32(ctx.r1.u32 + 640, ctx.r11.u32);
	// stb r31,644(r1)
	REX_STORE_U8(ctx.r1.u32 + 644, ctx.r31.u8);
	// stb r30,645(r1)
	REX_STORE_U8(ctx.r1.u32 + 645, ctx.r30.u8);
	// sth r31,648(r1)
	REX_STORE_U16(ctx.r1.u32 + 648, ctx.r31.u16);
	// sth r14,650(r1)
	REX_STORE_U16(ctx.r1.u32 + 650, ctx.r14.u16);
	// stw r11,652(r1)
	REX_STORE_U32(ctx.r1.u32 + 652, ctx.r11.u32);
	// stb r31,656(r1)
	REX_STORE_U8(ctx.r1.u32 + 656, ctx.r31.u8);
	// stb r30,657(r1)
	REX_STORE_U8(ctx.r1.u32 + 657, ctx.r30.u8);
	// stb r30,658(r1)
	REX_STORE_U8(ctx.r1.u32 + 658, ctx.r30.u8);
	// sth r9,660(r1)
	REX_STORE_U16(ctx.r1.u32 + 660, ctx.r9.u16);
	// sth r31,662(r1)
	REX_STORE_U16(ctx.r1.u32 + 662, ctx.r31.u16);
	// stw r10,664(r1)
	REX_STORE_U32(ctx.r1.u32 + 664, ctx.r10.u32);
	// stb r31,668(r1)
	REX_STORE_U8(ctx.r1.u32 + 668, ctx.r31.u8);
	// stb r30,669(r1)
	REX_STORE_U8(ctx.r1.u32 + 669, ctx.r30.u8);
	// stb r26,670(r1)
	REX_STORE_U8(ctx.r1.u32 + 670, ctx.r26.u8);
	// sth r9,672(r1)
	REX_STORE_U16(ctx.r1.u32 + 672, ctx.r9.u16);
	// sth r16,674(r1)
	REX_STORE_U16(ctx.r1.u32 + 674, ctx.r16.u16);
	// lbz r29,80(r1)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// stw r10,676(r1)
	REX_STORE_U32(ctx.r1.u32 + 676, ctx.r10.u32);
	// stb r31,680(r1)
	REX_STORE_U8(ctx.r1.u32 + 680, ctx.r31.u8);
	// stb r30,681(r1)
	REX_STORE_U8(ctx.r1.u32 + 681, ctx.r30.u8);
	// stb r22,682(r1)
	REX_STORE_U8(ctx.r1.u32 + 682, ctx.r22.u8);
	// stb r29,646(r1)
	REX_STORE_U8(ctx.r1.u32 + 646, ctx.r29.u8);
	// sth r9,684(r1)
	REX_STORE_U16(ctx.r1.u32 + 684, ctx.r9.u16);
	// sth r7,686(r1)
	REX_STORE_U16(ctx.r1.u32 + 686, ctx.r7.u16);
	// stw r10,688(r1)
	REX_STORE_U32(ctx.r1.u32 + 688, ctx.r10.u32);
	// stb r31,692(r1)
	REX_STORE_U8(ctx.r1.u32 + 692, ctx.r31.u8);
	// stb r30,693(r1)
	REX_STORE_U8(ctx.r1.u32 + 693, ctx.r30.u8);
	// stb r23,694(r1)
	REX_STORE_U8(ctx.r1.u32 + 694, ctx.r23.u8);
	// sth r24,696(r1)
	REX_STORE_U16(ctx.r1.u32 + 696, ctx.r24.u16);
	// sth r31,698(r1)
	REX_STORE_U16(ctx.r1.u32 + 698, ctx.r31.u16);
	// stw r8,700(r1)
	REX_STORE_U32(ctx.r1.u32 + 700, ctx.r8.u32);
	// stb r31,704(r1)
	REX_STORE_U8(ctx.r1.u32 + 704, ctx.r31.u8);
	// stb r31,705(r1)
	REX_STORE_U8(ctx.r1.u32 + 705, ctx.r31.u8);
	// stb r31,706(r1)
	REX_STORE_U8(ctx.r1.u32 + 706, ctx.r31.u8);
	// sth r31,384(r1)
	REX_STORE_U16(ctx.r1.u32 + 384, ctx.r31.u16);
	// sth r31,386(r1)
	REX_STORE_U16(ctx.r1.u32 + 386, ctx.r31.u16);
	// stw r28,388(r1)
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r28.u32);
	// stb r31,392(r1)
	REX_STORE_U8(ctx.r1.u32 + 392, ctx.r31.u8);
	// stb r31,393(r1)
	REX_STORE_U8(ctx.r1.u32 + 393, ctx.r31.u8);
	// stb r31,394(r1)
	REX_STORE_U8(ctx.r1.u32 + 394, ctx.r31.u8);
	// sth r31,396(r1)
	REX_STORE_U16(ctx.r1.u32 + 396, ctx.r31.u16);
	// sth r17,398(r1)
	REX_STORE_U16(ctx.r1.u32 + 398, ctx.r17.u16);
	// stw r3,400(r1)
	REX_STORE_U32(ctx.r1.u32 + 400, ctx.r3.u32);
	// stb r31,404(r1)
	REX_STORE_U8(ctx.r1.u32 + 404, ctx.r31.u8);
	// stb r27,405(r1)
	REX_STORE_U8(ctx.r1.u32 + 405, ctx.r27.u8);
	// stb r31,406(r1)
	REX_STORE_U8(ctx.r1.u32 + 406, ctx.r31.u8);
	// sth r31,408(r1)
	REX_STORE_U16(ctx.r1.u32 + 408, ctx.r31.u16);
	// sth r16,410(r1)
	REX_STORE_U16(ctx.r1.u32 + 410, ctx.r16.u16);
	// stw r4,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r4.u32);
	// stb r31,416(r1)
	REX_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// stb r9,417(r1)
	REX_STORE_U8(ctx.r1.u32 + 417, ctx.r9.u8);
	// stb r31,418(r1)
	REX_STORE_U8(ctx.r1.u32 + 418, ctx.r31.u8);
	// sth r31,420(r1)
	REX_STORE_U16(ctx.r1.u32 + 420, ctx.r31.u16);
	// sth r18,422(r1)
	REX_STORE_U16(ctx.r1.u32 + 422, ctx.r18.u16);
	// stw r5,424(r1)
	REX_STORE_U32(ctx.r1.u32 + 424, ctx.r5.u32);
	// stb r31,428(r1)
	REX_STORE_U8(ctx.r1.u32 + 428, ctx.r31.u8);
	// stb r15,429(r1)
	REX_STORE_U8(ctx.r1.u32 + 429, ctx.r15.u8);
	// stb r31,430(r1)
	REX_STORE_U8(ctx.r1.u32 + 430, ctx.r31.u8);
	// sth r31,432(r1)
	REX_STORE_U16(ctx.r1.u32 + 432, ctx.r31.u16);
	// sth r19,434(r1)
	REX_STORE_U16(ctx.r1.u32 + 434, ctx.r19.u16);
	// stw r6,436(r1)
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r6.u32);
	// stb r31,440(r1)
	REX_STORE_U8(ctx.r1.u32 + 440, ctx.r31.u8);
	// stb r20,441(r1)
	REX_STORE_U8(ctx.r1.u32 + 441, ctx.r20.u8);
	// stb r31,442(r1)
	REX_STORE_U8(ctx.r1.u32 + 442, ctx.r31.u8);
	// sth r31,444(r1)
	REX_STORE_U16(ctx.r1.u32 + 444, ctx.r31.u16);
	// sth r21,446(r1)
	REX_STORE_U16(ctx.r1.u32 + 446, ctx.r21.u16);
	// stw r11,448(r1)
	REX_STORE_U32(ctx.r1.u32 + 448, ctx.r11.u32);
	// stb r31,452(r1)
	REX_STORE_U8(ctx.r1.u32 + 452, ctx.r31.u8);
	// stb r30,453(r1)
	REX_STORE_U8(ctx.r1.u32 + 453, ctx.r30.u8);
	// stb r31,454(r1)
	REX_STORE_U8(ctx.r1.u32 + 454, ctx.r31.u8);
	// li r14,36
	ctx.r14.s64 = 36;
	// sth r31,456(r1)
	REX_STORE_U16(ctx.r1.u32 + 456, ctx.r31.u16);
	// sth r7,458(r1)
	REX_STORE_U16(ctx.r1.u32 + 458, ctx.r7.u16);
	// stw r11,460(r1)
	REX_STORE_U32(ctx.r1.u32 + 460, ctx.r11.u32);
	// stb r31,464(r1)
	REX_STORE_U8(ctx.r1.u32 + 464, ctx.r31.u8);
	// stb r30,465(r1)
	REX_STORE_U8(ctx.r1.u32 + 465, ctx.r30.u8);
	// stb r9,466(r1)
	REX_STORE_U8(ctx.r1.u32 + 466, ctx.r9.u8);
	// sth r31,468(r1)
	REX_STORE_U16(ctx.r1.u32 + 468, ctx.r31.u16);
	// sth r14,470(r1)
	REX_STORE_U16(ctx.r1.u32 + 470, ctx.r14.u16);
	// stw r11,472(r1)
	REX_STORE_U32(ctx.r1.u32 + 472, ctx.r11.u32);
	// stb r31,476(r1)
	REX_STORE_U8(ctx.r1.u32 + 476, ctx.r31.u8);
	// stb r30,477(r1)
	REX_STORE_U8(ctx.r1.u32 + 477, ctx.r30.u8);
	// stb r15,478(r1)
	REX_STORE_U8(ctx.r1.u32 + 478, ctx.r15.u8);
	// sth r9,480(r1)
	REX_STORE_U16(ctx.r1.u32 + 480, ctx.r9.u16);
	// sth r31,482(r1)
	REX_STORE_U16(ctx.r1.u32 + 482, ctx.r31.u16);
	// stw r10,484(r1)
	REX_STORE_U32(ctx.r1.u32 + 484, ctx.r10.u32);
	// stb r31,488(r1)
	REX_STORE_U8(ctx.r1.u32 + 488, ctx.r31.u8);
	// stb r30,489(r1)
	REX_STORE_U8(ctx.r1.u32 + 489, ctx.r30.u8);
	// stb r26,490(r1)
	REX_STORE_U8(ctx.r1.u32 + 490, ctx.r26.u8);
	// sth r9,492(r1)
	REX_STORE_U16(ctx.r1.u32 + 492, ctx.r9.u16);
	// sth r16,494(r1)
	REX_STORE_U16(ctx.r1.u32 + 494, ctx.r16.u16);
	// stw r10,496(r1)
	REX_STORE_U32(ctx.r1.u32 + 496, ctx.r10.u32);
	// stb r31,500(r1)
	REX_STORE_U8(ctx.r1.u32 + 500, ctx.r31.u8);
	// stb r30,501(r1)
	REX_STORE_U8(ctx.r1.u32 + 501, ctx.r30.u8);
	// stb r22,502(r1)
	REX_STORE_U8(ctx.r1.u32 + 502, ctx.r22.u8);
	// sth r9,504(r1)
	REX_STORE_U16(ctx.r1.u32 + 504, ctx.r9.u16);
	// sth r7,506(r1)
	REX_STORE_U16(ctx.r1.u32 + 506, ctx.r7.u16);
	// stw r10,508(r1)
	REX_STORE_U32(ctx.r1.u32 + 508, ctx.r10.u32);
	// stb r31,512(r1)
	REX_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// stb r30,513(r1)
	REX_STORE_U8(ctx.r1.u32 + 513, ctx.r30.u8);
	// stb r23,514(r1)
	REX_STORE_U8(ctx.r1.u32 + 514, ctx.r23.u8);
	// sth r24,516(r1)
	REX_STORE_U16(ctx.r1.u32 + 516, ctx.r24.u16);
	// sth r31,518(r1)
	REX_STORE_U16(ctx.r1.u32 + 518, ctx.r31.u16);
	// stw r8,520(r1)
	REX_STORE_U32(ctx.r1.u32 + 520, ctx.r8.u32);
	// stb r31,524(r1)
	REX_STORE_U8(ctx.r1.u32 + 524, ctx.r31.u8);
	// stb r31,525(r1)
	REX_STORE_U8(ctx.r1.u32 + 525, ctx.r31.u8);
	// stb r31,526(r1)
	REX_STORE_U8(ctx.r1.u32 + 526, ctx.r31.u8);
	// sth r31,240(r1)
	REX_STORE_U16(ctx.r1.u32 + 240, ctx.r31.u16);
	// sth r31,242(r1)
	REX_STORE_U16(ctx.r1.u32 + 242, ctx.r31.u16);
	// stw r28,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r28.u32);
	// stb r31,248(r1)
	REX_STORE_U8(ctx.r1.u32 + 248, ctx.r31.u8);
	// stb r31,249(r1)
	REX_STORE_U8(ctx.r1.u32 + 249, ctx.r31.u8);
	// stb r31,250(r1)
	REX_STORE_U8(ctx.r1.u32 + 250, ctx.r31.u8);
	// sth r31,252(r1)
	REX_STORE_U16(ctx.r1.u32 + 252, ctx.r31.u16);
	// sth r17,254(r1)
	REX_STORE_U16(ctx.r1.u32 + 254, ctx.r17.u16);
	// stw r3,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r3.u32);
	// stb r31,260(r1)
	REX_STORE_U8(ctx.r1.u32 + 260, ctx.r31.u8);
	// stb r27,261(r1)
	REX_STORE_U8(ctx.r1.u32 + 261, ctx.r27.u8);
	// stb r31,262(r1)
	REX_STORE_U8(ctx.r1.u32 + 262, ctx.r31.u8);
	// sth r31,264(r1)
	REX_STORE_U16(ctx.r1.u32 + 264, ctx.r31.u16);
	// sth r16,266(r1)
	REX_STORE_U16(ctx.r1.u32 + 266, ctx.r16.u16);
	// stw r4,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r4.u32);
	// stb r31,272(r1)
	REX_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// stb r9,273(r1)
	REX_STORE_U8(ctx.r1.u32 + 273, ctx.r9.u8);
	// stb r31,274(r1)
	REX_STORE_U8(ctx.r1.u32 + 274, ctx.r31.u8);
	// sth r31,276(r1)
	REX_STORE_U16(ctx.r1.u32 + 276, ctx.r31.u16);
	// sth r18,278(r1)
	REX_STORE_U16(ctx.r1.u32 + 278, ctx.r18.u16);
	// stw r5,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r5.u32);
	// stb r31,284(r1)
	REX_STORE_U8(ctx.r1.u32 + 284, ctx.r31.u8);
	// stb r15,285(r1)
	REX_STORE_U8(ctx.r1.u32 + 285, ctx.r15.u8);
	// stb r31,286(r1)
	REX_STORE_U8(ctx.r1.u32 + 286, ctx.r31.u8);
	// sth r31,288(r1)
	REX_STORE_U16(ctx.r1.u32 + 288, ctx.r31.u16);
	// sth r19,290(r1)
	REX_STORE_U16(ctx.r1.u32 + 290, ctx.r19.u16);
	// stw r6,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r6.u32);
	// stb r31,296(r1)
	REX_STORE_U8(ctx.r1.u32 + 296, ctx.r31.u8);
	// stb r20,297(r1)
	REX_STORE_U8(ctx.r1.u32 + 297, ctx.r20.u8);
	// stb r31,298(r1)
	REX_STORE_U8(ctx.r1.u32 + 298, ctx.r31.u8);
	// sth r31,300(r1)
	REX_STORE_U16(ctx.r1.u32 + 300, ctx.r31.u16);
	// sth r21,302(r1)
	REX_STORE_U16(ctx.r1.u32 + 302, ctx.r21.u16);
	// stw r11,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r11.u32);
	// stb r31,308(r1)
	REX_STORE_U8(ctx.r1.u32 + 308, ctx.r31.u8);
	// stb r30,309(r1)
	REX_STORE_U8(ctx.r1.u32 + 309, ctx.r30.u8);
	// stb r31,310(r1)
	REX_STORE_U8(ctx.r1.u32 + 310, ctx.r31.u8);
	// sth r31,312(r1)
	REX_STORE_U16(ctx.r1.u32 + 312, ctx.r31.u16);
	// sth r7,314(r1)
	REX_STORE_U16(ctx.r1.u32 + 314, ctx.r7.u16);
	// stw r11,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r11.u32);
	// stb r31,320(r1)
	REX_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// stb r30,321(r1)
	REX_STORE_U8(ctx.r1.u32 + 321, ctx.r30.u8);
	// stb r9,322(r1)
	REX_STORE_U8(ctx.r1.u32 + 322, ctx.r9.u8);
	// sth r9,324(r1)
	REX_STORE_U16(ctx.r1.u32 + 324, ctx.r9.u16);
	// sth r31,326(r1)
	REX_STORE_U16(ctx.r1.u32 + 326, ctx.r31.u16);
	// stw r10,328(r1)
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r10.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stb r31,332(r1)
	REX_STORE_U8(ctx.r1.u32 + 332, ctx.r31.u8);
	// stb r30,333(r1)
	REX_STORE_U8(ctx.r1.u32 + 333, ctx.r30.u8);
	// stb r26,334(r1)
	REX_STORE_U8(ctx.r1.u32 + 334, ctx.r26.u8);
	// sth r9,336(r1)
	REX_STORE_U16(ctx.r1.u32 + 336, ctx.r9.u16);
	// sth r16,338(r1)
	REX_STORE_U16(ctx.r1.u32 + 338, ctx.r16.u16);
	// stw r10,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r10.u32);
	// stb r31,344(r1)
	REX_STORE_U8(ctx.r1.u32 + 344, ctx.r31.u8);
	// stb r30,345(r1)
	REX_STORE_U8(ctx.r1.u32 + 345, ctx.r30.u8);
	// stb r22,346(r1)
	REX_STORE_U8(ctx.r1.u32 + 346, ctx.r22.u8);
	// sth r9,348(r1)
	REX_STORE_U16(ctx.r1.u32 + 348, ctx.r9.u16);
	// sth r7,350(r1)
	REX_STORE_U16(ctx.r1.u32 + 350, ctx.r7.u16);
	// stw r10,352(r1)
	REX_STORE_U32(ctx.r1.u32 + 352, ctx.r10.u32);
	// stb r31,356(r1)
	REX_STORE_U8(ctx.r1.u32 + 356, ctx.r31.u8);
	// stb r30,357(r1)
	REX_STORE_U8(ctx.r1.u32 + 357, ctx.r30.u8);
	// stb r23,358(r1)
	REX_STORE_U8(ctx.r1.u32 + 358, ctx.r23.u8);
	// sth r24,360(r1)
	REX_STORE_U16(ctx.r1.u32 + 360, ctx.r24.u16);
	// sth r31,362(r1)
	REX_STORE_U16(ctx.r1.u32 + 362, ctx.r31.u16);
	// stw r8,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r8.u32);
	// stb r31,368(r1)
	REX_STORE_U8(ctx.r1.u32 + 368, ctx.r31.u8);
	// stb r31,369(r1)
	REX_STORE_U8(ctx.r1.u32 + 369, ctx.r31.u8);
	// stb r31,370(r1)
	REX_STORE_U8(ctx.r1.u32 + 370, ctx.r31.u8);
	// bl 0x822be008
	ctx.lr = 0x825CD4B8;
	sub_822BE008(ctx, base);
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// ld r29,224(r1)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + 224);
	// ori r28,r11,14
	ctx.r28.u64 = ctx.r11.u64 | 14;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// and. r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// blt 0x825cd9d4
	if (ctx.cr0.lt) goto loc_825CD9D4;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x822be008
	ctx.lr = 0x825CD4E4;
	sub_822BE008(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// blt 0x825cd9b0
	if (ctx.cr0.lt) goto loc_825CD9B0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x822be008
	ctx.lr = 0x825CD504;
	sub_822BE008(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// blt 0x825cd9b4
	if (ctx.cr0.lt) goto loc_825CD9B4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r27,r11,-28904
	ctx.r27.s64 = ctx.r11.s64 + -28904;
	// addi r3,r27,2136
	ctx.r3.s64 = ctx.r27.s64 + 2136;
	// bl 0x822bf750
	ctx.lr = 0x825CD52C;
	sub_822BF750(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// blt 0x825cd9b8
	if (ctx.cr0.lt) goto loc_825CD9B8;
	// addi r3,r27,9896
	ctx.r3.s64 = ctx.r27.s64 + 9896;
	// bl 0x822bf750
	ctx.lr = 0x825CD54C;
	sub_822BF750(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// blt 0x825cd9bc
	if (ctx.cr0.lt) goto loc_825CD9BC;
	// addi r3,r27,5784
	ctx.r3.s64 = ctx.r27.s64 + 5784;
	// bl 0x822bf750
	ctx.lr = 0x825CD56C;
	sub_822BF750(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r3,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// blt 0x825cd9bc
	if (ctx.cr0.lt) goto loc_825CD9BC;
	// addi r3,r27,15888
	ctx.r3.s64 = ctx.r27.s64 + 15888;
	// bl 0x822bf750
	ctx.lr = 0x825CD58C;
	sub_822BF750(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// blt 0x825cd9c0
	if (ctx.cr0.lt) goto loc_825CD9C0;
	// addi r3,r27,17000
	ctx.r3.s64 = ctx.r27.s64 + 17000;
	// bl 0x822bf750
	ctx.lr = 0x825CD5AC;
	sub_822BF750(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r3,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// blt 0x825cd9c0
	if (ctx.cr0.lt) goto loc_825CD9C0;
	// addi r3,r27,18112
	ctx.r3.s64 = ctx.r27.s64 + 18112;
	// bl 0x822bf750
	ctx.lr = 0x825CD5CC;
	sub_822BF750(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// stw r3,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r3.u32);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// blt 0x825cd9c0
	if (ctx.cr0.lt) goto loc_825CD9C0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822bf568
	ctx.lr = 0x825CD5F0;
	sub_822BF568(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r3,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// blt 0x825cd9c0
	if (ctx.cr0.lt) goto loc_825CD9C0;
	// addi r3,r27,7288
	ctx.r3.s64 = ctx.r27.s64 + 7288;
	// bl 0x822bf568
	ctx.lr = 0x825CD610;
	sub_822BF568(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r3,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// blt 0x825cd9c0
	if (ctx.cr0.lt) goto loc_825CD9C0;
	// addi r3,r27,3632
	ctx.r3.s64 = ctx.r27.s64 + 3632;
	// bl 0x822bf568
	ctx.lr = 0x825CD630;
	sub_822BF568(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// stw r3,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// blt 0x825cd9c0
	if (ctx.cr0.lt) goto loc_825CD9C0;
	// addi r3,r27,11512
	ctx.r3.s64 = ctx.r27.s64 + 11512;
	// bl 0x822bf568
	ctx.lr = 0x825CD654;
	sub_822BF568(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// stw r3,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// blt 0x825cd9c0
	if (ctx.cr0.lt) goto loc_825CD9C0;
	// addi r3,r27,13688
	ctx.r3.s64 = ctx.r27.s64 + 13688;
	// bl 0x822bf568
	ctx.lr = 0x825CD678;
	sub_822BF568(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// stw r3,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// blt 0x825cd9c0
	if (ctx.cr0.lt) goto loc_825CD9C0;
	// lis r8,11552
	ctx.r8.s64 = 757071872;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,330
	ctx.r8.u64 = ctx.r8.u64 | 330;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822b6ca8
	ctx.lr = 0x825CD6BC;
	sub_822B6CA8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// blt 0x825cd9c0
	if (ctx.cr0.lt) goto loc_825CD9C0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822b6af0
	ctx.lr = 0x825CD6E8;
	sub_822B6AF0(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// stw r31,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r11,-2
	ctx.r31.s64 = ctx.r11.s64 + -2;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lfs f30,5996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 5996);
	ctx.f30.f64 = double(temp.f32);
	// li r28,4095
	ctx.r28.s64 = 4095;
	// lfs f29,6004(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6004);
	ctx.f29.f64 = double(temp.f32);
	// lfs f27,15688(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15688);
	ctx.f27.f64 = double(temp.f32);
	// lfs f31,7024(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 7024);
	ctx.f31.f64 = double(temp.f32);
	// lfs f28,-9264(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -9264);
	ctx.f28.f64 = double(temp.f32);
loc_825CD720:
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82759c4c
	ctx.lr = 0x825CD72C;
	__imp__XeCryptRandom(ctx, base);
	// lwz r11,224(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// std r11,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// lfd f0,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmsubs f0,f0,f28,f31
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f28.f64, -ctx.f31.f64)));
	// fmuls f26,f0,f27
	ctx.f26.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x825de4e8
	ctx.lr = 0x825CD750;
	sub_825DE4E8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fmuls f26,f0,f30
	ctx.f26.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// bl 0x825de408
	ctx.lr = 0x825CD764;
	sub_825DE408(ctx, base);
	// fmuls f0,f26,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f26.f64 * ctx.f29.f64));
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.f0.u64);
	// lhz r11,166(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 166);
	// fadds f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.f0.u64);
	// lhz r10,166(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 166);
	// rlwinm r10,r10,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF00;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sthu r11,2(r31)
	ea = 2 + ctx.r31.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r31.u32 = ea;
	// bge 0x825cd720
	if (!ctx.cr0.lt) goto loc_825CD720;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822b50b0
	ctx.lr = 0x825CD7B0;
	sub_822B50B0(ctx, base);
	// lwz r10,156(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r9,144(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// addi r11,r29,72
	ctx.r11.s64 = ctx.r29.s64 + 72;
	// lwz r8,140(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// li r28,4
	ctx.r28.s64 = 4;
	// lwz r7,148(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// addi r31,r11,20
	ctx.r31.s64 = ctx.r11.s64 + 20;
	// stw r27,80(r29)
	REX_STORE_U32(ctx.r29.u32 + 80, ctx.r27.u32);
	// stw r26,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// stw r20,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r20.u32);
	// stw r24,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r24.u32);
	// stw r10,12(r29)
	REX_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
	// stw r26,16(r29)
	REX_STORE_U32(ctx.r29.u32 + 16, ctx.r26.u32);
	// stw r9,20(r29)
	REX_STORE_U32(ctx.r29.u32 + 20, ctx.r9.u32);
	// stw r24,24(r29)
	REX_STORE_U32(ctx.r29.u32 + 24, ctx.r24.u32);
	// stw r14,28(r29)
	REX_STORE_U32(ctx.r29.u32 + 28, ctx.r14.u32);
	// stw r21,32(r29)
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r21.u32);
	// stw r18,36(r29)
	REX_STORE_U32(ctx.r29.u32 + 36, ctx.r18.u32);
	// stw r24,40(r29)
	REX_STORE_U32(ctx.r29.u32 + 40, ctx.r24.u32);
	// stw r17,44(r29)
	REX_STORE_U32(ctx.r29.u32 + 44, ctx.r17.u32);
	// stw r21,48(r29)
	REX_STORE_U32(ctx.r29.u32 + 48, ctx.r21.u32);
	// stw r18,52(r29)
	REX_STORE_U32(ctx.r29.u32 + 52, ctx.r18.u32);
	// stw r24,56(r29)
	REX_STORE_U32(ctx.r29.u32 + 56, ctx.r24.u32);
	// stw r19,60(r29)
	REX_STORE_U32(ctx.r29.u32 + 60, ctx.r19.u32);
	// stw r23,64(r29)
	REX_STORE_U32(ctx.r29.u32 + 64, ctx.r23.u32);
	// stw r22,68(r29)
	REX_STORE_U32(ctx.r29.u32 + 68, ctx.r22.u32);
	// stw r8,72(r29)
	REX_STORE_U32(ctx.r29.u32 + 72, ctx.r8.u32);
	// stw r7,76(r29)
	REX_STORE_U32(ctx.r29.u32 + 76, ctx.r7.u32);
loc_825CD820:
	// lwz r3,-28(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -28);
	// bl 0x822b7510
	ctx.lr = 0x825CD828;
	sub_822B7510(ctx, base);
	// lwz r3,-24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -24);
	// bl 0x822b7510
	ctx.lr = 0x825CD830;
	sub_822B7510(ctx, base);
	// lwz r3,-20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -20);
	// bl 0x822b7510
	ctx.lr = 0x825CD838;
	sub_822B7510(ctx, base);
	// lwzu r3,-16(r31)
	ea = -16 + ctx.r31.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// bl 0x822b7510
	ctx.lr = 0x825CD840;
	sub_822B7510(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge 0x825cd820
	if (!ctx.cr0.lt) goto loc_825CD820;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r11,r11,-9280
	ctx.r11.s64 = ctx.r11.s64 + -9280;
	// addi r10,r10,-9296
	ctx.r10.s64 = ctx.r10.s64 + -9296;
	// addi r9,r9,-9312
	ctx.r9.s64 = ctx.r9.s64 + -9312;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// li r7,4288
	ctx.r7.s64 = 4288;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r8,-9328
	ctx.r8.s64 = ctx.r8.s64 + -9328;
	// lvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,4304
	ctx.r6.s64 = 4304;
	// lvx128 v61,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r29,4320
	ctx.r11.s64 = ctx.r29.s64 + 4320;
	// addi r10,r29,4336
	ctx.r10.s64 = ctx.r29.s64 + 4336;
	// lis r9,-32129
	ctx.r9.s64 = -2105606144;
	// stvx128 v63,r29,r7
	ea = (ctx.r29.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r29,r6
	ea = (ctx.r29.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,13444(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 13444);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x825cd8c0
	if (!ctx.cr6.eq) goto loc_825CD8C0;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_825CD8C0:
	// li r5,280
	ctx.r5.s64 = 280;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r29,84
	ctx.r3.s64 = ctx.r29.s64 + 84;
	// bl 0x825e3710
	ctx.lr = 0x825CD8D0;
	sub_825E3710(ctx, base);
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r29,644
	ctx.r3.s64 = ctx.r29.s64 + 644;
	// bl 0x825e3710
	ctx.lr = 0x825CD8E0;
	sub_825E3710(ctx, base);
	// li r5,280
	ctx.r5.s64 = 280;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r29,364
	ctx.r3.s64 = ctx.r29.s64 + 364;
	// bl 0x825e3710
	ctx.lr = 0x825CD8F0;
	sub_825E3710(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// sth r15,128(r29)
	REX_STORE_U16(ctx.r29.u32 + 128, ctx.r15.u16);
	// addi r9,r10,-26496
	ctx.r9.s64 = ctx.r10.s64 + -26496;
	// sth r15,130(r29)
	REX_STORE_U16(ctx.r29.u32 + 130, ctx.r15.u16);
	// addi r11,r11,-28208
	ctx.r11.s64 = ctx.r11.s64 + -28208;
	// sth r30,698(r29)
	REX_STORE_U16(ctx.r29.u32 + 698, ctx.r30.u16);
	// li r8,210
	ctx.r8.s64 = 210;
	// li r7,211
	ctx.r7.s64 = 211;
	// sth r8,688(r29)
	REX_STORE_U16(ctx.r29.u32 + 688, ctx.r8.u16);
	// li r6,212
	ctx.r6.s64 = 212;
	// lvx128 v61,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// sth r7,690(r29)
	REX_STORE_U16(ctx.r29.u32 + 690, ctx.r7.u16);
	// li r5,213
	ctx.r5.s64 = 213;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,215
	ctx.r9.s64 = 215;
	// sth r6,692(r29)
	REX_STORE_U16(ctx.r29.u32 + 692, ctx.r6.u16);
	// li r8,216
	ctx.r8.s64 = 216;
	// sth r5,696(r29)
	REX_STORE_U16(ctx.r29.u32 + 696, ctx.r5.u16);
	// li r7,217
	ctx.r7.s64 = 217;
	// sth r9,670(r29)
	REX_STORE_U16(ctx.r29.u32 + 670, ctx.r9.u16);
	// li r10,72
	ctx.r10.s64 = 72;
	// sth r8,672(r29)
	REX_STORE_U16(ctx.r29.u32 + 672, ctx.r8.u16);
	// li r11,214
	ctx.r11.s64 = 214;
	// sth r7,674(r29)
	REX_STORE_U16(ctx.r29.u32 + 674, ctx.r7.u16);
	// li r6,218
	ctx.r6.s64 = 218;
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// li r5,219
	ctx.r5.s64 = 219;
	// sth r11,694(r29)
	REX_STORE_U16(ctx.r29.u32 + 694, ctx.r11.u16);
	// li r4,220
	ctx.r4.s64 = 220;
	// sth r6,676(r29)
	REX_STORE_U16(ctx.r29.u32 + 676, ctx.r6.u16);
	// li r9,221
	ctx.r9.s64 = 221;
	// sth r5,678(r29)
	REX_STORE_U16(ctx.r29.u32 + 678, ctx.r5.u16);
	// li r8,222
	ctx.r8.s64 = 222;
	// sth r4,680(r29)
	REX_STORE_U16(ctx.r29.u32 + 680, ctx.r4.u16);
	// li r7,223
	ctx.r7.s64 = 223;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r29,4240
	ctx.r11.s64 = ctx.r29.s64 + 4240;
	// sth r9,682(r29)
	REX_STORE_U16(ctx.r29.u32 + 682, ctx.r9.u16);
	// sth r8,684(r29)
	REX_STORE_U16(ctx.r29.u32 + 684, ctx.r8.u16);
	// sth r7,686(r29)
	REX_STORE_U16(ctx.r29.u32 + 686, ctx.r7.u16);
loc_825CD994:
	// li r10,-16
	ctx.r10.s64 = -16;
	// stvx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r11,r16
	ea = (ctx.r11.u32 + ctx.r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// bdnz 0x825cd994
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825CD994;
	// b 0x825cd9c0
	goto loc_825CD9C0;
loc_825CD9B0:
	// lwz r21,216(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
loc_825CD9B4:
	// lwz r20,132(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_825CD9B8:
	// lwz r22,124(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
loc_825CD9BC:
	// lwz r24,84(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_825CD9C0:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x825cd9e4
	if (ctx.cr6.eq) goto loc_825CD9E4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822b8538
	ctx.lr = 0x825CD9D0;
	sub_822B8538(ctx, base);
	// b 0x825cd9e4
	goto loc_825CD9E4;
loc_825CD9D4:
	// lwz r21,216(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r20,132(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r22,124(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r24,84(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_825CD9E4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x825cd9f4
	if (ctx.cr6.eq) goto loc_825CD9F4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822b8538
	ctx.lr = 0x825CD9F4;
	sub_822B8538(ctx, base);
loc_825CD9F4:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x825cda04
	if (ctx.cr6.eq) goto loc_825CDA04;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822b8538
	ctx.lr = 0x825CDA04;
	sub_822B8538(ctx, base);
loc_825CDA04:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x825cda14
	if (ctx.cr6.eq) goto loc_825CDA14;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822b8538
	ctx.lr = 0x825CDA14;
	sub_822B8538(ctx, base);
loc_825CDA14:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x825cda24
	if (ctx.cr6.eq) goto loc_825CDA24;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822b8538
	ctx.lr = 0x825CDA24;
	sub_822B8538(ctx, base);
loc_825CDA24:
	// lwz r3,144(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825cda34
	if (ctx.cr6.eq) goto loc_825CDA34;
	// bl 0x822b8538
	ctx.lr = 0x825CDA34;
	sub_822B8538(ctx, base);
loc_825CDA34:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x825cda44
	if (ctx.cr6.eq) goto loc_825CDA44;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822b8538
	ctx.lr = 0x825CDA44;
	sub_822B8538(ctx, base);
loc_825CDA44:
	// lwz r3,140(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825cda54
	if (ctx.cr6.eq) goto loc_825CDA54;
	// bl 0x822b8538
	ctx.lr = 0x825CDA54;
	sub_822B8538(ctx, base);
loc_825CDA54:
	// lwz r3,156(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825cda64
	if (ctx.cr6.eq) goto loc_825CDA64;
	// bl 0x822b8538
	ctx.lr = 0x825CDA64;
	sub_822B8538(ctx, base);
loc_825CDA64:
	// lwz r3,148(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825cda74
	if (ctx.cr6.eq) goto loc_825CDA74;
	// bl 0x822b8538
	ctx.lr = 0x825CDA74;
	sub_822B8538(ctx, base);
loc_825CDA74:
	// lwz r3,180(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825cda84
	if (ctx.cr6.eq) goto loc_825CDA84;
	// bl 0x822b8538
	ctx.lr = 0x825CDA84;
	sub_822B8538(ctx, base);
loc_825CDA84:
	// lwz r3,200(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825cda94
	if (ctx.cr6.eq) goto loc_825CDA94;
	// bl 0x822b8538
	ctx.lr = 0x825CDA94;
	sub_822B8538(ctx, base);
loc_825CDA94:
	// lwz r3,220(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825cdaa4
	if (ctx.cr6.eq) goto loc_825CDAA4;
	// bl 0x822b8538
	ctx.lr = 0x825CDAA4;
	sub_822B8538(ctx, base);
loc_825CDAA4:
	// lwz r3,184(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825cdab4
	if (ctx.cr6.eq) goto loc_825CDAB4;
	// bl 0x822b8538
	ctx.lr = 0x825CDAB4;
	sub_822B8538(ctx, base);
loc_825CDAB4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x825e41ac
	ctx.lr = 0x825CDAC4;
	__restfpr_26(ctx, base);
	// b 0x825e3620
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82640340) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35f8
	ctx.lr = 0x82640348;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3756(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3756);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82640368
	if (ctx.cr6.eq) goto loc_82640368;
	// lwz r26,3780(r3)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 3780);
	// b 0x82640374
	goto loc_82640374;
loc_82640368:
	// lwz r10,3744(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 3744);
	// lwz r11,220(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 220);
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82640374:
	// lwz r9,3760(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 3760);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82640384
	if (!ctx.cr6.eq) goto loc_82640384;
	// lwz r9,3748(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 3748);
loc_82640384:
	// lwz r11,3764(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 3764);
	// lwz r10,224(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r27,r10,r9
	ctx.r27.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bne cr6,0x8264039c
	if (!ctx.cr6.eq) goto loc_8264039C;
	// lwz r11,3752(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 3752);
loc_8264039C:
	// lwz r9,3784(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 3784);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826403b4
	if (ctx.cr6.eq) goto loc_826403B4;
	// lwz r24,3796(r30)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r30.u32 + 3796);
	// b 0x826403c0
	goto loc_826403C0;
loc_826403B4:
	// lwz r9,3744(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 3744);
	// lwz r11,220(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 220);
	// add r24,r9,r11
	ctx.r24.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_826403C0:
	// lwz r9,3788(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 3788);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826403d0
	if (!ctx.cr6.eq) goto loc_826403D0;
	// lwz r9,3748(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 3748);
loc_826403D0:
	// lwz r11,3792(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 3792);
	// add r25,r10,r9
	ctx.r25.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826403e4
	if (!ctx.cr6.eq) goto loc_826403E4;
	// lwz r11,3752(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 3752);
loc_826403E4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8263fc40
	ctx.lr = 0x826403F4;
	sub_8263FC40(ctx, base);
	// lwz r5,360(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 360);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r30,2928
	ctx.r7.s64 = ctx.r30.s64 + 2928;
	// addi r6,r30,2940
	ctx.r6.s64 = ctx.r30.s64 + 2940;
	// stw r5,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// lwz r8,364(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 364);
	// lwz r10,20912(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20912);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lwz r8,368(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 368);
	// lwz r10,20912(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20912);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r9,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// lwz r10,372(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 372);
	// lwz r8,20912(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 20912);
	// mulli r9,r8,504
	ctx.r9.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(504));
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r5,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// lwz r10,252(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 252);
	// lwz r4,248(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 248);
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r3,r10,255
	ctx.r3.s64 = ctx.r10.s64 + 255;
	// stb r3,24(r31)
	REX_STORE_U8(ctx.r31.u32 + 24, ctx.r3.u8);
	// lwz r9,348(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 348);
	// stb r9,25(r31)
	REX_STORE_U8(ctx.r31.u32 + 25, ctx.r9.u8);
	// lwz r5,344(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 344);
	// stb r5,26(r31)
	REX_STORE_U8(ctx.r31.u32 + 26, ctx.r5.u8);
	// lwz r3,2400(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 2400);
	// stw r3,336(r31)
	REX_STORE_U32(ctx.r31.u32 + 336, ctx.r3.u32);
	// lwz r10,21192(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 21192);
	// stw r10,340(r31)
	REX_STORE_U32(ctx.r31.u32 + 340, ctx.r10.u32);
	// lwz r9,21212(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 21212);
	// stw r9,344(r31)
	REX_STORE_U32(ctx.r31.u32 + 344, ctx.r9.u32);
	// lwz r8,280(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 280);
	// stb r8,27(r31)
	REX_STORE_U8(ctx.r31.u32 + 27, ctx.r8.u8);
	// lwz r4,392(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 392);
	// stb r4,28(r31)
	REX_STORE_U8(ctx.r31.u32 + 28, ctx.r4.u8);
	// lwz r10,328(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 328);
	// stb r10,29(r31)
	REX_STORE_U8(ctx.r31.u32 + 29, ctx.r10.u8);
	// lwz r10,3984(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 3984);
	// addi r8,r10,-3
	ctx.r8.s64 = ctx.r10.s64 + -3;
	// addi r5,r10,-2
	ctx.r5.s64 = ctx.r10.s64 + -2;
	// cntlzw r4,r8
	ctx.r4.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r3,r5
	ctx.r3.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r10,r4,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// rlwinm r9,r3,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r8,30(r31)
	REX_STORE_U8(ctx.r31.u32 + 30, ctx.r8.u8);
	// lwz r5,2164(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 2164);
	// stw r5,356(r31)
	REX_STORE_U32(ctx.r31.u32 + 356, ctx.r5.u32);
	// lwz r4,2540(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 2540);
	// stw r4,360(r31)
	REX_STORE_U32(ctx.r31.u32 + 360, ctx.r4.u32);
	// sth r11,46(r31)
	REX_STORE_U16(ctx.r31.u32 + 46, ctx.r11.u16);
	// sth r11,44(r31)
	REX_STORE_U16(ctx.r31.u32 + 44, ctx.r11.u16);
	// lwz r3,416(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 416);
	// sth r3,62(r31)
	REX_STORE_U16(ctx.r31.u32 + 62, ctx.r3.u16);
	// lwz r9,420(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 420);
	// sth r9,64(r31)
	REX_STORE_U16(ctx.r31.u32 + 64, ctx.r9.u16);
	// lwz r5,424(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 424);
	// sth r5,66(r31)
	REX_STORE_U16(ctx.r31.u32 + 66, ctx.r5.u16);
	// lwz r3,428(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 428);
	// sth r3,68(r31)
	REX_STORE_U16(ctx.r31.u32 + 68, ctx.r3.u16);
	// lwz r9,408(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 408);
	// sth r9,70(r31)
	REX_STORE_U16(ctx.r31.u32 + 70, ctx.r9.u16);
	// lwz r5,412(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 412);
	// sth r5,72(r31)
	REX_STORE_U16(ctx.r31.u32 + 72, ctx.r5.u16);
	// lwz r3,14804(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 14804);
	// stb r3,32(r31)
	REX_STORE_U8(ctx.r31.u32 + 32, ctx.r3.u8);
	// lwz r9,1792(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 1792);
	// stb r9,31(r31)
	REX_STORE_U8(ctx.r31.u32 + 31, ctx.r9.u8);
	// lwz r5,336(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 336);
	// stb r5,34(r31)
	REX_STORE_U8(ctx.r31.u32 + 34, ctx.r5.u8);
	// lwz r3,6576(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 6576);
	// stw r3,388(r31)
	REX_STORE_U32(ctx.r31.u32 + 388, ctx.r3.u32);
	// lwz r10,14784(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 14784);
	// stw r10,392(r31)
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r10.u32);
	// stw r7,396(r31)
	REX_STORE_U32(ctx.r31.u32 + 396, ctx.r7.u32);
	// stw r6,400(r31)
	REX_STORE_U32(ctx.r31.u32 + 400, ctx.r6.u32);
	// lwz r9,2904(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 2904);
	// stw r9,404(r31)
	REX_STORE_U32(ctx.r31.u32 + 404, ctx.r9.u32);
	// lwz r8,2908(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 2908);
	// stw r8,408(r31)
	REX_STORE_U32(ctx.r31.u32 + 408, ctx.r8.u32);
	// lwz r7,2912(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 2912);
	// stw r7,412(r31)
	REX_STORE_U32(ctx.r31.u32 + 412, ctx.r7.u32);
	// lwz r6,2916(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 2916);
	// stw r6,416(r31)
	REX_STORE_U32(ctx.r31.u32 + 416, ctx.r6.u32);
	// lwz r5,2920(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 2920);
	// stw r5,420(r31)
	REX_STORE_U32(ctx.r31.u32 + 420, ctx.r5.u32);
	// lwz r4,2924(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 2924);
	// stw r4,424(r31)
	REX_STORE_U32(ctx.r31.u32 + 424, ctx.r4.u32);
	// lwz r3,1940(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 1940);
	// stw r3,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// lwz r10,2992(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 2992);
	// stb r10,33(r31)
	REX_STORE_U8(ctx.r31.u32 + 33, ctx.r10.u8);
	// lwz r8,1832(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 1832);
	// stw r8,444(r31)
	REX_STORE_U32(ctx.r31.u32 + 444, ctx.r8.u32);
	// lwz r7,456(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 456);
	// stb r11,49(r31)
	REX_STORE_U8(ctx.r31.u32 + 49, ctx.r11.u8);
	// stb r7,48(r31)
	REX_STORE_U8(ctx.r31.u32 + 48, ctx.r7.u8);
	// lwz r5,3928(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 3928);
	// stb r5,35(r31)
	REX_STORE_U8(ctx.r31.u32 + 35, ctx.r5.u8);
	// lwz r3,136(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// mulli r10,r3,-6
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(-6));
	// sth r10,368(r31)
	REX_STORE_U16(ctx.r31.u32 + 368, ctx.r10.u16);
	// lwz r8,136(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r7,370(r31)
	REX_STORE_U16(ctx.r31.u32 + 370, ctx.r7.u16);
	// lwz r5,136(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r4,372(r31)
	REX_STORE_U16(ctx.r31.u32 + 372, ctx.r4.u16);
	// lwz r10,136(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r9,374(r31)
	REX_STORE_U16(ctx.r31.u32 + 374, ctx.r9.u16);
	// lwz r7,136(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// neg r6,r7
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// sth r6,364(r31)
	REX_STORE_U16(ctx.r31.u32 + 364, ctx.r6.u16);
	// lwz r4,136(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// sth r4,366(r31)
	REX_STORE_U16(ctx.r31.u32 + 366, ctx.r4.u16);
	// lwz r10,20912(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20912);
	// lwz r9,204(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
	// stw r10,464(r31)
	REX_STORE_U32(ctx.r31.u32 + 464, ctx.r10.u32);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r7,468(r31)
	REX_STORE_U32(ctx.r31.u32 + 468, ctx.r7.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r6,204(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r5,472(r31)
	REX_STORE_U32(ctx.r31.u32 + 472, ctx.r5.u32);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r3,476(r31)
	REX_STORE_U32(ctx.r31.u32 + 476, ctx.r3.u32);
	// lwz r10,20912(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20912);
	// lwz r9,208(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 208);
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r7,r10,r27
	ctx.r7.u64 = ctx.r10.u64 + ctx.r27.u64;
	// stw r7,480(r31)
	REX_STORE_U32(ctx.r31.u32 + 480, ctx.r7.u32);
	// lwz r6,20912(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 20912);
	// lwz r5,208(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 208);
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// mullw r10,r4,r6
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// add r3,r10,r28
	ctx.r3.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r3,484(r31)
	REX_STORE_U32(ctx.r31.u32 + 484, ctx.r3.u32);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// lwz r8,20912(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 20912);
	// mullw r10,r9,r8
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// stw r10,512(r31)
	REX_STORE_U32(ctx.r31.u32 + 512, ctx.r10.u32);
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
	// lwz r8,512(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 512);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r7,516(r31)
	REX_STORE_U32(ctx.r31.u32 + 516, ctx.r7.u32);
	// lwz r6,204(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r5,520(r31)
	REX_STORE_U32(ctx.r31.u32 + 520, ctx.r5.u32);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r3,524(r31)
	REX_STORE_U32(ctx.r31.u32 + 524, ctx.r3.u32);
	// lwz r10,20912(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20912);
	// lwz r9,208(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 208);
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r7,r10,r25
	ctx.r7.u64 = ctx.r10.u64 + ctx.r25.u64;
	// stw r7,528(r31)
	REX_STORE_U32(ctx.r31.u32 + 528, ctx.r7.u32);
	// lwz r4,20912(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 20912);
	// lwz r6,208(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 208);
	// srawi r5,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 1;
	// mullw r10,r5,r4
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// add r3,r10,r29
	ctx.r3.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r3,532(r31)
	REX_STORE_U32(ctx.r31.u32 + 532, ctx.r3.u32);
	// lwz r10,21928(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 21928);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82640774
	if (!ctx.cr6.eq) goto loc_82640774;
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// lwz r9,20912(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 20912);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// mullw r10,r8,r9
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
	// stw r10,488(r31)
	REX_STORE_U32(ctx.r31.u32 + 488, ctx.r10.u32);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r7,492(r31)
	REX_STORE_U32(ctx.r31.u32 + 492, ctx.r7.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r6,204(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r5,496(r31)
	REX_STORE_U32(ctx.r31.u32 + 496, ctx.r5.u32);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r3,500(r31)
	REX_STORE_U32(ctx.r31.u32 + 500, ctx.r3.u32);
	// lwz r9,20912(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 20912);
	// lwz r10,208(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 208);
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// xori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 ^ 1;
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r6,r10,r27
	ctx.r6.u64 = ctx.r10.u64 + ctx.r27.u64;
	// stw r6,504(r31)
	REX_STORE_U32(ctx.r31.u32 + 504, ctx.r6.u32);
	// lwz r3,20912(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 20912);
	// lwz r5,208(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 208);
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// xori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 ^ 1;
	// mullw r10,r4,r10
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// add r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r9,508(r31)
	REX_STORE_U32(ctx.r31.u32 + 508, ctx.r9.u32);
	// b 0x826408b4
	goto loc_826408B4;
loc_82640774:
	// lwz r10,284(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 284);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8264080c
	if (!ctx.cr6.eq) goto loc_8264080C;
	// lwz r10,20952(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20952);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8264080c
	if (ctx.cr6.eq) goto loc_8264080C;
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r10,488(r31)
	REX_STORE_U32(ctx.r31.u32 + 488, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,492(r31)
	REX_STORE_U32(ctx.r31.u32 + 492, ctx.r9.u32);
	// lwz r8,488(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 488);
	// lwz r7,204(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r6,496(r31)
	REX_STORE_U32(ctx.r31.u32 + 496, ctx.r6.u32);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r4,500(r31)
	REX_STORE_U32(ctx.r31.u32 + 500, ctx.r4.u32);
	// lwz r3,208(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r9,20912(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 20912);
	// xori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 ^ 1;
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r7,r10,r27
	ctx.r7.u64 = ctx.r10.u64 + ctx.r27.u64;
	// stw r7,504(r31)
	REX_STORE_U32(ctx.r31.u32 + 504, ctx.r7.u32);
	// lwz r5,208(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 208);
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// lwz r6,20912(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 20912);
	// xori r3,r6,1
	ctx.r3.u64 = ctx.r6.u64 ^ 1;
	// mullw r10,r4,r3
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r10,508(r31)
	REX_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// b 0x826408b4
	goto loc_826408B4;
loc_8264080C:
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// lwz r9,20912(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 20912);
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// lwz r10,3744(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 3744);
	// lwz r8,220(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 220);
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// stw r10,488(r31)
	REX_STORE_U32(ctx.r31.u32 + 488, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r6,492(r31)
	REX_STORE_U32(ctx.r31.u32 + 492, ctx.r6.u32);
	// lwz r8,488(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 488);
	// lwz r5,204(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r4,496(r31)
	REX_STORE_U32(ctx.r31.u32 + 496, ctx.r4.u32);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r10,500(r31)
	REX_STORE_U32(ctx.r31.u32 + 500, ctx.r10.u32);
	// lwz r9,208(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 208);
	// srawi r6,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 1;
	// lwz r8,20912(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 20912);
	// lwz r10,3748(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 3748);
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// lwz r8,224(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 224);
	// mullw r9,r6,r7
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r5,504(r31)
	REX_STORE_U32(ctx.r31.u32 + 504, ctx.r5.u32);
	// lwz r10,3752(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 3752);
	// lwz r8,224(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 224);
	// lwz r4,208(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r9,20912(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 20912);
	// xori r7,r9,1
	ctx.r7.u64 = ctx.r9.u64 ^ 1;
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// mullw r9,r3,r7
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r6,508(r31)
	REX_STORE_U32(ctx.r31.u32 + 508, ctx.r6.u32);
loc_826408B4:
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r6,20912(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 20912);
	// srawi r5,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 1;
	// mullw r10,r5,r6
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// stw r10,536(r31)
	REX_STORE_U32(ctx.r31.u32 + 536, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r4,540(r31)
	REX_STORE_U32(ctx.r31.u32 + 540, ctx.r4.u32);
	// lwz r3,204(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r8,536(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 536);
	// stw r10,544(r31)
	REX_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r8,548(r31)
	REX_STORE_U32(ctx.r31.u32 + 548, ctx.r8.u32);
	// lwz r5,208(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 208);
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// lwz r6,20912(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 20912);
	// xori r3,r6,1
	ctx.r3.u64 = ctx.r6.u64 ^ 1;
	// mullw r10,r4,r3
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// stw r10,552(r31)
	REX_STORE_U32(ctx.r31.u32 + 552, ctx.r10.u32);
	// lwz r9,208(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 208);
	// srawi r5,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 1;
	// lwz r8,20912(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 20912);
	// xori r6,r8,1
	ctx.r6.u64 = ctx.r8.u64 ^ 1;
	// mullw r10,r5,r6
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r4,556(r31)
	REX_STORE_U32(ctx.r31.u32 + 556, ctx.r4.u32);
	// sth r7,1176(r31)
	REX_STORE_U16(ctx.r31.u32 + 1176, ctx.r7.u16);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// addi r3,r10,32
	ctx.r3.s64 = ctx.r10.s64 + 32;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r9,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 6;
	// sth r9,1178(r31)
	REX_STORE_U16(ctx.r31.u32 + 1178, ctx.r9.u16);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r5,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 6;
	// sth r5,1180(r31)
	REX_STORE_U16(ctx.r31.u32 + 1180, ctx.r5.u16);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// srawi r9,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 6;
	// sth r9,1182(r31)
	REX_STORE_U16(ctx.r31.u32 + 1182, ctx.r9.u16);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r5,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 6;
	// sth r5,1184(r31)
	REX_STORE_U16(ctx.r31.u32 + 1184, ctx.r5.u16);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// srawi r9,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 6;
	// sth r9,1186(r31)
	REX_STORE_U16(ctx.r31.u32 + 1186, ctx.r9.u16);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r10,128
	ctx.r6.s64 = ctx.r10.s64 + 128;
	// srawi r5,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 6;
	// sth r5,1188(r31)
	REX_STORE_U16(ctx.r31.u32 + 1188, ctx.r5.u16);
	// lwz r3,204(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// mulli r10,r3,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(28));
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// srawi r8,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 6;
	// li r10,16
	ctx.r10.s64 = 16;
	// sth r8,1190(r31)
	REX_STORE_U16(ctx.r31.u32 + 1190, ctx.r8.u16);
	// addi r8,r31,1190
	ctx.r8.s64 = ctx.r31.s64 + 1190;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826409F4:
	// lwz r10,208(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 208);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,128
	ctx.r7.s64 = ctx.r10.s64 + 128;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// srawi r6,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 6;
	// sthu r6,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r6.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x826409f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826409F4;
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// lis r7,32
	ctx.r7.s64 = 2097152;
	// lwz r6,20912(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 20912);
	// lis r5,64
	ctx.r5.s64 = 4194304;
	// srawi r4,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 1;
	// lwz r8,3744(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 3744);
	// lwz r9,220(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 220);
	// lis r3,8
	ctx.r3.s64 = 524288;
	// mullw r10,r4,r6
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// lbz r6,35(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 35);
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// ori r8,r7,32
	ctx.r8.u64 = ctx.r7.u64 | 32;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ori r7,r5,64
	ctx.r7.u64 = ctx.r5.u64 | 64;
	// stw r10,560(r31)
	REX_STORE_U32(ctx.r31.u32 + 560, ctx.r10.u32);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// ori r5,r3,8
	ctx.r5.u64 = ctx.r3.u64 | 8;
	// subf r27,r6,r8
	ctx.r27.u64 = ctx.r8.u64 - ctx.r6.u64;
	// stw r9,564(r31)
	REX_STORE_U32(ctx.r31.u32 + 564, ctx.r9.u32);
	// addis r4,r6,31
	ctx.r4.s64 = ctx.r6.s64 + 2031616;
	// addis r29,r6,15
	ctx.r29.s64 = ctx.r6.s64 + 983040;
	// addis r28,r6,7
	ctx.r28.s64 = ctx.r6.s64 + 458752;
	// addis r3,r6,3
	ctx.r3.s64 = ctx.r6.s64 + 196608;
	// subf r7,r6,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r6.u64;
	// subf r6,r6,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r6.u64;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r4,r4,31
	ctx.r4.s64 = ctx.r4.s64 + 31;
	// addi r29,r29,15
	ctx.r29.s64 = ctx.r29.s64 + 15;
	// addi r28,r28,7
	ctx.r28.s64 = ctx.r28.s64 + 7;
	// addi r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 3;
	// lwz r5,204(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r10,568(r31)
	REX_STORE_U32(ctx.r31.u32 + 568, ctx.r10.u32);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r5,572(r31)
	REX_STORE_U32(ctx.r31.u32 + 572, ctx.r5.u32);
	// lwz r9,208(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 208);
	// srawi r5,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 1;
	// lwz r9,224(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 224);
	// lwz r10,20912(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20912);
	// mullw r10,r5,r10
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// lwz r8,3748(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 3748);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,576(r31)
	REX_STORE_U32(ctx.r31.u32 + 576, ctx.r10.u32);
	// lwz r8,3752(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 3752);
	// lwz r5,20912(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 20912);
	// lwz r9,208(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 208);
	// srawi r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// lwz r9,224(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 224);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r9,580(r31)
	REX_STORE_U32(ctx.r31.u32 + 580, ctx.r9.u32);
	// lwz r8,3004(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 3004);
	// stw r8,588(r31)
	REX_STORE_U32(ctx.r31.u32 + 588, ctx.r8.u32);
	// stw r8,584(r31)
	REX_STORE_U32(ctx.r31.u32 + 584, ctx.r8.u32);
	// lwz r5,3012(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 3012);
	// stw r5,592(r31)
	REX_STORE_U32(ctx.r31.u32 + 592, ctx.r5.u32);
	// stw r5,596(r31)
	REX_STORE_U32(ctx.r31.u32 + 596, ctx.r5.u32);
	// lwz r10,3016(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 3016);
	// stw r10,600(r31)
	REX_STORE_U32(ctx.r31.u32 + 600, ctx.r10.u32);
	// lwz r9,3024(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 3024);
	// stw r9,604(r31)
	REX_STORE_U32(ctx.r31.u32 + 604, ctx.r9.u32);
	// lwz r8,2580(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 2580);
	// stw r8,608(r31)
	REX_STORE_U32(ctx.r31.u32 + 608, ctx.r8.u32);
	// lwz r5,2500(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 2500);
	// stw r5,612(r31)
	REX_STORE_U32(ctx.r31.u32 + 612, ctx.r5.u32);
	// lwz r10,1852(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 1852);
	// stw r10,620(r31)
	REX_STORE_U32(ctx.r31.u32 + 620, ctx.r10.u32);
	// lwz r9,1856(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 1856);
	// stw r9,624(r31)
	REX_STORE_U32(ctx.r31.u32 + 624, ctx.r9.u32);
	// lwz r8,1860(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 1860);
	// stw r8,632(r31)
	REX_STORE_U32(ctx.r31.u32 + 632, ctx.r8.u32);
	// stw r4,1136(r31)
	REX_STORE_U32(ctx.r31.u32 + 1136, ctx.r4.u32);
	// stw r29,1140(r31)
	REX_STORE_U32(ctx.r31.u32 + 1140, ctx.r29.u32);
	// stw r3,1148(r31)
	REX_STORE_U32(ctx.r31.u32 + 1148, ctx.r3.u32);
	// addi r10,r31,1120
	ctx.r10.s64 = ctx.r31.s64 + 1120;
	// stw r7,1156(r31)
	REX_STORE_U32(ctx.r31.u32 + 1156, ctx.r7.u32);
	// li r7,1104
	ctx.r7.s64 = 1104;
	// stw r28,1144(r31)
	REX_STORE_U32(ctx.r31.u32 + 1144, ctx.r28.u32);
	// addi r5,r30,2140
	ctx.r5.s64 = ctx.r30.s64 + 2140;
	// stw r27,1152(r31)
	REX_STORE_U32(ctx.r31.u32 + 1152, ctx.r27.u32);
	// addi r4,r30,24448
	ctx.r4.s64 = ctx.r30.s64 + 24448;
	// stw r6,1160(r31)
	REX_STORE_U32(ctx.r31.u32 + 1160, ctx.r6.u32);
	// addi r6,r30,24192
	ctx.r6.s64 = ctx.r30.s64 + 24192;
	// lbz r3,35(r31)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + 35);
	// sth r3,1134(r31)
	REX_STORE_U16(ctx.r31.u32 + 1134, ctx.r3.u16);
	// lvx128 v12,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v0,v12,7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_set1_epi16(short(0x100))));
	// vsubshs v11,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r31,r7
	ea = (ctx.r31.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,2116(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 2116);
	// stw r10,1224(r31)
	REX_STORE_U32(ctx.r31.u32 + 1224, ctx.r10.u32);
	// lwz r9,2120(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 2120);
	// stw r9,1228(r31)
	REX_STORE_U32(ctx.r31.u32 + 1228, ctx.r9.u32);
	// lwz r8,21936(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 21936);
	// stw r8,1236(r31)
	REX_STORE_U32(ctx.r31.u32 + 1236, ctx.r8.u32);
	// lwz r7,21940(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 21940);
	// stw r7,1240(r31)
	REX_STORE_U32(ctx.r31.u32 + 1240, ctx.r7.u32);
	// lwz r3,248(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 248);
	// stb r3,1244(r31)
	REX_STORE_U8(ctx.r31.u32 + 1244, ctx.r3.u8);
	// lwz r9,4004(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 4004);
	// stb r9,1245(r31)
	REX_STORE_U8(ctx.r31.u32 + 1245, ctx.r9.u8);
	// lwz r7,4012(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 4012);
	// stb r7,1246(r31)
	REX_STORE_U8(ctx.r31.u32 + 1246, ctx.r7.u8);
	// lwz r10,252(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 252);
	// stb r10,1249(r31)
	REX_STORE_U8(ctx.r31.u32 + 1249, ctx.r10.u8);
	// lwz r8,472(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 472);
	// stb r8,1250(r31)
	REX_STORE_U8(ctx.r31.u32 + 1250, ctx.r8.u8);
	// lwz r3,22192(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 22192);
	// stw r3,1304(r31)
	REX_STORE_U32(ctx.r31.u32 + 1304, ctx.r3.u32);
	// lwz r10,284(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 284);
	// stw r10,1308(r31)
	REX_STORE_U32(ctx.r31.u32 + 1308, ctx.r10.u32);
	// lwz r9,1972(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 1972);
	// stb r9,1247(r31)
	REX_STORE_U8(ctx.r31.u32 + 1247, ctx.r9.u8);
	// lwz r7,1976(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 1976);
	// stb r7,1248(r31)
	REX_STORE_U8(ctx.r31.u32 + 1248, ctx.r7.u8);
	// lwz r10,1968(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 1968);
	// stb r10,1251(r31)
	REX_STORE_U8(ctx.r31.u32 + 1251, ctx.r10.u8);
	// stw r6,1260(r31)
	REX_STORE_U32(ctx.r31.u32 + 1260, ctx.r6.u32);
	// stw r5,1232(r31)
	REX_STORE_U32(ctx.r31.u32 + 1232, ctx.r5.u32);
	// lwz r8,20932(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 20932);
	// stb r8,1254(r31)
	REX_STORE_U8(ctx.r31.u32 + 1254, ctx.r8.u8);
	// lwz r6,21868(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 21868);
	// stb r6,1255(r31)
	REX_STORE_U8(ctx.r31.u32 + 1255, ctx.r6.u8);
	// stw r4,1264(r31)
	REX_STORE_U32(ctx.r31.u32 + 1264, ctx.r4.u32);
	// lwz r4,20904(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 20904);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82640c58
	if (ctx.cr6.eq) goto loc_82640C58;
	// lwz r10,20908(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20908);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82640c58
	if (!ctx.cr6.eq) goto loc_82640C58;
	// lwz r10,1832(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 1832);
	// stw r10,1268(r31)
	REX_STORE_U32(ctx.r31.u32 + 1268, ctx.r10.u32);
	// lwz r9,20976(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 20976);
	// stw r9,1272(r31)
	REX_STORE_U32(ctx.r31.u32 + 1272, ctx.r9.u32);
	// lwz r8,20980(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 20980);
	// stw r8,1300(r31)
	REX_STORE_U32(ctx.r31.u32 + 1300, ctx.r8.u32);
	// b 0x82640cd8
	goto loc_82640CD8;
loc_82640C58:
	// lwz r10,15504(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 15504);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x82640ca8
	if (!ctx.cr6.eq) goto loc_82640CA8;
	// lwz r10,1812(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 1812);
	// stw r10,1268(r31)
	REX_STORE_U32(ctx.r31.u32 + 1268, ctx.r10.u32);
	// lwz r9,1812(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 1812);
	// stw r9,1272(r31)
	REX_STORE_U32(ctx.r31.u32 + 1272, ctx.r9.u32);
	// lwz r8,1820(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 1820);
	// stw r8,1276(r31)
	REX_STORE_U32(ctx.r31.u32 + 1276, ctx.r8.u32);
	// lwz r7,1816(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 1816);
	// stw r7,1280(r31)
	REX_STORE_U32(ctx.r31.u32 + 1280, ctx.r7.u32);
	// lwz r6,1820(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 1820);
	// stw r6,1284(r31)
	REX_STORE_U32(ctx.r31.u32 + 1284, ctx.r6.u32);
	// lwz r5,1816(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 1816);
	// stw r5,1288(r31)
	REX_STORE_U32(ctx.r31.u32 + 1288, ctx.r5.u32);
	// lwz r4,1820(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 1820);
	// stw r4,1292(r31)
	REX_STORE_U32(ctx.r31.u32 + 1292, ctx.r4.u32);
	// lwz r3,1816(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 1816);
	// stw r3,1296(r31)
	REX_STORE_U32(ctx.r31.u32 + 1296, ctx.r3.u32);
	// b 0x82640cd8
	goto loc_82640CD8;
loc_82640CA8:
	// lwz r10,1808(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 1808);
	// stw r10,1268(r31)
	REX_STORE_U32(ctx.r31.u32 + 1268, ctx.r10.u32);
	// lwz r9,1820(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 1820);
	// stw r9,1272(r31)
	REX_STORE_U32(ctx.r31.u32 + 1272, ctx.r9.u32);
	// lwz r8,1804(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 1804);
	// stw r8,1276(r31)
	REX_STORE_U32(ctx.r31.u32 + 1276, ctx.r8.u32);
	// lwz r7,1816(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 1816);
	// stw r7,1280(r31)
	REX_STORE_U32(ctx.r31.u32 + 1280, ctx.r7.u32);
	// lwz r6,1800(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 1800);
	// stw r6,1284(r31)
	REX_STORE_U32(ctx.r31.u32 + 1284, ctx.r6.u32);
	// lwz r5,1812(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 1812);
	// stw r5,1288(r31)
	REX_STORE_U32(ctx.r31.u32 + 1288, ctx.r5.u32);
loc_82640CD8:
	// sth r11,1256(r31)
	REX_STORE_U16(ctx.r31.u32 + 1256, ctx.r11.u16);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r6,r30,24512
	ctx.r6.s64 = ctx.r30.s64 + 24512;
	// addi r3,r30,24704
	ctx.r3.s64 = ctx.r30.s64 + 24704;
	// lwz r8,1796(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 1796);
	// stb r8,1252(r31)
	REX_STORE_U8(ctx.r31.u32 + 1252, ctx.r8.u8);
	// addis r8,r30,2
	ctx.r8.s64 = ctx.r30.s64 + 131072;
	// addi r8,r8,-25684
	ctx.r8.s64 = ctx.r8.s64 + -25684;
	// lwz r5,1936(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 1936);
	// stb r5,1253(r31)
	REX_STORE_U8(ctx.r31.u32 + 1253, ctx.r5.u8);
	// lwz r7,22508(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 22508);
	// stw r7,1312(r31)
	REX_STORE_U32(ctx.r31.u32 + 1312, ctx.r7.u32);
	// lwz r5,3940(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 3940);
	// stw r5,1316(r31)
	REX_STORE_U32(ctx.r31.u32 + 1316, ctx.r5.u32);
	// lwz r4,3944(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 3944);
	// stw r4,1320(r31)
	REX_STORE_U32(ctx.r31.u32 + 1320, ctx.r4.u32);
	// lwz r10,20916(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20916);
	// stw r10,1380(r31)
	REX_STORE_U32(ctx.r31.u32 + 1380, ctx.r10.u32);
	// lwz r7,15252(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 15252);
	// stw r7,1384(r31)
	REX_STORE_U32(ctx.r31.u32 + 1384, ctx.r7.u32);
	// lwz r10,15504(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 15504);
	// addi r5,r10,-7
	ctx.r5.s64 = ctx.r10.s64 + -7;
	// addic r4,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// subfe r7,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 & ctx.r9.u64;
	// stb r5,1324(r31)
	REX_STORE_U8(ctx.r31.u32 + 1324, ctx.r5.u8);
	// lwz r4,3004(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 3004);
	// stw r4,1328(r31)
	REX_STORE_U32(ctx.r31.u32 + 1328, ctx.r4.u32);
	// lwz r10,3008(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 3008);
	// stw r10,1332(r31)
	REX_STORE_U32(ctx.r31.u32 + 1332, ctx.r10.u32);
	// lwz r9,3012(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 3012);
	// stw r9,1336(r31)
	REX_STORE_U32(ctx.r31.u32 + 1336, ctx.r9.u32);
	// lwz r7,3016(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 3016);
	// stw r7,1340(r31)
	REX_STORE_U32(ctx.r31.u32 + 1340, ctx.r7.u32);
	// lwz r5,3020(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 3020);
	// stw r5,1344(r31)
	REX_STORE_U32(ctx.r31.u32 + 1344, ctx.r5.u32);
	// lwz r4,3024(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 3024);
	// stw r4,1348(r31)
	REX_STORE_U32(ctx.r31.u32 + 1348, ctx.r4.u32);
	// lwz r10,3028(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 3028);
	// stw r10,1352(r31)
	REX_STORE_U32(ctx.r31.u32 + 1352, ctx.r10.u32);
	// stw r6,1356(r31)
	REX_STORE_U32(ctx.r31.u32 + 1356, ctx.r6.u32);
	// stw r3,1360(r31)
	REX_STORE_U32(ctx.r31.u32 + 1360, ctx.r3.u32);
	// lwz r9,20992(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 20992);
	// stw r9,1388(r31)
	REX_STORE_U32(ctx.r31.u32 + 1388, ctx.r9.u32);
	// lwz r7,3984(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 3984);
	// stw r7,1392(r31)
	REX_STORE_U32(ctx.r31.u32 + 1392, ctx.r7.u32);
	// lwz r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r6,380(r31)
	REX_STORE_U32(ctx.r31.u32 + 380, ctx.r6.u32);
	// lwz r3,0(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lhz r5,52(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 52);
	// rlwinm r4,r5,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// divw r9,r4,r3
	ctx.r9.u64 = uint32_t((ctx.r3.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r3.s32 == -1)) ? ctx.r4.s32 / ctx.r3.s32 : 0);
	// rotlwi r10,r4,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// stw r9,384(r31)
	REX_STORE_U32(ctx.r31.u32 + 384, ctx.r9.u32);
	// twllei r3,0
	if (ctx.r3.s32 == 0 || ctx.r3.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r5,3416(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 3416);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// andc r7,r3,r8
	ctx.r7.u64 = ctx.r3.u64 & ~ctx.r8.u64;
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// lwz r6,14808(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 14808);
	// mullw r4,r6,r5
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// stw r4,1788(r31)
	REX_STORE_U32(ctx.r31.u32 + 1788, ctx.r4.u32);
	// lwz r3,15308(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 15308);
	// stw r3,1824(r31)
	REX_STORE_U32(ctx.r31.u32 + 1824, ctx.r3.u32);
	// lwz r10,15312(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 15312);
	// stw r10,1828(r31)
	REX_STORE_U32(ctx.r31.u32 + 1828, ctx.r10.u32);
	// lwz r9,15316(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 15316);
	// stw r9,1832(r31)
	REX_STORE_U32(ctx.r31.u32 + 1832, ctx.r9.u32);
	// lwz r8,15320(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 15320);
	// stw r8,1836(r31)
	REX_STORE_U32(ctx.r31.u32 + 1836, ctx.r8.u32);
	// lwz r7,21124(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 21124);
	// stw r7,1404(r31)
	REX_STORE_U32(ctx.r31.u32 + 1404, ctx.r7.u32);
	// lwz r6,21924(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 21924);
	// stw r6,1396(r31)
	REX_STORE_U32(ctx.r31.u32 + 1396, ctx.r6.u32);
	// lwz r5,21920(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 21920);
	// stw r5,1400(r31)
	REX_STORE_U32(ctx.r31.u32 + 1400, ctx.r5.u32);
	// lwz r4,3988(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 3988);
	// stw r4,1752(r31)
	REX_STORE_U32(ctx.r31.u32 + 1752, ctx.r4.u32);
	// lwz r3,20952(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 20952);
	// stw r3,1756(r31)
	REX_STORE_U32(ctx.r31.u32 + 1756, ctx.r3.u32);
	// lwz r10,20956(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20956);
	// stw r10,1760(r31)
	REX_STORE_U32(ctx.r31.u32 + 1760, ctx.r10.u32);
	// lwz r9,20960(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 20960);
	// stw r9,1764(r31)
	REX_STORE_U32(ctx.r31.u32 + 1764, ctx.r9.u32);
	// lwz r8,20964(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 20964);
	// stw r8,1768(r31)
	REX_STORE_U32(ctx.r31.u32 + 1768, ctx.r8.u32);
	// lwz r7,20968(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 20968);
	// stw r7,1772(r31)
	REX_STORE_U32(ctx.r31.u32 + 1772, ctx.r7.u32);
	// lwz r6,20972(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 20972);
	// stw r6,1776(r31)
	REX_STORE_U32(ctx.r31.u32 + 1776, ctx.r6.u32);
	// lwz r5,20912(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 20912);
	// stw r5,1368(r31)
	REX_STORE_U32(ctx.r31.u32 + 1368, ctx.r5.u32);
	// lwz r4,21928(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 21928);
	// stw r4,1372(r31)
	REX_STORE_U32(ctx.r31.u32 + 1372, ctx.r4.u32);
	// lwz r3,22364(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 22364);
	// stw r3,1780(r31)
	REX_STORE_U32(ctx.r31.u32 + 1780, ctx.r3.u32);
	// lwz r10,22364(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 22364);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82640e9c
	if (!ctx.cr6.eq) goto loc_82640E9C;
	// lwz r10,22040(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 22040);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r7,r9,40248
	ctx.r7.u64 = ctx.r9.u64 | 40248;
	// ori r6,r8,40252
	ctx.r6.u64 = ctx.r8.u64 | 40252;
	// stw r10,1456(r31)
	REX_STORE_U32(ctx.r31.u32 + 1456, ctx.r10.u32);
	// lwz r5,22396(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 22396);
	// stw r5,1460(r31)
	REX_STORE_U32(ctx.r31.u32 + 1460, ctx.r5.u32);
	// lwz r4,22068(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 22068);
	// stw r4,1464(r31)
	REX_STORE_U32(ctx.r31.u32 + 1464, ctx.r4.u32);
	// lwzx r3,r30,r7
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// stw r3,1484(r31)
	REX_STORE_U32(ctx.r31.u32 + 1484, ctx.r3.u32);
	// lwzx r10,r30,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// stw r10,1480(r31)
	REX_STORE_U32(ctx.r31.u32 + 1480, ctx.r10.u32);
loc_82640E9C:
	// lwz r10,15504(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 15504);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82640ec4
	if (!ctx.cr6.eq) goto loc_82640EC4;
	// lwz r10,2992(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 2992);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82640ec4
	if (!ctx.cr6.eq) goto loc_82640EC4;
	// lis r10,-32117
	ctx.r10.s64 = -2104819712;
	// lwz r10,-31356(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -31356);
	// b 0x82640ecc
	goto loc_82640ECC;
loc_82640EC4:
	// lis r10,-32117
	ctx.r10.s64 = -2104819712;
	// lwz r10,-31360(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -31360);
loc_82640ECC:
	// stw r10,1364(r31)
	REX_STORE_U32(ctx.r31.u32 + 1364, ctx.r10.u32);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r10,1356(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1356);
	// addi r5,r7,20840
	ctx.r5.s64 = ctx.r7.s64 + 20840;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,204(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// addi r7,r5,4
	ctx.r7.s64 = ctx.r5.s64 + 4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
loc_82640EF4:
	// lwz r8,-4(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + -4);
	// stb r6,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// rlwinm r3,r8,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// rlwinm r4,r8,0,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// stb r3,-1(r10)
	REX_STORE_U8(ctx.r10.u32 + -1, ctx.r3.u8);
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// stw r4,3(r10)
	REX_STORE_U32(ctx.r10.u32 + 3, ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82640f34
	if (ctx.cr6.eq) goto loc_82640F34;
	// rlwinm r8,r8,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// rlwinm r4,r8,0,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// rlwinm r3,r8,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mullw r8,r4,r9
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// stb r3,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r3.u8);
	// stw r8,7(r10)
	REX_STORE_U32(ctx.r10.u32 + 7, ctx.r8.u32);
loc_82640F34:
	// lwz r8,0(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stb r6,12(r10)
	REX_STORE_U8(ctx.r10.u32 + 12, ctx.r6.u8);
	// rlwinm r3,r8,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// rlwinm r4,r8,0,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// stb r3,11(r10)
	REX_STORE_U8(ctx.r10.u32 + 11, ctx.r3.u8);
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// stw r4,15(r10)
	REX_STORE_U32(ctx.r10.u32 + 15, ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82640f74
	if (ctx.cr6.eq) goto loc_82640F74;
	// rlwinm r8,r8,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// rlwinm r4,r8,0,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// rlwinm r3,r8,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mullw r8,r4,r9
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// stb r3,12(r10)
	REX_STORE_U8(ctx.r10.u32 + 12, ctx.r3.u8);
	// stw r8,19(r10)
	REX_STORE_U32(ctx.r10.u32 + 19, ctx.r8.u32);
loc_82640F74:
	// lwz r8,4(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stb r6,24(r10)
	REX_STORE_U8(ctx.r10.u32 + 24, ctx.r6.u8);
	// rlwinm r3,r8,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// rlwinm r4,r8,0,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// stb r3,23(r10)
	REX_STORE_U8(ctx.r10.u32 + 23, ctx.r3.u8);
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// stw r4,27(r10)
	REX_STORE_U32(ctx.r10.u32 + 27, ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82640fb4
	if (ctx.cr6.eq) goto loc_82640FB4;
	// rlwinm r8,r8,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// rlwinm r4,r8,0,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// rlwinm r3,r8,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mullw r8,r4,r9
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// stb r3,24(r10)
	REX_STORE_U8(ctx.r10.u32 + 24, ctx.r3.u8);
	// stw r8,31(r10)
	REX_STORE_U32(ctx.r10.u32 + 31, ctx.r8.u32);
loc_82640FB4:
	// lwz r8,8(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stb r6,36(r10)
	REX_STORE_U8(ctx.r10.u32 + 36, ctx.r6.u8);
	// rlwinm r3,r8,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// rlwinm r4,r8,0,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// stb r3,35(r10)
	REX_STORE_U8(ctx.r10.u32 + 35, ctx.r3.u8);
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// stw r4,39(r10)
	REX_STORE_U32(ctx.r10.u32 + 39, ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82640ff4
	if (ctx.cr6.eq) goto loc_82640FF4;
	// rlwinm r8,r8,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// rlwinm r4,r8,0,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// rlwinm r3,r8,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mullw r8,r4,r9
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// stb r3,36(r10)
	REX_STORE_U8(ctx.r10.u32 + 36, ctx.r3.u8);
	// stw r8,43(r10)
	REX_STORE_U32(ctx.r10.u32 + 43, ctx.r8.u32);
loc_82640FF4:
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// bdnz 0x82640ef4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82640EF4;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r10,1360(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1360);
	// lwz r9,208(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 208);
	// addi r7,r5,4
	ctx.r7.s64 = ctx.r5.s64 + 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82641018:
	// lwz r8,-4(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + -4);
	// stb r6,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// rlwinm r5,r8,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r8,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r9
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stb r4,-1(r10)
	REX_STORE_U8(ctx.r10.u32 + -1, ctx.r4.u8);
	// stw r3,3(r10)
	REX_STORE_U32(ctx.r10.u32 + 3, ctx.r3.u32);
	// clrlwi r5,r8,31
	ctx.r5.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82641058
	if (ctx.cr6.eq) goto loc_82641058;
	// rlwinm r8,r8,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// rlwinm r5,r8,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r8,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r9
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stb r4,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r4.u8);
	// stw r3,7(r10)
	REX_STORE_U32(ctx.r10.u32 + 7, ctx.r3.u32);
loc_82641058:
	// lwz r8,0(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stb r6,12(r10)
	REX_STORE_U8(ctx.r10.u32 + 12, ctx.r6.u8);
	// rlwinm r5,r8,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r8,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r9
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stb r4,11(r10)
	REX_STORE_U8(ctx.r10.u32 + 11, ctx.r4.u8);
	// stw r3,15(r10)
	REX_STORE_U32(ctx.r10.u32 + 15, ctx.r3.u32);
	// clrlwi r5,r8,31
	ctx.r5.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82641098
	if (ctx.cr6.eq) goto loc_82641098;
	// rlwinm r8,r8,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// rlwinm r5,r8,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r8,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r9
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stb r4,12(r10)
	REX_STORE_U8(ctx.r10.u32 + 12, ctx.r4.u8);
	// stw r3,19(r10)
	REX_STORE_U32(ctx.r10.u32 + 19, ctx.r3.u32);
loc_82641098:
	// lwz r8,4(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stb r6,24(r10)
	REX_STORE_U8(ctx.r10.u32 + 24, ctx.r6.u8);
	// rlwinm r5,r8,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r8,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r9
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stb r4,23(r10)
	REX_STORE_U8(ctx.r10.u32 + 23, ctx.r4.u8);
	// stw r3,27(r10)
	REX_STORE_U32(ctx.r10.u32 + 27, ctx.r3.u32);
	// clrlwi r5,r8,31
	ctx.r5.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826410d8
	if (ctx.cr6.eq) goto loc_826410D8;
	// rlwinm r8,r8,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// rlwinm r5,r8,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r8,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r9
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stb r4,24(r10)
	REX_STORE_U8(ctx.r10.u32 + 24, ctx.r4.u8);
	// stw r3,31(r10)
	REX_STORE_U32(ctx.r10.u32 + 31, ctx.r3.u32);
loc_826410D8:
	// lwz r8,8(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stb r6,36(r10)
	REX_STORE_U8(ctx.r10.u32 + 36, ctx.r6.u8);
	// rlwinm r5,r8,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r8,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r9
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stb r4,35(r10)
	REX_STORE_U8(ctx.r10.u32 + 35, ctx.r4.u8);
	// stw r3,39(r10)
	REX_STORE_U32(ctx.r10.u32 + 39, ctx.r3.u32);
	// clrlwi r5,r8,31
	ctx.r5.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82641118
	if (ctx.cr6.eq) goto loc_82641118;
	// rlwinm r8,r8,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// rlwinm r5,r8,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r8,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r9
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stb r4,36(r10)
	REX_STORE_U8(ctx.r10.u32 + 36, ctx.r4.u8);
	// stw r3,43(r10)
	REX_STORE_U32(ctx.r10.u32 + 43, ctx.r3.u32);
loc_82641118:
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// bdnz 0x82641018
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82641018;
	// lwz r10,1792(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1792);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826413b8
	if (ctx.cr6.eq) goto loc_826413B8;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x826413b8
	if (!ctx.cr6.eq) goto loc_826413B8;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r9,620(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 620);
	// addis r8,r30,2
	ctx.r8.s64 = ctx.r30.s64 + 131072;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r8,r8,-25508
	ctx.r8.s64 = ctx.r8.s64 + -25508;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// stw r8,1796(r31)
	REX_STORE_U32(ctx.r31.u32 + 1796, ctx.r8.u32);
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// addi r4,r8,2
	ctx.r4.s64 = ctx.r8.s64 + 2;
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// addi r29,r8,3
	ctx.r29.s64 = ctx.r8.s64 + 3;
	// subf r28,r9,r8
	ctx.r28.u64 = ctx.r8.u64 - ctx.r9.u64;
loc_82641174:
	// lbzx r27,r10,r9
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r26,r27,4,26,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0x30;
	// rlwinm r27,r27,31,1,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 31) & 0x7FFFFFFF;
	// or r27,r26,r27
	ctx.r27.u64 = ctx.r26.u64 | ctx.r27.u64;
	// rlwinm r27,r27,0,25,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x7E;
	// stbx r27,r8,r28
	REX_STORE_U8(ctx.r8.u32 + ctx.r28.u32, ctx.r27.u8);
	// lbzx r8,r7,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r27,r8,4,26,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x30;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// or r8,r27,r8
	ctx.r8.u64 = ctx.r27.u64 | ctx.r8.u64;
	// rlwinm r8,r8,0,25,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7E;
	// stbx r8,r6,r10
	REX_STORE_U8(ctx.r6.u32 + ctx.r10.u32, ctx.r8.u8);
	// lbzx r8,r5,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// rlwinm r27,r8,4,26,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x30;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// or r8,r27,r8
	ctx.r8.u64 = ctx.r27.u64 | ctx.r8.u64;
	// rlwinm r8,r8,0,25,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7E;
	// stbx r8,r4,r10
	REX_STORE_U8(ctx.r4.u32 + ctx.r10.u32, ctx.r8.u8);
	// lbzx r8,r3,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r27,r8,4,26,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x30;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// or r8,r27,r8
	ctx.r8.u64 = ctx.r27.u64 | ctx.r8.u64;
	// rlwinm r8,r8,0,25,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7E;
	// stbx r8,r29,r10
	REX_STORE_U8(ctx.r29.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82641174
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82641174;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r9,624(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 624);
	// addis r8,r30,2
	ctx.r8.s64 = ctx.r30.s64 + 131072;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r8,r8,-25476
	ctx.r8.s64 = ctx.r8.s64 + -25476;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// stw r8,1800(r31)
	REX_STORE_U32(ctx.r31.u32 + 1800, ctx.r8.u32);
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// addi r4,r8,2
	ctx.r4.s64 = ctx.r8.s64 + 2;
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// addi r29,r8,3
	ctx.r29.s64 = ctx.r8.s64 + 3;
	// subf r28,r9,r8
	ctx.r28.u64 = ctx.r8.u64 - ctx.r9.u64;
loc_82641218:
	// lbzx r27,r10,r9
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r26,r27,3,24,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xF8;
	// rlwinm r27,r27,30,2,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFF;
	// or r27,r26,r27
	ctx.r27.u64 = ctx.r26.u64 | ctx.r27.u64;
	// rlwinm r27,r27,0,26,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x3E;
	// stbx r27,r8,r28
	REX_STORE_U8(ctx.r8.u32 + ctx.r28.u32, ctx.r27.u8);
	// lbzx r8,r7,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r27,r8,3,24,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xF8;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// or r8,r27,r8
	ctx.r8.u64 = ctx.r27.u64 | ctx.r8.u64;
	// rlwinm r8,r8,0,26,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3E;
	// stbx r8,r6,r10
	REX_STORE_U8(ctx.r6.u32 + ctx.r10.u32, ctx.r8.u8);
	// lbzx r8,r5,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// rlwinm r27,r8,3,24,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xF8;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// or r8,r27,r8
	ctx.r8.u64 = ctx.r27.u64 | ctx.r8.u64;
	// rlwinm r8,r8,0,26,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3E;
	// stbx r8,r4,r10
	REX_STORE_U8(ctx.r4.u32 + ctx.r10.u32, ctx.r8.u8);
	// lbzx r8,r3,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r27,r8,3,24,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xF8;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// or r8,r27,r8
	ctx.r8.u64 = ctx.r27.u64 | ctx.r8.u64;
	// rlwinm r8,r8,0,26,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3E;
	// stbx r8,r29,r10
	REX_STORE_U8(ctx.r29.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82641218
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82641218;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r9,632(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 632);
	// addis r8,r30,2
	ctx.r8.s64 = ctx.r30.s64 + 131072;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r8,r8,-25444
	ctx.r8.s64 = ctx.r8.s64 + -25444;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// stw r8,1808(r31)
	REX_STORE_U32(ctx.r31.u32 + 1808, ctx.r8.u32);
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// addi r4,r8,2
	ctx.r4.s64 = ctx.r8.s64 + 2;
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// addi r29,r8,3
	ctx.r29.s64 = ctx.r8.s64 + 3;
	// subf r28,r9,r8
	ctx.r28.u64 = ctx.r8.u64 - ctx.r9.u64;
loc_826412BC:
	// lbzx r27,r10,r9
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r26,r27,3,27,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0x18;
	// rlwinm r27,r27,31,1,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 31) & 0x7FFFFFFF;
	// or r27,r26,r27
	ctx.r27.u64 = ctx.r26.u64 | ctx.r27.u64;
	// rlwinm r27,r27,0,25,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x7E;
	// stbx r27,r8,r28
	REX_STORE_U8(ctx.r8.u32 + ctx.r28.u32, ctx.r27.u8);
	// lbzx r8,r7,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r27,r8,3,27,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x18;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// or r8,r27,r8
	ctx.r8.u64 = ctx.r27.u64 | ctx.r8.u64;
	// rlwinm r8,r8,0,25,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7E;
	// stbx r8,r6,r10
	REX_STORE_U8(ctx.r6.u32 + ctx.r10.u32, ctx.r8.u8);
	// lbzx r8,r5,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// rlwinm r27,r8,3,27,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x18;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// or r8,r27,r8
	ctx.r8.u64 = ctx.r27.u64 | ctx.r8.u64;
	// rlwinm r8,r8,0,25,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7E;
	// stbx r8,r4,r10
	REX_STORE_U8(ctx.r4.u32 + ctx.r10.u32, ctx.r8.u8);
	// lbzx r8,r3,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r27,r8,3,27,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x18;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// or r8,r27,r8
	ctx.r8.u64 = ctx.r27.u64 | ctx.r8.u64;
	// rlwinm r8,r8,0,25,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7E;
	// stbx r8,r29,r10
	REX_STORE_U8(ctx.r29.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826412bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826412BC;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r10,444(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 444);
	// addis r9,r30,2
	ctx.r9.s64 = ctx.r30.s64 + 131072;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,-25572
	ctx.r9.s64 = ctx.r9.s64 + -25572;
	// addi r4,r10,3
	ctx.r4.s64 = ctx.r10.s64 + 3;
	// stw r9,1812(r31)
	REX_STORE_U32(ctx.r31.u32 + 1812, ctx.r9.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// subf r31,r10,r9
	ctx.r31.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_8264135C:
	// lbzx r30,r11,r10
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r29,r30,30,2,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3FFFFFFE;
	// rlwinm r30,r30,4,25,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0x70;
	// or r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 | ctx.r30.u64;
	// stbx r30,r9,r31
	REX_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r30.u8);
	// lbzx r9,r8,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r30,r9,30,2,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFE;
	// rlwinm r9,r9,4,25,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x70;
	// or r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 | ctx.r9.u64;
	// stbx r9,r7,r11
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbzx r9,r6,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// rlwinm r30,r9,30,2,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFE;
	// rlwinm r9,r9,4,25,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x70;
	// or r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 | ctx.r9.u64;
	// stbx r9,r5,r11
	REX_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbzx r9,r4,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r30,r9,30,2,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFE;
	// rlwinm r9,r9,4,25,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x70;
	// or r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 | ctx.r9.u64;
	// stbx r9,r3,r11
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8264135c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8264135C;
loc_826413B8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x825e3648
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826C11B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35f4
	ctx.lr = 0x826C11B8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r9,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// lwz r24,244(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// extsb r23,r9
	ctx.r23.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c124c
	if (ctx.cr6.eq) goto loc_826C124C;
	// lhz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r7,8252(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8252);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// bl 0x82708cf8
	ctx.lr = 0x826C1204;
	sub_82708CF8(ctx, base);
	// lwz r10,8100(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8100);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C121C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,8128(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8128);
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826C123C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r8,0(r27)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_826C124C:
	// rlwinm r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c12c0
	if (ctx.cr6.eq) goto loc_826C12C0;
	// lhz r11,2(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 2);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r7,8252(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8252);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82708cf8
	ctx.lr = 0x826C1278;
	sub_82708CF8(ctx, base);
	// lwz r10,8100(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8100);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C1290;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,8128(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8128);
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r25,4
	ctx.r4.s64 = ctx.r25.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826C12B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r8,2(r27)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r27.u32 + 2);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_826C12C0:
	// rlwinm r11,r23,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c1338
	if (ctx.cr6.eq) goto loc_826C1338;
	// lhz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 4);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r7,8252(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8252);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82708cf8
	ctx.lr = 0x826C12EC;
	sub_82708CF8(ctx, base);
	// lwz r10,8100(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8100);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C1304;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,8128(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8128);
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826C1328;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r8,4(r27)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r27.u32 + 4);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_826C1338:
	// clrlwi r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c13a4
	if (ctx.cr6.eq) goto loc_826C13A4;
	// lhz r11,6(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 6);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r7,8252(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8252);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82708cf8
	ctx.lr = 0x826C1364;
	sub_82708CF8(ctx, base);
	// lwz r10,8100(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8100);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C137C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r26,1
	ctx.r9.s64 = ctx.r26.s64 + 1;
	// lwz r8,8128(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8128);
	// li r7,8
	ctx.r7.s64 = 8;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + ctx.r25.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x826C13A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826C13A4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x825e3644
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826C95F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35d0
	ctx.lr = 0x826C9600;
	__savegprlr_14(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,27816
	ctx.r11.s64 = ctx.r11.s64 + 27816;
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// stw r8,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r8.u32);
	// lis r9,-24416
	ctx.r9.s64 = -1600126976;
	// stw r11,-164(r1)
	REX_STORE_U32(ctx.r1.u32 + -164, ctx.r11.u32);
	// li r6,51
	ctx.r6.s64 = 51;
	// ori r9,r9,41121
	ctx.r9.u64 = ctx.r9.u64 | 41121;
	// addi r7,r10,-2640
	ctx.r7.s64 = ctx.r10.s64 + -2640;
loc_826C9628:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r11.u32);
	// stw r10,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r10.u32);
loc_826C9634:
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r7,259
	ctx.r4.s64 = ctx.r7.s64 + 259;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r24,r8,r4
	ctx.r24.u64 = ctx.r8.u64 + ctx.r4.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_826C964C:
	// rlwinm r4,r10,0,24,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF8;
	// rlwinm r3,r10,0,24,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFC;
	// mulhw r5,r4,r9
	ctx.r5.s64 = (int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32)) >> 32;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// mulhw r31,r3,r9
	ctx.r31.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r5,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 5;
	// add r29,r31,r3
	ctx.r29.u64 = ctx.r31.u64 + ctx.r3.u64;
	// rlwinm r30,r5,1,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// divw r28,r4,r6
	ctx.r28.u64 = uint32_t((ctx.r6.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r4.s32 / ctx.r6.s32 : 0);
	// add r31,r5,r30
	ctx.r31.u64 = ctx.r5.u64 + ctx.r30.u64;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// mulli r31,r31,51
	ctx.r31.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(51));
	// subf r30,r31,r4
	ctx.r30.u64 = ctx.r4.u64 - ctx.r31.u64;
	// addi r31,r5,-1
	ctx.r31.s64 = ctx.r5.s64 + -1;
	// subfc r4,r30,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r30.u32;
	ctx.r4.u64 = ctx.r11.u64 - ctx.r30.u64;
	// eqv r27,r30,r11
	ctx.r27.u64 = ~(ctx.r30.u64 ^ ctx.r11.u64);
	// eqv r26,r30,r11
	ctx.r26.u64 = ~(ctx.r30.u64 ^ ctx.r11.u64);
	// rlwinm r27,r27,1,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x1;
	// rlwinm r4,r31,0,24,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xF8;
	// addze r25,r27
	temp.s64 = ctx.r27.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r27.u32;
	ctx.r25.s64 = temp.s64;
	// subfc r30,r30,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r30.u32;
	ctx.r30.u64 = ctx.r11.u64 - ctx.r30.u64;
	// rlwinm r31,r31,0,24,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFC;
	// rlwinm r30,r26,1,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0x1;
	// add r26,r8,r10
	ctx.r26.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addze r27,r30
	temp.s64 = ctx.r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r30.u32;
	ctx.r27.s64 = temp.s64;
	// srawi r30,r29,5
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1F) != 0);
	ctx.r30.s64 = ctx.r29.s32 >> 5;
	// clrlwi r29,r27,31
	ctx.r29.u64 = ctx.r27.u32 & 0x1;
	// rlwinm r27,r30,1,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// mulhw r27,r4,r9
	ctx.r27.s64 = (int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32)) >> 32;
	// mulli r30,r30,51
	ctx.r30.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(51));
	// subf r23,r30,r3
	ctx.r23.u64 = ctx.r3.u64 - ctx.r30.u64;
	// rlwinm r30,r29,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// subfc r22,r23,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r23.u32;
	ctx.r22.u64 = ctx.r11.u64 - ctx.r23.u64;
	// eqv r23,r23,r11
	ctx.r23.u64 = ~(ctx.r23.u64 ^ ctx.r11.u64);
	// add r27,r27,r4
	ctx.r27.u64 = ctx.r27.u64 + ctx.r4.u64;
	// rlwinm r23,r23,1,31,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0x1;
	// add r29,r29,r30
	ctx.r29.u64 = ctx.r29.u64 + ctx.r30.u64;
	// addze r23,r23
	temp.s64 = ctx.r23.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r23.u32;
	ctx.r23.s64 = temp.s64;
	// srawi r30,r27,5
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1F) != 0);
	ctx.r30.s64 = ctx.r27.s32 >> 5;
	// divw r3,r3,r6
	ctx.r3.u64 = uint32_t((ctx.r6.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r3.s32 / ctx.r6.s32 : 0);
	// rlwinm r27,r30,1,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// add r20,r8,r10
	ctx.r20.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r27,r30,r27
	ctx.r27.u64 = ctx.r30.u64 + ctx.r27.u64;
	// clrlwi r30,r23,31
	ctx.r30.u64 = ctx.r23.u32 & 0x1;
	// mulli r27,r27,51
	ctx.r27.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(51));
	// subf r23,r27,r4
	ctx.r23.u64 = ctx.r4.u64 - ctx.r27.u64;
	// add r3,r30,r3
	ctx.r3.u64 = ctx.r30.u64 + ctx.r3.u64;
	// subfc r30,r23,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r23.u32;
	ctx.r30.u64 = ctx.r11.u64 - ctx.r23.u64;
	// eqv r22,r23,r11
	ctx.r22.u64 = ~(ctx.r23.u64 ^ ctx.r11.u64);
	// rlwinm r27,r3,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r22,1,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0x1;
	// add r27,r3,r27
	ctx.r27.u64 = ctx.r3.u64 + ctx.r27.u64;
	// addze r22,r30
	temp.s64 = ctx.r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r30.u32;
	ctx.r22.s64 = temp.s64;
	// subfc r21,r23,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r23.u32;
	ctx.r21.u64 = ctx.r11.u64 - ctx.r23.u64;
	// eqv r23,r23,r11
	ctx.r23.u64 = ~(ctx.r23.u64 ^ ctx.r11.u64);
	// mulhw r3,r31,r9
	ctx.r3.s64 = (int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32)) >> 32;
	// clrlwi r30,r25,31
	ctx.r30.u64 = ctx.r25.u32 & 0x1;
	// rlwinm r25,r23,1,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0x1;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// divw r28,r4,r6
	ctx.r28.u64 = uint32_t((ctx.r6.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r4.s32 / ctx.r6.s32 : 0);
	// addze r25,r25
	temp.s64 = ctx.r25.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r25.u32;
	ctx.r25.s64 = temp.s64;
	// stbx r30,r26,r7
	REX_STORE_U8(ctx.r26.u32 + ctx.r7.u32, ctx.r30.u8);
	// srawi r4,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 5;
	// addi r19,r7,256
	ctx.r19.s64 = ctx.r7.s64 + 256;
	// rlwinm r3,r4,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// rlwinm r30,r5,0,24,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xF8;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r23,r8,r10
	ctx.r23.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r21,r7,512
	ctx.r21.s64 = ctx.r7.s64 + 512;
	// rlwinm r27,r27,1,24,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFE;
	// mulli r3,r4,51
	ctx.r3.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(51));
	// stbx r27,r20,r19
	REX_STORE_U8(ctx.r20.u32 + ctx.r19.u32, ctx.r27.u8);
	// addi r29,r29,10
	ctx.r29.s64 = ctx.r29.s64 + 10;
	// mulhw r4,r30,r9
	ctx.r4.s64 = (int64_t(ctx.r30.s32) * int64_t(ctx.r9.s32)) >> 32;
	// stbx r29,r23,r21
	REX_STORE_U8(ctx.r23.u32 + ctx.r21.u32, ctx.r29.u8);
	// subf r3,r3,r31
	ctx.r3.u64 = ctx.r31.u64 - ctx.r3.u64;
	// add r27,r4,r30
	ctx.r27.u64 = ctx.r4.u64 + ctx.r30.u64;
	// subfc r29,r3,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r3.u32;
	ctx.r29.u64 = ctx.r11.u64 - ctx.r3.u64;
	// std r24,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r24.u64);
	// eqv r3,r3,r11
	ctx.r3.u64 = ~(ctx.r3.u64 ^ ctx.r11.u64);
	// clrlwi r4,r25,31
	ctx.r4.u64 = ctx.r25.u32 & 0x1;
	// rlwinm r3,r3,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// add r29,r4,r28
	ctx.r29.u64 = ctx.r4.u64 + ctx.r28.u64;
	// addze r25,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r25.s64 = temp.s64;
	// srawi r4,r27,5
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 5;
	// rlwinm r26,r29,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r27,r4,1,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// rlwinm r3,r5,0,24,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFC;
	// add r27,r4,r27
	ctx.r27.u64 = ctx.r4.u64 + ctx.r27.u64;
	// add r26,r29,r26
	ctx.r26.u64 = ctx.r29.u64 + ctx.r26.u64;
	// mulli r27,r27,51
	ctx.r27.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(51));
	// subf r27,r27,r30
	ctx.r27.u64 = ctx.r30.u64 - ctx.r27.u64;
	// mulhw r4,r3,r9
	ctx.r4.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32)) >> 32;
	// subfc r23,r27,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r27.u32;
	ctx.r23.u64 = ctx.r11.u64 - ctx.r27.u64;
	// eqv r21,r27,r11
	ctx.r21.u64 = ~(ctx.r27.u64 ^ ctx.r11.u64);
	// eqv r20,r27,r11
	ctx.r20.u64 = ~(ctx.r27.u64 ^ ctx.r11.u64);
	// rlwinm r23,r21,1,31,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0x1;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// addze r23,r23
	temp.s64 = ctx.r23.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r23.u32;
	ctx.r23.s64 = temp.s64;
	// subfc r29,r27,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r27.u32;
	ctx.r29.u64 = ctx.r11.u64 - ctx.r27.u64;
	// divw r31,r31,r6
	ctx.r31.u64 = uint32_t((ctx.r6.s32 && !(ctx.r31.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r31.s32 / ctx.r6.s32 : 0);
	// rlwinm r29,r20,1,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0x1;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addze r21,r29
	temp.s64 = ctx.r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r29.u32;
	ctx.r21.s64 = temp.s64;
	// srawi r4,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 5;
	// divw r27,r30,r6
	ctx.r27.u64 = uint32_t((ctx.r6.s32 && !(ctx.r30.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r30.s32 / ctx.r6.s32 : 0);
	// rlwinm r29,r4,1,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// clrlwi r30,r23,31
	ctx.r30.u64 = ctx.r23.u32 & 0x1;
	// add r29,r4,r29
	ctx.r29.u64 = ctx.r4.u64 + ctx.r29.u64;
	// clrlwi r4,r25,31
	ctx.r4.u64 = ctx.r25.u32 & 0x1;
	// mulli r29,r29,51
	ctx.r29.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(51));
	// add r31,r4,r31
	ctx.r31.u64 = ctx.r4.u64 + ctx.r31.u64;
	// subf r29,r29,r3
	ctx.r29.u64 = ctx.r3.u64 - ctx.r29.u64;
	// rlwinm r25,r31,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r5,0,24,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xF8;
	// subfc r23,r29,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r29.u32;
	ctx.r23.u64 = ctx.r11.u64 - ctx.r29.u64;
	// add r25,r31,r25
	ctx.r25.u64 = ctx.r31.u64 + ctx.r25.u64;
	// eqv r29,r29,r11
	ctx.r29.u64 = ~(ctx.r29.u64 ^ ctx.r11.u64);
	// mulhw r31,r4,r9
	ctx.r31.s64 = (int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32)) >> 32;
	// rlwinm r29,r29,1,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x1;
	// add r31,r31,r4
	ctx.r31.u64 = ctx.r31.u64 + ctx.r4.u64;
	// addze r23,r29
	temp.s64 = ctx.r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r29.u32;
	ctx.r23.s64 = temp.s64;
	// srawi r31,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 5;
	// add r20,r30,r27
	ctx.r20.u64 = ctx.r30.u64 + ctx.r27.u64;
	// rlwinm r30,r31,1,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// clrlwi r29,r22,31
	ctx.r29.u64 = ctx.r22.u32 & 0x1;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// mulli r31,r31,51
	ctx.r31.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(51));
	// rlwinm r26,r26,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r8,r10
	ctx.r28.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r22,r7,1
	ctx.r22.s64 = ctx.r7.s64 + 1;
	// subf r30,r31,r4
	ctx.r30.u64 = ctx.r4.u64 - ctx.r31.u64;
	// addi r31,r26,10
	ctx.r31.s64 = ctx.r26.s64 + 10;
	// add r17,r8,r10
	ctx.r17.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r16,r7,257
	ctx.r16.s64 = ctx.r7.s64 + 257;
	// subfc r26,r30,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r30.u32;
	ctx.r26.u64 = ctx.r11.u64 - ctx.r30.u64;
	// stbx r29,r28,r22
	REX_STORE_U8(ctx.r28.u32 + ctx.r22.u32, ctx.r29.u8);
	// eqv r24,r30,r11
	ctx.r24.u64 = ~(ctx.r30.u64 ^ ctx.r11.u64);
	// add r19,r8,r10
	ctx.r19.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r18,r7,513
	ctx.r18.s64 = ctx.r7.s64 + 513;
	// rlwinm r25,r25,1,24,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFE;
	// rlwinm r29,r24,1,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0x1;
	// rlwinm r5,r5,0,24,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFC;
	// stbx r25,r17,r16
	REX_STORE_U8(ctx.r17.u32 + ctx.r16.u32, ctx.r25.u8);
	// add r15,r8,r10
	ctx.r15.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r14,r7,2
	ctx.r14.s64 = ctx.r7.s64 + 2;
	// stbx r31,r19,r18
	REX_STORE_U8(ctx.r19.u32 + ctx.r18.u32, ctx.r31.u8);
	// eqv r28,r30,r11
	ctx.r28.u64 = ~(ctx.r30.u64 ^ ctx.r11.u64);
	// addze r25,r29
	temp.s64 = ctx.r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r29.u32;
	ctx.r25.s64 = temp.s64;
	// mulhw r31,r5,r9
	ctx.r31.s64 = (int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32)) >> 32;
	// stbx r20,r15,r14
	REX_STORE_U8(ctx.r15.u32 + ctx.r14.u32, ctx.r20.u8);
	// clrlwi r26,r21,31
	ctx.r26.u64 = ctx.r21.u32 & 0x1;
	// subfc r30,r30,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r30.u32;
	ctx.r30.u64 = ctx.r11.u64 - ctx.r30.u64;
	// divw r29,r4,r6
	ctx.r29.u64 = uint32_t((ctx.r6.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r4.s32 / ctx.r6.s32 : 0);
	// add r31,r31,r5
	ctx.r31.u64 = ctx.r31.u64 + ctx.r5.u64;
	// rlwinm r30,r28,1,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x1;
	// add r4,r26,r27
	ctx.r4.u64 = ctx.r26.u64 + ctx.r27.u64;
	// addze r28,r30
	temp.s64 = ctx.r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r30.u32;
	ctx.r28.s64 = temp.s64;
	// ld r24,-160(r1)
	ctx.r24.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// srawi r30,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r30.s64 = ctx.r31.s32 >> 5;
	// clrlwi r31,r28,31
	ctx.r31.u64 = ctx.r28.u32 & 0x1;
	// rlwinm r28,r30,1,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// rlwinm r28,r4,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r30,r30,51
	ctx.r30.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(51));
	// subf r27,r30,r5
	ctx.r27.u64 = ctx.r5.u64 - ctx.r30.u64;
	// add r28,r4,r28
	ctx.r28.u64 = ctx.r4.u64 + ctx.r28.u64;
	// subfc r26,r27,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r27.u32;
	ctx.r26.u64 = ctx.r11.u64 - ctx.r27.u64;
	// eqv r27,r27,r11
	ctx.r27.u64 = ~(ctx.r27.u64 ^ ctx.r11.u64);
	// rlwinm r30,r31,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r4,r27,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x1;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// addze r27,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r27.s64 = temp.s64;
	// divw r4,r5,r6
	ctx.r4.u64 = uint32_t((ctx.r6.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r5.s32 / ctx.r6.s32 : 0);
	// divw r30,r3,r6
	ctx.r30.u64 = uint32_t((ctx.r6.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r3.s32 / ctx.r6.s32 : 0);
	// clrlwi r5,r27,31
	ctx.r5.u64 = ctx.r27.u32 & 0x1;
	// clrlwi r3,r23,31
	ctx.r3.u64 = ctx.r23.u32 & 0x1;
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r5,r3,r30
	ctx.r5.u64 = ctx.r3.u64 + ctx.r30.u64;
	// rlwinm r27,r28,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r5,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r30,r25,31
	ctx.r30.u64 = ctx.r25.u32 & 0x1;
	// add r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 + ctx.r3.u64;
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + ctx.r28.u64;
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r26,r8,r10
	ctx.r26.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r25,r8,r10
	ctx.r25.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r23,r8,r10
	ctx.r23.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r22,r7,514
	ctx.r22.s64 = ctx.r7.s64 + 514;
	// addi r28,r7,258
	ctx.r28.s64 = ctx.r7.s64 + 258;
	// addi r29,r7,3
	ctx.r29.s64 = ctx.r7.s64 + 3;
	// addi r21,r7,515
	ctx.r21.s64 = ctx.r7.s64 + 515;
	// rlwinm r3,r3,1,24,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFE;
	// addi r27,r27,10
	ctx.r27.s64 = ctx.r27.s64 + 10;
	// addi r31,r31,10
	ctx.r31.s64 = ctx.r31.s64 + 10;
	// stbx r3,r24,r10
	REX_STORE_U8(ctx.r24.u32 + ctx.r10.u32, ctx.r3.u8);
	// rlwinm r5,r5,1,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFE;
	// stbx r27,r4,r22
	REX_STORE_U8(ctx.r4.u32 + ctx.r22.u32, ctx.r27.u8);
	// stbx r30,r25,r29
	REX_STORE_U8(ctx.r25.u32 + ctx.r29.u32, ctx.r30.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stbx r5,r26,r28
	REX_STORE_U8(ctx.r26.u32 + ctx.r28.u32, ctx.r5.u8);
	// stbx r31,r23,r21
	REX_STORE_U8(ctx.r23.u32 + ctx.r21.u32, ctx.r31.u8);
	// bdnz 0x826c964c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826C964C;
	// lwz r11,-176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// addi r8,r8,3072
	ctx.r8.s64 = ctx.r8.s64 + 3072;
	// lwz r5,-172(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// stw r10,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r10.u32);
	// stw r11,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r11.u32);
	// bne 0x826c9634
	if (!ctx.cr0.eq) goto loc_826C9634;
	// lwz r10,-168(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// lwz r5,-164(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
	// addi r8,r10,768
	ctx.r8.s64 = ctx.r10.s64 + 768;
	// addi r4,r5,64
	ctx.r4.s64 = ctx.r5.s64 + 64;
	// stw r8,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r8.u32);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x826c9628
	if (ctx.cr6.lt) goto loc_826C9628;
	// b 0x825e3620
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826F2318) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35f4
	ctx.lr = 0x826F2320;
	__savegprlr_23(ctx, base);
	// lwz r11,14624(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 14624);
	// subf r27,r7,r8
	ctx.r27.u64 = ctx.r8.u64 - ctx.r7.u64;
	// lwz r10,14480(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826f2360
	if (ctx.cr6.eq) goto loc_826F2360;
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r31,14628(r9)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 14628);
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// lwz r30,14632(r9)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 14632);
	// mullw r29,r8,r7
	ctx.r29.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mullw r28,r31,r7
	ctx.r28.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r7.s32);
	// subf r26,r10,r8
	ctx.r26.u64 = ctx.r8.u64 - ctx.r10.u64;
	// subf r25,r11,r31
	ctx.r25.u64 = ctx.r31.u64 - ctx.r11.u64;
	// subf r24,r11,r30
	ctx.r24.u64 = ctx.r30.u64 - ctx.r11.u64;
	// b 0x826f237c
	goto loc_826F237C;
loc_826F2360:
	// lwz r11,14588(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 14588);
	// mullw r29,r11,r7
	ctx.r29.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// subf r26,r10,r11
	ctx.r26.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r28,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r29.s32 >> 2;
	// srawi r8,r26,2
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r26.s32 >> 2;
	// addze r25,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r25.s64 = temp.s64;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
loc_826F237C:
	// lwz r10,14604(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14604);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lwz r8,14588(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 14588);
	// lwz r11,14608(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 14608);
	// srawi r31,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r10.s32 >> 2;
	// lwz r23,14492(r9)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r9.u32 + 14492);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// lwz r30,14500(r9)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 14500);
	// addze r31,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r31.s64 = temp.s64;
	// srawi r8,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 2;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// mullw r8,r23,r7
	ctx.r8.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r7.s32);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r4,r8,r3
	ctx.r4.u64 = ctx.r8.u64 + ctx.r3.u64;
	// ble cr6,0x826f2458
	if (!ctx.cr6.gt) goto loc_826F2458;
	// addi r6,r5,-1
	ctx.r6.s64 = ctx.r5.s64 + -1;
	// lwz r7,14480(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 14480);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
loc_826F23E4:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x826f2440
	if (!ctx.cr6.gt) goto loc_826F2440;
	// addi r11,r4,-5
	ctx.r11.s64 = ctx.r4.s64 + -5;
loc_826F23F4:
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stb r7,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// lbz r3,1(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// stb r3,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r3.u8);
	// lbz r7,2(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// stb r7,9(r11)
	REX_STORE_U8(ctx.r11.u32 + 9, ctx.r7.u8);
	// lbz r3,3(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stb r3,11(r11)
	REX_STORE_U8(ctx.r11.u32 + 11, ctx.r3.u8);
	// lbzu r7,1(r6)
	ea = 1 + ctx.r6.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r6.u32 = ea;
	// stb r7,10(r11)
	REX_STORE_U8(ctx.r11.u32 + 10, ctx.r7.u8);
	// stb r7,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// lbzu r7,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// stb r7,12(r11)
	REX_STORE_U8(ctx.r11.u32 + 12, ctx.r7.u8);
	// stbu r7,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// lwz r7,14480(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 14480);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x826f23f4
	if (ctx.cr6.lt) goto loc_826F23F4;
loc_826F2440:
	// lwz r11,14492(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 14492);
	// add r10,r26,r10
	ctx.r10.u64 = ctx.r26.u64 + ctx.r10.u64;
	// add r6,r25,r6
	ctx.r6.u64 = ctx.r25.u64 + ctx.r6.u64;
	// add r5,r24,r5
	ctx.r5.u64 = ctx.r24.u64 + ctx.r5.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x826f23e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826F23E4;
loc_826F2458:
	// b 0x825e3644
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826F46A0) {
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
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// bne cr6,0x826f472c
	if (!ctx.cr6.eq) goto loc_826F472C;
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826f46f8
	if (!ctx.cr6.eq) goto loc_826F46F8;
	// lwz r10,14652(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14652);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,84(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r4,36(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826F46E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_826F46F8:
	// lwz r10,14656(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14656);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,84(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r6,48(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r5,44(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r4,40(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826F471C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_826F472C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826f476c
	if (!ctx.cr6.eq) goto loc_826F476C;
	// lwz r10,14664(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14664);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,84(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r6,32(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r5,28(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r4,24(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826F475C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_826F476C:
	// lwz r4,14660(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 14660);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,84(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r8,48(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r7,44(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r6,40(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// lwz r5,32(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r4,28(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x826F479C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826F8DA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e3600
	ctx.lr = 0x826F8DA8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x826f84b8
	ctx.lr = 0x826F8DC4;
	sub_826F84B8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r28,8
	ctx.r5.s64 = ctx.r28.s64 + 8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x826f84b8
	ctx.lr = 0x826F8DDC;
	sub_826F84B8(ctx, base);
	// add r27,r3,r27
	ctx.r27.u64 = ctx.r3.u64 + ctx.r27.u64;
	// cmpwi cr6,r26,8
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 8, ctx.xer);
	// ble cr6,0x826f8e30
	if (!ctx.cr6.gt) goto loc_826F8E30;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 + ctx.r28.u64;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// addi r5,r28,8
	ctx.r5.s64 = ctx.r28.s64 + 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826f84b8
	ctx.lr = 0x826F8E0C;
	sub_826F84B8(ctx, base);
	// add r27,r3,r27
	ctx.r27.u64 = ctx.r3.u64 + ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826f84b8
	ctx.lr = 0x826F8E24;
	sub_826F84B8(ctx, base);
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825e3650
	__restgprlr_26(ctx, base);
	return;
loc_826F8E30:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825e3650
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826FBCB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35d0
	ctx.lr = 0x826FBCC0;
	__savegprlr_14(ctx, base);
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// stw r7,52(r1)
	REX_STORE_U32(ctx.r1.u32 + 52, ctx.r7.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r8,60(r1)
	REX_STORE_U32(ctx.r1.u32 + 60, ctx.r8.u32);
	// addi r7,r11,19884
	ctx.r7.s64 = ctx.r11.s64 + 19884;
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r6,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f13,15776(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15776);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r9.u32);
	// lfs f0,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,8(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// stw r9,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// stw r9,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r9.u32);
loc_826FBD0C:
	// lbz r7,3(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r8,3(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r3,2(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,2(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// lbz r7,1(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r31,1(r11)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// subf r5,r5,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r5.u64;
	// lbz r29,0(r11)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// srawi r30,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r8.s32 >> 31;
	// lbz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf r31,r7,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r7.u64;
	// lbz r27,7(r11)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// srawi r28,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r5.s32 >> 31;
	// lbz r7,7(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// subf r3,r3,r29
	ctx.r3.u64 = ctx.r29.u64 - ctx.r3.u64;
	// lbz r25,6(r11)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// srawi r26,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r31.s32 >> 31;
	// lbz r29,6(r10)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// subf r7,r7,r27
	ctx.r7.u64 = ctx.r27.u64 - ctx.r7.u64;
	// lbz r27,5(r10)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// srawi r24,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r24.s64 = ctx.r3.s32 >> 31;
	// lbz r23,4(r10)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// subf r29,r29,r25
	ctx.r29.u64 = ctx.r25.u64 - ctx.r29.u64;
	// lbz r25,5(r11)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// srawi r4,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 31;
	// lwz r22,-176(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// srawi r21,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r21.s64 = ctx.r29.s32 >> 31;
	// subf r27,r27,r25
	ctx.r27.u64 = ctx.r25.u64 - ctx.r27.u64;
	// lbz r25,3(r10)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// xor r18,r7,r4
	ctx.r18.u64 = ctx.r7.u64 ^ ctx.r4.u64;
	// lbz r17,2(r10)
	ctx.r17.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// xor r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r30.u64;
	// lbz r19,3(r11)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// xor r20,r5,r28
	ctx.r20.u64 = ctx.r5.u64 ^ ctx.r28.u64;
	// lbz r15,1(r10)
	ctx.r15.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// xor r7,r29,r21
	ctx.r7.u64 = ctx.r29.u64 ^ ctx.r21.u64;
	// lbz r29,2(r11)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// subf r23,r23,r6
	ctx.r23.u64 = ctx.r6.u64 - ctx.r23.u64;
	// lbz r14,1(r11)
	ctx.r14.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// srawi r16,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r16.s64 = ctx.r27.s32 >> 31;
	// subf r5,r30,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r30.u64;
	// lbz r30,0(r10)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf r6,r28,r20
	ctx.r6.u64 = ctx.r20.u64 - ctx.r28.u64;
	// lbz r28,0(r11)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// subf r7,r21,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r21.u64;
	// xor r31,r31,r26
	ctx.r31.u64 = ctx.r31.u64 ^ ctx.r26.u64;
	// subf r8,r4,r18
	ctx.r8.u64 = ctx.r18.u64 - ctx.r4.u64;
	// srawi r4,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r23.s32 >> 31;
	// xor r27,r27,r16
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r16.u64;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// subf r25,r25,r19
	ctx.r25.u64 = ctx.r19.u64 - ctx.r25.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r5,r26,r31
	ctx.r5.u64 = ctx.r31.u64 - ctx.r26.u64;
	// subf r29,r17,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r17.u64;
	// xor r31,r23,r4
	ctx.r31.u64 = ctx.r23.u64 ^ ctx.r4.u64;
	// subf r7,r16,r27
	ctx.r7.u64 = ctx.r27.u64 - ctx.r16.u64;
	// srawi r27,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r25.s32 >> 31;
	// srawi r26,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r29.s32 >> 31;
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// xor r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r24.u64;
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r4,r4,r31
	ctx.r4.u64 = ctx.r31.u64 - ctx.r4.u64;
	// subf r23,r15,r14
	ctx.r23.u64 = ctx.r14.u64 - ctx.r15.u64;
	// subf r3,r24,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r24.u64;
	// xor r8,r25,r27
	ctx.r8.u64 = ctx.r25.u64 ^ ctx.r27.u64;
	// xor r7,r29,r26
	ctx.r7.u64 = ctx.r29.u64 ^ ctx.r26.u64;
	// srawi r31,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r23.s32 >> 31;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// subf r7,r26,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r26.u64;
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// subf r8,r27,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r27.u64;
	// xor r4,r23,r31
	ctx.r4.u64 = ctx.r23.u64 ^ ctx.r31.u64;
	// add r3,r6,r22
	ctx.r3.u64 = ctx.r6.u64 + ctx.r22.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r31,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r31.u64;
	// stw r3,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r3.u32);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// subf r5,r30,r28
	ctx.r5.u64 = ctx.r28.u64 - ctx.r30.u64;
	// lbz r4,7(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r6,7(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// lbz r30,6(r11)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// srawi r31,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r5.s32 >> 31;
	// lbz r8,6(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// subf r6,r6,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r6.u64;
	// lbz r4,5(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// xor r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r31.u64;
	// subf r8,r8,r30
	ctx.r8.u64 = ctx.r30.u64 - ctx.r8.u64;
	// lbz r30,5(r11)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// srawi r29,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r6.s32 >> 31;
	// lbz r28,4(r10)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// srawi r27,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r8.s32 >> 31;
	// lbz r26,4(r11)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// subf r30,r4,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r4.u64;
	// lwz r25,-168(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// xor r24,r6,r29
	ctx.r24.u64 = ctx.r6.u64 ^ ctx.r29.u64;
	// lwz r23,-172(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// xor r6,r8,r27
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r27.u64;
	// lwz r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// srawi r22,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r22.s64 = ctx.r30.s32 >> 31;
	// subf r28,r28,r26
	ctx.r28.u64 = ctx.r26.u64 - ctx.r28.u64;
	// subf r6,r27,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r27.u64;
	// subf r8,r29,r24
	ctx.r8.u64 = ctx.r24.u64 - ctx.r29.u64;
	// xor r30,r30,r22
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r22.u64;
	// srawi r29,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r28.s32 >> 31;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// subf r6,r22,r30
	ctx.r6.u64 = ctx.r30.u64 - ctx.r22.u64;
	// xor r30,r28,r29
	ctx.r30.u64 = ctx.r28.u64 ^ ctx.r29.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// subf r6,r29,r30
	ctx.r6.u64 = ctx.r30.u64 - ctx.r29.u64;
	// subf r5,r31,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r31.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lwz r6,44(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r8,r8,r23
	ctx.r8.u64 = ctx.r8.u64 + ctx.r23.u64;
	// add r7,r7,r25
	ctx.r7.u64 = ctx.r7.u64 + ctx.r25.u64;
	// stw r8,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r8.u32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r7,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r7.u32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// bdnz 0x826fbd0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826FBD0C;
	// lwz r10,52(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lwz r7,60(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 60);
	// add r11,r8,r3
	ctx.r11.u64 = ctx.r8.u64 + ctx.r3.u64;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// b 0x825e3620
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82707AE0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,7208(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82707b80
	if (!ctx.cr6.gt) goto loc_82707B80;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82707b04
	if (ctx.cr6.eq) goto loc_82707B04;
	// ld r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 8);
	// std r11,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// ld r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// std r10,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r10.u64);
loc_82707B04:
	// lwz r9,7208(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 7208);
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82707b68
	if (ctx.cr6.eq) goto loc_82707B68;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82707b48
	if (ctx.cr6.eq) goto loc_82707B48;
	// ld r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r9,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r9.u64);
	// ld r8,24(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 24);
	// stdu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r8.u64);
	ctx.r10.u32 = ea;
	// stdu r8,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r8.u64);
	ctx.r11.u32 = ea;
	// std r8,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, ctx.r8.u64);
	// blr 
	return;
loc_82707B48:
	// ld r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r9,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r9.u64);
	// ld r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// stdu r8,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r8.u64);
	ctx.r11.u32 = ea;
	// std r8,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, ctx.r8.u64);
	// blr 
	return;
loc_82707B68:
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r10,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r10.u64);
	// ld r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, ctx.r9.u64);
	// blr 
	return;
loc_82707B80:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82709A58) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35d0
	ctx.lr = 0x82709A60;
	__savegprlr_14(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// lwz r11,388(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// stw r4,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r4.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mulli r11,r11,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// stw r8,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r8.u32);
	// stw r9,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r9.u32);
	// lwz r10,27940(r19)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r19.u32 + 27940);
	// lwz r4,31532(r19)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r19.u32 + 31532);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// stw r26,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// mr r14,r6
	ctx.r14.u64 = ctx.r6.u64;
	// stw r26,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// lwz r29,28(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// lwz r28,36(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mr r24,r16
	ctx.r24.u64 = ctx.r16.u64;
	// lwz r18,16(r11)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lwz r15,20(r11)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// lwz r23,24(r11)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mr r21,r26
	ctx.r21.u64 = ctx.r26.u64;
	// lwz r22,32(r11)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// lwz r17,0(r11)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r29,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// stw r28,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// beq cr6,0x82709b78
	if (ctx.cr6.eq) goto loc_82709B78;
	// lwz r30,412(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82709b78
	if (ctx.cr6.lt) goto loc_82709B78;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bgt cr6,0x82709b78
	if (ctx.cr6.gt) goto loc_82709B78;
	// lwz r29,404(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// lwz r28,396(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r26,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r26,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x827094f0
	ctx.lr = 0x82709B28;
	sub_827094F0(ctx, base);
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// lwz r4,31532(r19)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r19.u32 + 31532);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lwz r8,372(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r16,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r16.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r26,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// std r26,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r26.u64);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// std r26,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r26.u64);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82709588
	ctx.lr = 0x82709B64;
	sub_82709588(ctx, base);
	// lwz r8,128(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r3,332(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r29,140(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r28,144(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r7,372(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
loc_82709B78:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// sth r26,0(r20)
	REX_STORE_U16(ctx.r20.u32 + 0, ctx.r26.u16);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r26,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// ble cr6,0x82709c18
	if (!ctx.cr6.gt) goto loc_82709C18;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82709B94:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82709bac
	if (ctx.cr6.eq) goto loc_82709BAC;
	// lhz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mullw r27,r10,r15
	ctx.r27.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r15.s32);
	// rlwinm r25,r27,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
loc_82709BAC:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// add r5,r25,r22
	ctx.r5.u64 = ctx.r25.u64 + ctx.r22.u64;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r4,r14
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r14.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + ctx.r23.u64;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82709be4
	if (!ctx.cr6.lt) goto loc_82709BE4;
	// mullw r11,r11,r11
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// extsh r31,r10
	ctx.r31.s64 = ctx.r10.s16;
	// b 0x82709c08
	goto loc_82709C08;
loc_82709BE4:
	// lhz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r20.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r31,r5,r3
	REX_STORE_U16(ctx.r5.u32 + ctx.r3.u32, ctx.r31.u16);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// lhz r4,0(r20)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r20.u32 + 0);
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// sth r11,0(r20)
	REX_STORE_U16(ctx.r20.u32 + 0, ctx.r11.u16);
loc_82709C08:
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bdnz 0x82709b94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82709B94;
	// stw r6,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
loc_82709C18:
	// lhz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r20.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82709d30
	if (!ctx.cr6.gt) goto loc_82709D30;
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r7,r10,20928
	ctx.r7.s64 = ctx.r10.s64 + 20928;
loc_82709C3C:
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r8,r10,r21
	ctx.r8.u64 = ctx.r10.u64 + ctx.r21.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r16
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r16.u32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r9,r14
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r14.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x82709c88
	if (ctx.cr6.gt) goto loc_82709C88;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82709c7c
	if (ctx.cr6.lt) goto loc_82709C7C;
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// sth r4,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// b 0x82709cfc
	goto loc_82709CFC;
loc_82709C7C:
	// neg r9,r17
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r17.u64);
	// sth r5,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// b 0x82709cfc
	goto loc_82709CFC;
loc_82709C88:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// twllei r18,0
	if (ctx.r18.s32 == 0 || ctx.r18.u32 < 0u) ppc_trap(ctx, base, 0);
	// blt cr6,0x82709cc4
	if (ctx.cr6.lt) goto loc_82709CC4;
	// add r9,r10,r15
	ctx.r9.u64 = ctx.r10.u64 + ctx.r15.u64;
	// divw r31,r9,r18
	ctx.r31.u64 = uint32_t((ctx.r18.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r18.s32 == -1)) ? ctx.r9.s32 / ctx.r18.s32 : 0);
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// andc r9,r18,r9
	ctx.r9.u64 = ctx.r18.u64 & ~ctx.r9.u64;
	// lhzx r31,r31,r7
	ctx.r31.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r7.u32);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// extsh r9,r31
	ctx.r9.s64 = ctx.r31.s16;
	// mullw r9,r9,r17
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r17.s32);
	// sth r31,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r31.u16);
	// b 0x82709cfc
	goto loc_82709CFC;
loc_82709CC4:
	// subf r9,r10,r15
	ctx.r9.u64 = ctx.r15.u64 - ctx.r10.u64;
	// divw r31,r9,r18
	ctx.r31.u64 = uint32_t((ctx.r18.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r18.s32 == -1)) ? ctx.r9.s32 / ctx.r18.s32 : 0);
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// andc r9,r18,r9
	ctx.r9.u64 = ctx.r18.u64 & ~ctx.r9.u64;
	// lhzx r31,r31,r7
	ctx.r31.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r7.u32);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// extsh r9,r31
	ctx.r9.s64 = ctx.r31.s16;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// sth r9,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// mullw r9,r9,r17
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r17.s32);
loc_82709CFC:
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lhz r31,0(r20)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r20.u32 + 0);
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// extsh r9,r31
	ctx.r9.s64 = ctx.r31.s16;
	// mullw r10,r10,r10
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r21,r8,1
	ctx.r21.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r26,r9
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82709c3c
	if (ctx.cr6.lt) goto loc_82709C3C;
	// lwz r7,372(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// stw r6,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
loc_82709D30:
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// lwz r9,388(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x827088d0
	ctx.lr = 0x82709D58;
	sub_827088D0(ctx, base);
	// lwz r9,364(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lhz r10,0(r20)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r20.u32 + 0);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x825e3620
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82716B28) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82716b58
	if (ctx.cr6.eq) goto loc_82716B58;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82716bc8
	if (ctx.cr6.eq) goto loc_82716BC8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82716bc0
	goto loc_82716BC0;
loc_82716B58:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82716bc8
	if (ctx.cr6.eq) goto loc_82716BC8;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82703308
	ctx.lr = 0x82716B70;
	sub_82703308(ctx, base);
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x827035f8
	ctx.lr = 0x82716B78;
	sub_827035F8(ctx, base);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,171
	ctx.r4.s64 = 171;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82703308
	ctx.lr = 0x82716B88;
	sub_82703308(ctx, base);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,27
	ctx.r4.s64 = 27;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82703308
	ctx.lr = 0x82716B98;
	sub_82703308(ctx, base);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,27
	ctx.r4.s64 = 27;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82703308
	ctx.lr = 0x82716BA8;
	sub_82703308(ctx, base);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,27
	ctx.r4.s64 = 27;
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82703308
	ctx.lr = 0x82716BB8;
	sub_82703308(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,27
	ctx.r4.s64 = 27;
loc_82716BC0:
	// lwz r3,7868(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x82703308
	ctx.lr = 0x82716BC8;
	sub_82703308(ctx, base);
loc_82716BC8:
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

DEFINE_REX_FUNC(sub_8271BEB0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35fc
	ctx.lr = 0x8271BEB8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8271bfb0
	if (!ctx.cr6.eq) goto loc_8271BFB0;
	// lhz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addic. r9,r10,-2
	ctx.xer.ca = ctx.r10.u32 > 1;
	ctx.r9.s64 = ctx.r10.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x8271bf44
	if (!ctx.cr0.gt) goto loc_8271BF44;
	// addi r28,r4,-4
	ctx.r28.s64 = ctx.r4.s64 + -4;
loc_8271BEF8:
	// lwz r11,20036(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20036);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lhz r10,6(r28)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r28.u32 + 6);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r9,r11,4997
	ctx.r9.s64 = ctx.r11.s64 + 4997;
	// lhzu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r28.u32 = ea;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// bl 0x8272b668
	ctx.lr = 0x8271BF28;
	sub_8272B668(ctx, base);
	// lhz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// add r27,r3,r27
	ctx.r27.u64 = ctx.r3.u64 + ctx.r27.u64;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r30,r4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8271bef8
	if (ctx.cr6.lt) goto loc_8271BEF8;
loc_8271BF44:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,20036(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20036);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r10,r10,5000
	ctx.r10.s64 = ctx.r10.s64 + 5000;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lwzx r6,r9,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// bl 0x8272b788
	ctx.lr = 0x8271BF7C;
	sub_8272B788(ctx, base);
	// add r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 + ctx.r27.u64;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// bge cr6,0x8271bf9c
	if (!ctx.cr6.lt) goto loc_8271BF9C;
	// lwz r10,28572(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28572);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,28572(r31)
	REX_STORE_U32(ctx.r31.u32 + 28572, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x825e364c
	__restgprlr_25(ctx, base);
	return;
loc_8271BF9C:
	// lwz r10,28576(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28576);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,28576(r31)
	REX_STORE_U32(ctx.r31.u32 + 28576, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x825e364c
	__restgprlr_25(ctx, base);
	return;
loc_8271BFB0:
	// lhz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 0);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// li r6,119
	ctx.r6.s64 = 119;
	// bge cr6,0x8271c098
	if (!ctx.cr6.lt) goto loc_8271C098;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,20048(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20048);
	// bl 0x8272b9e8
	ctx.lr = 0x8271BFD4;
	sub_8272B9E8(ctx, base);
	// lhz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8271c084
	if (!ctx.cr6.gt) goto loc_8271C084;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// li r30,2
	ctx.r30.s64 = 2;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8271c048
	if (!ctx.cr6.gt) goto loc_8271C048;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_8271BFFC:
	// lwz r11,20040(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20040);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lhz r10,6(r27)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 6);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r9,r11,5003
	ctx.r9.s64 = ctx.r11.s64 + 5003;
	// lhzu r11,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r27.u32 = ea;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// bl 0x8272b668
	ctx.lr = 0x8271C02C;
	sub_8272B668(ctx, base);
	// lhz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r30,r4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8271bffc
	if (ctx.cr6.lt) goto loc_8271BFFC;
loc_8271C048:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,20040(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20040);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r10,r10,5006
	ctx.r10.s64 = ctx.r10.s64 + 5006;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lwzx r6,r9,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// bl 0x8272b668
	ctx.lr = 0x8271C080;
	sub_8272B668(ctx, base);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
loc_8271C084:
	// lwz r11,28580(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28580);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r11,28580(r31)
	REX_STORE_U32(ctx.r31.u32 + 28580, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x825e364c
	__restgprlr_25(ctx, base);
	return;
loc_8271C098:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,20052(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20052);
	// bl 0x8272b9e8
	ctx.lr = 0x8271C0A4;
	sub_8272B9E8(ctx, base);
	// lhz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8271c154
	if (!ctx.cr6.gt) goto loc_8271C154;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// li r30,2
	ctx.r30.s64 = 2;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8271c118
	if (!ctx.cr6.gt) goto loc_8271C118;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_8271C0CC:
	// lwz r11,20036(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20036);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lhz r10,6(r27)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 6);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r9,r11,4997
	ctx.r9.s64 = ctx.r11.s64 + 4997;
	// lhzu r11,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r27.u32 = ea;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// bl 0x8272b668
	ctx.lr = 0x8271C0FC;
	sub_8272B668(ctx, base);
	// lhz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r30,r4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8271c0cc
	if (ctx.cr6.lt) goto loc_8271C0CC;
loc_8271C118:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,20036(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20036);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r10,r10,5000
	ctx.r10.s64 = ctx.r10.s64 + 5000;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lwzx r6,r9,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// bl 0x8272b668
	ctx.lr = 0x8271C150;
	sub_8272B668(ctx, base);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
loc_8271C154:
	// lwz r11,28584(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28584);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r11,28584(r31)
	REX_STORE_U32(ctx.r31.u32 + 28584, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x825e364c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8272CAC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35f4
	ctx.lr = 0x8272CAC8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,7868(r3)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 7868);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r23,r4,4
	ctx.r23.s64 = ctx.r4.s64 + 4;
	// li r25,1
	ctx.r25.s64 = 1;
loc_8272CAE8:
	// lwz r11,28568(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8272cb10
	if (ctx.cr6.eq) goto loc_8272CB10;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r25,-1
	ctx.r7.s64 = ctx.r25.s64 + -1;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8271beb0
	ctx.lr = 0x8272CB10;
	sub_8271BEB0(ctx, base);
loc_8272CB10:
	// lwz r11,28560(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28560);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8272cb3c
	if (ctx.cr6.eq) goto loc_8272CB3C;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8271c168
	ctx.lr = 0x8272CB30;
	sub_8271C168(ctx, base);
	// lwz r11,30200(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30200);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,30200(r31)
	REX_STORE_U32(ctx.r31.u32 + 30200, ctx.r10.u32);
loc_8272CB3C:
	// lhz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 0);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,119
	ctx.r7.s64 = 119;
	// lwz r6,20048(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20048);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8272b890
	ctx.lr = 0x8272CB5C;
	sub_8272B890(ctx, base);
	// lwz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8272cbe0
	if (!ctx.cr6.eq) goto loc_8272CBE0;
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// li r30,2
	ctx.r30.s64 = 2;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// ble cr6,0x8272cbbc
	if (!ctx.cr6.gt) goto loc_8272CBBC;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_8272CB88:
	// lhz r10,6(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 6);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lhzu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// bl 0x8272b2c8
	ctx.lr = 0x8272CBA4;
	sub_8272B2C8(ctx, base);
	// lhz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8272cb88
	if (ctx.cr6.lt) goto loc_8272CB88;
loc_8272CBBC:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// bl 0x8272b498
	ctx.lr = 0x8272CBE0;
	sub_8272B498(ctx, base);
loc_8272CBE0:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,256
	ctx.r26.s64 = ctx.r26.s64 + 256;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 4, ctx.xer);
	// ble cr6,0x8272cae8
	if (!ctx.cr6.gt) goto loc_8272CAE8;
	// lwz r11,28568(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8272cc1c
	if (ctx.cr6.eq) goto loc_8272CC1C;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8271beb0
	ctx.lr = 0x8272CC1C;
	sub_8271BEB0(ctx, base);
loc_8272CC1C:
	// lwz r11,28560(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28560);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8272cc48
	if (ctx.cr6.eq) goto loc_8272CC48;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8271c168
	ctx.lr = 0x8272CC3C;
	sub_8271C168(ctx, base);
	// lwz r11,30200(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30200);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,30200(r31)
	REX_STORE_U32(ctx.r31.u32 + 30200, ctx.r10.u32);
loc_8272CC48:
	// lhz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 0);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,119
	ctx.r7.s64 = 119;
	// lwz r6,20052(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20052);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8272b890
	ctx.lr = 0x8272CC68;
	sub_8272B890(ctx, base);
	// lwz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8272cce8
	if (!ctx.cr6.eq) goto loc_8272CCE8;
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// li r30,2
	ctx.r30.s64 = 2;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// ble cr6,0x8272ccc4
	if (!ctx.cr6.gt) goto loc_8272CCC4;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_8272CC90:
	// lhz r10,6(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 6);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lhzu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// bl 0x8272af28
	ctx.lr = 0x8272CCAC;
	sub_8272AF28(ctx, base);
	// lhz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8272cc90
	if (ctx.cr6.lt) goto loc_8272CC90;
loc_8272CCC4:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// bl 0x8272b0f8
	ctx.lr = 0x8272CCE8;
	sub_8272B0F8(ctx, base);
loc_8272CCE8:
	// lwz r11,28568(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// addi r26,r26,256
	ctx.r26.s64 = ctx.r26.s64 + 256;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8272cd18
	if (ctx.cr6.eq) goto loc_8272CD18;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,5
	ctx.r7.s64 = 5;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8271beb0
	ctx.lr = 0x8272CD18;
	sub_8271BEB0(ctx, base);
loc_8272CD18:
	// lwz r11,28560(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28560);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8272cd44
	if (ctx.cr6.eq) goto loc_8272CD44;
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8271c168
	ctx.lr = 0x8272CD38;
	sub_8271C168(ctx, base);
	// lwz r11,30200(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30200);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,30200(r31)
	REX_STORE_U32(ctx.r31.u32 + 30200, ctx.r10.u32);
loc_8272CD44:
	// lhz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 0);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,119
	ctx.r7.s64 = 119;
	// lwz r6,20052(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20052);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8272b890
	ctx.lr = 0x8272CD64;
	sub_8272B890(ctx, base);
	// lwz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8272cde4
	if (!ctx.cr6.eq) goto loc_8272CDE4;
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// li r30,2
	ctx.r30.s64 = 2;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// ble cr6,0x8272cdc0
	if (!ctx.cr6.gt) goto loc_8272CDC0;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_8272CD8C:
	// lhz r10,6(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 6);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lhzu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// bl 0x8272af28
	ctx.lr = 0x8272CDA8;
	sub_8272AF28(ctx, base);
	// lhz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8272cd8c
	if (ctx.cr6.lt) goto loc_8272CD8C;
loc_8272CDC0:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// bl 0x8272b0f8
	ctx.lr = 0x8272CDE4;
	sub_8272B0F8(ctx, base);
loc_8272CDE4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x825e3644
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8273CDA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,12338
	ctx.r9.s64 = 808583168;
	// lis r10,22101
	ctx.r10.s64 = 1448411136;
	// ori r6,r9,13385
	ctx.r6.u64 = ctx.r9.u64 | 13385;
	// ori r8,r10,22857
	ctx.r8.u64 = ctx.r10.u64 | 22857;
	// lis r7,12849
	ctx.r7.s64 = 842072064;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// ori r5,r7,22105
	ctx.r5.u64 = ctx.r7.u64 | 22105;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8273cdf8
	if (ctx.cr6.eq) goto loc_8273CDF8;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8273cdf8
	if (ctx.cr6.eq) goto loc_8273CDF8;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8273cdf8
	if (ctx.cr6.eq) goto loc_8273CDF8;
	// lis r11,12593
	ctx.r11.s64 = 825294848;
	// ori r10,r11,13392
	ctx.r10.u64 = ctx.r11.u64 | 13392;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8273cdf8
	if (ctx.cr6.eq) goto loc_8273CDF8;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_8273CDF8:
	// lwz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,16(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8273ceb0
	if (ctx.cr6.eq) goto loc_8273CEB0;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8273ceb0
	if (ctx.cr6.eq) goto loc_8273CEB0;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8273ceb0
	if (ctx.cr6.eq) goto loc_8273CEB0;
	// lis r10,12889
	ctx.r10.s64 = 844693504;
	// ori r4,r10,21849
	ctx.r4.u64 = ctx.r10.u64 | 21849;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8273ceb0
	if (ctx.cr6.eq) goto loc_8273CEB0;
	// lis r10,22870
	ctx.r10.s64 = 1498808320;
	// ori r4,r10,22869
	ctx.r4.u64 = ctx.r10.u64 | 22869;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8273ceb0
	if (ctx.cr6.eq) goto loc_8273CEB0;
	// lis r10,21849
	ctx.r10.s64 = 1431896064;
	// ori r4,r10,22105
	ctx.r4.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8273ceb0
	if (ctx.cr6.eq) goto loc_8273CEB0;
	// lis r10,16729
	ctx.r10.s64 = 1096351744;
	// ori r4,r10,21846
	ctx.r4.u64 = ctx.r10.u64 | 21846;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8273ceb0
	if (ctx.cr6.eq) goto loc_8273CEB0;
	// lis r10,12593
	ctx.r10.s64 = 825294848;
	// ori r4,r10,22094
	ctx.r4.u64 = ctx.r10.u64 | 22094;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8273ceb0
	if (ctx.cr6.eq) goto loc_8273CEB0;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r4,r10,22094
	ctx.r4.u64 = ctx.r10.u64 | 22094;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8273ceb0
	if (ctx.cr6.eq) goto loc_8273CEB0;
	// lis r10,22066
	ctx.r10.s64 = 1446117376;
	// ori r4,r10,12598
	ctx.r4.u64 = ctx.r10.u64 | 12598;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8273ceb0
	if (ctx.cr6.eq) goto loc_8273CEB0;
	// lis r10,22068
	ctx.r10.s64 = 1446248448;
	// ori r4,r10,12592
	ctx.r4.u64 = ctx.r10.u64 | 12592;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8273ceb0
	if (ctx.cr6.eq) goto loc_8273CEB0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273cec0
	if (ctx.cr6.eq) goto loc_8273CEC0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8273ceb0
	if (ctx.cr6.eq) goto loc_8273CEB0;
loc_8273CEA8:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_8273CEB0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273cec0
	if (ctx.cr6.eq) goto loc_8273CEC0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8273cee4
	if (!ctx.cr6.eq) goto loc_8273CEE4;
loc_8273CEC0:
	// lhz r10,14(r7)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 14);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// beq cr6,0x8273cee4
	if (ctx.cr6.eq) goto loc_8273CEE4;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// beq cr6,0x8273cee4
	if (ctx.cr6.eq) goto loc_8273CEE4;
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// beq cr6,0x8273cee4
	if (ctx.cr6.eq) goto loc_8273CEE4;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x8273cea8
	if (!ctx.cr6.eq) goto loc_8273CEA8;
loc_8273CEE4:
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8273cefc
	if (ctx.cr6.eq) goto loc_8273CEFC;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8273cefc
	if (ctx.cr6.eq) goto loc_8273CEFC;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8273cf18
	if (!ctx.cr6.eq) goto loc_8273CF18;
loc_8273CEFC:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8273cf18
	if (!ctx.cr6.eq) goto loc_8273CF18;
	// lhz r10,14(r7)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 14);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x8273cf18
	if (!ctx.cr6.eq) goto loc_8273CF18;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_8273CF18:
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8273cf30
	if (ctx.cr6.eq) goto loc_8273CF30;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8273cf30
	if (ctx.cr6.eq) goto loc_8273CF30;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8273cf48
	if (!ctx.cr6.eq) goto loc_8273CF48;
loc_8273CF30:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8273cf60
	if (ctx.cr6.eq) goto loc_8273CF60;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8273cf60
	if (ctx.cr6.eq) goto loc_8273CF60;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8273cf60
	if (ctx.cr6.eq) goto loc_8273CF60;
loc_8273CF48:
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// li r10,7
	ctx.r10.s64 = 7;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
loc_8273CF60:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82743AB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e3604
	ctx.lr = 0x82743AB8;
	__savegprlr_27(ctx, base);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lvx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r8,r3
	ctx.r10.u64 = ctx.r8.u64 + ctx.r3.u64;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// add r30,r3,r4
	ctx.r30.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v55,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// add r31,r10,r4
	ctx.r31.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vperm128 v4,v63,v55,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v59,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v57,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r29,r4,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lvx128 v60,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r28,r27,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lvsl v6,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r30,r6,r4
	ctx.r30.u64 = ctx.r6.u64 + ctx.r4.u64;
	// lvsl v5,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// vperm128 v2,v62,v57,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v54,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v1,v60,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v61,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v5,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v53,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v12,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r9,r29,r3
	ctx.r9.u64 = ctx.r29.u64 + ctx.r3.u64;
	// lvsl v3,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v11,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v52,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v51,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v31,v56,v58,v3
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvx128 v50,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v3,v61,v54,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r8,r28,r5
	ctx.r8.u64 = ctx.r28.u64 + ctx.r5.u64;
	// lvsl v4,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r31,r4,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vperm128 v2,v53,v52,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v49,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v1,v50,v51,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v47,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v10,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v48,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v9,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v46,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v4,v47,v49,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v8,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v7,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v3,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v1,v46,v48,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vslh v2,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// rlwinm r6,r27,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r8
	ctx.r30.u64 = ctx.r10.u64 + ctx.r8.u64;
	// vslh v30,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v6,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r29,r6,r5
	ctx.r29.u64 = ctx.r6.u64 + ctx.r5.u64;
	// vslh v29,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r28,r10,r30
	ctx.r28.u64 = ctx.r10.u64 + ctx.r30.u64;
	// vadduhm v28,v3,v5
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vmrghb v27,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// vslh v26,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r9,r5,16
	ctx.r9.s64 = ctx.r5.s64 + 16;
	// vadduhm v25,v2,v12
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v24,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v23,v31,v11
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v21,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v22,v30,v10
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v20,v29,v9
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v19,v28,v12
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v18,v26,v8
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v17,v25,v11
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v16,v24,v7
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vadduhm v15,v23,v10
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// stvx128 v19,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v14,v21,v6
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v0,v22,v9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// stvx128 v17,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v13,v20,v8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v12,v18,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// stvx128 v15,r6,r5
	ea = (ctx.r6.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v11,v16,v6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v10,v14,v27
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// stvx128 v0,r10,r29
	ea = (ctx.r10.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r10,r30
	ea = (ctx.r10.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v10,r10,r28
	ea = (ctx.r10.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ble cr6,0x82743ca0
	if (!ctx.cr6.gt) goto loc_82743CA0;
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82743C68:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r30,r11,r4
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// rotlwi r5,r8,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lbzx r29,r31,r11
	ctx.r29.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rotlwi r3,r30,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r8,r30,r3
	ctx.r8.u64 = ctx.r30.u64 + ctx.r3.u64;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// add r3,r8,r29
	ctx.r3.u64 = ctx.r8.u64 + ctx.r29.u64;
	// sth r5,0(r9)
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r5.u16);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// sthx r3,r10,r9
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r3.u16);
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// bdnz 0x82743c68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82743C68;
loc_82743CA0:
	// b 0x825e3654
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82752738) {
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
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8275278c
	if (ctx.cr6.eq) goto loc_8275278C;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r30,-32119
	ctx.r30.s64 = -2104950784;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8275277c
	if (ctx.cr6.eq) goto loc_8275277C;
	// lwz r11,1236(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1236);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82752774;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8275277C:
	// lwz r11,1236(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1236);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8275278C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8275278C:
	// li r3,0
	ctx.r3.s64 = 0;
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

DEFINE_REX_FUNC(sub_82754310) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,5380(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5380);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f11,f7
	ctx.cr6.compare(ctx.f11.f64, ctx.f7.f64);
	// bne cr6,0x82754334
	if (!ctx.cr6.eq) goto loc_82754334;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f11,-18508(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -18508);
	ctx.f11.f64 = double(temp.f32);
loc_82754334:
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82754348
	if (ctx.cr0.eq) goto loc_82754348;
	// addi r11,r1,-96
	ctx.r11.s64 = ctx.r1.s64 + -96;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// b 0x82754350
	goto loc_82754350;
loc_82754348:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r31,r1,-96
	ctx.r31.s64 = ctx.r1.s64 + -96;
loc_82754350:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lfs f8,7024(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 7024);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,0(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// ble cr6,0x8275443c
	if (!ctx.cr6.gt) goto loc_8275443C;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// addi r3,r6,-4
	ctx.r3.s64 = ctx.r6.s64 + -4;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f9,-18512(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -18512);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,-18516(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -18516);
	ctx.f10.f64 = double(temp.f32);
loc_82754388:
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f7.f64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x827543b8
	if (ctx.cr6.lt) goto loc_827543B8;
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// add r6,r30,r10
	ctx.r6.u64 = ctx.r30.u64 + ctx.r10.u64;
	// addi r5,r11,-4
	ctx.r5.s64 = ctx.r11.s64 + -4;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_827543A8:
	// lfsu f13,-4(r6)
	ctx.fpscr.disableFlushMode();
	ea = -4 + ctx.r6.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r6.u32 = ea;
	// lfsu f12,4(r5)
	ea = 4 + ctx.r5.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r5.u32 = ea;
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// bdnz 0x827543a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827543A8;
loc_827543B8:
	// fdivs f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x827543c8
	if (!ctx.cr6.gt) goto loc_827543C8;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
loc_827543C8:
	// fcmpu cr6,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x827543d4
	if (!ctx.cr6.lt) goto loc_827543D4;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
loc_827543D4:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stfsu f0,4(r3)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r3.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r3.u32 = ea;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// blt cr6,0x82754424
	if (ctx.cr6.lt) goto loc_82754424;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
loc_8275440C:
	// lfsx f12,r9,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsu f13,-4(r5)
	ea = -4 + ctx.r5.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r5.u32 = ea;
	// fnmsubs f13,f13,f0,f12
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f0.f64, -ctx.f12.f64)));
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz 0x8275440c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8275440C;
loc_82754424:
	// fnmsubs f0,f0,f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f0.f64, -ctx.f8.f64)));
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// blt cr6,0x82754388
	if (ctx.cr6.lt) goto loc_82754388;
loc_8275443C:
	// stfs f11,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8275F268) {
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
	// lwz r11,14808(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14808);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,3416(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3416);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r9,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8275f2a8
	if (ctx.cr6.eq) goto loc_8275F2A8;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x8275f2b0
	goto loc_8275F2B0;
loc_8275F2A8:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,3
	ctx.r10.s64 = 3;
loc_8275F2B0:
	// stw r11,14812(r31)
	REX_STORE_U32(ctx.r31.u32 + 14812, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,2952(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2952);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,14816(r31)
	REX_STORE_U32(ctx.r31.u32 + 14816, ctx.r10.u32);
	// addi r8,r11,732
	ctx.r8.s64 = ctx.r11.s64 + 732;
	// lwz r10,2112(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2112);
	// addi r7,r11,735
	ctx.r7.s64 = ctx.r11.s64 + 735;
	// lwz r4,248(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,266
	ctx.r10.s64 = ctx.r10.s64 + 266;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r7,r6,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r7,2904(r31)
	REX_STORE_U32(ctx.r31.u32 + 2904, ctx.r7.u32);
	// lwzx r5,r5,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// stw r5,2916(r31)
	REX_STORE_U32(ctx.r31.u32 + 2916, ctx.r5.u32);
	// lwz r11,2124(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 2124);
	// stw r11,2116(r31)
	REX_STORE_U32(ctx.r31.u32 + 2116, ctx.r11.u32);
	// lwzx r10,r6,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// stw r10,2120(r31)
	REX_STORE_U32(ctx.r31.u32 + 2120, ctx.r10.u32);
	// stw r9,456(r31)
	REX_STORE_U32(ctx.r31.u32 + 456, ctx.r9.u32);
	// bl 0x826596b8
	ctx.lr = 0x8275F314;
	sub_826596B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8264ba68
	ctx.lr = 0x8275F31C;
	sub_8264BA68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82661e58
	ctx.lr = 0x8275F328;
	sub_82661E58(ctx, base);
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

DEFINE_REX_FUNC(sub_827768B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e360c
	ctx.lr = 0x827768B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,1120
	ctx.r5.s64 = 1120;
	// vspltish v8,3
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x3)));
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// vspltish v1,7
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x7)));
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// subf r9,r4,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r4.u64;
	// vrlh v10,v12,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, result);
	}
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// vspltish v3,1
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_set1_epi16(short(0x1)));
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// lvx128 v11,r6,r5
	ea = (ctx.r6.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r10,3
	ctx.r11.s64 = ctx.r10.s64 + 3;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// li r3,1
	ctx.r3.s64 = 1;
	// vaddshs v4,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// vspltish v31,5
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_set1_epi16(short(0x5)));
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// vsubshs v2,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// slw r5,r3,r4
	ctx.r5.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r4.u8 & 0x3F));
	// li r10,16
	ctx.r10.s64 = 16;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// bne cr6,0x82776a68
	if (!ctx.cr6.eq) goto loc_82776A68;
	// lvx128 v60,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lvx128 v62,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v10,v62,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v59,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v7,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v5,v58,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v9,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v6,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x82776c4c
	if (!ctx.cr6.gt) goto loc_82776C4C;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82776980:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vor v30,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v9,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// vor v11,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vor v29,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// vor v7,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// lvx128 v57,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v10,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v5,v11,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v27,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// vperm128 v6,v56,v57,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vslh v25,v10,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v27,v5
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vmrglb v22,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v28,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v9,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v19,v26,v11
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v18,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v7,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v23,v10
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vor v5,v22,v22
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v22.u8));
	// vadduhm v26,v21,v28
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vslh v14,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v25,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v24,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v23,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vslh v22,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v20,v30,v14
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vadduhm v19,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vsubshs v18,v29,v27
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vadduhm v17,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vsubshs v16,v0,v22
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vsubshs v15,v0,v21
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vadduhm v14,v19,v4
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v30,v17,v4
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v29,v20,v16
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vadduhm v28,v18,v15
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vadduhm v27,v14,v29
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v26,v30,v28
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vsrah v25,v27,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v26,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v25,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r6,48
	ctx.r6.s64 = ctx.r6.s64 + 48;
	// blt cr6,0x82776980
	if (ctx.cr6.lt) goto loc_82776980;
	// b 0x82776c4c
	goto loc_82776C4C;
loc_82776A68:
	// li r3,32
	ctx.r3.s64 = 32;
	// lvrx128 v52,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v50,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lvlx128 v55,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v53,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v54,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v9,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvrx128 v51,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lvrx128 v49,r3,r9
	temp.u32 = ctx.r3.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v29,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// lvlx128 v48,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v10,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vor128 v5,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v7,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v47,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v9,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v28,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v30,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v29,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v28,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v30,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x82776c4c
	if (!ctx.cr6.gt) goto loc_82776C4C;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r29,32
	ctx.r10.s64 = ctx.r29.s64 + 32;
	// li r30,-32
	ctx.r30.s64 = -32;
	// li r31,-16
	ctx.r31.s64 = -16;
loc_82776AF4:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vor v27,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vor v26,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// vor v7,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vor128 v42,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// vor v11,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v29.u8));
	// lvx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v6,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// lvsl v2,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vor v10,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v28.u8));
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v25,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vslh v28,v11,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v41,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v29,v43,v63,v2
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vslh v24,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v5,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v21,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v10,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v19,v63,v41,v5
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vslh v20,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v18,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v17,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v29,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v16,v7,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v24,v28
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vadduhm v14,v23,v11
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v22,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vor v5,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vslh v24,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v6,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v9,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v30.u8));
	// vmrghb v30,v0,v19
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v21,v20,v10
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vor v28,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v18.u8));
	// vadduhm v18,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v17,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vadduhm v16,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vslh v19,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vslh v20,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v9,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v18,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vslh v22,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v17,v26,v19
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vslh v21,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v16,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vadduhm v26,v24,v14
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vsubshs v20,v27,v20
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vadduhm v24,v23,v9
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v27,v5,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v23,v0,v22
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vsubshs v22,v0,v21
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vadduhm v19,v16,v4
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v21,v18,v4
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v14,v24,v26
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vadduhm v15,v27,v15
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vslh v18,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v27,v20,v23
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v26,v17,v22
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vadduhm v22,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vsubshs v24,v0,v18
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vsubshs v23,v25,v16
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vadduhm v20,v19,v26
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vadduhm v21,v21,v27
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vadduhm v18,v22,v4
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v19,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vsrah v16,v20,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v21,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v15,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// stvx128 v16,r10,r31
	ea = (ctx.r10.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r10,r30
	ea = (ctx.r10.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v14,v15,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v14,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vor128 v2,v42,v42
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v42.u8));
	// blt cr6,0x82776af4
	if (ctx.cr6.lt) goto loc_82776AF4;
loc_82776C4C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827756d8
	ctx.lr = 0x82776C5C;
	sub_827756D8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825e365c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_827BD4F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825e35fc
	ctx.lr = 0x827BD4F8;
	__savegprlr_25(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827bd6d8
	if (!ctx.cr6.eq) goto loc_827BD6D8;
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// li r29,-1
	ctx.r29.s64 = -1;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r6,4(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827bd554
	if (!ctx.cr6.lt) goto loc_827BD554;
	// lwz r8,0(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// subf r30,r11,r10
	ctx.r30.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subfic r7,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r7.u64 = static_cast<uint64_t>(32) - ctx.r10.u64;
	// slw r31,r8,r11
	ctx.r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// or r10,r31,r9
	ctx.r10.u64 = ctx.r31.u64 | ctx.r9.u64;
	// srw r9,r29,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r7.u8 & 0x3F));
	// and r26,r9,r10
	ctx.r26.u64 = ctx.r9.u64 & ctx.r10.u64;
	// srw r10,r8,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r30.u8 & 0x3F));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// b 0x827bd568
	goto loc_827BD568;
loc_827BD554:
	// subfic r8,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r8.u64 = static_cast<uint64_t>(32) - ctx.r10.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srw r7,r29,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r8.u8 & 0x3F));
	// and r26,r7,r9
	ctx.r26.u64 = ctx.r7.u64 & ctx.r9.u64;
	// srw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
loc_827BD568:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x827bd6bc
	if (ctx.cr6.eq) goto loc_827BD6BC;
	// lwz r9,44(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x827bd6bc
	if (ctx.cr6.gt) goto loc_827BD6BC;
	// lwz r9,48(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// lwz r28,32(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// add r8,r9,r26
	ctx.r8.u64 = ctx.r9.u64 + ctx.r26.u64;
	// lwz r30,36(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// addi r25,r9,-1
	ctx.r25.s64 = ctx.r9.s64 + -1;
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
loc_827BD59C:
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x827bd5d0
	if (ctx.cr6.lt) goto loc_827BD5D0;
	// subfic r9,r28,32
	ctx.xer.ca = ctx.r28.u32 <= 32;
	ctx.r9.u64 = static_cast<uint64_t>(32) - ctx.r28.u64;
	// srw r8,r29,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r9.u8 & 0x3F));
	// and r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ctx.r10.u64;
	// lbzx r9,r7,r30
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r30.u32);
	// clrlwi r7,r9,28
	ctx.r7.u64 = ctx.r9.u32 & 0xF;
	// rlwinm r9,r9,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// srw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// lbzx r27,r7,r31
	ctx.r27.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r31.u32);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// b 0x827bd628
	goto loc_827BD628;
loc_827BD5D0:
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x827bd6bc
	if (!ctx.cr6.lt) goto loc_827BD6BC;
	// lwz r7,0(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// subfic r9,r28,32
	ctx.xer.ca = ctx.r28.u32 <= 32;
	ctx.r9.u64 = static_cast<uint64_t>(32) - ctx.r28.u64;
	// slw r27,r7,r11
	ctx.r27.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// srw r8,r29,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r9.u8 & 0x3F));
	// or r9,r27,r10
	ctx.r9.u64 = ctx.r27.u64 | ctx.r10.u64;
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// lbzx r9,r9,r30
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r30.u32);
	// clrlwi r27,r9,28
	ctx.r27.u64 = ctx.r9.u32 & 0xF;
	// rlwinm r9,r9,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// lbzx r27,r27,r31
	ctx.r27.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r31.u32);
	// blt cr6,0x827bd614
	if (ctx.cr6.lt) goto loc_827BD614;
	// srw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// b 0x827bd628
	goto loc_827BD628;
loc_827BD614:
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// srw r10,r7,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
loc_827BD628:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x827bd650
	if (ctx.cr6.lt) goto loc_827BD650;
	// and r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 & ctx.r10.u64;
	// lbzx r8,r9,r30
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r30.u32);
	// clrlwi r7,r8,28
	ctx.r7.u64 = ctx.r8.u32 & 0xF;
	// rlwinm r9,r8,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// srw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// lbzx r8,r7,r31
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r31.u32);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// b 0x827bd698
	goto loc_827BD698;
loc_827BD650:
	// lwz r7,0(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// slw r9,r7,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// and r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 & ctx.r8.u64;
	// lbzx r9,r8,r30
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r30.u32);
	// clrlwi r8,r9,28
	ctx.r8.u64 = ctx.r9.u32 & 0xF;
	// rlwinm r9,r9,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// lbzx r8,r8,r31
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r31.u32);
	// blt cr6,0x827bd684
	if (ctx.cr6.lt) goto loc_827BD684;
	// srw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// b 0x827bd698
	goto loc_827BD698;
loc_827BD684:
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// srw r10,r7,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
loc_827BD698:
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// or r8,r9,r27
	ctx.r8.u64 = ctx.r9.u64 | ctx.r27.u64;
	// stbu r8,1(r25)
	ea = 1 + ctx.r25.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r25.u32 = ea;
	// bne cr6,0x827bd59c
	if (!ctx.cr6.eq) goto loc_827BD59C;
	// stw r6,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r6.u32);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// b 0x825e364c
	__restgprlr_25(ctx, base);
	return;
loc_827BD6BC:
	// lwz r9,48(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r6,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r6.u32);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
loc_827BD6D8:
	// b 0x825e364c
	__restgprlr_25(ctx, base);
	return;
}

