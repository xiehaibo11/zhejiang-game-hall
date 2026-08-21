
undefined8 FUN_0013f208(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x98);
  if (lVar2 != *(long *)(param_2 + 0x50)) {
    uVar1 = FUN_0013e3d8(param_1,lVar2,*(long *)(param_2 + 0x50) - lVar2);
    return uVar1;
  }
  return 1;
}

