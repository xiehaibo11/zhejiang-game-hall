
/* v8::internal::Worklist<std::__ndk1::pair<v8::internal::HeapObject,
   v8::internal::CompressedHeapObjectSlot>, 64>::FlushToGlobal(int) */

void __thiscall
v8::internal::
Worklist<std::__ndk1::pair<v8::internal::HeapObject,v8::internal::CompressedHeapObjectSlot>,64>::
FlushToGlobal(Worklist<std::__ndk1::pair<v8::internal::HeapObject,v8::internal::CompressedHeapObjectSlot>,64>
              *this,int param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + (long)param_1 * 0x50);
  if (puVar2[1] != 0) {
    base::Mutex::Lock((Mutex *)(this + 0x280));
    *puVar2 = *(undefined8 *)(this + 0x2a8);
    *(undefined8 **)(this + 0x2a8) = puVar2;
    base::Mutex::Unlock((Mutex *)(this + 0x280));
    pvVar1 = operator_new(0x410);
    memset((void *)((long)pvVar1 + 8),0,0x408);
    *(void **)(this + (long)param_1 * 0x50) = pvVar1;
  }
  puVar2 = *(undefined8 **)(this + (long)param_1 * 0x50 + 8);
  if (puVar2[1] != 0) {
    base::Mutex::Lock((Mutex *)(this + 0x280));
    *puVar2 = *(undefined8 *)(this + 0x2a8);
    *(undefined8 **)(this + 0x2a8) = puVar2;
    base::Mutex::Unlock((Mutex *)(this + 0x280));
    pvVar1 = operator_new(0x410);
    memset((void *)((long)pvVar1 + 8),0,0x408);
    *(void **)(this + (long)param_1 * 0x50 + 8) = pvVar1;
  }
  return;
}

