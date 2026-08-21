
/* v8::internal::wasm::AsyncCompileJob::CancelPendingForegroundTask() */

void __thiscall
v8::internal::wasm::AsyncCompileJob::CancelPendingForegroundTask(AsyncCompileJob *this)

{
  if (*(long *)(this + 0x118) != 0) {
    *(undefined8 *)(*(long *)(this + 0x118) + 0x28) = 0;
    *(undefined8 *)(this + 0x118) = 0;
  }
  return;
}

