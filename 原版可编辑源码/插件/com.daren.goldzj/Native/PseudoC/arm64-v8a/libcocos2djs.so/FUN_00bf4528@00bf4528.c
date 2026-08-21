
void FUN_00bf4528(undefined8 *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  
  lVar1 = param_3[1];
  plVar2 = (long *)*param_2;
  plVar4 = (long *)param_2[1];
  lVar5 = param_2[2];
  *param_2 = *param_3;
  param_2[1] = lVar1;
  *param_3 = (long)plVar2;
  param_3[1] = (long)plVar4;
  param_3[2] = lVar5;
  param_2[2] = (long)param_3;
  if (plVar2 == param_3) {
    *plVar2 = (long)param_2;
  }
  else {
    param_3[1] = (long)param_2;
    plVar4 = plVar2;
  }
  if (plVar4 != (long *)0x0) {
    plVar4[2] = (long)param_3;
  }
  if (*param_2 != 0) {
    *(long **)(*param_2 + 0x10) = param_2;
  }
  if (param_2[1] != 0) {
    *(long **)(param_2[1] + 0x10) = param_2;
  }
  puVar3 = (undefined8 *)param_3[2];
  if (puVar3 != (undefined8 *)0x0) {
    if (param_2 != (long *)*puVar3) {
      puVar3[1] = param_3;
      return;
    }
    *puVar3 = param_3;
    return;
  }
  *param_1 = param_3;
  return;
}

