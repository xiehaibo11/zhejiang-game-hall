
void FUN_00ea0e60(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar4 = operator_new(0x38);
  *puVar4 = &PTR_FUN_016f48d8;
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar8 = *(undefined8 *)(param_1 + 0x19);
  uVar7 = *(undefined8 *)(param_1 + 0x11);
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  puVar4[1] = uVar6;
  *(undefined8 *)((long)puVar4 + 0x19) = uVar8;
  *(undefined8 *)((long)puVar4 + 0x11) = uVar7;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  lVar5 = *(long *)(param_1 + 0x30);
  puVar4[6] = lVar5;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
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

