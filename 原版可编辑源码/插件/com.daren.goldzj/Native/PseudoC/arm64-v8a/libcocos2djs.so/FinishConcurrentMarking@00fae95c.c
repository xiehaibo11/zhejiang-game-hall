
/* v8::internal::MarkCompactCollector::FinishConcurrentMarking(v8::internal::ConcurrentMarking::StopRequest)
    */

void v8::internal::MarkCompactCollector::FinishConcurrentMarking(long param_1)

{
  if (FLAG_concurrent_marking != '\0' || FLAG_parallel_marking != '\0') {
    ConcurrentMarking::Stop(*(ConcurrentMarking **)(*(long *)(param_1 + 8) + 0x830));
    ConcurrentMarking::FlushMemoryChunkData
              (*(MajorNonAtomicMarkingState **)(*(long *)(param_1 + 8) + 0x830));
    return;
  }
  return;
}

