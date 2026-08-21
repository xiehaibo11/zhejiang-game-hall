
undefined8 * FUN_015fdea8(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar3 = operator_new(0x50);
  *puVar3 = &PTR_FUN_01cca2a0;
  puVar3[2] = *(undefined8 *)(param_1 + 0x10);
  lVar6 = *(long *)(param_1 + 0x18);
  puVar3[3] = lVar6;
  if (lVar6 != 0) {
    plVar4 = (long *)(lVar6 + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if (plVar4 == (long *)0x0) {
    puVar3[8] = 0;
  }
  else if ((long *)(param_1 + 0x20) == plVar4) {
    puVar3[8] = puVar3 + 4;
    (**(code **)(*plVar4 + 0x18))();
  }
  else {
    uVar5 = (**(code **)(*plVar4 + 0x10))();
    puVar3[8] = uVar5;
  }
  return puVar3;
}

