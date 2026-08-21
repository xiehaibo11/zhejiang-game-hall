
/* v8::internal::compiler::MachineOperatorReducer::ReduceWord32Shifts(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::MachineOperatorReducer::ReduceWord32Shifts
          (MachineOperatorReducer *this,Node *param_1)

{
  Node *pNVar1;
  Node *this_00;
  Use *pUVar2;
  Node *pNVar3;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_80 [8];
  Node *local_78;
  int local_60;
  char local_5c;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_58 [24];
  Node *local_40;
  
  if (((((*(byte *)(*(long *)(*(long *)(this + 0x10) + 0x10) + 0x15) >> 3 & 1) == 0) ||
       (BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
        ::BinopMatcher(aBStack_58,param_1), *(short *)(*(long *)local_40 + 0x10) != 0x128)) ||
      (BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
       ::BinopMatcher(aBStack_80,local_40), local_5c == '\0')) || (local_60 != 0x1f)) {
    param_1 = (Node *)0x0;
  }
  else {
    pNVar1 = param_1 + 0x20;
    pNVar3 = pNVar1;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar3 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    this_00 = *(Node **)(pNVar3 + 8);
    if (this_00 != local_78) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar2 = (Use *)(*(long *)pNVar1 + -0x30);
      }
      else {
        pUVar2 = (Use *)(param_1 + -0x30);
      }
      if (this_00 != (Node *)0x0) {
        Node::RemoveUse(this_00,pUVar2);
      }
      *(Node **)(pNVar3 + 8) = local_78;
      if (local_78 != (Node *)0x0) {
        Node::AppendUse(local_78,pUVar2);
      }
    }
  }
  return param_1;
}

