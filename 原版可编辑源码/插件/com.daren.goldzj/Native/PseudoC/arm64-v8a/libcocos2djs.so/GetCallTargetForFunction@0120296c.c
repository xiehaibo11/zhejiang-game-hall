
/* v8::internal::wasm::NativeModule::GetCallTargetForFunction(unsigned int) const */

long __thiscall
v8::internal::wasm::NativeModule::GetCallTargetForFunction(NativeModule *this,uint param_1)

{
  return **(long **)(this + 0xf0) + (ulong)((param_1 - *(int *)(*(long *)(this + 200) + 0x3c)) * 4);
}

