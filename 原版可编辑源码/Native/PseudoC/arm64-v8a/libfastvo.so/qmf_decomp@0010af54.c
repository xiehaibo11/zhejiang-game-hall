
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void qmf_decomp(long param_1,long param_2,long param_3,long param_4,ulong param_5,ulong param_6,
               ulong param_7)

{
  bool bVar1;
  undefined1 (*pauVar2) [16];
  uint uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  unkbyte10 Var14;
  short *psVar15;
  short *psVar22;
  uint uVar29;
  undefined2 *puVar30;
  uint uVar31;
  long lVar32;
  long lVar33;
  ulong uVar34;
  long lVar35;
  ulong uVar36;
  long lVar37;
  int iVar38;
  int iVar39;
  undefined1 (*pauVar40) [16];
  undefined8 *puVar41;
  short *psVar42;
  uint uVar43;
  short *psVar44;
  undefined2 uVar45;
  undefined2 *puVar46;
  short *psVar47;
  ulong uVar48;
  short *psVar49;
  long lVar50;
  int iVar51;
  int iVar55;
  int iVar56;
  int iVar57;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  int iVar58;
  int iVar61;
  int iVar62;
  int iVar63;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  short sVar69;
  short sVar70;
  undefined8 uVar68;
  short sVar71;
  short sVar72;
  short sVar74;
  short sVar75;
  undefined8 uVar73;
  short sVar76;
  short sVar78;
  short sVar79;
  undefined8 uVar77;
  short sVar80;
  short sVar82;
  short sVar83;
  undefined8 uVar81;
  short sVar84;
  undefined8 uStack_ae;
  undefined2 uStack_a0;
  undefined8 uStack_9e;
  undefined8 local_90;
  long local_88;
  short *local_80;
  uint local_78;
  uint local_74;
  ulong local_70;
  long local_68;
  short *psVar16;
  short *psVar17;
  short *psVar18;
  short *psVar19;
  short *psVar20;
  short *psVar21;
  short *psVar23;
  short *psVar24;
  short *psVar25;
  short *psVar26;
  short *psVar27;
  short *psVar28;
  
  Var14 = _DAT_00134b10;
  local_90 = tpidr_el0;
  uVar34 = param_6 & 0xffffffff;
  local_68 = *(long *)(local_90 + 0x28);
  lVar13 = -(uVar34 * 2 + 0xf & 0x3fffffff0);
  lVar37 = lVar13 + -0x90;
  uVar31 = (uint)param_6;
  uVar29 = (uint)param_5;
  lVar33 = (long)&local_90 +
           (lVar37 - ((ulong)((uVar31 - 1) + uVar29) * 2 + 0xf & 0x3fffffff0)) + 0x90;
  uVar43 = uVar31 - 1;
  if ((int)uVar31 < 1) {
    bVar1 = false;
  }
  else {
    if (uVar31 < 0x10) {
      uVar36 = 0;
LAB_0010afd4:
      iVar38 = uVar43 - (int)uVar36;
      lVar35 = uVar34 - uVar36;
      puVar30 = (undefined2 *)(param_2 + uVar36 * 2);
      do {
        lVar35 = lVar35 + -1;
        *(undefined2 *)((long)&local_90 + (long)iVar38 * 2 + lVar37 + 0x90) = *puVar30;
        iVar38 = iVar38 + -1;
        puVar30 = puVar30 + 1;
      } while (lVar35 != 0);
    }
    else {
      uVar36 = 0;
      if (((int)uVar43 < (int)(uVar43 - (int)(uVar34 - 1))) || (uVar34 - 1 >> 0x20 != 0))
      goto LAB_0010afd4;
      uVar36 = param_6 & 0xfffffff0;
      pauVar40 = (undefined1 (*) [16])(param_2 + 0x10);
      uVar48 = uVar36;
      uVar3 = uVar43;
      do {
        pauVar2 = pauVar40 + -1;
        auVar8 = *pauVar40;
        lVar35 = (long)(int)uVar3 * 2 + lVar37;
        pauVar40 = pauVar40 + 2;
        uVar48 = uVar48 - 0x10;
        auVar54._10_2_ = 0x504;
        auVar54._0_10_ = _DAT_00134b10;
        auVar54._12_2_ = 0x302;
        auVar54._14_2_ = 0x100;
        auVar54 = a64_TBL(ZEXT816(0),*pauVar2,auVar54);
        auVar60._10_2_ = 0x504;
        auVar60._0_10_ = _DAT_00134b10;
        auVar60._12_2_ = 0x302;
        auVar60._14_2_ = 0x100;
        auVar60 = a64_TBL(ZEXT816(0),auVar8,auVar60);
        uVar3 = uVar3 - 0x10;
        *(long *)(&stack0xffffffffffffff6a + lVar35 + 0x90) = auVar54._8_8_;
        *(long *)((long)&uStack_9e + lVar35 + 0x90) = auVar54._0_8_;
        *(long *)(&stack0xffffffffffffff5a + lVar35 + 0x90) = auVar60._8_8_;
        *(long *)((long)&uStack_ae + lVar35 + 0x90) = auVar60._0_8_;
      } while (uVar48 != 0);
      if (uVar36 != uVar34) goto LAB_0010afd4;
    }
    bVar1 = 1 < (int)uVar31;
    if ((int)uVar31 < 2) {
      bVar1 = false;
    }
    else {
      iVar38 = uVar31 - 2;
      uVar34 = (ulong)uVar43;
      if (uVar43 < 0x10) {
        uVar36 = 0;
      }
      else {
        uVar36 = 0;
        if ((iVar38 - (int)(uVar34 - 1) <= iVar38) && (uVar34 - 1 >> 0x20 == 0)) {
          uVar36 = uVar34 & 0xfffffff0;
          puVar41 = (undefined8 *)(lVar33 + 0x10);
          uVar48 = uVar36;
          iVar39 = iVar38;
          do {
            lVar37 = param_7 + (long)iVar39 * 2;
            uVar48 = uVar48 - 0x10;
            iVar39 = iVar39 + -0x10;
            auVar8._10_2_ = 0x504;
            auVar8._0_10_ = _DAT_00134b10;
            auVar8._12_2_ = 0x302;
            auVar8._14_2_ = 0x100;
            auVar54 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(lVar37 + -0xe),auVar8);
            auVar9._10_2_ = 0x504;
            auVar9._0_10_ = _DAT_00134b10;
            auVar9._12_2_ = 0x302;
            auVar9._14_2_ = 0x100;
            auVar60 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(lVar37 + -0x1e),auVar9);
            puVar41[-1] = auVar54._8_8_;
            puVar41[-2] = auVar54._0_8_;
            puVar41[1] = auVar60._8_8_;
            *puVar41 = auVar60._0_8_;
            puVar41 = puVar41 + 4;
          } while (uVar48 != 0);
          if (uVar36 == uVar34) goto joined_r0x0010b040;
        }
      }
      iVar38 = iVar38 - (int)uVar36;
      lVar37 = uVar34 - uVar36;
      puVar30 = (undefined2 *)(lVar33 + uVar36 * 2);
      do {
        lVar35 = (long)iVar38;
        lVar37 = lVar37 + -1;
        iVar38 = iVar38 + -1;
        *puVar30 = *(undefined2 *)(param_7 + lVar35 * 2);
        puVar30 = puVar30 + 1;
      } while (lVar37 != 0);
    }
  }
