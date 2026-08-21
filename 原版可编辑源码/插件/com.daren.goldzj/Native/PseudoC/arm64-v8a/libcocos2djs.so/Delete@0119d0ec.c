
/* v8::internal::HeapSnapshot::Delete() */

void __thiscall v8::internal::HeapSnapshot::Delete(HeapSnapshot *this)

{
  HeapProfiler::RemoveSnapshot(*(HeapProfiler **)this,this);
  return;
}

