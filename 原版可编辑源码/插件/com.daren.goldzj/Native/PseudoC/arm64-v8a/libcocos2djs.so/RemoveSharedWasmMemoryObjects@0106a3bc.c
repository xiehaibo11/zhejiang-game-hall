
/* v8::internal::BackingStore::RemoveSharedWasmMemoryObjects(v8::internal::Isolate*) */

void v8::internal::BackingStore::RemoveSharedWasmMemoryObjects(Isolate *param_1)

{
  GlobalBackingStoreRegistry::Purge(param_1);
  return;
}

