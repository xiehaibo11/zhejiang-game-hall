
void FUN_00c00600(double param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_1;
  if ((uVar1 == (long)(int)uVar1) && (param_3 == 3)) {
    FUN_00bff62c(param_2,uVar1 & 0xffffffff);
    return;
  }
  FUN_00bffbc4(param_2);
  return;
}

