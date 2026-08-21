
/* v8::internal::Heap::EagerlyFreeExternalMemory() */

void __thiscall v8::internal::Heap::EagerlyFreeExternalMemory(Heap *this)

{
  MemoryChunk *this_00;
  Mutex *this_01;
  long lVar1;
  
  for (this_00 = *(MemoryChunk **)(*(long *)(this + 0xf0) + 0x20); this_00 != (MemoryChunk *)0x0;
      this_00 = *(MemoryChunk **)(this_00 + 0xe0)) {
    if (*(long *)(this_00 + 0xa8) != 0) {
      this_01 = *(Mutex **)(this_00 + 0xa0);
      base::Mutex::Lock(this_01);
      if (((*(long *)(this_00 + 0xa8) != 0) && (lVar1 = *(long *)(this_00 + 0xf8), lVar1 != 0)) &&
         (LocalArrayBufferTracker::
          Free<v8::internal::ArrayBufferTracker::FreeDead<v8::internal::MajorNonAtomicMarkingState>(v8::internal::Page*,v8::internal::MajorNonAtomicMarkingState*)::_lambda(v8::internal::JSArrayBuffer)_1_>
                    (lVar1,*(long *)(this + 0x800) + 0x2701), *(long *)(lVar1 + 0x20) == 0)) {
        MemoryChunk::ReleaseLocalTracker(this_00);
      }
      base::Mutex::Unlock(this_01);
    }
  }
  MemoryAllocator::Unmapper::EnsureUnmappingCompleted((Unmapper *)(*(long *)(this + 0x820) + 0x88));
  return;
}

