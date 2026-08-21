
/* v8::internal::PerThreadAssertScope<(v8::internal::PerThreadAssertType)0, true>::Release() */

void __thiscall
v8::internal::PerThreadAssertScope<(v8::internal::PerThreadAssertType)0,true>::Release
          (PerThreadAssertScope<(v8::internal::PerThreadAssertType)0,true> *this)

{
  int iVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)(*(ulong *)this & 0xfffffffffffffffe);
  iVar1 = *(int *)(pbVar2 + 4);
  *pbVar2 = (byte)*(ulong *)this & 1;
  *(int *)(pbVar2 + 4) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    if (((DAT_01d3ec30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d3ec30), iVar1 != 0)) {
      DAT_01d3ec28 = base::Thread::CreateThreadLocalKey();
      __cxa_guard_release(&DAT_01d3ec30);
    }
    base::Thread::SetThreadLocal(DAT_01d3ec28,(void *)0x0);
    if (pbVar2 != (byte *)0x0) {
      operator_delete(pbVar2);
    }
  }
  *(ulong *)this = *(ulong *)this & 1;
  return;
}

