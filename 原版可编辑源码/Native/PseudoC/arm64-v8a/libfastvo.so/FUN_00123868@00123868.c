
void FUN_00123868(long param_1)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  undefined1 (*pauVar5) [16];
  int iVar6;
  int iVar7;
  uint *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined1 (*pauVar11) [16];
  ulong uVar12;
  undefined4 *puVar13;
  int *piVar14;
  undefined1 *puVar15;
  uint *puVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  int *piVar20;
  undefined1 (*pauVar21) [16];
  undefined8 *puVar22;
  long lVar23;
  undefined1 (*pauVar24) [16];
  undefined8 *puVar25;
  undefined1 (*pauVar26) [16];
  ulong *puVar27;
  uint *puVar28;
  ulong uVar29;
  undefined1 (*pauVar30) [16];
  undefined1 auVar31 [16];
  uint uVar32;
  undefined8 uVar33;
  uint uVar34;
  undefined8 uVar35;
  uint uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  uint uVar39;
  uint6 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  uint6 uVar44;
  uint uVar45;
  uint6 uVar46;
  uint uVar47;
  uint6 uVar48;
  undefined8 uVar49;
  
  uVar32 = *(uint *)(param_1 + 4);
  uVar4 = (ulong)uVar32;
  pauVar5 = *(undefined1 (**) [16])(param_1 + 0xa8);
  puVar8 = *(uint **)(param_1 + 0x58);
  uVar12 = (ulong)(uVar32 - 1);
  if (2 < (int)uVar32) {
    if (uVar12 - 1 < 4) {
LAB_001238b4:
      lVar23 = 1;
    }
    else {
      if ((*pauVar5 + 4 < puVar8 + uVar12 + 1) && (puVar8 < *pauVar5 + uVar12 * 4))
      goto LAB_001238b4;
      uVar34 = uVar32 + 2 & 3;
      lVar17 = (uVar12 - 1) - (ulong)uVar34;
      lVar23 = lVar17 + 1;
      puVar16 = (uint *)(*pauVar5 + 4);
      puVar28 = puVar8 + 2;
      do {
        uVar35 = *(undefined8 *)(puVar16 + 2);
        uVar33 = *(undefined8 *)puVar16;
        uVar38 = *(undefined8 *)puVar28;
        uVar37 = *(undefined8 *)(puVar28 + -2);
        uVar42 = *(undefined8 *)(puVar28 + 1);
        uVar41 = *(undefined8 *)(puVar28 + -1);
        uVar49 = *(undefined8 *)(puVar28 + 2);
        uVar43 = *(undefined8 *)puVar28;
        uVar36 = (uint)((ushort)uVar33 & 0x7fff);
        uVar40 = CONCAT15((char)((ulong)uVar35 >> 0x28),
                          CONCAT14((char)((ulong)uVar35 >> 0x20),(uint)((ushort)uVar35 & 0x7fff))) &
                 0x7fff00ffffff;
        uVar39 = (uint)((ushort)uVar37 & 0x7fff);
        uVar44 = CONCAT15((char)((ulong)uVar38 >> 0x28),
                          CONCAT14((char)((ulong)uVar38 >> 0x20),(uint)((ushort)uVar38 & 0x7fff))) &
                 0x7fff00ffffff;
        uVar45 = (uint)((ushort)uVar41 & 0x7fff);
        uVar46 = CONCAT15((char)((ulong)uVar42 >> 0x28),
                          CONCAT14((char)((ulong)uVar42 >> 0x20),(uint)((ushort)uVar42 & 0x7fff))) &
                 0x7fff00ffffff;
        uVar47 = (uint)((ushort)uVar43 & 0x7fff);
        uVar48 = CONCAT15((char)((ulong)uVar49 >> 0x28),
                          CONCAT14((char)((ulong)uVar49 >> 0x20),(uint)((ushort)uVar49 & 0x7fff))) &
                 0x7fff00ffffff;
        lVar17 = lVar17 + -4;
        *(ulong *)(puVar16 + 2) =
             CONCAT44((((int)((ulong)uVar35 >> 0x20) << 1) >> 0x10) * 0x6666 +
                      ((uint)(ushort)(uVar40 >> 0x20) * 0x6666 >> 0xf) +
                      ((uint)(ushort)(uVar44 >> 0x20) * 0x666 >> 0xf) +
                      ((uint)(ushort)(uVar46 >> 0x20) * 0xccd >> 0xf) +
                      (((int)((ulong)uVar42 >> 0x20) << 1) >> 0x10) * 0xccd +
                      ((uint)(ushort)(uVar48 >> 0x20) * 0x666 >> 0xf) +
                      ((((int)((ulong)uVar49 >> 0x20) << 1) >> 0x10) +
                      (((int)((ulong)uVar38 >> 0x20) << 1) >> 0x10)) * 0x666,
                      (((int)uVar35 << 1) >> 0x10) * 0x6666 + ((uint)((int)uVar40 * 0x6666) >> 0xf)
                      + ((uint)((int)uVar44 * 0x666) >> 0xf) + ((uint)((int)uVar46 * 0xccd) >> 0xf)
                      + (((int)uVar42 << 1) >> 0x10) * 0xccd + ((uint)((int)uVar48 * 0x666) >> 0xf)
                      + ((((int)uVar49 << 1) >> 0x10) + (((int)uVar38 << 1) >> 0x10)) * 0x666);
        *(ulong *)puVar16 =
             CONCAT44((((int)((ulong)uVar33 >> 0x20) << 1) >> 0x10) * 0x6666 +
                      ((uint)((ushort)(CONCAT15((char)((ulong)uVar33 >> 0x28),
                                                CONCAT14((char)((ulong)uVar33 >> 0x20),uVar36)) >>
                                      0x20) & 0x7fff) * 0x6666 >> 0xf) +
                      ((uint)((ushort)(CONCAT15((char)((ulong)uVar37 >> 0x28),
                                                CONCAT14((char)((ulong)uVar37 >> 0x20),uVar39)) >>
                                      0x20) & 0x7fff) * 0x666 >> 0xf) +
                      ((uint)((ushort)(CONCAT15((char)((ulong)uVar41 >> 0x28),
                                                CONCAT14((char)((ulong)uVar41 >> 0x20),uVar45)) >>
                                      0x20) & 0x7fff) * 0xccd >> 0xf) +
                      (((int)((ulong)uVar41 >> 0x20) << 1) >> 0x10) * 0xccd +
                      ((uint)((ushort)(CONCAT15((char)((ulong)uVar43 >> 0x28),
                                                CONCAT14((char)((ulong)uVar43 >> 0x20),uVar47)) >>
                                      0x20) & 0x7fff) * 0x666 >> 0xf) +
                      ((((int)((ulong)uVar43 >> 0x20) << 1) >> 0x10) +
                      (((int)((ulong)uVar37 >> 0x20) << 1) >> 0x10)) * 0x666,
                      (((int)uVar33 << 1) >> 0x10) * 0x6666 + (uVar36 * 0x6666 >> 0xf) +
                      (uVar39 * 0x666 >> 0xf) + (uVar45 * 0xccd >> 0xf) +
                      (((int)uVar41 << 1) >> 0x10) * 0xccd + (uVar47 * 0x666 >> 0xf) +
                      ((((int)uVar43 << 1) >> 0x10) + (((int)uVar37 << 1) >> 0x10)) * 0x666);
        puVar16 = puVar16 + 4;
        puVar28 = puVar28 + 4;
      } while (lVar17 != 0);
      if (uVar34 == 0) goto LAB_0012393c;
    }
    lVar17 = uVar12 - lVar23;
    puVar16 = puVar8 + lVar23;
    puVar28 = (uint *)(*pauVar5 + lVar23 * 4);
    do {
      puVar1 = puVar16 + -1;
      uVar34 = *puVar16;
      puVar16 = puVar16 + 1;
      lVar17 = lVar17 + -1;
      *puVar28 = ((int)(*puVar28 << 1) >> 0x10) * 0x6666 + ((*puVar28 & 0x7fff) * 0x6666 >> 0xf) +
                 ((*puVar1 & 0x7fff) * 0x666 >> 0xf) + ((uVar34 & 0x7fff) * 0xccd >> 0xf) +
                 ((int)(uVar34 << 1) >> 0x10) * 0xccd + ((*puVar16 & 0x7fff) * 0x666 >> 0xf) +
                 (((int)(*puVar16 << 1) >> 0x10) + ((int)(*puVar1 << 1) >> 0x10)) * 0x666;
      puVar28 = puVar28 + 1;
    } while (lVar17 != 0);
  }
