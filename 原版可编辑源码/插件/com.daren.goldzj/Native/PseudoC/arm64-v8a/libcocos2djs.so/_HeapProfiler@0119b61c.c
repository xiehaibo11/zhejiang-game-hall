
/* v8::internal::HeapProfiler::~HeapProfiler() */

void __thiscall v8::internal::HeapProfiler::~HeapProfiler(HeapProfiler *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  long lVar3;
  HeapProfiler *pHVar4;
  SamplingHeapProfiler *this_00;
  AllocationTracker *this_01;
  StringsStorage *this_02;
  HeapSnapshot *this_03;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  pvVar1 = *(void **)(this + 0x70);
  *(undefined ***)this = &PTR_AllocationEvent_01cb63f0;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x78) = pvVar1;
    operator_delete(pvVar1);
  }
  this_00 = *(SamplingHeapProfiler **)(this + 0x68);
  *(undefined8 *)(this + 0x68) = 0;
  if (this_00 != (SamplingHeapProfiler *)0x0) {
    SamplingHeapProfiler::~SamplingHeapProfiler(this_00);
    operator_delete(this_00);
  }
  base::Mutex::~Mutex((Mutex *)(this + 0x3c));
  this_01 = *(AllocationTracker **)(this + 0x30);
  *(undefined8 *)(this + 0x30) = 0;
  if (this_01 != (AllocationTracker *)0x0) {
    AllocationTracker::~AllocationTracker(this_01);
    operator_delete(this_01);
  }
  this_02 = *(StringsStorage **)(this + 0x28);
  *(undefined8 *)(this + 0x28) = 0;
  if (this_02 != (StringsStorage *)0x0) {
    StringsStorage::~StringsStorage(this_02);
    operator_delete(this_02);
  }
  puVar5 = *(undefined8 **)(this + 0x10);
  if (puVar5 != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(this + 0x18);
    puVar2 = puVar5;
    if (puVar6 != puVar5) {
      do {
        puVar6 = puVar6 + -1;
        this_03 = (HeapSnapshot *)*puVar6;
        *puVar6 = 0;
        if (this_03 != (HeapSnapshot *)0x0) {
          HeapSnapshot::~HeapSnapshot(this_03);
          operator_delete(this_03);
        }
      } while (puVar5 != puVar6);
      puVar2 = *(undefined8 **)(this + 0x10);
    }
    *(undefined8 **)(this + 0x18) = puVar5;
    operator_delete(puVar2);
  }
  pHVar4 = this + 8;
  lVar3 = *(long *)pHVar4;
  *(undefined8 *)pHVar4 = 0;
  if (lVar3 == 0) {
    return;
  }
  FUN_0119c914(pHVar4);
  return;
}

