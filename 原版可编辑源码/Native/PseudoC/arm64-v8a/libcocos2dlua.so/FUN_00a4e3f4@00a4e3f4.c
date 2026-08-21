
int FUN_00a4e3f4(undefined8 *param_1,undefined4 param_2,long param_3,long param_4,long *param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long local_48;
  
                    /* try { // try from 00a4e404 to 00b4e417 has its CatchHandler @ 00a4e520 */
                    /* try { // try from 00a4e41c to 00b4e487 has its CatchHandler @ 00a4e524 */
  lVar3 = 0;
  *param_5 = 0;
  while( true ) {
    do {
      lVar2 = FUN_00a25238(*param_1,0,1);
      if (lVar2 < 0) {
        return 0x1c;
      }
      iVar1 = FUN_00a2b3d0(param_2,0xffffffff,0xffffffff,lVar2);
      if (iVar1 < 1) {
        return -1;
      }
      iVar1 = FUN_00a39388(param_2,param_3,param_4,&local_48);
                    /* try { // try from 00a4e488 to 00b4e56f has its CatchHandler @ 00a4e24c */
    } while (iVar1 == 0x51);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_4 - local_48 == 0) break;
    if (local_48 == 0) {
      return -1;
    }
    param_3 = param_3 + local_48;
    lVar3 = local_48 + lVar3;
    param_4 = param_4 - local_48;
  }
  *param_5 = param_4 + lVar3;
  return 0;
}

