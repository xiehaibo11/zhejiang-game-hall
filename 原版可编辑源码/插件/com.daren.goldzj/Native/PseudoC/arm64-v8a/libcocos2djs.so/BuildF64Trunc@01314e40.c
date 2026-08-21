
/* v8::internal::compiler::WasmGraphBuilder::BuildF64Trunc(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildF64Trunc(WasmGraphBuilder *this,Node *param_1)

{
  undefined8 uVar1;
  
  uVar1 = ExternalReference::wasm_f64_trunc();
  BuildCFuncInstruction(this,uVar1,0x60c,param_1,0);
  return;
}

