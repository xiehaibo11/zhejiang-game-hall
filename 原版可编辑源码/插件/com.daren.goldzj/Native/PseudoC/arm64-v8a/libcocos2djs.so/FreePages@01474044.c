
/* v8::base::PageAllocator::FreePages(void*, unsigned long) */

void __thiscall v8::base::PageAllocator::FreePages(PageAllocator *this,void *param_1,ulong param_2)

{
  OS::Free(param_1,param_2);
  return;
}

