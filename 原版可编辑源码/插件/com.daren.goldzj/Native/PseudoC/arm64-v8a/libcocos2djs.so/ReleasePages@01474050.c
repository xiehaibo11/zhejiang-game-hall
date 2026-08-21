
/* v8::base::PageAllocator::ReleasePages(void*, unsigned long, unsigned long) */

void __thiscall
v8::base::PageAllocator::ReleasePages(PageAllocator *this,void *param_1,ulong param_2,ulong param_3)

{
  OS::Release((void *)((long)param_1 + param_3),param_2 - param_3);
  return;
}

