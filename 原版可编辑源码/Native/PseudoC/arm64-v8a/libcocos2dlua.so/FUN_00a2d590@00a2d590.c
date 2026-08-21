
undefined8 FUN_00a2d590(long *param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)param_2;
  if (((*(char *)((long)param_1 + lVar2 + 0x3d9) != '\0') &&
      (*(int *)((long)param_1 + lVar2 * 0x28 + 0x29c) == 2)) &&
     ((char)param_1[lVar2 * 5 + 0x5d] == '\0')) {
                    /* try { // try from 00a2d5e0 to 00b2d613 has its CatchHandler @ 00a2d6e0 */
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
                    /* try { // try from 00a2d614 to 00b2d627 has its CatchHandler @ 00a2d6ac */
  if (*(ulong *)(*param_1 + 0x440) < 8) {
    *(undefined1 *)(param_1 + lVar2 * 5 + 0x53) = 1;
    *(undefined4 *)((long)param_1 + lVar2 * 0x28 + 0x29c) = 1;
    uVar1 = FUN_00a5e894(param_1);
    if ((int)uVar1 == 0) {
                    /* try { // try from 00a2d660 to 00b2d6fb has its CatchHandler @ 00a2d4e0 */
      FUN_00a30f04(*param_1,5);
      uVar1 = 0;
    }
  }
  else {
                    /* try { // try from 00a2d62c to 00b2d65f has its CatchHandler @ 00a2d6b0 */
    FUN_00a38a08(*param_1,"Unrecognized parameter value passed via CURLOPT_SSLVERSION");
    uVar1 = 0x23;
  }
  return uVar1;
}

