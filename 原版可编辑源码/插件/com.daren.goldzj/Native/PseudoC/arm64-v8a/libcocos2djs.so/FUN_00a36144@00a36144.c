
int FUN_00a36144(long param_1,undefined1 *param_2)

{
  int iVar1;
  int *piVar2;
  
  *param_2 = 0;
  piVar2 = *(int **)(param_1 + 0x618);
  if (piVar2 == (int *)0x0) {
    iVar1 = FUN_00a362e8(param_1,param_2);
    if (iVar1 != 0) {
      return iVar1;
    }
    piVar2 = *(int **)(param_1 + 0x618);
    if (piVar2 == (int *)0x0) {
      return 0x2c;
    }
  }
  *param_2 = 0;
  iVar1 = FUN_00a36e50(piVar2,0);
  if ((iVar1 == 0) && (*piVar2 != 3)) {
    FUN_00a36468(param_1,param_2);
  }
  if (iVar1 == 0) {
                    /* try { // try from 00a3619c to 00b361df has its CatchHandler @ 00a3645c */
    iVar1 = 0x44;
    switch(piVar2[2]) {
    case 0:
    case 4:
      iVar1 = 0x47;
      break;
    case 1:
      break;
    case 2:
                    /* try { // try from 00a3621c to 00b36243 has its CatchHandler @ 00a36420 */
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
                    /* try { // try from 00a36208 to 00b3620f has its CatchHandler @ 00a3641c */
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
                    /* try { // try from 00a361f0 to 00b361f7 has its CatchHandler @ 00a36428 */
  return iVar1;
}

