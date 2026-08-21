
int FUN_00a4cb2c(long param_1,undefined1 *param_2)

{
  int iVar1;
  int *piVar2;
  
  *param_2 = 0;
  piVar2 = *(int **)(param_1 + 0x618);
  if (piVar2 == (int *)0x0) {
    iVar1 = FUN_00a4ccd0(param_1,param_2);
    if (iVar1 != 0) {
      return iVar1;
    }
    piVar2 = *(int **)(param_1 + 0x618);
    if (piVar2 == (int *)0x0) {
      return 0x2c;
    }
  }
  *param_2 = 0;
  iVar1 = FUN_00a4d838(piVar2,0);
  if ((iVar1 == 0) && (*piVar2 != 3)) {
    FUN_00a4ce50(param_1,param_2);
  }
  if (iVar1 == 0) {
    iVar1 = 0x44;
    switch(piVar2[2]) {
    case 0:
    case 4:
      iVar1 = 0x47;
      break;
    case 1:
      break;
    case 2:
      iVar1 = 0x45;
      break;
    case 3:
      iVar1 = 0x46;
      break;
    case 5:
      iVar1 = 0x48;
      break;
    case 6:
      iVar1 = 0x49;
      break;
    case 7:
      iVar1 = 0x4a;
      break;
    case -100:
      iVar1 = 0;
      break;
    case -99:
      iVar1 = 0x1c;
      break;
    case -0x62:
      iVar1 = 7;
      break;
    default:
      iVar1 = 0x2a;
    }
  }
  return iVar1;
}

