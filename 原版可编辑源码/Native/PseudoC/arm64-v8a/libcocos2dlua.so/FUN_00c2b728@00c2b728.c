
undefined8 FUN_00c2b728(long param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = 8;
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    FUN_00c29bdc(param_1,iVar2);
    uVar1 = *(long *)(param_1 + 0x20) + lVar3;
    lVar3 = lVar3 + 8;
  } while (uVar1 < *(ulong *)(param_1 + 0x28));
  return 0;
}

