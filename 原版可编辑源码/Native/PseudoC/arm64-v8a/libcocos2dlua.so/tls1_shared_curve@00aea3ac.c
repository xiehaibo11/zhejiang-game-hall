
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
  if (param_2 == 0xfffffffe) {
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
    puVar4 = &DAT_013d384c;
    if (uVar1 == 0x10000) {
      uVar9 = 1;
    }
    else {
                    /* try { // try from 00aea454 to 00bea4ef has its CatchHandler @ 00aea5ac */
      if (uVar1 == 0x20000) {
        puVar4 = &DAT_013d384e;
        uVar9 = 1;
      }
      else if (uVar1 == 0x30000) {
        puVar4 = &DAT_013d384c;
        uVar9 = 2;
      }
      else {
        puVar4 = *(undefined1 **)(param_1 + 0x2a0);
        if (puVar4 != (undefined1 *)0x0) {
                    /* try { // try from 00aea4f0 to 00bea5bf has its CatchHandler @ 00aea2cc */
          uVar9 = *(ulong *)(param_1 + 0x298);
          goto joined_r0x00aea484;
        }
        puVar4 = &DAT_013d3850;
        uVar9 = 4;
      }
    }
LAB_00aea50c:
    pbVar7 = *(byte **)(*(long *)(param_1 + 0x178) + 0x128);
    uVar6 = *(ulong *)(*(long *)(param_1 + 0x178) + 0x120);
joined_r0x00aea674:
    if ((uVar6 & 1) != 0) {
LAB_00aea678:
      ERR_put_error(0x14,0x152,0x44,"ssl/t1_lib.c",0x123);
      return 0;
    }
    uVar6 = uVar6 >> 1;
    if (uVar9 == 0) goto LAB_00aea528;
LAB_00aea550:
    if (((uVar5 >> 0x16 & 1) == 0) || (uVar6 != 0)) {
      pbVar8 = &DAT_013d374c;
      uVar10 = 0x1d;
      if (uVar6 != 0) {
        pbVar8 = pbVar7;
        uVar10 = uVar6;
      }
      uVar6 = uVar10;
      if (uVar9 != 0) {
LAB_00aea574:
        uVar5 = 0;
        uVar10 = 0;
        do {
          uVar11 = 0;
          pbVar7 = puVar4 + 1;
          do {
            if (*pbVar8 == pbVar7[-1]) {
              bVar2 = pbVar8[1];
                    /* try { // try from 00aea5c0 to 00bea6af has its CatchHandler @ 00aea5c0
                       catch() { ... } // from try @ 00aea5c0 with catch @ 00aea5c0
                       catch() { ... } // from try @ 00aea864 with catch @ 00aea5c0 */
              if ((bVar2 == *pbVar7) &&
                 ((*pbVar8 != 0 ||
                  (((byte)(bVar2 - 1) < 0x1d &&
                   (iVar3 = ssl_security(param_1,0x20005,(&UINT_013d35e8)[(ulong)bVar2 * 3],
                                         (&UINT_013d35e4)[(ulong)bVar2 * 3],pbVar8), iVar3 != 0)))))
                 ) {
                    /* catch() { ... } // from try @ 00aea454 with catch @ 00aea5ac */
                if (param_2 == uVar5) {
                  if (0x1c < CONCAT11(*pbVar8,pbVar8[1]) - 1) {
                    return 0;
                  }
                  return (&UINT_013d35e4)[(ulong)(uint)CONCAT11(*pbVar8,pbVar8[1]) * 3];
                }
                uVar5 = uVar5 + 1;
              }
            }
            uVar11 = uVar11 + 1;
            pbVar7 = pbVar7 + 2;
          } while (uVar11 < uVar9);
          uVar10 = uVar10 + 1;
          pbVar8 = pbVar8 + 2;
        } while (uVar10 < uVar6);
        goto LAB_00aea620;
      }
    }
  }
  else {
    puVar4 = *(undefined1 **)(*(long *)(param_1 + 0x178) + 0x128);
    uVar9 = *(ulong *)(*(long *)(param_1 + 0x178) + 0x120);
joined_r0x00aea484:
    if ((uVar9 & 1) != 0) goto LAB_00aea678;
    uVar9 = uVar9 >> 1;
    if ((uVar5 >> 0x16 & 1) == 0) goto LAB_00aea50c;
    pbVar7 = &DAT_013d384c;
    uVar1 = *(uint *)(*(long *)(param_1 + 0x148) + 0x1c) & 0x30000;
    if (uVar1 == 0x10000) {
LAB_00aea544:
      uVar6 = 1;
    }
    else {
      if (uVar1 == 0x20000) {
        pbVar7 = &DAT_013d384e;
        goto LAB_00aea544;
      }
      if (uVar1 == 0x30000) {
        pbVar7 = &DAT_013d384c;
        uVar6 = 2;
      }
      else {
        pbVar7 = *(byte **)(param_1 + 0x2a0);
        if (pbVar7 != (byte *)0x0) {
          uVar6 = *(ulong *)(param_1 + 0x298);
          goto joined_r0x00aea674;
        }
        pbVar7 = &DAT_013d3850;
        uVar6 = 4;
      }
    }
    if (uVar9 != 0) goto LAB_00aea550;
LAB_00aea528:
    if ((uVar5 >> 0x16 & 1) == 0) goto LAB_00aea550;
    if (uVar6 != 0) {
      puVar4 = &DAT_013d374c;
      uVar9 = 0x1d;
      pbVar8 = pbVar7;
      goto LAB_00aea574;
    }
  }
  uVar5 = 0;
LAB_00aea620:
  if (param_2 != 0xffffffff) {
    uVar5 = 0;
  }
                    /* try { // try from 00aea6b0 to 00bea6bb has its CatchHandler @ 00aea8e0 */
  return uVar5;
}

