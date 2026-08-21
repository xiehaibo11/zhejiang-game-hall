
/* v8::V8::SetSnapshotDataBlob(v8::StartupData*) */

void v8::V8::SetSnapshotDataBlob(StartupData *param_1)

{
  internal::V8::SetSnapshotBlob(param_1);
  return;
}

