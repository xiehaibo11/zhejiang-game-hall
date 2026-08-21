
/* v8::internal::Heap::MarkingBarrierForDescriptorArraySlow(v8::internal::Heap*,
   v8::internal::HeapObject, v8::internal::HeapObject, int) */

void v8::internal::Heap::MarkingBarrierForDescriptorArraySlow
               (long param_1,undefined8 param_2,long param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = (uint)(*(ushort *)(param_3 + 7) >> 2);
  if (((*(uint *)(*(long *)(param_1 + 0x800) + 0x2704) ^ (uint)*(ushort *)(param_3 + 7)) & 3) != 0)
  {
    uVar1 = 0;
  }
  if ((int)uVar1 < param_4) {
    MarkCompactCollector::MarkDescriptorArrayFromWriteBarrier();
    return;
  }
  return;
}

