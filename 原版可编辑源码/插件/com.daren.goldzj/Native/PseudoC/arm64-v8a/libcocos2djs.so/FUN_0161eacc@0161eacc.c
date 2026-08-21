
undefined8 FUN_0161eacc(InstructionSelector *param_1,Node *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  InstructionSequence *pIVar6;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_b0 [8];
  Node *local_a8;
  uint local_90;
  char local_8c;
  long *local_88;
  Node *local_80;
  uint local_68;
  char local_64;
  Constant aCStack_60 [16];
  
  v8::internal::compiler::
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                  *)&local_88,param_2);
  uVar1 = v8::internal::compiler::InstructionSelector::CanCover(param_1,param_2,local_80);
  if (((((uVar1 & 1) == 0) || (*(short *)(*(long *)local_80 + 0x10) != 299)) ||
      (v8::internal::compiler::
       BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
       ::BinopMatcher(aBStack_b0,local_80), local_8c == '\0')) ||
     (((local_64 == '\0' || ((local_90 & 0x1f) == 0)) || (((local_68 ^ local_90) & 0x1f) != 0)))) {
    uVar2 = 0;
  }
  else {
    uVar5 = 0x9b;
    if (*(short *)(*local_88 + 0x10) != 0x12d) {
      uVar5 = 0x9d;
    }
    uVar1 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,param_2);
    v8::internal::compiler::InstructionSelector::MarkAsDefined(param_1,param_2);
    uVar3 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,local_a8);
    v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,local_a8);
    pIVar6 = *(InstructionSequence **)(param_1 + 0x10);
    v8::internal::compiler::Constant::Constant(aCStack_60,0);
    uVar2 = v8::internal::compiler::InstructionSequence::AddImmediate(pIVar6,aCStack_60);
    pIVar6 = *(InstructionSequence **)(param_1 + 0x10);
    v8::internal::compiler::Constant::Constant(aCStack_60,0x20 - (local_68 & 0x1f));
    uVar4 = v8::internal::compiler::InstructionSequence::AddImmediate(pIVar6,aCStack_60);
    v8::internal::compiler::InstructionSelector::Emit
              (param_1,uVar5,(uVar1 & 0xffffffff) << 3 | 0xd800000001,
               (uVar3 & 0xffffffff) << 3 | 0x5800000001,uVar2,uVar4,0,0);
    uVar2 = 1;
  }
  return uVar2;
}

