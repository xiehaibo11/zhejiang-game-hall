
undefined8 png_get_PLTE(long param_1,long param_2,undefined8 *param_3,uint *param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((((param_1 != 0) && (param_2 != 0)) && (uVar1 = 0, param_3 != (undefined8 *)0x0)) &&
     ((*(uint *)(param_2 + 8) >> 3 & 1) != 0)) {
    uVar1 = 8;
    *param_3 = *(undefined8 *)(param_2 + 0x18);
    *param_4 = (uint)*(ushort *)(param_2 + 0x20);
  }
  return uVar1;
}

