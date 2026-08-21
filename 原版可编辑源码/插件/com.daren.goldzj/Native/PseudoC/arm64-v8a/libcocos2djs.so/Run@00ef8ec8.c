
/* v8::internal::CancelableTask::Run() */

void __thiscall v8::internal::CancelableTask::Run(CancelableTask *this)

{
  CancelableTask *pCVar1;
  char cVar2;
  bool bVar3;
  
  pCVar1 = this + 0x10;
  do {
    if (*(int *)pCVar1 != 0) {
      ClearExclusiveLocal();
      return;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pCVar1,0x10);
    if (bVar3) {
      *(int *)pCVar1 = 2;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
                    /* WARNING: Could not recover jumptable at 0x00ef8ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x18))();
  return;
}

