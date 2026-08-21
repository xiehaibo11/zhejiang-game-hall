
/* v8::internal::HeapSnapshotGenerator::FillReferences() */

bool __thiscall v8::internal::HeapSnapshotGenerator::FillReferences(HeapSnapshotGenerator *this)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = V8HeapExplorer::IterateAndExtractReferences((V8HeapExplorer *)(this + 0x18),this);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    NativeObjectsExplorer::IterateAndExtractReferences((NativeObjectsExplorer *)(this + 0xe8),this);
  }
  return bVar1;
}

