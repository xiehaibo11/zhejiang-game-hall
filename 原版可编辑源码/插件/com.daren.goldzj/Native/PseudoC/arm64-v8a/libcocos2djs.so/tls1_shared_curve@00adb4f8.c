
uint tls1_shared_curve(long param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    return 0xffffffff;
  }
                    /* try { // try from 00adb528 to 00bdb537 has its CatchHandler @ 00adb574 */
  if (param_2 == 0xfffffffe) {
                    /* try { // try from 00adb538 to 00bdb58f has its CatchHandler @ 00adb4dc */
    if ((*(byte *)(*(long *)(param_1 + 0x148) + 0x1e) & 3) != 0) {
      iVar3 = *(int *)(*(long *)(*(long *)(param_1 + 0x90) + 0x228) + 0x10);
      uVar5 = 0x2cb;
      if (iVar3 != 0x300c02c) {
        uVar5 = 0;
      }
      if (iVar3 == 0x300c02b) {
        return 0x19f;
      }
      return uVar5;
    }
    param_2 = 0;
  }
  uVar5 = *(uint *)(param_1 + 0x1e4);
  if ((uVar5 >> 0x16 & 1) == 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x148) + 0x1c) & 0x30000;
                    /* catch() { ... } // from try @ 00adb5e8 with catch @ 00adb590 */
    puVar4 = &DAT_018a53cc;
    if (uVar1 == 0x10000) {
      uVar9 = 1;
                    /* catch() { ... } // from try @ 00adb5d8 with catch @ 00adb624 */
    }
    else if (uVar1 == 0x20000) {
      puVar4 = &DAT_018a53ce;
      uVar9 = 1;
    }
    else if (uVar1 == 0x30000) {
      puVar4 = &DAT_018a53cc;
      uVar9 = 2;
    }
    else {
      puVar4 = *(undefined1 **)(param_1 + 0x2a0);
      if (puVar4 != (undefined1 *)0x0) {
                    /* catch() { ... } // from try @ 00adb6a4 with catch @ 00adb640 */
        uVar9 = *(ulong *)(param_1 + 0x298);
        goto joined_r0x00adb5d0;
      }
      puVar4 = &DAT_018a53d0;
      uVar9 = 4;
    }
LAB_00adb658:
    pbVar7 = *(byte **)(*(long *)(param_1 + 0x178) + 0x128);
    uVar6 = *(ulong *)(*(long *)(param_1 + 0x178) + 0x120);
joined_r0x00adb7c0:
    if ((uVar6 & 1) != 0) {
LAB_00adb7c4:
      ERR_put_error(0x14,0x152,0x44,"ssl/t1_lib.c",0x123);
      return 0;
    }
    uVar6 = uVar6 >> 1;
    if (uVar9 == 0) goto LAB_00adb674;
LAB_00adb69c:
    if (((uVar5 >> 0x16 & 1) == 0) || (uVar6 != 0)) {
                    /* try { // try from 00adb6a4 to 00bdb6fb has its CatchHandler @ 00adb640 */
      pbVar8 = &DAT_018a52cc;
      uVar10 = 0x1d;
      if (uVar6 != 0) {
        pbVar8 = pbVar7;
        uVar10 = uVar6;
      }
      uVar6 = uVar10;
      if (uVar9 != 0) {
LAB_00adb6c0:
        uVar5 = 0;
        uVar10 = 0;
        do {
          uVar11 = 0;
          pbVar7 = puVar4 + 1;
          do {
                    /* catch() { ... } // from try @ 00adb694 with catch @ 00adb6e0 */
            if (*pbVar8 == pbVar7[-1]) {
              bVar2 = pbVar8[1];
              if ((bVar2 == *pbVar7) &&
                 ((*pbVar8 != 0 ||
                  (((byte)(bVar2 - 1) < 0x1d &&
                   (iVar3 = ssl_security(param_1,0x20005,(&UINT_018a5168)[(ulong)bVar2 * 3],
                                         (&UINT_018a5164)[(ulong)bVar2 * 3],pbVar8), iVar3 != 0)))))
                 ) {
                    /* catch() { ... } // from try @ 00adb75c with catch @ 00adb6fc */
                if (param_2 == uVar5) {
                  if (0x1c < CONCAT11(*pbVar8,pbVar8[1]) - 1) {
                    return 0;
                  }
                    /* catch() { ... } // from try @ 00adb74c with catch @ 00adb798 */
                  return (&UINT_018a5164)[(ulong)(uint)CONCAT11(*pbVar8,pbVar8[1]) * 3];
                }
                uVar5 = uVar5 + 1;
              }
            }
            uVar11 = uVar11 + 1;
                    /* try { // try from 00adb74c to 00bdb75b has its CatchHandler @ 00adb798 */
            pbVar7 = pbVar7 + 2;
          } while (uVar11 < uVar9);
          uVar10 = uVar10 + 1;
                    /* try { // try from 00adb75c to 00bdb7b3 has its CatchHandler @ 00adb6fc */
          pbVar8 = pbVar8 + 2;
        } while (uVar10 < uVar6);
        goto LAB_00adb76c;
      }
    }
  }
  else {
    puVar4 = *(undefined1 **)(*(long *)(param_1 + 0x178) + 0x128);
    uVar9 = *(ulong *)(*(long *)(param_1 + 0x178) + 0x120);
joined_r0x00adb5d0:
    if ((uVar9 & 1) != 0) goto LAB_00adb7c4;
    uVar9 = uVar9 >> 1;
                    /* try { // try from 00adb5d8 to 00bdb5e7 has its CatchHandler @ 00adb624 */
    if ((uVar5 >> 0x16 & 1) == 0) goto LAB_00adb658;
    pbVar7 = &DAT_018a53cc;
                    /* try { // try from 00adb5e8 to 00bdb63f has its CatchHandler @ 00adb590 */
    uVar1 = *(uint *)(*(long *)(param_1 + 0x148) + 0x1c) & 0x30000;
    if (uVar1 == 0x10000) {
LAB_00adb690:
                    /* try { // try from 00adb694 to 00bdb6a3 has its CatchHandler @ 00adb6e0 */
      uVar6 = 1;
    }
    else {
      if (uVar1 == 0x20000) {
        pbVar7 = &DAT_018a53ce;
        goto LAB_00adb690;
      }
      if (uVar1 == 0x30000) {
        pbVar7 = &DAT_018a53cc;
        uVar6 = 2;
      }
      else {
        pbVar7 = *(byte **)(param_1 + 0x2a0);
                    /* catch() { ... } // from try @ 00adb80c with catch @ 00adb7b4 */
        if (pbVar7 != (byte *)0x0) {
          uVar6 = *(ulong *)(param_1 + 0x298);
          goto joined_r0x00adb7c0;
        }
        pbVar7 = &DAT_018a53d0;
                    /* try { // try from 00adb80c to 00bdb85b has its CatchHandler @ 00adb7b4 */
        uVar6 = 4;
      }
    }
    if (uVar9 != 0) goto LAB_00adb69c;
LAB_00adb674:
    if ((uVar5 >> 0x16 & 1) == 0) goto LAB_00adb69c;
    if (uVar6 != 0) {
      puVar4 = &DAT_018a52cc;
      uVar9 = 0x1d;
      pbVar8 = pbVar7;
      goto LAB_00adb6c0;
    }
  }
  uVar5 = 0;
LAB_00adb76c:
  if (param_2 != 0xffffffff) {
    uVar5 = 0;
  }
                    /* try { // try from 00adb7fc to 00bdb80b has its CatchHandler @ 00adb840 */
  return uVar5;
}

