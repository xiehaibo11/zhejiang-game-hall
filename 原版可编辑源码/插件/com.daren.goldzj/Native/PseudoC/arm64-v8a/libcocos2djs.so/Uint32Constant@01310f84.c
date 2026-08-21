
/* v8::internal::compiler::WasmGraphBuilder::Uint32Constant(unsigned int) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::Uint32Constant(WasmGraphBuilder *this,uint param_1)

{
  MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),param_1);
  return;
}

