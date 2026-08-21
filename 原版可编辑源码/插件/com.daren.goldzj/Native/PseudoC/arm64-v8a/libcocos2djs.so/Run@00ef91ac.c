
/* non-virtual thunk to v8::internal::CancelableTask::Run() */

void __thiscall v8::internal::CancelableTask::Run(CancelableTask *this)

{
  char cVar1;
  bool bVar2;
  CancelableTask *pCVar3;
  
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
                    /* WARNING: Could not recover jumptable at 0x00ef91d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + -0x20) + 0x18))();
  return;
}

