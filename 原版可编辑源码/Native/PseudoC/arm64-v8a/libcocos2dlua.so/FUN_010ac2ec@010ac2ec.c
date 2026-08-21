
ulong FUN_010ac2ec(long param_1,undefined4 param_2,undefined8 param_3)

{
  bool bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  uint *puVar12;
  byte *pbVar13;
  int *piVar14;
  long lVar15;
  byte *pbVar16;
  ulong *puVar17;
  long *plVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  
  if (*(uint *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x10) * 0x18 + -8) =
         param_2;
  }
  uVar8 = *(uint *)(param_1 + 0x20);
  if (0 < (int)(uVar8 - 1)) {
    lVar21 = (long)(int)(uVar8 - 1);
    lVar22 = (long)(int)(uVar8 - 2);
    uVar20 = uVar8;
    do {
      iVar6 = uVar20 - 2;
      uVar20 = (uint)lVar21;
      if (-1 < iVar6) {
        lVar24 = *(long *)(param_1 + 0x28);
        puVar12 = (uint *)(lVar24 + lVar21 * 0x18);
        pbVar13 = *(byte **)(puVar12 + 2);
        uVar23 = *puVar12;
        lVar15 = lVar22;
LAB_010ac3c0:
        puVar12 = (uint *)(lVar24 + lVar15 * 0x18);
        uVar11 = *puVar12;
        pbVar16 = *(byte **)(puVar12 + 2);
        pbVar2 = pbVar13;
        uVar19 = uVar23;
        if (uVar11 <= uVar23) {
          uVar19 = uVar11;
        }
        for (; 7 < uVar19; uVar19 = uVar19 - 8) {
          if ((*pbVar16 & *pbVar2) != 0) goto LAB_010ac438;
                    /* try { // try from 010ac3f8 to 011ac407 has its CatchHandler @ 010ac548 */
          pbVar16 = pbVar16 + 1;
          pbVar2 = pbVar2 + 1;
        }
                    /* try { // try from 010ac408 to 011ac40f has its CatchHandler @ 010ac4a8 */
                    /* try { // try from 010ac410 to 011ac41f has its CatchHandler @ 010ac498 */
                    /* catch() { ... } // from try @ 010ac2b4 with catch @ 010ac420
                       try { // try from 010ac420 to 011ac563 has its CatchHandler @ 010abeb4 */
                    /* catch() { ... } // from try @ 010ac290 with catch @ 010ac424 */
        if ((uVar19 == 0) ||
           (((uint)(*pbVar16 & *pbVar2) & (0xffU >> (ulong)(uVar19 & 0x1f) ^ 0xffffffff)) == 0))
        goto LAB_010ac428;
LAB_010ac438:
        uVar11 = (uint)lVar15;
        uVar23 = uVar20;
        if ((int)uVar11 <= lVar21) {
          uVar23 = uVar11;
          uVar11 = uVar20;
        }
        if ((((int)uVar11 < (int)uVar8) && ((int)uVar23 < (int)uVar11)) && (-1 < (int)uVar23)) {
          puVar17 = (ulong *)(lVar24 + (long)(int)uVar11 * 0x18);
          uVar8 = (uint)*puVar17;
          if (uVar8 != 0) {
            puVar12 = (uint *)(lVar24 + (long)(int)uVar23 * 0x18);
            uVar19 = *puVar12;
            lVar15 = (long)(int)uVar23;
            if (uVar19 < uVar8) {
              piVar14 = (int *)(lVar24 + lVar15 * 0x18 + 4);
              uVar23 = uVar8 + 7 >> 3;
              local_80 = local_80 & 0xffffffff00000000;
                    /* catch() { ... } // from try @ 010ac1d8 with catch @ 010ac498
                       catch() { ... } // from try @ 010ac410 with catch @ 010ac498 */
              uVar5 = *piVar14 + 7U >> 3;
              if (uVar5 < uVar23) {
                    /* catch() { ... } // from try @ 010ac144 with catch @ 010ac4a8
                       catch() { ... } // from try @ 010ac408 with catch @ 010ac4a8 */
                    /* catch() { ... } // from try @ 010ac20c with catch @ 010ac4ac */
                plVar18 = (long *)(lVar24 + lVar15 * 0x18 + 8);
                uVar4 = uVar23 + 7 & 0x3ffffff8;
                lVar7 = ft_mem_realloc(param_3,1,uVar5,uVar4,*plVar18,&local_80);
                *plVar18 = lVar7;
                if ((int)local_80 != 0) {
                  return local_80 & 0xffffffff;
                }
                *piVar14 = uVar4 << 3;
              }
              else {
                plVar18 = (long *)(lVar24 + lVar15 * 0x18 + 8);
              }
              do {
                if (uVar19 < *puVar12) {
                  lVar7 = (long)((ulong)uVar19 << 0x20) >> 0x23;
                  *(byte *)(*plVar18 + lVar7) =
                       *(byte *)(*plVar18 + lVar7) & ((byte)(0x80 >> (ulong)(uVar19 & 7)) ^ 0xff);
                }
                uVar19 = uVar19 + 1;
                    /* catch() { ... } // from try @ 010ac038 with catch @ 010ac548
                       catch() { ... } // from try @ 010ac3f8 with catch @ 010ac548 */
              } while (uVar8 != uVar19);
            }
            else {
              uVar23 = uVar8 + 7 >> 3;
            }
            if (uVar23 != 0) {
                    /* try { // try from 010ac564 to 011ac74f has its CatchHandler @ 010ac564
                       catch() { ... } // from try @ 010ac564 with catch @ 010ac564
                       catch() { ... } // from try @ 010ac880 with catch @ 010ac564
                       catch() { ... } // from try @ 010ac944 with catch @ 010ac564
                       catch() { ... } // from try @ 010ac9ac with catch @ 010ac564
                       catch() { ... } // from try @ 010aca9c with catch @ 010ac564 */
              pbVar16 = *(byte **)(lVar24 + lVar15 * 0x18 + 8);
              pbVar13 = *(byte **)(lVar24 + (long)(int)uVar11 * 0x18 + 8);
              uVar10 = (ulong)(uVar23 - 1);
              if (0x1f < uVar10 + 1) {
                uVar8 = uVar23 & 0x1f;
                lVar15 = (uVar10 + 1) - (ulong)uVar8;
                if ((lVar15 != 0) &&
                   ((pbVar13 + uVar10 + 1 <= pbVar16 || (pbVar16 + uVar10 + 1 <= pbVar13)))) {
                  pbVar2 = pbVar16 + lVar15;
                  pbVar3 = pbVar13 + lVar15;
                  uVar23 = uVar23 - (int)lVar15;
                  pbVar13 = pbVar13 + 0x10;
                  pbVar16 = pbVar16 + 0x10;
                  do {
                    uVar26 = *(undefined8 *)(pbVar16 + -8);
                    uVar25 = *(undefined8 *)(pbVar16 + -0x10);
                    uVar28 = *(undefined8 *)(pbVar16 + 8);
                    uVar27 = *(undefined8 *)pbVar16;
                    uVar30 = *(undefined8 *)(pbVar13 + -8);
                    uVar29 = *(undefined8 *)(pbVar13 + -0x10);
                    uVar32 = *(undefined8 *)(pbVar13 + 8);
                    uVar31 = *(undefined8 *)pbVar13;
                    pbVar13 = pbVar13 + 0x20;
                    lVar15 = lVar15 + -0x20;
                    *(ulong *)(pbVar16 + -8) =
                         CONCAT17((byte)((ulong)uVar30 >> 0x38) | (byte)((ulong)uVar26 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar30 >> 0x30) |
                                           (byte)((ulong)uVar26 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar30 >> 0x28) |
                                                    (byte)((ulong)uVar26 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar30 >> 0x20) |
                                                             (byte)((ulong)uVar26 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar30 >> 0x18)
                                                                      | (byte)((ulong)uVar26 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar30
                                                                                     >> 0x10) |
                                                                               (byte)((ulong)uVar26
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar30 >> 8) | (byte)((ulong)uVar26 >> 8),
                                                  (byte)uVar30 | (byte)uVar26)))))));
                    *(ulong *)(pbVar16 + -0x10) =
                         CONCAT17((byte)((ulong)uVar29 >> 0x38) | (byte)((ulong)uVar25 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar29 >> 0x30) |
                                           (byte)((ulong)uVar25 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar29 >> 0x28) |
                                                    (byte)((ulong)uVar25 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar29 >> 0x20) |
                                                             (byte)((ulong)uVar25 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar29 >> 0x18)
                                                                      | (byte)((ulong)uVar25 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar29
                                                                                     >> 0x10) |
                                                                               (byte)((ulong)uVar25
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar29 >> 8) | (byte)((ulong)uVar25 >> 8),
                                                  (byte)uVar29 | (byte)uVar25)))))));
                    *(ulong *)(pbVar16 + 8) =
                         CONCAT17((byte)((ulong)uVar32 >> 0x38) | (byte)((ulong)uVar28 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar32 >> 0x30) |
                                           (byte)((ulong)uVar28 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar32 >> 0x28) |
                                                    (byte)((ulong)uVar28 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar32 >> 0x20) |
                                                             (byte)((ulong)uVar28 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar32 >> 0x18)
                                                                      | (byte)((ulong)uVar28 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar32
                                                                                     >> 0x10) |
                                                                               (byte)((ulong)uVar28
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar32 >> 8) | (byte)((ulong)uVar28 >> 8),
                                                  (byte)uVar32 | (byte)uVar28)))))));
                    *(ulong *)pbVar16 =
                         CONCAT17((byte)((ulong)uVar31 >> 0x38) | (byte)((ulong)uVar27 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar31 >> 0x30) |
                                           (byte)((ulong)uVar27 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar31 >> 0x28) |
                                                    (byte)((ulong)uVar27 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar31 >> 0x20) |
                                                             (byte)((ulong)uVar27 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar31 >> 0x18)
                                                                      | (byte)((ulong)uVar27 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar31
                                                                                     >> 0x10) |
                                                                               (byte)((ulong)uVar27
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar31 >> 8) | (byte)((ulong)uVar27 >> 8),
                                                  (byte)uVar31 | (byte)uVar27)))))));
                    pbVar16 = pbVar16 + 0x20;
                  } while (lVar15 != 0);
                  pbVar16 = pbVar2;
                  pbVar13 = pbVar3;
                  if (uVar8 == 0) goto LAB_010ac5c8;
                }
              }
              do {
                uVar23 = uVar23 - 1;
                *pbVar16 = *pbVar13 | *pbVar16;
                pbVar16 = pbVar16 + 1;
                pbVar13 = pbVar13 + 1;
              } while (uVar23 != 0);
            }
          }
