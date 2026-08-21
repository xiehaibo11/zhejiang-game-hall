
/* v8::internal::compiler::WasmGraphBuilder::BuildF64Mod(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildF64Mod
          (WasmGraphBuilder *this,Node *param_1,Node *param_2)

{
  undefined8 uVar1;
  
  uVar1 = ExternalReference::f64_mod_wrapper_function();
  BuildCFuncInstruction(this,uVar1,0x60c,param_1,param_2);
  return;
}

