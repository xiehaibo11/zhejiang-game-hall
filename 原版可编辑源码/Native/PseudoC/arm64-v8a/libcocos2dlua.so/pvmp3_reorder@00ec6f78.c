
void pvmp3_reorder(long param_1,long param_2,int *param_3,int *param_4,undefined4 *param_5)

{
  short *psVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  undefined4 *puVar20;
  long lVar21;
  int iVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined4 *puVar27;
  long lVar28;
  int iVar29;
  long lVar30;
  ulong uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  
                    /* try { // try from 00ec6f7c to 00fc6fb3 has its CatchHandler @ 00ec7000 */
  if ((*(int *)(param_2 + 0x10) != 0) && (*(int *)(param_2 + 0x14) == 2)) {
                    /* try { // try from 00ec6fb4 to 00fc7023 has its CatchHandler @ 00ec6f24 */
    lVar24 = param_1 + 4;
    bVar12 = *(int *)(param_2 + 0x18) != 0;
    iVar22 = 0;
    if (bVar12) {
      iVar22 = 0x24;
    }
                    /* catch() { ... } // from try @ 00ec6f48 with catch @ 00ec6ff8 */
                    /* catch() { ... } // from try @ 00ec6f7c with catch @ 00ec7000 */
    uVar14 = 0;
    if (bVar12) {
      uVar14 = 3;
    }
    lVar21 = (long)(*param_4 * 3 + param_4[4]) * 0x4a + 0x1435d30;
    iVar29 = iVar22;
    do {
      psVar1 = (short *)(lVar21 + (ulong)(uVar14 + 1) * 2);
      sVar6 = *psVar1;
      sVar7 = *(short *)(lVar21 + (ulong)uVar14 * 2);
                    /* try { // try from 00ec7064 to 00fc709b has its CatchHandler @ 00ec70a8 */
      iVar19 = (int)sVar6;
      iVar9 = iVar19 - sVar7;
      iVar8 = iVar9 * 2;
      iVar18 = (int)sVar7;
      if (*param_3 <= sVar6 * 3) {
        lVar24 = (long)(iVar9 * 3);
        if (iVar9 < 1) goto LAB_00ec73b0;
        lVar21 = lVar24;
        if (lVar24 < 4) {
          lVar21 = 3;
        }
        uVar2 = (lVar21 - 1U) / 3 + 1;
        lVar23 = (long)iVar29;
        lVar30 = (long)iVar8;
        lVar21 = 0;
        if (uVar2 < 4) goto LAB_00ec736c;
        lVar26 = lVar24;
        if (lVar24 < 4) {
          lVar26 = 3;
        }
        uVar15 = (lVar26 - 1U) / 3;
        lVar26 = uVar15 + lVar23;
        puVar17 = param_5 + uVar15 * 3 + 3;
                    /* catch() { ... } // from try @ 00ec7358 with catch @ 00ec72bc */
                    /* try { // try from 00ec72ec to 00fc72f3 has its CatchHandler @ 00ec73a8 */
        if (((param_5 < (undefined4 *)(param_1 + (lVar26 + lVar30) * 4 + 4U) &&
              (undefined4 *)(param_1 + (lVar23 + lVar30) * 4) < puVar17) ||
            (param_5 < (undefined4 *)(param_1 + (lVar26 + iVar9) * 4 + 4U) &&
             (undefined4 *)(param_1 + (lVar23 + iVar9) * 4) < puVar17)) ||
           (param_5 < (undefined4 *)(param_1 + lVar26 * 4 + 4U) &&
            (undefined4 *)(param_1 + lVar23 * 4) < puVar17)) goto LAB_00ec736c;
        uVar31 = uVar2 & 0x7ffffffffffffffc;
        lVar28 = lVar23 + lVar30;
        iVar8 = iVar29 + iVar19;
        lVar26 = lVar23 * 4;
                    /* try { // try from 00ec7320 to 00fc7357 has its CatchHandler @ 00ec73b0 */
        lVar23 = uVar31 + lVar23;
        lVar21 = uVar31 * 3;
        iVar29 = iVar29 + (int)uVar31;
        uVar14 = iVar8 - sVar7;
        puVar13 = (undefined8 *)(param_1 + lVar28 * 4);
        uVar15 = uVar31;
        puVar17 = param_5;
        puVar16 = (undefined8 *)(param_1 + lVar26);
        do {
          uVar33 = puVar16[1];
          uVar32 = *puVar16;
          puVar11 = (undefined8 *)
                    (param_1 + (-(ulong)(uVar14 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar14 << 2))
          ;
          uVar35 = puVar11[1];
          uVar34 = *puVar11;
          uVar37 = puVar13[1];
          uVar36 = *puVar13;
          uVar15 = uVar15 - 4;
          uVar14 = uVar14 + 4;
          *puVar17 = (int)uVar32;
          puVar17[1] = (int)uVar34;
          puVar17[2] = (int)uVar36;
          puVar17[3] = (int)((ulong)uVar32 >> 0x20);
          puVar17[4] = (int)((ulong)uVar34 >> 0x20);
          puVar17[5] = (int)((ulong)uVar36 >> 0x20);
          puVar17[6] = (int)uVar33;
          puVar17[7] = (int)uVar35;
          puVar17[8] = (int)uVar37;
          puVar17[9] = (int)((ulong)uVar33 >> 0x20);
          puVar17[10] = (int)((ulong)uVar35 >> 0x20);
          puVar17[0xb] = (int)((ulong)uVar37 >> 0x20);
          puVar17 = puVar17 + 0xc;
          puVar13 = puVar13 + 2;
          puVar16 = puVar16 + 2;
                    /* try { // try from 00ec7358 to 00fc73d3 has its CatchHandler @ 00ec72bc */
        } while (uVar15 != 0);
        if (uVar2 != uVar31) {
LAB_00ec736c:
          iVar18 = (iVar29 + iVar19) - iVar18;
          puVar17 = param_5 + lVar21 + 1;
          puVar20 = (undefined4 *)(param_1 + (lVar23 + lVar30) * 4);
          puVar27 = (undefined4 *)(param_1 + lVar23 * 4);
          do {
            uVar5 = *(undefined4 *)(param_1 + (long)iVar18 * 4);
            uVar4 = *puVar20;
            lVar21 = lVar21 + 3;
            iVar18 = iVar18 + 1;
            puVar17[-1] = *puVar27;
            *puVar17 = uVar5;
            puVar17[1] = uVar4;
                    /* catch() { ... } // from try @ 00ec72ec with catch @ 00ec73a8 */
            puVar17 = puVar17 + 3;
            puVar20 = puVar20 + 1;
            puVar27 = puVar27 + 1;
          } while (lVar21 < lVar24);
        }
LAB_00ec73b0:
                    /* catch() { ... } // from try @ 00ec7320 with catch @ 00ec73b0 */
        memcpy((void *)(param_1 + (long)(short)iVar22 * 4),param_5,lVar24 << 2);
        *param_3 = *psVar1 * 3;
        return;
      }
      lVar23 = (long)(iVar9 * 3);
      if (0 < iVar9) {
        lVar30 = lVar23;
        if (lVar23 < 4) {
          lVar30 = 3;
        }
                    /* try { // try from 00ec709c to 00fc70bb has its CatchHandler @ 00ec7024 */
        uVar2 = (lVar30 - 1U) / 3 + 1;
        lVar30 = (long)iVar29;
                    /* catch() { ... } // from try @ 00ec7064 with catch @ 00ec70a8 */
        lVar26 = (long)iVar8;
        if (uVar2 < 4) {
          lVar25 = 0;
LAB_00ec71e0:
          iVar18 = (iVar29 + sVar6) - iVar18;
          puVar17 = param_5 + lVar25 + 1;
          do {
            lVar28 = lVar30 * 4;
            uVar4 = *(undefined4 *)(param_1 + (long)iVar18 * 4);
            uVar5 = *(undefined4 *)(param_1 + lVar26 * 4 + lVar28);
            lVar25 = lVar25 + 3;
            lVar30 = lVar30 + 1;
            iVar18 = iVar18 + 1;
            puVar17[-1] = *(undefined4 *)(param_1 + lVar28);
            *puVar17 = uVar4;
            puVar17[1] = uVar5;
            puVar17 = puVar17 + 3;
          } while (lVar25 < lVar23);
        }
        else {
          lVar28 = lVar23;
          if (lVar23 < 4) {
            lVar28 = 3;
          }
          uVar10 = (iVar29 + iVar19) - iVar18;
          lVar25 = 0;
          if (((int)(uVar10 + (int)((lVar28 - 1U) / 3)) < (int)uVar10) || (2 < lVar28 - 1U >> 0x20))
          goto LAB_00ec71e0;
          lVar28 = lVar23;
          if (lVar23 < 4) {
            lVar28 = 3;
          }
          iVar19 = (iVar29 + sVar6) - iVar18;
          uVar15 = (lVar28 - 1U) / 3;
          puVar17 = param_5 + uVar15 * 3 + 3;
          lVar25 = 0;
          if (((param_5 < (undefined4 *)(lVar24 + (uVar15 + lVar30 + lVar26) * 4) &&
                (undefined4 *)(param_1 + (lVar30 + lVar26) * 4) < puVar17) ||
              (param_5 < (undefined4 *)(lVar24 + (uVar15 + (long)iVar19) * 4) &&
               (undefined4 *)(param_1 + (long)iVar19 * 4) < puVar17)) ||
             (param_5 < (undefined4 *)(lVar24 + (uVar15 + lVar30) * 4) &&
              (undefined4 *)(param_1 + lVar30 * 4) < puVar17)) goto LAB_00ec71e0;
          uVar31 = uVar2 & 0x7ffffffffffffffc;
          lVar3 = lVar30 + lVar26;
          lVar28 = lVar30 * 4;
          lVar30 = uVar31 + lVar30;
          lVar25 = uVar31 * 3;
          iVar29 = iVar29 + (int)uVar31;
          puVar13 = (undefined8 *)(param_1 + lVar28);
          puVar16 = (undefined8 *)(param_1 + lVar3 * 4);
          uVar15 = uVar31;
          puVar17 = param_5;
          do {
            uVar33 = puVar13[1];
            uVar32 = *puVar13;
            puVar11 = (undefined8 *)
                      (param_1 +
                      (-(ulong)(uVar10 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar10 << 2));
            uVar35 = puVar11[1];
            uVar34 = *puVar11;
            uVar37 = puVar16[1];
            uVar36 = *puVar16;
            uVar15 = uVar15 - 4;
            uVar10 = uVar10 + 4;
            *puVar17 = (int)uVar32;
            puVar17[1] = (int)uVar34;
            puVar17[2] = (int)uVar36;
            puVar17[3] = (int)((ulong)uVar32 >> 0x20);
            puVar17[4] = (int)((ulong)uVar34 >> 0x20);
            puVar17[5] = (int)((ulong)uVar36 >> 0x20);
            puVar17[6] = (int)uVar33;
            puVar17[7] = (int)uVar35;
            puVar17[8] = (int)uVar37;
            puVar17[9] = (int)((ulong)uVar33 >> 0x20);
            puVar17[10] = (int)((ulong)uVar35 >> 0x20);
            puVar17[0xb] = (int)((ulong)uVar37 >> 0x20);
            puVar17 = puVar17 + 0xc;
            puVar13 = puVar13 + 2;
            puVar16 = puVar16 + 2;
          } while (uVar15 != 0);
          if (uVar2 != uVar31) goto LAB_00ec71e0;
        }
        iVar29 = (int)lVar30;
      }
                    /* try { // try from 00ec7024 to 00fc7063 has its CatchHandler @ 00ec7024
                       catch() { ... } // from try @ 00ec7024 with catch @ 00ec7024
                       catch() { ... } // from try @ 00ec709c with catch @ 00ec7024 */
      iVar29 = iVar29 + iVar8;
      memcpy((void *)(param_1 + (long)(short)iVar22 * 4),param_5,lVar23 << 2);
      uVar14 = uVar14 + 1;
      iVar22 = iVar9 * 3 + iVar22;
    } while (uVar14 < 0xd);
  }
  return;
}

