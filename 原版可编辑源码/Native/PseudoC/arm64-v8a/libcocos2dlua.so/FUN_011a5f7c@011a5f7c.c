
int FUN_011a5f7c(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  
  if ((DAT_01793640 & 1) == 0) {
    iVar1 = socketpair(1,param_2 | 0x80001,0,param_1);
    if (iVar1 == 0) {
      return 0;
    }
    piVar2 = (int *)__errno();
    if (*piVar2 != 0x16) {
      return -*piVar2;
    }
    DAT_01793640 = 1;
  }
  iVar1 = socketpair(1,1,0,param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)__errno();
    return -*piVar2;
  }
  FUN_011a2cfc(*param_1,1);
  FUN_011a2cfc(param_1[1],1);
  if ((param_2 >> 0xb & 1) != 0) {
    FUN_011a2ca0(*param_1,1);
    FUN_011a2ca0(param_1[1],1);
  }
  return 0;
}

