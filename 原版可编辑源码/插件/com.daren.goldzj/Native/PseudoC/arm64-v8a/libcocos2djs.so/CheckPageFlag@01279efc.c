
/* v8::internal::TurboAssembler::CheckPageFlag(v8::internal::Register const&, int,
   v8::internal::Condition, v8::internal::Label*) */

void __thiscall
v8::internal::TurboAssembler::CheckPageFlag
          (TurboAssembler *this,undefined8 param_1,int param_2,int param_4,Label *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_c0;
  int local_b8;
  ulong local_b0;
  uint local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  ulong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar8 = *(long *)(this + 0x198);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!available->IsEmpty()");
  }
  uVar9 = *(undefined8 *)(this + 0x1a8);
  uVar3 = CPURegList::PopLowestIndex((CPURegList *)(this + 0x198));
  local_90 = 0xfffffffffffc0000;
  local_88 = CONCAT71(local_88._1_7_,0x13);
  local_c0 = 0x400000003f;
  if (uVar3 != 0x3f) {
    local_c0 = (ulong)uVar3 | 0x4000000000;
  }
  local_b8 = 0;
  local_b0 = local_b0 & 0xffffffffffffff00;
  local_a8 = local_a8 & 0xffffff00;
  local_80 = 0xffffffff;
  local_78 = 2;
  LogicalMacro(this,&local_c0,param_1,&local_b0,0);
  local_a4 = 0xffffffff;
  local_9c = 2;
  local_98 = 8;
  local_b0 = local_c0;
  local_a8 = local_b8;
  local_90 = 0xffffffff00000000;
  local_88 = 0xffffffff;
  if (local_b8 == 0) {
    uVar6 = 0xc0400000;
    if (local_c0._4_4_ != 0x40) {
      uVar6 = 0x80400000;
    }
  }
  else {
    uVar3 = local_c0._4_4_ - 8U >> 3 | local_c0._4_4_ << 0x1d;
    if (uVar3 < 8) {
      uVar6 = *(undefined4 *)(&DAT_019f3888 + (long)(int)uVar3 * 4);
    }
    else {
      uVar6 = 0x4c00000;
    }
  }
  LoadStoreMacro(this,&local_c0,&local_b0,uVar6);
  uVar7 = (ulong)param_2;
  iVar4 = CountSetBits(uVar7,local_c0._4_4_);
  if (param_4 == 0) {
    if (iVar4 == 1) {
      uVar3 = MaskToBit(uVar7);
      Tbnz(this,(Register *)&local_c0,uVar3,param_5);
      goto LAB_0127a148;
    }
    local_88 = CONCAT71(local_88._1_7_,0x13);
    puVar1 = &DAT_019f4018;
    if (local_c0._4_4_ != 0x40) {
      puVar1 = &DAT_019f4000;
    }
    local_b0 = (ulong)local_b0._1_7_ << 8;
    local_a8 = (uint)local_a8._1_3_ << 8;
    local_80 = 0xffffffff;
    local_78 = 2;
    local_90 = uVar7;
    LogicalMacro(this,puVar1,&local_c0,&local_b0,0x60000000);
    uVar5 = 1;
  }
  else {
    if (iVar4 == 1) {
      uVar3 = MaskToBit(uVar7);
      Tbz(this,(Register *)&local_c0,uVar3,param_5);
      goto LAB_0127a148;
    }
    local_88 = CONCAT71(local_88._1_7_,0x13);
    puVar1 = &DAT_019f4018;
    if (local_c0._4_4_ != 0x40) {
      puVar1 = &DAT_019f4000;
    }
    local_b0 = (ulong)local_b0._1_7_ << 8;
    local_a8 = (uint)local_a8._1_3_ << 8;
    local_80 = 0xffffffff;
    local_78 = 2;
    local_90 = uVar7;
    LogicalMacro(this,puVar1,&local_c0,&local_b0,0x60000000);
    uVar5 = 0;
  }
  B(this,param_5,uVar5);
LAB_0127a148:
  *(long *)(this + 0x198) = lVar8;
  *(undefined8 *)(this + 0x1a8) = uVar9;
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

