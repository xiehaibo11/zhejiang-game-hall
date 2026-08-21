
/* v8::internal::wasm::NativeModule::GetRuntimeStubId(unsigned long) const */

ulong __thiscall
v8::internal::wasm::NativeModule::GetRuntimeStubId(NativeModule *this,ulong param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  
  base::Mutex::Lock((Mutex *)(this + 0x110));
  lVar1 = *(long *)(this + 0x160);
  do {
    if (lVar1 == *(long *)(this + 0x168)) {
      uVar3 = 0x21;
LAB_01202ab4:
      base::Mutex::Unlock((Mutex *)(this + 0x110));
      return uVar3;
    }
    uVar3 = **(ulong **)(lVar1 + 0x18);
    if ((uVar3 <= param_1) && (param_1 < uVar3 + (*(ulong **)(lVar1 + 0x18))[1])) {
      uVar2 = (uint)(param_1 - uVar3);
      if ((uVar2 < 0x210) && ((uVar2 & 0xfffffff0) == uVar2)) {
        uVar3 = param_1 - uVar3 >> 4 & 0xfffffff;
        goto LAB_01202ab4;
      }
    }
    lVar1 = lVar1 + 0x20;
  } while( true );
}

