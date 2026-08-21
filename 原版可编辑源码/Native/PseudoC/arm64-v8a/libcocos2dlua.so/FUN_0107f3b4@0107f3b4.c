
undefined8 FUN_0107f3b4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x360);
  *param_4 = 0;
  param_4[1] = 0;
  if (lVar2 != 0) {
    iVar1 = (**(code **)(lVar2 + 0xa8))();
    *param_4 = (long)iVar1;
  }
  return 0;
}

