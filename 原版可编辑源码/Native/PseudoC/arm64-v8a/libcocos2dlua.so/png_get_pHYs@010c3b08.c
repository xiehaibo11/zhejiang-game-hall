
undefined8
png_get_pHYs(long param_1,long param_2,undefined4 *param_3,undefined4 *param_4,uint *param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    if (-1 < *(char *)(param_2 + 8)) {
      return 0;
    }
    if (param_3 == (undefined4 *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0x80;
      *param_3 = *(undefined4 *)(param_2 + 0xe0);
    }
    if (param_4 != (undefined4 *)0x0) {
      uVar1 = 0x80;
      *param_4 = *(undefined4 *)(param_2 + 0xe4);
    }
    if (param_5 != (uint *)0x0) {
      uVar1 = 0x80;
      *param_5 = (uint)*(byte *)(param_2 + 0xe8);
    }
  }
  return uVar1;
}

