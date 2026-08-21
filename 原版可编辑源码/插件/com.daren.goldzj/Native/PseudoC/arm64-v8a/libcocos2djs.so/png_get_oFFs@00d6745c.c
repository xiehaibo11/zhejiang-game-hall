
undefined8
png_get_oFFs(long param_1,long param_2,undefined4 *param_3,undefined4 *param_4,uint *param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((((param_1 != 0) && (param_2 != 0)) && (uVar1 = 0, param_5 != (uint *)0x0)) &&
     (((param_4 != (undefined4 *)0x0 && (param_3 != (undefined4 *)0x0)) &&
      ((*(uint *)(param_2 + 8) >> 8 & 1) != 0)))) {
    uVar1 = 0x100;
    *param_3 = *(undefined4 *)(param_2 + 0xd4);
    *param_4 = *(undefined4 *)(param_2 + 0xd8);
    *param_5 = (uint)*(byte *)(param_2 + 0xdc);
  }
  return uVar1;
}

