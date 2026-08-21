
ulong X509v3_asid_subset(long *param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  
  uVar2 = 1;
  if ((param_1 != (long *)0x0) && (param_1 != param_2)) {
    if ((((param_2 == (long *)0x0) || (((int *)*param_1 != (int *)0x0 && (*(int *)*param_1 == 0))))
        || (((int *)param_1[1] != (int *)0x0 && (*(int *)param_1[1] == 0)))) ||
       (((piVar3 = (int *)*param_2, piVar3 != (int *)0x0 && (*piVar3 == 0)) ||
        (((int *)param_2[1] != (int *)0x0 && (*(int *)param_2[1] == 0)))))) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00b6d43c(*(undefined8 *)(piVar3 + 2),*(undefined8 *)(*param_1 + 8));
      if ((int)uVar2 != 0) {
        iVar1 = FUN_00b6d43c(*(undefined8 *)(param_2[1] + 8),*(undefined8 *)(param_1[1] + 8));
        uVar2 = (ulong)(iVar1 != 0);
      }
    }
  }
  return uVar2;
}

