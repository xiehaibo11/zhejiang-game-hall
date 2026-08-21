
void FUN_01622dd0(InstructionSelector *param_1,Node *param_2,uint param_3,undefined4 param_4,
                 FlagsContinuation *param_5)

{
  Node *pNVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  Node *pNVar9;
  long lVar10;
  InstructionSequence *pIVar11;
  undefined1 local_b8 [32];
  uint local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  undefined8 local_78;
  InstructionSelector *local_70;
  uint local_64;
  Constant aCStack_60 [16];
  
  local_80 = 0;
  local_78 = 0;
  local_90 = 0;
  local_88 = 0;
  pNVar9 = param_2 + 0x20;
  if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
    pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
  }
  local_70 = param_1;
  local_64 = param_3;
  if (0x17 < param_3 - 0x60) {
switchD_01622e50_caseD_64:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  pNVar1 = *(Node **)pNVar9;
  pNVar9 = *(Node **)(pNVar9 + 8);
  bVar2 = true;
  bVar5 = true;
  bVar4 = true;
  bVar3 = true;
  switch(param_3) {
  case 0x60:
  case 0x61:
    bVar2 = true;
    bVar5 = false;
    bVar4 = false;
    bVar3 = true;
    break;
  case 0x62:
  case 99:
  case 0x6e:
  case 0x6f:
  case 0x72:
  case 0x73:
    bVar2 = false;
    bVar5 = false;
    bVar4 = false;
    bVar3 = true;
    break;
  default:
    goto switchD_01622e50_caseD_64;
  case 0x68:
  case 0x69:
    break;
  case 0x6a:
  case 0x6b:
    bVar2 = true;
    bVar5 = true;
    bVar4 = false;
    bVar3 = true;
    break;
  case 0x6c:
  case 0x6d:
    bVar2 = false;
    bVar5 = true;
    bVar4 = false;
    bVar3 = true;
    break;
  case 0x76:
  case 0x77:
    bVar2 = true;
    bVar5 = false;
    bVar4 = false;
    bVar3 = false;
  }
  lVar10 = *(long *)pNVar9;
  if (*(ushort *)(lVar10 + 0x10) - 0x17 < 2) {
    if (*(ushort *)(lVar10 + 0x10) == 0x17) {
      lVar10 = (long)*(int *)(lVar10 + 0x2c);
    }
    else {
      lVar10 = *(long *)(lVar10 + 0x30);
    }
    uVar7 = v8::internal::compiler::Arm64OperandGenerator::CanBeImmediate
                      ((Arm64OperandGenerator *)&local_70,lVar10,param_4);
    if ((uVar7 & 1) == 0) goto LAB_01622f00;
    uVar7 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(local_70,pNVar1);
    v8::internal::compiler::InstructionSelector::MarkAsUsed(local_70,pNVar1);
    pIVar11 = *(InstructionSequence **)(local_70 + 0x10);
    local_88 = (uVar7 & 0xffffffff) << 3 | 0x5800000001;
    local_b8._0_16_ = v8::internal::compiler::OperandGenerator::ToConstant(pNVar9);
LAB_01622f98:
    local_80 = v8::internal::compiler::InstructionSequence::AddImmediate
                         (pIVar11,(Constant *)local_b8);
joined_r0x01623020:
    uVar7 = 2;
    goto joined_r0x016230cc;
  }
LAB_01622f00:
  if (bVar3) {
    lVar10 = *(long *)pNVar1;
    if (*(ushort *)(lVar10 + 0x10) - 0x17 < 2) {
      if (*(ushort *)(lVar10 + 0x10) == 0x17) {
        lVar10 = (long)*(int *)(lVar10 + 0x2c);
      }
      else {
        lVar10 = *(long *)(lVar10 + 0x30);
      }
      uVar7 = v8::internal::compiler::Arm64OperandGenerator::CanBeImmediate
                        ((Arm64OperandGenerator *)&local_70,lVar10,param_4);
      if ((uVar7 & 1) != 0) {
        if (bVar4) {
          uVar6 = v8::internal::compiler::CommuteFlagsCondition(*(undefined4 *)(param_5 + 4));
          *(undefined4 *)(param_5 + 4) = uVar6;
        }
        uVar7 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(local_70,pNVar9);
        v8::internal::compiler::InstructionSelector::MarkAsUsed(local_70,pNVar9);
        pIVar11 = *(InstructionSequence **)(local_70 + 0x10);
        local_88 = (uVar7 & 0xffffffff) << 3 | 0x5800000001;
        local_b8._0_16_ = v8::internal::compiler::OperandGenerator::ToConstant(pNVar1);
        goto LAB_01622f98;
      }
    }
  }
  if (bVar2) {
    uVar7 = FUN_01628c84(&local_70,param_1,param_2,pNVar1,pNVar9,&local_88,&local_80,&local_64);
    if ((uVar7 & 1) == 0) {
      if ((!bVar3) ||
         (uVar7 = FUN_01628c84(&local_70,param_1,param_2,pNVar9,pNVar1,&local_88,&local_80,&local_64
                              ), (uVar7 & 1) == 0)) goto LAB_01623028;
      if (bVar4) {
        uVar6 = v8::internal::compiler::CommuteFlagsCondition(*(undefined4 *)(param_5 + 4));
        *(undefined4 *)(param_5 + 4) = uVar6;
        goto joined_r0x01623020;
      }
    }
LAB_0162318c:
    uVar7 = 2;
  }
  else {
LAB_01623028:
    uVar7 = FUN_01628eac(param_1,param_2,pNVar9,&local_64,!bVar2);
    if ((uVar7 & 1) == 0) {
      if ((!bVar3) ||
         (uVar7 = FUN_01628eac(param_1,param_2,pNVar1,&local_64,!bVar2), (uVar7 & 1) == 0)) {
        local_88 = v8::internal::compiler::Arm64OperandGenerator::UseRegisterOrImmediateZero
                             ((Arm64OperandGenerator *)&local_70,pNVar1);
        uVar7 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(local_70,pNVar9);
        v8::internal::compiler::InstructionSelector::MarkAsUsed(local_70,pNVar9);
        local_80 = (uVar7 & 0xffffffff) << 3 | 0x5800000001;
        goto LAB_0162318c;
      }
      if (bVar4) {
        uVar6 = v8::internal::compiler::CommuteFlagsCondition(*(undefined4 *)(param_5 + 4));
        *(undefined4 *)(param_5 + 4) = uVar6;
      }
      v8::internal::compiler::
      BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
      ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                      *)local_b8,pNVar1);
      local_88 = v8::internal::compiler::Arm64OperandGenerator::UseRegisterOrImmediateZero
                           ((Arm64OperandGenerator *)&local_70,pNVar9);
      pNVar9 = (Node *)local_b8._8_8_;
      uVar7 = v8::internal::compiler::InstructionSelector::GetVirtualRegister
                        (local_70,(Node *)local_b8._8_8_);
      uVar7 = (uVar7 & 0xffffffff) << 3;
    }
    else {
      v8::internal::compiler::
      BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
      ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                      *)local_b8,pNVar9);
      local_88 = v8::internal::compiler::Arm64OperandGenerator::UseRegisterOrImmediateZero
                           ((Arm64OperandGenerator *)&local_70,pNVar1);
      pNVar9 = (Node *)local_b8._8_8_;
      uVar7 = v8::internal::compiler::InstructionSelector::GetVirtualRegister
                        (local_70,(Node *)local_b8._8_8_);
      uVar7 = (uVar7 & 0xffffffff) << 3;
    }
    v8::internal::compiler::InstructionSelector::MarkAsUsed(local_70,pNVar9);
    pIVar11 = *(InstructionSequence **)(local_70 + 0x10);
    local_80 = uVar7 | 0x5800000001;
    v8::internal::compiler::Constant::Constant(aCStack_60,local_98 & 0x3f);
    local_78 = v8::internal::compiler::InstructionSequence::AddImmediate(pIVar11,aCStack_60);
    uVar7 = 3;
  }
joined_r0x016230cc:
  if (!bVar5) {
    uVar8 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(local_70,param_2);
    v8::internal::compiler::InstructionSelector::MarkAsDefined(local_70,param_2);
    local_90 = (uVar8 & 0xffffffff) << 3 | 0xd800000001;
  }
  v8::internal::compiler::InstructionSelector::EmitWithContinuation
            (param_1,local_64,(ulong)!bVar5,(InstructionOperand *)&local_90,uVar7,
             (InstructionOperand *)&local_88,param_5);
  return;
}

