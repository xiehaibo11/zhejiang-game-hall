
undefined8 FUN_00a17c8c(long *param_1,undefined8 param_2,char *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)(int)param_2;
  if (((*(char *)((long)param_1 + lVar2 + 0x3d9) != '\0') &&
      (*(int *)((long)param_1 + lVar2 * 0x28 + 0x29c) == 2)) &&
     ((char)param_1[lVar2 * 5 + 0x5d] == '\0')) {
    param_1[lVar2 * 5 + 0x61] = param_1[lVar2 * 5 + 0x57];
    param_1[lVar2 * 5 + 0x60] = param_1[lVar2 * 5 + 0x56];
    param_1[lVar2 * 5 + 0x5f] = param_1[lVar2 * 5 + 0x55];
    param_1[lVar2 * 5 + 0x5e] = param_1[lVar2 * 5 + 0x54];
    param_1[lVar2 * 5 + 0x5d] = param_1[lVar2 * 5 + 0x53];
    param_1[lVar2 * 5 + 0x57] = 0;
    param_1[lVar2 * 5 + 0x56] = 0;
    param_1[lVar2 * 5 + 0x55] = 0;
    param_1[lVar2 * 5 + 0x54] = 0;
    param_1[lVar2 * 5 + 0x53] = 0;
  }
  if (*(ulong *)(*param_1 + 0x440) < 8) {
                    /* try { // try from 00a17d40 to 00b17dcb has its CatchHandler @ 00a17d40
                       catch(type#1 @ 00000000) { ... } // from try @ 00a17d40 with catch @ 00a17d40
                        */
    *(undefined1 *)(param_1 + lVar2 * 5 + 0x53) = 1;
    uVar1 = FUN_00a4674c(param_1,param_2,param_3);
    if ((int)uVar1 == 0) {
      if (*param_3 != '\0') {
        FUN_00a1b51c(*param_1,5);
      }
      uVar1 = 0;
    }
  }
  else {
    FUN_00a23020(*param_1,"Unrecognized parameter value passed via CURLOPT_SSLVERSION");
    uVar1 = 0x23;
  }
  return uVar1;
}

