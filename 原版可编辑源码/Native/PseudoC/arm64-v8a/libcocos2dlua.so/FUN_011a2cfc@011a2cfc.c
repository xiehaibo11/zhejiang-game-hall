
int FUN_011a2cfc(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0x5450;
  if (param_2 != 0) {
    uVar3 = 0x5451;
  }
  do {
    iVar1 = ioctl(param_1,(ulong)uVar3);
    if (iVar1 != -1) {
      if (iVar1 == 0) {
        return 0;
      }
      piVar2 = (int *)__errno();
      break;
    }
    piVar2 = (int *)__errno();
  } while (*piVar2 == 4);
  return -*piVar2;
}

