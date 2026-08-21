
void open_loop_nbest_pitch
               (short *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int *param_5
               ,undefined2 *param_6,uint param_7)

{
  short sVar1;
  uint uVar2;
  undefined2 uVar3;
  bool bVar4;
  short *psVar5;
  short *psVar20;
  uint uVar35;
  short *psVar36;
  uint uVar37;
  uint uVar38;
  short *psVar39;
  undefined4 *puVar40;
  undefined4 *puVar41;
  int *piVar42;
  ulong uVar43;
  ulong uVar44;
  long lVar45;
  long lVar46;
  uint *puVar47;
  long lVar48;
  uint uVar49;
  ulong uVar50;
  long lVar51;
  ulong uVar52;
  short *psVar53;
  long lVar54;
  ulong uVar55;
  long lVar56;
  short *psVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  size_t __n;
  void *__s;
  void *__s_00;
  uint uVar61;
  int iVar62;
  uint uVar63;
  undefined8 uVar64;
  int iVar65;
  int iVar66;
  undefined8 uVar67;
  int iVar68;
  int iVar69;
  undefined8 uVar70;
  int iVar71;
  int iVar72;
  undefined8 uVar73;
  int iVar74;
  int iVar75;
  short sVar76;
  uint auStack_e0 [2];
  ulong local_d8;
  uint local_cc;
  ulong local_c8;
  uint local_bc;
  long local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  long local_88;
  ulong local_80;
  ulong local_78;
  uint *local_70;
  long local_68;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  short *psVar11;
  short *psVar12;
  short *psVar13;
  short *psVar14;
  short *psVar15;
  short *psVar16;
  short *psVar17;
  short *psVar18;
  short *psVar19;
  short *psVar21;
  short *psVar22;
  short *psVar23;
  short *psVar24;
  short *psVar25;
  short *psVar26;
  short *psVar27;
  short *psVar28;
  short *psVar29;
  short *psVar30;
  short *psVar31;
  short *psVar32;
  short *psVar33;
  short *psVar34;
  
  local_b0 = tpidr_el0;
  local_bc = (int)param_3 - (int)param_2;
  local_68 = *(long *)(local_b0 + 0x28);
  local_78 = (ulong)(local_bc + 1);
  uVar43 = local_78 * 2 + 0xf & 0x3fffffff0;
  local_98 = (long)auStack_e0 - uVar43;
  lVar59 = local_98 - uVar43;
  local_70 = (uint *)(lVar59 - (local_78 * 4 + 0xf & 0x7fffffff0));
  uVar43 = (ulong)param_7;
  __n = uVar43 * 4;
  uVar50 = __n + 0xf & 0x7fffffff0;
  __s = (void *)((long)local_70 - uVar50);
  __s_00 = (void *)((long)__s - uVar50);
  local_d8 = (ulong)(param_7 - 1);
  uVar50 = local_78;
  local_a8 = param_3;
  local_a0 = param_2;
  local_90 = param_4;
  if (0 < (int)param_7) {
    memset(__s,0xff,__n);
    memset(__s_00,0,__n);
    iVar62 = (int)local_a0;
    uVar50 = local_78;
    if (param_7 < 8) {
      uVar44 = 0;
    }
    else {
      uVar44 = uVar43 & 0xfffffff8;
      piVar42 = param_5 + 4;
      uVar52 = uVar44;
      do {
        *(ulong *)(piVar42 + -2) = CONCAT44(iVar62,iVar62);
        *(ulong *)(piVar42 + -4) = CONCAT44(iVar62,iVar62);
        *(ulong *)(piVar42 + 2) = CONCAT44(iVar62,iVar62);
        *(ulong *)piVar42 = CONCAT44(iVar62,iVar62);
        uVar52 = uVar52 - 8;
        piVar42 = piVar42 + 8;
      } while (uVar52 != 0);
      if (uVar44 == uVar43) goto LAB_0011198c;
    }
    lVar45 = uVar43 - uVar44;
    piVar42 = param_5 + uVar44;
    do {
      lVar45 = lVar45 + -1;
      *piVar42 = iVar62;
      piVar42 = piVar42 + 1;
    } while (lVar45 != 0);
  }
LAB_0011198c:
  iVar62 = (int)local_a8;
  uVar2 = -iVar62;
  local_c8 = (ulong)uVar2;
  uVar35 = (uint)local_90;
  local_cc = 0;
  if ((int)uVar2 < (int)uVar35) {
    lVar54 = (long)(int)uVar2;
    lVar46 = (long)(int)uVar35;
    lVar45 = lVar54;
LAB_001119ac:
    sVar76 = param_1[lVar45];
    iVar65 = -(int)sVar76;
    if (-1 < sVar76) {
      iVar65 = (int)sVar76;
    }
    if (iVar65 < 0x4000) goto code_r0x001119c0;
    uVar52 = lVar46 - lVar54;
    lVar45 = lVar54;
    if (uVar52 < 0x10) goto LAB_00111a18;
    uVar55 = uVar52 & 0xfffffffffffffff0;
    lVar45 = uVar55 + lVar54;
    psVar53 = param_1 + lVar54 + 8;
    uVar44 = uVar55;
    do {
      uVar67 = *(undefined8 *)(psVar53 + -4);
      uVar64 = *(undefined8 *)(psVar53 + -8);
      uVar73 = *(undefined8 *)(psVar53 + 4);
      uVar70 = *(undefined8 *)psVar53;
      uVar44 = uVar44 - 0x10;
      *(ulong *)(psVar53 + -4) =
           CONCAT26((short)((long)uVar67 >> 0x31),
                    CONCAT24((short)((ulong)uVar67 >> 0x20) >> 1,
                             CONCAT22((short)((ulong)uVar67 >> 0x10) >> 1,(short)uVar67 >> 1)));
      *(ulong *)(psVar53 + -8) =
           CONCAT26((short)((long)uVar64 >> 0x31),
                    CONCAT24((short)((ulong)uVar64 >> 0x20) >> 1,
                             CONCAT22((short)((ulong)uVar64 >> 0x10) >> 1,(short)uVar64 >> 1)));
      *(ulong *)(psVar53 + 4) =
           CONCAT26((short)((long)uVar73 >> 0x31),
                    CONCAT24((short)((ulong)uVar73 >> 0x20) >> 1,
                             CONCAT22((short)((ulong)uVar73 >> 0x10) >> 1,(short)uVar73 >> 1)));
      *(ulong *)psVar53 =
           CONCAT26((short)((long)uVar70 >> 0x31),
                    CONCAT24((short)((ulong)uVar70 >> 0x20) >> 1,
                             CONCAT22((short)((ulong)uVar70 >> 0x10) >> 1,(short)uVar70 >> 1)));
      psVar53 = psVar53 + 0x10;
    } while (uVar44 != 0);
    if (uVar52 != uVar55) {
LAB_00111a18:
      lVar46 = lVar46 - lVar45;
      psVar53 = param_1 + lVar45;
      do {
        lVar46 = lVar46 + -1;
        *psVar53 = (short)((ulong)(long)*psVar53 >> 1);
        psVar53 = psVar53 + 1;
      } while (lVar46 != 0);
    }
    local_cc = 1;
  }
  goto LAB_00111a38;
code_r0x001119c0:
  lVar45 = lVar45 + 1;
  if (lVar46 <= lVar45) goto code_r0x001119cc;
  goto LAB_001119ac;
code_r0x00111ee8:
  lVar58 = lVar58 + 1;
  if (lVar48 <= lVar58) goto LAB_00111f60;
  goto LAB_00111ecc;
code_r0x001119cc:
  local_cc = 0;
LAB_00111a38:
  uVar2 = (int)uVar35 >> 2;
  uVar37 = (uint)local_a0;
  lVar45 = (long)(int)uVar37;
  local_80 = (ulong)param_7;
  if (uVar2 == 0) {
    uVar61 = 0;
    *local_70 = 0;
  }
  else {
    uVar52 = (ulong)(uVar2 - 1) + 1;
    psVar53 = param_1 + -lVar45;
    if (7 < uVar52) {
      uVar49 = uVar35 >> 2 & 7;
      lVar46 = uVar52 - uVar49;
      iVar65 = 0;
      iVar66 = 0;
      iVar68 = 0;
      iVar69 = 0;
      psVar53 = psVar53 + lVar46 * 4;
      uVar61 = uVar2 - (int)lVar46;
      psVar36 = param_1 + (0x10 - lVar45);
      iVar71 = 0;
      iVar72 = 0;
      iVar75 = 0;
      iVar74 = 0;
      do {
        psVar57 = psVar36 + -0x10;
        sVar76 = *psVar36;
        psVar5 = psVar36 + 1;
        psVar6 = psVar36 + 2;
        psVar7 = psVar36 + 3;
        psVar8 = psVar36 + 4;
        psVar9 = psVar36 + 5;
        psVar10 = psVar36 + 6;
        psVar11 = psVar36 + 7;
        psVar12 = psVar36 + 8;
        psVar13 = psVar36 + 9;
        psVar14 = psVar36 + 10;
        psVar15 = psVar36 + 0xb;
        psVar16 = psVar36 + 0xc;
        psVar17 = psVar36 + 0xd;
        psVar18 = psVar36 + 0xe;
        psVar19 = psVar36 + 0xf;
        psVar20 = psVar36 + -0xf;
        psVar21 = psVar36 + -0xe;
        psVar22 = psVar36 + -0xd;
        psVar23 = psVar36 + -0xc;
        psVar24 = psVar36 + -0xb;
        psVar25 = psVar36 + -10;
        psVar26 = psVar36 + -9;
        psVar27 = psVar36 + -8;
        psVar28 = psVar36 + -7;
        psVar29 = psVar36 + -6;
        psVar30 = psVar36 + -5;
        psVar31 = psVar36 + -4;
        psVar32 = psVar36 + -3;
        psVar33 = psVar36 + -2;
        psVar34 = psVar36 + -1;
        lVar46 = lVar46 + -8;
        psVar36 = psVar36 + 0x20;
        iVar71 = iVar71 + ((uint)((int)*psVar5 * (int)*psVar5 + (int)sVar76 * (int)sVar76 +
                                  (int)*psVar6 * (int)*psVar6 + (int)*psVar7 * (int)*psVar7) >> 6);
        iVar72 = iVar72 + ((uint)((int)*psVar9 * (int)*psVar9 + (int)*psVar8 * (int)*psVar8 +
                                  (int)*psVar10 * (int)*psVar10 + (int)*psVar11 * (int)*psVar11) >>
                          6);
        iVar75 = iVar75 + ((uint)((int)*psVar13 * (int)*psVar13 + (int)*psVar12 * (int)*psVar12 +
                                  (int)*psVar14 * (int)*psVar14 + (int)*psVar15 * (int)*psVar15) >>
                          6);
        iVar74 = iVar74 + ((uint)((int)*psVar17 * (int)*psVar17 + (int)*psVar16 * (int)*psVar16 +
                                  (int)*psVar18 * (int)*psVar18 + (int)*psVar19 * (int)*psVar19) >>
                          6);
        iVar65 = iVar65 + ((uint)((int)*psVar20 * (int)*psVar20 + (int)*psVar57 * (int)*psVar57 +
                                  (int)*psVar21 * (int)*psVar21 + (int)*psVar22 * (int)*psVar22) >>
                          6);
        iVar66 = iVar66 + ((uint)((int)*psVar24 * (int)*psVar24 + (int)*psVar23 * (int)*psVar23 +
                                  (int)*psVar25 * (int)*psVar25 + (int)*psVar26 * (int)*psVar26) >>
                          6);
        iVar68 = iVar68 + ((uint)((int)*psVar28 * (int)*psVar28 + (int)*psVar27 * (int)*psVar27 +
                                  (int)*psVar29 * (int)*psVar29 + (int)*psVar30 * (int)*psVar30) >>
                          6);
        iVar69 = iVar69 + ((uint)((int)*psVar32 * (int)*psVar32 + (int)*psVar31 * (int)*psVar31 +
                                  (int)*psVar33 * (int)*psVar33 + (int)*psVar34 * (int)*psVar34) >>
                          6);
      } while (lVar46 != 0);
      uVar63 = iVar71 + iVar65 + iVar72 + iVar66 + iVar75 + iVar68 + iVar74 + iVar69;
      goto joined_r0x00111af0;
    }
    uVar63 = 0;
    uVar61 = uVar2;
    do {
      uVar61 = uVar61 - 1;
      uVar63 = uVar63 + ((uint)((int)*psVar53 * (int)*psVar53 + (int)psVar53[1] * (int)psVar53[1] +
                                (int)psVar53[2] * (int)psVar53[2] +
                               (int)psVar53[3] * (int)psVar53[3]) >> 6);
      psVar53 = psVar53 + 4;
      uVar49 = uVar61;
joined_r0x00111af0:
    } while (uVar49 != 0);
    *local_70 = uVar63;
    if (uVar52 < 8) {
      uVar61 = 0;
      psVar36 = param_1;
      uVar49 = uVar2;
    }
    else {
      uVar63 = uVar35 >> 2 & 7;
      lVar54 = uVar52 - uVar63;
      psVar53 = param_1 + 0x10;
      iVar65 = 0;
      iVar66 = 0;
      iVar68 = 0;
      iVar69 = 0;
      lVar46 = ((ulong)(uVar2 - 1) + 1) - (ulong)uVar63;
      psVar36 = param_1 + lVar54 * 4;
      uVar49 = uVar2 - (int)lVar54;
      iVar71 = 0;
      iVar72 = 0;
      iVar75 = 0;
      iVar74 = 0;
      do {
        psVar57 = psVar53 + -0x10;
        sVar76 = *psVar53;
        psVar16 = psVar53 + 1;
        psVar15 = psVar53 + 2;
        psVar14 = psVar53 + 3;
        psVar5 = psVar53 + 4;
        psVar6 = psVar53 + 5;
        psVar7 = psVar53 + 6;
        psVar8 = psVar53 + 7;
        psVar9 = psVar53 + 8;
        psVar10 = psVar53 + 9;
        psVar11 = psVar53 + 10;
        psVar12 = psVar53 + 0xb;
        psVar13 = psVar53 + 0xc;
        psVar17 = psVar53 + 0xd;
        psVar18 = psVar53 + 0xe;
        psVar19 = psVar53 + 0xf;
        psVar29 = psVar53 + -0xf;
        psVar30 = psVar53 + -0xe;
        psVar31 = psVar53 + -0xd;
        psVar32 = psVar53 + -0xc;
        psVar33 = psVar53 + -0xb;
        psVar34 = psVar53 + -10;
        psVar20 = psVar53 + -9;
        psVar21 = psVar53 + -8;
        psVar22 = psVar53 + -7;
        psVar23 = psVar53 + -6;
        psVar24 = psVar53 + -5;
        psVar25 = psVar53 + -4;
        psVar26 = psVar53 + -3;
        psVar27 = psVar53 + -2;
        psVar28 = psVar53 + -1;
        lVar46 = lVar46 + -8;
        psVar53 = psVar53 + 0x20;
        iVar71 = iVar71 + ((uint)((int)*psVar16 * (int)*psVar16 + (int)sVar76 * (int)sVar76 +
                                  (int)*psVar15 * (int)*psVar15 + (int)*psVar14 * (int)*psVar14) >>
                          6);
        iVar72 = iVar72 + ((uint)((int)*psVar6 * (int)*psVar6 + (int)*psVar5 * (int)*psVar5 +
                                  (int)*psVar7 * (int)*psVar7 + (int)*psVar8 * (int)*psVar8) >> 6);
        iVar75 = iVar75 + ((uint)((int)*psVar10 * (int)*psVar10 + (int)*psVar9 * (int)*psVar9 +
                                  (int)*psVar11 * (int)*psVar11 + (int)*psVar12 * (int)*psVar12) >>
                          6);
        iVar74 = iVar74 + ((uint)((int)*psVar17 * (int)*psVar17 + (int)*psVar13 * (int)*psVar13 +
                                  (int)*psVar18 * (int)*psVar18 + (int)*psVar19 * (int)*psVar19) >>
                          6);
        iVar65 = iVar65 + ((uint)((int)*psVar29 * (int)*psVar29 + (int)*psVar57 * (int)*psVar57 +
                                  (int)*psVar30 * (int)*psVar30 + (int)*psVar31 * (int)*psVar31) >>
                          6);
        iVar66 = iVar66 + ((uint)((int)*psVar33 * (int)*psVar33 + (int)*psVar32 * (int)*psVar32 +
                                  (int)*psVar34 * (int)*psVar34 + (int)*psVar20 * (int)*psVar20) >>
                          6);
        iVar68 = iVar68 + ((uint)((int)*psVar22 * (int)*psVar22 + (int)*psVar21 * (int)*psVar21 +
                                  (int)*psVar23 * (int)*psVar23 + (int)*psVar24 * (int)*psVar24) >>
                          6);
        iVar69 = iVar69 + ((uint)((int)*psVar26 * (int)*psVar26 + (int)*psVar25 * (int)*psVar25 +
                                  (int)*psVar27 * (int)*psVar27 + (int)*psVar28 * (int)*psVar28) >>
                          6);
      } while (lVar46 != 0);
      uVar61 = iVar71 + iVar65 + iVar72 + iVar66 + iVar75 + iVar68 + iVar74 + iVar69;
      if (uVar63 == 0) goto LAB_00111be8;
    }
    do {
      uVar49 = uVar49 - 1;
      uVar61 = uVar61 + ((uint)((int)*psVar36 * (int)*psVar36 + (int)psVar36[1] * (int)psVar36[1] +
                                (int)psVar36[2] * (int)psVar36[2] +
                               (int)psVar36[3] * (int)psVar36[3]) >> 6);
      psVar36 = psVar36 + 4;
    } while (uVar49 != 0);
  }
LAB_00111be8:
  if ((int)uVar37 < iVar62) {
    uVar37 = ~uVar37;
    lVar46 = iVar62 - lVar45;
    uVar49 = *local_70;
    puVar47 = local_70;
    do {
      puVar47 = puVar47 + 1;
      lVar46 = lVar46 + -1;
      uVar49 = (uVar49 + ((uint)((int)param_1[(int)uVar37] * (int)param_1[(int)uVar37]) >> 6)) -
               ((uint)((int)param_1[(int)(uVar35 + uVar37)] * (int)param_1[(int)(uVar35 + uVar37)])
               >> 6);
      uVar49 = uVar49 & ((int)uVar49 >> 0x1f ^ 0xffffffffU);
      *puVar47 = uVar49;
      uVar37 = uVar37 - 1;
    } while (lVar46 != 0);
  }
  local_b8 = lVar59;
  local_88 = lVar45;
  local_78 = (long)iVar62;
  uVar35 = normalize16(local_70,lVar59,0x7ffe,uVar50 & 0xffffffff);
  uVar37 = (uint)local_90;
  if (-1 < (int)local_bc) {
    uVar49 = uVar37 >> 2 & 7;
    uVar52 = (ulong)(uVar2 - 1) + 1;
    lVar45 = uVar52 - uVar49;
    uVar44 = 0;
    lVar59 = local_78 * -2;
    do {
      if (uVar2 == 0) {
        uVar63 = 0;
      }
      else {
        psVar53 = param_1 + (uVar44 - local_78);
        if (uVar52 < 8) {
          uVar63 = 0;
          psVar36 = param_1;
          uVar38 = uVar2;
        }
        else {
          psVar53 = psVar53 + lVar45 * 4;
          iVar62 = 0;
          iVar65 = 0;
          iVar66 = 0;
          iVar68 = 0;
          iVar69 = 0;
          iVar71 = 0;
          iVar72 = 0;
          iVar75 = 0;
          psVar36 = param_1;
          lVar46 = lVar45;
          do {
            sVar76 = *psVar36;
            psVar7 = psVar36 + 1;
            psVar18 = psVar36 + 2;
            psVar17 = psVar36 + 3;
            psVar16 = psVar36 + 4;
            psVar15 = psVar36 + 5;
            psVar14 = psVar36 + 6;
            psVar5 = psVar36 + 7;
            psVar6 = psVar36 + 8;
            psVar19 = psVar36 + 9;
            psVar8 = psVar36 + 10;
            psVar9 = psVar36 + 0xb;
            psVar10 = psVar36 + 0xc;
            psVar11 = psVar36 + 0xd;
            psVar12 = psVar36 + 0xe;
            psVar28 = psVar36 + 0xf;
            psVar39 = (short *)((long)psVar36 + lVar59);
            psVar13 = psVar36 + 0x10;
            psVar31 = psVar36 + 0x11;
            psVar30 = psVar36 + 0x12;
            psVar29 = psVar36 + 0x13;
            psVar32 = psVar36 + 0x14;
            psVar33 = psVar36 + 0x15;
            psVar34 = psVar36 + 0x16;
            psVar20 = psVar36 + 0x17;
            psVar21 = psVar36 + 0x18;
            psVar22 = psVar36 + 0x19;
            psVar23 = psVar36 + 0x1a;
            psVar24 = psVar36 + 0x1b;
            psVar25 = psVar36 + 0x1c;
            psVar26 = psVar36 + 0x1d;
            psVar27 = psVar36 + 0x1e;
            psVar57 = psVar36 + 0x1f;
            lVar46 = lVar46 + -8;
            psVar36 = psVar36 + 0x20;
            iVar62 = iVar62 + ((int)psVar39[1] * (int)*psVar7 + (int)*psVar39 * (int)sVar76 +
                               (int)psVar39[2] * (int)*psVar18 + (int)psVar39[3] * (int)*psVar17 >>
                              6);
            iVar65 = iVar65 + ((int)psVar39[5] * (int)*psVar15 + (int)psVar39[4] * (int)*psVar16 +
                               (int)psVar39[6] * (int)*psVar14 + (int)psVar39[7] * (int)*psVar5 >> 6
                              );
            iVar66 = iVar66 + ((int)psVar39[9] * (int)*psVar19 + (int)psVar39[8] * (int)*psVar6 +
                               (int)psVar39[10] * (int)*psVar8 + (int)psVar39[0xb] * (int)*psVar9 >>
                              6);
            iVar68 = iVar68 + ((int)psVar39[0xd] * (int)*psVar11 + (int)psVar39[0xc] * (int)*psVar10
                               + (int)psVar39[0xe] * (int)*psVar12 +
                               (int)psVar39[0xf] * (int)*psVar28 >> 6);
            iVar69 = iVar69 + ((int)psVar39[0x11] * (int)*psVar31 +
                               (int)psVar39[0x10] * (int)*psVar13 +
                               (int)psVar39[0x12] * (int)*psVar30 +
                               (int)psVar39[0x13] * (int)*psVar29 >> 6);
            iVar71 = iVar71 + ((int)psVar39[0x15] * (int)*psVar33 +
                               (int)psVar39[0x14] * (int)*psVar32 +
                               (int)psVar39[0x16] * (int)*psVar34 +
                               (int)psVar39[0x17] * (int)*psVar20 >> 6);
            iVar72 = iVar72 + ((int)psVar39[0x19] * (int)*psVar22 +
                               (int)psVar39[0x18] * (int)*psVar21 +
                               (int)psVar39[0x1a] * (int)*psVar23 +
                               (int)psVar39[0x1b] * (int)*psVar24 >> 6);
            iVar75 = iVar75 + ((int)psVar39[0x1d] * (int)*psVar26 +
                               (int)psVar39[0x1c] * (int)*psVar25 +
                               (int)psVar39[0x1e] * (int)*psVar27 +
                               (int)psVar39[0x1f] * (int)*psVar57 >> 6);
          } while (lVar46 != 0);
          uVar63 = iVar69 + iVar62 + iVar71 + iVar65 + iVar72 + iVar66 + iVar75 + iVar68;
          psVar36 = param_1 + lVar45 * 4;
          uVar38 = uVar2 - (int)lVar45;
          if (uVar49 == 0) goto LAB_00111d78;
        }
        do {
          uVar38 = uVar38 - 1;
          uVar63 = uVar63 + ((int)*psVar53 * (int)*psVar36 + (int)psVar53[1] * (int)psVar36[1] +
                             (int)psVar53[2] * (int)psVar36[2] + (int)psVar53[3] * (int)psVar36[3]
                            >> 6);
          psVar53 = psVar53 + 4;
          psVar36 = psVar36 + 4;
        } while (uVar38 != 0);
      }
LAB_00111d78:
      iVar62 = (int)uVar44;
      uVar44 = uVar44 + 1;
      lVar59 = lVar59 + 2;
      local_70[(int)(local_bc - iVar62)] = uVar63;
    } while (uVar44 != uVar50);
  }
  iVar62 = (int)local_c8;
  local_bc = uVar35;
  uVar35 = normalize16(local_70,local_98,0xb4);
  lVar45 = local_98;
  lVar59 = local_b8;
  uVar2 = local_bc;
  if (((local_cc ^ 1) & 1) == 0 && iVar62 < (int)uVar37) {
    lVar54 = (long)iVar62;
    uVar50 = (int)local_90 - lVar54;
    lVar46 = lVar54;
    if (0xf < uVar50) {
      uVar44 = uVar50 & 0xfffffffffffffff0;
      lVar46 = uVar44 + lVar54;
      psVar53 = param_1 + lVar54 + 8;
      uVar52 = uVar44;
      do {
        uVar67 = *(undefined8 *)(psVar53 + -4);
        uVar64 = *(undefined8 *)(psVar53 + -8);
        uVar73 = *(undefined8 *)(psVar53 + 4);
        uVar70 = *(undefined8 *)psVar53;
        uVar52 = uVar52 - 0x10;
        *(ulong *)(psVar53 + -4) =
             CONCAT26((short)((ulong)uVar67 >> 0x30) << 1,
                      CONCAT24((short)((ulong)uVar67 >> 0x20) << 1,
                               CONCAT22((short)((ulong)uVar67 >> 0x10) << 1,(short)uVar67 << 1)));
        *(ulong *)(psVar53 + -8) =
             CONCAT26((short)((ulong)uVar64 >> 0x30) << 1,
                      CONCAT24((short)((ulong)uVar64 >> 0x20) << 1,
                               CONCAT22((short)((ulong)uVar64 >> 0x10) << 1,(short)uVar64 << 1)));
        *(ulong *)(psVar53 + 4) =
             CONCAT26((short)((ulong)uVar73 >> 0x30) << 1,
                      CONCAT24((short)((ulong)uVar73 >> 0x20) << 1,
                               CONCAT22((short)((ulong)uVar73 >> 0x10) << 1,(short)uVar73 << 1)));
        *(ulong *)psVar53 =
             CONCAT26((short)((ulong)uVar70 >> 0x30) << 1,
                      CONCAT24((short)((ulong)uVar70 >> 0x20) << 1,
                               CONCAT22((short)((ulong)uVar70 >> 0x10) << 1,(short)uVar70 << 1)));
        psVar53 = psVar53 + 0x10;
      } while (uVar52 != 0);
      if (uVar50 == uVar44) goto LAB_00111e40;
    }
    lVar54 = (int)local_90 - lVar46;
    psVar53 = param_1 + lVar46;
    do {
      lVar54 = lVar54 + -1;
      *psVar53 = *psVar53 << 1;
      psVar53 = psVar53 + 1;
    } while (lVar54 != 0);
  }
LAB_00111e40:
  iVar62 = (int)local_a0;
  uVar50 = local_80;
  if (iVar62 <= (int)local_a8) {
    lVar51 = (long)(int)local_80 + -1;
    iVar65 = (int)local_d8;
    lVar48 = (long)iVar65;
    lVar56 = lVar48 * 4;
    lVar46 = local_88;
    uVar52 = local_78;
    lVar54 = local_88;
    do {
      lVar58 = (lVar54 - lVar46) * 2;
      sVar76 = *(short *)(lVar45 + lVar58);
      iVar66 = *(short *)(lVar59 + lVar58) + 1;
      iVar68 = (int)(short)(sVar76 * sVar76);
      if ((int)*(short *)((long)__s + lVar56) * (int)(short)iVar66 <
          *(short *)((long)__s_00 + lVar56) * iVar68) {
        *(int *)((long)__s + lVar56) = iVar68;
        *(int *)((long)__s_00 + lVar56) = iVar66;
        param_5[lVar48] = (int)lVar54;
        if (1 < (int)uVar50) {
          lVar58 = 0;
LAB_00111ecc:
          lVar60 = lVar58 * 4;
          if (*(short *)((long)__s_00 + lVar60) * iVar68 <=
              (int)*(short *)((long)__s + lVar60) * (int)(short)iVar66) goto code_r0x00111ee8;
          lVar46 = lVar51;
          puVar40 = (undefined4 *)((long)__s + lVar51 * 4);
          puVar41 = (undefined4 *)((long)__s_00 + lVar51 * 4);
          piVar42 = param_5 + lVar51;
          if ((int)lVar58 < iVar65) {
            do {
              lVar46 = lVar46 + -1;
              *puVar40 = puVar40[-1];
              *puVar41 = puVar41[-1];
              *piVar42 = piVar42[-1];
              puVar40 = puVar40 + -1;
              puVar41 = puVar41 + -1;
              piVar42 = piVar42 + -1;
            } while (lVar58 < lVar46);
          }
          *(int *)((long)__s + lVar60) = iVar68;
          *(int *)((long)__s_00 + lVar60) = iVar66;
          param_5[lVar58] = (int)lVar54;
          uVar50 = local_80;
          lVar46 = local_88;
          uVar52 = local_78;
        }
      }
LAB_00111f60:
      bVar4 = lVar54 < (long)uVar52;
      lVar54 = lVar54 + 1;
    } while (bVar4);
  }
  if ((param_6 != (undefined2 *)0x0) && (0 < (int)uVar50)) {
    bVar4 = uVar61 >> 0x10 != 0;
    uVar37 = uVar61 >> 0x10;
    if (!bVar4) {
      uVar37 = uVar61;
    }
    uVar49 = uVar37 >> 8;
    if (uVar37 < 0x100) {
      uVar49 = uVar37;
    }
    uVar63 = (uint)bVar4 << 3 | 4;
    if (uVar37 < 0x100) {
      uVar63 = (uint)bVar4 << 3;
    }
    uVar37 = uVar49 >> 4;
    if (uVar49 < 0x10) {
      uVar37 = uVar49;
    }
    uVar38 = uVar63 | 2;
    if (uVar49 < 0x10) {
      uVar38 = uVar63;
    }
    uVar38 = uVar38 | 3 < uVar37;
    sVar76 = (short)((int)uVar61 >> (uVar38 * 2 - 0xc & 0x1f));
    if ((ushort)uVar38 < 7) {
      sVar76 = (short)(uVar61 << (ulong)(uVar38 * -2 + 0xc & 0x1f));
    }
    iVar65 = (int)sVar76;
    uVar38 = 0xd - uVar38;
    iVar65 = (int)((((int)(((iVar65 * 0x41b0 + -0x31530000 >> 0x10) * iVar65 * 4 & 0xffff0000U) +
                          0x52b50000) >> 0x10) * iVar65 * 4 & 0xffff0000U) + 0xe320000) >> 0x10;
    sVar76 = (short)(iVar65 >> (uVar38 & 0x1f));
    if ((int)uVar38 < 1) {
      sVar76 = (short)(iVar65 << (ulong)(-uVar38 & 0x1f));
    }
    do {
      uVar37 = *param_5 - iVar62;
      uVar50 = -(ulong)(uVar37 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar37 << 1;
      uVar61 = (int)*(short *)(lVar59 + uVar50) << (ulong)(uVar2 & 0x1f);
      uVar49 = uVar61 >> 0x10;
      uVar37 = uVar49;
      if (uVar49 == 0) {
        uVar37 = uVar61;
      }
      uVar38 = (uint)(uVar49 != 0);
      uVar49 = uVar38 << 3 | 4;
      uVar63 = uVar37 >> 8;
      if (uVar37 < 0x100) {
        uVar49 = uVar38 << 3;
        uVar63 = uVar37;
      }
      uVar37 = uVar49 | 2;
      uVar38 = uVar63 >> 4;
      if (uVar63 < 0x10) {
        uVar37 = uVar49;
        uVar38 = uVar63;
      }
      uVar37 = uVar37 | 3 < uVar38;
      sVar1 = (short)((int)uVar61 >> (uVar37 * 2 - 0xc & 0x1f));
      if ((ushort)uVar37 < 7) {
        sVar1 = (short)(uVar61 << (ulong)(uVar37 * -2 + 0xc & 0x1f));
      }
      iVar65 = (int)sVar1;
      uVar37 = 0xd - uVar37;
      iVar65 = (int)((((int)(((iVar65 * 0x41b0 + -0x31530000 >> 0x10) * iVar65 * 4 & 0xffff0000U) +
                            0x52b50000) >> 0x10) * iVar65 * 4 & 0xffff0000U) + 0xe320000) >> 0x10;
      sVar1 = (short)(iVar65 >> (uVar37 & 0x1f));
      if ((int)uVar37 < 1) {
        sVar1 = (short)(iVar65 << (ulong)(-uVar37 & 0x1f));
      }
      iVar65 = ((int)sVar1 * (int)sVar76 >> 6) + 10;
      uVar37 = 0;
      if (iVar65 != 0) {
        uVar37 = ((int)*(short *)(lVar45 + uVar50) << (ulong)(uVar35 & 0x1f)) / iVar65;
      }
      uVar3 = (undefined2)uVar37;
      if ((uVar37 & 0x8000) != 0) {
        uVar3 = 0;
      }
      uVar43 = uVar43 - 1;
      *param_6 = uVar3;
      param_6 = param_6 + 1;
      param_5 = param_5 + 1;
    } while (uVar43 != 0);
  }
  if (*(long *)(local_b0 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