LAB_010ac5c8:
          *(uint *)puVar17 = 0;
          *(undefined4 *)(lVar24 + (long)(int)uVar11 * 0x18 + 0x10) = 0;
          iVar9 = *(int *)(param_1 + 0x20);
          iVar6 = iVar9 + ~uVar11;
          if (0 < iVar6) {
            local_70 = puVar17[2];
            uStack_78 = puVar17[1];
            local_80 = *puVar17;
            memmove(puVar17,puVar17 + 3,(long)iVar6 * 0x18);
            puVar17 = puVar17 + (long)iVar6 * 3;
            puVar17[2] = local_70;
            puVar17[1] = uStack_78;
            *puVar17 = local_80;
            iVar9 = *(int *)(param_1 + 0x20);
          }
          uVar8 = iVar9 - 1;
          *(uint *)(param_1 + 0x20) = uVar8;
        }
      }
LAB_010ac630:
      lVar21 = lVar21 + -1;
      lVar22 = lVar22 + -1;
    } while (0 < (int)lVar21);
  }
  return 0;
LAB_010ac428:
                    /* catch() { ... } // from try @ 010ac270 with catch @ 010ac428 */
                    /* catch() { ... } // from try @ 010ac24c with catch @ 010ac42c */
                    /* catch() { ... } // from try @ 010ac2c8 with catch @ 010ac430 */
  bVar1 = lVar15 < 1;
  lVar15 = lVar15 + -1;
  if (bVar1) goto LAB_010ac630;
  goto LAB_010ac3c0;
}

