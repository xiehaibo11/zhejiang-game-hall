
/* v8::Isolate::MemoryPressureNotification(v8::MemoryPressureLevel) */

void __thiscall v8::Isolate::MemoryPressureNotification(Isolate *this,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = Locker::IsActive();
  if ((uVar4 & 1) == 0) {
    iVar3 = internal::ThreadId::GetCurrentThreadId();
    bVar1 = iVar3 == *(int *)(this + 0x2bd0);
  }
  else {
    iVar3 = *(int *)(*(long *)(this + 0x95f0) + 0x28);
    iVar2 = internal::ThreadId::GetCurrentThreadId();
    bVar1 = iVar3 == iVar2;
  }
  internal::Heap::MemoryPressureNotification((Heap *)(this + 0x8850),param_2,bVar1);
  return;
}

