
undefined8 FUN_00a4ac08(long *param_1,long param_2,long *param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar2 = param_1[3];
  if (lVar2 != 0) {
    plVar3 = *(long **)(param_2 + 0x10);
    if (*param_1 == param_2) {
      *param_1 = (long)plVar3;
      plVar1 = param_1;
      if (plVar3 != (long *)0x0) {
        plVar1 = plVar3;
      }
      plVar1[1] = 0;
    }
    else {
      lVar4 = *(long *)(param_2 + 8);
      *(long **)(lVar4 + 0x10) = plVar3;
      plVar3 = param_1;
      if (*(long **)(param_2 + 0x10) != (long *)0x0) {
        plVar3 = *(long **)(param_2 + 0x10);
      }
      plVar3[1] = lVar4;
    }
    param_1[3] = lVar2 + -1;
    lVar2 = param_3[3];
    if (lVar2 == 0) {
      plVar3 = param_3 + 1;
      *param_3 = param_2;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
    }
    else {
      plVar3 = (long *)(param_4 + 0x10);
      lVar4 = *plVar3;
      *(long *)(param_2 + 8) = param_4;
      *(long *)(param_2 + 0x10) = lVar4;
      plVar1 = param_3;
      if ((long *)*plVar3 != (long *)0x0) {
        plVar1 = (long *)*plVar3;
      }
      plVar1[1] = param_2;
    }
    *plVar3 = param_2;
    param_3[3] = lVar2 + 1;
    return 1;
  }
  return 0;
}

