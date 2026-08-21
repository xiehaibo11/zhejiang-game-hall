
/* v8::internal::MemoryAllocator::FreeMemory(v8::PageAllocator*, unsigned long, unsigned long) */

void __thiscall
v8::internal::MemoryAllocator::FreeMemory
          (MemoryAllocator *this,PageAllocator *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = FreePages(param_1,(void *)param_2,param_3);
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","FreePages(page_allocator, reinterpret_cast<void*>(base), size)");
}

