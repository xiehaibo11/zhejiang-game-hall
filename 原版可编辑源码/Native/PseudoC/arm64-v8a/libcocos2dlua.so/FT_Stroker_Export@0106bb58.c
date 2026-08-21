
void FT_Stroker_Export(long param_1,short *param_2)

{
  byte *pbVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  byte *pbVar7;
  ulong *puVar8;
  long lVar9;
  ulong *puVar10;
  short *psVar11;
  short *psVar12;
  byte *pbVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  
  if ((param_1 != 0) && (param_2 != (short *)0x0)) {
    if (*(char *)(param_1 + 0x98) != '\0') {
      memcpy((void *)(*(long *)(param_2 + 4) + (long)param_2[1] * 0x10),*(void **)(param_1 + 0x78),
             (ulong)*(uint *)(param_1 + 0x70) << 4);
      uVar4 = *(uint *)(param_1 + 0x70);
      if (uVar4 != 0) {
        puVar8 = *(ulong **)(param_1 + 0x80);
        uVar15 = (ulong)(uVar4 - 1);
        pbVar7 = (byte *)(*(long *)(param_2 + 8) + (long)param_2[1]);
        if (uVar15 + 1 < 0x10) goto LAB_0106bbf8;
                    /* try { // try from 0106bbc0 to 0116bc8f has its CatchHandler @ 0106bca8 */
        uVar3 = uVar4 & 0xf;
        lVar14 = (uVar15 + 1) - (ulong)uVar3;
        if (lVar14 == 0) goto LAB_0106bbf8;
        if ((pbVar7 < (byte *)((long)puVar8 + uVar15 + 1)) &&
           (puVar8 < (ulong *)(*(long *)(param_2 + 8) + (long)param_2[1] + uVar15 + 1)))
        goto LAB_0106bbf8;
        pbVar1 = pbVar7 + lVar14;
        puVar2 = (ulong *)((long)puVar8 + lVar14);
        uVar4 = uVar4 - (int)lVar14;
        puVar10 = puVar8;
        pbVar13 = pbVar7;
        do {
          uVar17 = puVar10[1];
          uVar15 = *puVar10;
          lVar14 = lVar14 + -0x10;
          bVar19 = -((uVar15 & 1) == 0);
          bVar20 = -((uVar15 & 0x100) == 0);
          bVar21 = -((uVar15 & 0x10000) == 0);
          bVar22 = -((uVar15 & 0x1000000) == 0);
          bVar23 = -((uVar15 & 0x100000000) == 0);
          bVar24 = -((uVar15 & 0x10000000000) == 0);
          bVar25 = -((uVar15 & 0x1000000000000) == 0);
          bVar26 = -((uVar15 & 0x100000000000000) == 0);
          bVar27 = -((uVar17 & 1) == 0);
          bVar28 = -((uVar17 & 0x100) == 0);
          bVar29 = -((uVar17 & 0x10000) == 0);
          bVar30 = -((uVar17 & 0x1000000) == 0);
          bVar31 = -((uVar17 & 0x100000000) == 0);
          bVar32 = -((uVar17 & 0x10000000000) == 0);
          bVar33 = -((uVar17 & 0x1000000000000) == 0);
          bVar34 = -((uVar17 & 0x100000000000000) == 0);
          uVar16 = CONCAT71((int7)(((ulong)CONCAT15((byte)(uVar15 >> 0x38) & bVar26,
                                                    CONCAT14((byte)(uVar15 >> 0x30) & bVar25,
                                                             CONCAT13((byte)(uVar15 >> 0x28) &
                                                                      bVar24,CONCAT12((byte)(uVar15 
                                                  >> 0x20) & bVar23,
                                                  CONCAT11((byte)(uVar15 >> 0x18) & bVar22,
                                                           (byte)(uVar15 >> 0x10) & bVar21))))) <<
                                   0x10) >> 8),(byte)uVar15 & bVar19) & 0xffffffffffffff02;
          uVar15 = CONCAT62((int6)(uVar16 >> 0x10),
                            CONCAT11((byte)(uVar15 >> 8) & bVar20,(char)uVar16)) &
                   0xffffffffffff02ff;
          uVar16 = CONCAT53((int5)(uVar15 >> 0x18),CONCAT12((char)(uVar16 >> 0x10),(short)uVar15)) &
                   0xffffffffff02ffff;
          uVar15 = CONCAT44((int)(uVar16 >> 0x20),CONCAT13((char)(uVar15 >> 0x18),(int3)uVar16)) &
                   0xffffffff02ffffff;
          uVar16 = CONCAT35((int3)(uVar15 >> 0x28),CONCAT14((char)(uVar16 >> 0x20),(int)uVar15)) &
                   0xffffff02ffffffff;
          uVar15 = CONCAT26((short)(uVar16 >> 0x30),CONCAT15((char)(uVar15 >> 0x28),(int5)uVar16)) &
                   0xffff02ffffffffff;
          uVar15 = CONCAT17((char)(uVar15 >> 0x38),CONCAT16((char)(uVar16 >> 0x30),(int6)uVar15)) &
                   0x202ffffffffffff;
          uVar16 = CONCAT71((int7)(((ulong)CONCAT15((byte)(uVar17 >> 0x38) & bVar34,
                                                    CONCAT14((byte)(uVar17 >> 0x30) & bVar33,
                                                             CONCAT13((byte)(uVar17 >> 0x28) &
                                                                      bVar32,CONCAT12((byte)(uVar17 
                                                  >> 0x20) & bVar31,
                                                  CONCAT11((byte)(uVar17 >> 0x18) & bVar30,
                                                           (byte)(uVar17 >> 0x10) & bVar29))))) <<
                                   0x10) >> 8),(byte)uVar17 & bVar27) & 0xffffffffffffff02;
          uVar18 = CONCAT62((int6)(uVar16 >> 0x10),
                            CONCAT11((byte)(uVar17 >> 8) & bVar28,(char)uVar16)) &
                   0xffffffffffff02ff;
          uVar17 = CONCAT53((int5)(uVar18 >> 0x18),CONCAT12((char)(uVar16 >> 0x10),(short)uVar18)) &
                   0xffffffffff02ffff;
          uVar16 = CONCAT44((int)(uVar17 >> 0x20),CONCAT13((char)(uVar18 >> 0x18),(int3)uVar17)) &
                   0xffffffff02ffffff;
          uVar17 = CONCAT35((int3)(uVar16 >> 0x28),CONCAT14((char)(uVar17 >> 0x20),(int)uVar16)) &
                   0xffffff02ffffffff;
          uVar16 = CONCAT26((short)(uVar17 >> 0x30),CONCAT15((char)(uVar16 >> 0x28),(int5)uVar17)) &
                   0xffff02ffffffffff;
          uVar16 = CONCAT17((char)(uVar16 >> 0x38),CONCAT16((char)(uVar17 >> 0x30),(int6)uVar16)) &
                   0x202ffffffffffff;
          *(ulong *)(pbVar13 + 8) =
               CONCAT17((byte)(uVar16 >> 0x38) | ~bVar34 & 1,
                        CONCAT16((byte)(uVar16 >> 0x30) | ~bVar33 & 1,
                                 CONCAT15((byte)(uVar16 >> 0x28) | ~bVar32 & 1,
                                          CONCAT14((byte)(uVar16 >> 0x20) | ~bVar31 & 1,
                                                   CONCAT13((byte)(uVar16 >> 0x18) | ~bVar30 & 1,
                                                            CONCAT12((byte)(uVar16 >> 0x10) |
                                                                     ~bVar29 & 1,
                                                                     CONCAT11((byte)(uVar16 >> 8) |
                                                                              ~bVar28 & 1,
                                                                              (byte)uVar16 |
                                                                              ~bVar27 & 1)))))));
          *(ulong *)pbVar13 =
               CONCAT17((byte)(uVar15 >> 0x38) | ~bVar26 & 1,
                        CONCAT16((byte)(uVar15 >> 0x30) | ~bVar25 & 1,
                                 CONCAT15((byte)(uVar15 >> 0x28) | ~bVar24 & 1,
                                          CONCAT14((byte)(uVar15 >> 0x20) | ~bVar23 & 1,
                                                   CONCAT13((byte)(uVar15 >> 0x18) | ~bVar22 & 1,
                                                            CONCAT12((byte)(uVar15 >> 0x10) |
                                                                     ~bVar21 & 1,
                                                                     CONCAT11((byte)(uVar15 >> 8) |
                                                                              ~bVar20 & 1,
                                                                              (byte)uVar15 |
                                                                              ~bVar19 & 1)))))));
          puVar10 = puVar10 + 2;
          pbVar13 = pbVar13 + 0x10;
          pbVar7 = pbVar1;
          puVar8 = puVar2;
        } while (lVar14 != 0);
        while (uVar3 != 0) {
LAB_0106bbf8:
          uVar4 = uVar4 - 1;
          bVar19 = (byte)*puVar8 & 2;
          if (((byte)*puVar8 & 1) != 0) {
            bVar19 = 1;
          }
          *pbVar7 = bVar19;
          pbVar7 = pbVar7 + 1;
          puVar8 = (ulong *)((long)puVar8 + 1);
          uVar3 = uVar4;
        }
        iVar5 = *(int *)(param_1 + 0x70);
        sVar6 = param_2[1];
        if (iVar5 != 0) {
          lVar9 = *(long *)(param_1 + 0x80);
          lVar14 = 0;
          psVar11 = (short *)(*(long *)(param_2 + 0xc) + (long)*param_2 * 2);
          do {
            psVar12 = psVar11;
            if ((*(byte *)(lVar9 + lVar14) >> 3 & 1) != 0) {
              psVar12 = psVar11 + 1;
              *psVar11 = sVar6;
              *param_2 = *param_2 + 1;
            }
            lVar14 = lVar14 + 1;
            sVar6 = sVar6 + 1;
            psVar11 = psVar12;
          } while (iVar5 != (int)lVar14);
          sVar6 = param_2[1];
        }
        param_2[1] = (short)iVar5 + sVar6;
      }
    }
    if (*(char *)(param_1 + 200) != '\0') {
      memcpy((void *)(*(long *)(param_2 + 4) + (long)param_2[1] * 0x10),*(void **)(param_1 + 0xa8),
             (ulong)*(uint *)(param_1 + 0xa0) << 4);
      uVar4 = *(uint *)(param_1 + 0xa0);
                    /* try { // try from 0106bc90 to 0116bcbb has its CatchHandler @ 0106ba08 */
      sVar6 = param_2[1];
      if (uVar4 == 0) {
        iVar5 = 0;
      }
      else {
        puVar8 = *(ulong **)(param_1 + 0xb0);
        uVar15 = (ulong)(uVar4 - 1);
                    /* catch() { ... } // from try @ 0106bbc0 with catch @ 0106bca8 */
        pbVar7 = (byte *)(*(long *)(param_2 + 8) + (long)sVar6);
        if (uVar15 + 1 < 0x10) goto LAB_0106bcec;
        uVar3 = uVar4 & 0xf;
        lVar14 = (uVar15 + 1) - (ulong)uVar3;
                    /* try { // try from 0106bcbc to 0116bd0f has its CatchHandler @ 0106bcbc
                       catch() { ... } // from try @ 0106bcbc with catch @ 0106bcbc
                       catch() { ... } // from try @ 0106c0ac with catch @ 0106bcbc
                       catch() { ... } // from try @ 0106c174 with catch @ 0106bcbc */
        if (lVar14 == 0) goto LAB_0106bcec;
        if ((pbVar7 < (byte *)((long)puVar8 + uVar15 + 1)) &&
           (puVar8 < (ulong *)(*(long *)(param_2 + 8) + (long)sVar6 + uVar15 + 1)))
        goto LAB_0106bcec;
        pbVar1 = pbVar7 + lVar14;
        puVar2 = (ulong *)((long)puVar8 + lVar14);
        uVar4 = uVar4 - (int)lVar14;
        puVar10 = puVar8;
        pbVar13 = pbVar7;
        do {
          uVar17 = puVar10[1];
          uVar15 = *puVar10;
          lVar14 = lVar14 + -0x10;
          bVar19 = -((uVar15 & 1) == 0);
          bVar20 = -((uVar15 & 0x100) == 0);
          bVar21 = -((uVar15 & 0x10000) == 0);
          bVar22 = -((uVar15 & 0x1000000) == 0);
          bVar23 = -((uVar15 & 0x100000000) == 0);
          bVar24 = -((uVar15 & 0x10000000000) == 0);
          bVar25 = -((uVar15 & 0x1000000000000) == 0);
          bVar26 = -((uVar15 & 0x100000000000000) == 0);
          bVar27 = -((uVar17 & 1) == 0);
          bVar28 = -((uVar17 & 0x100) == 0);
          bVar29 = -((uVar17 & 0x10000) == 0);
          bVar30 = -((uVar17 & 0x1000000) == 0);
          bVar31 = -((uVar17 & 0x100000000) == 0);
          bVar32 = -((uVar17 & 0x10000000000) == 0);
          bVar33 = -((uVar17 & 0x1000000000000) == 0);
          bVar34 = -((uVar17 & 0x100000000000000) == 0);
          uVar16 = CONCAT71((int7)(((ulong)CONCAT15((byte)(uVar15 >> 0x38) & bVar26,
                                                    CONCAT14((byte)(uVar15 >> 0x30) & bVar25,
                                                             CONCAT13((byte)(uVar15 >> 0x28) &
                                                                      bVar24,CONCAT12((byte)(uVar15 
                                                  >> 0x20) & bVar23,
                                                  CONCAT11((byte)(uVar15 >> 0x18) & bVar22,
                                                           (byte)(uVar15 >> 0x10) & bVar21))))) <<
                                   0x10) >> 8),(byte)uVar15 & bVar19) & 0xffffffffffffff02;
          uVar15 = CONCAT62((int6)(uVar16 >> 0x10),
                            CONCAT11((byte)(uVar15 >> 8) & bVar20,(char)uVar16)) &
                   0xffffffffffff02ff;
          uVar16 = CONCAT53((int5)(uVar15 >> 0x18),CONCAT12((char)(uVar16 >> 0x10),(short)uVar15)) &
                   0xffffffffff02ffff;
          uVar15 = CONCAT44((int)(uVar16 >> 0x20),CONCAT13((char)(uVar15 >> 0x18),(int3)uVar16)) &
                   0xffffffff02ffffff;
          uVar16 = CONCAT35((int3)(uVar15 >> 0x28),CONCAT14((char)(uVar16 >> 0x20),(int)uVar15)) &
                   0xffffff02ffffffff;
          uVar15 = CONCAT26((short)(uVar16 >> 0x30),CONCAT15((char)(uVar15 >> 0x28),(int5)uVar16)) &
                   0xffff02ffffffffff;
          uVar15 = CONCAT17((char)(uVar15 >> 0x38),CONCAT16((char)(uVar16 >> 0x30),(int6)uVar15)) &
                   0x202ffffffffffff;
          uVar16 = CONCAT71((int7)(((ulong)CONCAT15((byte)(uVar17 >> 0x38) & bVar34,
                                                    CONCAT14((byte)(uVar17 >> 0x30) & bVar33,
                                                             CONCAT13((byte)(uVar17 >> 0x28) &
                                                                      bVar32,CONCAT12((byte)(uVar17 
                                                  >> 0x20) & bVar31,
                                                  CONCAT11((byte)(uVar17 >> 0x18) & bVar30,
                                                           (byte)(uVar17 >> 0x10) & bVar29))))) <<
                                   0x10) >> 8),(byte)uVar17 & bVar27) & 0xffffffffffffff02;
          uVar17 = CONCAT62((int6)(uVar16 >> 0x10),
                            CONCAT11((byte)(uVar17 >> 8) & bVar28,(char)uVar16)) &
                   0xffffffffffff02ff;
          uVar16 = CONCAT53((int5)(uVar17 >> 0x18),CONCAT12((char)(uVar16 >> 0x10),(short)uVar17)) &
                   0xffffffffff02ffff;
          uVar17 = CONCAT44((int)(uVar16 >> 0x20),CONCAT13((char)(uVar17 >> 0x18),(int3)uVar16)) &
                   0xffffffff02ffffff;
          uVar16 = CONCAT35((int3)(uVar17 >> 0x28),CONCAT14((char)(uVar16 >> 0x20),(int)uVar17)) &
                   0xffffff02ffffffff;
          uVar17 = CONCAT26((short)(uVar16 >> 0x30),CONCAT15((char)(uVar17 >> 0x28),(int5)uVar16)) &
                   0xffff02ffffffffff;
          uVar16 = CONCAT17((char)(uVar17 >> 0x38),CONCAT16((char)(uVar16 >> 0x30),(int6)uVar17)) &
                   0x202ffffffffffff;
          *(ulong *)(pbVar13 + 8) =
               CONCAT17((byte)(uVar16 >> 0x38) | ~bVar34 & 1,
                        CONCAT16((byte)(uVar16 >> 0x30) | ~bVar33 & 1,
                                 CONCAT15((byte)(uVar16 >> 0x28) | ~bVar32 & 1,
                                          CONCAT14((byte)(uVar16 >> 0x20) | ~bVar31 & 1,
                                                   CONCAT13((byte)(uVar16 >> 0x18) | ~bVar30 & 1,
                                                            CONCAT12((byte)(uVar16 >> 0x10) |
                                                                     ~bVar29 & 1,
                                                                     CONCAT11((byte)(uVar16 >> 8) |
                                                                              ~bVar28 & 1,
                                                                              (byte)uVar16 |
                                                                              ~bVar27 & 1)))))));
          *(ulong *)pbVar13 =
               CONCAT17((byte)(uVar15 >> 0x38) | ~bVar26 & 1,
                        CONCAT16((byte)(uVar15 >> 0x30) | ~bVar25 & 1,
                                 CONCAT15((byte)(uVar15 >> 0x28) | ~bVar24 & 1,
                                          CONCAT14((byte)(uVar15 >> 0x20) | ~bVar23 & 1,
                                                   CONCAT13((byte)(uVar15 >> 0x18) | ~bVar22 & 1,
                                                            CONCAT12((byte)(uVar15 >> 0x10) |
                                                                     ~bVar21 & 1,
                                                                     CONCAT11((byte)(uVar15 >> 8) |
                                                                              ~bVar20 & 1,
                                                                              (byte)uVar15 |
                                                                              ~bVar19 & 1)))))));
          puVar10 = puVar10 + 2;
          pbVar13 = pbVar13 + 0x10;
          pbVar7 = pbVar1;
          puVar8 = puVar2;
        } while (lVar14 != 0);
        while (uVar3 != 0) {
LAB_0106bcec:
          uVar4 = uVar4 - 1;
          bVar19 = (byte)*puVar8 & 2;
          if (((byte)*puVar8 & 1) != 0) {
            bVar19 = 1;
          }
          *pbVar7 = bVar19;
          pbVar7 = pbVar7 + 1;
          puVar8 = (ulong *)((long)puVar8 + 1);
          uVar3 = uVar4;
        }
        iVar5 = *(int *)(param_1 + 0xa0);
        sVar6 = param_2[1];
                    /* try { // try from 0106bd10 to 0116bd13 has its CatchHandler @ 0106c188 */
        if (iVar5 != 0) {
          lVar9 = *(long *)(param_1 + 0xb0);
          lVar14 = 0;
          psVar11 = (short *)(*(long *)(param_2 + 0xc) + (long)*param_2 * 2);
          do {
            psVar12 = psVar11;
            if ((*(byte *)(lVar9 + lVar14) >> 3 & 1) != 0) {
              psVar12 = psVar11 + 1;
              *psVar11 = sVar6;
              *param_2 = *param_2 + 1;
            }
            lVar14 = lVar14 + 1;
            sVar6 = sVar6 + 1;
            psVar11 = psVar12;
          } while (iVar5 != (int)lVar14);
          sVar6 = param_2[1];
        }
      }
      param_2[1] = (short)iVar5 + sVar6;
    }
  }
  return;
}

