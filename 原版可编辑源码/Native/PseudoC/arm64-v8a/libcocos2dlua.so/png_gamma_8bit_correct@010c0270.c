
int png_gamma_8bit_correct(int param_1,int param_2)

{
  double dVar1;
  
                    /* try { // try from 010c0274 to 011c02e3 has its CatchHandler @ 010c01e8 */
  if (param_1 - 1U < 0xfe) {
    dVar1 = pow((double)param_1 / 255.0,(double)param_2 * 1e-05);
                    /* catch() { ... } // from try @ 010c0228 with catch @ 010c02b4 */
    param_1 = (int)(dVar1 * 255.0 + 0.5);
  }
  return param_1;
}

