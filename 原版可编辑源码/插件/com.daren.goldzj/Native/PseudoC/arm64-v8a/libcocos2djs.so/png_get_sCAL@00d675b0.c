
undefined8 png_get_sCAL(long param_1,long param_2,uint *param_3,double *param_4,double *param_5)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((*(byte *)(param_2 + 9) >> 6 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      *param_3 = (uint)*(byte *)(param_2 + 0x13c);
      dVar2 = atof(*(char **)(param_2 + 0x140));
      *param_4 = dVar2;
      dVar2 = atof(*(char **)(param_2 + 0x148));
      uVar1 = 0x4000;
      *param_5 = dVar2;
    }
  }
  return uVar1;
}

