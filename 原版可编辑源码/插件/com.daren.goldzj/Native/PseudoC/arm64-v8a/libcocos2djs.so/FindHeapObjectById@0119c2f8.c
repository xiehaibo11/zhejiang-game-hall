
/* v8::internal::HeapProfiler::FindHeapObjectById(unsigned int) */

ulong * __thiscall v8::internal::HeapProfiler::FindHeapObjectById(HeapProfiler *this,uint param_1)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  CombinedHeapObjectIterator aCStack_70 [64];
  
  CombinedHeapObjectIterator::CombinedHeapObjectIterator
            (aCStack_70,*(undefined8 *)(*(long *)(this + 8) + 0x78),1);
  uVar3 = CombinedHeapObjectIterator::Next(aCStack_70);
  if ((int)uVar3 != 0) {
    uVar6 = 0;
    do {
      uVar2 = HeapObjectsMap::FindEntry(*(HeapObjectsMap **)(this + 8),uVar3 - 1);
      uVar1 = uVar3;
      if (uVar2 != param_1) {
        uVar1 = uVar6;
      }
      uVar3 = CombinedHeapObjectIterator::Next(aCStack_70);
      uVar6 = uVar1;
    } while ((int)uVar3 != 0);
    if ((int)uVar1 != 0) {
      lVar5 = *(long *)(*(long *)(this + 8) + 0x78);
      if (*(CanonicalHandleScope **)(lVar5 + 0xd68) == (CanonicalHandleScope *)0x0) {
        puVar4 = *(ulong **)(lVar5 + 0xd50);
        if (puVar4 == *(ulong **)(lVar5 + 0xd58)) {
          puVar4 = (ulong *)HandleScope::Extend((Isolate *)(lVar5 + -0x8850));
        }
        *(ulong **)(lVar5 + 0xd50) = puVar4 + 1;
        *puVar4 = uVar1;
      }
      else {
        puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(lVar5 + 0xd68),uVar1);
      }
      goto LAB_0119c38c;
    }
  }
  puVar4 = (ulong *)0x0;
LAB_0119c38c:
  HeapObjectIterator::~HeapObjectIterator((HeapObjectIterator *)aCStack_70);
  return puVar4;
}

