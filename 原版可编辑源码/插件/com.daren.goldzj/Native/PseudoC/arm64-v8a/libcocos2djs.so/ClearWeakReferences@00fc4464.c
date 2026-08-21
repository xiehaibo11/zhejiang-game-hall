
/* v8::internal::MarkCompactCollector::ClearWeakReferences() */

void __thiscall v8::internal::MarkCompactCollector::ClearWeakReferences(MarkCompactCollector *this)

{
  byte *pbVar1;
  uint *puVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  byte **local_b0;
  byte *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  Scope aSStack_90 [64];
  long *local_50;
  uint *local_48;
  
  GCTracer::Scope::Scope(aSStack_90,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x21);
  if (DAT_01d3f230 == (byte *)0x0) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f230 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d3f230;
  local_b0 = (byte **)0x0;
  if ((*DAT_01d3f230 & 5) != 0) {
    uVar4 = GCTracer::Scope::Name(0x21);
    local_50 = (long *)0x0;
    local_48 = (uint *)0x0;
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0x58,pbVar1,uVar4,0,0,0,0,0,0,0,&local_50,0);
    puVar2 = local_48;
    local_48 = (uint *)0x0;
    if (puVar2 != (uint *)0x0) {
      (**(code **)(*(long *)puVar2 + 8))();
    }
    plVar3 = local_50;
    local_50 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    local_a0 = GCTracer::Scope::Name(0x21);
    local_b0 = &local_a8;
    local_a8 = pbVar1;
    local_98 = uVar4;
  }
  local_50 = (long *)0x0;
  local_48 = (uint *)0x0;
  uVar4 = *(undefined8 *)(this + 8);
  uVar5 = Worklist<std::__ndk1::pair<v8::internal::HeapObject,v8::internal::CompressedHeapObjectSlot>,64>
          ::Pop((Worklist<std::__ndk1::pair<v8::internal::HeapObject,v8::internal::CompressedHeapObjectSlot>,64>
                 *)(this + 0x1618),0,(pair *)&local_50);
  if ((uVar5 & 1) != 0) {
    do {
      puVar2 = local_48;
      uVar5 = (ulong)*local_48;
      if (*local_48 != 3 && (uVar5 & 3) == 3) {
        uVar7 = (ulong)local_48 & 0xffffffff00000000;
        uVar6 = uVar5 & 0xfffffffffffffffd | uVar7;
        uVar5 = uVar5 & 0xfffffffffffc0000 | uVar7;
        uVar8 = uVar6 - uVar5;
        if ((*(uint *)(*(long *)(uVar5 + 0x10) + (uVar8 >> 7 & 0x1ffffff) * 4) >>
             (ulong)((uint)(uVar8 >> 2) & 0x1f) & 1) == 0) {
          if (*(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0xa2) {
            ClearPotentialSimpleMapTransition(this);
          }
          *puVar2 = (int)uVar4 - 0x8850U | 3;
        }
        else if (((uint)*(undefined8 *)(uVar5 + 8) >> 6 & 1) != 0) {
          uVar5 = *(ulong *)((MemoryChunk *)((ulong)local_50 & 0xfffffffffffc0000) + 8);
          if ((((uint)uVar5 >> 0xf & 1) != 0) || ((uVar5 & 0x58) == 0)) {
            RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                      ((MemoryChunk *)((ulong)local_50 & 0xfffffffffffc0000),(ulong)local_48);
          }
        }
      }
      uVar5 = Worklist<std::__ndk1::pair<v8::internal::HeapObject,v8::internal::CompressedHeapObjectSlot>,64>
              ::Pop((Worklist<std::__ndk1::pair<v8::internal::HeapObject,v8::internal::CompressedHeapObjectSlot>,64>
                     *)(this + 0x1618),0,(pair *)&local_50);
    } while ((uVar5 & 1) != 0);
  }
  if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x28))(plVar3,local_a8,local_a0,local_98);
  }
  GCTracer::Scope::~Scope(aSStack_90);
  return;
}