joined_r0x0010b040:
  if (0 < (int)uVar29) {
    uVar34 = param_5 & 0xffffffff;
    if (uVar29 < 0x10) {
      uVar36 = 0;
    }
    else {
      uVar36 = 0;
      if (((int)uVar43 <= (int)(uVar43 + (int)(uVar34 - 1))) && (uVar34 - 1 >> 0x20 == 0)) {
        uVar36 = param_5 & 0xfffffff0;
        psVar42 = (short *)(param_1 + 0x10);
        uVar48 = uVar36;
        uVar3 = uVar43;
        do {
          uVar73 = *(undefined8 *)(psVar42 + -4);
          uVar68 = *(undefined8 *)(psVar42 + -8);
          sVar69 = *psVar42;
          psVar47 = psVar42 + 1;
          psVar44 = psVar42 + 2;
          psVar20 = psVar42 + 3;
          psVar21 = psVar42 + 4;
          psVar15 = psVar42 + 5;
          psVar16 = psVar42 + 6;
          psVar17 = psVar42 + 7;
          puVar41 = (undefined8 *)(lVar33 + (long)(int)uVar3 * 2);
          psVar42 = psVar42 + 0x10;
          uVar48 = uVar48 - 0x10;
          auVar52._0_8_ =
               CONCAT26(*psVar20 >> 1,CONCAT24(*psVar44 >> 1,CONCAT22(*psVar47 >> 1,sVar69 >> 1)));
          auVar52._8_2_ = *psVar21 >> 1;
          auVar52._10_2_ = *psVar15 >> 1;
          auVar52._12_2_ = *psVar16 >> 1;
          auVar52._14_2_ = *psVar17 >> 1;
          uVar3 = uVar3 + 0x10;
          puVar41[1] = CONCAT26((short)((long)uVar73 >> 0x31),
                                CONCAT24((short)((ulong)uVar73 >> 0x20) >> 1,
                                         CONCAT22((short)((ulong)uVar73 >> 0x10) >> 1,
                                                  (short)uVar73 >> 1)));
          *puVar41 = CONCAT26((short)((long)uVar68 >> 0x31),
                              CONCAT24((short)((ulong)uVar68 >> 0x20) >> 1,
                                       CONCAT22((short)((ulong)uVar68 >> 0x10) >> 1,
                                                (short)uVar68 >> 1)));
          puVar41[3] = auVar52._8_8_;
          puVar41[2] = auVar52._0_8_;
        } while (uVar48 != 0);
        if (uVar36 == uVar34) goto LAB_0010b0f4;
      }
    }
    iVar38 = uVar31 + (int)uVar36 + -1;
    lVar37 = uVar34 - uVar36;
    psVar42 = (short *)(param_1 + uVar36 * 2);
    do {
      lVar37 = lVar37 + -1;
      *(short *)(lVar33 + (long)iVar38 * 2) = (short)((ulong)(long)*psVar42 >> 1);
      iVar38 = iVar38 + 1;
      psVar42 = psVar42 + 1;
    } while (lVar37 != 0);
  }
