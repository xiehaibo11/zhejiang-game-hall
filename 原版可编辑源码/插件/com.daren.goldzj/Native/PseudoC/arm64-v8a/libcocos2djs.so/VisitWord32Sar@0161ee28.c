
/* v8::internal::compiler::InstructionSelector::VisitWord32Sar(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitWord32Sar(InstructionSelector *this,Node *param_1)

{
  short sVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  InstructionSequence *pIVar6;
  ulong uVar7;
  Node *pNVar8;
  Node *pNVar9;
  Node *pNVar10;
  Constant aCStack_c0 [8];
  Node *local_b8;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_98 [8];
  Node *local_90;
  uint local_78;
  char local_74;
  undefined1 local_70 [16];
  
  uVar2 = FUN_0161eacc();
  if ((uVar2 & 1) != 0) {
    return;
  }
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  ::BinopMatcher(aBStack_98,param_1);
  sVar1 = *(short *)(*(long *)local_90 + 0x10);
  if (sVar1 == 0x135) {
    if (local_74 == '\0') goto LAB_0161f22c;
    pNVar9 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    uVar2 = CanCover(this,param_1,*(Node **)pNVar9);
    if ((uVar2 & 1) != 0) {
      uVar2 = InstructionSequence::NextVirtualRegister(*(InstructionSequence **)(this + 0x10));
      pNVar9 = local_90 + 0x20;
      uVar7 = (uVar2 & 0xffffffff) << 3 | 0x5800000001;
      pNVar8 = pNVar9;
      if ((~*(uint *)(local_90 + 0x14) & 0xf000000) == 0) {
        pNVar8 = (Node *)(*(long *)pNVar9 + 0x10);
      }
      pNVar8 = *(Node **)pNVar8;
      uVar2 = GetVirtualRegister(this,pNVar8);
      MarkAsUsed(this,pNVar8);
      if ((~*(uint *)(local_90 + 0x14) & 0xf000000) == 0) {
        pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
      }
      pNVar9 = *(Node **)(pNVar9 + 8);
      uVar3 = GetVirtualRegister(this,pNVar9);
      MarkAsUsed(this,pNVar9);
      Emit(this,0x7a,uVar7,(uVar2 & 0xffffffff) << 3 | 0x5800000001,
           (uVar3 & 0xffffffff) << 3 | 0x5800000001,0,0);
      uVar2 = GetVirtualRegister(this,param_1);
      MarkAsDefined(this,param_1);
      pIVar6 = *(InstructionSequence **)(this + 0x10);
      Constant::Constant(aCStack_c0,local_78 & 0x1f | 0x20);
      uVar4 = InstructionSequence::AddImmediate(pIVar6,aCStack_c0);
      uVar5 = 0x90;
      goto LAB_0161efd4;
    }
    sVar1 = *(short *)(*(long *)local_90 + 0x10);
  }
  if ((sVar1 == 0x12f) && (local_74 != '\0')) {
    pNVar9 = param_1 + 0x20;
    pNVar8 = pNVar9;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar8 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    uVar2 = CanCover(this,param_1,*(Node **)pNVar8);
    if ((((uVar2 & 1) != 0) &&
        (BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
         ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                         *)aCStack_c0,local_90), *(short *)(*(long *)local_b8 + 0x10) == 0x135)) &&
       (uVar2 = CanCover(this,local_90,local_b8), (uVar2 & 1) != 0)) {
      uVar2 = InstructionSequence::NextVirtualRegister(*(InstructionSequence **)(this + 0x10));
      pNVar8 = local_b8 + 0x20;
      uVar2 = (uVar2 & 0xffffffff) << 3 | 0x5800000001;
      pNVar10 = pNVar8;
      if ((~*(uint *)(local_b8 + 0x14) & 0xf000000) == 0) {
        pNVar10 = (Node *)(*(long *)pNVar8 + 0x10);
      }
      pNVar10 = *(Node **)pNVar10;
      uVar7 = GetVirtualRegister(this,pNVar10);
      MarkAsUsed(this,pNVar10);
      if ((~*(uint *)(local_b8 + 0x14) & 0xf000000) == 0) {
        pNVar8 = (Node *)(*(long *)pNVar8 + 0x10);
      }
      pNVar8 = *(Node **)(pNVar8 + 8);
      uVar3 = GetVirtualRegister(this,pNVar8);
      MarkAsUsed(this,pNVar8);
      Emit(this,0x7a,uVar2,(uVar7 & 0xffffffff) << 3 | 0x5800000001,
           (uVar3 & 0xffffffff) << 3 | 0x5800000001,0,0);
      uVar7 = InstructionSequence::NextVirtualRegister(*(InstructionSequence **)(this + 0x10));
      uVar7 = (uVar7 & 0xffffffff) << 3 | 0x5800000001;
      pNVar8 = local_90 + 0x20;
      if ((~*(uint *)(local_90 + 0x14) & 0xf000000) == 0) {
        pNVar8 = (Node *)(*(long *)pNVar8 + 0x10);
      }
      pNVar8 = *(Node **)(pNVar8 + 8);
      uVar3 = GetVirtualRegister(this,pNVar8);
      MarkAsUsed(this,pNVar8);
      pIVar6 = *(InstructionSequence **)(this + 0x10);
      Constant::Constant((Constant *)local_70,0x20);
      uVar4 = InstructionSequence::AddImmediate(pIVar6,(Constant *)local_70);
      Emit(this,0xa60,uVar7,(uVar3 & 0xffffffff) << 3 | 0x5800000001,uVar2,uVar4,0,0);
      uVar2 = GetVirtualRegister(this,param_1);
      MarkAsDefined(this,param_1);
      if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
        pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
      }
      pIVar6 = *(InstructionSequence **)(this + 0x10);
      local_70 = OperandGenerator::ToConstant(*(Node **)(pNVar9 + 8));
      uVar4 = InstructionSequence::AddImmediate(pIVar6,(Constant *)local_70);
      uVar5 = 0x91;
LAB_0161efd4:
      Emit(this,uVar5,(uVar2 & 0xffffffff) << 3 | 0xd800000001,uVar7,uVar4,0,0);
      return;
    }
  }
LAB_0161f22c:
  FUN_0161e41c(this,0x91,param_1,1);
  return;
}

