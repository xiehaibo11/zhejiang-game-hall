
/* v8::internal::LocalEmbedderHeapTracer::TraceEpilogue() */

void __thiscall v8::internal::LocalEmbedderHeapTracer::TraceEpilogue(LocalEmbedderHeapTracer *this)

{
  long *plVar1;
  double local_30;
  ulong local_28;
  
  plVar1 = *(long **)(this + 8);
  if (plVar1 != (long *)0x0) {
    local_30 = 0.0;
    local_28 = 0;
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_30);
    *(undefined8 *)(this + 0x30) = 0;
    *(ulong *)(this + 0x20) = local_28;
    if (0.5 < local_30) {
      GCTracer::RecordEmbedderSpeed(*(GCTracer **)(*(long *)this + 0x9048),local_28,local_30);
    }
  }
  return;
}

