
/* v8::internal::WasmInstanceObject::InitTableEntries(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmInstanceObject>, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int) */

void v8::internal::WasmInstanceObject::InitTableEntries(void)

{
  wasm::LoadElemSegment();
  return;
}

