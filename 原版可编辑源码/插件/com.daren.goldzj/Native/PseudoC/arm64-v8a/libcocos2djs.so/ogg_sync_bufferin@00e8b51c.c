
long ogg_sync_bufferin(undefined8 *param_1,size_t param_2)

{
  size_t sVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  size_t *psVar9;
  
  plVar6 = (long *)param_1[1];
  if (plVar6 == (long *)0x0) {
    plVar8 = (long *)*param_1;
    plVar6 = (long *)*plVar8;
    *(int *)(plVar8 + 2) = (int)plVar8[2] + 1;
    if (plVar6 == (long *)0x0) {
      plVar6 = malloc(0x20);
      sVar1 = param_2;
      if ((long)param_2 < 0x11) {
        sVar1 = 0x10;
      }
      pvVar2 = malloc(sVar1);
      psVar9 = (size_t *)(plVar6 + 1);
      *plVar6 = (long)pvVar2;
LAB_00e8b61c:
      *psVar9 = param_2;
    }
    else {
      *plVar8 = plVar6[3];
      psVar9 = (size_t *)(plVar6 + 1);
      if ((long)*psVar9 < (long)param_2) {
        pvVar2 = realloc((void *)*plVar6,param_2);
        *plVar6 = (long)pvVar2;
        goto LAB_00e8b61c;
      }
    }
    *(undefined4 *)(plVar6 + 2) = 1;
    plVar6[3] = (long)plVar8;
    puVar3 = (undefined8 *)plVar8[1];
    *(int *)(plVar8 + 2) = (int)plVar8[2] + 1;
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = malloc(0x20);
      plVar5 = puVar3 + 3;
    }
    else {
      plVar5 = puVar3 + 3;
      plVar8[1] = *plVar5;
    }
    puVar3[1] = 0;
    puVar3[2] = 0;
    *plVar5 = 0;
    *puVar3 = plVar6;
    param_1[1] = puVar3;
    param_1[2] = puVar3;
    goto LAB_00e8b718;
  }
  plVar8 = (long *)*plVar6;
  lVar4 = plVar6[1];
  lVar7 = plVar6[2];
  if ((long)param_2 <= (plVar8[1] - lVar7) - lVar4) {
    return *plVar8 + lVar7 + lVar4;
  }
  if (lVar7 == 0) {
    if (plVar8[1] < (long)param_2) {
      pvVar2 = realloc((void *)*plVar8,param_2);
      *plVar8 = (long)pvVar2;
      plVar8[1] = param_2;
      plVar8 = *(long **)param_1[1];
      lVar4 = ((long *)param_1[1])[1];
    }
    return *plVar8 + lVar4;
  }
  plVar8 = (long *)*param_1;
  plVar6 = (long *)*plVar8;
  *(int *)(plVar8 + 2) = (int)plVar8[2] + 1;
  if (plVar6 == (long *)0x0) {
    plVar6 = malloc(0x20);
    sVar1 = param_2;
    if ((long)param_2 < 0x11) {
      sVar1 = 0x10;
    }
    pvVar2 = malloc(sVar1);
    psVar9 = (size_t *)(plVar6 + 1);
    *plVar6 = (long)pvVar2;
LAB_00e8b6c0:
    *psVar9 = param_2;
  }
  else {
    *plVar8 = plVar6[3];
    psVar9 = (size_t *)(plVar6 + 1);
    if ((long)*psVar9 < (long)param_2) {
      pvVar2 = realloc((void *)*plVar6,param_2);
      *plVar6 = (long)pvVar2;
      goto LAB_00e8b6c0;
    }
  }
  *(undefined4 *)(plVar6 + 2) = 1;
  plVar6[3] = (long)plVar8;
  puVar3 = (undefined8 *)plVar8[1];
  *(int *)(plVar8 + 2) = (int)plVar8[2] + 1;
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = malloc(0x20);
    plVar5 = puVar3 + 3;
  }
  else {
    plVar5 = puVar3 + 3;
    plVar8[1] = *plVar5;
  }
  puVar3[1] = 0;
  puVar3[2] = 0;
  *plVar5 = 0;
  *puVar3 = plVar6;
  *(undefined8 **)(param_1[1] + 0x18) = puVar3;
  param_1[1] = puVar3;
LAB_00e8b718:
  return *plVar6;
}

