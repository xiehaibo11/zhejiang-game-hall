
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* v8::HeapProfiler::GetObjectId(void*) */

void v8::HeapProfiler::GetObjectId(void *param_1)

{
  void *in_x1;
  
  internal::HeapProfiler::GetSnapshotObjectId(param_1,in_x1);
  return;
}