LAB_0010b0f4:
  iVar38 = uVar29 - 1;
  if (!bVar1) goto LAB_0010b130;
  uVar34 = (ulong)uVar43;
  if (uVar43 < 0x10) {
LAB_0010b104:
    uVar36 = 0;
    iVar39 = 0;
  }
  else {
    uVar36 = 0;
    iVar39 = 0;
    if ((iVar38 - (int)(uVar34 - 1) <= iVar38) && (iVar39 = 0, uVar34 - 1 >> 0x20 == 0)) {
      if ((param_7 < (ulong)(param_1 + ((long)iVar38 + 1) * 2)) &&
         (param_1 + (((long)iVar38 + 1) - uVar34) * 2 < param_7 + uVar34 * 2)) goto LAB_0010b104;
      uVar36 = uVar34 & 0xfffffff0;
      puVar41 = (undefined8 *)(param_7 + 0x10);
      uVar48 = uVar36;
      iVar39 = iVar38;
      do {
        psVar42 = (short *)(param_1 + (long)iVar39 * 2);
        uVar48 = uVar48 - 0x10;
        iVar39 = iVar39 + -0x10;
        auVar53._0_2_ = psVar42[-7] >> 1;
        auVar53._2_2_ = psVar42[-6] >> 1;
        auVar53._4_2_ = psVar42[-5] >> 1;
        auVar53._6_2_ = psVar42[-4] >> 1;
        auVar53._8_2_ = psVar42[-3] >> 1;
        auVar53._10_2_ = psVar42[-2] >> 1;
        auVar53._12_2_ = psVar42[-1] >> 1;
        auVar53._14_2_ = *psVar42 >> 1;
        auVar59._0_2_ = psVar42[-0xf] >> 1;
        auVar59._2_2_ = psVar42[-0xe] >> 1;
        auVar59._4_2_ = psVar42[-0xd] >> 1;
        auVar59._6_2_ = psVar42[-0xc] >> 1;
        auVar59._8_2_ = psVar42[-0xb] >> 1;
        auVar59._10_2_ = psVar42[-10] >> 1;
        auVar59._12_2_ = psVar42[-9] >> 1;
        auVar59._14_2_ = psVar42[-8] >> 1;
        auVar6._10_2_ = 0x504;
        auVar6._0_10_ = Var14;
        auVar6._12_2_ = 0x302;
        auVar6._14_2_ = 0x100;
        auVar54 = a64_TBL(ZEXT816(0),auVar53,auVar6);
        auVar7._10_2_ = 0x504;
        auVar7._0_10_ = Var14;
        auVar7._12_2_ = 0x302;
        auVar7._14_2_ = 0x100;
        auVar60 = a64_TBL(ZEXT816(0),auVar59,auVar7);
        puVar41[-1] = auVar54._8_8_;
        puVar41[-2] = auVar54._0_8_;
        puVar41[1] = auVar60._8_8_;
        *puVar41 = auVar60._0_8_;
        puVar41 = puVar41 + 4;
      } while (uVar48 != 0);
      iVar39 = (int)uVar36;
      if (uVar36 == uVar34) goto LAB_0010b130;
    }
  }
  lVar37 = uVar34 - uVar36;
  iVar38 = iVar38 - iVar39;
  puVar30 = (undefined2 *)(param_7 + uVar36 * 2);
  do {
    lVar35 = (long)iVar38;
    lVar37 = lVar37 + -1;
    iVar38 = iVar38 + -1;
    *puVar30 = (short)((ulong)(long)*(short *)(param_1 + lVar35 * 2) >> 1);
    puVar30 = puVar30 + 1;
  } while (lVar37 != 0);
