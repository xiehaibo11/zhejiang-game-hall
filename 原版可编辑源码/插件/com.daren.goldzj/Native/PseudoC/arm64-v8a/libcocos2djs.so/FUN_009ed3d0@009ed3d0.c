
void FUN_009ed3d0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_2 = &PTR_FUN_01c6c148;
  uVar5 = *(undefined8 *)(param_1 + 0x11);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)((long)param_2 + 0x19) = *(undefined8 *)(param_1 + 0x19);
  *(undefined8 *)((long)param_2 + 0x11) = uVar5;
  param_2[2] = uVar7;
  param_2[1] = uVar6;
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x30);
  param_2[6] = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
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

