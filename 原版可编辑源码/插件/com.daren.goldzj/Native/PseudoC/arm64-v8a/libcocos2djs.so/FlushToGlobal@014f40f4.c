
/* v8::internal::Worklist<v8::internal::HeapObject, 16>::FlushToGlobal(int) */

void __thiscall
v8::internal::Worklist<v8::internal::HeapObject,16>::FlushToGlobal
          (Worklist<v8::internal::HeapObject,16> *this,int param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + (long)param_1 * 0x50);
  if (puVar2[1] != 0) {
    base::Mutex::Lock((Mutex *)(this + 0x280));
    *puVar2 = *(undefined8 *)(this + 0x2a8);
    *(undefined8 **)(this + 0x2a8) = puVar2;
    base::Mutex::Unlock((Mutex *)(this + 0x280));
    pvVar1 = operator_new(0x90);
    *(undefined8 *)((long)pvVar1 + 0x88) = 0;
    *(undefined8 *)((long)pvVar1 + 0x10) = 0;
    *(undefined8 *)((long)pvVar1 + 8) = 0;
    *(undefined8 *)((long)pvVar1 + 0x20) = 0;
    *(undefined8 *)((long)pvVar1 + 0x18) = 0;
    *(undefined8 *)((long)pvVar1 + 0x30) = 0;
    *(undefined8 *)((long)pvVar1 + 0x28) = 0;
    *(undefined8 *)((long)pvVar1 + 0x40) = 0;
    *(undefined8 *)((long)pvVar1 + 0x38) = 0;
    *(undefined8 *)((long)pvVar1 + 0x50) = 0;
    *(undefined8 *)((long)pvVar1 + 0x48) = 0;
    *(undefined8 *)((long)pvVar1 + 0x60) = 0;
    *(undefined8 *)((long)pvVar1 + 0x58) = 0;
    *(undefined8 *)((long)pvVar1 + 0x70) = 0;
    *(undefined8 *)((long)pvVar1 + 0x68) = 0;
    *(undefined8 *)((long)pvVar1 + 0x80) = 0;
    *(undefined8 *)((long)pvVar1 + 0x78) = 0;
    *(void **)(this + (long)param_1 * 0x50) = pvVar1;
  }
  puVar2 = *(undefined8 **)(this + (long)param_1 * 0x50 + 8);
  if (puVar2[1] != 0) {
    base::Mutex::Lock((Mutex *)(this + 0x280));
    *puVar2 = *(undefined8 *)(this + 0x2a8);
    *(undefined8 **)(this + 0x2a8) = puVar2;
    base::Mutex::Unlock((Mutex *)(this + 0x280));
    pvVar1 = operator_new(0x90);
    *(undefined8 *)((long)pvVar1 + 0x88) = 0;
    *(undefined8 *)((long)pvVar1 + 0x10) = 0;
    *(undefined8 *)((long)pvVar1 + 8) = 0;
    *(undefined8 *)((long)pvVar1 + 0x20) = 0;
    *(undefined8 *)((long)pvVar1 + 0x18) = 0;
    *(undefined8 *)((long)pvVar1 + 0x30) = 0;
    *(undefined8 *)((long)pvVar1 + 0x28) = 0;
    *(undefined8 *)((long)pvVar1 + 0x40) = 0;
    *(undefined8 *)((long)pvVar1 + 0x38) = 0;
    *(undefined8 *)((long)pvVar1 + 0x50) = 0;
    *(undefined8 *)((long)pvVar1 + 0x48) = 0;
    *(undefined8 *)((long)pvVar1 + 0x60) = 0;
    *(undefined8 *)((long)pvVar1 + 0x58) = 0;
    *(undefined8 *)((long)pvVar1 + 0x70) = 0;
    *(undefined8 *)((long)pvVar1 + 0x68) = 0;
    *(undefined8 *)((long)pvVar1 + 0x80) = 0;
    *(undefined8 *)((long)pvVar1 + 0x78) = 0;
    *(void **)(this + (long)param_1 * 0x50 + 8) = pvVar1;
  }
  return;
}

