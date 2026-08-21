
long * FUN_00e8c4a8(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = (long *)*param_1;
  plVar7 = plVar6;
  while( true ) {
    if (plVar7 == (long *)0x0) {
      return (long *)0x0;
    }
    lVar4 = plVar7[2];
    if (param_3 - lVar4 == 0 || param_3 < lVar4) break;
    plVar7 = (long *)plVar7[3];
    param_3 = param_3 - lVar4;
  }
  if (param_3 == 0) {
    return (long *)0x0;
  }
  if (lVar4 - param_3 == 0 || lVar4 < param_3) {
    if (plVar7[3] == 0) {
      *param_2 = 0;
      *param_1 = 0;
      return plVar6;
    }
    *param_1 = plVar7[3];
  }
  else {
    lVar1 = plVar7[1];
    lVar5 = *(long *)(*plVar7 + 0x18);
    plVar2 = *(long **)(lVar5 + 8);
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + 1;
    if (plVar2 == (long *)0x0) {
      plVar2 = malloc(0x20);
      plVar3 = plVar2 + 3;
    }
    else {
      plVar3 = plVar2 + 3;
      *(long *)(lVar5 + 8) = *plVar3;
    }
    plVar2[1] = 0;
    plVar2[2] = 0;
    *plVar3 = 0;
    *param_1 = (long)plVar2;
    *plVar2 = *plVar7;
    lVar5 = *param_1;
    *(long *)(lVar5 + 8) = lVar1 + param_3;
    *(long *)(lVar5 + 0x10) = lVar4 - param_3;
    *(long *)(lVar5 + 0x18) = plVar7[3];
    param_1 = (long *)*param_1;
    lVar4 = *param_1;
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
    if ((param_2 != (long *)0x0) && (plVar7 == (long *)*param_2)) {
      *param_2 = (long)param_1;
    }
    plVar7[2] = param_3;
  }
  plVar7[3] = 0;
  return plVar6;
}

