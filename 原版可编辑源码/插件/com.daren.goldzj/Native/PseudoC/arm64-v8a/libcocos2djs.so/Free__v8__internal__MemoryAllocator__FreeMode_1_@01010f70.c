
/* void 
   v8::internal::MemoryAllocator::Free<(v8::internal::MemoryAllocator::FreeMode)1>(v8::internal::MemoryChunk*)
    */

void __thiscall
v8::internal::MemoryAllocator::Free<(v8::internal::MemoryAllocator::FreeMode)1>
          (MemoryAllocator *this,MemoryChunk *param_1)

{
  ulong uVar1;
  
  uVar1 = FreePages(*(PageAllocator **)(this + 0x20),param_1,0x40000);
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","FreePages(page_allocator, reinterpret_cast<void*>(base), size)");
}

