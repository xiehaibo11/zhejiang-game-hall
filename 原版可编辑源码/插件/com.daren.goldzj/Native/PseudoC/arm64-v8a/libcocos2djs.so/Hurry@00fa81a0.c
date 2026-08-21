
/* v8::internal::IncrementalMarking::Hurry() */

void __thiscall v8::internal::IncrementalMarking::Hurry(IncrementalMarking *this)

{
  long *plVar1;
  double dVar2;
  double dVar3;
  
  plVar1 = *(long **)(this + 0x10);
  if (((((*(long *)(plVar1[1] + 8) != 0) || (*(long *)(*plVar1 + 8) != 0)) ||
       (*(long *)(plVar1[0x58] + 8) != 0)) ||
      ((*(long *)(plVar1[0x57] + 8) != 0 || (plVar1[0x55] != 0)))) || (plVar1[0xac] != 0)) {
    if (FLAG_trace_incremental_marking == '\0') {
      dVar2 = 0.0;
    }
    else {
      dVar2 = (double)Heap::MonotonicallyIncreasingTimeInMs();
      if (FLAG_trace_incremental_marking != '\0') {
        Isolate::PrintWithTimestamp
                  ((char *)(*(long *)this + -0x8850),"[IncrementalMarking] Hurry\n");
      }
    }
    MarkCompactCollector::
    ProcessMarkingWorklist<(v8::internal::MarkCompactCollector::MarkingWorklistProcessingMode)0>
              (*(MarkCompactCollector **)(this + 8),0);
    *(undefined4 *)(this + 0x58) = 3;
    *(undefined1 *)(*(long *)this + 0xac0) = 1;
    if ((FLAG_trace_incremental_marking != '\0') &&
       (dVar3 = (double)Heap::MonotonicallyIncreasingTimeInMs(),
       FLAG_trace_incremental_marking != '\0')) {
      Isolate::PrintWithTimestamp
                ((char *)(*(long *)this + -0x8850),
                 "[IncrementalMarking] Complete (hurry), spent %d ms.\n",(int)(dVar3 - dVar2));
      return;
    }
  }
  return;
}

