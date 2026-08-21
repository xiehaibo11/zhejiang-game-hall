
/* v8::internal::compiler::SimplifiedOperatorReducer::ReplaceFloat64(double) */

void __thiscall
v8::internal::compiler::SimplifiedOperatorReducer::ReplaceFloat64
          (SimplifiedOperatorReducer *this,double param_1)

{
  MachineGraph::Float64Constant(*(MachineGraph **)(this + 0x10),param_1);
  return;
}

