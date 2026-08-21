
/* v8::internal::MemoryAllocator::Unmapper::TearDown() */

void __thiscall v8::internal::MemoryAllocator::Unmapper::TearDown(Unmapper *this)

{
  if (*(long *)(this + 0xb0) == 0) {
    PerformFreeMemoryOnQueuedChunks<(v8::internal::MemoryAllocator::Unmapper::FreeMode)1>(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","0 == pending_unmapping_tasks_");
}

