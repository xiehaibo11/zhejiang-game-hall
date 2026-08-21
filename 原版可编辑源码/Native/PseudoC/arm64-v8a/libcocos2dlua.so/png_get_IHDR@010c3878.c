
undefined4
png_get_IHDR(long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,uint *param_5,
            uint *param_6,uint *param_7,uint *param_8,uint *param_9)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((((param_1 != 0) && (param_2 != (undefined4 *)0x0)) && (param_3 != (undefined4 *)0x0)) &&
     (((param_4 != (undefined4 *)0x0 && (param_5 != (uint *)0x0)) && (param_6 != (uint *)0x0)))) {
    uVar1 = *param_2;
    *param_3 = uVar1;
    *param_4 = param_2[1];
    *param_5 = (uint)*(byte *)(param_2 + 9);
    *param_6 = (uint)*(byte *)((long)param_2 + 0x25);
    if (param_8 != (uint *)0x0) {
      *param_8 = (uint)*(byte *)((long)param_2 + 0x26);
    }
    if (param_9 != (uint *)0x0) {
      *param_9 = (uint)*(byte *)((long)param_2 + 0x27);
    }
    if (param_7 != (uint *)0x0) {
      *param_7 = (uint)*(byte *)(param_2 + 10);
    }
    png_check_IHDR(param_1,uVar1);
    uVar1 = 1;
  }
  return uVar1;
}