LAB_0010b130:
  if (0 < (int)uVar29) {
    lVar35 = (long)((int)uVar31 >> 1);
    lVar37 = lVar35;
    if (lVar35 < 3) {
      lVar37 = 2;
    }
    uVar36 = lVar37 - 1U >> 1;
    local_80 = (short *)((long)&local_80 + lVar13);
    puVar30 = (undefined2 *)(lVar33 + (long)(int)uVar31 * 2 + -0x10);
    local_70 = lVar37 - 1U >> 0x21;
    uVar34 = uVar36 + 1;
    uVar43 = (uint)uVar36;
    local_74 = uVar43 * 2;
    uVar36 = 0;
    iVar38 = 0;
    psVar42 = (short *)(lVar33 + 0x10);
    local_78 = (uint)CARRY4(uVar43,uVar43);
    local_88 = (uVar34 - (uVar34 & 7)) * 2;
    lVar37 = lVar33;
    do {
      if (bVar1) {
        if ((uVar34 < 8) ||
           ((CARRY4((int)uVar36 << 1 | 1,uVar43 * 2) || local_70 != 0) || CARRY4(uVar43,uVar43) != 0
           )) {
          iVar39 = 0;
          iVar58 = 0;
          lVar32 = 0;
LAB_0010b2f4:
          psVar47 = (short *)((long)&local_90 + lVar32 * 2 + lVar13 + 2);
          lVar50 = (long)(int)uVar31 * 2 + -4 + lVar32 * -2;
          do {
            sVar71 = *(short *)(lVar37 + lVar32 * 2);
            sVar69 = ((short *)(lVar37 + lVar50))[1];
            sVar70 = *(short *)(lVar37 + lVar50);
            sVar72 = *(short *)(lVar33 + (ulong)(iVar38 + (int)lVar32 + 1) * 2);
            psVar44 = psVar47 + -1;
            sVar74 = *psVar47;
            lVar32 = lVar32 + 2;
            psVar47 = psVar47 + 2;
            iVar58 = iVar58 + (int)(short)(sVar69 + sVar71) * (int)*psVar44 +
                     (int)(short)(sVar70 + sVar72) * (int)sVar74;
            iVar39 = (iVar39 - (int)(short)(sVar71 - sVar69) * (int)*psVar44) +
                     (int)(short)(sVar72 - sVar70) * (int)sVar74;
            lVar50 = lVar50 + -4;
          } while (lVar32 < lVar35);
        }
        else {
          iVar39 = 0;
          iVar10 = 0;
          iVar11 = 0;
          iVar12 = 0;
          iVar51 = 0;
          iVar55 = 0;
          iVar56 = 0;
          iVar57 = 0;
          iVar58 = 0;
          iVar61 = 0;
          iVar62 = 0;
          iVar63 = 0;
          iVar64 = 0;
          iVar65 = 0;
          iVar66 = 0;
          iVar67 = 0;
          psVar44 = (short *)((long)&local_80 + lVar13);
          puVar46 = puVar30;
          psVar47 = psVar42;
          uVar48 = uVar34 & 0xfffffffffffffff8;
          do {
            psVar49 = psVar47 + -8;
            sVar72 = *psVar47;
            psVar15 = psVar47 + 1;
            psVar16 = psVar47 + 2;
            psVar17 = psVar47 + 3;
            psVar18 = psVar47 + 4;
            psVar19 = psVar47 + 5;
            psVar20 = psVar47 + 6;
            psVar21 = psVar47 + 7;
            psVar22 = psVar47 + -7;
            psVar23 = psVar47 + -6;
            psVar24 = psVar47 + -5;
            psVar25 = psVar47 + -4;
            psVar26 = psVar47 + -3;
            psVar27 = psVar47 + -2;
            psVar28 = psVar47 + -1;
            uVar81 = NEON_rev64(CONCAT26(puVar46[6],
                                         CONCAT24(puVar46[4],CONCAT22(puVar46[2],*puVar46))),2);
            uVar73 = NEON_rev64(CONCAT26(puVar46[7],
                                         CONCAT24(puVar46[5],CONCAT22(puVar46[3],puVar46[1]))),2);
            uVar77 = NEON_rev64(CONCAT26(puVar46[-2],
                                         CONCAT24(puVar46[-4],CONCAT22(puVar46[-6],puVar46[-8]))),2)
            ;
            uVar68 = NEON_rev64(CONCAT26(puVar46[-1],
                                         CONCAT24(puVar46[-3],CONCAT22(puVar46[-5],puVar46[-7]))),2)
            ;
            sVar74 = (short)((ulong)uVar73 >> 0x10);
            sVar75 = (short)((ulong)uVar73 >> 0x20);
            sVar76 = (short)((ulong)uVar73 >> 0x30);
            sVar82 = (short)((ulong)uVar81 >> 0x10);
            sVar83 = (short)((ulong)uVar81 >> 0x20);
            sVar84 = (short)((ulong)uVar81 >> 0x30);
            sVar69 = (short)((ulong)uVar68 >> 0x10);
            sVar70 = (short)((ulong)uVar68 >> 0x20);
            sVar71 = (short)((ulong)uVar68 >> 0x30);
            sVar78 = (short)((ulong)uVar77 >> 0x10);
            sVar79 = (short)((ulong)uVar77 >> 0x20);
            sVar80 = (short)((ulong)uVar77 >> 0x30);
            uVar48 = uVar48 - 8;
            psVar47 = psVar47 + 0x10;
            puVar46 = puVar46 + -0x10;
            iVar58 = iVar58 + (int)(short)((short)uVar73 + *psVar49) * (int)psVar44[-8] +
                     (int)(short)((short)uVar81 + *psVar22) * (int)psVar44[-7];
            iVar61 = iVar61 + (int)(short)(sVar74 + *psVar23) * (int)psVar44[-6] +
                     (int)(short)(sVar82 + *psVar24) * (int)psVar44[-5];
            iVar62 = iVar62 + (int)(short)(sVar75 + *psVar25) * (int)psVar44[-4] +
                     (int)(short)(sVar83 + *psVar26) * (int)psVar44[-3];
            iVar63 = iVar63 + (int)(short)(sVar76 + *psVar27) * (int)psVar44[-2] +
                     (int)(short)(sVar84 + *psVar28) * (int)psVar44[-1];
            iVar39 = (iVar39 - (int)(short)(*psVar49 - (short)uVar73) * (int)psVar44[-8]) +
                     (int)(short)(*psVar22 - (short)uVar81) * (int)psVar44[-7];
            iVar10 = (iVar10 - (int)(short)(*psVar23 - sVar74) * (int)psVar44[-6]) +
                     (int)(short)(*psVar24 - sVar82) * (int)psVar44[-5];
            iVar11 = (iVar11 - (int)(short)(*psVar25 - sVar75) * (int)psVar44[-4]) +
                     (int)(short)(*psVar26 - sVar83) * (int)psVar44[-3];
            iVar12 = (iVar12 - (int)(short)(*psVar27 - sVar76) * (int)psVar44[-2]) +
                     (int)(short)(*psVar28 - sVar84) * (int)psVar44[-1];
            iVar64 = iVar64 + (int)(short)((short)uVar68 + sVar72) * (int)*psVar44 +
                     (int)(short)((short)uVar77 + *psVar15) * (int)psVar44[1];
            iVar65 = iVar65 + (int)(short)(sVar69 + *psVar16) * (int)psVar44[2] +
                     (int)(short)(sVar78 + *psVar17) * (int)psVar44[3];
            iVar66 = iVar66 + (int)(short)(sVar70 + *psVar18) * (int)psVar44[4] +
                     (int)(short)(sVar79 + *psVar19) * (int)psVar44[5];
            iVar67 = iVar67 + (int)(short)(sVar71 + *psVar20) * (int)psVar44[6] +
                     (int)(short)(sVar80 + *psVar21) * (int)psVar44[7];
            iVar51 = (iVar51 - (int)(short)(sVar72 - (short)uVar68) * (int)*psVar44) +
                     (int)(short)(*psVar15 - (short)uVar77) * (int)psVar44[1];
            iVar55 = (iVar55 - (int)(short)(*psVar16 - sVar69) * (int)psVar44[2]) +
                     (int)(short)(*psVar17 - sVar78) * (int)psVar44[3];
            iVar56 = (iVar56 - (int)(short)(*psVar18 - sVar70) * (int)psVar44[4]) +
                     (int)(short)(*psVar19 - sVar79) * (int)psVar44[5];
            iVar57 = (iVar57 - (int)(short)(*psVar20 - sVar71) * (int)psVar44[6]) +
                     (int)(short)(*psVar21 - sVar80) * (int)psVar44[7];
            psVar44 = psVar44 + 0x10;
          } while (uVar48 != 0);
          iVar58 = iVar64 + iVar58 + iVar65 + iVar61 + iVar66 + iVar62 + iVar67 + iVar63;
          iVar39 = iVar51 + iVar39 + iVar55 + iVar10 + iVar56 + iVar11 + iVar57 + iVar12;
          lVar32 = local_88;
          if (uVar34 != (uVar34 & 0xfffffffffffffff8)) goto LAB_0010b2f4;
        }
        if (iVar58 < -0x3fffc000) {
          uVar45 = 0x8001;
        }
        else {
          uVar45 = 0x7fff;
          if (iVar58 < 0x3fffc000) {
            uVar45 = (short)(iVar58 + 0x4000U >> 0xf);
          }
        }
      }
      else {
        iVar39 = 0;
        uVar45 = 0;
      }
      lVar32 = uVar36 * 2;
      uVar36 = uVar36 + 1;
      uVar4 = 0x8001;
      if (-0x3fffc001 < iVar39) {
        uVar4 = (short)(iVar39 + 0x4000U >> 0xf);
      }
      iVar38 = iVar38 + 2;
      psVar42 = psVar42 + 2;
      puVar30 = puVar30 + 2;
      uVar5 = 0x7fff;
      if (iVar39 < 0x3fffc000) {
        uVar5 = uVar4;
      }
      lVar37 = lVar37 + 4;
      *(undefined2 *)(param_3 + lVar32) = uVar45;
      *(undefined2 *)(param_4 + lVar32) = uVar5;
    } while (uVar36 != (uVar29 - 1 >> 1) + 1);
  }
  if (*(long *)(local_90 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

