
/* v8::internal::PerThreadAssertScope<(v8::internal::PerThreadAssertType)3,
   false>::PerThreadAssertScope() */

void __thiscall
v8::internal::PerThreadAssertScope<(v8::internal::PerThreadAssertType)3,false>::PerThreadAssertScope
          (PerThreadAssertScope<(v8::internal::PerThreadAssertType)3,false> *this)

{
  int iVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)this = 0;
  if (((DAT_01d3ec30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d3ec30), iVar1 != 0)) {
    DAT_01d3ec28 = base::Thread::CreateThreadLocalKey();
    __cxa_guard_release(&DAT_01d3ec30);
  }
  puVar2 = (undefined8 *)base::Thread::GetThreadLocal(DAT_01d3ec28);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = operator_new(8);
    *puVar2 = 0x1010101;
    if (((DAT_01d3ec30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d3ec30), iVar1 != 0)) {
      DAT_01d3ec28 = base::Thread::CreateThreadLocalKey();
      __cxa_guard_release(&DAT_01d3ec30);
    }
    base::Thread::SetThreadLocal(DAT_01d3ec28,puVar2);
  }
  *(ulong *)this = (ulong)*(byte *)((long)puVar2 + 3) | (ulong)puVar2;
  *(undefined1 *)((long)puVar2 + 3) = 0;
  *(int *)((long)puVar2 + 4) = *(int *)((long)puVar2 + 4) + 1;
  return;
}

