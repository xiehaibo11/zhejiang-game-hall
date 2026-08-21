
/* v8::WasmStreaming::Finish() */

void __thiscall v8::WasmStreaming::Finish(WasmStreaming *this)

{
  internal::wasm::StreamingDecoder::Finish(*(StreamingDecoder **)(*(long *)this + 8));
  return;
}

