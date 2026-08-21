
/* v8::Isolate::GetHeapObjectStatisticsAtLastGC(v8::HeapObjectStatistics*, unsigned long) */

undefined8 __thiscall
v8::Isolate::GetHeapObjectStatisticsAtLastGC
          (Isolate *this,HeapObjectStatistics *param_1,ulong param_2)

{
  Heap *this_00;
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_48;
  char *local_28;
  
  if ((param_1 != (HeapObjectStatistics *)0x0) && (internal::TracingFlags::gc_stats != 0)) {
    this_00 = (Heap *)(this + 0x8850);
    uVar1 = internal::Heap::NumberOfTrackedHeapObjectTypes();
    if (param_2 < uVar1) {
      uVar2 = internal::Heap::ObjectCountAtLastGC(this_00,param_2);
      uVar3 = internal::Heap::ObjectSizeAtLastGC(this_00,param_2);
      uVar1 = internal::Heap::GetObjectTypeName((ulong)this_00,(char **)param_2,&local_28);
      if ((uVar1 & 1) != 0) {
        *(char **)param_1 = local_28;
        *(undefined8 *)(param_1 + 0x10) = uVar2;
        *(undefined8 *)(param_1 + 0x18) = uVar3;
        *(undefined8 *)(param_1 + 8) = local_48;
        return 1;
      }
    }
  }
  return 0;
}

