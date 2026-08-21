
/* v8::internal::MinorMarkCompactCollector::EvacuateEpilogue() */

void __thiscall
v8::internal::MinorMarkCompactCollector::EvacuateEpilogue(MinorMarkCompactCollector *this)

{
  SemiSpace::set_age_mark
            ((SemiSpace *)(*(long *)(*(long *)(this + 8) + 0xe8) + 0xd0),
             *(ulong *)(*(long *)(*(long *)(this + 8) + 0xe8) + 0x68));
  MemoryAllocator::Unmapper::FreeQueuedChunks
            ((Unmapper *)(*(long *)(*(long *)(this + 8) + 0x820) + 0x88));
  return;
}

