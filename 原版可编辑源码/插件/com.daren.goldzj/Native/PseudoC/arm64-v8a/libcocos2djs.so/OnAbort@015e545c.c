
/* v8::internal::wasm::AsyncStreamingProcessor::OnAbort() */

void __thiscall v8::internal::wasm::AsyncStreamingProcessor::OnAbort(AsyncStreamingProcessor *this)

{
  AsyncCompileJob *local_8;
  
  WasmEngine::RemoveCompileJob(*(AsyncCompileJob **)(**(long **)(this + 0x18) + 0xc770));
  if (local_8 != (AsyncCompileJob *)0x0) {
    AsyncCompileJob::~AsyncCompileJob(local_8);
    operator_delete(local_8);
  }
  return;
}

