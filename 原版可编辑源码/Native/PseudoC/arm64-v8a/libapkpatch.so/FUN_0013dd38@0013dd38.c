
void FUN_0013dd38(long param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  if (param_2 <= *(int *)(param_1 + 0x5c)) {
    iVar1 = param_2;
  }
  iVar3 = iVar1;
  if (iVar1 < 2) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x124) = iVar3;
  if (1 < iVar1) {
    pvVar2 = operator_new(0x40);
    FUN_0013de70(pvVar2,param_1,iVar3 + -1);
    iVar1 = *(int *)(param_1 + 0x124);
    *(void **)(param_1 + 0x128) = pvVar2;
    if (1 < iVar1) {
      iVar3 = 0;
      do {
        *(long *)((long)pvVar2 + 0x20) = *(long *)((long)pvVar2 + 0x20) + 1;
        FUN_00137b18(1,FUN_0013df14,pvVar2,0,iVar3);
        iVar3 = iVar3 + 1;
      } while (iVar1 + -1 != iVar3);
    }
  }
  return;
}

