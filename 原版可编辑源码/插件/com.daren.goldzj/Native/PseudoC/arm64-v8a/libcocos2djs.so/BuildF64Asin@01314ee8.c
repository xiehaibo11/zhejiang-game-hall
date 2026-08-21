
/* v8::internal::compiler::WasmGraphBuilder::BuildF64Asin(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildF64Asin(WasmGraphBuilder *this,Node *param_1)

{
  undefined8 uVar1;
  
  uVar1 = ExternalReference::f64_asin_wrapper_function();
  BuildCFuncInstruction(this,uVar1,0x60c,param_1,0);
  return;
}

