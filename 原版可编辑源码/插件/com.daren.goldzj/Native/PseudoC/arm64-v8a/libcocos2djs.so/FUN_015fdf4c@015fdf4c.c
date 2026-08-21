
void FUN_015fdf4c(long param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  
  *param_2 = &PTR_FUN_01cca2a0;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 0x18);
  param_2[3] = lVar4;
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar5 = *(long **)(param_1 + 0x40);
  if (plVar5 == (long *)0x0) {
    param_2[8] = 0;
  }
  else {
    if ((long *)(param_1 + 0x20) == plVar5) {
      param_2[8] = param_2 + 4;
                    /* WARNING: Could not recover jumptable at 0x015fdfe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x40) + 0x18))();
      return;
    }
    uVar3 = (**(code **)(*plVar5 + 0x10))(plVar5);
    param_2[8] = uVar3;
  }
  return;
}

