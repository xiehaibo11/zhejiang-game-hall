
/* v8::internal::PerThreadAssertScope<(v8::internal::PerThreadAssertType)2, true>::Release() */

void __thiscall
v8::internal::PerThreadAssertScope<(v8::internal::PerThreadAssertType)2,true>::Release
          (PerThreadAssertScope<(v8::internal::PerThreadAssertType)2,true> *this)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = (void *)(*(ulong *)this & 0xfffffffffffffffe);
  *(byte *)((long)pvVar2 + 2) = (byte)*(ulong *)this & 1;
  iVar1 = *(int *)((long)pvVar2 + 4) + -1;
  *(int *)((long)pvVar2 + 4) = iVar1;
  if (iVar1 == 0) {
    if (((DAT_01d3ec30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d3ec30), iVar1 != 0)) {
      DAT_01d3ec28 = base::Thread::CreateThreadLocalKey();
      __cxa_guard_release(&DAT_01d3ec30);
    }
    base::Thread::SetThreadLocal(DAT_01d3ec28,(void *)0x0);
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
  }
  *(ulong *)this = *(ulong *)this & 1;
  return;
}

