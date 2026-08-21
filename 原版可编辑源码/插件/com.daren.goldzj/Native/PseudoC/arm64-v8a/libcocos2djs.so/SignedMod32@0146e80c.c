
/* v8::base::bits::SignedMod32(int, int) */

int v8::base::bits::SignedMod32(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = param_1 / param_2;
  }
  iVar1 = 0;
  if (1 < param_2 + 1U) {
    iVar1 = param_1 - iVar2 * param_2;
  }
  return iVar1;
}

