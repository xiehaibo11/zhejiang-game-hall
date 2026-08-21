
undefined8 FUN_00e76dc8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = *(long *)(lVar1 + 0x308);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(lVar1 + 0x280);
  param_1[6] = *(long *)(lVar1 + 0x288);
  param_1[4] = *(long *)(lVar2 + 0x28);
  param_1[3] = *(long *)(lVar2 + 0x38);
  return 0;
}

