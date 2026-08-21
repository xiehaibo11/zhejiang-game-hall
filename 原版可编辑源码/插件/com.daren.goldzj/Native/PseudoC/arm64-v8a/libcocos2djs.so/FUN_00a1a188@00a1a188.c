
long FUN_00a1a188(long *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = lVar2;
  if (*(long *)(lVar2 + 0x70) != 0) {
    FUN_00a3557c(lVar2,3,2);
    lVar1 = *param_1;
  }
  lVar1 = FUN_00a1a210(lVar1,param_2,param_3);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = *(long *)(lVar1 + 0x10) + 1;
  }
  if (*(long *)(lVar2 + 0x70) != 0) {
    FUN_00a355d4(lVar2,3);
  }
  return lVar1;
}

