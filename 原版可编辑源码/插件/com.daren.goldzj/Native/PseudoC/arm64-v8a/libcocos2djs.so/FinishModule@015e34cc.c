
/* v8::internal::wasm::AsyncCompileJob::FinishModule() */

void __thiscall v8::internal::wasm::AsyncCompileJob::FinishModule(AsyncCompileJob *this)

{
  AsyncCompileJob *local_8;
  
  AsyncCompileSucceeded(this,*(undefined8 *)(this + 0x50));
  WasmEngine::RemoveCompileJob(*(AsyncCompileJob **)(*(long *)this + 0xc770));
  if (local_8 != (AsyncCompileJob *)0x0) {
    ~AsyncCompileJob(local_8);
    operator_delete(local_8);
  }
  return;
}

