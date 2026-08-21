
void FT_Stroker_ExportBorder(long param_1,uint param_2,short *param_3)

{
  byte *pbVar1;
  ulong *puVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  short sVar6;
  byte *pbVar7;
  ulong *puVar8;
  short *psVar9;
  short *psVar10;
  ulong *puVar11;
  byte *pbVar12;
  long lVar13;
  ulong uVar14;
  uint *puVar15;
  ulong uVar16;
  ulong uVar17;
  byte bVar18;
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
  
                    /* try { // try from 0106b9d8 to 0116b9df has its CatchHandler @ 0106b9f4 */
                    /* try { // try from 0106b9e0 to 0116ba07 has its CatchHandler @ 0106b9b0 */
                    /* catch() { ... } // from try @ 0106b9d8 with catch @ 0106b9f4 */
  if ((((param_2 < 2) && (param_1 != 0)) && (param_3 != (short *)0x0)) &&
     (*(char *)(param_1 + (ulong)param_2 * 0x30 + 0x98) != '\0')) {
                    /* try { // try from 0106ba08 to 0116bbbf has its CatchHandler @ 0106ba08
                       catch() { ... } // from try @ 0106ba08 with catch @ 0106ba08
                       catch() { ... } // from try @ 0106bc90 with catch @ 0106ba08 */
    param_1 = param_1 + (ulong)param_2 * 0x30;
    puVar15 = (uint *)(param_1 + 0x70);
    memcpy((void *)(*(long *)(param_3 + 4) + (long)param_3[1] * 0x10),*(void **)(param_1 + 0x78),
           (ulong)*puVar15 << 4);
    uVar5 = *puVar15;
    sVar6 = param_3[1];
    if (uVar5 == 0) {
      uVar5 = 0;
    }
    else {
      puVar8 = *(ulong **)(param_1 + 0x80);
      uVar14 = (ulong)(uVar5 - 1);
      pbVar7 = (byte *)(*(long *)(param_3 + 8) + (long)sVar6);
      if (uVar14 + 1 < 0x10) goto LAB_0106ba90;
      uVar3 = uVar5 & 0xf;
      lVar13 = (uVar14 + 1) - (ulong)uVar3;
      if (lVar13 == 0) goto LAB_0106ba90;
      if ((pbVar7 < (byte *)((long)puVar8 + uVar14 + 1)) &&
         (puVar8 < (ulong *)(*(long *)(param_3 + 8) + (long)sVar6 + uVar14 + 1))) goto LAB_0106ba90;
      pbVar1 = pbVar7 + lVar13;
      puVar2 = (ulong *)((long)puVar8 + lVar13);
      uVar5 = uVar5 - (int)lVar13;
      puVar11 = puVar8;
      pbVar12 = pbVar7;
      do {
        uVar17 = puVar11[1];
        uVar14 = *puVar11;
        lVar13 = lVar13 + -0x10;
        bVar18 = -((uVar14 & 1) == 0);
        bVar19 = -((uVar14 & 0x100) == 0);
        bVar20 = -((uVar14 & 0x10000) == 0);
        bVar21 = -((uVar14 & 0x1000000) == 0);
        bVar22 = -((uVar14 & 0x100000000) == 0);
        bVar23 = -((uVar14 & 0x10000000000) == 0);
        bVar24 = -((uVar14 & 0x1000000000000) == 0);
        bVar25 = -((uVar14 & 0x100000000000000) == 0);
        bVar26 = -((uVar17 & 1) == 0);
        bVar27 = -((uVar17 & 0x100) == 0);
        bVar28 = -((uVar17 & 0x10000) == 0);
        bVar29 = -((uVar17 & 0x1000000) == 0);
        bVar30 = -((uVar17 & 0x100000000) == 0);
        bVar31 = -((uVar17 & 0x10000000000) == 0);
        bVar32 = -((uVar17 & 0x1000000000000) == 0);
        bVar33 = -((uVar17 & 0x100000000000000) == 0);
        uVar16 = CONCAT71((int7)(((ulong)CONCAT15((byte)(uVar14 >> 0x38) & bVar25,
                                                  CONCAT14((byte)(uVar14 >> 0x30) & bVar24,
                                                           CONCAT13((byte)(uVar14 >> 0x28) & bVar23,
                                                                    CONCAT12((byte)(uVar14 >> 0x20)
                                                                             & bVar22,CONCAT11((byte
                                                  )(uVar14 >> 0x18) & bVar21,
                                                  (byte)(uVar14 >> 0x10) & bVar20))))) << 0x10) >> 8
                                ),(byte)uVar14 & bVar18) & 0xffffffffffffff02;
        uVar14 = CONCAT62((int6)(uVar16 >> 0x10),CONCAT11((byte)(uVar14 >> 8) & bVar19,(char)uVar16)
                         ) & 0xffffffffffff02ff;
        uVar16 = CONCAT53((int5)(uVar14 >> 0x18),CONCAT12((char)(uVar16 >> 0x10),(short)uVar14)) &
                 0xffffffffff02ffff;
        uVar14 = CONCAT44((int)(uVar16 >> 0x20),CONCAT13((char)(uVar14 >> 0x18),(int3)uVar16)) &
                 0xffffffff02ffffff;
        uVar16 = CONCAT35((int3)(uVar14 >> 0x28),CONCAT14((char)(uVar16 >> 0x20),(int)uVar14)) &
                 0xffffff02ffffffff;
        uVar14 = CONCAT26((short)(uVar16 >> 0x30),CONCAT15((char)(uVar14 >> 0x28),(int5)uVar16)) &
                 0xffff02ffffffffff;
        uVar14 = CONCAT17((char)(uVar14 >> 0x38),CONCAT16((char)(uVar16 >> 0x30),(int6)uVar14)) &
                 0x202ffffffffffff;
        uVar16 = CONCAT71((int7)(((ulong)CONCAT15((byte)(uVar17 >> 0x38) & bVar33,
                                                  CONCAT14((byte)(uVar17 >> 0x30) & bVar32,
                                                           CONCAT13((byte)(uVar17 >> 0x28) & bVar31,
                                                                    CONCAT12((byte)(uVar17 >> 0x20)
                                                                             & bVar30,CONCAT11((byte
                                                  )(uVar17 >> 0x18) & bVar29,
                                                  (byte)(uVar17 >> 0x10) & bVar28))))) << 0x10) >> 8
                                ),(byte)uVar17 & bVar26) & 0xffffffffffffff02;
        uVar17 = CONCAT62((int6)(uVar16 >> 0x10),CONCAT11((byte)(uVar17 >> 8) & bVar27,(char)uVar16)
                         ) & 0xffffffffffff02ff;
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
        *(ulong *)(pbVar12 + 8) =
             CONCAT17((byte)(uVar16 >> 0x38) | ~bVar33 & 1,
                      CONCAT16((byte)(uVar16 >> 0x30) | ~bVar32 & 1,
                               CONCAT15((byte)(uVar16 >> 0x28) | ~bVar31 & 1,
                                        CONCAT14((byte)(uVar16 >> 0x20) | ~bVar30 & 1,
                                                 CONCAT13((byte)(uVar16 >> 0x18) | ~bVar29 & 1,
                                                          CONCAT12((byte)(uVar16 >> 0x10) |
                                                                   ~bVar28 & 1,
                                                                   CONCAT11((byte)(uVar16 >> 8) |
                                                                            ~bVar27 & 1,
                                                                            (byte)uVar16 |
                                                                            ~bVar26 & 1)))))));
        *(ulong *)pbVar12 =
             CONCAT17((byte)(uVar14 >> 0x38) | ~bVar25 & 1,
                      CONCAT16((byte)(uVar14 >> 0x30) | ~bVar24 & 1,
                               CONCAT15((byte)(uVar14 >> 0x28) | ~bVar23 & 1,
                                        CONCAT14((byte)(uVar14 >> 0x20) | ~bVar22 & 1,
                                                 CONCAT13((byte)(uVar14 >> 0x18) | ~bVar21 & 1,
                                                          CONCAT12((byte)(uVar14 >> 0x10) |
                                                                   ~bVar20 & 1,
                                                                   CONCAT11((byte)(uVar14 >> 8) |
                                                                            ~bVar19 & 1,
                                                                            (byte)uVar14 |
                                                                            ~bVar18 & 1)))))));
        puVar11 = puVar11 + 2;
        pbVar12 = pbVar12 + 0x10;
        pbVar7 = pbVar1;
        puVar8 = puVar2;
      } while (lVar13 != 0);
      while (uVar3 != 0) {
LAB_0106ba90:
        uVar5 = uVar5 - 1;
        bVar18 = (byte)*puVar8 & 2;
        if (((byte)*puVar8 & 1) != 0) {
          bVar18 = 1;
        }
        *pbVar7 = bVar18;
        pbVar7 = pbVar7 + 1;
        puVar8 = (ulong *)((long)puVar8 + 1);
        uVar3 = uVar5;
      }
      uVar5 = *puVar15;
      sVar6 = param_3[1];
      if (uVar5 != 0) {
        lVar4 = *(long *)(param_1 + 0x80);
        lVar13 = 0;
        psVar9 = (short *)(*(long *)(param_3 + 0xc) + (long)*param_3 * 2);
        do {
          psVar10 = psVar9;
          if ((*(byte *)(lVar4 + lVar13) >> 3 & 1) != 0) {
            psVar10 = psVar9 + 1;
            *psVar9 = sVar6;
            *param_3 = *param_3 + 1;
          }
          lVar13 = lVar13 + 1;
          sVar6 = sVar6 + 1;
          psVar9 = psVar10;
        } while (uVar5 != (uint)lVar13);
        sVar6 = param_3[1];
      }
    }
    param_3[1] = (short)uVar5 + sVar6;
  }
  return;
}

