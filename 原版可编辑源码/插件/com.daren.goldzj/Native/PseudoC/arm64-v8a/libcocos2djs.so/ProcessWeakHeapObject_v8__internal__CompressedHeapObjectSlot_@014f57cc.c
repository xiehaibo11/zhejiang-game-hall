
/* void v8::internal::MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,
   v8::internal::ConcurrentMarkingState>::ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>(v8::internal::HeapObject,
   v8::internal::CompressedHeapObjectSlot, v8::internal::HeapObject) */

void __thiscall
v8::internal::
MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>::
ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>
          (MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
           *this,ulong param_2,ulong param_3,ulong param_4)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  
  uVar2 = param_4 & 0xfffffffffffc0000;
  if ((*(uint *)(*(long *)(uVar2 + 0x10) + (param_4 - uVar2 >> 7 & 0x1ffffff) * 4) >>
       (ulong)((uint)(param_4 - uVar2 >> 2) & 0x1f) & 1) == 0) {
    lVar5 = *(long *)(this + 0x18);
    lVar3 = lVar5 + (long)*(int *)(this + 0x28) * 0x50;
    puVar6 = *(undefined8 **)(lVar3 + 0xd98);
    lVar4 = puVar6[1];
    if (lVar4 == 0x40) {
      base::Mutex::Lock((Mutex *)(lVar5 + 0x1018));
      *puVar6 = *(undefined8 *)(lVar5 + 0x1040);
      *(undefined8 **)(lVar5 + 0x1040) = puVar6;
      base::Mutex::Unlock((Mutex *)(lVar5 + 0x1018));
      pvVar1 = operator_new(0x410);
      memset((void *)((long)pvVar1 + 0x20),0,0x3f0);
      *(void **)(lVar3 + 0xd98) = pvVar1;
      *(undefined8 *)((long)pvVar1 + 8) = 1;
      *(ulong *)((long)pvVar1 + 0x10) = param_2;
      *(ulong *)((long)pvVar1 + 0x18) = param_3;
    }
    else {
      puVar6[1] = lVar4 + 1;
      puVar6[lVar4 * 2 + 2] = param_2;
      puVar6[lVar4 * 2 + 3] = param_3;
    }
  }
  else if (((uint)*(undefined8 *)(uVar2 + 8) >> 6 & 1) != 0) {
    uVar2 = *(ulong *)((MemoryChunk *)(param_2 & 0xfffffffffffc0000) + 8);
    if ((((uint)uVar2 >> 0xf & 1) != 0) || ((uVar2 & 0x58) == 0)) {
      RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                ((MemoryChunk *)(param_2 & 0xfffffffffffc0000),param_3);
      return;
    }
  }
  return;
}

