
/* non-virtual thunk to v8::internal::CancelableIdleTask::Run(double) */

void __thiscall v8::internal::CancelableIdleTask::Run(CancelableIdleTask *this,double param_1)

{
  char cVar1;
  bool bVar2;
  CancelableIdleTask *pCVar3;
  
  pCVar3 = this + -0x10;
  do {
    if (*(int *)pCVar3 != 0) {
      ClearExclusiveLocal();
      return;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(pCVar3,0x10);
    if (bVar2) {
      *(int *)pCVar3 = 2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
                    /* WARNING: Could not recover jumptable at 0x00fffd28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + -0x20) + 0x18))();
  return;
}

