
undefined8 spTriangulator_triangulate(long param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int iVar19;
  long lVar20;
  undefined2 *puVar21;
  ulong uVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  
  uVar16 = *(undefined8 *)(param_1 + 0x10);
  iVar14 = *param_2;
  lVar20 = *(long *)(param_2 + 2);
  iVar15 = iVar14 >> 1;
  spShortArray_clear(uVar16);
  lVar6 = spShortArray_setSize(uVar16,iVar15);
  puVar21 = *(undefined2 **)(lVar6 + 8);
  if (1 < iVar14) {
    uVar7 = (ulong)iVar15;
    uVar22 = uVar7;
    if ((long)uVar7 < 2) {
      uVar22 = 1;
    }
                    /* try { // try from 00d6ca2c to 00e6ca33 has its CatchHandler @ 00d6cb00 */
    if (uVar22 < 0x10) {
                    /* try { // try from 00d6ca34 to 00e6cb13 has its CatchHandler @ 00d6c8b0 */
      uVar9 = 0;
    }
    else {
      uVar18 = 0x7000600050004;
      uVar17 = 0x3000200010000;
      uVar9 = uVar22 & 0x7ffffffffffffff0;
      puVar12 = (undefined8 *)(puVar21 + 8);
      uVar13 = uVar9;
      do {
        sVar23 = (short)((ulong)uVar17 >> 0x10);
        sVar24 = (short)((ulong)uVar17 >> 0x20);
        sVar25 = (short)((ulong)uVar17 >> 0x30);
        sVar26 = (short)((ulong)uVar18 >> 0x10);
        sVar27 = (short)((ulong)uVar18 >> 0x20);
        sVar28 = (short)((ulong)uVar18 >> 0x30);
        puVar12[-1] = uVar18;
        puVar12[-2] = uVar17;
        puVar12[1] = CONCAT26(sVar28 + 8,CONCAT24(sVar27 + 8,CONCAT22(sVar26 + 8,(short)uVar18 + 8))
                             );
        *puVar12 = CONCAT26(sVar25 + 8,CONCAT24(sVar24 + 8,CONCAT22(sVar23 + 8,(short)uVar17 + 8)));
        uVar17 = CONCAT26(sVar25 + 0x10,
                          CONCAT24(sVar24 + 0x10,CONCAT22(sVar23 + 0x10,(short)uVar17 + 0x10)));
        uVar18 = CONCAT26(sVar28 + 0x10,
                          CONCAT24(sVar27 + 0x10,CONCAT22(sVar26 + 0x10,(short)uVar18 + 0x10)));
        uVar13 = uVar13 - 0x10;
        puVar12 = puVar12 + 4;
      } while (uVar13 != 0);
      if (uVar22 == uVar9) goto LAB_00d6ca88;
    }
    do {
      puVar21[uVar9] = (short)uVar9;
      uVar9 = uVar9 + 1;
    } while ((long)uVar9 < (long)uVar7);
  }
LAB_00d6ca88:
  uVar17 = *(undefined8 *)(param_1 + 0x18);
  lVar6 = spIntArray_setSize(uVar17,iVar15);
  lVar6 = *(long *)(lVar6 + 8);
  if (1 < iVar14) {
    lVar8 = 0;
    do {
      sVar23 = puVar21[lVar8];
      iVar2 = iVar15 + -1 + (int)lVar8;
      iVar3 = 0;
      if (iVar15 != 0) {
        iVar3 = iVar2 / iVar15;
      }
      lVar1 = lVar8 + 1;
      iVar10 = 0;
      if (iVar15 != 0) {
        iVar10 = (int)lVar1 / iVar15;
      }
      sVar24 = puVar21[iVar2 - iVar3 * iVar15];
      sVar25 = puVar21[(uint)((int)lVar1 - iVar10 * iVar15)];
      fVar29 = *(float *)(lVar20 + (long)(int)((int)sVar23 << 1 | 1) * 4);
      fVar30 = *(float *)(lVar20 + (long)(int)((int)sVar25 << 1 | 1) * 4);
                    /* catch() { ... } // from try @ 00d6ca2c with catch @ 00d6cb00 */
      fVar5 = *(float *)(lVar20 + (long)(int)((int)sVar24 << 1 | 1) * 4);
      *(uint *)(lVar6 + lVar8 * 4) =
           (uint)((fVar29 - fVar5) *
                  *(float *)(lVar20 + (-((ulong)(long)sVar25 >> 0x1f & 1) & 0xfffffff800000000 |
                                      ((long)sVar25 & 0xffffffffU) << 3)) +
                  *(float *)(lVar20 + (-((ulong)(long)sVar24 >> 0x1f & 1) & 0xfffffff800000000 |
                                      ((long)sVar24 & 0xffffffffU) << 3)) * (fVar30 - fVar29) +
                  *(float *)(lVar20 + (-((ulong)(long)sVar23 >> 0x1f & 1) & 0xfffffff800000000 |
                                      ((long)sVar23 & 0xffffffffU) << 3)) * (fVar5 - fVar30) < 0.0);
      lVar8 = lVar1;
    } while (lVar1 < iVar15);
  }
  uVar18 = *(undefined8 *)(param_1 + 0x20);
  spShortArray_clear(uVar18);
  iVar2 = iVar15;
  if (iVar15 < 3) {
    iVar2 = 2;
  }
  spShortArray_ensureCapacity(uVar18,iVar2 * 4 + -8);
  if (iVar14 < 8) {
LAB_00d6ce98:
    if (iVar15 == 3) {
      spShortArray_add(uVar18,puVar21[2]);
      spShortArray_add(uVar18,*puVar21);
      spShortArray_add(uVar18,puVar21[1]);
    }
                    /* try { // try from 00d6cecc to 00e6d047 has its CatchHandler @ 00d6cecc
                       catch() { ... } // from try @ 00d6cecc with catch @ 00d6cecc
                       catch() { ... } // from try @ 00d6d050 with catch @ 00d6cecc */
    return uVar18;
  }
  iVar14 = iVar15;
LAB_00d6cd18:
  iVar15 = iVar14 + -1;
  iVar3 = 0;
  iVar2 = iVar15;
  iVar10 = 1;
  do {
    iVar19 = iVar3;
    iVar3 = *(int *)(lVar6 + (long)iVar19 * 4);
    uVar22 = (ulong)iVar19;
    if (iVar3 == 0) {
      iVar11 = 0;
      if (iVar14 != 0) {
        iVar11 = (iVar10 + 1) / iVar14;
      }
      iVar11 = (iVar10 + 1) - iVar11 * iVar14;
      if (iVar11 != iVar2) {
        sVar23 = puVar21[iVar2];
        sVar24 = puVar21[uVar22];
        sVar25 = puVar21[iVar10];
        fVar29 = *(float *)(lVar20 + (-((ulong)(long)sVar23 >> 0x1f & 1) & 0xfffffff800000000 |
                                     ((long)sVar23 & 0xffffffffU) << 3));
        fVar30 = *(float *)(lVar20 + (long)(int)((int)sVar23 << 1 | 1) * 4);
        fVar31 = *(float *)(lVar20 + (long)(int)((int)sVar25 << 1 | 1) * 4);
        fVar5 = *(float *)(lVar20 + (long)(int)((int)sVar24 << 1 | 1) * 4);
        fVar32 = *(float *)(lVar20 + (-((ulong)(long)sVar24 >> 0x1f & 1) & 0xfffffff800000000 |
                                     ((long)sVar24 & 0xffffffffU) << 3));
        fVar33 = *(float *)(lVar20 + (-((ulong)(long)sVar25 >> 0x1f & 1) & 0xfffffff800000000 |
                                     ((long)sVar25 & 0xffffffffU) << 3));
        do {
          if (*(int *)(lVar6 + (long)iVar11 * 4) != 0) {
            sVar23 = puVar21[iVar11];
            fVar35 = *(float *)(lVar20 + (long)(int)((int)sVar23 << 1 | 1) * 4);
            fVar34 = *(float *)(lVar20 + (-((ulong)(long)sVar23 >> 0x1f & 1) & 0xfffffff800000000 |
                                         ((long)sVar23 & 0xffffffffU) << 3));
            if (((0.0 <= (fVar30 - fVar31) * fVar34 +
                         fVar33 * (fVar35 - fVar30) + fVar29 * (fVar31 - fVar35)) &&
                (0.0 <= (fVar5 - fVar30) * fVar34 +
                        fVar29 * (fVar35 - fVar5) + fVar32 * (fVar30 - fVar35))) &&
               (0.0 <= (fVar31 - fVar5) * fVar34 +
                       fVar32 * (fVar35 - fVar31) + fVar33 * (fVar5 - fVar35))) goto LAB_00d6cd3c;
          }
          iVar4 = 0;
          if (iVar14 != 0) {
            iVar4 = (iVar11 + 1) / iVar14;
          }
          iVar11 = (iVar11 + 1) - iVar4 * iVar14;
          if (iVar11 == iVar2) break;
        } while( true );
      }
      goto LAB_00d6cb8c;
    }
LAB_00d6cd3c:
    if (iVar10 == 0) break;
    iVar11 = 0;
    if (iVar14 != 0) {
      iVar11 = (iVar10 + 1) / iVar14;
    }
    iVar3 = iVar10;
    iVar2 = iVar19;
    iVar10 = (iVar10 + 1) - iVar11 * iVar14;
  } while( true );
joined_r0x00d6ce6c:
  if (iVar3 == 0) goto LAB_00d6cb88;
  if ((long)(uVar22 - 1) < 1) {
    uVar22 = (ulong)((int)uVar22 - 1);
    goto LAB_00d6cb88;
  }
  iVar3 = *(int *)(lVar6 + -4 + uVar22 * 4);
  uVar22 = uVar22 - 1;
  goto joined_r0x00d6ce6c;
LAB_00d6cb88:
  iVar19 = (int)uVar22;
  uVar22 = (ulong)iVar19;
LAB_00d6cb8c:
  iVar2 = 0;
  if (iVar14 != 0) {
    iVar2 = (iVar15 + iVar19) / iVar14;
  }
  spShortArray_add(uVar18,puVar21[(iVar15 + iVar19) - iVar2 * iVar14]);
  spShortArray_add(uVar18,puVar21[uVar22]);
  iVar2 = 0;
  if (iVar14 != 0) {
    iVar2 = (iVar19 + 1) / iVar14;
  }
  spShortArray_add(uVar18,puVar21[(iVar19 + 1) - iVar2 * iVar14]);
  spShortArray_removeAt(uVar16,iVar19);
  spIntArray_removeAt(uVar17,iVar19);
  iVar14 = iVar14 + -2;
  iVar2 = 0;
  if (iVar15 != 0) {
    iVar2 = (iVar14 + iVar19) / iVar15;
  }
  iVar2 = (iVar14 + iVar19) - iVar2 * iVar15;
  iVar3 = 0;
  if (iVar15 != 0) {
    iVar3 = (iVar14 + iVar2) / iVar15;
  }
  sVar23 = puVar21[iVar2];
  iVar10 = 0;
  if (iVar15 != 0) {
    iVar10 = (iVar2 + 1) / iVar15;
  }
  sVar24 = puVar21[(iVar14 + iVar2) - iVar3 * iVar15];
  sVar25 = puVar21[(iVar2 + 1) - iVar10 * iVar15];
  fVar29 = *(float *)(lVar20 + (long)(int)((int)sVar23 << 1 | 1) * 4);
  fVar5 = *(float *)(lVar20 + (long)(int)((int)sVar24 << 1 | 1) * 4);
  fVar30 = *(float *)(lVar20 + (long)(int)((int)sVar25 << 1 | 1) * 4);
  iVar3 = 0;
  if (iVar19 != iVar15) {
    iVar3 = iVar19;
  }
  *(uint *)(lVar6 + (long)iVar2 * 4) =
       (uint)((fVar29 - fVar5) *
              *(float *)(lVar20 + (-((ulong)(long)sVar25 >> 0x1f & 1) & 0xfffffff800000000 |
                                  ((long)sVar25 & 0xffffffffU) << 3)) +
              *(float *)(lVar20 + (-((ulong)(long)sVar24 >> 0x1f & 1) & 0xfffffff800000000 |
                                  ((long)sVar24 & 0xffffffffU) << 3)) * (fVar30 - fVar29) +
              *(float *)(lVar20 + (-((ulong)(long)sVar23 >> 0x1f & 1) & 0xfffffff800000000 |
                                  ((long)sVar23 & 0xffffffffU) << 3)) * (fVar5 - fVar30) < 0.0);
  iVar2 = 0;
  if (iVar15 != 0) {
    iVar2 = (iVar14 + iVar3) / iVar15;
  }
  iVar10 = 0;
  if (iVar15 != 0) {
    iVar10 = (iVar3 + 1) / iVar15;
  }
  sVar23 = puVar21[(iVar14 + iVar3) - iVar2 * iVar15];
  sVar24 = puVar21[iVar3];
  sVar25 = puVar21[(iVar3 + 1) - iVar10 * iVar15];
  fVar29 = *(float *)(lVar20 + (long)(int)((int)sVar24 << 1 | 1) * 4);
  fVar30 = *(float *)(lVar20 + (long)(int)((int)sVar25 << 1 | 1) * 4);
  fVar5 = *(float *)(lVar20 + (long)(int)((int)sVar23 << 1 | 1) * 4);
  *(uint *)(lVar6 + (long)iVar3 * 4) =
       (uint)((fVar29 - fVar5) *
              *(float *)(lVar20 + (-((ulong)(long)sVar25 >> 0x1f & 1) & 0xfffffff800000000 |
                                  ((long)sVar25 & 0xffffffffU) << 3)) +
              *(float *)(lVar20 + (-((ulong)(long)sVar23 >> 0x1f & 1) & 0xfffffff800000000 |
                                  ((long)sVar23 & 0xffffffffU) << 3)) * (fVar30 - fVar29) +
              *(float *)(lVar20 + (-((ulong)(long)sVar24 >> 0x1f & 1) & 0xfffffff800000000 |
                                  ((long)sVar24 & 0xffffffffU) << 3)) * (fVar5 - fVar30) < 0.0);
  iVar14 = iVar15;
  if (iVar15 < 4) goto LAB_00d6ce98;
  goto LAB_00d6cd18;
}

