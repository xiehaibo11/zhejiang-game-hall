
int FUN_011abdf8(long param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_011ae164(0x80000);
  if (iVar1 == -1) {
    piVar2 = (int *)__errno();
    if ((*piVar2 == 0x26) || (*piVar2 == 0x16)) {
      iVar1 = FUN_011ae140(0x100);
      if (iVar1 != -1) {
        FUN_011a2cfc(iVar1,1);
      }
    }
    else {
      iVar1 = -1;
    }
  }
  *(int *)(param_1 + 0x40) = iVar1;
  *(undefined4 *)(param_1 + 0x348) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x340) = 0;
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  return -*piVar2;
}

