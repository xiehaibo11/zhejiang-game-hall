
undefined8 FUN_0113b4cc(long param_1,byte *param_2,long param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  undefined1 *puVar22;
  undefined4 uVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  byte *pbVar27;
  long *plVar28;
  long local_a8;
  
  lVar20 = *(long *)(param_1 + 0x350);
  if (lVar20 == 0) {
    uVar6 = 0;
  }
  else {
    lVar19 = *(long *)(lVar20 + 0x100);
    lVar10 = *(long *)(lVar20 + 0x108);
    local_a8 = *(long *)(lVar20 + 0xf0);
    uVar21 = *(ulong *)(lVar20 + 0x88);
    uVar7 = *(ulong *)(lVar20 + 0x90);
    uVar26 = (uint)*(ushort *)(lVar20 + 0x84);
    uVar9 = (uint)*(ushort *)(lVar20 + 0x82);
    uVar8 = (ulong)*(ushort *)(lVar20 + 0x80);
    puVar11 = *(undefined1 **)(param_1 + 0x388);
    puVar22 = *(undefined1 **)(lVar20 + 0x110);
    uVar24 = (ulong)*(ushort *)(lVar20 + 0xe8);
    puVar15 = puVar11;
    pbVar27 = param_2;
    if ((0 < param_3) && (*(ushort *)(lVar20 + 0xe8) == 0xffff)) {
      lVar18 = uVar7 + uVar8;
      uVar21 = uVar21 << (uVar8 & 0x3f) | 0x100;
      uVar7 = lVar18 - 8;
      puVar15 = puVar11 + 1;
      *puVar11 = (char)((long)uVar21 >> (uVar7 & 0x3f));
      if (0xf < lVar18) {
        puVar15 = puVar11 + 2;
        puVar11[1] = (char)((long)uVar21 >> (lVar18 - 0x10U & 0x3f));
        uVar7 = lVar18 - 0x10U;
      }
      pbVar27 = param_2 + 1;
      uVar24 = (ulong)*param_2;
      lVar10 = lVar10 + uVar8;
      lVar19 = lVar19 + 1;
      param_3 = param_3 + -1;
    }
    uVar23 = (undefined4)uVar24;
    lVar18 = lVar19;
    if (0 < param_3) {
      do {
        uVar25 = (ulong)*pbVar27;
        lVar12 = *(long *)(lVar20 + 0x118);
        uVar3 = (uint)uVar24 ^ (uint)*pbVar27 << 5;
        uVar14 = (ulong)uVar3;
        plVar28 = (long *)(lVar12 + uVar14 * 0x10);
        lVar17 = uVar24 + uVar25 * 0x1000;
        lVar19 = lVar18 + 1;
        if (*plVar28 == lVar17) {
LAB_0113b8a8:
          uVar25 = (ulong)*(ushort *)(lVar12 + uVar14 * 0x10 + 8);
        }
        else {
          if (-1 < *plVar28) {
            iVar4 = 0x2329 - uVar3;
            if (uVar3 == 0) {
              iVar4 = 1;
            }
            do {
              uVar5 = (int)uVar14 - iVar4;
              uVar3 = uVar5 + 0x2329;
              if (-1 < (int)uVar5) {
                uVar3 = uVar5;
              }
              uVar14 = (ulong)uVar3;
              plVar28 = (long *)(lVar12 + (long)(int)uVar3 * 0x10);
              if (*plVar28 == lVar17) {
                uVar14 = (ulong)(int)uVar3;
                goto LAB_0113b8a8;
              }
            } while (-1 < *plVar28);
          }
          puVar11 = puVar15;
          if (puVar22 < puVar15) {
            *(long *)(param_1 + 0x390) = (long)puVar15 - *(long *)(param_1 + 0x368);
            TIFFFlushData1();
            puVar11 = *(undefined1 **)(param_1 + 0x368);
          }
          lVar13 = (long)(int)uVar8;
          lVar12 = uVar7 + lVar13;
          uVar21 = uVar21 << (uVar8 & 0x3f) | uVar24;
          uVar7 = lVar12 - 8;
          puVar15 = puVar11 + 1;
          *puVar11 = (char)((long)uVar21 >> (uVar7 & 0x3f));
          if (0xf < lVar12) {
            puVar15 = puVar11 + 2;
            puVar11[1] = (char)((long)uVar21 >> (lVar12 - 0x10U & 0x3f));
            uVar7 = lVar12 - 0x10U;
          }
          uVar3 = uVar26 + 1;
          *(short *)(plVar28 + 1) = (short)uVar26;
          *plVar28 = lVar17;
          if (uVar3 == 0xffe) {
            puVar16 = *(undefined8 **)(lVar20 + 0x118);
            lVar19 = 0x23190;
            do {
              puVar2 = (undefined8 *)((long)puVar16 + lVar19);
              lVar19 = lVar19 + -0x100;
              puVar2[0x10] = 0xffffffffffffffff;
              *puVar2 = 0xffffffffffffffff;
              puVar2[0x12] = 0xffffffffffffffff;
              puVar2[2] = 0xffffffffffffffff;
              puVar2[0x14] = 0xffffffffffffffff;
              puVar2[4] = 0xffffffffffffffff;
              puVar2[0x16] = 0xffffffffffffffff;
              puVar2[6] = 0xffffffffffffffff;
              puVar2[0x18] = 0xffffffffffffffff;
              puVar2[8] = 0xffffffffffffffff;
              puVar2[0x1a] = 0xffffffffffffffff;
              puVar2[10] = 0xffffffffffffffff;
                    /* catch() { ... } // from try @ 0113b8bc with catch @ 0113b7fc */
              puVar2[0x1c] = 0xffffffffffffffff;
              puVar2[0xc] = 0xffffffffffffffff;
              puVar2[0x1e] = 0xffffffffffffffff;
              puVar2[0xe] = 0xffffffffffffffff;
            } while (lVar19 != -0x70);
LAB_0113b810:
            puVar16[2] = 0xffffffffffffffff;
            puVar16[4] = 0xffffffffffffffff;
            puVar16[6] = 0xffffffffffffffff;
            puVar16[8] = 0xffffffffffffffff;
            puVar16[10] = 0xffffffffffffffff;
            puVar16[0xc] = 0xffffffffffffffff;
            puVar16[0xe] = 0xffffffffffffffff;
            puVar16[0x10] = 0xffffffffffffffff;
            *puVar16 = 0xffffffffffffffff;
            lVar18 = uVar7 + lVar13;
            uVar21 = uVar21 << (uVar8 & 0x3f) | 0x100;
            uVar7 = lVar18 - 8;
            *(undefined8 *)(lVar20 + 0xf8) = 0;
            *puVar15 = (char)((long)uVar21 >> (uVar7 & 0x3f));
            lVar19 = 0;
            lVar10 = lVar13;
            if (lVar18 < 0x10) {
              uVar8 = 9;
              uVar9 = 0x1ff;
              puVar15 = puVar15 + 1;
              uVar26 = 0x102;
            }
            else {
              uVar8 = 9;
              puVar15[1] = (char)((long)uVar21 >> (lVar18 - 0x10U & 0x3f));
              uVar9 = 0x1ff;
              uVar7 = lVar18 - 0x10U;
              puVar15 = puVar15 + 2;
              uVar26 = 0x102;
            }
          }
          else {
            lVar10 = lVar10 + lVar13;
            if ((int)uVar26 < (int)uVar9) {
                    /* try { // try from 0113b898 to 0123b8bb has its CatchHandler @ 0113b8ec */
              uVar26 = uVar3;
              if (local_a8 <= lVar19) {
                local_a8 = lVar18 + 0x2711;
                if (lVar18 < 0x7fffff) {
                  lVar18 = 0;
                  if (lVar10 != 0) {
                    lVar18 = (lVar19 * 0x100) / lVar10;
                  }
                }
                else {
                  lVar17 = lVar10 >> 8;
                  if (lVar17 == 0) {
                    lVar18 = 0x7fffffff;
                  }
                  else {
                    lVar18 = 0;
                    if (lVar17 != 0) {
                      lVar18 = lVar19 / lVar17;
                    }
                  }
                }
                if (lVar18 <= *(long *)(lVar20 + 0xf8)) {
                  puVar16 = *(undefined8 **)(lVar20 + 0x118);
                  lVar19 = 0x23190;
                  do {
                    puVar2 = (undefined8 *)((long)puVar16 + lVar19);
                    lVar19 = lVar19 + -0x100;
                    puVar2[0x10] = 0xffffffffffffffff;
                    *puVar2 = 0xffffffffffffffff;
                    puVar2[0x12] = 0xffffffffffffffff;
                    puVar2[2] = 0xffffffffffffffff;
                    puVar2[0x14] = 0xffffffffffffffff;
                    puVar2[4] = 0xffffffffffffffff;
                    puVar2[0x16] = 0xffffffffffffffff;
                    puVar2[6] = 0xffffffffffffffff;
                    puVar2[0x18] = 0xffffffffffffffff;
                    puVar2[8] = 0xffffffffffffffff;
                    puVar2[0x1a] = 0xffffffffffffffff;
                    puVar2[10] = 0xffffffffffffffff;
                    puVar2[0x1c] = 0xffffffffffffffff;
                    puVar2[0xc] = 0xffffffffffffffff;
                    puVar2[0x1e] = 0xffffffffffffffff;
                    puVar2[0xe] = 0xffffffffffffffff;
                  } while (lVar19 != -0x70);
                  goto LAB_0113b810;
                }
                *(long *)(lVar20 + 0xf8) = lVar18;
              }
            }
            else {
              uVar8 = (ulong)((int)uVar8 + 1);
              uVar9 = (int)(1L << (uVar8 & 0x3f)) - 1;
              uVar26 = uVar3;
            }
          }
        }
        uVar23 = (undefined4)uVar25;
                    /* try { // try from 0113b8bc to 0123b8ff has its CatchHandler @ 0113b7fc */
        bVar1 = 1 < param_3;
        uVar24 = uVar25;
        pbVar27 = pbVar27 + 1;
        param_3 = param_3 + -1;
        lVar18 = lVar19;
      } while (bVar1);
    }
    *(long *)(lVar20 + 0x100) = lVar19;
    *(long *)(lVar20 + 0x108) = lVar10;
    *(undefined4 *)(lVar20 + 0xe8) = uVar23;
    *(ulong *)(lVar20 + 0x88) = uVar21;
    *(ulong *)(lVar20 + 0x90) = uVar7;
    *(short *)(lVar20 + 0x84) = (short)uVar26;
    *(long *)(lVar20 + 0xf0) = local_a8;
    *(short *)(lVar20 + 0x82) = (short)uVar9;
    *(short *)(lVar20 + 0x80) = (short)uVar8;
    *(undefined1 **)(param_1 + 0x388) = puVar15;
                    /* catch() { ... } // from try @ 0113b898 with catch @ 0113b8ec */
    uVar6 = 1;
  }
                    /* catch() { ... } // from try @ 0113ba10 with catch @ 0113b900 */
  return uVar6;
}

