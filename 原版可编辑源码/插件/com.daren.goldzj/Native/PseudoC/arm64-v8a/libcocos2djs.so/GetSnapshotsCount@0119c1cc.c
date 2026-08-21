
/* v8::internal::HeapProfiler::GetSnapshotsCount() */

ulong __thiscall v8::internal::HeapProfiler::GetSnapshotsCount(HeapProfiler *this)

{
  return (ulong)(*(long *)(this + 0x18) - *(long *)(this + 0x10)) >> 3;
}

