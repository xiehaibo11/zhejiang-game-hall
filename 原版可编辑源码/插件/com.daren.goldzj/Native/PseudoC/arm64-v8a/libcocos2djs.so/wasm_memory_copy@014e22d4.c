
/* v8::internal::ExternalReference::wasm_memory_copy() */

code * v8::internal::ExternalReference::wasm_memory_copy(void)

{
  return wasm::memory_copy_wrapper;
}

