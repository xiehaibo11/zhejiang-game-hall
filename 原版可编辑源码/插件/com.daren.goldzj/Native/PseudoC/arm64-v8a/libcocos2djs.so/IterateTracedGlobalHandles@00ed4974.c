
/* v8::EmbedderHeapTracer::IterateTracedGlobalHandles(v8::EmbedderHeapTracer::TracedGlobalHandleVisitor*)
    */

void __thiscall
v8::EmbedderHeapTracer::IterateTracedGlobalHandles
          (EmbedderHeapTracer *this,TracedGlobalHandleVisitor *param_1)

{
  internal::GlobalHandles::IterateTracedNodes
            (*(GlobalHandles **)(*(long *)(this + 8) + 0x95e0),param_1);
  return;
}

