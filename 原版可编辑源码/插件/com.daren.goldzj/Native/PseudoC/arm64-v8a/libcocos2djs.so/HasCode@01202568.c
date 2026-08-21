
/* v8::internal::wasm::NativeModule::HasCode(unsigned int) const */

bool __thiscall v8::internal::wasm::NativeModule::HasCode(NativeModule *this,uint param_1)

{
  long lVar1;
  
  base::Mutex::Lock((Mutex *)(this + 0x110));
  lVar1 = *(long *)(*(long *)(this + 0x150) +
                   (ulong)(param_1 - *(int *)(*(long *)(this + 200) + 0x3c)) * 8);
  base::Mutex::Unlock((Mutex *)(this + 0x110));
  return lVar1 != 0;
}

