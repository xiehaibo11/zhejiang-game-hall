
/* v8::internal::MarkCompactCollector::ProcessEphemeronMarking() */

void __thiscall
v8::internal::MarkCompactCollector::ProcessEphemeronMarking(MarkCompactCollector *this)

{
  ulong uVar1;
  
  Worklist<v8::internal::Ephemeron,64>::FlushToGlobal
            ((Worklist<v8::internal::Ephemeron,64> *)(this + 0x10a8),0);
  ProcessEphemeronsUntilFixpoint(this);
  if ((((*(long *)(*(long *)(this + 0x60) + 8) == 0) && (*(long *)(*(long *)(this + 0x58) + 8) == 0)
       ) && (*(long *)(*(long *)(this + 0x318) + 8) == 0)) &&
     (((*(long *)(*(long *)(this + 0x310) + 8) == 0 && (*(long *)(this + 0x300) == 0)) &&
      (*(long *)(this + 0x5b8) == 0)))) {
    uVar1 = LocalEmbedderHeapTracer::IsRemoteTracingDone
                      (*(LocalEmbedderHeapTracer **)(*(long *)(this + 8) + 0x870));
    if ((uVar1 & 1) != 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","heap()->local_embedder_heap_tracer()->IsRemoteTracingDone()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","marking_worklist()->IsEmpty()");
}

