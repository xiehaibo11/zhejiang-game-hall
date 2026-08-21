
long FUN_00e88420(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int *piVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (0 < param_3) {
    param_3 = param_1[2] + param_3;
  }
  while( true ) {
    while( true ) {
      if ((0 < param_3) && (param_3 <= param_1[2])) {
        return -1;
      }
      lVar1 = ogg_sync_pageseek(param_1[4],param_2);
      if (-1 < lVar1) break;
      param_1[2] = param_1[2] - lVar1;
    }
    if (lVar1 != 0) {
      lVar4 = param_1[2];
      param_1[2] = lVar4 + lVar1;
      return lVar4;
    }
    if (param_3 == 0) {
      return -1;
    }
    piVar2 = (int *)__errno();
    *piVar2 = 0;
    if (*param_1 == 0) goto LAB_00e88518;
    uVar3 = ogg_sync_bufferin(param_1[4],0x400);
    lVar1 = (*(code *)param_1[0x1c])(uVar3,1,0x400,*param_1);
    if (lVar1 < 1) break;
    ogg_sync_wrote(param_1[4]);
  }
  if ((lVar1 == 0) && (*piVar2 == 0)) {
LAB_00e88518:
    lVar1 = -2;
  }
  else {
    lVar1 = -0x80;
  }
  return lVar1;
}