LAB_0012393c:
  uVar12 = -(ulong)(uVar32 - 1 >> 0x1f) & 0xfffffffc00000000 | uVar12 << 2;
  *(uint *)*pauVar5 =
       ((int)(*(uint *)*pauVar5 << 1) >> 0x10) * 0x6666 +
       ((*(uint *)*pauVar5 & 0x7fff) * 0x6666 >> 0xf) + ((*puVar8 & 0x7fff) * 0x199a >> 0xf) +
       ((int)(*puVar8 << 1) >> 0x10) * 0x199a;
  *(uint *)(*pauVar5 + uVar12) =
       ((int)(*(uint *)(*pauVar5 + uVar12) << 1) >> 0x10) * 0x6666 +
       ((*(uint *)(*pauVar5 + uVar12) & 0x7fff) * 0x6666 >> 0xf) +
       ((*(uint *)((long)puVar8 + uVar12) & 0x7fff) * 0x199a >> 0xf) +
       ((int)(*(uint *)((long)puVar8 + uVar12) << 1) >> 0x10) * 0x199a;
  iVar6 = *(int *)(param_1 + 0xf0);
  if (iVar6 == 1) {
    if (0 < (int)uVar32) {
      uVar12 = *(ulong *)(param_1 + 0xb0);
      uVar19 = *(ulong *)(param_1 + 0xb8);
      if ((uVar32 < 8) || ((uVar19 < uVar12 + uVar4 * 4 && (uVar12 < uVar19 + uVar4 * 4)))) {
        uVar18 = 0;
LAB_001239f0:
        lVar23 = uVar4 - uVar18;
        puVar9 = (undefined4 *)(uVar19 + uVar18 * 4);
        puVar13 = (undefined4 *)(uVar12 + uVar18 * 4);
        do {
          *puVar9 = 0;
          lVar23 = lVar23 + -1;
          *puVar13 = 0;
          puVar9 = puVar9 + 1;
          puVar13 = puVar13 + 1;
        } while (lVar23 != 0);
      }
      else {
        uVar18 = uVar4 & 0xfffffff8;
        puVar22 = (undefined8 *)(uVar19 + 0x10);
        puVar25 = (undefined8 *)(uVar12 + 0x10);
        uVar29 = uVar18;
        do {
          puVar22[-1] = 0;
          puVar22[-2] = 0;
          puVar22[1] = 0;
          *puVar22 = 0;
          puVar25[-1] = 0;
          puVar25[-2] = 0;
          puVar25[1] = 0;
          *puVar25 = 0;
          puVar22 = puVar22 + 4;
          uVar29 = uVar29 - 8;
          puVar25 = puVar25 + 4;
        } while (uVar29 != 0);
        if (uVar18 != uVar4) goto LAB_001239f0;
      }
      iVar6 = *(int *)(param_1 + 0xf0);
      goto LAB_00123a14;
    }
LAB_00123a1c:
    iVar7 = 0xf;
  }
  else {
LAB_00123a14:
    if (iVar6 < 100) goto LAB_00123a1c;
    if (iVar6 < 1000) {
      iVar7 = 0x32;
    }
    else {
      iVar7 = 0x96;
      if (9999 < iVar6) {
        iVar7 = 300;
      }
    }
  }
  if (iVar7 < *(int *)(param_1 + 0xf8)) {
    *(undefined4 *)(param_1 + 0xf8) = 0;
    if ((int)uVar32 < 1) {
      return;
    }
    pauVar11 = *(undefined1 (**) [16])(param_1 + 0xb0);
    pauVar21 = *(undefined1 (**) [16])(param_1 + 0xb8);
    if (uVar32 < 4) {
      uVar12 = 0;
    }
    else {
      lVar23 = uVar4 * 4;
      uVar12 = 0;
      if ((((undefined1 (*) [16])(*pauVar21 + lVar23) <= pauVar11 ||
            (undefined1 (*) [16])(*pauVar11 + lVar23) <= pauVar21) &&
          ((undefined1 (*) [16])(*pauVar5 + lVar23) <= pauVar11 ||
           (undefined1 (*) [16])(*pauVar11 + lVar23) <= pauVar5)) &&
         ((undefined1 (*) [16])(*pauVar5 + lVar23) <= pauVar21 ||
          (undefined1 (*) [16])(*pauVar21 + lVar23) <= pauVar5)) {
        uVar12 = uVar4 & 0xfffffffc;
        uVar19 = uVar12;
        pauVar24 = pauVar11;
        pauVar26 = pauVar5;
        pauVar30 = pauVar21;
        do {
          uVar19 = uVar19 - 4;
          auVar2._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar26 + 8) >> 0x20);
          auVar2._0_12_ = *(undefined1 (*) [12])*pauVar26;
          auVar31 = NEON_smin(*pauVar30,auVar2,4);
          *(long *)(*pauVar24 + 8) = auVar31._8_8_;
          *(long *)*pauVar24 = auVar31._0_8_;
          uVar33 = *(undefined8 *)*pauVar26;
          *(undefined8 *)(*pauVar30 + 8) = *(undefined8 *)(*pauVar26 + 8);
          *(undefined8 *)*pauVar30 = uVar33;
          pauVar24 = pauVar24 + 1;
          pauVar26 = pauVar26 + 1;
          pauVar30 = pauVar30 + 1;
        } while (uVar19 != 0);
        if (uVar12 == uVar4) goto LAB_00123c48;
      }
    }
    lVar17 = uVar12 * 4;
    lVar23 = uVar4 - uVar12;
    piVar10 = (int *)(*pauVar21 + lVar17);
    piVar14 = (int *)(*pauVar11 + lVar17);
    piVar20 = (int *)(*pauVar5 + lVar17);
    do {
      iVar6 = *piVar10;
      if (*piVar20 <= *piVar10) {
        iVar6 = *piVar20;
      }
      *piVar14 = iVar6;
      lVar23 = lVar23 + -1;
      *piVar10 = *piVar20;
      piVar10 = piVar10 + 1;
      piVar14 = piVar14 + 1;
      piVar20 = piVar20 + 1;
    } while (lVar23 != 0);
  }
  else {
    if ((int)uVar32 < 1) {
      return;
    }
    pauVar11 = *(undefined1 (**) [16])(param_1 + 0xb0);
    pauVar21 = *(undefined1 (**) [16])(param_1 + 0xb8);
    if (uVar32 < 4) {
      uVar12 = 0;
    }
    else {
      lVar23 = uVar4 * 4;
      uVar12 = 0;
      if ((((undefined1 (*) [16])(*pauVar21 + lVar23) <= pauVar11 ||
            (undefined1 (*) [16])(*pauVar11 + lVar23) <= pauVar21) &&
          ((undefined1 (*) [16])(*pauVar5 + lVar23) <= pauVar11 ||
           (undefined1 (*) [16])(*pauVar11 + lVar23) <= pauVar5)) &&
         ((undefined1 (*) [16])(*pauVar5 + lVar23) <= pauVar21 ||
          (undefined1 (*) [16])(*pauVar21 + lVar23) <= pauVar5)) {
        uVar12 = uVar4 & 0xfffffffc;
        uVar19 = uVar12;
        pauVar24 = pauVar21;
        pauVar26 = pauVar5;
        pauVar30 = pauVar11;
        do {
          uVar19 = uVar19 - 4;
          auVar31._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar26 + 8) >> 0x20);
          auVar31._0_12_ = *(undefined1 (*) [12])*pauVar26;
          auVar31 = NEON_smin(*pauVar30,auVar31,4);
          *(long *)(*pauVar30 + 8) = auVar31._8_8_;
          *(long *)*pauVar30 = auVar31._0_8_;
          auVar3._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar26 + 8) >> 0x20);
          auVar3._0_12_ = *(undefined1 (*) [12])*pauVar26;
          auVar31 = NEON_smin(*pauVar24,auVar3,4);
          *(long *)(*pauVar24 + 8) = auVar31._8_8_;
          *(long *)*pauVar24 = auVar31._0_8_;
          pauVar24 = pauVar24 + 1;
          pauVar26 = pauVar26 + 1;
          pauVar30 = pauVar30 + 1;
        } while (uVar19 != 0);
        if (uVar12 == uVar4) goto LAB_00123c48;
      }
    }
    lVar17 = uVar12 * 4;
    lVar23 = uVar4 - uVar12;
    piVar10 = (int *)(*pauVar11 + lVar17);
    piVar14 = (int *)(*pauVar21 + lVar17);
    piVar20 = (int *)(*pauVar5 + lVar17);
    do {
      iVar6 = *piVar10;
      if (*piVar20 <= *piVar10) {
        iVar6 = *piVar20;
      }
      *piVar10 = iVar6;
      iVar6 = *piVar14;
      if (*piVar20 <= *piVar14) {
        iVar6 = *piVar20;
      }
      lVar23 = lVar23 + -1;
      *piVar14 = iVar6;
      piVar10 = piVar10 + 1;
      piVar14 = piVar14 + 1;
      piVar20 = piVar20 + 1;
    } while (lVar23 != 0);
  }
