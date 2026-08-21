
undefined8 png_get_sRGB(long param_1,long param_2,uint *param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((((param_1 != 0) && (param_2 != 0)) && (uVar1 = 0, param_3 != (uint *)0x0)) &&
     ((*(uint *)(param_2 + 8) >> 0xb & 1) != 0)) {
    uVar1 = 0x800;
    *param_3 = (uint)*(ushort *)(param_2 + 0x7c);
  }
  return uVar1;
}

