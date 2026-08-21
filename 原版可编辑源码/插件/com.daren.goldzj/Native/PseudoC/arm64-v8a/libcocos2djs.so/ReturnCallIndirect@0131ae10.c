
/* v8::internal::compiler::WasmGraphBuilder::ReturnCallIndirect(unsigned int, unsigned int,
   v8::internal::Vector<v8::internal::compiler::Node*>, int) */

void v8::internal::compiler::WasmGraphBuilder::ReturnCallIndirect(void)

{
  BuildIndirectCall();
  return;
}

