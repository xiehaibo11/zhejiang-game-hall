
/* v8::internal::compiler::WasmGraphBuilder::BuildF32NearestInt(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildF32NearestInt(WasmGraphBuilder *this,Node *param_1)

{
  undefined8 uVar1;
  
  uVar1 = ExternalReference::wasm_f32_nearest_int();
  BuildCFuncInstruction(this,uVar1,0x60b,param_1,0);
  return;
}

