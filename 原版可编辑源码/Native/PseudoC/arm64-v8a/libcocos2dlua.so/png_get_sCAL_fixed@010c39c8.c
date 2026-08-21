
undefined8
png_get_sCAL_fixed(long param_1,long param_2,uint *param_3,undefined4 *param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((*(byte *)(param_2 + 9) >> 6 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      *param_3 = (uint)*(byte *)(param_2 + 0x13c);
      atof(*(char **)(param_2 + 0x140));
      uVar1 = png_fixed(param_1,"sCAL width");
      *param_4 = uVar1;
      atof(*(char **)(param_2 + 0x148));
      uVar1 = png_fixed(param_1,"sCAL height");
      *param_5 = uVar1;
      uVar2 = 0x4000;
    }
  }
  return uVar2;
}

