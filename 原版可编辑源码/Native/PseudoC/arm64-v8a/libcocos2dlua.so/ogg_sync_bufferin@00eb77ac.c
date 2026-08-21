
long ogg_sync_bufferin(undefined8 *param_1,size_t param_2)

{
  size_t sVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  size_t *psVar8;
  
  plVar5 = (long *)param_1[1];
  if (plVar5 == (long *)0x0) {
    plVar7 = (long *)*param_1;
    plVar5 = (long *)*plVar7;
    *(int *)(plVar7 + 2) = (int)plVar7[2] + 1;
    if (plVar5 == (long *)0x0) {
      plVar5 = malloc(0x20);
      sVar1 = param_2;
      if ((long)param_2 < 0x11) {
        sVar1 = 0x10;
      }
      pvVar2 = malloc(sVar1);
      psVar8 = (size_t *)(plVar5 + 1);
      *plVar5 = (long)pvVar2;
LAB_00eb78ac:
      *psVar8 = param_2;
    }
    else {
      *plVar7 = plVar5[3];
      psVar8 = (size_t *)(plVar5 + 1);
      if ((long)*psVar8 < (long)param_2) {
        pvVar2 = realloc((void *)*plVar5,param_2);
        *plVar5 = (long)pvVar2;
        goto LAB_00eb78ac;
      }
    }
    *(undefined4 *)(plVar5 + 2) = 1;
    plVar5[3] = (long)plVar7;
    puVar3 = (undefined8 *)plVar7[1];
    *(int *)(plVar7 + 2) = (int)plVar7[2] + 1;
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = malloc(0x20);
    }
    else {
      plVar7[1] = puVar3[3];
    }
    *puVar3 = plVar5;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    param_1[1] = puVar3;
    param_1[2] = puVar3;
    goto LAB_00eb7990;
  }
  plVar7 = (long *)*plVar5;
  lVar4 = plVar5[1];
  lVar6 = plVar5[2];
  if ((long)param_2 <= (plVar7[1] - lVar6) - lVar4) {
    return *plVar7 + lVar6 + lVar4;
  }
  if (lVar6 == 0) {
    if (plVar7[1] < (long)param_2) {
      pvVar2 = realloc((void *)*plVar7,param_2);
                    /* catch() { ... } // from try @ 00eb7934 with catch @ 00eb7908 */
      *plVar7 = (long)pvVar2;
      plVar7[1] = param_2;
      plVar7 = *(long **)param_1[1];
      lVar4 = ((long *)param_1[1])[1];
    }
    return *plVar7 + lVar4;
  }
  plVar7 = (long *)*param_1;
  plVar5 = (long *)*plVar7;
  *(int *)(plVar7 + 2) = (int)plVar7[2] + 1;
  if (plVar5 == (long *)0x0) {
    plVar5 = malloc(0x20);
                    /* try { // try from 00eb792c to 00fb7933 has its CatchHandler @ 00eb7978 */
                    /* try { // try from 00eb7934 to 00fb7993 has its CatchHandler @ 00eb7908 */
    sVar1 = param_2;
    if ((long)param_2 < 0x11) {
      sVar1 = 0x10;
    }
    pvVar2 = malloc(sVar1);
    psVar8 = (size_t *)(plVar5 + 1);
    *plVar5 = (long)pvVar2;
LAB_00eb7944:
    *psVar8 = param_2;
  }
  else {
    *plVar7 = plVar5[3];
    psVar8 = (size_t *)(plVar5 + 1);
    if ((long)*psVar8 < (long)param_2) {
      pvVar2 = realloc((void *)*plVar5,param_2);
      *plVar5 = (long)pvVar2;
      goto LAB_00eb7944;
    }
  }
  *(undefined4 *)(plVar5 + 2) = 1;
  plVar5[3] = (long)plVar7;
  puVar3 = (undefined8 *)plVar7[1];
  *(int *)(plVar7 + 2) = (int)plVar7[2] + 1;
  if (puVar3 == (undefined8 *)0x0) {
                    /* catch() { ... } // from try @ 00eb792c with catch @ 00eb7978 */
    puVar3 = malloc(0x20);
  }
  else {
    plVar7[1] = puVar3[3];
  }
  *puVar3 = plVar5;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined8 **)(param_1[1] + 0x18) = puVar3;
  param_1[1] = puVar3;
LAB_00eb7990:
  return *plVar5;
}

