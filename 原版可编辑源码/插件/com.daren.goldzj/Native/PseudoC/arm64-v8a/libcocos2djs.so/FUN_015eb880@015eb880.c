
void FUN_015eb880(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *param_2 = &PTR_FUN_01cc9c90;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  param_2[2] = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

