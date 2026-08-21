
/* v8::internal::LocalEmbedderHeapTracer::SetRemoteTracer(v8::EmbedderHeapTracer*) */

void __thiscall
v8::internal::LocalEmbedderHeapTracer::SetRemoteTracer
          (LocalEmbedderHeapTracer *this,EmbedderHeapTracer *param_1)

{
  if (*(long *)(this + 8) != 0) {
    *(undefined8 *)(*(long *)(this + 8) + 8) = 0;
  }
  *(EmbedderHeapTracer **)(this + 8) = param_1;
  if (param_1 != (EmbedderHeapTracer *)0x0) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)this;
  }
  return;
}

