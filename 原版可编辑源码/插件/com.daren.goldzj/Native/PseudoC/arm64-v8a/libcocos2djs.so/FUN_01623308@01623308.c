
void FUN_01623308(InstructionSelector *param_1,Node *param_2,uint param_3,undefined4 param_4,
                 FlagsContinuation *param_5)

{
  Node *pNVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong uVar9;
  Node *pNVar10;
  long lVar11;
  InstructionSequence *pIVar12;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  undefined8 local_c8;
  InstructionSelector *local_c0;
  uint local_b4;
  Constant aCStack_b0 [16];
  undefined1 local_a0 [40];
  uint local_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_c8 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_e0 = 0;
  pNVar10 = param_2 + 0x20;
  if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
    pNVar10 = (Node *)(*(long *)pNVar10 + 0x10);
  }
  local_c0 = param_1;
  local_b4 = param_3;
  if (0x17 < param_3 - 0x60) {
switchD_01623398_caseD_64:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  pNVar1 = *(Node **)pNVar10;
  pNVar10 = *(Node **)(pNVar10 + 8);
  bVar3 = true;
  bVar6 = true;
  bVar5 = true;
  bVar4 = true;
  switch(param_3) {
  case 0x60:
  case 0x61:
    bVar3 = true;
    bVar6 = false;
    bVar5 = false;
    bVar4 = true;
    break;
  case 0x62:
  case 99:
  case 0x6e:
  case 0x6f:
  case 0x72:
  case 0x73:
    bVar3 = false;
    bVar6 = false;
    bVar5 = false;
    bVar4 = true;
    break;
  default:
    goto switchD_01623398_caseD_64;
  case 0x68:
  case 0x69:
    break;
  case 0x6a:
  case 0x6b:
    bVar3 = true;
    bVar6 = true;
    bVar5 = false;
    bVar4 = true;
    break;
  case 0x6c:
  case 0x6d:
    bVar3 = false;
    bVar6 = true;
    bVar5 = false;
    bVar4 = true;
    break;
  case 0x76:
  case 0x77:
    bVar3 = true;
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
  }
  lVar11 = *(long *)pNVar10;
  if (*(ushort *)(lVar11 + 0x10) - 0x17 < 2) {
    if (*(ushort *)(lVar11 + 0x10) == 0x17) {
      lVar11 = (long)*(int *)(lVar11 + 0x2c);
    }
    else {
      lVar11 = *(long *)(lVar11 + 0x30);
    }
    uVar8 = v8::internal::compiler::Arm64OperandGenerator::CanBeImmediate
                      ((Arm64OperandGenerator *)&local_c0,lVar11,param_4);
    if ((uVar8 & 1) == 0) goto LAB_01623448;
    uVar8 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(local_c0,pNVar1);
    v8::internal::compiler::InstructionSelector::MarkAsUsed(local_c0,pNVar1);
    pIVar12 = *(InstructionSequence **)(local_c0 + 0x10);
    local_d8 = (uVar8 & 0xffffffff) << 3 | 0x5800000001;
    local_a0._0_16_ = v8::internal::compiler::OperandGenerator::ToConstant(pNVar10);
LAB_016234e0:
    local_d0 = v8::internal::compiler::InstructionSequence::AddImmediate
                         (pIVar12,(Constant *)local_a0);
joined_r0x01623568:
    uVar8 = 2;
    goto joined_r0x0162368c;
  }
LAB_01623448:
  if (bVar4) {
    lVar11 = *(long *)pNVar1;
    if (*(ushort *)(lVar11 + 0x10) - 0x17 < 2) {
      if (*(ushort *)(lVar11 + 0x10) == 0x17) {
        lVar11 = (long)*(int *)(lVar11 + 0x2c);
      }
      else {
        lVar11 = *(long *)(lVar11 + 0x30);
      }
      uVar8 = v8::internal::compiler::Arm64OperandGenerator::CanBeImmediate
                        ((Arm64OperandGenerator *)&local_c0,lVar11,param_4);
      if ((uVar8 & 1) != 0) {
        if (bVar5) {
          uVar7 = v8::internal::compiler::CommuteFlagsCondition(*(undefined4 *)(param_5 + 4));
          *(undefined4 *)(param_5 + 4) = uVar7;
        }
        uVar8 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(local_c0,pNVar10);
        v8::internal::compiler::InstructionSelector::MarkAsUsed(local_c0,pNVar10);
        pIVar12 = *(InstructionSequence **)(local_c0 + 0x10);
        local_d8 = (uVar8 & 0xffffffff) << 3 | 0x5800000001;
        local_a0._0_16_ = v8::internal::compiler::OperandGenerator::ToConstant(pNVar1);
        goto LAB_016234e0;
      }
    }
  }
  if (bVar3) {
    uVar8 = FUN_01628c84(&local_c0,param_1,param_2,pNVar1,pNVar10,&local_d8,&local_d0,&local_b4);
    if ((uVar8 & 1) == 0) {
      if ((!bVar4) ||
         (uVar8 = FUN_01628c84(&local_c0,param_1,param_2,pNVar10,pNVar1,&local_d8,&local_d0,
                               &local_b4), (uVar8 & 1) == 0)) goto LAB_01623570;
      if (bVar5) {
        uVar7 = v8::internal::compiler::CommuteFlagsCondition(*(undefined4 *)(param_5 + 4));
        *(undefined4 *)(param_5 + 4) = uVar7;
        goto joined_r0x01623568;
      }
    }
LAB_016236d4:
    uVar8 = 2;
  }
  else {
LAB_01623570:
    uVar8 = FUN_01628eac(param_1,param_2,pNVar10,&local_b4,!bVar3);
    if ((uVar8 & 1) == 0) {
      if ((!bVar4) ||
         (uVar8 = FUN_01628eac(param_1,param_2,pNVar1,&local_b4,!bVar3), (uVar8 & 1) == 0)) {
        local_d8 = v8::internal::compiler::Arm64OperandGenerator::UseRegisterOrImmediateZero
                             ((Arm64OperandGenerator *)&local_c0,pNVar1);
        uVar8 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(local_c0,pNVar10);
        v8::internal::compiler::InstructionSelector::MarkAsUsed(local_c0,pNVar10);
        local_d0 = (uVar8 & 0xffffffff) << 3 | 0x5800000001;
        goto LAB_016236d4;
      }
      if (bVar5) {
        uVar7 = v8::internal::compiler::CommuteFlagsCondition(*(undefined4 *)(param_5 + 4));
        *(undefined4 *)(param_5 + 4) = uVar7;
      }
      v8::internal::compiler::
      BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
      ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
                      *)local_a0,pNVar1);
      local_d8 = v8::internal::compiler::Arm64OperandGenerator::UseRegisterOrImmediateZero
                           ((Arm64OperandGenerator *)&local_c0,pNVar10);
      pNVar10 = (Node *)local_a0._8_8_;
      uVar8 = v8::internal::compiler::InstructionSelector::GetVirtualRegister
                        (local_c0,(Node *)local_a0._8_8_);
      uVar8 = (uVar8 & 0xffffffff) << 3;
    }
    else {
      v8::internal::compiler::
      BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
      ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
                      *)local_a0,pNVar10);
      local_d8 = v8::internal::compiler::Arm64OperandGenerator::UseRegisterOrImmediateZero
                           ((Arm64OperandGenerator *)&local_c0,pNVar1);
      pNVar10 = (Node *)local_a0._8_8_;
      uVar8 = v8::internal::compiler::InstructionSelector::GetVirtualRegister
                        (local_c0,(Node *)local_a0._8_8_);
      uVar8 = (uVar8 & 0xffffffff) << 3;
    }
    v8::internal::compiler::InstructionSelector::MarkAsUsed(local_c0,pNVar10);
    pIVar12 = *(InstructionSequence **)(local_c0 + 0x10);
    local_d0 = uVar8 | 0x5800000001;
    v8::internal::compiler::Constant::Constant(aCStack_b0,local_78 & 0x3f);
    local_c8 = v8::internal::compiler::InstructionSequence::AddImmediate(pIVar12,aCStack_b0);
    uVar8 = 3;
  }
joined_r0x0162368c:
  if (!bVar6) {
    uVar9 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(local_c0,param_2);
    v8::internal::compiler::InstructionSelector::MarkAsDefined(local_c0,param_2);
    local_e0 = (uVar9 & 0xffffffff) << 3 | 0xd800000001;
  }
  v8::internal::compiler::InstructionSelector::EmitWithContinuation
            (param_1,local_b4,(ulong)!bVar6,(InstructionOperand *)&local_e0,uVar8,
             (InstructionOperand *)&local_d8,param_5);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

