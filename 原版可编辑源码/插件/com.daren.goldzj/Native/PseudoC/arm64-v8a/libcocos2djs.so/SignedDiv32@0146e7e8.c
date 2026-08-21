
/* v8::base::bits::SignedDiv32(int, int) */

int v8::base::bits::SignedDiv32(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 == -1) {
      return -param_1;
    }
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = param_1 / param_2;
    }
  }
  return iVar1;
}

