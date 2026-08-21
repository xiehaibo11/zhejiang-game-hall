
/* v8::internal::compiler::WasmGraphBuilder::PrintDebugName(v8::internal::compiler::Node*) */

void v8::internal::compiler::WasmGraphBuilder::PrintDebugName(Node *param_1)

{
  PrintF("#%d:%s",(ulong)(*(uint *)(param_1 + 0x14) & 0xffffff),
         *(undefined8 *)(*(long *)param_1 + 8));
  return;
}

