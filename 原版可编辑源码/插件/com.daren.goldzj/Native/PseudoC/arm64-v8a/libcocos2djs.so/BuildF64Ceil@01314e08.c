
/* v8::internal::compiler::WasmGraphBuilder::BuildF64Ceil(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildF64Ceil(WasmGraphBuilder *this,Node *param_1)

{
  undefined8 uVar1;
  
  uVar1 = ExternalReference::wasm_f64_ceil();
  BuildCFuncInstruction(this,uVar1,0x60c,param_1,0);
  return;
}

