
/* v8::HeapSnapshot::Delete() */

void __thiscall v8::HeapSnapshot::Delete(HeapSnapshot *this)

{
  int iVar1;
  long lVar2;
  
  lVar2 = internal::HeapProfiler::isolate(*(HeapProfiler **)this);
  iVar1 = internal::HeapProfiler::GetSnapshotsCount(*(HeapProfiler **)(lVar2 + 0xb6d0));
  if (1 < iVar1) {
    internal::HeapSnapshot::Delete((HeapSnapshot *)this);
    return;
  }
  internal::HeapProfiler::DeleteAllSnapshots(*(HeapProfiler **)(lVar2 + 0xb6d0));
  return;
}

