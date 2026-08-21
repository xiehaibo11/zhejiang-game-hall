
void lsp_to_lpc(short *param_1,undefined8 *param_2,uint param_3)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  undefined1 (*pauVar6) [12];
  unkbyte10 *pVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  short *psVar15;
  long lVar16;
  uint *puVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  ulong *puVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  undefined8 *puVar28;
  ulong *puVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  long *plVar33;
  int *piVar34;
  int *piVar35;
  uint *puVar36;
  ushort uVar37;
  ushort uVar38;
  ushort uVar39;
  ushort uVar40;
  ushort uVar41;
  ushort uVar42;
  ushort uVar43;
  ushort uVar44;
  undefined2 uVar45;
  undefined2 uVar46;
  undefined2 uVar47;
  undefined2 uVar48;
  undefined2 uVar49;
  undefined2 uVar50;
  undefined2 uVar51;
  undefined2 uVar52;
  int iVar53;
  int iVar57;
  int iVar58;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  int iVar59;
  undefined1 auVar56 [16];
  long lVar63;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  short sVar64;
  short sVar65;
  short sVar66;
  short sVar67;
  short sVar68;
  short sVar69;
  short sVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  int iVar76;
  int iVar77;
  int iVar78;
  int iVar79;
  int iVar80;
  int iVar81;
  int iVar82;
  ulong auStack_60 [2];
  
  lVar8 = tpidr_el0;
  uVar3 = (int)param_3 >> 1;
  auStack_60[1] = *(long *)(lVar8 + 0x28);
  uVar22 = (ulong)(uVar3 + 1) * 8 + 0xf & 0xffffffff0;
  lVar27 = -uVar22;
  plVar19 = (long *)((long)auStack_60 + lVar27);
  iVar71 = param_3 + 3;
  uVar24 = (ulong)((uVar3 + 1) * iVar71) * 4 + 0xf & 0x7fffffff0;
  plVar20 = (long *)((long)plVar19 + (-uVar22 - uVar24));
  if ((int)param_3 < 0) {
    puVar21 = (ulong *)((long)plVar20 + (-((ulong)param_3 * 2 + 0xf & 0x3fffffff0) - uVar24));
  }
  else {
    uVar25 = (ulong)(int)uVar3;
    uVar22 = (uVar25 & ((long)uVar25 >> 0x3f ^ 0xffffffffffffffffU)) + 1;
    if (uVar22 < 4) {
      uVar26 = 0;
LAB_00110dec:
      lVar31 = uVar26 * (long)iVar71 * 4;
      do {
        lVar23 = lVar31 - uVar24;
        lVar32 = lVar31 - uVar24;
        lVar31 = lVar31 + (long)iVar71 * 4;
        plVar19[uVar26] = (long)plVar19 + lVar23;
        plVar20[uVar26] = (long)plVar20 + lVar32;
        bVar1 = (long)uVar26 < (long)uVar25;
        uVar26 = uVar26 + 1;
      } while (bVar1);
    }
    else {
      lVar23 = 1;
      lVar31 = 0;
      uVar26 = uVar22 & 0x7ffffffffffffffc;
      plVar33 = (long *)(&stack0xffffffffffffffb0 + lVar27);
      plVar14 = plVar20 + 2;
      uVar30 = uVar26;
      do {
        lVar18 = lVar31 * iVar71 * 4;
        lVar63 = lVar23 * iVar71 * 4;
        lVar32 = (lVar31 + 2) * (long)iVar71 * 4;
        lVar16 = (lVar23 + 2) * (long)iVar71 * 4;
        lVar31 = lVar31 + 4;
        lVar23 = lVar23 + 4;
        uVar30 = uVar30 - 4;
        plVar33[-1] = (long)plVar19 + (lVar63 - uVar24);
        plVar33[-2] = (long)plVar19 + (lVar18 - uVar24);
        plVar33[1] = (long)plVar19 + (lVar16 - uVar24);
        *plVar33 = (long)plVar19 + (lVar32 - uVar24);
        plVar14[-1] = (long)plVar20 + (lVar63 - uVar24);
        plVar14[-2] = (long)plVar20 + (lVar18 - uVar24);
        plVar14[1] = (long)plVar20 + (lVar16 - uVar24);
        *plVar14 = (long)plVar20 + (lVar32 - uVar24);
        plVar33 = plVar33 + 4;
        plVar14 = plVar14 + 4;
      } while (uVar30 != 0);
      if (uVar22 != uVar26) goto LAB_00110dec;
    }
    uVar22 = (ulong)param_3;
    puVar21 = (ulong *)((long)plVar20 + (-(uVar22 * 2 + 0xf & 0x3fffffff0) - uVar24));
    if (0 < (int)param_3) {
      if (param_3 < 8) {
        uVar25 = 0;
      }
      else {
        uVar25 = uVar22 & 0xfffffff8;
        uVar24 = uVar25;
        puVar29 = puVar21;
        psVar15 = param_1;
        do {
          sVar5 = *psVar15;
          sVar64 = psVar15[1];
          sVar65 = psVar15[2];
          sVar66 = psVar15[3];
          sVar67 = psVar15[4];
          sVar68 = psVar15[5];
          sVar69 = psVar15[6];
          sVar70 = psVar15[7];
          iVar75 = (int)sVar67 * (int)sVar67 * 8 + 0x8000 >> 0x10;
          iVar58 = (int)sVar68 * (int)sVar68 * 8 + 0x8000 >> 0x10;
          iVar77 = (int)sVar69 * (int)sVar69 * 8 + 0x8000 >> 0x10;
          iVar80 = (int)sVar70 * (int)sVar70 * 8 + 0x8000 >> 0x10;
          iVar53 = (int)sVar5 * (int)sVar5 * 8 + 0x8000 >> 0x10;
          iVar59 = (int)sVar64 * (int)sVar64 * 8 + 0x8000 >> 0x10;
          iVar78 = (int)sVar65 * (int)sVar65 * 8 + 0x8000 >> 0x10;
          iVar81 = (int)sVar66 * (int)sVar66 * 8 + 0x8000 >> 0x10;
          iVar57 = (int)(short)(0x6488 - sVar67) * (int)(short)(0x6488 - sVar67) * 8 + 0x8000 >>
                   0x10;
          iVar76 = (int)(short)(0x6488 - sVar68) * (int)(short)(0x6488 - sVar68) * 8 + 0x8000 >>
                   0x10;
          iVar79 = (int)(short)(0x6488 - sVar69) * (int)(short)(0x6488 - sVar69) * 8 + 0x8000 >>
                   0x10;
          iVar82 = (int)(short)(0x6488 - sVar70) * (int)(short)(0x6488 - sVar70) * 8 + 0x8000 >>
                   0x10;
          iVar71 = (int)(short)(0x6488 - sVar5) * (int)(short)(0x6488 - sVar5) * 8 + 0x8000 >> 0x10;
          iVar72 = (int)(short)(0x6488 - sVar64) * (int)(short)(0x6488 - sVar64) * 8 + 0x8000 >>
                   0x10;
          iVar73 = (int)(short)(0x6488 - sVar65) * (int)(short)(0x6488 - sVar65) * 8 + 0x8000 >>
                   0x10;
          iVar74 = (int)(short)(0x6488 - sVar66) * (int)(short)(0x6488 - sVar66) * 8 + 0x8000 >>
                   0x10;
          uVar37 = (ushort)(((int)((((iVar53 * -10 + 0x1000 >> 0xd) + 0x154) * iVar53 * 8 + 0x8000U
                                   & 0xffff0000) + 0xf0000000) >> 0x10) * iVar53 + 0x1000U >> 0xd);
          uVar39 = (ushort)(((int)(((ulong)(ushort)((uint)(((iVar59 * -10 + 0x1000 >> 0xd) + 0x154)
                                                           * iVar59 * 8 + 0x8000) >> 0x10) << 0x30)
                                  >> 0x20) + -0x10000000 >> 0x10) * iVar59 + 0x1000U >> 0xd);
          uVar41 = (ushort)(((int)((((iVar78 * -10 + 0x1000 >> 0xd) + 0x154) * iVar78 * 8 + 0x8000U
                                   & 0xffff0000) + 0xf0000000) >> 0x10) * iVar78 + 0x1000U >> 0xd);
          uVar43 = (ushort)(((int)(((ulong)(ushort)((uint)(((iVar81 * -10 + 0x1000 >> 0xd) + 0x154)
                                                           * iVar81 * 8 + 0x8000) >> 0x10) << 0x30)
                                  >> 0x20) + -0x10000000 >> 0x10) * iVar81 + 0x1000U >> 0xd);
          uVar38 = (ushort)(((int)((((iVar75 * -10 + 0x1000 >> 0xd) + 0x154) * iVar75 * 8 + 0x8000U
                                   & 0xffff0000) + 0xf0000000) >> 0x10) * iVar75 + 0x1000U >> 0xd);
          uVar40 = (ushort)(((int)(((ulong)(ushort)((uint)(((iVar58 * -10 + 0x1000 >> 0xd) + 0x154)
                                                           * iVar58 * 8 + 0x8000) >> 0x10) << 0x30)
                                  >> 0x20) + -0x10000000 >> 0x10) * iVar58 + 0x1000U >> 0xd);
          uVar42 = (ushort)(((int)((((iVar77 * -10 + 0x1000 >> 0xd) + 0x154) * iVar77 * 8 + 0x8000U
                                   & 0xffff0000) + 0xf0000000) >> 0x10) * iVar77 + 0x1000U >> 0xd);
          uVar44 = (ushort)(((int)(((ulong)(ushort)((uint)(((iVar80 * -10 + 0x1000 >> 0xd) + 0x154)
                                                           * iVar80 * 8 + 0x8000) >> 0x10) << 0x30)
                                  >> 0x20) + -0x10000000 >> 0x10) * iVar80 + 0x1000U >> 0xd);
          sVar64 = (uVar39 ^ (uVar39 ^ -(short)(((int)(((ulong)(ushort)((uint)(((iVar72 * -10 +
                                                                                 0x1000 >> 0xd) +
                                                                               0x154) * iVar72 * 8 +
                                                                              0x8000) >> 0x10) <<
                                                       0x30) >> 0x20) + -0x10000000 >> 0x10) *
                                                iVar72 + 0x1000U >> 0xd)) &
                             -(ushort)(0x3243 < sVar64)) << 2;
          sVar65 = (uVar41 ^ (uVar41 ^ -(short)(((int)((((iVar73 * -10 + 0x1000 >> 0xd) + 0x154) *
                                                        iVar73 * 8 + 0x8000U & 0xffff0000) +
                                                      0xf0000000) >> 0x10) * iVar73 + 0x1000U >> 0xd
                                               )) & -(ushort)(0x3243 < sVar65)) << 2;
          sVar66 = (uVar43 ^ (uVar43 ^ -(short)(((int)(((ulong)(ushort)((uint)(((iVar74 * -10 +
                                                                                 0x1000 >> 0xd) +
                                                                               0x154) * iVar74 * 8 +
                                                                              0x8000) >> 0x10) <<
                                                       0x30) >> 0x20) + -0x10000000 >> 0x10) *
                                                iVar74 + 0x1000U >> 0xd)) &
                             -(ushort)(0x3243 < sVar66)) << 2;
          sVar67 = (uVar38 ^ (uVar38 ^ -(short)(((int)((((iVar57 * -10 + 0x1000 >> 0xd) + 0x154) *
                                                        iVar57 * 8 + 0x8000U & 0xffff0000) +
                                                      0xf0000000) >> 0x10) * iVar57 + 0x1000U >> 0xd
                                               )) & -(ushort)(0x3243 < sVar67)) << 2;
          sVar68 = (uVar40 ^ (uVar40 ^ -(short)(((int)(((ulong)(ushort)((uint)(((iVar76 * -10 +
                                                                                 0x1000 >> 0xd) +
                                                                               0x154) * iVar76 * 8 +
                                                                              0x8000) >> 0x10) <<
                                                       0x30) >> 0x20) + -0x10000000 >> 0x10) *
                                                iVar76 + 0x1000U >> 0xd)) &
                             -(ushort)(0x3243 < sVar68)) << 2;
          sVar69 = (uVar42 ^ (uVar42 ^ -(short)(((int)((((iVar79 * -10 + 0x1000 >> 0xd) + 0x154) *
                                                        iVar79 * 8 + 0x8000U & 0xffff0000) +
                                                      0xf0000000) >> 0x10) * iVar79 + 0x1000U >> 0xd
                                               )) & -(ushort)(0x3243 < sVar69)) << 2;
          sVar70 = (uVar44 ^ (uVar44 ^ -(short)(((int)(((ulong)(ushort)((uint)(((iVar82 * -10 +
                                                                                 0x1000 >> 0xd) +
                                                                               0x154) * iVar82 * 8 +
                                                                              0x8000) >> 0x10) <<
                                                       0x30) >> 0x20) + -0x10000000 >> 0x10) *
                                                iVar82 + 0x1000U >> 0xd)) &
                             -(ushort)(0x3243 < sVar70)) << 2;
          auVar55._0_8_ =
               CONCAT17((char)((ushort)sVar66 >> 8),
                        CONCAT16((char)sVar66,
                                 CONCAT15((char)((ushort)sVar65 >> 8),
                                          CONCAT14((char)sVar65,
                                                   CONCAT13((char)((ushort)sVar64 >> 8),
                                                            CONCAT12((char)sVar64,
                                                                     (uVar37 ^ (uVar37 ^ -(short)(((
                                                  int)((((iVar71 * -10 + 0x1000 >> 0xd) + 0x154) *
                                                        iVar71 * 8 + 0x8000U & 0xffff0000) +
                                                      0xf0000000) >> 0x10) * iVar71 + 0x1000U >> 0xd
                                                  )) & -(ushort)(0x3243 < sVar5)) << 2)))))) ^
               0x8000800080008000;
          auVar55[8] = (undefined1)sVar67;
          auVar55[9] = (byte)((ushort)sVar67 >> 8) ^ 0x80;
          auVar55[10] = (undefined1)sVar68;
          auVar55[0xb] = (byte)((ushort)sVar68 >> 8) ^ 0x80;
          auVar55[0xc] = (undefined1)sVar69;
          auVar55[0xd] = (byte)((ushort)sVar69 >> 8) ^ 0x80;
          auVar55[0xe] = (undefined1)sVar70;
          auVar55[0xf] = (byte)((ushort)sVar70 >> 8) ^ 0x80;
          uVar24 = uVar24 - 8;
          puVar29[1] = auVar55._8_8_;
          *puVar29 = auVar55._0_8_;
          puVar29 = puVar29 + 2;
          psVar15 = psVar15 + 8;
        } while (uVar24 != 0);
        if (uVar25 == uVar22) goto LAB_0011109c;
      }
      lVar31 = uVar22 - uVar25;
      param_1 = param_1 + uVar25;
      psVar15 = (short *)((long)puVar21 + uVar25 * 2);
      do {
        sVar5 = *param_1;
        if (sVar5 < 0x3244) {
          iVar71 = (int)sVar5 * (int)sVar5 * 8 + 0x8000 >> 0x10;
          iVar71 = (((int)((((iVar71 * -10 + 0x1000 >> 0xd) + 0x154) * iVar71 * 8 + 0x8000U &
                           0xffff0000) + 0xf0000000) >> 0x10) * iVar71 + 0x1000U >> 0xd) + 0x2000;
        }
        else {
          iVar71 = (int)(short)(0x6488 - sVar5) * (int)(short)(0x6488 - sVar5) * 8 + 0x8000 >> 0x10;
          iVar71 = -0x2000 - (((int)((((iVar71 * -10 + 0x1000 >> 0xd) + 0x154) * iVar71 * 8 +
                                      0x8000U & 0xffff0000) + 0xf0000000) >> 0x10) * iVar71 +
                              0x1000U >> 0xd);
        }
        lVar31 = lVar31 + -1;
        *psVar15 = (short)(iVar71 << 2);
        param_1 = param_1 + 1;
        psVar15 = psVar15 + 1;
      } while (lVar31 != 0);
    }
LAB_0011109c:
    if (-1 < (int)param_3) {
      lVar23 = 0;
      lVar31 = -1;
      do {
        lVar32 = *(long *)((long)plVar19 + lVar23);
        lVar31 = lVar31 + 1;
        *(undefined8 *)(lVar32 + 4) = 0x10000000000000;
        *(undefined4 *)(lVar32 + lVar23 + 8) = 0x100000;
        lVar32 = *(long *)((long)plVar20 + lVar23);
        *(undefined8 *)(lVar32 + 4) = 0x10000000000000;
        lVar32 = lVar32 + lVar23;
        lVar23 = lVar23 + 8;
        *(undefined4 *)(lVar32 + 8) = 0x100000;
      } while (lVar31 < (int)uVar3);
    }
  }
  lVar27 = *(long *)((long)auStack_60 + lVar27 + 8);
  *(int *)(lVar27 + 0xc) =
       -(((int)(*(uint *)(*plVar19 + 8) << 2) >> 0x10) * (int)(short)*puVar21 +
        ((int)((*(uint *)(*plVar19 + 8) & 0x3fff) * (int)(short)*puVar21) >> 0xe));
  lVar31 = plVar20[1];
  *(int *)(lVar31 + 0xc) =
       -(((int)(*(uint *)(*plVar20 + 8) << 2) >> 0x10) * (int)*(short *)((long)puVar21 + 2) +
        ((int)((*(uint *)(*plVar20 + 8) & 0x3fff) * (int)*(short *)((long)puVar21 + 2)) >> 0xe));
  if (3 < (int)param_3) {
    uVar22 = 4;
    lVar23 = 1;
    lVar32 = 2;
    do {
      lVar16 = lVar23 * 4;
      uVar24 = lVar23 << 1 | 1;
      lVar23 = lVar23 + 1;
      sVar5 = *(short *)((long)puVar21 + lVar16);
      sVar64 = *(short *)((long)puVar21 + uVar24 * 2);
      puVar36 = (uint *)(lVar31 + 8);
      iVar71 = ((int)(*(uint *)(lVar27 + 8) << 2) >> 0x10) * (int)sVar5 +
               ((int)((*(uint *)(lVar27 + 8) & 0x3fff) * (int)sVar5) >> 0xe);
      puVar17 = (uint *)(lVar27 + 0xc);
      piVar34 = (int *)(plVar20[lVar23] + 0xc);
      piVar35 = (int *)(plVar19[lVar23] + 0xc);
      lVar16 = lVar32;
      do {
        lVar16 = lVar16 + -1;
        *piVar35 = (*puVar17 - iVar71) + puVar17[-2];
        puVar2 = puVar36 + -1;
        uVar4 = *puVar36;
        puVar36 = puVar36 + 1;
        iVar71 = (int)sVar64;
        *piVar34 = ((*puVar2 + *puVar36) - ((int)((uVar4 & 0x3fff) * iVar71) >> 0xe)) -
                   ((int)(uVar4 << 2) >> 0x10) * iVar71;
        iVar71 = ((int)(*puVar17 << 2) >> 0x10) * (int)sVar5 +
                 ((int)((*puVar17 & 0x3fff) * (int)sVar5) >> 0xe);
        puVar17 = puVar17 + 1;
        piVar34 = piVar34 + 1;
        piVar35 = piVar35 + 1;
      } while (lVar16 != 0);
      lVar16 = (ulong)((int)lVar23 * 2 - 1) * 4;
      piVar34 = (int *)(lVar27 + lVar16);
      lVar18 = (ulong)((int)lVar23 << 1 | 1) * 4;
      lVar27 = plVar19[lVar23];
      uVar25 = uVar22 & 0xfffffffe;
      uVar22 = uVar22 + 2;
      *(int *)(lVar27 + lVar18) = *piVar34 - iVar71;
      uVar4 = *(uint *)(lVar31 + uVar25 * 4);
      piVar34 = (int *)(lVar31 + lVar16);
      lVar31 = plVar20[lVar23];
      iVar71 = (int)*(short *)((long)puVar21 + uVar24 * 2);
      lVar32 = lVar32 + 2;
      *(int *)(lVar31 + lVar18) =
           (*piVar34 - ((int)((uVar4 & 0x3fff) * iVar71) >> 0xe)) -
           ((int)(uVar4 << 2) >> 0x10) * iVar71;
    } while (lVar23 < (int)uVar3);
  }
  if (0 < (int)param_3) {
    uVar22 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3;
    lVar27 = *(long *)((long)plVar19 + uVar22);
    lVar31 = *(long *)((long)plVar20 + uVar22);
    uVar22 = (ulong)(param_3 + 1);
    if (uVar22 - 1 < 4) {
      iVar71 = 0;
      iVar72 = 0;
      uVar24 = 1;
    }
    else {
      iVar71 = 0;
      uVar24 = 1;
      if ((uint)(uVar22 - 2) < 0xfffffffd) {
        iVar72 = 0;
        if (uVar22 - 2 >> 0x20 == 0) {
          uVar30 = (uVar22 - 1) - (ulong)(param_3 & 3);
          uVar25 = 0;
          iVar73 = 0;
          iVar74 = 0;
          iVar75 = 0;
          iVar71 = 0;
          uVar24 = uVar30 + 1;
          uVar45 = 0;
          uVar46 = 0;
          uVar47 = 0;
          uVar48 = 0;
          uVar49 = 0;
          uVar50 = 0;
          uVar51 = 0;
          uVar52 = 0;
          puVar28 = param_2;
          do {
            uVar26 = ((uVar25 & 0xfffffffc) >> 2) << 4 | 0xc;
            auVar54._10_2_ = uVar50;
            auVar54._8_2_ = uVar49;
            auVar54._12_2_ = uVar51;
            auVar54._14_2_ = uVar52;
            auVar54._2_2_ = uVar46;
            auVar54._0_2_ = uVar45;
            auVar54._4_2_ = uVar47;
            auVar54._6_2_ = uVar48;
            auVar60._12_4_ = iVar71;
            auVar60._8_4_ = iVar75;
            auVar60._4_4_ = iVar74;
            auVar60._0_4_ = iVar73;
            pauVar6 = (undefined1 (*) [12])(lVar27 + uVar26);
            iVar75 = (int)*(undefined8 *)(*pauVar6 + 8);
            iVar71 = (int)((ulong)*(undefined8 *)(*pauVar6 + 8) >> 0x20);
            iVar73 = (int)*(undefined8 *)*pauVar6;
            iVar74 = (int)((ulong)*(undefined8 *)*pauVar6 >> 0x20);
            pVar7 = (unkbyte10 *)(lVar31 + uVar26);
            uVar13 = *(undefined8 *)((long)pVar7 + 8);
            uVar49 = (undefined2)uVar13;
            uVar50 = (undefined2)((ulong)uVar13 >> 0x10);
            uVar51 = (undefined2)((ulong)uVar13 >> 0x20);
            uVar52 = (undefined2)((ulong)uVar13 >> 0x30);
            uVar12 = *(undefined8 *)pVar7;
            uVar45 = (undefined2)uVar12;
            uVar46 = (undefined2)((ulong)uVar12 >> 0x10);
            uVar47 = (undefined2)((ulong)uVar12 >> 0x20);
            uVar48 = (undefined2)((ulong)uVar12 >> 0x30);
            uVar25 = uVar25 + 4;
            auVar61._12_4_ = iVar71;
            auVar61._0_12_ = *pauVar6;
            auVar61 = NEON_ext(auVar60,auVar61,0xc,1);
            auVar11._10_2_ = uVar50;
            auVar11._0_10_ = *pVar7;
            auVar11._12_2_ = uVar51;
            auVar11._14_2_ = uVar52;
            auVar55 = NEON_ext(auVar54,auVar11,0xc,1);
            iVar53 = (auVar61._0_4_ - auVar55._0_4_) + iVar73 + (int)uVar12;
            iVar57 = (auVar61._4_4_ - auVar55._4_4_) + iVar74 + (int)((ulong)uVar12 >> 0x20);
            iVar58 = (auVar61._8_4_ - auVar55._8_4_) + iVar75 + (int)uVar13;
            iVar72 = (int)((ulong)uVar13 >> 0x20);
            iVar59 = (auVar61._12_4_ - auVar55._12_4_) + iVar71 + iVar72;
            auVar56._0_4_ = -(uint)(iVar53 < -0x7fff80);
            auVar56._4_4_ = -(uint)(iVar57 < -0x7fff80);
            auVar56._8_4_ = -(uint)(iVar58 < -0x7fff80);
            auVar56._12_4_ = -(uint)(iVar59 < -0x7fff80);
            auVar62._0_4_ = iVar53 + 0x80 >> 8;
            auVar62._4_4_ = iVar57 + 0x80 >> 8;
            auVar62._8_4_ = iVar58 + 0x80 >> 8;
            auVar62._12_4_ = iVar59 + 0x80 >> 8;
            auVar10._8_2_ = 0x8001;
            auVar10._0_8_ = 0xffff8001ffff8001;
            auVar10._10_2_ = 0xffff;
            auVar10._12_2_ = 0x8001;
            auVar10._14_2_ = 0xffff;
            auVar9[8] = 0xff;
            auVar9._0_8_ = 0x7fff00007fff;
            auVar9[9] = 0x7f;
            auVar9._10_2_ = 0;
            auVar9[0xc] = 0xff;
            auVar9[0xd] = 0x7f;
            auVar9._14_2_ = 0;
            auVar55 = NEON_smin(auVar62 ^ (auVar62 ^ auVar10) & auVar56,auVar9,4);
            *puVar28 = CONCAT26(auVar55._12_2_,
                                CONCAT24(auVar55._8_2_,CONCAT22(auVar55._4_2_,auVar55._0_2_)));
            puVar28 = puVar28 + 1;
          } while (uVar30 != uVar25);
          if ((param_3 & 3) == 0) goto LAB_001113bc;
        }
      }
      else {
        iVar72 = 0;
      }
    }
    do {
      iVar73 = iVar71 - iVar72;
      lVar23 = (ulong)((int)uVar24 + 2) * 4;
      iVar71 = *(int *)(lVar27 + lVar23);
      iVar72 = *(int *)(lVar31 + lVar23);
      lVar23 = uVar24 * 2;
      uVar24 = uVar24 + 1;
      iVar73 = iVar73 + iVar71 + iVar72;
      iVar74 = -0x7fff;
      if (-0x7fff81 < iVar73) {
        iVar74 = iVar73 + 0x80 >> 8;
      }
      if (0x7ffe < iVar74) {
        iVar74 = 0x7fff;
      }
      *(short *)((long)param_2 + lVar23 + -2) = (short)iVar74;
    } while (uVar22 != uVar24);
  }
LAB_001113bc:
  if (*(long *)(lVar8 + 0x28) != auStack_60[1]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

