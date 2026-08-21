
/* v8::internal::wasm::NativeModule::GetJumpTableOffset(unsigned int) const */

int __thiscall v8::internal::wasm::NativeModule::GetJumpTableOffset(NativeModule *this,uint param_1)

{
  return (param_1 - *(int *)(*(long *)(this + 200) + 0x3c)) * 4;
}

