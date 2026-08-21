
undefined8 FUN_0112361c(long *param_1)

{
  bool bVar1;
  size_t __size;
  ushort *puVar2;
  ushort *puVar3;
  undefined1 uVar4;
  ushort uVar5;
  undefined1 *puVar6;
  void *pvVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  char *pcVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  ulong *puVar17;
  ushort *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  uint *puVar23;
  ushort *puVar24;
  ulong uVar25;
  long lVar26;
  ushort *puVar27;
  long lVar28;
  long lVar29;
  ulong *puVar30;
  ushort *puVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  ulong *puVar35;
  long lVar36;
  undefined8 uVar37;
  uint uVar38;
  long lVar39;
  uint uVar40;
  uint uVar41;
  undefined2 uVar42;
  undefined2 uVar43;
  
  if (6 < *(ushort *)((long)param_1 + 0x24)) {
    return 1;
  }
  uVar12 = (uint)*(ushort *)((long)param_1 + 0x24);
  if ((1 << (ulong)(uVar12 & 0x1f) & 100U) == 0) {
    if ((1 << (ulong)(uVar12 & 0x1f) & 3U) == 0) {
      if (uVar12 != 3) {
        return 1;
      }
      puVar2 = (ushort *)param_1[5];
      puVar3 = (ushort *)param_1[6];
      puVar18 = (ushort *)param_1[7];
      uVar19 = 1L << ((ulong)*(ushort *)((long)param_1 + 0x1c) & 0x3f);
      puVar24 = puVar2;
      puVar27 = puVar3;
      puVar31 = puVar18;
      uVar21 = uVar19;
      do {
        if ((long)uVar21 < 1) {
          uVar37 = *(undefined8 *)(*param_1 + 0x3b8);
          uVar9 = TIFFFileName();
          TIFFWarningExt(uVar37,uVar9,"Assuming 8-bit colormap");
          goto LAB_01123b1c;
        }
        if ((0xff < *puVar24) || (0xff < *puVar27)) break;
        uVar5 = *puVar31;
        puVar27 = puVar27 + 1;
        puVar24 = puVar24 + 1;
        puVar31 = puVar31 + 1;
        uVar21 = uVar21 - 1;
      } while (uVar5 < 0x100);
      if (*(ushort *)((long)param_1 + 0x1c) == 0x3f) {
        return 1;
      }
      uVar21 = 0xfffffffffffffffe;
      if (-2 < (long)~uVar19) {
        uVar21 = ~uVar19;
      }
      uVar21 = uVar19 + uVar21 + 2;
      uVar20 = uVar19;
      if ((uVar21 < 8) || (uVar25 = uVar21 & 0xfffffffffffffff8, uVar25 == 0)) {
LAB_011237bc:
        do {
          uVar21 = uVar20 - 1;
          puVar2[uVar21] = (ushort)*(byte *)((long)(puVar2 + uVar21) + 1);
          puVar3[uVar21] = (ushort)*(byte *)((long)(puVar3 + uVar21) + 1);
          puVar18[uVar21] = (ushort)*(byte *)((long)(puVar18 + uVar21) + 1);
          bVar1 = 1 < (long)uVar20;
          uVar20 = uVar21;
        } while (bVar1);
      }
      else {
        uVar20 = 0xfffffffffffffffe;
        if (-2 < (long)~uVar19) {
          uVar20 = ~uVar19;
        }
        lVar32 = -2 - uVar20;
        uVar20 = uVar19;
        if (((puVar2 + lVar32 < puVar3 + uVar19 && puVar3 + lVar32 < puVar2 + uVar19) ||
            (puVar2 + lVar32 < puVar18 + uVar19 && puVar18 + lVar32 < puVar2 + uVar19)) ||
           (puVar3 + lVar32 < puVar18 + uVar19 && puVar18 + lVar32 < puVar3 + uVar19))
        goto LAB_011237bc;
        uVar20 = uVar19 - uVar25;
        puVar27 = puVar18 + (uVar19 - 8);
        puVar24 = puVar3 + (uVar19 - 8);
        puVar31 = puVar2 + (uVar19 - 8);
        uVar19 = uVar25;
        do {
          uVar37 = *(undefined8 *)(puVar31 + 4);
          uVar9 = *(undefined8 *)puVar31;
          uVar19 = uVar19 - 8;
          *(ulong *)(puVar31 + 4) =
               CONCAT26((ushort)((ulong)uVar37 >> 0x38),
                        CONCAT24((ushort)((ulong)uVar37 >> 0x20) >> 8,
                                 CONCAT22((ushort)((ulong)uVar37 >> 0x10) >> 8,(ushort)uVar37 >> 8))
                       );
          *(ulong *)puVar31 =
               CONCAT26((ushort)((ulong)uVar9 >> 0x38),
                        CONCAT24((ushort)((ulong)uVar9 >> 0x20) >> 8,
                                 CONCAT22((ushort)((ulong)uVar9 >> 0x10) >> 8,(ushort)uVar9 >> 8)));
          uVar37 = *(undefined8 *)(puVar24 + 4);
          uVar9 = *(undefined8 *)puVar24;
          *(ulong *)(puVar24 + 4) =
               CONCAT26((ushort)((ulong)uVar37 >> 0x38),
                        CONCAT24((ushort)((ulong)uVar37 >> 0x20) >> 8,
                                 CONCAT22((ushort)((ulong)uVar37 >> 0x10) >> 8,(ushort)uVar37 >> 8))
                       );
          *(ulong *)puVar24 =
               CONCAT26((ushort)((ulong)uVar9 >> 0x38),
                        CONCAT24((ushort)((ulong)uVar9 >> 0x20) >> 8,
                                 CONCAT22((ushort)((ulong)uVar9 >> 0x10) >> 8,(ushort)uVar9 >> 8)));
          uVar37 = *(undefined8 *)(puVar27 + 4);
          uVar9 = *(undefined8 *)puVar27;
          *(ulong *)(puVar27 + 4) =
               CONCAT26((ushort)((ulong)uVar37 >> 0x38),
                        CONCAT24((ushort)((ulong)uVar37 >> 0x20) >> 8,
                                 CONCAT22((ushort)((ulong)uVar37 >> 0x10) >> 8,(ushort)uVar37 >> 8))
                       );
          *(ulong *)puVar27 =
               CONCAT26((ushort)((ulong)uVar9 >> 0x38),
                        CONCAT24((ushort)((ulong)uVar9 >> 0x20) >> 8,
                                 CONCAT22((ushort)((ulong)uVar9 >> 0x10) >> 8,(ushort)uVar9 >> 8)));
          puVar27 = puVar27 + -8;
          puVar24 = puVar24 + -8;
          puVar31 = puVar31 + -8;
        } while (uVar19 != 0);
        if (uVar21 != uVar25) goto LAB_011237bc;
      }
LAB_01123b1c:
      if (8 < *(ushort *)((long)param_1 + 0x1c)) {
        return 1;
      }
      lVar32 = param_1[5];
      lVar28 = param_1[6];
      lVar39 = param_1[7];
      uVar12 = 0;
      uVar38 = (uint)*(ushort *)((long)param_1 + 0x1c);
      if (uVar38 != 0) {
        uVar12 = 8 / uVar38;
      }
      pvVar7 = _TIFFmalloc((ulong)(uVar12 * 0x400 + 0x800));
      param_1[0xc] = (long)pvVar7;
      if (pvVar7 != (void *)0x0) {
        uVar21 = 0;
        puVar17 = (ulong *)((long)pvVar7 + 0x800);
        do {
          *(ulong **)((long)pvVar7 + uVar21 * 8) = puVar17;
          lVar36 = 2;
          lVar34 = 4;
          uVar22 = 3;
          uVar12 = 6;
          lVar8 = 1;
          lVar33 = 2;
          lVar29 = 3;
          lVar26 = 4;
          uVar14 = (uint)uVar21;
          puVar30 = puVar17;
          switch(uVar38) {
          case 1:
            lVar8 = (uVar21 >> 7 & 1) * 2;
            lVar33 = (uVar21 >> 6 & 1) * 2;
            lVar26 = (uVar21 >> 4 & 1) * 2;
            uVar42 = *(undefined2 *)(lVar28 + lVar33);
            uVar43 = *(undefined2 *)(lVar39 + lVar33);
            lVar29 = (uVar21 >> 5 & 1) * 2;
            uVar19 = CONCAT62((int6)(((ulong)CONCAT22(*(undefined2 *)(lVar32 + lVar26),
                                                      *(undefined2 *)(lVar32 + lVar29)) << 0x20) >>
                                    0x10),*(undefined2 *)(lVar32 + lVar8)) & 0xffffffffffff00ff;
            uVar20 = CONCAT44((int)(uVar19 >> 0x20),
                              CONCAT22(*(undefined2 *)(lVar32 + lVar33),(short)uVar19)) &
                     0xffffffff00ffffff;
            uVar19 = CONCAT26((short)(uVar20 >> 0x30),CONCAT24((short)(uVar19 >> 0x20),(int)uVar20))
                     & 0xff00ffffffffff;
            uVar40 = (uint)CONCAT12((char)*(undefined2 *)(lVar39 + lVar8),
                                    CONCAT11((char)*(undefined2 *)(lVar28 + lVar8),(char)uVar19));
            uVar41 = (uint)CONCAT12((char)*(undefined2 *)(lVar39 + lVar29),
                                    CONCAT11((char)*(undefined2 *)(lVar28 + lVar29),
                                             (char)(uVar19 >> 0x20)));
            lVar34 = 2;
            uVar22 = 1;
            uVar12 = 3;
            lVar8 = 5;
            lVar36 = 6;
            lVar33 = 1;
            lVar29 = 7;
            puVar30 = puVar17 + 2;
            puVar17[1] = (ulong)CONCAT34((int3)(CONCAT16((char)*(undefined2 *)(lVar39 + lVar26),
                                                         CONCAT15((char)*(undefined2 *)
                                                                         (lVar28 + lVar26),
                                                                  CONCAT14((char)(uVar19 >> 0x30),
                                                                           uVar41))) >> 0x20),uVar41
                                        ) | 0xff000000ff000000;
            *puVar17 = (ulong)CONCAT34((int3)(CONCAT16((char)uVar43,
                                                       CONCAT15((char)uVar42,
                                                                CONCAT14((char)(uVar19 >> 0x10),
                                                                         uVar40))) >> 0x20),uVar40)
                       | 0xff000000ff000000;
            lVar26 = 8;
          case 2:
            lVar10 = (ulong)(uVar14 >> (ulong)uVar12 & uVar22) * 2;
            lVar34 = (ulong)(uVar14 >> lVar34 & uVar22) * 2;
            *(uint *)puVar30 =
                 CONCAT21(*(undefined2 *)(lVar28 + lVar10),*(undefined1 *)(lVar32 + lVar10)) &
                 0xffff | (uint)*(ushort *)(lVar39 + lVar10) << 0x10 | 0xff000000;
            puVar35 = (ulong *)((long)puVar17 + lVar36 * 4);
            *(uint *)((long)puVar17 + lVar8 * 4) =
                 CONCAT21(*(undefined2 *)(lVar28 + lVar34),*(undefined1 *)(lVar32 + lVar34)) &
                 0xffff | (uint)*(ushort *)(lVar39 + lVar34) << 0x10 | 0xff000000;
            break;
          default:
            goto switchD_01123ba4_caseD_3;
          case 4:
            uVar22 = 0xf;
            lVar33 = 4;
            lVar29 = 1;
            lVar26 = 2;
            puVar35 = puVar17;
            break;
          case 8:
            uVar22 = 0xff;
            lVar26 = 1;
            goto LAB_01123d18;
          }
          lVar8 = (ulong)(uVar14 >> lVar33 & uVar22) * 2;
          puVar30 = (ulong *)((long)puVar17 + lVar29 * 4);
          *(uint *)puVar35 =
               CONCAT21(*(undefined2 *)(lVar28 + lVar8),*(undefined1 *)(lVar32 + lVar8)) & 0xffff |
               (uint)*(ushort *)(lVar39 + lVar8) << 0x10 | 0xff000000;
LAB_01123d18:
          lVar8 = (ulong)(uVar22 & uVar14) * 2;
          puVar17 = (ulong *)((long)puVar17 + lVar26 * 4);
          *(uint *)puVar30 =
               CONCAT21(*(undefined2 *)(lVar28 + lVar8),*(undefined1 *)(lVar32 + lVar8)) & 0xffff |
               (uint)*(ushort *)(lVar39 + lVar8) << 0x10 | 0xff000000;
switchD_01123ba4_caseD_3:
          if (uVar21 == 0xff) {
            return 1;
          }
          pvVar7 = (void *)param_1[0xc];
          uVar21 = uVar21 + 1;
        } while( true );
      }
      uVar37 = *(undefined8 *)(*param_1 + 0x3b8);
      uVar9 = TIFFFileName();
      pcVar11 = "No space for Palette mapping table";
      goto LAB_0112388c;
    }
  }
  else if (*(short *)((long)param_1 + 0x1c) == 8) {
    return 1;
  }
  iVar13 = 0xff;
  if (*(ushort *)((long)param_1 + 0x1c) != 0x10) {
    iVar13 = (int)(1L << ((ulong)*(ushort *)((long)param_1 + 0x1c) & 0x3f)) + -1;
  }
  uVar12 = iVar13 + 1;
  puVar6 = _TIFFmalloc((long)(int)uVar12);
  param_1[10] = (long)puVar6;
  if (puVar6 == (undefined1 *)0x0) {
    uVar37 = *(undefined8 *)(*param_1 + 0x3b8);
    uVar9 = TIFFFileName();
    pcVar11 = "No space for photometric conversion table";
  }
  else {
    if (*(short *)((long)param_1 + 0x24) == 0) {
      if (-1 < iVar13) {
        iVar15 = iVar13 * 0xff;
        uVar4 = 0;
        if (iVar13 != 0) {
          uVar4 = (undefined1)(iVar15 / iVar13);
        }
        *puVar6 = uVar4;
        if (iVar13 != 0) {
          uVar21 = 1;
          do {
            iVar15 = iVar15 + -0xff;
            uVar4 = 0;
            if (iVar13 != 0) {
              uVar4 = (undefined1)(iVar15 / iVar13);
            }
            *(undefined1 *)(param_1[10] + uVar21) = uVar4;
            uVar21 = uVar21 + 1;
          } while (uVar12 != uVar21);
        }
      }
    }
    else if ((-1 < iVar13) && (*puVar6 = 0, iVar13 != 0)) {
      iVar15 = 0xff;
      uVar21 = 1;
      do {
        uVar4 = 0;
        if (iVar13 != 0) {
          uVar4 = (undefined1)(iVar15 / iVar13);
        }
        iVar15 = iVar15 + 0xff;
        *(undefined1 *)(param_1[10] + uVar21) = uVar4;
        uVar21 = uVar21 + 1;
      } while (uVar12 != uVar21);
    }
    uVar5 = *(ushort *)((long)param_1 + 0x1c);
    if ((0x10 < uVar5) || (1 < *(ushort *)((long)param_1 + 0x24))) {
      return 1;
    }
    uVar12 = 0;
    uVar38 = (uint)uVar5;
    if (uVar38 != 0) {
      uVar12 = 8 / uVar38;
    }
    lVar32 = param_1[10];
    __size = 0xc00;
    if (uVar38 < 9) {
      __size = (ulong)(uVar12 * 0x400 + 0x800);
    }
    pvVar7 = _TIFFmalloc(__size);
    param_1[0xb] = (long)pvVar7;
    if (pvVar7 != (void *)0x0) {
      uVar21 = 0;
      puVar16 = (uint *)((long)pvVar7 + 0x800);
      do {
        *(uint **)((long)pvVar7 + uVar21 * 8) = puVar16;
        iVar13 = (int)uVar21;
        switch(uVar5) {
        case 1:
          uVar4 = *(undefined1 *)(lVar32 + (iVar13 >> 7));
          *puVar16 = CONCAT12(uVar4,CONCAT11(uVar4,uVar4)) | 0xff000000;
          uVar4 = *(undefined1 *)(lVar32 + (uVar21 >> 6 & 1));
          puVar16[1] = CONCAT12(uVar4,CONCAT11(uVar4,uVar4)) | 0xff000000;
          uVar4 = *(undefined1 *)(lVar32 + (uVar21 >> 5 & 1));
          puVar16[2] = CONCAT12(uVar4,CONCAT11(uVar4,uVar4)) | 0xff000000;
          uVar4 = *(undefined1 *)(lVar32 + (uVar21 >> 4 & 1));
          puVar16[3] = CONCAT12(uVar4,CONCAT11(uVar4,uVar4)) | 0xff000000;
          uVar4 = *(undefined1 *)(lVar32 + (uVar21 >> 3 & 1));
          puVar16[4] = CONCAT12(uVar4,CONCAT11(uVar4,uVar4)) | 0xff000000;
          uVar4 = *(undefined1 *)(lVar32 + (uVar21 >> 2 & 1));
          puVar16[5] = CONCAT12(uVar4,CONCAT11(uVar4,uVar4)) | 0xff000000;
          uVar4 = *(undefined1 *)(lVar32 + (uVar21 >> 1 & 1));
          puVar23 = puVar16 + 7;
          uVar19 = uVar21 & 1;
          puVar16[6] = CONCAT12(uVar4,CONCAT11(uVar4,uVar4)) | 0xff000000;
          lVar28 = 8;
          break;
        case 2:
          uVar4 = *(undefined1 *)(lVar32 + (iVar13 >> 6));
          *puVar16 = CONCAT12(uVar4,CONCAT11(uVar4,uVar4)) | 0xff000000;
          uVar4 = *(undefined1 *)(lVar32 + (uVar21 >> 4 & 3));
          puVar16[1] = CONCAT12(uVar4,CONCAT11(uVar4,uVar4)) | 0xff000000;
          uVar4 = *(undefined1 *)(lVar32 + (uVar21 >> 2 & 3));
          puVar23 = puVar16 + 3;
          uVar19 = uVar21 & 3;
          puVar16[2] = CONCAT12(uVar4,CONCAT11(uVar4,uVar4)) | 0xff000000;
          lVar28 = 4;
          break;
        default:
          goto switchD_01123954_caseD_3;
        case 4:
          uVar4 = *(undefined1 *)(lVar32 + (iVar13 >> 4));
          uVar19 = uVar21 & 0xf;
          puVar23 = puVar16 + 1;
          *puVar16 = CONCAT12(uVar4,CONCAT11(uVar4,uVar4)) | 0xff000000;
          lVar28 = 2;
          break;
        case 8:
        case 0x10:
          lVar28 = 1;
          puVar23 = puVar16;
          uVar19 = uVar21;
        }
        uVar4 = *(undefined1 *)(lVar32 + uVar19);
        puVar16 = puVar16 + lVar28;
        *puVar23 = CONCAT12(uVar4,CONCAT11(uVar4,uVar4)) | 0xff000000;
switchD_01123954_caseD_3:
        if (uVar21 == 0xff) {
          _TIFFfree((void *)param_1[10]);
          param_1[10] = 0;
          return 1;
        }
        pvVar7 = (void *)param_1[0xb];
        uVar21 = uVar21 + 1;
      } while( true );
    }
    uVar37 = *(undefined8 *)(*param_1 + 0x3b8);
    uVar9 = TIFFFileName();
    pcVar11 = "No space for B&W mapping table";
  }
LAB_0112388c:
  TIFFErrorExt(uVar37,uVar9,pcVar11);
  return 0;
}

