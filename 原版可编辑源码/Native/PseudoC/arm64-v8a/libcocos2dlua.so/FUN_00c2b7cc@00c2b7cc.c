
undefined8 FUN_00c2b7cc(long param_1)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (double)FUN_00c29c50(param_1,1);
  uVar1 = 0;
  if (*(long *)(param_1 + 0x20) + 8U < *(ulong *)(param_1 + 0x28)) {
    dVar3 = (double)FUN_00c29c50(param_1,2);
    dVar2 = log(dVar2);
    dVar3 = log(dVar3);
    uVar1 = 2;
    *(double *)(*(long *)(param_1 + 0x20) + -0x10) = dVar2 * (1.0 / dVar3);
  }
  return uVar1;
}

