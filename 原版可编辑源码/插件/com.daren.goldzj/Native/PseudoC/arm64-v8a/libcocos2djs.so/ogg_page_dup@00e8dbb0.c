
void ogg_page_dup(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  param_1[3] = param_2[3];
  plVar4 = (long *)*param_2;
  if (plVar4 == (long *)0x0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar5 = (long *)0x0;
    plVar6 = (long *)0x0;
    do {
      lVar3 = *(long *)(*plVar4 + 0x18);
      plVar1 = *(long **)(lVar3 + 8);
      *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
      if (plVar1 == (long *)0x0) {
        plVar1 = malloc(0x20);
        plVar2 = plVar1 + 3;
      }
      else {
        plVar2 = plVar1 + 3;
        *(long *)(lVar3 + 8) = *plVar2;
      }
      plVar1[1] = 0;
      plVar1[2] = 0;
      *plVar2 = 0;
      plVar2 = plVar1;
      if (plVar5 != (long *)0x0) {
        plVar5[3] = (long)plVar1;
        plVar2 = plVar6;
      }
      lVar3 = *plVar4;
      plVar1[1] = plVar4[1];
      *plVar1 = lVar3;
      plVar1[2] = plVar4[2];
      plVar4 = (long *)plVar4[3];
      plVar5 = plVar1;
      plVar6 = plVar2;
    } while (plVar4 != (long *)0x0);
    for (; plVar6 != (long *)0x0; plVar6 = (long *)plVar6[3]) {
      *(int *)(*plVar6 + 0x10) = *(int *)(*plVar6 + 0x10) + 1;
    }
  }
  *param_1 = (long)plVar2;
  plVar4 = (long *)param_2[2];
  if (plVar4 == (long *)0x0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar5 = (long *)0x0;
    plVar6 = (long *)0x0;
    do {
      lVar3 = *(long *)(*plVar4 + 0x18);
      plVar1 = *(long **)(lVar3 + 8);
      *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
      if (plVar1 == (long *)0x0) {
        plVar1 = malloc(0x20);
        plVar2 = plVar1 + 3;
      }
      else {
        plVar2 = plVar1 + 3;
        *(long *)(lVar3 + 8) = *plVar2;
      }
      plVar1[1] = 0;
      plVar1[2] = 0;
      *plVar2 = 0;
      plVar2 = plVar1;
      if (plVar5 != (long *)0x0) {
        plVar5[3] = (long)plVar1;
        plVar2 = plVar6;
      }
      lVar3 = *plVar4;
      plVar1[1] = plVar4[1];
      *plVar1 = lVar3;
      plVar1[2] = plVar4[2];
      plVar4 = (long *)plVar4[3];
      plVar5 = plVar1;
      plVar6 = plVar2;
    } while (plVar4 != (long *)0x0);
    for (; plVar6 != (long *)0x0; plVar6 = (long *)plVar6[3]) {
      *(int *)(*plVar6 + 0x10) = *(int *)(*plVar6 + 0x10) + 1;
    }
  }
  param_1[2] = (long)plVar2;
  return;
}

