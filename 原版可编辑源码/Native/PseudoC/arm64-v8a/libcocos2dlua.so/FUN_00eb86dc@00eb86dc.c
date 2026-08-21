
long * FUN_00eb86dc(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = (long *)*param_1;
  plVar6 = plVar5;
  while( true ) {
    if (plVar6 == (long *)0x0) {
      return (long *)0x0;
    }
    lVar4 = plVar6[2];
    if (param_3 - lVar4 == 0 || param_3 < lVar4) break;
    plVar6 = (long *)plVar6[3];
    param_3 = param_3 - lVar4;
  }
  if (param_3 == 0) {
    return (long *)0x0;
  }
  if (lVar4 - param_3 == 0 || lVar4 < param_3) {
    if (plVar6[3] == 0) {
      *param_2 = 0;
      *param_1 = 0;
      return plVar5;
    }
    *param_1 = plVar6[3];
  }
  else {
    lVar1 = plVar6[1];
    lVar3 = *(long *)(*plVar6 + 0x18);
    plVar2 = *(long **)(lVar3 + 8);
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
    if (plVar2 == (long *)0x0) {
      plVar2 = malloc(0x20);
    }
    else {
      *(long *)(lVar3 + 8) = plVar2[3];
    }
    plVar2[1] = 0;
    plVar2[2] = 0;
    plVar2[3] = 0;
    *param_1 = (long)plVar2;
    *plVar2 = *plVar6;
    lVar3 = *param_1;
    *(long *)(lVar3 + 8) = lVar1 + param_3;
    *(long *)(lVar3 + 0x10) = lVar4 - param_3;
    *(long *)(lVar3 + 0x18) = plVar6[3];
    param_1 = (long *)*param_1;
    lVar4 = *param_1;
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
    if ((param_2 != (long *)0x0) && (plVar6 == (long *)*param_2)) {
      *param_2 = (long)param_1;
    }
    plVar6[2] = param_3;
  }
  plVar6[3] = 0;
  return plVar5;
}

