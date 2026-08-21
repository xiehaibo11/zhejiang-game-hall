
void FUN_0010e6e4(long param_1,int param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  plVar2 = (long *)(param_1 + 0x10);
  plVar4 = (long *)*plVar2;
  for (plVar3 = plVar4;
      (plVar1 = plVar3, 0 < param_2 && (plVar1 = (long *)0x0, plVar3 != (long *)0x0));
      plVar3 = (long *)*plVar3) {
    param_2 = param_2 + -1;
  }
  if (plVar1 != (long *)0x0) {
    lVar5 = *plVar1;
    param_3[1] = plVar1[1];
    *param_3 = lVar5;
    if (lVar5 != 0) {
      *(long **)(lVar5 + 8) = param_3;
    }
    if (plVar1 != plVar4) {
      plVar2 = (long *)param_3[1];
    }
    *plVar2 = (long)param_3;
    *plVar1 = 0;
    plVar1[1] = 0;
    FUN_0010d514(plVar1);
    return;
  }
  return;
}

