
undefined8 png_get_gAMA(long param_1,long param_2,double *param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((((param_1 != 0) && (param_2 != 0)) && (uVar1 = 0, param_3 != (double *)0x0)) &&
     ((*(ushort *)(param_2 + 0x7e) & 1) != 0)) {
    uVar1 = 1;
    *param_3 = (double)(long)*(int *)(param_2 + 0x34) * 1e-05;
  }
  return uVar1;
}

