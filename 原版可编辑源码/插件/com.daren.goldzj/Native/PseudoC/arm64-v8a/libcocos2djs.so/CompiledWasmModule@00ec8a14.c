
/* v8::CompiledWasmModule::CompiledWasmModule(std::__ndk1::shared_ptr<v8::internal::wasm::NativeModule>)
    */

void __thiscall
v8::CompiledWasmModule::CompiledWasmModule(CompiledWasmModule *this,undefined8 *param_2)

{
  *(undefined8 *)this = *param_2;
  *(undefined8 *)(this + 8) = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  if (*(long *)this != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(native_module_) != nullptr");
}

