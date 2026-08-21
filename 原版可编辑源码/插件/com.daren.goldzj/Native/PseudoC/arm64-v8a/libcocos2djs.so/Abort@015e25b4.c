
/* v8::internal::wasm::AsyncCompileJob::Abort() */

void __thiscall v8::internal::wasm::AsyncCompileJob::Abort(AsyncCompileJob *this)

{
  undefined8 local_8;
  
  WasmEngine::RemoveCompileJob(*(AsyncCompileJob **)(*(long *)this + 0xc770));
  if (local_8 != (AsyncCompileJob *)0x0) {
    ~AsyncCompileJob(local_8);
    operator_delete(local_8);
  }
  return;
}

