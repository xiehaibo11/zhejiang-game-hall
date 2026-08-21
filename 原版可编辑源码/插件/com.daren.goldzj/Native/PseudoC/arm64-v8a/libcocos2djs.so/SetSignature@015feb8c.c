
/* v8::internal::wasm::WasmFunctionBuilder::SetSignature(v8::internal::Signature<v8::internal::wasm::ValueType>*)
    */

void __thiscall
v8::internal::wasm::WasmFunctionBuilder::SetSignature(WasmFunctionBuilder *this,Signature *param_1)

{
  undefined4 uVar1;
  
  *(Signature **)(this + 8) = param_1;
  uVar1 = WasmModuleBuilder::AddSignature(*(WasmModuleBuilder **)this,param_1);
  *(undefined4 *)(this + 0x38) = uVar1;
  return;
}

