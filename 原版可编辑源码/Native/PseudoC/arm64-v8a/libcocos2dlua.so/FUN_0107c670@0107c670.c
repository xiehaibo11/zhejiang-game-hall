
int FUN_0107c670(int *param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = (long)param_1[1] | (long)*param_1 << 0x10;
  uVar3 = (long)param_2[1] | (long)*param_2 << 0x10;
  iVar1 = -(uint)(uVar2 < uVar3);
  if (uVar3 < uVar2) {
    iVar1 = 1;
  }
  return iVar1;
}

