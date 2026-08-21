
/* WARNING: Type propagation algorithm not settling */

long FUN_00eb4510(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
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
                    /* try { // try from 00eb4550 to 00fb4553 has its CatchHandler @ 00eb458c */
      param_1[2] = param_1[2] - lVar1;
    }
    if (lVar1 != 0) {
      lVar3 = param_1[2];
      param_1[2] = lVar3 + lVar1;
      return lVar3;
    }
    if (param_3 == 0) break;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eb4550 with catch @ 00eb458c
                        */
    gerrno = 0;
    if (*param_1 == 0) {
      gerrno = 0;
      return -2;
    }
    uVar2 = ogg_sync_bufferin(param_1[4],0x400);
    lVar1 = (*(code *)param_1[0x1c])(uVar2,1,0x400,*param_1);
    if (lVar1 < 1) {
      if (gerrno != 0 || lVar1 != 0) {
        return -0x80;
      }
      return -2;
    }
    ogg_sync_wrote(param_1[4]);
  }
  return -1;
}

