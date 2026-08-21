
undefined8 FUN_00a3d1f0(long *param_1,char *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  char *pcVar3;
  
                    /* try { // try from 00a3d1f8 to 00b3d203 has its CatchHandler @ 00a3d35c */
                    /* try { // try from 00a3d204 to 00b3d20f has its CatchHandler @ 00a3d358 */
                    /* try { // try from 00a3d210 to 00b3d2e3 has its CatchHandler @ 00a3d370 */
  if (((*(byte *)(param_1[0x80] + 0x7c) & 1) != 0) &&
     (pcVar3 = (char *)((long)param_1 + 0x68c), *pcVar3 == '\0')) {
    uVar2 = FUN_00a17c8c(param_1,0,pcVar3);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (*pcVar3 == '\0') {
      if (*param_2 == '\0') {
        return 0;
      }
      goto LAB_00a3d248;
    }
  }
  uVar2 = FUN_00a3e038(param_1 + 0xc3,0);
  bVar1 = (int)param_1[0xd1] == 0;
  *param_2 = bVar1;
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (!bVar1) {
    return 0;
  }
LAB_00a3d248:
  if (**(int **)(*param_1 + 0x218) != 0) {
    FUN_00a335d8(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
  }
  return 0;
}

