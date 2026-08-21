
/* se::Object::nativeObjectFinalizeHook(void*) */

void se::Object::nativeObjectFinalizeHook(void *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  RefCounter *this;
  
  if (param_1 != (void *)0x0) {
    lVar1 = NativePtrToObjectMap::find(param_1);
    lVar2 = NativePtrToObjectMap::end();
    if (lVar1 != lVar2) {
      this = *(RefCounter **)(lVar1 + 0x18);
      pcVar3 = *(code **)(this + 0x48);
      if ((pcVar3 != (code *)0x0) ||
         (pcVar3 = *(code **)(*(long *)(this + 0x10) + 0x40), pcVar3 != (code *)0x0)) {
        (*pcVar3)(param_1);
      }
      RefCounter::decRef(this);
      NativePtrToObjectMap::erase(lVar1);
      return;
    }
  }
  return;
}

