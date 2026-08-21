
/* v8::internal::HeapProfiler::GetSnapshotObjectId(void*) */

void __thiscall v8::internal::HeapProfiler::GetSnapshotObjectId(HeapProfiler *this,void *param_1)

{
  int iVar1;
  
  iVar1 = HeapObjectsMap::FindEntry(*(HeapObjectsMap **)(this + 8),(ulong)param_1);
  if (iVar1 != 0) {
    return;
  }
  HeapObjectsMap::FindMergedNativeEntry(*(HeapObjectsMap **)(this + 8),param_1);
  return;
}

