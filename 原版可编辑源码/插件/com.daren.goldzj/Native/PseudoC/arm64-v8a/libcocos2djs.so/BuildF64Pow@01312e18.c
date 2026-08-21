
/* v8::internal::compiler::WasmGraphBuilder::BuildF64Pow(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildF64Pow
          (WasmGraphBuilder *this,Node *param_1,Node *param_2)

{
  undefined8 uVar1;
  
  uVar1 = ExternalReference::wasm_float64_pow();
  BuildCFuncInstruction(this,uVar1,0x60c,param_1,param_2);
  return;
}

