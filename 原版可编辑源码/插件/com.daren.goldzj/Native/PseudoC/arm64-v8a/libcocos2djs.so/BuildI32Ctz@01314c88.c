
/* v8::internal::compiler::WasmGraphBuilder::BuildI32Ctz(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildI32Ctz(WasmGraphBuilder *this,Node *param_1)

{
  undefined8 uVar1;
  
  uVar1 = ExternalReference::wasm_word32_ctz();
  BuildBitCountingCall(this,param_1,uVar1,4);
  return;
}

