
/* v8::internal::wasm::AsyncStreamingProcessor::OnFinishedChunk() */

void __thiscall
v8::internal::wasm::AsyncStreamingProcessor::OnFinishedChunk(AsyncStreamingProcessor *this)

{
  if (*(long *)(this + 0x28) != 0) {
    CommitCompilationUnits(this);
    return;
  }
  return;
}

