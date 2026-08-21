
/* v8::internal::HeapSnapshotGenerator::GenerateSnapshot() */

uint __thiscall v8::internal::HeapSnapshotGenerator::GenerateSnapshot(HeapSnapshotGenerator *this)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  Heap *this_00;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  CombinedHeapObjectIterator aCStack_90 [64];
  
  V8HeapExplorer::TagGlobalObjects((V8HeapExplorer *)(this + 0x18));
  Heap::PreciseCollectAllGarbage(*(Heap **)(this + 0x148),0,0xb,0);
  Heap::PreciseCollectAllGarbage(*(Heap **)(this + 0x148),0,0xb,0);
  lVar5 = *(long *)(this + 0x148);
  uVar4 = *(undefined8 *)(lVar5 + -0x5c88);
  *(undefined8 *)(lVar5 + -0x5c88) = 0;
  this_00 = *(Heap **)(this + 0x148);
  if (FLAG_verify_heap != '\0') {
    Heap::Verify(this_00);
  }
  if (*(long *)(this + 0x10) != 0) {
    CombinedHeapObjectIterator::CombinedHeapObjectIterator
              (aCStack_90,*(undefined8 *)(this + 0x20),1);
    iVar6 = 0;
    do {
      iVar1 = CombinedHeapObjectIterator::Next(aCStack_90);
      iVar6 = iVar6 + 1;
    } while (iVar1 != 0);
    HeapObjectIterator::~HeapObjectIterator((HeapObjectIterator *)aCStack_90);
    *(int *)(this + 0x144) = iVar6;
    *(undefined4 *)(this + 0x140) = 0;
  }
  if (FLAG_verify_heap != '\0') {
    Heap::Verify(this_00);
  }
  HeapSnapshot::AddSyntheticRootEntries(*(HeapSnapshot **)(this + 8));
  uVar3 = V8HeapExplorer::IterateAndExtractReferences((V8HeapExplorer *)(this + 0x18),this);
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    NativeObjectsExplorer::IterateAndExtractReferences((NativeObjectsExplorer *)(this + 0xe8),this);
    HeapSnapshot::FillChildren(*(HeapSnapshot **)(this + 8));
    *(int *)(*(long **)(this + 8) + 0x31) = **(int **)(**(long **)(this + 8) + 8) + -2;
    *(undefined4 *)(this + 0x140) = *(undefined4 *)(this + 0x144);
    uVar2 = (**(code **)(*(long *)this + 0x18))(this,1);
  }
  *(undefined8 *)(lVar5 + -0x5c88) = uVar4;
  return uVar2 & 1;
}

