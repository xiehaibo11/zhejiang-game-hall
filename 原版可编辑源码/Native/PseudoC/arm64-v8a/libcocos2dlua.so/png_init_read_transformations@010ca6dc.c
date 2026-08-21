
void png_init_read_transformations(long param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  bool bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined2 uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  short sVar18;
  ulong uVar19;
  long lVar20;
  short sVar21;
  long lVar22;
  byte *pbVar23;
  undefined8 *puVar24;
  byte bVar25;
  byte *pbVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined4 local_54;
  
                    /* try { // try from 010ca6f0 to 011ca6f3 has its CatchHandler @ 010ca704 */
                    /* try { // try from 010ca6f4 to 011ca717 has its CatchHandler @ 010ca6bc */
  iVar10 = *(int *)(param_1 + 0x510);
  iVar11 = *(int *)(param_1 + 0x2ec);
                    /* catch() { ... } // from try @ 010ca6f0 with catch @ 010ca704 */
  uVar13 = 100000;
  if (iVar10 == 0) {
    if (iVar11 == 0) {
      bVar5 = false;
      *(undefined4 *)(param_1 + 0x510) = 100000;
      *(undefined4 *)(param_1 + 0x2ec) = 100000;
    }
    else {
      uVar12 = png_reciprocal(iVar11);
      bVar5 = false;
      *(undefined4 *)(param_1 + 0x510) = uVar12;
    }
  }
  else if (iVar11 == 0) {
    uVar12 = png_reciprocal(iVar10);
    bVar5 = false;
    *(undefined4 *)(param_1 + 0x2ec) = uVar12;
  }
  else {
    iVar10 = png_muldiv(&local_54,iVar10,iVar11,100000);
    if (iVar10 == 0) {
      bVar5 = true;
    }
    else {
      iVar10 = png_gamma_significant(local_54);
      bVar5 = iVar10 != 0;
    }
  }
  *(ushort *)(param_1 + 0x55a) = *(ushort *)(param_1 + 0x55a) | 1;
  uVar14 = *(uint *)(param_1 + 0x16c) | 0x2000;
  if (!bVar5) {
    uVar14 = *(uint *)(param_1 + 0x16c) & 0xffffdfff;
  }
  *(uint *)(param_1 + 0x16c) = uVar14;
  if ((uVar14 & 0x40080) == 0x40000) {
    *(uint *)(param_1 + 0x16c) = uVar14 & 0xfd7ffeff;
    *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) & 0xffffdfff;
    *(undefined2 *)(param_1 + 0x2a8) = 0;
  }
  iVar10 = png_gamma_significant(*(undefined4 *)(param_1 + 0x2ec));
  uVar14 = *(uint *)(param_1 + 0x16c);
  if (iVar10 == 0) {
    uVar14 = uVar14 & 0xff7fffff;
    *(uint *)(param_1 + 0x16c) = uVar14;
    *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) & 0xffffdfff;
  }
  if ((uVar14 & 0x600000) != 0) {
    png_colorspace_set_rgb_coefficients(param_1);
    uVar14 = *(uint *)(param_1 + 0x16c);
  }
  if ((uVar14 >> 8 & 1) == 0) {
    if (((((uVar14 ^ 0xffffffff) & 0x4080) == 0) &&
        (sVar21 = *(short *)(param_1 + 0x2c2), sVar21 == *(short *)(param_1 + 0x2c4))) &&
       (sVar21 == *(short *)(param_1 + 0x2c6))) {
      *(short *)(param_1 + 0x2c8) = sVar21;
      *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 0x800;
    }
  }
  else if ((*(byte *)(param_1 + 0x2af) >> 1 & 1) == 0) {
    *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 0x800;
  }
  bVar6 = *(byte *)(param_1 + 0x2af);
  uVar15 = uVar14;
  if (bVar6 == 3) {
    uVar4 = *(ushort *)(param_1 + 0x2a8);
    uVar19 = (ulong)uVar4;
    if (uVar19 == 0) {
      bVar5 = false;
    }
    else {
      lVar17 = 0;
      bVar5 = false;
      do {
        cVar2 = *(char *)(*(long *)(param_1 + 0x330) + lVar17);
        if (cVar2 != -1) {
          if (cVar2 != '\0') goto LAB_010ca958;
          bVar5 = true;
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 < (long)uVar19);
    }
                    /* try { // try from 010ca934 to 011ca95b has its CatchHandler @ 010ca97c */
    *(uint *)(param_1 + 0x16c) = uVar14 & 0xff7fffff;
    *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) & 0xffffdfff;
    uVar15 = uVar14 & 0xff7fffff;
    if (!bVar5) {
      *(uint *)(param_1 + 0x16c) = uVar14 & 0xff7ffe7f;
      uVar15 = uVar14 & 0xff7ffe7f;
    }
LAB_010ca958:
    if (((uVar15 ^ 0xffffffff) & 0x1100) == 0) {
                    /* try { // try from 010ca964 to 011ca967 has its CatchHandler @ 010ca984 */
                    /* try { // try from 010ca968 to 011ca9c3 has its CatchHandler @ 010ca8dc */
      pbVar23 = (byte *)(*(long *)(param_1 + 0x298) + (ulong)*(byte *)(param_1 + 0x2c0) * 3);
      *(ushort *)(param_1 + 0x2c2) = (ushort)*pbVar23;
                    /* catch() { ... } // from try @ 010ca934 with catch @ 010ca97c */
      *(ushort *)(param_1 + 0x2c4) = (ushort)pbVar23[1];
                    /* catch() { ... } // from try @ 010ca964 with catch @ 010ca984 */
      *(ushort *)(param_1 + 0x2c6) = (ushort)pbVar23[2];
      if ((uVar4 != 0) && ((uVar15 & 0x2080000) == 0x80000)) {
        lVar17 = *(long *)(param_1 + 0x330);
        if (uVar4 < 0x20) {
          lVar22 = 0;
LAB_010caa24:
          lVar20 = uVar19 - lVar22;
          pbVar23 = (byte *)(lVar17 + lVar22);
          do {
            lVar20 = lVar20 + -1;
            *pbVar23 = ~*pbVar23;
            pbVar23 = pbVar23 + 1;
          } while (lVar20 != 0);
        }
        else {
          lVar22 = uVar19 - (uVar19 & 0x1f);
          if (lVar22 == 0) goto LAB_010caa24;
          puVar24 = (undefined8 *)(lVar17 + 0x10);
          lVar20 = lVar22;
          do {
            uVar28 = puVar24[-1];
            uVar27 = puVar24[-2];
            uVar30 = puVar24[1];
            uVar29 = *puVar24;
            lVar20 = lVar20 + -0x20;
            puVar24[-1] = CONCAT17(~(byte)((ulong)uVar28 >> 0x38),
                                   CONCAT16(~(byte)((ulong)uVar28 >> 0x30),
                                            CONCAT15(~(byte)((ulong)uVar28 >> 0x28),
                                                     CONCAT14(~(byte)((ulong)uVar28 >> 0x20),
                                                              CONCAT13(~(byte)((ulong)uVar28 >> 0x18
                                                                              ),CONCAT12(~(byte)((
                                                  ulong)uVar28 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)uVar28 >> 8),~(byte)uVar28
                                                          )))))));
            puVar24[-2] = CONCAT17(~(byte)((ulong)uVar27 >> 0x38),
                                   CONCAT16(~(byte)((ulong)uVar27 >> 0x30),
                                            CONCAT15(~(byte)((ulong)uVar27 >> 0x28),
                                                     CONCAT14(~(byte)((ulong)uVar27 >> 0x20),
                                                              CONCAT13(~(byte)((ulong)uVar27 >> 0x18
                                                                              ),CONCAT12(~(byte)((
                                                  ulong)uVar27 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)uVar27 >> 8),~(byte)uVar27
                                                          )))))));
            puVar24[1] = CONCAT17(~(byte)((ulong)uVar30 >> 0x38),
                                  CONCAT16(~(byte)((ulong)uVar30 >> 0x30),
                                           CONCAT15(~(byte)((ulong)uVar30 >> 0x28),
                                                    CONCAT14(~(byte)((ulong)uVar30 >> 0x20),
                                                             CONCAT13(~(byte)((ulong)uVar30 >> 0x18)
                                                                      ,CONCAT12(~(byte)((ulong)
                                                  uVar30 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)uVar30 >> 8),~(byte)uVar30
                                                          )))))));
            *puVar24 = CONCAT17(~(byte)((ulong)uVar29 >> 0x38),
                                CONCAT16(~(byte)((ulong)uVar29 >> 0x30),
                                         CONCAT15(~(byte)((ulong)uVar29 >> 0x28),
                                                  CONCAT14(~(byte)((ulong)uVar29 >> 0x20),
                                                           CONCAT13(~(byte)((ulong)uVar29 >> 0x18),
                                                                    CONCAT12(~(byte)((ulong)uVar29
                                                                                    >> 0x10),
                                                                             CONCAT11(~(byte)((ulong
                                                  )uVar29 >> 8),~(byte)uVar29)))))));
            puVar24 = puVar24 + 4;
          } while (lVar20 != 0);
          if ((uVar4 & 0x1f) != 0) goto LAB_010caa24;
        }
        uVar15 = *(uint *)(param_1 + 0x16c);
      }
    }
  }
  else {
    if ((bVar6 >> 2 & 1) == 0) {
      *(uint *)(param_1 + 0x16c) = uVar14 & 0xff7fffff;
      *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) & 0xffffdfff;
      uVar15 = uVar14 & 0xff7fffff;
      if (*(short *)(param_1 + 0x2a8) == 0) {
        *(uint *)(param_1 + 0x16c) = uVar14 & 0xff7ffe7f;
        uVar15 = uVar14 & 0xff7ffe7f;
      }
    }
    if (((bVar6 >> 1 & 1) == 0) && ((uVar15 & 0x1100) == 0x1100)) {
      cVar2 = *(char *)(param_1 + 0x2b0);
      sVar21 = *(short *)(param_1 + 0x2c8);
      sVar18 = *(short *)(param_1 + 0x340);
      if (cVar2 == '\x04') {
        sVar21 = sVar21 * 0x11;
        sVar18 = sVar18 * 0x11;
      }
      else if (cVar2 == '\x02') {
                    /* try { // try from 010ca9c4 to 011caa47 has its CatchHandler @ 010ca9c4
                       catch() { ... } // from try @ 010ca9c4 with catch @ 010ca9c4
                       catch() { ... } // from try @ 010caa4c with catch @ 010ca9c4 */
        sVar21 = sVar21 * 0x55;
        sVar18 = sVar18 * 0x55;
      }
      else if (cVar2 == '\x01') {
        sVar21 = sVar21 * 0xff;
        sVar18 = sVar18 * 0xff;
      }
      *(short *)(param_1 + 0x2c6) = sVar21;
      *(short *)(param_1 + 0x2c4) = sVar21;
      *(short *)(param_1 + 0x2c2) = sVar21;
      if ((uVar15 >> 0x19 & 1) == 0) {
        *(short *)(param_1 + 0x33e) = sVar18;
        *(short *)(param_1 + 0x33c) = sVar18;
        *(short *)(param_1 + 0x33a) = sVar18;
      }
    }
  }
                    /* try { // try from 010caa48 to 011caa4b has its CatchHandler @ 010caa5c */
                    /* try { // try from 010caa4c to 011caa93 has its CatchHandler @ 010ca9c4 */
  if (((uVar15 & 0x380) == 0x280) && (*(char *)(param_1 + 0x2b0) != '\x10')) {
                    /* catch() { ... } // from try @ 010caa48 with catch @ 010caa5c */
    *(short *)(param_1 + 0x2c2) =
         (short)((uint)*(ushort *)(param_1 + 0x2c2) * 0xff + 0x807f >> 0x10);
    *(short *)(param_1 + 0x2c4) =
         (short)((uint)*(ushort *)(param_1 + 0x2c4) * 0xff + 0x807f >> 0x10);
    *(short *)(param_1 + 0x2c6) =
         (short)((uint)*(ushort *)(param_1 + 0x2c6) * 0xff + 0x807f >> 0x10);
    *(short *)(param_1 + 0x2c8) =
         (short)((uint)*(ushort *)(param_1 + 0x2c8) * 0xff + 0x807f >> 0x10);
  }
  if ((((uVar15 & 0x180) == 0x80) && ((uVar15 & 0x4000400) != 0)) &&
     (*(char *)(param_1 + 0x2b0) == '\x10')) {
    *(short *)(param_1 + 0x2c2) = *(short *)(param_1 + 0x2c2) * 0x101;
    *(short *)(param_1 + 0x2c4) = *(short *)(param_1 + 0x2c4) * 0x101;
    *(short *)(param_1 + 0x2c6) = *(short *)(param_1 + 0x2c6) * 0x101;
    *(short *)(param_1 + 0x2c8) = *(short *)(param_1 + 0x2c8) * 0x101;
  }
  *(undefined2 *)(param_1 + 0x2d2) = *(undefined2 *)(param_1 + 0x2c8);
  *(undefined8 *)(param_1 + 0x2ca) = *(undefined8 *)(param_1 + 0x2c0);
  if ((uVar15 >> 0xd & 1) == 0) {
    if ((uVar15 & 0x600000) != 0) {
      iVar10 = png_gamma_significant(*(undefined4 *)(param_1 + 0x510));
      if ((iVar10 != 0) ||
         (iVar10 = png_gamma_significant(*(undefined4 *)(param_1 + 0x2ec)), iVar10 != 0))
      goto LAB_010cac64;
      uVar15 = *(uint *)(param_1 + 0x16c);
    }
    if (((uVar15 >> 7 & 1) != 0) &&
       (((iVar10 = png_gamma_significant(*(undefined4 *)(param_1 + 0x510)), iVar10 != 0 ||
         (iVar10 = png_gamma_significant(*(undefined4 *)(param_1 + 0x2ec)), iVar10 != 0)) ||
        ((*(char *)(param_1 + 0x2ba) == '\x03' &&
         (iVar10 = png_gamma_significant(*(undefined4 *)(param_1 + 700)), iVar10 != 0))))))
    goto LAB_010cac64;
    uVar14 = *(uint *)(param_1 + 0x16c);
    if ((uVar14 >> 0x17 & 1) != 0) {
      iVar10 = png_gamma_significant(*(undefined4 *)(param_1 + 0x2ec));
      if (iVar10 != 0) goto LAB_010cac64;
      uVar14 = *(uint *)(param_1 + 0x16c);
    }
    if (((uVar14 >> 7 & 1) == 0) || (*(char *)(param_1 + 0x2af) != '\x03')) goto LAB_010cb0c0;
    uVar4 = *(ushort *)(param_1 + 0x2a8);
    if ((ulong)uVar4 != 0) {
      bVar6 = *(byte *)(param_1 + 0x2c2);
      bVar7 = *(byte *)(param_1 + 0x2c4);
      bVar8 = *(byte *)(param_1 + 0x2c6);
      uVar19 = 0;
      pbVar23 = (byte *)(*(long *)(param_1 + 0x298) + 1);
      do {
        lVar17 = *(long *)(param_1 + 0x330);
        bVar25 = *(byte *)(lVar17 + uVar19);
        if (bVar25 != 0xff) {
          if (bVar25 == 0) {
            pbVar23[-1] = bVar6;
            *pbVar23 = bVar7;
            pbVar23[1] = bVar8;
          }
          else {
            uVar14 = (uint)pbVar23[-1] * (uint)bVar25 + (bVar25 ^ 0xff) * (uint)bVar6 + 0x80;
            pbVar23[-1] = (byte)(uVar14 + (uVar14 >> 8 & 0xff) >> 8);
            uVar14 = (*(byte *)(lVar17 + uVar19) ^ 0xff) * (uint)bVar7 +
                     (uint)*(byte *)(lVar17 + uVar19) * (uint)*pbVar23 + 0x80;
            *pbVar23 = (byte)(uVar14 + (uVar14 >> 8 & 0xff) >> 8);
            uVar14 = (*(byte *)(lVar17 + uVar19) ^ 0xff) * (uint)bVar8 +
                     (uint)*(byte *)(lVar17 + uVar19) * (uint)pbVar23[1] + 0x80;
            pbVar23[1] = (byte)(uVar14 + (uVar14 >> 8 & 0xff) >> 8);
          }
        }
        uVar19 = uVar19 + 1;
        pbVar23 = pbVar23 + 3;
      } while (uVar4 != uVar19);
      uVar14 = *(uint *)(param_1 + 0x16c);
    }
    uVar14 = uVar14 & 0xffffff7f;
LAB_010cb0bc:
    *(uint *)(param_1 + 0x16c) = uVar14;
  }
  else {
LAB_010cac64:
    png_build_gamma_table(param_1,*(undefined1 *)(param_1 + 0x2b0));
    uVar14 = *(uint *)(param_1 + 0x16c);
    if ((uVar14 >> 7 & 1) == 0) {
      if ((*(char *)(param_1 + 0x2af) == '\x03') &&
         (((uVar14 >> 0xc & 1) == 0 || ((uVar14 & 0x600000) == 0)))) {
        uVar19 = (ulong)*(ushort *)(param_1 + 0x2a0);
        if (uVar19 != 0) {
          lVar17 = *(long *)(param_1 + 0x2f0);
          pbVar23 = (byte *)(*(long *)(param_1 + 0x298) + 1);
          do {
            uVar19 = uVar19 - 1;
            pbVar23[-1] = *(byte *)(lVar17 + (ulong)pbVar23[-1]);
            *pbVar23 = *(byte *)(lVar17 + (ulong)*pbVar23);
            pbVar23[1] = *(byte *)(lVar17 + (ulong)pbVar23[1]);
            pbVar23 = pbVar23 + 3;
          } while (uVar19 != 0);
        }
        uVar14 = uVar14 & 0xffffdfff;
        goto LAB_010cb0bc;
      }
    }
    else {
      if ((uVar14 & 0x600000) != 0) {
        png_warning(param_1,"libpng does not support gamma+background+rgb_to_gray");
      }
      if (*(char *)(param_1 + 0x2af) == '\x03') {
        cVar2 = *(char *)(param_1 + 0x2ba);
        lVar17 = *(long *)(param_1 + 0x298);
        uVar4 = *(ushort *)(param_1 + 0x2a0);
        if (cVar2 == '\x01') {
          uVar12 = *(undefined4 *)(param_1 + 0x2ec);
LAB_010caef4:
          iVar10 = png_gamma_significant(uVar13);
          bVar6 = (byte)*(undefined2 *)(param_1 + 0x2c2);
          if (iVar10 == 0) {
            bVar7 = *(byte *)(param_1 + 0x2c4);
            bVar8 = *(byte *)(param_1 + 0x2c6);
          }
          else {
            bVar6 = png_gamma_8bit_correct(*(undefined2 *)(param_1 + 0x2c2),uVar13);
            bVar7 = png_gamma_8bit_correct(*(undefined2 *)(param_1 + 0x2c4),uVar13);
            bVar8 = png_gamma_8bit_correct(*(undefined2 *)(param_1 + 0x2c6),uVar13);
          }
          iVar10 = png_gamma_significant(uVar12);
          uVar14 = (uint)*(ushort *)(param_1 + 0x2c2);
          if (iVar10 == 0) {
            bVar25 = *(byte *)(param_1 + 0x2c4);
            bVar3 = *(byte *)(param_1 + 0x2c6);
            goto joined_r0x010caf9c;
          }
          uVar14 = png_gamma_8bit_correct(*(ushort *)(param_1 + 0x2c2),uVar12);
          uVar15 = png_gamma_8bit_correct(*(undefined2 *)(param_1 + 0x2c4),uVar12);
          uVar16 = png_gamma_8bit_correct(*(undefined2 *)(param_1 + 0x2c6),uVar12);
        }
        else {
          if (cVar2 == '\x03') {
            uVar12 = png_reciprocal(*(undefined4 *)(param_1 + 700));
            uVar13 = png_reciprocal2(*(undefined4 *)(param_1 + 700),*(undefined4 *)(param_1 + 0x2ec)
                                    );
            goto LAB_010caef4;
          }
          uVar12 = 100000;
          if (cVar2 != '\x02') goto LAB_010caef4;
          lVar22 = *(long *)(param_1 + 0x2f0);
          lVar20 = *(long *)(param_1 + 0x308);
          bVar6 = *(byte *)(lVar22 + (ulong)*(ushort *)(param_1 + 0x2c2));
          bVar7 = *(byte *)(lVar22 + (ulong)*(ushort *)(param_1 + 0x2c4));
          bVar8 = *(byte *)(lVar22 + (ulong)*(ushort *)(param_1 + 0x2c6));
          uVar14 = (uint)*(byte *)(lVar20 + (ulong)*(ushort *)(param_1 + 0x2c2));
          bVar25 = *(byte *)(lVar20 + (ulong)*(ushort *)(param_1 + 0x2c4));
          bVar3 = *(byte *)(lVar20 + (ulong)*(ushort *)(param_1 + 0x2c6));
joined_r0x010caf9c:
          uVar16 = (uint)bVar3;
          uVar15 = (uint)bVar25;
        }
        if (uVar4 != 0) {
          uVar19 = 0;
          pbVar23 = (byte *)(lVar17 + 1);
          do {
            if ((long)uVar19 < (long)(ulong)*(ushort *)(param_1 + 0x2a8)) {
              lVar17 = *(long *)(param_1 + 0x330);
              bVar25 = *(byte *)(lVar17 + uVar19);
              if (bVar25 == 0xff) goto LAB_010cafe4;
              if (bVar25 != 0) {
                lVar22 = *(long *)(param_1 + 0x308);
                uVar1 = (uint)*(byte *)(lVar22 + (ulong)pbVar23[-1]) * (uint)bVar25 +
                        (bVar25 ^ 0xff) * (uVar14 & 0xff) + 0x80;
                lVar20 = *(long *)(param_1 + 0x300);
                pbVar23[-1] = *(byte *)(lVar20 + (ulong)(uVar1 + (uVar1 >> 8 & 0xff) >> 8 & 0xff));
                uVar1 = (*(byte *)(lVar17 + uVar19) ^ 0xff) * (uVar15 & 0xff) +
                        (uint)*(byte *)(lVar17 + uVar19) * (uint)*(byte *)(lVar22 + (ulong)*pbVar23)
                        + 0x80;
                *pbVar23 = *(byte *)(lVar20 + (ulong)(uVar1 + (uVar1 >> 8 & 0xff) >> 8 & 0xff));
                uVar1 = (*(byte *)(lVar17 + uVar19) ^ 0xff) * (uVar16 & 0xff) +
                        (uint)*(byte *)(lVar17 + uVar19) *
                        (uint)*(byte *)(lVar22 + (ulong)pbVar23[1]) + 0x80;
                bVar25 = *(byte *)(lVar20 + (ulong)(uVar1 + (uVar1 >> 8 & 0xff) >> 8 & 0xff));
                goto LAB_010cb09c;
              }
              pbVar23[-1] = bVar6;
              *pbVar23 = bVar7;
              pbVar23[1] = bVar8;
            }
            else {
LAB_010cafe4:
              lVar17 = *(long *)(param_1 + 0x2f0);
              pbVar23[-1] = *(byte *)(lVar17 + (ulong)pbVar23[-1]);
              *pbVar23 = *(byte *)(lVar17 + (ulong)*pbVar23);
              bVar25 = *(byte *)(lVar17 + (ulong)pbVar23[1]);
LAB_010cb09c:
              pbVar23[1] = bVar25;
            }
            uVar19 = uVar19 + 1;
            pbVar23 = pbVar23 + 3;
          } while (uVar4 != uVar19);
        }
        uVar14 = *(uint *)(param_1 + 0x16c) & 0xffffdf7f;
        goto LAB_010cb0bc;
      }
      cVar2 = *(char *)(param_1 + 0x2ba);
      if (cVar2 == '\x03') {
        uVar12 = png_reciprocal(*(undefined4 *)(param_1 + 700));
        uVar13 = *(undefined4 *)(param_1 + 700);
LAB_010cada0:
        uVar13 = png_reciprocal2(uVar13,*(undefined4 *)(param_1 + 0x2ec));
      }
      else {
        if (cVar2 == '\x02') {
          uVar12 = png_reciprocal(*(undefined4 *)(param_1 + 0x510));
          uVar13 = *(undefined4 *)(param_1 + 0x510);
          goto LAB_010cada0;
        }
        if (cVar2 != '\x01') {
                    /* WARNING: Subroutine does not return */
          png_error(param_1,"invalid background gamma type");
        }
        uVar12 = *(undefined4 *)(param_1 + 0x2ec);
      }
      iVar10 = png_gamma_significant(uVar12);
      iVar11 = png_gamma_significant(uVar13);
      if (iVar10 != 0) {
        uVar9 = png_gamma_correct(param_1,*(undefined2 *)(param_1 + 0x2c8),uVar12);
        *(undefined2 *)(param_1 + 0x2d2) = uVar9;
      }
      if (iVar11 != 0) {
        uVar9 = png_gamma_correct(param_1,*(undefined2 *)(param_1 + 0x2c8),uVar13);
        *(undefined2 *)(param_1 + 0x2c8) = uVar9;
      }
      sVar21 = *(short *)(param_1 + 0x2c2);
      if (((sVar21 == *(short *)(param_1 + 0x2c4)) && (sVar21 == *(short *)(param_1 + 0x2c6))) &&
         (sVar21 == *(short *)(param_1 + 0x2c8))) {
        uVar9 = *(undefined2 *)(param_1 + 0x2d2);
        *(short *)(param_1 + 0x2c6) = sVar21;
        *(short *)(param_1 + 0x2c4) = sVar21;
        *(undefined2 *)(param_1 + 0x2d0) = uVar9;
        *(undefined2 *)(param_1 + 0x2ce) = uVar9;
        *(undefined2 *)(param_1 + 0x2cc) = uVar9;
      }
      else {
        if (iVar10 != 0) {
          uVar9 = png_gamma_correct(param_1,sVar21,uVar12);
          *(undefined2 *)(param_1 + 0x2cc) = uVar9;
          uVar9 = png_gamma_correct(param_1,*(undefined2 *)(param_1 + 0x2c4),uVar12);
          *(undefined2 *)(param_1 + 0x2ce) = uVar9;
          uVar9 = png_gamma_correct(param_1,*(undefined2 *)(param_1 + 0x2c6),uVar12);
          *(undefined2 *)(param_1 + 0x2d0) = uVar9;
        }
        if (iVar11 != 0) {
          uVar9 = png_gamma_correct(param_1,*(undefined2 *)(param_1 + 0x2c2),uVar13);
          *(undefined2 *)(param_1 + 0x2c2) = uVar9;
          uVar9 = png_gamma_correct(param_1,*(undefined2 *)(param_1 + 0x2c4),uVar13);
          *(undefined2 *)(param_1 + 0x2c4) = uVar9;
          uVar9 = png_gamma_correct(param_1,*(undefined2 *)(param_1 + 0x2c6),uVar13);
          *(undefined2 *)(param_1 + 0x2c6) = uVar9;
        }
      }
      uVar14 = *(uint *)(param_1 + 0x16c);
      *(undefined1 *)(param_1 + 0x2ba) = 1;
    }
  }
