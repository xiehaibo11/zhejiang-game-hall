
undefined8 FUN_00a3c40c(long param_1,int *param_2,ulong param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((3 < param_3) && (*param_2 == 0x5252452d)) {
    uVar2 = 0x2d;
    goto LAB_00a3c4a8;
  }
  if (*(int *)(param_1 + 0x688) == 2) {
    if ((param_3 != 0) && ((char)*param_2 == '.')) {
LAB_00a3c47c:
      uVar2 = 0x2b;
      goto LAB_00a3c4a8;
    }
  }
  else {
    if (param_3 < 3) {
      if (param_3 == 0) {
        return 0;
      }
    }
    else {
      iVar1 = memcmp(&DAT_018960a3,param_2,3);
      if (iVar1 == 0) goto LAB_00a3c47c;
    }
    if ((char)*param_2 != '+') {
      return 0;
    }
  }
  uVar2 = 0x2a;
LAB_00a3c4a8:
                    /* try { // try from 00a3c4ac to 00b3c58f has its CatchHandler @ 00a3c2e4 */
  *param_4 = uVar2;
  return 1;
}

