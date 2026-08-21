
uint png_gamma_correct(long param_1,uint param_2,int param_3)

{
  double dVar1;
  
  if (*(char *)(param_1 + 0x2b0) == '\b') {
    if (param_2 - 1 < 0xfe) {
      dVar1 = pow((double)(int)param_2 / 255.0,(double)param_3 * 1e-05);
      param_2 = (uint)(dVar1 * 255.0 + 0.5);
    }
    param_2 = param_2 & 0xff;
  }
  else if (param_2 - 1 < 0xfffe) {
    dVar1 = pow((double)(int)param_2 / 65535.0,(double)param_3 * 1e-05);
    param_2 = (uint)(dVar1 * 65535.0 + 0.5);
  }
  return param_2;
}

