
/* v8::internal::V8HeapExplorer::GetEntry(v8::internal::Object) */

undefined8 __thiscall v8::internal::V8HeapExplorer::GetEntry(V8HeapExplorer *this,void *param_2)

{
  undefined8 extraout_x0;
  
  if (((ulong)param_2 & 1) == 0) {
    return 0;
  }
  HeapSnapshotGenerator::FindOrAddEntry
            (*(HeapSnapshotGenerator **)(this + 0x30),param_2,(HeapEntriesAllocator *)this);
  return extraout_x0;
}

