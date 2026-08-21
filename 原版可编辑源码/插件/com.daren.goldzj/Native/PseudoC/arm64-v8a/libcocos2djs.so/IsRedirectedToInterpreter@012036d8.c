
/* v8::internal::wasm::NativeModule::IsRedirectedToInterpreter(unsigned int) */

byte __thiscall
v8::internal::wasm::NativeModule::IsRedirectedToInterpreter(NativeModule *this,uint param_1)

{
  uint uVar1;
  byte bVar2;
  
  base::Mutex::Lock((Mutex *)(this + 0x110));
  if (*(long *)(this + 0x158) == 0) {
    bVar2 = 0;
  }
  else {
    uVar1 = param_1 - *(int *)(*(long *)(this + 200) + 0x3c);
    bVar2 = *(byte *)(*(long *)(this + 0x158) + (ulong)(uVar1 >> 3)) >> (ulong)(uVar1 & 7) & 1;
  }
  base::Mutex::Unlock((Mutex *)(this + 0x110));
  return bVar2;
}

