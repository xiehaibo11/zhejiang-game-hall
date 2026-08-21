
/* v8::internal::V8HeapExplorer::EstimateObjectsCount() */

int __thiscall v8::internal::V8HeapExplorer::EstimateObjectsCount(V8HeapExplorer *this)

{
  int iVar1;
  int iVar2;
  CombinedHeapObjectIterator aCStack_60 [64];
  
  CombinedHeapObjectIterator::CombinedHeapObjectIterator(aCStack_60,*(undefined8 *)(this + 8),1);
  iVar2 = -1;
  do {
    iVar1 = CombinedHeapObjectIterator::Next(aCStack_60);
    iVar2 = iVar2 + 1;
  } while (iVar1 != 0);
  HeapObjectIterator::~HeapObjectIterator((HeapObjectIterator *)aCStack_60);
  return iVar2;
}

