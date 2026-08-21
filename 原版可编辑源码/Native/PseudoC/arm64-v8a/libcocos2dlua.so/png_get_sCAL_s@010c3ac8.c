
undefined8
png_get_sCAL_s(long param_1,long param_2,uint *param_3,undefined8 *param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((*(byte *)(param_2 + 9) >> 6 & 1) == 0) {
      return 0;
    }
    uVar1 = 0x4000;
    *param_3 = (uint)*(byte *)(param_2 + 0x13c);
    *param_4 = *(undefined8 *)(param_2 + 0x140);
    *param_5 = *(undefined8 *)(param_2 + 0x148);
  }
  return uVar1;
}

