
/* v8::internal::Heap::HasLowEmbedderAllocationRate() */

bool __thiscall v8::internal::Heap::HasLowEmbedderAllocationRate(Heap *this)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if ((FLAG_global_gc_scheduling == '\0') || (*(long *)(this + 0x870) == 0)) {
    bVar1 = true;
  }
  else {
    dVar2 = (double)GCTracer::CurrentEmbedderAllocationThroughputInBytesPerMillisecond
                              (*(GCTracer **)(this + 0x7f8));
    dVar3 = (double)GCTracer::EmbedderSpeedInBytesPerMillisecond(*(GCTracer **)(this + 0x7f8));
    dVar4 = 0.0;
    if (dVar2 != 0.0) {
      dVar4 = 200000.0;
      if (dVar3 != 0.0) {
        dVar4 = dVar3;
      }
      dVar4 = dVar4 / (dVar2 + dVar4);
    }
    if (FLAG_trace_mutator_utilization != '\0') {
      Isolate::PrintWithTimestamp
                ((char *)(this + -0x8850),dVar4,dVar2,
                 "%s mutator utilization = %.3f (mutator_speed=%.f, gc_speed=%.f)\n","Embedder");
    }
    bVar1 = 0.993 < dVar4;
  }
  return bVar1;
}

