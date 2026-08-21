
/* v8::internal::compiler::WasmGraphBuilder::BuildI32Popcnt(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildI32Popcnt(WasmGraphBuilder *this,Node *param_1)

{
  undefined8 uVar1;
  
  uVar1 = ExternalReference::wasm_word32_popcnt();
  BuildBitCountingCall(this,param_1,uVar1,4);
  return;
}

