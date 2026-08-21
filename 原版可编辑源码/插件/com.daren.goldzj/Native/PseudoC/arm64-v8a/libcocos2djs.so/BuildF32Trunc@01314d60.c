
/* v8::internal::compiler::WasmGraphBuilder::BuildF32Trunc(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildF32Trunc(WasmGraphBuilder *this,Node *param_1)

{
  undefined8 uVar1;
  
  uVar1 = ExternalReference::wasm_f32_trunc();
  BuildCFuncInstruction(this,uVar1,0x60b,param_1,0);
  return;
}

