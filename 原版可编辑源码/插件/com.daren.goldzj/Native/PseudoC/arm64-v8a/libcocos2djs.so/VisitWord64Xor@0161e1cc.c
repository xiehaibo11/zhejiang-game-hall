
/* v8::internal::compiler::InstructionSelector::VisitWord64Xor(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitWord64Xor(InstructionSelector *this,Node *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
  aBStack_70 [8];
  Node *local_68;
  Node *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
  ::BinopMatcher(aBStack_70,param_1);
  uVar2 = CanCover(this,param_1,local_68);
  uVar3 = CanCover(this,param_1,local_50);
  FUN_0161dcf8(this,param_1,aBStack_70,0x72,uVar2 & 1,uVar3 & 1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

