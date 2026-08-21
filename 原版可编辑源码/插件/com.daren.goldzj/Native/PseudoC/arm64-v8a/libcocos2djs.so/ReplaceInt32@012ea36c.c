
/* v8::internal::compiler::SimplifiedOperatorReducer::ReplaceInt32(int) */

void __thiscall
v8::internal::compiler::SimplifiedOperatorReducer::ReplaceInt32
          (SimplifiedOperatorReducer *this,int param_1)

{
  MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),param_1);
  return;
}

