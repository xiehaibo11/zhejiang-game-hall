
undefined8 FUN_011a6d4c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x230;
  FUN_011a37d8(param_1,lVar1,1);
  FUN_011a2d5c(*(undefined4 *)(param_1 + 0x228));
  FUN_011a2d5c(*(undefined4 *)(param_1 + 0x22c));
  *(undefined8 *)(param_1 + 0x228) = 0xffffffffffffffff;
  uVar2 = FUN_011a6068(param_1 + 0x228,0x800);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  FUN_011a366c(lVar1,FUN_011a7c08,*(undefined4 *)(param_1 + 0x228));
  FUN_011a3688(param_1,lVar1,1);
  return 0;
}

