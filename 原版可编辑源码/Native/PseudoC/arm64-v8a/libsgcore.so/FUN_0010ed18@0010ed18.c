
undefined8 * FUN_0010ed18(long param_1,int param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  void *pvVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  char *pcVar7;
  
  if (param_1 == 0) {
    return (undefined8 *)0x0;
  }
  puVar1 = (undefined8 *)(*(code *)PTR_malloc_00113048)(0x40);
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(uint *)(puVar1 + 3) = *(uint *)(param_1 + 0x18) & 0xfffffeff;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  pcVar7 = *(char **)(param_1 + 0x20);
  if (pcVar7 != (char *)0x0) {
    sVar2 = strlen(pcVar7);
    pvVar3 = (void *)(*(code *)PTR_malloc_00113048)(sVar2 + 1);
    if (pvVar3 == (void *)0x0) {
      puVar1[4] = 0;
      goto LAB_0010ee34;
    }
    memcpy(pvVar3,pcVar7,sVar2 + 1);
    puVar1[4] = pvVar3;
  }
  pcVar7 = *(char **)(param_1 + 0x38);
  if (pcVar7 != (char *)0x0) {
    sVar2 = strlen(pcVar7);
    pvVar3 = (void *)(*(code *)PTR_malloc_00113048)(sVar2 + 1);
    if (pvVar3 == (void *)0x0) {
      puVar1[7] = 0;
      goto LAB_0010ee34;
    }
    memcpy(pvVar3,pcVar7,sVar2 + 1);
    puVar1[7] = pvVar3;
  }
  if (param_2 == 0) {
    return puVar1;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 == (long *)0x0) {
    return puVar1;
  }
  plVar6 = (long *)0x0;
  while (plVar4 = (long *)FUN_0010ed18(plVar5,1), plVar4 != (long *)0x0) {
    if (plVar6 == (long *)0x0) {
      puVar1[2] = plVar4;
    }
    else {
      *plVar6 = (long)plVar4;
      plVar4[1] = (long)plVar6;
    }
    plVar5 = (long *)*plVar5;
    plVar6 = plVar4;
    if (plVar5 == (long *)0x0) {
      return puVar1;
    }
  }
LAB_0010ee34:
  FUN_0010d514(puVar1);
  return (undefined8 *)0x0;
}

