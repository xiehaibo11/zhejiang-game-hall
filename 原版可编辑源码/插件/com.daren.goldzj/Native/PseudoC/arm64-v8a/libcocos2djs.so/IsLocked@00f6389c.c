
/* v8::Locker::IsLocked(v8::Isolate*) */

bool v8::Locker::IsLocked(Isolate *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x95f0) + 0x28);
  iVar2 = internal::ThreadId::GetCurrentThreadId();
  return iVar1 == iVar2;
}

