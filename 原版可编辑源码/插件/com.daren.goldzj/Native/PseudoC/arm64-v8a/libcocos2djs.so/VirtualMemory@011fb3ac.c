
/* v8::internal::VirtualMemory::VirtualMemory(v8::PageAllocator*, unsigned long, void*, unsigned
   long) */

void __thiscall
v8::internal::VirtualMemory::VirtualMemory
          (VirtualMemory *this,PageAllocator *param_1,ulong param_2,void *param_3,ulong param_4)

{
  long lVar1;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(PageAllocator **)this = param_1;
  lVar1 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
  lVar1 = AllocatePages(*(undefined8 *)this,param_3,lVar1 + -1 + param_2 & -lVar1,
                        lVar1 + -1 + param_4 & -lVar1,0);
  if (lVar1 != 0) {
    *(long *)(this + 8) = lVar1;
    *(ulong *)(this + 0x10) = param_2;
  }
  return;
}

