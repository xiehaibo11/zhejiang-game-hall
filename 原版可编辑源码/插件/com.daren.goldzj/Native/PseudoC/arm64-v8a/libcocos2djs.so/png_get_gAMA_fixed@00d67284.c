
undefined8 png_get_gAMA_fixed(long param_1,long param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((((param_1 != 0) && (param_2 != 0)) && (uVar1 = 0, param_3 != (undefined4 *)0x0)) &&
     ((*(ushort *)(param_2 + 0x7e) & 1) != 0)) {
    uVar1 = 1;
    *param_3 = *(undefined4 *)(param_2 + 0x34);
  }
  return uVar1;
}