LAB_010cb0c0:
  if ((uVar14 & 0x1008) != 8) {
    return;
  }
  if (*(char *)(param_1 + 0x2af) != '\x03') {
    return;
  }
  uVar4 = *(ushort *)(param_1 + 0x2a0);
  uVar19 = (ulong)uVar4;
  *(uint *)(param_1 + 0x16c) = uVar14 & 0xfffffff7;
  if (((*(byte *)(param_1 + 800) != 0) && (uVar14 = 8 - *(byte *)(param_1 + 800), 0 < (int)uVar14))
     && (uVar4 != 0)) {
    pbVar23 = *(byte **)(param_1 + 0x298);
    if (uVar4 < 2) {
      lVar17 = 0;
    }
    else {
      lVar17 = uVar19 - (uVar19 & 1);
      if (lVar17 != 0) {
        lVar22 = lVar17;
        pbVar26 = pbVar23;
        do {
          lVar22 = lVar22 + -2;
          *pbVar26 = *pbVar26 >> (ulong)(uVar14 & 0x1f);
          pbVar26[3] = pbVar26[3] >> (ulong)(uVar14 & 0x1f);
          pbVar26 = pbVar26 + 6;
        } while (lVar22 != 0);
        if ((uVar4 & 1) == 0) goto LAB_010cb178;
      }
    }
    lVar22 = uVar19 - lVar17;
    pbVar23 = pbVar23 + lVar17 * 3;
    do {
      lVar22 = lVar22 + -1;
      *pbVar23 = *pbVar23 >> (ulong)(uVar14 & 0x1f);
      pbVar23 = pbVar23 + 3;
    } while (lVar22 != 0);
  }
