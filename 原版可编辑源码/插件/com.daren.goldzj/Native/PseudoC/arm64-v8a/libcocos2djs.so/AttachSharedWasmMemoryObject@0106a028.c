
/* v8::internal::BackingStore::AttachSharedWasmMemoryObject(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmMemoryObject>) */

void v8::internal::BackingStore::AttachSharedWasmMemoryObject(undefined8 param_1,undefined8 param_2)

{
  GlobalBackingStoreRegistry::AddSharedWasmMemoryObject(param_2,param_1);
  return;
}

