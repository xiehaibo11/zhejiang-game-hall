
/* v8::internal::LocalEmbedderHeapTracer::SetEmbedderStackStateForNextFinalization(v8::EmbedderHeapTracer::EmbedderStackState)
    */

void __thiscall
v8::internal::LocalEmbedderHeapTracer::SetEmbedderStackStateForNextFinalization
          (LocalEmbedderHeapTracer *this,undefined4 param_2)

{
  if (*(long *)(this + 8) != 0) {
    *(undefined4 *)(this + 0x18) = param_2;
  }
  return;
}

