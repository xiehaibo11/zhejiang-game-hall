
/* WARNING: Removing unreachable block (ram,0x00aea1e0) */
/* WARNING: Removing unreachable block (ram,0x00aea294) */

undefined8 tls1_check_curve(long param_1,char *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined8 uVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_3 != 3) {
    return 0;
  }
  if (*param_2 != '\x03') {
    return 0;
  }
  uVar1 = *(uint *)(*(long *)(param_1 + 0x148) + 0x1c) & 0x30000;
  if (uVar1 != 0) {
    if (param_2[1] != '\0') {
      return 0;
    }
    iVar2 = *(int *)(*(long *)(*(long *)(param_1 + 0x90) + 0x228) + 0x10);
    if (iVar2 == 0x300c02c) {
                    /* catch() { ... } // from try @ 00ae99c4 with catch @ 00aea19c */
                    /* catch() { ... } // from try @ 00ae9994 with catch @ 00aea1a0 */
                    /* catch() { ... } // from try @ 00ae996c with catch @ 00aea1a4 */
      if (param_2[2] != '\x18') {
        return 0;
      }
    }
    else {
      if (iVar2 != 0x300c02b) {
        return 0;
      }
      if (param_2[2] != '\x17') {
        return 0;
      }
    }
  }
                    /* catch() { ... } // from try @ 00ae9ba0 with catch @ 00aea1a8
                       catch() { ... } // from try @ 00ae9c08 with catch @ 00aea1a8 */
  pcVar5 = "";
  if (uVar1 == 0x10000) {
LAB_00aea1e8:
    uVar6 = 2;
  }
  else {
    if (uVar1 == 0x20000) {
      pcVar5 = "";
      goto LAB_00aea1e8;
    }
    if (uVar1 == 0x30000) {
      pcVar5 = "";
      uVar6 = 2;
      goto LAB_00aea1f4;
    }
    pcVar5 = *(char **)(param_1 + 0x2a0);
    if (pcVar5 == (char *)0x0) {
      pcVar5 = "";
      uVar6 = 4;
      goto LAB_00aea1f4;
    }
                    /* try { // try from 00aea23c to 00bea277 has its CatchHandler @ 00aea278 */
    uVar6 = *(ulong *)(param_1 + 0x298);
    if ((uVar6 & 1) != 0) {
      ERR_put_error(0x14,0x152,0x44,"ssl/t1_lib.c",0x123);
      return 0;
    }
  }
                    /* try { // try from 00aea1ec to 00bea217 has its CatchHandler @ 00aea1ec
                       catch() { ... } // from try @ 00aea1ec with catch @ 00aea1ec
                       catch() { ... } // from try @ 00aea278 with catch @ 00aea1ec */
  uVar6 = uVar6 >> 1;
  if (uVar6 == 0) {
    return 0;
  }
LAB_00aea1f4:
  uVar7 = 0;
  do {
    if (param_2[1] == *pcVar5) {
      bVar3 = param_2[2];
                    /* try { // try from 00aea218 to 00bea21b has its CatchHandler @ 00aea2b8 */
      if (bVar3 == pcVar5[1]) {
        if (param_2[1] != '\0') {
                    /* catch() { ... } // from try @ 00aea23c with catch @ 00aea278
                       try { // try from 00aea278 to 00bea2cb has its CatchHandler @ 00aea1ec */
          return 1;
        }
        if (0x1c < (byte)(bVar3 - 1)) {
          return 0;
        }
                    /* catch() { ... } // from try @ 00aea21c with catch @ 00aea2a8 */
                    /* catch() { ... } // from try @ 00aea218 with catch @ 00aea2b8 */
        uVar4 = ssl_security(param_1,0x20006,(&UINT_013d35e8)[(ulong)bVar3 * 3],
                             (&UINT_013d35e4)[(ulong)bVar3 * 3]);
        return uVar4;
      }
    }
                    /* try { // try from 00aea21c to 00bea223 has its CatchHandler @ 00aea2a8 */
    uVar7 = uVar7 + 1;
    pcVar5 = pcVar5 + 2;
    if (uVar6 <= uVar7) {
      return 0;
    }
  } while( true );
}

