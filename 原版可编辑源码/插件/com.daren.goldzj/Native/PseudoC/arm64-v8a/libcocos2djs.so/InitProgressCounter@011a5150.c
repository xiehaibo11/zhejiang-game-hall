
/* v8::internal::HeapSnapshotGenerator::InitProgressCounter() */

void __thiscall
v8::internal::HeapSnapshotGenerator::InitProgressCounter(HeapSnapshotGenerator *this)

{
  int iVar1;
  int iVar2;
  CombinedHeapObjectIterator aCStack_60 [64];
  
  if (*(long *)(this + 0x10) != 0) {
    CombinedHeapObjectIterator::CombinedHeapObjectIterator
              (aCStack_60,*(undefined8 *)(this + 0x20),1);
    iVar2 = 0;
    do {
      iVar1 = CombinedHeapObjectIterator::Next(aCStack_60);
      iVar2 = iVar2 + 1;
    } while (iVar1 != 0);
    HeapObjectIterator::~HeapObjectIterator((HeapObjectIterator *)aCStack_60);
    *(int *)(this + 0x144) = iVar2;
    *(undefined4 *)(this + 0x140) = 0;
  }
  return;
}

