
/* v8::internal::ConcurrentMarking::Stop(v8::internal::ConcurrentMarking::StopRequest) */

undefined4 __thiscall v8::internal::ConcurrentMarking::Stop(ConcurrentMarking *this,int param_2)

{
  Mutex *this_00;
  int iVar1;
  undefined4 uVar2;
  CancelableTaskManager *this_01;
  long lVar3;
  long lVar4;
  
  this_00 = (Mutex *)(this + 0x434);
  base::Mutex::Lock(this_00);
  iVar1 = *(int *)(this + 0x48c);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if ((param_2 != 2) && (0 < *(int *)(this + 0x4d8))) {
      lVar3 = 0;
      lVar4 = 0xa8;
      this_01 = *(CancelableTaskManager **)(*(long *)this + 0x3eb0);
      do {
        if (this[lVar3 + 0x491] != (ConcurrentMarking)0x0) {
          iVar1 = CancelableTaskManager::TryAbort(this_01,*(ulong *)(this + lVar3 * 8 + 0x4a0));
          if (iVar1 == 2) {
            this[lVar3 + 0x491] = (ConcurrentMarking)0x0;
            *(int *)(this + 0x48c) = *(int *)(this + 0x48c) + -1;
          }
          else if (param_2 == 0) {
            *(undefined4 *)(this + lVar4) = 1;
          }
        }
        lVar3 = lVar3 + 1;
        lVar4 = lVar4 + 0x80;
      } while (lVar3 < *(int *)(this + 0x4d8));
      iVar1 = *(int *)(this + 0x48c);
    }
    if (0 < iVar1) {
      do {
        base::ConditionVariable::Wait((ConditionVariable *)(this + 0x45c),this_00);
      } while (0 < *(int *)(this + 0x48c));
    }
    uVar2 = 1;
  }
  base::Mutex::Unlock(this_00);
  return uVar2;
}

