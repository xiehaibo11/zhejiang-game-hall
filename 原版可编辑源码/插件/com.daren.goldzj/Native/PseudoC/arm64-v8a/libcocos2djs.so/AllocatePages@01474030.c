
/* v8::base::PageAllocator::AllocatePages(void*, unsigned long, unsigned long,
   v8::PageAllocator::Permission) */

void __thiscall
v8::base::PageAllocator::AllocatePages
          (undefined8 param_1_00,undefined8 param_1,undefined8 param_2,undefined8 param_3,
          undefined4 param_5)

{
  OS::Allocate(param_1,param_2,param_3,param_5);
  return;
}

