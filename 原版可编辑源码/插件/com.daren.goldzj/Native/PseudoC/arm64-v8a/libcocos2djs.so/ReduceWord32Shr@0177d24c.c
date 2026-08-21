
/* v8::internal::compiler::MachineOperatorReducer::ReduceWord32Shr(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::MachineOperatorReducer::ReduceWord32Shr
          (MachineOperatorReducer *this,Node *param_1)

{
  BinopMatcher<v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_70 [32];
  uint local_50;
  char local_4c;
  BinopMatcher<v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_48 [8];
  Node *local_40;
  uint local_38;
  char local_34;
  uint local_28;
  char local_24;
  
  BinopMatcher<v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>>
  ::BinopMatcher(aBStack_48,param_1);
  if ((local_24 == '\0') || (local_28 != 0)) {
    if ((local_34 == '\0') || (local_24 == '\0')) {
      if ((((*(short *)(*(long *)local_40 + 0x10) == 0x128) && (local_24 != '\0')) &&
          (BinopMatcher<v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>>
           ::BinopMatcher(aBStack_70,local_40), local_4c != '\0')) &&
         (local_50 >> (ulong)(local_28 & 0x1f) == 0)) {
        local_40 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),0);
      }
      else {
        local_40 = (Node *)ReduceWord32Shifts(this,param_1);
      }
    }
    else {
      local_40 = (Node *)MachineGraph::Int32Constant
                                   (*(MachineGraph **)(this + 0x10),
                                    local_38 >> (ulong)(local_28 & 0x1f));
    }
  }
  return local_40;
}

