
/* v8::internal::compiler::MachineOperatorReducer::ReduceWord32Or(v8::internal::compiler::Node*) */

long __thiscall
v8::internal::compiler::MachineOperatorReducer::ReduceWord32Or
          (MachineOperatorReducer *this,Node *param_1)

{
  long lVar1;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_48 [8];
  long local_40;
  uint local_38;
  char local_34;
  long local_30;
  uint local_28;
  char local_24;
  
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  ::BinopMatcher(aBStack_48,param_1);
  if ((local_24 == '\0') ||
     ((lVar1 = local_30, local_28 != 0xffffffff && (lVar1 = local_40, local_28 != 0)))) {
    if ((local_34 == '\0') || (local_24 == '\0')) {
      lVar1 = local_40;
      if (local_40 != local_30) {
        lVar1 = TryMatchWord32Ror(this,param_1);
      }
    }
    else {
      lVar1 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),local_28 | local_38);
    }
  }
  return lVar1;
}

