
undefined8
png_get_cHRM_XYZ(long param_1,long param_2,double *param_3,double *param_4,double *param_5,
                double *param_6,double *param_7,double *param_8,double *param_9,double *param_10,
                double *param_11)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((*(byte *)(param_2 + 0x7e) >> 1 & 1) == 0) {
      return 0;
    }
    if (param_3 != (double *)0x0) {
      *param_3 = (double)(long)*(int *)(param_2 + 0x58) * 1e-05;
    }
    if (param_4 != (double *)0x0) {
      *param_4 = (double)(long)*(int *)(param_2 + 0x5c) * 1e-05;
    }
    if (param_5 != (double *)0x0) {
      *param_5 = (double)(long)*(int *)(param_2 + 0x60) * 1e-05;
    }
    if (param_6 != (double *)0x0) {
      *param_6 = (double)(long)*(int *)(param_2 + 100) * 1e-05;
    }
    if (param_7 != (double *)0x0) {
      *param_7 = (double)(long)*(int *)(param_2 + 0x68) * 1e-05;
    }
    if (param_8 != (double *)0x0) {
      *param_8 = (double)(long)*(int *)(param_2 + 0x6c) * 1e-05;
    }
    if (param_9 != (double *)0x0) {
      *param_9 = (double)(long)*(int *)(param_2 + 0x70) * 1e-05;
    }
    if (param_10 != (double *)0x0) {
      *param_10 = (double)(long)*(int *)(param_2 + 0x74) * 1e-05;
    }
    if (param_11 != (double *)0x0) {
      *param_11 = (double)(long)*(int *)(param_2 + 0x78) * 1e-05;
    }
    uVar1 = 4;
  }
  return uVar1;
}

