
/* v8::internal::wasm::AsyncStreamingProcessor::OnError(v8::internal::wasm::WasmError const&) */

void v8::internal::wasm::AsyncStreamingProcessor::OnError(WasmError *param_1)

{
  WasmError *in_x1;
  
  FinishAsyncCompileJobWithError((AsyncStreamingProcessor *)param_1,in_x1);
  return;
}

