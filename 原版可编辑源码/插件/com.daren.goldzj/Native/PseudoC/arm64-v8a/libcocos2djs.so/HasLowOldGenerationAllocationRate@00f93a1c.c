
/* v8::internal::Heap::HasLowOldGenerationAllocationRate() */

bool __thiscall v8::internal::Heap::HasLowOldGenerationAllocationRate(Heap *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = 0.0;
  dVar1 = (double)GCTracer::OldGenerationAllocationThroughputInBytesPerMillisecond
                            (*(GCTracer **)(this + 0x7f8),0.0);
  dVar2 = (double)GCTracer::CombinedMarkCompactSpeedInBytesPerMillisecond
                            (*(GCTracer **)(this + 0x7f8));
  if (dVar1 != 0.0) {
    dVar3 = 200000.0;
    if (dVar2 != 0.0) {
      dVar3 = dVar2;
    }
    dVar3 = dVar3 / (dVar1 + dVar3);
  }
  if (FLAG_trace_mutator_utilization != '\0') {
    Isolate::PrintWithTimestamp
              ((char *)(this + -0x8850),dVar3,dVar1,
               "%s mutator utilization = %.3f (mutator_speed=%.f, gc_speed=%.f)\n","Old generation")
    ;
  }
  return 0.993 < dVar3;
}

