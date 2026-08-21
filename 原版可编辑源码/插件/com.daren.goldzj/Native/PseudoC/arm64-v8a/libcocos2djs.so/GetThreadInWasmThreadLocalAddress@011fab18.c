
/* v8::internal::trap_handler::GetThreadInWasmThreadLocalAddress() */

undefined4 * v8::internal::trap_handler::GetThreadInWasmThreadLocalAddress(void)

{
  return &g_thread_in_wasm_code;
}

