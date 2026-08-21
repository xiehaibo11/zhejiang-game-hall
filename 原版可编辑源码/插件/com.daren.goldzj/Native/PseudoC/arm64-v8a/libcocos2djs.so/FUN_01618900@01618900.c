
void FUN_01618900(long param_1,uint param_2,InstructionOperand *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  TurboAssembler *pTVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  ulong local_148;
  undefined4 local_140;
  ulong local_138;
  uint local_130;
  CPURegList *local_128;
  long lStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  char local_f8 [8];
  undefined1 local_f0;
  long local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  uint local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_108 = param_4;
  uStack_100 = param_5;
  if (((param_2 & 0xffc00000) != 0x800000) || (uVar2 = param_2 >> 9 & 0x1f, uVar2 == 0xc)) {
    v8::internal::compiler::Arm64OperandConverter::MemoryOperand((ulong)param_3);
    if ((int)uStack_100 == 0) {
      uVar8 = 0xc0400000;
      if (local_108._4_4_ != 0x40) {
        uVar8 = 0x80400000;
      }
    }
    else {
      uVar2 = local_108._4_4_ - 8U >> 3 | local_108._4_4_ << 0x1d;
      if (uVar2 < 8) {
        uVar8 = *(undefined4 *)(&DAT_019f3888 + (long)(int)uVar2 * 4);
      }
      else {
        uVar8 = 0x4c00000;
      }
    }
    v8::internal::TurboAssembler::LoadStoreMacro
              ((TurboAssembler *)(param_1 + 0xd0),&local_108,&local_b0,uVar8);
    goto LAB_01618c50;
  }
  local_128 = (CPURegList *)(param_1 + 0x268);
  lStack_120 = param_1 + 0x278;
  local_118 = *(undefined8 *)(param_1 + 0x268);
  pTVar1 = (TurboAssembler *)(param_1 + 0xd0);
  local_110 = *(undefined8 *)(param_1 + 0x278);
  uVar4 = v8::internal::UseScratchRegisterScope::AcquireNextAvailable(local_128);
  local_138 = 0x400000003f;
  if (uVar4 != 0x3f) {
    local_138 = (ulong)uVar4 | 0x4000000000;
  }
  local_130 = 0;
  if (uVar2 - 1 < 2) {
    lVar10 = *(long *)(param_3 + 8);
    local_140 = 0;
    local_148 = *(long *)(lVar10 + 0x28 + (ulong)*(byte *)(lVar10 + 4) * 8) >> 0x23 & 0xffffffffU |
                0x4000000000;
    uVar9 = *(ulong *)(lVar10 + 0x28 + (ulong)*(byte *)(lVar10 + 4) * 8 + 8);
    if (((uVar9 & 0x1c) == 4) && (((uint)(uVar9 >> 5) & 0xff) < 0xb)) {
      iVar7 = (int)((long)uVar9 >> 0x23);
      local_c8 = (long)uVar9 >> 0x23 & 0xffffffffU | 0x4000000000;
      local_f8[0] = '\0';
      local_f0 = 0;
      local_d8 = 0;
      local_d0 = 0x13;
      uStack_b8 = 0xffffffff;
      local_c0 = 0;
    }
    else {
      v8::internal::compiler::Arm64OperandConverter::ToImmediate(param_3);
      iVar7 = (int)local_c8;
    }
    if (iVar7 != -1) goto LAB_01618b5c;
LAB_01618acc:
    if ((((local_c8._4_4_ != 0) || ((int)local_c0 != 2)) || (local_f8[0] != '\0')) ||
       ((-1 < local_d8 ||
        (uVar9 = v8::internal::Assembler::IsImmAddSub(-local_d8), (uVar9 & 1) == 0))))
    goto LAB_01618b5c;
    local_90 = -local_d8;
    puVar5 = &local_b0;
    uVar6 = 0x40000000;
    local_b0 = local_b0 & 0xffffffffffffff00;
    local_a8 = local_a8 & 0xffffff00;
    local_88 = CONCAT71(local_88._1_7_,0x13);
    local_80 = 0xffffffff;
    local_78 = CONCAT44(local_78._4_4_,2);
  }
  else {
    if (uVar2 != 3) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    local_140 = 0;
    local_148 = *(long *)(*(long *)(param_3 + 8) + (ulong)*(byte *)(*(long *)(param_3 + 8) + 4) * 8
                         + 0x28) >> 0x23 & 0xffffffffU | 0x4000000000;
    v8::internal::compiler::Arm64OperandConverter::InputOperand2_64((ulong)param_3);
    if ((int)local_c8 == -1) goto LAB_01618acc;
LAB_01618b5c:
    puVar5 = (ulong *)local_f8;
    uVar6 = 0;
  }
  v8::internal::TurboAssembler::AddSubMacro(pTVar1,&local_138,&local_148,puVar5,0,uVar6);
  local_b0 = local_b0 & 0xffffffffffffff00;
  local_a8 = local_a8 & 0xffffff00;
  local_90 = 0;
  local_88 = CONCAT71(local_88._1_7_,0x13);
  local_80 = 0x4000000017;
  uStack_70 = 0xffffffff;
  local_78 = 0;
  v8::internal::TurboAssembler::LogicalMacro(pTVar1,&local_138,&local_138,&local_b0,0);
  local_b0 = local_138;
  local_a8 = local_130;
  local_a4 = 0xffffffff;
  local_9c = 2;
  local_98 = 0;
  local_90 = -0x100000000;
  local_88 = 0xffffffff;
  if ((int)uStack_100 == 0) {
    uVar8 = 0xc0400000;
    if (local_108._4_4_ != 0x40) {
      uVar8 = 0x80400000;
    }
  }
  else {
    uVar2 = local_108._4_4_ - 8U >> 3 | local_108._4_4_ << 0x1d;
    if (uVar2 < 8) {
      uVar8 = *(undefined4 *)(&DAT_019f3888 + (long)(int)uVar2 * 4);
    }
    else {
      uVar8 = 0x4c00000;
    }
  }
  v8::internal::TurboAssembler::LoadStoreMacro(pTVar1,&local_108,&local_b0,uVar8);
  v8::internal::UseScratchRegisterScope::~UseScratchRegisterScope
            ((UseScratchRegisterScope *)&local_128);
LAB_01618c50:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

