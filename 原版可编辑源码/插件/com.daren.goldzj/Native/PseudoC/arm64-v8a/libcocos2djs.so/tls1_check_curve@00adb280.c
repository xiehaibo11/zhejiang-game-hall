
/* WARNING: Removing unreachable block (ram,0x00adb32c) */
/* WARNING: Removing unreachable block (ram,0x00adb3e0) */

undefined8 tls1_check_curve(long param_1,char *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined8 uVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  
                    /* try { // try from 00adb284 to 00bdb293 has its CatchHandler @ 00adb2c8 */
  if (param_3 != 3) {
    return 0;
  }
  if (*param_2 != '\x03') {
    return 0;
  }
                    /* try { // try from 00adb294 to 00bdb2e3 has its CatchHandler @ 00adb234 */
  uVar1 = *(uint *)(*(long *)(param_1 + 0x148) + 0x1c) & 0x30000;
  if (uVar1 != 0) {
    if (param_2[1] != '\0') {
      return 0;
    }
    iVar2 = *(int *)(*(long *)(*(long *)(param_1 + 0x90) + 0x228) + 0x10);
    if (iVar2 == 0x300c02c) {
      if (param_2[2] != '\x18') {
        return 0;
      }
    }
    else {
                    /* catch() { ... } // from try @ 00adb284 with catch @ 00adb2c8 */
      if (iVar2 != 0x300c02b) {
        return 0;
      }
      if (param_2[2] != '\x17') {
        return 0;
      }
    }
  }
  pcVar5 = "";
  if (uVar1 == 0x10000) {
LAB_00adb334:
    uVar6 = 2;
  }
  else {
    if (uVar1 == 0x20000) {
                    /* try { // try from 00adb330 to 00bdb33f has its CatchHandler @ 00adb374 */
      pcVar5 = "";
      goto LAB_00adb334;
    }
    if (uVar1 == 0x30000) {
      pcVar5 = "";
      uVar6 = 2;
      goto LAB_00adb340;
    }
    pcVar5 = *(char **)(param_1 + 0x2a0);
    if (pcVar5 == (char *)0x0) {
      pcVar5 = "";
                    /* try { // try from 00adb3d8 to 00bdb3e7 has its CatchHandler @ 00adb41c */
      uVar6 = 4;
      goto LAB_00adb340;
    }
    uVar6 = *(ulong *)(param_1 + 0x298);
    if ((uVar6 & 1) != 0) {
                    /* catch() { ... } // from try @ 00adb3e8 with catch @ 00adb390 */
      ERR_put_error(0x14,0x152,0x44,"ssl/t1_lib.c",0x123);
      return 0;
    }
  }
  uVar6 = uVar6 >> 1;
  if (uVar6 == 0) {
    return 0;
  }
LAB_00adb340:
                    /* try { // try from 00adb340 to 00bdb38f has its CatchHandler @ 00adb2e4 */
  uVar7 = 0;
  do {
    if (param_2[1] == *pcVar5) {
      bVar3 = param_2[2];
      if (bVar3 == pcVar5[1]) {
        if (param_2[1] != '\0') {
          return 1;
        }
                    /* try { // try from 00adb3e8 to 00bdb437 has its CatchHandler @ 00adb390 */
        if (0x1c < (byte)(bVar3 - 1)) {
          return 0;
        }
        uVar4 = ssl_security(param_1,0x20006,(&UINT_018a5168)[(ulong)bVar3 * 3],
                             (&UINT_018a5164)[(ulong)bVar3 * 3]);
        return uVar4;
      }
    }
    uVar7 = uVar7 + 1;
    pcVar5 = pcVar5 + 2;
                    /* catch() { ... } // from try @ 00adb330 with catch @ 00adb374 */
    if (uVar6 <= uVar7) {
      return 0;
    }
  } while( true );
}

