
undefined8 FUN_00a52df4(long param_1,int *param_2,ulong param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((3 < param_3) && (*param_2 == 0x5252452d)) {
    uVar2 = 0x2d;
    goto LAB_00a52e90;
  }
                    /* try { // try from 00a52e28 to 00b52e3f has its CatchHandler @ 00a52f34 */
  if (*(int *)(param_1 + 0x688) == 2) {
    if ((param_3 != 0) && ((char)*param_2 == '.')) {
LAB_00a52e64:
      uVar2 = 0x2b;
      goto LAB_00a52e90;
    }
  }
  else {
    if (param_3 < 3) {
      if (param_3 == 0) {
        return 0;
      }
    }
    else {
      iVar1 = memcmp(&DAT_013c89d3,param_2,3);
      if (iVar1 == 0) goto LAB_00a52e64;
    }
                    /* try { // try from 00a52e78 to 00b52e8f has its CatchHandler @ 00a52f30 */
    if ((char)*param_2 != '+') {
      return 0;
    }
  }
  uVar2 = 0x2a;
LAB_00a52e90:
                    /* try { // try from 00a52e90 to 00b52eef has its CatchHandler @ 00a52c80 */
  *param_4 = uVar2;
  return 1;
}

