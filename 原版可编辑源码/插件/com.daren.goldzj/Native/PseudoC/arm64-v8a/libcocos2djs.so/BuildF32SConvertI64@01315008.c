
/* v8::internal::compiler::WasmGraphBuilder::BuildF32SConvertI64(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildF32SConvertI64(WasmGraphBuilder *this,Node *param_1)

{
  undefined8 uVar1;
  
  uVar1 = ExternalReference::wasm_int64_to_float32();
  BuildIntToFloatConversionInstruction(this,param_1,uVar1,5,0x60b);
  return;
}

