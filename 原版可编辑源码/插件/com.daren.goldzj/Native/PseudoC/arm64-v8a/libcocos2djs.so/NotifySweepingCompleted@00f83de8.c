
/* v8::internal::GCTracer::NotifySweepingCompleted() */

void __thiscall v8::internal::GCTracer::NotifySweepingCompleted(GCTracer *this)

{
  if (FLAG_trace_gc_freelists != '\0') {
    PrintIsolate((void *)(*(long *)this + -0x8850),
                 "FreeLists statistics after sweeping completed:\n");
    Heap::PrintFreeListsStats(*(Heap **)this);
  }
  if (FLAG_trace_allocations_origins != '\0') {
    SpaceWithLinearArea::PrintAllocationsOrigins(*(SpaceWithLinearArea **)(*(long *)this + 0xe8));
    SpaceWithLinearArea::PrintAllocationsOrigins(*(SpaceWithLinearArea **)(*(long *)this + 0xf0));
    SpaceWithLinearArea::PrintAllocationsOrigins(*(SpaceWithLinearArea **)(*(long *)this + 0xf8));
    SpaceWithLinearArea::PrintAllocationsOrigins(*(SpaceWithLinearArea **)(*(long *)this + 0x100));
    return;
  }
  return;
}

