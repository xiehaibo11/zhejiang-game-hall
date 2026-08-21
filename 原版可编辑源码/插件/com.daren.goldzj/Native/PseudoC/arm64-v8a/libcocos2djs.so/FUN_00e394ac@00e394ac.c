
int FUN_00e394ac(uint *param_1,uint *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = (ulong)param_1[1] | (ulong)*param_1 << 0x10;
  uVar3 = (ulong)param_2[1] | (ulong)*param_2 << 0x10;
  iVar1 = -(uint)(uVar2 < uVar3);
  if (uVar3 < uVar2) {
    iVar1 = 1;
  }
  return iVar1;
}

