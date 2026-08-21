
undefined8 unzGetGlobalInfo(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    param_2[1] = *(undefined8 *)(param_1 + 0x50);
    *param_2 = uVar1;
    return 0;
  }
  return 0xffffff9a;
}

