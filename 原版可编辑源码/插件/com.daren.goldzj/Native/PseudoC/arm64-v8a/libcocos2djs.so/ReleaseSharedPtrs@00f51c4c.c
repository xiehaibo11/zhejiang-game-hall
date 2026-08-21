
/* v8::internal::Isolate::ReleaseSharedPtrs() */

void __thiscall v8::internal::Isolate::ReleaseSharedPtrs(Isolate *this)

{
  void *pvVar1;
  void *pvVar2;
  
  base::Mutex::Lock((Mutex *)(this + 0xc72c));
  while (pvVar1 = *(void **)(this + 0xc758), pvVar1 != (void *)0x0) {
    *(undefined8 *)(this + 0xc758) = 0;
    do {
      (**(code **)((long)pvVar1 + 0x20))(*(undefined8 *)((long)pvVar1 + 0x18));
      pvVar2 = *(void **)((long)pvVar1 + 0x10);
      operator_delete(pvVar1);
      pvVar1 = pvVar2;
    } while (pvVar2 != (void *)0x0);
  }
  base::Mutex::Unlock((Mutex *)(this + 0xc72c));
  return;
}

