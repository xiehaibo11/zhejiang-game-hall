
ulong FUN_011a6068(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  
  if ((DAT_01793644 & 1) == 0) {
    uVar2 = FUN_011ae2c8(param_1,param_2 | 0x80000);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    piVar3 = (int *)__errno();
    if (*piVar3 != 0x26) {
      return (ulong)(uint)-*piVar3;
    }
    DAT_01793644 = 1;
  }
  iVar1 = pipe(param_1);
  if (iVar1 != 0) {
    piVar3 = (int *)__errno();
    return (ulong)(uint)-*piVar3;
  }
  FUN_011a2cfc(*param_1,1);
  FUN_011a2cfc(param_1[1],1);
  if ((param_2 >> 0xb & 1) != 0) {
    FUN_011a2ca0(*param_1,1);
    FUN_011a2ca0(param_1[1],1);
  }
  return 0;
}

