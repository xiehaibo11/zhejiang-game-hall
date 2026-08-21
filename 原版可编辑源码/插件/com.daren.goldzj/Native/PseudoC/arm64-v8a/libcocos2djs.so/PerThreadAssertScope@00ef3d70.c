
/* v8::internal::PerThreadAssertScope<(v8::internal::PerThreadAssertType)0,
   false>::PerThreadAssertScope() */

void __thiscall
v8::internal::PerThreadAssertScope<(v8::internal::PerThreadAssertType)0,false>::PerThreadAssertScope
          (PerThreadAssertScope<(v8::internal::PerThreadAssertType)0,false> *this)

{
  int iVar1;
  byte *pbVar2;
  
  *(undefined8 *)this = 0;
  if (((DAT_01d3ec30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d3ec30), iVar1 != 0)) {
    DAT_01d3ec28 = base::Thread::CreateThreadLocalKey();
    __cxa_guard_release(&DAT_01d3ec30);
  }
  pbVar2 = (byte *)base::Thread::GetThreadLocal(DAT_01d3ec28);
  if (pbVar2 == (byte *)0x0) {
    pbVar2 = operator_new(8);
    pbVar2[0] = 1;
    pbVar2[1] = 1;
    pbVar2[2] = 1;
    pbVar2[3] = 1;
    pbVar2[4] = 0;
    pbVar2[5] = 0;
    pbVar2[6] = 0;
    pbVar2[7] = 0;
    if (((DAT_01d3ec30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d3ec30), iVar1 != 0)) {
      DAT_01d3ec28 = base::Thread::CreateThreadLocalKey();
      __cxa_guard_release(&DAT_01d3ec30);
    }
    base::Thread::SetThreadLocal(DAT_01d3ec28,pbVar2);
  }
  *(ulong *)this = (ulong)*pbVar2 | (ulong)pbVar2;
  *pbVar2 = 0;
  *(int *)(pbVar2 + 4) = *(int *)(pbVar2 + 4) + 1;
  return;
}