LAB_00123c48:
  if (0 < (int)uVar32) {
    pauVar11 = *(undefined1 (**) [16])(param_1 + 0xb0);
    puVar15 = *(undefined1 **)(param_1 + 0xc0);
    if (uVar32 < 8) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      if ((*pauVar5 + uVar4 * 4 <= puVar15 || (undefined1 (*) [16])(puVar15 + uVar4 * 4) <= pauVar5)
         && (*pauVar11 + uVar4 * 4 <= puVar15 ||
             (undefined1 (*) [16])(puVar15 + uVar4 * 4) <= pauVar11)) {
        uVar12 = uVar4 & 0xfffffff8;
        pauVar21 = pauVar5 + 1;
        pauVar24 = pauVar11 + 1;
        puVar27 = (ulong *)(puVar15 + 0x10);
        uVar19 = uVar12;
        do {
          uVar35 = *(undefined8 *)(pauVar21[-1] + 8);
          uVar33 = *(undefined8 *)pauVar21[-1];
          uVar41 = *(undefined8 *)(*pauVar21 + 8);
          uVar37 = *(undefined8 *)*pauVar21;
          pauVar21 = pauVar21 + 2;
          uVar19 = uVar19 - 8;
          uVar32 = (uint)((ushort)uVar33 & 0x7fff);
          uVar34 = (uint)((ushort)uVar35 & 0x7fff);
          uVar36 = (uint)((ushort)uVar37 & 0x7fff);
          uVar39 = (uint)((ushort)uVar41 & 0x7fff);
          pauVar26 = pauVar24 + -1;
          uVar43 = *(undefined8 *)pauVar24[-1];
          uVar42 = *(undefined8 *)(*pauVar24 + 8);
          uVar38 = *(undefined8 *)*pauVar24;
          pauVar24 = pauVar24 + 2;
          puVar27[-1] = (ulong)(CONCAT14(-((int)((ulong)*(undefined8 *)(*pauVar26 + 8) >> 0x20) <
                                          (int)((((int)((ulong)uVar35 >> 0x20) << 1) >> 0x10) *
                                                0x3333 + ((uint)((ushort)(CONCAT15((char)((ulong)
                                                  uVar35 >> 0x28),
                                                  CONCAT14((char)((ulong)uVar35 >> 0x20),uVar34)) >>
                                                  0x20) & 0x7fff) * 0x3333 >> 0xf))),
                                         (uint)(-((int)*(undefined8 *)(*pauVar26 + 8) <
                                                 (int)((((int)uVar35 << 1) >> 0x10) * 0x3333 +
                                                      (uVar34 * 0x3333 >> 0xf))) & 1)) & 0x100ffffff
                               );
          puVar27[-2] = (ulong)(CONCAT14(-((int)((ulong)uVar43 >> 0x20) <
                                          (int)((((int)((ulong)uVar33 >> 0x20) << 1) >> 0x10) *
                                                0x3333 + ((uint)((ushort)(CONCAT15((char)((ulong)
                                                  uVar33 >> 0x28),
                                                  CONCAT14((char)((ulong)uVar33 >> 0x20),uVar32)) >>
                                                  0x20) & 0x7fff) * 0x3333 >> 0xf))),
                                         (uint)(-((int)uVar43 <
                                                 (int)((((int)uVar33 << 1) >> 0x10) * 0x3333 +
                                                      (uVar32 * 0x3333 >> 0xf))) & 1)) & 0x1ffffffff
                               );
          puVar27[1] = (ulong)(CONCAT14(-((int)((ulong)uVar42 >> 0x20) <
                                         (int)((((int)((ulong)uVar41 >> 0x20) << 1) >> 0x10) *
                                               0x3333 + ((uint)((ushort)(CONCAT15((char)((ulong)
                                                  uVar41 >> 0x28),
                                                  CONCAT14((char)((ulong)uVar41 >> 0x20),uVar39)) >>
                                                  0x20) & 0x7fff) * 0x3333 >> 0xf))),
                                        (uint)(-((int)uVar42 <
                                                (int)((((int)uVar41 << 1) >> 0x10) * 0x3333 +
                                                     (uVar39 * 0x3333 >> 0xf))) & 1)) & 0x100ffffff)
          ;
          *puVar27 = (ulong)(CONCAT14(-((int)((ulong)uVar38 >> 0x20) <
                                       (int)((((int)((ulong)uVar37 >> 0x20) << 1) >> 0x10) * 0x3333
                                            + ((uint)((ushort)(CONCAT15((char)((ulong)uVar37 >> 0x28
                                                                              ),CONCAT14((char)((
                                                  ulong)uVar37 >> 0x20),uVar36)) >> 0x20) & 0x7fff)
                                               * 0x3333 >> 0xf))),
                                      (uint)(-((int)uVar38 <
                                              (int)((((int)uVar37 << 1) >> 0x10) * 0x3333 +
                                                   (uVar36 * 0x3333 >> 0xf))) & 1)) & 0x1ffffffff);
          puVar27 = puVar27 + 4;
        } while (uVar19 != 0);
        if (uVar12 == uVar4) {
          return;
        }
      }
    }
    lVar23 = uVar4 - uVar12;
    puVar8 = (uint *)(*pauVar5 + uVar12 * 4);
    piVar10 = (int *)(*pauVar11 + uVar12 * 4);
    puVar16 = (uint *)(puVar15 + uVar12 * 4);
    do {
      lVar23 = lVar23 + -1;
      *puVar16 = (uint)(*piVar10 <
                       (int)(((int)(*puVar8 << 1) >> 0x10) * 0x3333 +
                            ((*puVar8 & 0x7fff) * 0x3333 >> 0xf)));
      puVar8 = puVar8 + 1;
      piVar10 = piVar10 + 1;
      puVar16 = puVar16 + 1;
    } while (lVar23 != 0);
  }
  return;
}

