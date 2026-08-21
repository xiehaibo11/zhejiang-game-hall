
/* v8::internal::V8::TearDown() */

void v8::internal::V8::TearDown(void)

{
  wasm::WasmEngine::GlobalTearDown();
  CallDescriptors::TearDown();
  ElementsAccessor::TearDown();
  RegisteredExtension::UnregisterAll();
  FlagList::ResetAllFlags();
  return;
}