LAB_010cb178:
  if (((*(byte *)(param_1 + 0x321) != 0) &&
      (uVar14 = 8 - *(byte *)(param_1 + 0x321), 0 < (int)uVar14)) && (uVar4 != 0)) {
    lVar17 = *(long *)(param_1 + 0x298);
    if (uVar4 < 2) {
      lVar22 = 0;
    }
    else {
      lVar22 = uVar19 - (uVar19 & 1);
      if (lVar22 != 0) {
        pbVar23 = (byte *)(lVar17 + 4);
        lVar20 = lVar22;
        do {
          lVar20 = lVar20 + -2;
          pbVar23[-3] = pbVar23[-3] >> (ulong)(uVar14 & 0x1f);
          *pbVar23 = *pbVar23 >> (ulong)(uVar14 & 0x1f);
          pbVar23 = pbVar23 + 6;
        } while (lVar20 != 0);
        if ((uVar4 & 1) == 0) goto LAB_010cb204;
      }
    }
    lVar20 = uVar19 - lVar22;
    pbVar23 = (byte *)(lVar17 + lVar22 * 3 + 1);
    do {
      lVar20 = lVar20 + -1;
      *pbVar23 = *pbVar23 >> (ulong)(uVar14 & 0x1f);
      pbVar23 = pbVar23 + 3;
    } while (lVar20 != 0);
  }
