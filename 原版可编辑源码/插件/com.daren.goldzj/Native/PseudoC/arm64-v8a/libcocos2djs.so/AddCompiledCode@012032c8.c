
/* v8::internal::wasm::NativeModule::AddCompiledCode(v8::internal::wasm::WasmCompilationResult) */

undefined8 __thiscall
v8::internal::wasm::NativeModule::AddCompiledCode(NativeModule *this,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *local_38;
  undefined8 *local_30;
  
  AddCompiledCode(&local_38,this,param_2,1);
  uVar1 = *local_38;
  if (local_38 != (undefined8 *)0x0) {
    local_30 = local_38;
    operator_delete(local_38);
  }
  return uVar1;
}

