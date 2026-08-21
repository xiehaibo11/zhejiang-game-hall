
undefined8 FUN_0109e77c(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  ulong local_28;
  
  uVar6 = (**(code **)(param_1 + 0x330))(param_1,0x6b65726e,param_2,&local_28);
  if ((int)uVar6 == 0) {
    if (local_28 < 4) {
      uVar6 = 0x8e;
    }
    else {
      uVar6 = FT_Stream_ExtractFrame(param_2,local_28,param_1 + 0x4c8);
      if ((int)uVar6 == 0) {
        lVar13 = *(long *)(param_1 + 0x4c8);
        *(ulong *)(param_1 + 0x4d0) = local_28;
        uVar1 = (uint)CONCAT11(*(undefined1 *)(lVar13 + 2),*(undefined1 *)(lVar13 + 3));
                    /* try { // try from 0109e7f0 to 0119e7f7 has its CatchHandler @ 0109e8e8 */
        if (0x1f < uVar1) {
          uVar1 = 0x20;
        }
                    /* try { // try from 0109e7f8 to 0119e907 has its CatchHandler @ 0109e544 */
        if (uVar1 == 0) {
          uVar11 = 0;
          uVar10 = 0;
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          uVar10 = 0;
          uVar11 = 0;
          local_28 = lVar13 + local_28;
          uVar8 = lVar13 + 4;
          do {
            if ((local_28 < uVar8 + 6) ||
               (uVar5 = (uint)CONCAT11(*(undefined1 *)(uVar8 + 2),*(undefined1 *)(uVar8 + 3)),
               uVar5 < 0xf)) break;
            uVar9 = uVar8 + uVar5;
            uVar2 = local_28;
            if (uVar9 <= local_28) {
              uVar2 = uVar9;
            }
            if ((uVar8 + 0xe <= local_28) &&
               ((*(byte *)(uVar8 + 5) & 0xf7 | (uint)*(byte *)(uVar8 + 4) << 8) == 1)) {
              uVar5 = (uint)CONCAT11(*(undefined1 *)(uVar8 + 6),*(undefined1 *)(uVar8 + 7));
              lVar13 = uVar2 - (uVar8 + 0xe);
              uVar3 = 1 << (ulong)(uVar12 & 0x1f);
              if (lVar13 < (long)(ulong)(uVar5 * 6)) {
                auVar4 = SEXT816(lVar13) * SEXT816(0x2aaaaaaaaaaaaaab);
                uVar5 = auVar4._8_4_ - (auVar4._12_4_ >> 0x1f);
              }
              uVar11 = uVar3 | uVar11;
              if (uVar5 != 0) {
                if (uVar5 - 1 != 0) {
                  pbVar7 = (byte *)(uVar8 + 0x14);
                  lVar13 = -(ulong)(uVar5 - 1);
                  uVar8 = (ulong)*(byte *)(uVar8 + 0xe) << 0x18 |
                          (ulong)*(byte *)(uVar8 + 0xf) << 0x10 |
                          (ulong)*(byte *)(uVar8 + 0x10) << 8 | (ulong)*(byte *)(uVar8 + 0x11);
                  do {
                    /* catch() { ... } // from try @ 0109e7f0 with catch @ 0109e8e8 */
                    uVar9 = (ulong)*pbVar7 << 0x18 | (ulong)pbVar7[1] << 0x10 |
                            (ulong)pbVar7[2] << 8 | (ulong)pbVar7[3];
                    if (uVar9 <= uVar8) goto LAB_0109e91c;
                    /* catch() { ... } // from try @ 0109e944 with catch @ 0109e908
                       catch() { ... } // from try @ 0109e990 with catch @ 0109e908 */
                    lVar13 = lVar13 + 1;
                    pbVar7 = pbVar7 + 6;
                    uVar8 = uVar9;
                  } while (lVar13 != 0);
                }
                uVar10 = uVar3 | uVar10;
              }
            }
LAB_0109e91c:
            uVar12 = uVar12 + 1;
            uVar8 = uVar2;
          } while (uVar12 < uVar1);
        }
        uVar6 = 0;
                    /* try { // try from 0109e940 to 0119e943 has its CatchHandler @ 0109e990 */
        *(uint *)(param_1 + 0x4d8) = uVar12;
                    /* try { // try from 0109e944 to 0119e987 has its CatchHandler @ 0109e908 */
        *(uint *)(param_1 + 0x4dc) = uVar11;
        *(uint *)(param_1 + 0x4e0) = uVar10;
      }
    }
  }
  return uVar6;
}

