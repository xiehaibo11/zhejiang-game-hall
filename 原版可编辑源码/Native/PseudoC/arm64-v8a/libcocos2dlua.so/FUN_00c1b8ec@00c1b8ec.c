
void FUN_00c1b8ec(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  if (0 < param_2) {
    iVar1 = param_2 + 1;
  }
  if (param_3 != 0) {
    if (param_3 == 1) {
      FUN_00c1b840(param_1,iVar1,1);
      return;
    }
    iVar2 = ((uint)LZCOUNT(param_3 + -1) ^ 0x1f) + 1;
  }
  FUN_00c1b840(param_1,iVar1,iVar2);
  return;
}

