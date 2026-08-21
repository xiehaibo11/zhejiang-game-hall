
/* v8::internal::compiler::WasmGraphBuilder::RemoveBytecodePositionDecorator() */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::RemoveBytecodePositionDecorator(WasmGraphBuilder *this)

{
  Graph::RemoveDecorator((Graph *)**(undefined8 **)(this + 8),*(GraphDecorator **)(this + 0x70));
  *(undefined8 *)(this + 0x70) = 0;
  return;
}

