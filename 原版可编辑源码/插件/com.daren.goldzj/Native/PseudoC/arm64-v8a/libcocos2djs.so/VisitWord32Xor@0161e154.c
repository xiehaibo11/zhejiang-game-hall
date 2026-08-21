
/* v8::internal::compiler::InstructionSelector::VisitWord32Xor(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitWord32Xor(InstructionSelector *this,Node *param_1)

{
  uint uVar1;
  uint uVar2;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_58 [8];
  Node *local_50;
  Node *local_40;
  
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  ::BinopMatcher(aBStack_58,param_1);
  uVar1 = CanCover(this,param_1,local_50);
  uVar2 = CanCover(this,param_1,local_40);
  FUN_0161d6ac(this,param_1,aBStack_58,0x73,uVar1 & 1,uVar2 & 1);
  return;
}

