
/* v8::internal::HeapObjectsMap::UpdateHeapObjectsMap() */

void __thiscall v8::internal::HeapObjectsMap::UpdateHeapObjectsMap(HeapObjectsMap *this)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong local_88;
  CombinedHeapObjectIterator aCStack_80 [64];
  
  if (FLAG_heap_profiler_trace_objects != '\0') {
    PrintF("Begin HeapObjectsMap::UpdateHeapObjectsMap. map has %d entries.\n",
           (ulong)*(uint *)(this + 0x14));
  }
  Heap::PreciseCollectAllGarbage(*(Heap **)(this + 0x78),0,0xb,0);
  CombinedHeapObjectIterator::CombinedHeapObjectIterator(aCStack_80,*(undefined8 *)(this + 0x78),0);
  local_88 = CombinedHeapObjectIterator::Next(aCStack_80);
  iVar2 = (int)local_88;
  while (iVar2 != 0) {
    uVar3 = local_88 - 1;
    uVar1 = HeapObject::SizeFromMap
                      ((HeapObject *)&local_88,
                       local_88 & 0xffffffff00000000 | (ulong)*(uint *)(local_88 - 1));
    FindOrAddEntry(this,uVar3,uVar1,true);
    if (FLAG_heap_profiler_trace_objects != '\0') {
      lVar4 = local_88 - 1;
      uVar3 = HeapObject::SizeFromMap
                        ((HeapObject *)&local_88,
                         local_88 & 0xffffffff00000000 | (ulong)*(uint *)(local_88 - 1));
      lVar5 = local_88 - 1;
      iVar2 = HeapObject::SizeFromMap
                        ((HeapObject *)&local_88,
                         local_88 & 0xffffffff00000000 | (ulong)*(uint *)(local_88 - 1));
      PrintF("Update object      : %p %6d. Next address is %p\n",lVar4,uVar3 & 0xffffffff,
             lVar5 + iVar2);
    }
    local_88 = CombinedHeapObjectIterator::Next(aCStack_80);
    iVar2 = (int)local_88;
  }
  RemoveDeadEntries(this);
  if (FLAG_heap_profiler_trace_objects != '\0') {
    PrintF("End HeapObjectsMap::UpdateHeapObjectsMap. map has %d entries.\n",
           (ulong)*(uint *)(this + 0x14));
  }
  HeapObjectIterator::~HeapObjectIterator((HeapObjectIterator *)aCStack_80);
  return;
}

