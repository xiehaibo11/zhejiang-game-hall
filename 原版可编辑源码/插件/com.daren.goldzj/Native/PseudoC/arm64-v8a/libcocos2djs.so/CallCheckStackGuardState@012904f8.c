
/* v8::internal::RegExpMacroAssemblerARM64::CallCheckStackGuardState(v8::internal::Register) */

void v8::internal::RegExpMacroAssemblerARM64::CallCheckStackGuardState
               (long param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  Operand *pOVar7;
  undefined8 uVar8;
  long lVar9;
  TurboAssembler *pTVar10;
  ulong uVar11;
  undefined8 local_130;
  ulong uStack_128;
  ulong local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  CPURegList *local_100;
  ulong local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  ulong local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  Operand local_b8 [8];
  undefined1 local_b0;
  long local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  local_110 = param_2;
  local_108 = param_3;
  iVar4 = TurboAssembler::ActivationFrameAlignment();
  iVar2 = iVar4 + 7;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  pTVar10 = *(TurboAssembler **)(param_1 + 0x28);
  uVar1 = (iVar2 >> 3) + 2U & -(iVar2 >> 3);
  uVar11 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
  if (uVar1 != 0) {
    local_100 = (CPURegList *)((ulong)local_100 & 0xffffffffffffff00);
    local_f8 = local_f8 & 0xffffffffffffff00;
    local_d8 = 0x13;
    local_d0 = 0xffffffff;
    local_c8 = 2;
    local_e0 = uVar11;
    if ((int)uVar1 < 0) {
      uVar6 = Assembler::IsImmAddSub(-uVar11);
      if ((uVar6 & 1) == 0) goto LAB_012905e8;
      local_b8[0] = (Operand)0x0;
      local_b0 = 0;
      local_88 = 0xffffffff;
      local_90 = 0x13;
      local_80 = CONCAT44(local_80._4_4_,2);
      pOVar7 = local_b8;
      uVar8 = 0;
      local_98 = -uVar11;
    }
    else {
LAB_012905e8:
      pOVar7 = (Operand *)&local_100;
      uVar8 = 0x40000000;
    }
    TurboAssembler::AddSubMacro(pTVar10,&DAT_019f7c44,&DAT_019f7c44,pOVar7,0,uVar8);
    pTVar10 = *(TurboAssembler **)(param_1 + 0x28);
  }
  local_f8 = local_f8 & 0xffffffff00000000;
  local_b8[0] = (Operand)0x0;
  local_b0 = 0;
  local_100 = (CPURegList *)0x4000000019;
  local_98 = 0x10;
  local_90 = 0x13;
  local_88 = 0xffffffff;
  local_80._0_4_ = 2;
  TurboAssembler::Poke(pTVar10,(CPURegister *)&local_100,local_b8);
  local_b8[0] = (Operand)0x0;
  local_b0 = 0;
  local_98 = 0x10;
  local_90 = 0x13;
  local_88 = 0xffffffff;
  local_80._0_4_ = 2;
  TurboAssembler::AddSubMacro
            (*(TurboAssembler **)(param_1 + 0x28),&DAT_019f7c2c,&DAT_019f7c44,local_b8,0,0);
  local_f8 = local_f8 & 0xffffffff00000000;
  local_b8[0] = (Operand)0x0;
  local_b0 = 0;
  local_100 = (CPURegList *)0x400000001a;
  local_98 = 8;
  local_90 = 0x13;
  local_88 = 0xffffffff;
  local_80._0_4_ = 2;
  TurboAssembler::Poke(*(TurboAssembler **)(param_1 + 0x28),(CPURegister *)&local_100,local_b8);
  local_b8[0] = (Operand)0x0;
  local_b0 = 0;
  local_98 = 8;
  local_90 = 0x13;
  local_88 = 0xffffffff;
  local_80 = CONCAT44(local_80._4_4_,2);
  TurboAssembler::AddSubMacro
            (*(TurboAssembler **)(param_1 + 0x28),&DAT_019f7c5c,&DAT_019f7c44,local_b8,0,0);
  local_b8[0] = (Operand)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0x13;
  local_88 = 0x200000001b;
  uStack_78 = 0xffffffff;
  local_80 = 0;
  TurboAssembler::Mov(*(TurboAssembler **)(param_1 + 0x28),&DAT_019f7c8c,local_b8,0);
  local_b8[0] = (Operand)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0x13;
  local_88 = 0x400000001d;
  uStack_78 = 0xffffffff;
  local_80 = 0;
  TurboAssembler::Mov(*(TurboAssembler **)(param_1 + 0x28),&DAT_019f7c50,local_b8,0);
  local_98 = *(long *)(*(TurboAssembler **)(param_1 + 0x28) + 0x180);
  local_b8[0] = (Operand)0x0;
  local_b0 = 0;
  local_90 = 3;
  local_88 = 0xffffffff;
  local_80 = CONCAT44(local_80._4_4_,2);
  TurboAssembler::Mov(*(TurboAssembler **)(param_1 + 0x28),&DAT_019f7bfc,local_b8,0);
  local_b8[0] = (Operand)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0x13;
  local_88 = 0x400000003f;
  uStack_78 = 0xffffffff;
  local_80 = 0;
  TurboAssembler::Mov(*(TurboAssembler **)(param_1 + 0x28),&DAT_019f7be4,local_b8,0);
  local_98 = ExternalReference::re_check_stack_guard_state
                       (*(Isolate **)(*(long *)(param_1 + 0x28) + 0x178));
  local_b8[0] = (Operand)0x0;
  local_b0 = 0;
  local_90 = 7;
  local_88 = 0xffffffff;
  local_80._0_4_ = 2;
  TurboAssembler::Mov(*(TurboAssembler **)(param_1 + 0x28),&local_110,local_b8,0);
  lVar9 = *(long *)(param_1 + 0x28);
  local_100 = (CPURegList *)(lVar9 + 0x198);
  local_f8 = lVar9 + 0x1a8;
  local_f0 = *(undefined8 *)(lVar9 + 0x198);
  uStack_e8 = *(undefined8 *)(lVar9 + 0x1a8);
  uVar5 = UseScratchRegisterScope::AcquireNextAvailable(local_100);
  local_120 = 0x400000003f;
  if (uVar5 != 0x3f) {
    local_120 = (ulong)uVar5 | 0x4000000000;
  }
  local_118 = 0;
  uVar8 = Isolate::CurrentEmbeddedBlob();
  uStack_128 = Isolate::CurrentEmbeddedBlobSize();
  uStack_128 = uStack_128 & 0xffffffff;
  local_130 = uVar8;
  local_98 = EmbeddedData::InstructionStartOfBuiltin((EmbeddedData *)&local_130,0x27f);
  local_b8[0] = (Operand)0x0;
  local_b0 = 0;
  local_90 = 10;
  local_88 = 0xffffffff;
  local_80._0_4_ = 2;
  Assembler::ldr(*(Assembler **)(param_1 + 0x28),(CPURegister *)&local_120,local_b8);
  TurboAssembler::Call(*(undefined8 *)(param_1 + 0x28),local_120,local_118);
  UseScratchRegisterScope::~UseScratchRegisterScope((UseScratchRegisterScope *)&local_100);
  local_100 = (CPURegList *)0x400000001a;
  local_f8 = local_f8 & 0xffffffff00000000;
  local_b8[0] = (Operand)0x0;
  local_b0 = 0;
  local_98 = 8;
  local_90 = 0x13;
  local_88 = 0xffffffff;
  local_80._0_4_ = 2;
  TurboAssembler::Peek(*(TurboAssembler **)(param_1 + 0x28),(CPURegister *)&local_100,local_b8);
  local_100 = (CPURegList *)0x4000000019;
  local_f8 = local_f8 & 0xffffffff00000000;
  local_b8[0] = (Operand)0x0;
  local_b0 = 0;
  local_98 = 0x10;
  local_90 = 0x13;
  local_88 = 0xffffffff;
  local_80._0_4_ = 2;
  TurboAssembler::Peek(*(TurboAssembler **)(param_1 + 0x28),(CPURegister *)&local_100,local_b8);
  pTVar10 = *(TurboAssembler **)(param_1 + 0x28);
  if (uVar1 == 0) goto LAB_012909d4;
  local_100 = (CPURegList *)((ulong)local_100 & 0xffffffffffffff00);
  local_f8 = local_f8 & 0xffffffffffffff00;
  local_d8 = 0x13;
  local_d0 = 0xffffffff;
  local_c8 = 2;
  local_e0 = uVar11;
  if ((int)uVar1 < 0) {
    uVar6 = Assembler::IsImmAddSub(-uVar11);
    if ((uVar6 & 1) == 0) goto LAB_012909b0;
    local_b8[0] = (Operand)0x0;
    local_b0 = 0;
    local_88 = 0xffffffff;
    local_90 = 0x13;
    local_80._0_4_ = 2;
    pOVar7 = local_b8;
    uVar8 = 0x40000000;
    local_98 = -uVar11;
  }
  else {
LAB_012909b0:
    pOVar7 = (Operand *)&local_100;
    uVar8 = 0;
  }
  TurboAssembler::AddSubMacro(pTVar10,&DAT_019f7c44,&DAT_019f7c44,pOVar7,0,uVar8);
  pTVar10 = *(TurboAssembler **)(param_1 + 0x28);
LAB_012909d4:
  local_f8 = local_f8 & 0xffffffff00000000;
  local_100 = (CPURegList *)0x4000000014;
  local_98 = *(long *)(pTVar10 + 0x180);
  local_b8[0] = (Operand)0x0;
  local_b0 = 0;
  local_90 = 3;
  local_88 = 0xffffffff;
  local_80 = CONCAT44(local_80._4_4_,2);
  TurboAssembler::Mov(pTVar10,&local_100,local_b8,0);
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

