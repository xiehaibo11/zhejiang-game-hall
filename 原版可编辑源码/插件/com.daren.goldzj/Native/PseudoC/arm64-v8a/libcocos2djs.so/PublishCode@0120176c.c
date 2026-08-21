
/* v8::internal::wasm::NativeModule::PublishCode(std::__ndk1::unique_ptr<v8::internal::wasm::WasmCode,
   std::__ndk1::default_delete<v8::internal::wasm::WasmCode> >) */

undefined8 __thiscall
v8::internal::wasm::NativeModule::PublishCode(NativeModule *this,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  base::Mutex::Lock((Mutex *)(this + 0x110));
  local_18 = *param_2;
  *param_2 = 0;
  uVar1 = PublishCodeLocked(this,&local_18);
  FUN_012017d0(&local_18);
  base::Mutex::Unlock((Mutex *)(this + 0x110));
  return uVar1;
}

