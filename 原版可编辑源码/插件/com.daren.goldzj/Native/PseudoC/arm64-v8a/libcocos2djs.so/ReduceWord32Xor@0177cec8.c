
/* v8::internal::compiler::MachineOperatorReducer::ReduceWord32Xor(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::MachineOperatorReducer::ReduceWord32Xor
          (MachineOperatorReducer *this,Node *param_1)

{
  MachineGraph *this_00;
  Node *pNVar1;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_70 [8];
  Node *local_68;
  int local_50;
  char local_4c;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_48 [8];
  Node *local_40;
  uint local_38;
  char local_34;
  Node *local_30;
  uint local_28;
  char local_24;
  
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  ::BinopMatcher(aBStack_48,param_1);
  if ((local_24 == '\0') || (local_28 != 0)) {
    if ((local_34 == '\0') || (local_24 == '\0')) {
      if (local_40 != local_30) {
        if ((((local_24 != '\0') && (*(short *)(*(long *)local_40 + 0x10) == 0x12a)) &&
            (local_28 == 0xffffffff)) &&
           ((BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
             ::BinopMatcher(aBStack_70,local_40), local_4c != '\0' && (local_50 == -1)))) {
          return local_68;
        }
        pNVar1 = (Node *)TryMatchWord32Ror(this,param_1);
        return pNVar1;
      }
      this_00 = *(MachineGraph **)(this + 0x10);
      local_28 = 0;
    }
    else {
      this_00 = *(MachineGraph **)(this + 0x10);
      local_28 = local_28 ^ local_38;
    }
    local_40 = (Node *)MachineGraph::Int32Constant(this_00,local_28);
  }
  return local_40;
}

