
/* v8::Locker::Initialize(v8::Isolate*) */

void __thiscall v8::Locker::Initialize(Locker *this,Isolate *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  Mutex *this_00;
  
  *(Isolate **)(this + 8) = param_1;
  *(undefined2 *)this = 0x100;
  DAT_01d3edc0 = 1;
  iVar1 = *(int *)(*(long *)(param_1 + 0x95f0) + 0x28);
  iVar2 = internal::ThreadId::GetCurrentThreadId();
  if (iVar1 != iVar2) {
    this_00 = *(Mutex **)(*(long *)(this + 8) + 0x95f0);
    base::Mutex::Lock(this_00);
    uVar3 = internal::ThreadId::GetCurrentThreadId();
    *(undefined4 *)(this_00 + 0x28) = uVar3;
    *this = (Locker)0x1;
    uVar4 = internal::ThreadManager::RestoreThread
                      (*(ThreadManager **)(*(long *)(this + 8) + 0x95f0));
    if ((uVar4 & 1) != 0) {
      this[1] = (Locker)0x0;
    }
  }
  return;
}

