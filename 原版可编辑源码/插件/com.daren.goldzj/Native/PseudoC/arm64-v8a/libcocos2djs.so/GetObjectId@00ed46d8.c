
/* v8::HeapProfiler::GetObjectId(v8::Local<v8::Value>) */

void v8::HeapProfiler::GetObjectId(void)

{
  internal::HeapProfiler::GetSnapshotObjectId();
  return;
}

