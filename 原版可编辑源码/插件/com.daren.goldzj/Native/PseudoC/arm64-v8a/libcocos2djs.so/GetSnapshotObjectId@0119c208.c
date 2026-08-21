
/* v8::internal::HeapProfiler::GetSnapshotObjectId(v8::internal::Handle<v8::internal::Object>) */

undefined8 __thiscall
v8::internal::HeapProfiler::GetSnapshotObjectId(HeapProfiler *this,ulong *param_2)

{
  undefined8 uVar1;
  
  if ((*param_2 & 1) == 0) {
    return 0;
  }
  uVar1 = HeapObjectsMap::FindEntry(*(HeapObjectsMap **)(this + 8),*param_2 - 1);
  return uVar1;
}

