
/* v8::base::bits::SignedMulOverflow32(int, int, int*) */

bool v8::base::bits::SignedMulOverflow32(int param_1,int param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = (int)((long)param_2 * (long)param_1);
  *param_3 = iVar1;
  return (long)param_2 * (long)param_1 - (long)iVar1 != 0;
}

