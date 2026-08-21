
/* v8::base::PageAllocator::DiscardSystemPages(void*, unsigned long) */

void __thiscall
v8::base::PageAllocator::DiscardSystemPages(PageAllocator *this,void *param_1,ulong param_2)

{
  OS::DiscardSystemPages(param_1,param_2);
  return;
}

