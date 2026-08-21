
/* v8::internal::CancelableIdleTask::Run(double) */

void v8::internal::CancelableIdleTask::Run(double param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *in_x0;
  
  plVar1 = in_x0 + 2;
  do {
    if ((int)*plVar1 != 0) {
      ClearExclusiveLocal();
      return;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = 2;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
                    /* WARNING: Could not recover jumptable at 0x00fffcc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_x0 + 0x18))();
  return;
}