LAB_010cb204:
  if (((*(byte *)(param_1 + 0x322) != 0) &&
      (uVar14 = 8 - *(byte *)(param_1 + 0x322), 0 < (int)uVar14)) && (uVar4 != 0)) {
    lVar17 = *(long *)(param_1 + 0x298);
    if (uVar4 < 2) {
      lVar22 = 0;
    }
    else {
      lVar22 = uVar19 - (uVar19 & 1);
      if (lVar22 != 0) {
        pbVar23 = (byte *)(lVar17 + 5);
        lVar20 = lVar22;
        do {
          lVar20 = lVar20 + -2;
          pbVar23[-3] = pbVar23[-3] >> (ulong)(uVar14 & 0x1f);
          *pbVar23 = *pbVar23 >> (ulong)(uVar14 & 0x1f);
          pbVar23 = pbVar23 + 6;
        } while (lVar20 != 0);
        if ((uVar4 & 1) == 0) {
          return;
        }
      }
    }
    lVar20 = uVar19 - lVar22;
    pbVar23 = (byte *)(lVar17 + lVar22 * 3 + 2);
    do {
      lVar20 = lVar20 + -1;
      *pbVar23 = *pbVar23 >> (ulong)(uVar14 & 0x1f);
      pbVar23 = pbVar23 + 3;
    } while (lVar20 != 0);
  }
  return;
}

