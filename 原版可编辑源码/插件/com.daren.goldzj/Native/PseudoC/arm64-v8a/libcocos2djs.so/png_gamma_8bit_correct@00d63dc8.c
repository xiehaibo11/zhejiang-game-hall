
int png_gamma_8bit_correct(int param_1,int param_2)

{
  double dVar1;
  
  if (param_1 - 1U < 0xfe) {
    dVar1 = pow((double)param_1 / 255.0,(double)param_2 * 1e-05);
    param_1 = (int)(dVar1 * 255.0 + 0.5);
  }
  return param_1;
}

