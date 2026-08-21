
undefined8 FUN_010c8bc4(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  ushort *puVar10;
  long lVar11;
  long lVar12;
  byte *pbVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  byte *pbVar17;
  byte bVar18;
  byte bVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  ushort uVar23;
  uint uVar24;
  long *plVar25;
  ulong uVar26;
  uint uVar27;
  long lVar28;
  long lVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  
  plVar25 = (long *)*param_1;
  lVar11 = *(long *)*plVar25;
                    /* catch() { ... } // from try @ 010c8744 with catch @ 010c8bf8 */
  if ((*(uint *)(lVar11 + 0x16c) & 0x600000) == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(lVar11,"lost rgb to gray");
  }
  if ((*(uint *)(lVar11 + 0x16c) >> 7 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    png_error(lVar11,"unexpected compose");
  }
  lVar28 = ((long *)*plVar25)[1];
  uVar2 = *(uint *)((long)plVar25 + 0xc);
                    /* catch() { ... } // from try @ 010c88d4 with catch @ 010c8c10 */
  uVar3 = *(uint *)(plVar25 + 2);
  cVar8 = png_get_channels(lVar11,lVar28);
                    /* catch() { ... } // from try @ 010c87e0 with catch @ 010c8c28 */
                    /* catch() { ... } // from try @ 010c8a4c with catch @ 010c8c30 */
  if (cVar8 != '\x02') {
                    /* WARNING: Subroutine does not return */
    png_error(lVar11,"lost/gained channels");
  }
  uVar21 = *(uint *)((long)plVar25 + 0x14);
  if ((uVar21 & 5) == 1) {
                    /* WARNING: Subroutine does not return */
    png_error(lVar11,"unexpected 8-bit transformation");
  }
  cVar8 = *(char *)(lVar11 + 0x2ac);
  if (cVar8 == '\0') {
    iVar14 = 1;
  }
  else {
    if (cVar8 != '\x01') {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010c9178 with catch @ 010c9244
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010c90f4 with catch @ 010c9248
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010c9118 with catch @ 010c924c
                        */
                    /* WARNING: Subroutine does not return */
      png_error(lVar11,"unknown interlace type");
    }
    iVar14 = 7;
  }
                    /* catch() { ... } // from try @ 010c8a18 with catch @ 010c8c6c */
  cVar4 = *(char *)(lVar28 + 0x24);
  if (cVar4 == '\b') {
    lVar12 = param_1[6];
    uVar21 = 0;
    lVar28 = param_1[7];
    do {
                    /* catch() { ... } // from try @ 010c8f38 with catch @ 010c8fb4 */
      if (cVar8 == '\x01') {
        uVar30 = (uVar21 & 1) << (ulong)(3U - ((int)(uVar21 + 1) >> 1) & 0x1f) & 7;
        uVar32 = (ulong)uVar30;
        uVar22 = (int)(7 - uVar21) >> 1;
        uVar24 = uVar22;
        if (uVar21 - 1 == 0 || (int)uVar21 < 1) {
          uVar24 = 3;
        }
                    /* catch() { ... } // from try @ 010c8eb8 with catch @ 010c8ffc */
        if (((uVar2 - 1) + (1 << (ulong)(uVar24 & 0x1f))) - uVar30 >> (ulong)(uVar24 & 0x1f) != 0) {
          uVar22 = 1 << (ulong)(uVar22 & 0x1f);
          uVar30 = (uVar21 & 1 ^ 1) << (ulong)(3U - ((int)uVar21 >> 1) & 0x1f) & 7;
          if ((int)uVar21 < 3) {
            uVar24 = 8;
          }
          else {
            uVar24 = 8 >> (ulong)((int)(uVar21 - 1) >> 1 & 0x1f);
          }
          goto LAB_010c9058;
        }
      }
      else {
        uVar30 = 0;
        uVar32 = 0;
                    /* catch() { ... } // from try @ 010c8eb0 with catch @ 010c9048 */
        uVar24 = 1;
        uVar22 = 1;
LAB_010c9058:
        if (param_1[4] == 0) {
          if (uVar30 < uVar3) {
            do {
              lVar29 = param_1[5];
              png_read_row(lVar11,lVar29,0);
              if ((uint)uVar32 < uVar2) {
                lVar16 = lVar12 + lVar28 * (ulong)uVar30;
                pbVar17 = (byte *)(lVar29 + 1);
                pbVar13 = (byte *)(lVar16 + uVar32);
                do {
                  bVar5 = *pbVar17;
                  if (bVar5 != 0) {
                    /* try { // try from 010c9178 to 011c917b has its CatchHandler @ 010c9244 */
                    bVar19 = pbVar17[-1];
                    /* try { // try from 010c917c to 011c9297 has its CatchHandler @ 010c9088 */
                    if (bVar5 != 0xff) {
                      uVar9 = (uint)(ushort)(&png_sRGB_table)[bVar19] * (uint)bVar5 +
                              (bVar5 ^ 0xff) * (uint)(ushort)(&png_sRGB_table)[*pbVar13];
                      uVar31 = uVar9 >> 0xf;
                      bVar19 = (byte)((uint)*(ushort *)(png_sRGB_base + (ulong)uVar31 * 2) +
                                      ((uVar9 & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar31] >> 0xc)
                                     >> 8);
                    }
                    *pbVar13 = bVar19;
                  }
                  pbVar13 = pbVar13 + uVar22;
                  pbVar17 = pbVar17 + 2;
                } while (pbVar13 < (byte *)(lVar16 + (ulong)uVar2));
              }
              uVar30 = uVar30 + uVar24;
            } while (uVar30 < uVar3);
          }
        }
        else if (uVar30 < uVar3) {
          bVar5 = *(byte *)(param_1[4] + 1);
          uVar6 = (&png_sRGB_table)[bVar5];
          do {
            lVar29 = param_1[5];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010c917c with catch @ 010c9088
                        */
            png_read_row(lVar11,lVar29,0);
            if ((uint)uVar32 < uVar2) {
              lVar16 = lVar12 + lVar28 * (ulong)uVar30;
              pbVar17 = (byte *)(lVar29 + 1);
              pbVar13 = (byte *)(lVar16 + uVar32);
              do {
                bVar19 = *pbVar17;
                bVar18 = bVar5;
                if (bVar19 != 0) {
                  bVar18 = pbVar17[-1];
                  if (bVar19 != 0xff) {
                    uVar9 = (bVar19 ^ 0xff) * (uint)uVar6 +
                            (uint)(ushort)(&png_sRGB_table)[bVar18] * (uint)bVar19;
                    uVar31 = uVar9 >> 0xf;
                    /* try { // try from 010c90f4 to 011c90fb has its CatchHandler @ 010c9248 */
                    bVar18 = (byte)((uint)*(ushort *)(png_sRGB_base + (ulong)uVar31 * 2) +
                                    ((uVar9 & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar31] >> 0xc)
                                   >> 8);
                  }
                }
                *pbVar13 = bVar18;
                pbVar13 = pbVar13 + uVar22;
                pbVar17 = pbVar17 + 2;
              } while (pbVar13 < (byte *)(lVar16 + (ulong)uVar2));
            }
            uVar30 = uVar30 + uVar24;
                    /* try { // try from 010c9118 to 011c911f has its CatchHandler @ 010c924c */
          } while (uVar30 < uVar3);
        }
      }
      uVar21 = uVar21 + 1;
      if (iVar14 <= (int)uVar21) {
        return 1;
      }
      cVar8 = *(char *)(lVar11 + 0x2ac);
    } while( true );
  }
  if (cVar4 != '\x10') {
                    /* WARNING: Subroutine does not return */
    png_error(lVar11,"unexpected bit depth");
  }
  lVar28 = param_1[6];
  uVar32 = param_1[7];
  if ((long)uVar32 < 0) {
    uVar32 = uVar32 + 1;
  }
  bVar7 = (uVar21 & 0x21) == 0x21;
                    /* catch() { ... } // from try @ 010c8940 with catch @ 010c8cb0 */
  uVar30 = (uVar21 & 1) + 1;
  uVar22 = 0;
  uVar24 = uVar30 * uVar2;
                    /* catch() { ... } // from try @ 010c889c with catch @ 010c8cd8 */
  lVar12 = (ulong)bVar7 * 2;
  do {
    if (cVar8 == '\x01') {
      uVar9 = (int)(7 - uVar22) >> 1;
                    /* try { // try from 010c8e08 to 011c8eaf has its CatchHandler @ 010c8e08
                       catch() { ... } // from try @ 010c8e08 with catch @ 010c8e08
                       catch() { ... } // from try @ 010c8ec8 with catch @ 010c8e08
                       catch() { ... } // from try @ 010c8f48 with catch @ 010c8e08 */
      uVar27 = uVar9;
      if (uVar22 - 1 == 0 || (int)uVar22 < 1) {
        uVar27 = 3;
      }
      uVar31 = (uVar22 & 1) << (ulong)(3U - ((int)(uVar22 + 1) >> 1) & 0x1f) & 7;
      if (((uVar2 - 1) + (1 << (ulong)(uVar27 & 0x1f))) - uVar31 >> (ulong)(uVar27 & 0x1f) != 0) {
        uVar31 = uVar31 * uVar30;
        uVar9 = uVar30 << (ulong)(uVar9 & 0x1f);
        uVar26 = (ulong)((uVar22 & 1 ^ 1) << (ulong)(3U - ((int)uVar22 >> 1) & 0x1f) & 7);
        if ((int)uVar22 < 3) {
          uVar27 = 8;
        }
        else {
          uVar27 = 8 >> (ulong)((int)(uVar22 - 1) >> 1 & 0x1f);
        }
        goto LAB_010c8e84;
      }
    }
    else {
      uVar31 = 0;
      uVar26 = 0;
      uVar27 = 1;
      uVar9 = uVar30;
LAB_010c8e84:
      if ((uint)uVar26 < uVar3) {
        uVar15 = (ulong)uVar31;
        if ((uVar21 & 1) == 0) {
                    /* try { // try from 010c8eb0 to 011c8eb7 has its CatchHandler @ 010c9048 */
          do {
                    /* try { // try from 010c8eb8 to 011c8ec7 has its CatchHandler @ 010c8ffc */
            png_read_row(lVar11,param_1[5],0);
                    /* try { // try from 010c8ec8 to 011c8f37 has its CatchHandler @ 010c8e08 */
            if (uVar31 < uVar24) {
              puVar10 = (ushort *)param_1[5];
              lVar16 = ((long)uVar32 >> 1) * uVar26;
              lVar29 = lVar28;
              do {
                uVar6 = puVar10[1];
                uVar23 = *puVar10;
                if (uVar6 != 0xffff) {
                  if (uVar6 == 0) {
                    uVar23 = 0;
                  }
                  else {
                    uVar23 = (ushort)(((uint)uVar6 * (uint)uVar23 + 0x7fff) / 0xffff);
                  }
                }
                *(ushort *)(lVar12 + uVar15 * 2 + (uVar32 & 0xfffffffffffffffe) * uVar26 + lVar29) =
                     uVar23;
                lVar29 = lVar29 + (ulong)uVar9 * 2;
                    /* try { // try from 010c8f38 to 011c8f47 has its CatchHandler @ 010c8fb4 */
                puVar10 = puVar10 + 2;
              } while (lVar29 + (uVar15 + lVar16) * 2 < lVar28 + lVar16 * 2 + (ulong)uVar24 * 2);
            }
            uVar1 = (int)uVar26 + uVar27;
            uVar26 = (ulong)uVar1;
                    /* try { // try from 010c8f48 to 011c9087 has its CatchHandler @ 010c8e08 */
          } while (uVar1 < uVar3);
        }
        else {
                    /* catch() { ... } // from try @ 010c8718 with catch @ 010c8d0c */
                    /* catch() { ... } // from try @ 010c8670 with catch @ 010c8d14 */
          do {
            png_read_row(lVar11,param_1[5],0);
                    /* catch() { ... } // from try @ 010c85f0 with catch @ 010c8d2c */
            if (uVar31 < uVar24) {
                    /* try { // try from 010c8d38 to 011c8d3b has its CatchHandler @ 010c8d3c */
                    /* catch() { ... } // from try @ 010c8d38 with catch @ 010c8d3c */
                    /* try { // try from 010c8d40 to 011c8d43 has its CatchHandler @ 010c8d48 */
              lVar16 = (uVar32 & 0xfffffffffffffffe) * uVar26;
                    /* try { // try from 010c8d44 to 011c8d5f has its CatchHandler @ 010c84c8 */
              lVar20 = ((long)uVar32 >> 1) * uVar26;
                    /* catch() { ... } // from try @ 010c8d40 with catch @ 010c8d48 */
                    /* catch() { ... } // from try @ 010c85e0 with catch @ 010c8d4c */
              puVar10 = (ushort *)param_1[5];
                    /* catch() { ... } // from try @ 010c858c with catch @ 010c8d54 */
                    /* try { // try from 010c8d60 to 011c8d63 has its CatchHandler @ 010c8d64 */
                    /* catch() { ... } // from try @ 010c8d60 with catch @ 010c8d64 */
                    /* try { // try from 010c8d68 to 011c8d6b has its CatchHandler @ 010c8d70 */
              lVar29 = lVar28;
              do {
                    /* try { // try from 010c8d6c to 011c8e07 has its CatchHandler @ 010c84c8 */
                uVar6 = puVar10[1];
                    /* catch() { ... } // from try @ 010c8d68 with catch @ 010c8d70 */
                if (uVar6 == 0) {
                  uVar23 = 0;
                }
                else {
                    /* catch() { ... } // from try @ 010c8580 with catch @ 010c8d74 */
                  uVar23 = *puVar10;
                  if (uVar6 != 0xffff) {
                    /* catch() { ... } // from try @ 010c85b4 with catch @ 010c8d84 */
                    uVar23 = (ushort)(((uint)uVar6 * (uint)uVar23 + 0x7fff) / 0xffff);
                    /* catch() { ... } // from try @ 010c8680 with catch @ 010c8d8c */
                  }
                }
                *(ushort *)(lVar12 + uVar15 * 2 + lVar16 + lVar29) = uVar23;
                *(ushort *)((ulong)!bVar7 * 2 + uVar15 * 2 + lVar16 + lVar29) = uVar6;
                lVar29 = lVar29 + (ulong)uVar9 * 2;
                puVar10 = puVar10 + 2;
              } while (lVar29 + (uVar15 + lVar20) * 2 < lVar28 + lVar20 * 2 + (ulong)uVar24 * 2);
            }
            uVar1 = (int)uVar26 + uVar27;
            uVar26 = (ulong)uVar1;
          } while (uVar1 < uVar3);
        }
      }
    }
    uVar22 = uVar22 + 1;
    if (iVar14 <= (int)uVar22) {
      return 1;
    }
    cVar8 = *(char *)(lVar11 + 0x2ac);
  } while( true );
}

