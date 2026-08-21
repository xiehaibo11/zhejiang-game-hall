
int speex_preprocess_run(int *param_1,ulong param_2)

{
  bool bVar1;
  short *psVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  undefined2 uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  undefined8 uVar41;
  undefined8 *puVar42;
  short *psVar43;
  uint uVar44;
  undefined6 uVar45;
  bool bVar46;
  uint uVar47;
  long lVar48;
  ulong uVar49;
  short sVar50;
  undefined1 (*pauVar51) [16];
  uint uVar52;
  short sVar53;
  undefined1 (*pauVar54) [16];
  long lVar55;
  short *psVar56;
  undefined2 *puVar57;
  ulong uVar58;
  long lVar59;
  long lVar60;
  uint *puVar61;
  short *psVar62;
  undefined2 *puVar63;
  short *psVar64;
  uint *puVar65;
  long lVar66;
  ulong uVar67;
  undefined1 (*pauVar68) [16];
  int *piVar69;
  short *psVar70;
  undefined1 (*pauVar71) [16];
  ushort *puVar72;
  undefined8 *puVar73;
  uint uVar74;
  long lVar75;
  ushort *puVar76;
  undefined8 *puVar77;
  uint uVar78;
  ulong uVar79;
  ulong uVar80;
  long lVar81;
  uint *puVar82;
  ulong uVar83;
  int iVar84;
  int iVar85;
  int iVar86;
  int iVar87;
  int iVar88;
  int iVar90;
  int iVar91;
  undefined1 auVar89 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  uint6 uVar94;
  undefined8 uVar95;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined8 uVar100;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  byte bVar108;
  undefined1 uVar109;
  undefined1 uVar110;
  undefined1 uVar111;
  byte bVar112;
  undefined1 uVar113;
  undefined1 uVar114;
  undefined1 uVar115;
  byte bVar116;
  undefined1 uVar117;
  undefined1 uVar118;
  undefined1 uVar119;
  int iVar120;
  uint5 uVar121;
  int iVar125;
  int iVar126;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  ushort uVar139;
  undefined1 auVar141 [16];
  uint uVar147;
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  int6 iVar148;
  undefined1 auVar150 [12];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  int iVar156;
  undefined1 auVar155 [16];
  undefined1 auVar157 [12];
  undefined1 auVar158 [14];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar96 [14];
  uint uVar140;
  undefined1 auVar149 [12];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  
  iVar4 = *param_1;
  uVar5 = param_1[1];
  iVar88 = 20000;
  if (param_1[0x3c] < 20000) {
    iVar88 = param_1[0x3c] + 1;
  }
  param_1[0x3e] = param_1[0x3e] + 1;
  iVar90 = 0;
  if ((short)iVar88 != 0) {
    iVar90 = 0x7fff / (int)(short)iVar88;
  }
  puVar82 = *(uint **)(param_1 + 0x16);
  uVar140 = param_1[3];
  uVar83 = (ulong)uVar140;
  lVar81 = (long)(int)uVar5;
  param_1[0x3c] = iVar88;
  iVar88 = 0x3d7;
  if (0x3d6ffff < iVar90 * 0x10000) {
    iVar88 = (int)(short)iVar90;
  }
  uVar80 = (ulong)uVar5;
  if (*(long *)(param_1 + 0xe) == 0) {
    if (0 < (int)(uVar140 + uVar5)) {
      memset(*(void **)(param_1 + 0x34),0,(ulong)((uVar140 + uVar5) - 1) * 4 + 4);
    }
  }
  else {
    speex_echo_get_residual(*(long *)(param_1 + 0xe),*(undefined8 *)(param_1 + 0x36),uVar80);
    pauVar51 = *(undefined1 (**) [16])(param_1 + 0x34);
    if (0 < (int)uVar5) {
      pauVar54 = *(undefined1 (**) [16])(param_1 + 0x36);
      if ((uVar5 < 4) ||
         ((pauVar51 < (undefined1 (*) [16])(*pauVar54 + uVar80 * 4) &&
          (pauVar54 < (undefined1 (*) [16])(*pauVar51 + uVar80 * 4))))) {
        uVar58 = 0;
      }
      else {
        uVar58 = uVar80 & 0xfffffffc;
        uVar67 = uVar58;
        pauVar68 = pauVar54;
        pauVar71 = pauVar51;
        do {
          auVar98 = *pauVar71;
          uVar67 = uVar67 - 4;
          uVar94 = CONCAT15(auVar98[5],CONCAT14(auVar98[4],(uint)(auVar98._0_2_ & 0x7fff))) &
                   0x7fffffffffff;
          uVar139 = auVar98._8_2_ & 0x7fff;
          auVar96._0_12_ = ZEXT212(uVar139) << 0x40;
          auVar96[0xc] = auVar98[0xc];
          auVar96[0xd] = auVar98[0xd] & 0x7f;
          auVar102._0_4_ =
               ((auVar98._0_4_ << 1) >> 0x10) * 0x4ccd + ((uint)((int)uVar94 * 0x4ccd) >> 0xf);
          auVar102._4_4_ =
               ((auVar98._4_4_ << 1) >> 0x10) * 0x4ccd +
               ((uint)(ushort)(uVar94 >> 0x20) * 0x4ccd >> 0xf);
          auVar102._8_4_ = ((auVar98._8_4_ << 1) >> 0x10) * 0x4ccd + ((uint)uVar139 * 0x4ccd >> 0xf)
          ;
          auVar102._12_4_ =
               ((auVar98._12_4_ << 1) >> 0x10) * 0x4ccd + ((uint)auVar96._12_2_ * 0x4ccd >> 0xf);
          auVar98 = NEON_smax(auVar102,*pauVar68,4);
          *(long *)(*pauVar71 + 8) = auVar98._8_8_;
          *(long *)*pauVar71 = auVar98._0_8_;
          pauVar68 = pauVar68 + 1;
          pauVar71 = pauVar71 + 1;
        } while (uVar67 != 0);
        if (uVar58 == uVar80) goto LAB_0012134c;
      }
      lVar59 = uVar80 - uVar58;
      puVar61 = (uint *)(*pauVar54 + uVar58 * 4);
      puVar65 = (uint *)(*pauVar51 + uVar58 * 4);
      do {
        uVar78 = ((int)(*puVar65 << 1) >> 0x10) * 0x4ccd + ((*puVar65 & 0x7fff) * 0x4ccd >> 0xf);
        if ((int)uVar78 <= (int)*puVar61) {
          uVar78 = *puVar61;
        }
        lVar59 = lVar59 + -1;
        *puVar65 = uVar78;
        puVar61 = puVar61 + 1;
        puVar65 = puVar65 + 1;
      } while (lVar59 != 0);
    }
LAB_0012134c:
    filterbank_compute_bank32(*(undefined8 *)(param_1 + 4),pauVar51,*pauVar51 + lVar81 * 4);
  }
  FUN_00123298(param_1,param_2);
  FUN_00123868(param_1);
  if ((int)uVar5 < 1) {
    lVar59 = *(long *)(param_1 + 0x1e);
  }
  else {
    lVar66 = *(long *)(param_1 + 0x30);
    lVar55 = 0;
    lVar60 = 0;
    iVar90 = iVar88 * -0x10000 + 0x7fff0000 >> 0x10;
    uVar58 = uVar80;
    do {
      if (*(int *)(lVar66 + lVar55) == 0) {
        lVar59 = *(long *)(param_1 + 0x1e);
        puVar61 = (uint *)(lVar59 + lVar55);
        uVar78 = *puVar61;
        uVar74 = *(uint *)(*(long *)(param_1 + 0x16) + lVar55);
LAB_001213f4:
        uVar78 = ((int)(uVar78 << 1) >> 0x10) * iVar90 + ((int)((uVar78 & 0x7fff) * iVar90) >> 0xf)
                 + ((int)((uVar74 & 0xff) * 0x80 * iVar88) >> 0xf) +
                 ((int)(uVar74 << 8) >> 0x10) * iVar88;
        *puVar61 = uVar78 & ((int)uVar78 >> 0x1f ^ 0xffffffffU);
      }
      else {
        lVar59 = *(long *)(param_1 + 0x1e);
        uVar78 = *(uint *)(lVar59 + lVar55);
        uVar74 = *(uint *)(*(long *)(param_1 + 0x16) + lVar55);
        if ((int)uVar74 < (int)(uVar78 + 0x40) >> 7) {
          puVar61 = (uint *)(lVar59 + lVar60 * 4);
          goto LAB_001213f4;
        }
      }
      lVar60 = lVar60 + 1;
      uVar58 = uVar58 - 1;
      lVar55 = lVar55 + 4;
    } while (uVar58 != 0);
  }
  filterbank_compute_bank32(*(undefined8 *)(param_1 + 4),lVar59,lVar59 + lVar81 * 4);
  uVar78 = uVar140 + uVar5;
  uVar58 = (ulong)uVar78;
  if (param_1[0x3c] == 1) {
    if (0 < (int)uVar78) {
      puVar61 = *(uint **)(param_1 + 0x22);
      if ((uVar78 < 8) || ((puVar61 < puVar82 + uVar58 && (puVar82 < puVar61 + uVar58)))) {
        uVar67 = 0;
      }
      else {
        uVar67 = uVar58 & 0xfffffff8;
        pauVar51 = (undefined1 (*) [16])(puVar82 + 4);
        puVar65 = puVar61 + 4;
        uVar49 = uVar67;
        do {
          auVar98 = pauVar51[-1];
          auVar102 = *pauVar51;
          pauVar51 = pauVar51 + 2;
          uVar49 = uVar49 - 8;
          *(long *)(puVar65 + -2) = auVar98._8_8_;
          *(long *)(puVar65 + -4) = auVar98._0_8_;
          *(long *)(puVar65 + 2) = auVar102._8_8_;
          *(long *)puVar65 = auVar102._0_8_;
          puVar65 = puVar65 + 8;
        } while (uVar49 != 0);
        if (uVar67 == uVar58) goto LAB_001214b4;
      }
      lVar59 = uVar58 - uVar67;
      puVar61 = puVar61 + uVar67;
      puVar65 = puVar82 + uVar67;
      do {
        lVar59 = lVar59 + -1;
        *puVar61 = *puVar65;
        puVar61 = puVar61 + 1;
        puVar65 = puVar65 + 1;
      } while (lVar59 != 0);
      goto LAB_001214b4;
    }
LAB_001216b8:
    psVar56 = *(short **)(param_1 + 0x26);
    bVar1 = false;
  }
  else {
LAB_001214b4:
    bVar1 = 0 < (int)uVar78;
    if ((int)uVar78 < 1) goto LAB_001216b8;
    lVar66 = *(long *)(param_1 + 0x34);
    lVar59 = *(long *)(param_1 + 0x1e);
    lVar60 = *(long *)(param_1 + 0x20);
    psVar56 = *(short **)(param_1 + 0x26);
    lVar55 = *(long *)(param_1 + 0x28);
    lVar75 = *(long *)(param_1 + 0x22);
    uVar67 = 0;
    do {
      lVar48 = uVar67 * 4;
      uVar47 = puVar82[uVar67];
      uVar74 = *(int *)(lVar66 + lVar48) + (*(int *)(lVar59 + lVar48) + 0x40 >> 7) +
               *(int *)(lVar60 + lVar48) + 1;
      if ((int)uVar47 >> 7 < (int)uVar74) {
        uVar147 = (int)uVar74 >> 8;
        uVar9 = (int)uVar47 >> 8;
        if ((int)uVar74 < 0x800000) {
          uVar147 = uVar74;
          uVar9 = uVar47;
        }
        uVar47 = (int)uVar9 >> 4;
        uVar52 = (int)uVar147 >> 4;
        if ((int)uVar147 < 0x80000) {
          uVar47 = uVar9;
          uVar52 = uVar147;
        }
        uVar147 = uVar47 >> 4;
        uVar9 = uVar52 >> 4;
        if ((int)uVar52 < 0x8000) {
          uVar147 = uVar47;
          uVar9 = uVar52;
        }
        sVar50 = 0;
        if ((short)uVar9 != 0) {
          sVar50 = (short)((int)(((int)(uVar9 << 0x10) >> 0x11) + uVar147 * 0x100) /
                          (int)(short)uVar9);
        }
      }
      else {
        sVar50 = 0x7fff;
      }
      sVar50 = sVar50 + -0x100;
      if (0x63ff < sVar50) {
        sVar50 = 0x6400;
      }
      *(short *)(lVar55 + uVar67 * 2) = sVar50;
      uVar147 = *(uint *)(lVar75 + uVar67 * 4);
      uVar47 = uVar147 + uVar74;
      if ((int)uVar147 >> 0xf < (int)uVar47) {
        uVar9 = (int)uVar47 >> 8;
        uVar52 = (int)uVar147 >> 8;
        if ((int)uVar47 < 0x800000) {
          uVar9 = uVar47;
          uVar52 = uVar147;
        }
        uVar47 = (int)uVar9 >> 4;
        uVar6 = (int)uVar52 >> 4;
        if ((int)uVar9 < 0x80000) {
          uVar47 = uVar9;
          uVar6 = uVar52;
        }
        uVar9 = uVar47 >> 4;
        uVar52 = (int)uVar6 >> 4;
        if ((int)uVar47 < 0x8000) {
          uVar9 = uVar47;
          uVar52 = uVar6;
        }
        sVar53 = 0;
        if ((short)uVar9 != 0) {
          sVar53 = (short)((int)(uVar52 * 0x7fff) / (int)(short)uVar9);
        }
        iVar88 = (int)sVar53;
      }
      else {
        iVar88 = 0x7fff;
        sVar53 = 0x7fff;
      }
      uVar47 = (iVar88 * sVar53 * 2 >> 0x10) * 0xe3d8 & 0xffff0000;
      if ((int)uVar147 >> 7 < (int)uVar74) {
        uVar9 = (int)uVar74 >> 8;
        uVar52 = (int)uVar147 >> 8;
        if ((int)uVar74 < 0x800000) {
          uVar9 = uVar74;
          uVar52 = uVar147;
        }
        uVar74 = (int)uVar9 >> 4;
        uVar147 = (int)uVar52 >> 4;
        if ((int)uVar9 < 0x80000) {
          uVar74 = uVar9;
          uVar147 = uVar52;
        }
        uVar9 = uVar74 >> 4;
        uVar52 = uVar147 >> 4;
        if ((int)uVar74 < 0x8000) {
          uVar9 = uVar74;
          uVar52 = uVar147;
        }
        sVar53 = 0;
        if ((short)uVar9 != 0) {
          sVar53 = (short)((int)(uVar52 * 0x100 + ((int)(uVar9 << 0x10) >> 0x11)) /
                          (int)(short)uVar9);
        }
      }
      else {
        sVar53 = 0x7fff;
      }
      uVar74 = ((int)(uVar47 + 0xccd0000) >> 0x10) *
               ((int)sVar50 & ((uint)(int)sVar50 >> 0xf ^ 0xffffffff) & 0xffff) +
               (int)sVar53 * ((int)(0x73320000 - uVar47) >> 0x10) + 0x4000;
      sVar50 = (short)(uVar74 >> 0xf);
      if (0x63ff < (int)(uVar74 * 2) >> 0x10) {
        sVar50 = 0x6400;
      }
      psVar56[uVar67] = sVar50;
      uVar67 = uVar67 + 1;
    } while (uVar58 != uVar67);
  }
  psVar62 = *(short **)(param_1 + 0x32);
  uVar74 = uVar5 - 1;
  uVar67 = (ulong)uVar74;
  *psVar62 = (short)(*psVar56 * 0x2666 + *psVar62 * 0x599a + 0x4000U >> 0xf);
  if (2 < (int)uVar5) {
    if ((uVar67 - 1 < 8) ||
       (((undefined1 (*) [16])(psVar62 + 1) < (undefined1 (*) [16])(psVar56 + uVar67 + 1) &&
        (psVar56 < psVar62 + uVar67)))) {
      lVar59 = 1;
    }
    else {
      uVar47 = uVar5 + 6 & 7;
      lVar60 = (uVar67 - 1) - (ulong)uVar47;
      pauVar51 = (undefined1 (*) [16])(psVar56 + 1);
      lVar59 = lVar60 + 1;
      pauVar54 = (undefined1 (*) [16])(psVar62 + 1);
      do {
        auVar98 = *pauVar54;
        auVar102 = *(undefined1 (*) [16])((long)*pauVar51 + 2);
        auVar105 = *pauVar51;
        auVar107 = *(undefined1 (*) [16])((long)pauVar51[-1] + 0xe);
        auVar131 = NEON_ext(auVar98,auVar98,8,1);
        auVar134 = NEON_ext(auVar102,auVar102,8,1);
        auVar132 = NEON_ext(auVar105,auVar105,8,1);
        auVar133 = NEON_ext(auVar107,auVar107,8,1);
        lVar60 = lVar60 + -8;
        *(ulong *)((long)*pauVar54 + 8) =
             CONCAT26((short)(auVar131._6_2_ * 0x599a + auVar132._6_2_ * 0x1333 +
                              auVar134._6_2_ * 0x99a + auVar133._6_2_ * 0x99a + 0x4000U >> 0xf),
                      CONCAT24((short)(auVar131._4_2_ * 0x599a + auVar132._4_2_ * 0x1333 +
                                       auVar134._4_2_ * 0x99a + auVar133._4_2_ * 0x99a + 0x4000U >>
                                      0xf),
                               CONCAT22((short)(auVar131._2_2_ * 0x599a + auVar132._2_2_ * 0x1333 +
                                                auVar134._2_2_ * 0x99a + auVar133._2_2_ * 0x99a +
                                                0x4000U >> 0xf),
                                        (short)(auVar131._0_2_ * 0x599a + auVar132._0_2_ * 0x1333 +
                                                auVar134._0_2_ * 0x99a + auVar133._0_2_ * 0x99a +
                                                0x4000U >> 0xf))));
        *(ulong *)*pauVar54 =
             CONCAT26((short)(auVar98._6_2_ * 0x599a + auVar105._6_2_ * 0x1333 +
                              auVar102._6_2_ * 0x99a + auVar107._6_2_ * 0x99a + 0x4000U >> 0xf),
                      CONCAT24((short)(auVar98._4_2_ * 0x599a + auVar105._4_2_ * 0x1333 +
                                       auVar102._4_2_ * 0x99a + auVar107._4_2_ * 0x99a + 0x4000U >>
                                      0xf),
                               CONCAT22((short)(auVar98._2_2_ * 0x599a + auVar105._2_2_ * 0x1333 +
                                                auVar102._2_2_ * 0x99a + auVar107._2_2_ * 0x99a +
                                                0x4000U >> 0xf),
                                        (short)(auVar98._0_2_ * 0x599a + auVar105._0_2_ * 0x1333 +
                                                auVar102._0_2_ * 0x99a + auVar107._0_2_ * 0x99a +
                                                0x4000U >> 0xf))));
        pauVar51 = pauVar51 + 1;
        pauVar54 = pauVar54 + 1;
      } while (lVar60 != 0);
      if (uVar47 == 0) goto LAB_0012177c;
    }
    lVar60 = uVar67 - lVar59;
    psVar64 = psVar56 + lVar59;
    psVar70 = psVar62 + lVar59;
    do {
      sVar50 = *psVar64;
      psVar2 = psVar64 + -1;
      psVar64 = psVar64 + 1;
      lVar60 = lVar60 + -1;
      *psVar70 = (short)(sVar50 * 0x1333 + *psVar70 * 0x599a +
                         ((int)*psVar64 + (int)*psVar2) * 0x99a + 0x4000U >> 0xf);
      psVar70 = psVar70 + 1;
    } while (lVar60 != 0);
  }
LAB_0012177c:
  if ((int)uVar140 < 0) {
LAB_001218a4:
    bVar46 = false;
    iVar88 = 0;
  }
  else {
    lVar59 = (long)(int)uVar74;
    lVar55 = (long)(int)uVar78;
    lVar60 = lVar55;
    if (lVar55 < lVar59 + 1) {
      lVar60 = lVar59 + 1;
    }
    uVar67 = lVar60 - lVar59;
    if (uVar67 < 8) {
LAB_00121844:
      do {
        lVar60 = lVar59 + 1;
        psVar62[lVar59] =
             (short)(psVar56[lVar59] * 0x2666 + psVar62[lVar59] * 0x599a + 0x4000U >> 0xf);
        lVar59 = lVar60;
      } while (lVar60 < lVar55);
    }
    else {
      lVar60 = lVar55;
      if (lVar55 < lVar59 + 1) {
        lVar60 = lVar59 + 1;
      }
      pauVar51 = (undefined1 (*) [16])(psVar62 + lVar59);
      pauVar54 = (undefined1 (*) [16])(psVar56 + lVar59);
      if ((pauVar51 < (undefined1 (*) [16])(psVar56 + lVar60)) &&
         (pauVar54 < (undefined1 (*) [16])(psVar62 + lVar60))) goto LAB_00121844;
      uVar79 = uVar67 & 0xfffffffffffffff8;
      lVar59 = uVar79 + lVar59;
      uVar49 = uVar79;
      do {
        auVar98 = *pauVar51;
        auVar102 = *pauVar54;
        uVar49 = uVar49 - 8;
        auVar105 = NEON_ext(auVar98,auVar98,8,1);
        auVar107 = NEON_ext(auVar102,auVar102,8,1);
        *(ulong *)((long)*pauVar51 + 8) =
             CONCAT26((short)(auVar105._6_2_ * 0x599a + auVar107._6_2_ * 0x2666 + 0x4000U >> 0xf),
                      CONCAT24((short)(auVar105._4_2_ * 0x599a + auVar107._4_2_ * 0x2666 + 0x4000U
                                      >> 0xf),
                               CONCAT22((short)(auVar105._2_2_ * 0x599a + auVar107._2_2_ * 0x2666 +
                                                0x4000U >> 0xf),
                                        (short)(auVar105._0_2_ * 0x599a + auVar107._0_2_ * 0x2666 +
                                                0x4000U >> 0xf))));
        *(ulong *)*pauVar51 =
             CONCAT26((short)(auVar98._6_2_ * 0x599a + auVar102._6_2_ * 0x2666 + 0x4000U >> 0xf),
                      CONCAT24((short)(auVar98._4_2_ * 0x599a + auVar102._4_2_ * 0x2666 + 0x4000U >>
                                      0xf),
                               CONCAT22((short)(auVar98._2_2_ * 0x599a + auVar102._2_2_ * 0x2666 +
                                                0x4000U >> 0xf),
                                        (short)(auVar98._0_2_ * 0x599a + auVar102._0_2_ * 0x2666 +
                                                0x4000U >> 0xf))));
        pauVar51 = pauVar51 + 1;
        pauVar54 = pauVar54 + 1;
      } while (uVar49 != 0);
      if (uVar67 != uVar79) goto LAB_00121844;
    }
    bVar46 = 0 < (int)uVar140;
    if ((int)uVar140 < 1) goto LAB_001218a4;
    if (lVar55 < lVar81 + 1) {
      lVar55 = lVar81 + 1;
    }
    uVar67 = lVar55 - lVar81;
    if (uVar67 < 8) {
      iVar88 = 0;
      lVar59 = lVar81;
LAB_001218f8:
      do {
        psVar64 = psVar62 + lVar59;
        lVar59 = lVar59 + 1;
        iVar88 = iVar88 + *psVar64;
      } while (lVar59 < (int)uVar78);
    }
    else {
      uVar79 = uVar67 & 0xfffffffffffffff8;
      iVar88 = 0;
      iVar90 = 0;
      iVar91 = 0;
      iVar120 = 0;
      lVar59 = uVar79 + lVar81;
      psVar64 = psVar62 + lVar81 + 4;
      uVar49 = uVar79;
      auVar98 = ZEXT816(0);
      do {
        uVar95 = *(undefined8 *)(psVar64 + -4);
        uVar100 = *(undefined8 *)psVar64;
        uVar49 = uVar49 - 8;
        psVar64 = psVar64 + 8;
        iVar88 = iVar88 + (short)uVar95;
        iVar90 = iVar90 + (short)((ulong)uVar95 >> 0x10);
        iVar91 = iVar91 + (short)((ulong)uVar95 >> 0x20);
        iVar120 = iVar120 + (short)((ulong)uVar95 >> 0x30);
        auVar105._0_4_ = auVar98._0_4_ + (int)(short)uVar100;
        auVar105._4_4_ = auVar98._4_4_ + (int)(short)((ulong)uVar100 >> 0x10);
        auVar105._8_4_ = auVar98._8_4_ + (int)(short)((ulong)uVar100 >> 0x20);
        auVar105._12_4_ = auVar98._12_4_ + (int)(short)((ulong)uVar100 >> 0x30);
        auVar98 = auVar105;
      } while (uVar49 != 0);
      iVar88 = auVar105._0_4_ + iVar88 + auVar105._4_4_ + iVar90 +
               auVar105._8_4_ + iVar91 + auVar105._12_4_ + iVar120;
      if (uVar67 != uVar79) goto LAB_001218f8;
    }
  }
  uVar47 = 0;
  if ((short)param_1[3] != 0) {
    uVar47 = iVar88 / (int)(short)param_1[3];
  }
  if ((short)uVar47 < 2) {
    uVar47 = 1;
  }
  uVar147 = 0;
  if ((uVar47 & 0xffff) != 0) {
    uVar147 = 0x7fff / (uVar47 & 0xffff);
  }
  iVar88 = (int)((uVar147 * 0x999a & 0x7fff0000) + 0x2000000) >> 0x10;
  sVar50 = 0;
  if (iVar88 != 0) {
    sVar50 = (short)(0xfffe00 / iVar88);
  }
  uVar47 = (uint)(sVar50 * 0x7312) >> 0xf;
  sVar50 = (short)uVar47 + 0xccd;
  iVar10 = (int)sVar50;
  iVar91 = param_1[0xb];
  lVar59 = *(long *)(param_1 + 0x1e);
  lVar60 = *(long *)(param_1 + 0x34);
  lVar55 = *(long *)(param_1 + 0x1a);
  iVar88 = ((short)param_1[0xd] * iVar10 +
           ((int)(uVar47 * -0x10000 + 0x73320000) >> 0x10) * (int)(short)param_1[0xc]) * 2 + 0x8000;
  iVar90 = iVar88 >> 0x10;
  piVar69 = (int *)(lVar59 + lVar81 * 4);
  pauVar51 = (undefined1 (*) [16])(lVar60 + lVar81 * 4);
  iVar120 = iVar91 - iVar90;
  puVar73 = (undefined8 *)(lVar55 + lVar81 * 2);
  sVar53 = (short)((uint)iVar88 >> 0x10);
  if (iVar120 == 0 || iVar91 < iVar90) {
    iVar88 = (int)(short)(sVar53 * 0xec);
    if (iVar88 < 0x532b) {
      if (iVar88 < -0x532a) {
LAB_00121a74:
        iVar88 = 0;
      }
      else {
        uVar140 = iVar88 * 0x5c55 + 0x2000;
        iVar88 = (int)(uVar140 * 4) >> 0x10;
        if (0x77ff < iVar88) goto LAB_00122198;
        if (iVar88 < -0x7800) goto LAB_00121a74;
        uVar140 = uVar140 >> 0xe;
        uVar47 = uVar140 & 0x7ff;
        iVar88 = uVar47 * 8;
        uVar140 = -((int)(uVar140 << 0x10) >> 0x1b) - 2;
        iVar88 = (int)((((((uVar47 * 0x28a8 >> 0xe) + 0xe8e) * iVar88 * 4 & 0x1fff0000) + 0x2c5c0000
                        >> 0x10) * iVar88 * 4 & 0x7fff0000) + 0x40000000) >> 0x10;
        iVar90 = iVar88 >> (uVar140 & 0x1f);
        if ((int)uVar140 < 1) {
          iVar90 = iVar88 << (ulong)(-uVar140 & 0x1f);
        }
        if (0xffff < iVar90) goto LAB_00122198;
        iVar88 = (iVar90 << 0xf) >> 0x10;
      }
    }
    else {
LAB_00122198:
      iVar88 = 0x7fff;
    }
    iVar90 = (int)(short)((short)iVar120 * 0x1d8);
    if (iVar90 < 0x532b) {
      if (iVar90 < -0x532a) {
LAB_001221e4:
        iVar90 = 0;
      }
      else {
        uVar140 = iVar90 * 0x5c55 + 0x2000;
        iVar90 = (int)(uVar140 * 4) >> 0x10;
        if (0x77ff < iVar90) goto LAB_001222dc;
        if (iVar90 < -0x7800) goto LAB_001221e4;
        uVar140 = uVar140 >> 0xe;
        uVar47 = uVar140 & 0x7ff;
        iVar90 = uVar47 * 8;
        uVar140 = -((int)(uVar140 << 0x10) >> 0x1b) - 2;
        iVar90 = (int)((((((uVar47 * 0x28a8 >> 0xe) + 0xe8e) * iVar90 * 4 & 0x1fff0000) + 0x2c5c0000
                        >> 0x10) * iVar90 * 4 & 0x7fff0000) + 0x40000000) >> 0x10;
        iVar91 = iVar90 >> (uVar140 & 0x1f);
        if ((int)uVar140 < 1) {
          iVar91 = iVar90 << (ulong)(-uVar140 & 0x1f);
        }
        if (0xffff < iVar91) goto LAB_001222dc;
        iVar90 = (iVar91 << 0xf) >> 0x10;
      }
    }
    else {
LAB_001222dc:
      iVar90 = 0x7fff;
    }
    if (bVar46) {
      do {
        uVar140 = *piVar69 + 0x40 >> 7;
        iVar91 = *(int *)*pauVar51 + (*piVar69 + 0x40 >> 0x16) * iVar90 +
                 ((int)((uVar140 & 0x7fff) * iVar90) >> 0xf);
        uVar140 = *(int *)*pauVar51 + uVar140 + 1;
        if (iVar91 >> 0xf < (int)uVar140) {
          uVar47 = (int)uVar140 >> 8;
          iVar120 = iVar91 >> 8;
          if ((int)uVar140 < 0x800000) {
            uVar47 = uVar140;
            iVar120 = iVar91;
          }
          uVar140 = (int)uVar47 >> 4;
          iVar91 = iVar120 >> 4;
          if ((int)uVar47 < 0x80000) {
            uVar140 = uVar47;
            iVar91 = iVar120;
          }
          uVar47 = uVar140 >> 4;
          iVar120 = iVar91 >> 4;
          if ((int)uVar140 < 0x8000) {
            uVar47 = uVar140;
            iVar120 = iVar91;
          }
          uVar140 = 0;
          if ((short)uVar47 != 0) {
            uVar140 = (iVar120 * 0x7fff) / (int)(short)uVar47;
          }
        }
        else {
          uVar140 = 0x7fff;
        }
        uVar147 = -(uVar140 >> 0xf & 1) & 0x80000000 | (uVar140 & 0xffff) << 0xf;
        uVar47 = uVar147 >> 0x10;
        uVar140 = uVar47;
        if (uVar47 == 0) {
          uVar140 = uVar147;
        }
        uVar52 = (uint)(uVar47 != 0);
        uVar47 = uVar52 << 3 | 4;
        uVar9 = uVar140 >> 8;
        if (uVar140 < 0x100) {
          uVar47 = uVar52 << 3;
          uVar9 = uVar140;
        }
        uVar140 = uVar47 | 2;
        uVar52 = uVar9 >> 4;
        if (uVar9 < 0x10) {
          uVar140 = uVar47;
          uVar52 = uVar9;
        }
        uVar140 = uVar140 | 3 < uVar52;
        sVar53 = (short)((int)uVar147 >> (uVar140 * 2 - 0xc & 0x1f));
        if ((ushort)uVar140 < 7) {
          sVar53 = (short)(uVar147 << (ulong)(uVar140 * -2 + 0xc & 0x1f));
        }
        iVar91 = (int)sVar53;
        uVar140 = 0xd - uVar140;
        iVar91 = (int)((((int)(((iVar91 * 0x41b0 + -0x31530000 >> 0x10) * iVar91 * 4 & 0xffff0000U)
                              + 0x52b50000) >> 0x10) * iVar91 * 4 & 0xffff0000U) + 0xe320000) >>
                 0x10;
        sVar53 = (short)(iVar91 >> (uVar140 & 0x1f));
        if ((int)uVar140 < 1) {
          sVar53 = (short)(iVar91 << (ulong)(-uVar140 & 0x1f));
        }
        pauVar51 = (undefined1 (*) [16])(*pauVar51 + 4);
        uVar83 = uVar83 - 1;
        *(short *)puVar73 = (short)((uint)(sVar53 * iVar88) >> 0xf);
        piVar69 = piVar69 + 1;
        puVar73 = (undefined8 *)((long)puVar73 + 2);
      } while (uVar83 != 0);
      goto LAB_00122458;
    }
LAB_00122858:
    lVar59 = *(long *)(param_1 + 0x18);
  }
  else {
    iVar88 = (int)(short)((short)iVar91 * 0xec);
    if (iVar88 < 0x532b) {
      if (iVar88 < -0x532a) {
LAB_00121a1c:
        iVar88 = 0;
      }
      else {
        uVar47 = iVar88 * 0x5c55 + 0x2000;
        iVar88 = (int)(uVar47 * 4) >> 0x10;
        if (0x77ff < iVar88) goto LAB_00121c18;
        if (iVar88 < -0x7800) goto LAB_00121a1c;
        uVar47 = uVar47 >> 0xe;
        uVar147 = uVar47 & 0x7ff;
        iVar88 = uVar147 * 8;
        uVar47 = -((int)(uVar47 << 0x10) >> 0x1b) - 2;
        iVar88 = (int)((((((uVar147 * 0x28a8 >> 0xe) + 0xe8e) * iVar88 * 4 & 0x1fff0000) +
                         0x2c5c0000 >> 0x10) * iVar88 * 4 & 0x7fff0000) + 0x40000000) >> 0x10;
        iVar90 = iVar88 >> (uVar47 & 0x1f);
        if ((int)uVar47 < 1) {
          iVar90 = iVar88 << (ulong)(-uVar47 & 0x1f);
        }
        if (0xffff < iVar90) goto LAB_00121c18;
        iVar88 = (iVar90 << 0xf) >> 0x10;
      }
    }
    else {
LAB_00121c18:
      iVar88 = 0x7fff;
    }
    iVar90 = (int)(short)((sVar53 - (short)iVar91) * 0x1d8);
    if (iVar90 < 0x532b) {
      if (iVar90 < -0x532a) {
LAB_00121c68:
        iVar90 = 0;
      }
      else {
        uVar47 = iVar90 * 0x5c55 + 0x2000;
        iVar90 = (int)(uVar47 * 4) >> 0x10;
        if (0x77ff < iVar90) goto LAB_00122260;
        if (iVar90 < -0x7800) goto LAB_00121c68;
        uVar47 = uVar47 >> 0xe;
        uVar147 = uVar47 & 0x7ff;
        iVar90 = uVar147 * 8;
        uVar47 = -((int)(uVar47 << 0x10) >> 0x1b) - 2;
        iVar90 = (int)((((((uVar147 * 0x28a8 >> 0xe) + 0xe8e) * iVar90 * 4 & 0x1fff0000) +
                         0x2c5c0000 >> 0x10) * iVar90 * 4 & 0x7fff0000) + 0x40000000) >> 0x10;
        iVar91 = iVar90 >> (uVar47 & 0x1f);
        if ((int)uVar47 < 1) {
          iVar91 = iVar90 << (ulong)(-uVar47 & 0x1f);
        }
        if (0xffff < iVar91) goto LAB_00122260;
        iVar90 = (iVar91 << 0xf) >> 0x10;
      }
    }
    else {
LAB_00122260:
      iVar90 = 0x7fff;
    }
    if (!bVar46) goto LAB_00122858;
    if (uVar140 < 4) {
      uVar49 = 0;
    }
    else {
      uVar49 = uVar83 & 0xfffffffc;
      uVar67 = uVar49;
      do {
        auVar98 = *pauVar51;
        uVar94 = CONCAT15(auVar98[5],CONCAT14(auVar98[4],(uint)(auVar98._0_2_ & 0x7fff))) &
                 0x7fffffffffff;
        uVar139 = auVar98._8_2_ & 0x7fff;
        auVar158._0_12_ = ZEXT212(uVar139) << 0x40;
        auVar158[0xc] = auVar98[0xc];
        auVar158[0xd] = auVar98[0xd] & 0x7f;
        iVar84 = *piVar69 + 0x40 >> 7;
        iVar85 = piVar69[1] + 0x40 >> 7;
        iVar86 = piVar69[2] + 0x40 >> 7;
        iVar87 = piVar69[3] + 0x40 >> 7;
        iVar91 = auVar98._0_4_ + iVar84 + 1;
        iVar120 = auVar98._4_4_ + iVar85 + 1;
        uVar109 = (undefined1)((uint)iVar120 >> 8);
        uVar110 = (undefined1)((uint)iVar120 >> 0x10);
        uVar111 = (undefined1)((uint)iVar120 >> 0x18);
        iVar125 = auVar98._8_4_ + iVar86 + 1;
        uVar113 = (undefined1)((uint)iVar125 >> 8);
        uVar114 = (undefined1)((uint)iVar125 >> 0x10);
        uVar115 = (undefined1)((uint)iVar125 >> 0x18);
        iVar126 = auVar98._12_4_ + iVar87 + 1;
        uVar117 = (undefined1)((uint)iVar126 >> 8);
        uVar118 = (undefined1)((uint)iVar126 >> 0x10);
        uVar119 = (undefined1)((uint)iVar126 >> 0x18);
        auVar133._0_8_ = CONCAT44(-(uint)(0x7fffff < iVar120),-(uint)(0x7fffff < iVar91));
        auVar133._8_4_ = -(uint)(0x7fffff < iVar125);
        auVar133._12_4_ = -(uint)(0x7fffff < iVar126);
        auVar135._0_4_ = iVar91 >> 8;
        auVar135._4_4_ = iVar120 >> 8;
        auVar135._8_4_ = iVar125 >> 8;
        auVar135._12_4_ = iVar126 >> 8;
        auVar127._0_4_ =
             ((int)uVar94 * iVar90 >> 0xf) + iVar84 + ((auVar98._0_4_ << 1) >> 0x10) * iVar90;
        auVar127._4_4_ =
             ((int)((uint)(ushort)(uVar94 >> 0x20) * iVar90) >> 0xf) + iVar85 +
             ((auVar98._4_4_ << 1) >> 0x10) * iVar90;
        auVar127._8_4_ =
             ((int)((uint)uVar139 * iVar90) >> 0xf) + iVar86 +
             ((auVar98._8_4_ << 1) >> 0x10) * iVar90;
        auVar127._12_4_ =
             ((int)((uint)auVar158._12_2_ * iVar90) >> 0xf) + iVar87 +
             ((auVar98._12_4_ << 1) >> 0x10) * iVar90;
        auVar134._8_8_ = auVar133._8_8_;
        auVar134._0_8_ = auVar133._0_8_;
        auVar98[4] = (char)iVar120;
        auVar98._0_4_ = iVar91;
        auVar98[5] = uVar109;
        auVar98[6] = uVar110;
        auVar98[7] = uVar111;
        auVar98[8] = (char)iVar125;
        auVar98[9] = uVar113;
        auVar98[10] = uVar114;
        auVar98[0xb] = uVar115;
        auVar98[0xc] = (char)iVar126;
        auVar98[0xd] = uVar117;
        auVar98[0xe] = uVar118;
        auVar98[0xf] = uVar119;
        auVar107[4] = (char)iVar120;
        auVar107._0_4_ = iVar91;
        auVar107[5] = uVar109;
        auVar107[6] = uVar110;
        auVar107[7] = uVar111;
        auVar107[8] = (char)iVar125;
        auVar107[9] = uVar113;
        auVar107[10] = uVar114;
        auVar107[0xb] = uVar115;
        auVar107[0xc] = (char)iVar126;
        auVar107[0xd] = uVar117;
        auVar107[0xe] = uVar118;
        auVar107[0xf] = uVar119;
        auVar107 = auVar107 ^ (auVar98 ^ auVar135) & auVar133;
        auVar151._0_4_ = auVar127._0_4_ >> 8;
        auVar151._4_4_ = auVar127._4_4_ >> 8;
        auVar151._8_4_ = auVar127._8_4_ >> 8;
        auVar151._12_4_ = auVar127._12_4_ >> 8;
        auVar141._0_8_ =
             CONCAT44(-(uint)(0x7ffff < auVar107._4_4_),-(uint)(0x7ffff < auVar107._0_4_));
        auVar141._8_4_ = -(uint)(0x7ffff < auVar107._8_4_);
        auVar141._12_4_ = -(uint)(0x7ffff < auVar107._12_4_);
        auVar136._0_4_ = -(uint)(auVar127._0_4_ >> 0xf < iVar91);
        auVar136._4_4_ = -(uint)(auVar127._4_4_ >> 0xf < iVar120);
        auVar136._8_4_ = -(uint)(auVar127._8_4_ >> 0xf < iVar125);
        auVar136._12_4_ = -(uint)(auVar127._12_4_ >> 0xf < iVar126);
        auVar127 = auVar127 ^ (auVar127 ^ auVar151) & auVar134;
        auVar152._8_8_ = auVar141._8_8_;
        auVar152._0_8_ = auVar141._0_8_;
        auVar132._0_4_ = auVar127._0_4_ >> 4;
        auVar132._4_4_ = auVar127._4_4_ >> 4;
        auVar132._8_4_ = auVar127._8_4_ >> 4;
        auVar132._12_4_ = auVar127._12_4_ >> 4;
        auVar127 = auVar127 ^ (auVar127 ^ auVar132) & auVar152;
        auVar131._4_4_ = auVar107._4_4_ >> 4;
        auVar131._0_4_ = auVar107._0_4_ >> 4;
        auVar131._8_4_ = auVar107._8_4_ >> 4;
        auVar131._12_4_ = auVar107._12_4_ >> 4;
        auVar107 = auVar107 ^ (auVar107 ^ auVar131) & auVar141;
        uVar140 = auVar107._4_4_;
        uVar47 = auVar107._8_4_;
        uVar147 = auVar107._12_4_;
        if ((auVar136._0_4_ & 1) == 0) {
          if ((auVar136._4_4_ & 1) != 0) goto LAB_00121dfc;
LAB_00121da4:
          if ((auVar136._8_4_ & 1) != 0) goto LAB_00121dac;
LAB_00121e40:
          auVar157 = auVar132._0_12_;
        }
        else {
          uVar52 = auVar107._0_4_;
          uVar9 = uVar52 >> 4;
          iVar91 = auVar127._0_4_ >> 4;
          if ((int)uVar52 < 0x8000) {
            uVar9 = uVar52;
            iVar91 = auVar127._0_4_;
          }
          uVar52 = 0;
          if ((short)uVar9 != 0) {
            uVar52 = (iVar91 * 0x7fff) / (int)(short)uVar9;
          }
          auVar132 = ZEXT416(uVar52);
          if ((auVar136._4_4_ & 1) == 0) goto LAB_00121da4;
LAB_00121dfc:
          uVar9 = uVar140 >> 4;
          iVar91 = auVar127._4_4_ >> 4;
          if ((int)uVar140 < 0x8000) {
            uVar9 = uVar140;
            iVar91 = auVar127._4_4_;
          }
          iVar120 = 0;
          if ((short)uVar9 != 0) {
            iVar120 = (iVar91 * 0x7fff) / (int)(short)uVar9;
          }
          auVar132._4_4_ = iVar120;
          if ((auVar136._8_4_ & 1) == 0) goto LAB_00121e40;
LAB_00121dac:
          uVar140 = uVar47 >> 4;
          iVar91 = auVar127._8_4_ >> 4;
          if ((int)uVar47 < 0x8000) {
            uVar140 = uVar47;
            iVar91 = auVar127._8_4_;
          }
          iVar120 = 0;
          if ((short)uVar140 != 0) {
            iVar120 = (iVar91 * 0x7fff) / (int)(short)uVar140;
          }
          auVar157._0_8_ = auVar132._0_8_;
          auVar157._8_4_ = iVar120;
          auVar132._0_12_ = auVar157;
        }
        if ((auVar136._12_4_ & 1) != 0) {
          uVar140 = uVar147 >> 4;
          iVar91 = auVar127._12_4_ >> 4;
          if ((int)uVar147 < 0x8000) {
            uVar140 = uVar147;
            iVar91 = auVar127._12_4_;
          }
          iVar120 = 0;
          if ((short)uVar140 != 0) {
            iVar120 = (iVar91 * 0x7fff) / (int)(short)uVar140;
          }
          auVar132._12_4_ = iVar120;
          auVar132._0_12_ = auVar157;
        }
        auVar142._0_4_ = (auVar132._0_4_ << 0x10) >> 1;
        auVar142._4_4_ = (auVar132._4_4_ << 0x10) >> 1;
        auVar142._8_4_ = (auVar132._8_4_ << 0x10) >> 1;
        auVar142._12_4_ = (auVar132._12_4_ << 0x10) >> 1;
        auVar13._8_4_ = 0x3fff8000;
        auVar13._0_8_ = 0x3fff80003fff8000;
        auVar13._12_4_ = 0x3fff8000;
        auVar137._8_4_ = 0x3fff8000;
        auVar137._0_8_ = 0x3fff80003fff8000;
        auVar137._12_4_ = 0x3fff8000;
        auVar137 = auVar137 ^ (auVar13 ^ auVar142) & auVar136;
        auVar143._0_4_ = -(uint)(0xffff < auVar137._0_4_);
        auVar143._4_4_ = -(uint)(0xffff < auVar137._4_4_);
        auVar143._8_4_ = -(uint)(0xffff < auVar137._8_4_);
        auVar143._12_4_ = -(uint)(0xffff < auVar137._12_4_);
        auVar159._0_4_ = auVar137._0_4_ >> 0x10;
        auVar159._4_4_ = auVar137._4_4_ >> 0x10;
        auVar159._8_4_ = auVar137._8_4_ >> 0x10;
        auVar159._12_4_ = auVar137._12_4_ >> 0x10;
        bVar108 = (byte)auVar143._0_4_ & 8;
        uVar109 = (undefined1)auVar143._4_4_;
        bVar112 = (byte)auVar143._8_4_ & 8;
        bVar116 = (byte)auVar143._12_4_ & 8;
        auVar98 = auVar137 ^ (auVar137 ^ auVar159) & auVar143;
        auVar160._0_4_ = -(uint)(0xff < auVar98._0_4_);
        auVar160._4_4_ = -(uint)(0xff < auVar98._4_4_);
        auVar160._8_4_ = -(uint)(0xff < auVar98._8_4_);
        auVar160._12_4_ = -(uint)(0xff < auVar98._12_4_);
        auVar122._0_4_ = auVar98._0_4_ >> 8;
        auVar122._4_4_ = auVar98._4_4_ >> 8;
        auVar122._8_4_ = auVar98._8_4_ >> 8;
        auVar122._12_4_ = auVar98._12_4_ >> 8;
        auVar98 = auVar98 ^ (auVar98 ^ auVar122) & auVar160;
        uVar121 = CONCAT14((byte)auVar143._12_4_,(uint)bVar112) & 0x800ffffff;
        auVar144._0_8_ = (ulong)(CONCAT14(uVar109,(uint)bVar108) & 0x8ffffffff) | 0x400000004;
        auVar144._8_4_ = (uint)uVar121 | 4;
        auVar144._12_4_ = (byte)(uVar121 >> 0x20) | 4;
        auVar11._5_3_ = 0;
        auVar11._0_5_ = CONCAT14(uVar109,(uint)bVar108) & 0x8ffffffff;
        auVar11[8] = bVar112;
        auVar11._9_3_ = 0;
        auVar11[0xc] = bVar116;
        auVar11._13_3_ = 0;
        auVar161._5_3_ = 0;
        auVar161._0_5_ = CONCAT14(uVar109,(uint)bVar108) & 0x8ffffffff;
        auVar161[8] = bVar112;
        auVar161._9_3_ = 0;
        auVar161[0xc] = bVar116;
        auVar161._13_3_ = 0;
        auVar161 = auVar161 ^ (auVar11 ^ auVar144) & auVar160;
        auVar145._0_8_ = CONCAT44(-(uint)(0xf < auVar98._4_4_),-(uint)(0xf < auVar98._0_4_));
        auVar145._8_4_ = -(uint)(0xf < auVar98._8_4_);
        auVar145._12_4_ = -(uint)(0xf < auVar98._12_4_);
        uVar140 = auVar98._4_4_ >> 4;
        uVar47 = auVar98._8_4_ >> 4;
        uVar147 = auVar98._12_4_ >> 4;
        auVar123._8_8_ = auVar145._8_8_;
        auVar123._0_8_ = auVar145._0_8_;
        auVar12[3] = auVar98[3] >> 4;
        auVar12._0_3_ = (int3)(auVar98._0_4_ >> 4);
        auVar12[4] = (char)uVar140;
        auVar12[5] = (char)(uVar140 >> 8);
        auVar12[6] = (char)(uVar140 >> 0x10);
        auVar12[7] = auVar98[7] >> 4;
        auVar12[8] = (char)uVar47;
        auVar12[9] = (char)(uVar47 >> 8);
        auVar12[10] = (char)(uVar47 >> 0x10);
        auVar12[0xb] = auVar98[0xb] >> 4;
        auVar12[0xc] = (char)uVar147;
        auVar12[0xd] = (char)(uVar147 >> 8);
        auVar12[0xe] = (char)(uVar147 >> 0x10);
        auVar12[0xf] = auVar98[0xf] >> 4;
        auVar98 = auVar98 ^ (auVar98 ^ auVar12) & auVar123;
        auVar128._0_8_ = auVar161._0_8_ | 0x200000002;
        auVar128._8_4_ = auVar161._8_4_ | 2;
        auVar128._12_4_ = auVar161._12_4_ | 2;
        auVar161 = auVar161 ^ (auVar161 ^ auVar128) & auVar145;
        uVar121 = CONCAT14(-(3 < auVar98._4_4_),(uint)(-(3 < auVar98._0_4_) & 1)) & 0x1ffffffff;
        uVar139 = (ushort)(byte)(auVar161[0] | (byte)uVar121);
        uVar140 = (uint)uVar139;
        bVar108 = auVar161[4] | (byte)(uVar121 >> 0x20);
        sVar53 = CONCAT11(auVar161[9],auVar161[8] | -(3 < auVar98._8_4_) & 1U);
        iVar91 = CONCAT13(auVar161[0xb],CONCAT12(auVar161[10],sVar53));
        uVar45 = CONCAT15(auVar161[0xd],CONCAT14(auVar161[0xc] | -(3 < auVar98._12_4_) & 1U,iVar91))
        ;
        iVar85 = (int)(CONCAT17(auVar161[0xf],CONCAT16(auVar161[0xe],uVar45)) >> 0x20);
        auVar124._0_4_ = uVar140 * -2 + 0xc;
        auVar124._4_4_ = (uint)bVar108 * -2 + 0xc;
        auVar124._8_4_ = iVar91 * -2 + 0xc;
        auVar124._12_4_ = iVar85 * -2 + 0xc;
        auVar129._0_4_ = -(uVar140 * 2 + -0xc);
        auVar129._4_4_ = -((uint)bVar108 * 2 + -0xc);
        auVar129._8_4_ = -(iVar91 * 2 + -0xc);
        auVar129._12_4_ = -(iVar85 * 2 + -0xc);
        auVar98 = NEON_ushl(auVar137,auVar124,4);
        auVar102 = NEON_sshl(auVar137,auVar129,4);
        auVar130._0_4_ = (int)(short)-(ushort)(6 < uVar139);
        auVar130._4_4_ = (int)(short)-(ushort)(6 < bVar108);
        auVar130._8_4_ = (int)(short)-(ushort)(6 < sVar53);
        auVar130._12_4_ = (int)(short)-(ushort)(6 < (short)((uint6)uVar45 >> 0x20));
        auVar98 = auVar98 ^ (auVar98 ^ auVar102) & auVar130;
        iVar120 = (int)auVar98._0_2_;
        iVar125 = (int)auVar98._4_2_;
        iVar126 = (int)auVar98._8_2_;
        iVar84 = (int)auVar98._12_2_;
        iVar86 = (iVar125 * 0x41b0 + -0x31530000 >> 0x10) * iVar125 * 4;
        iVar87 = (iVar126 * 0x41b0 + -0x31530000 >> 0x10) * iVar126 * 4;
        iVar156 = (iVar84 * 0x41b0 + -0x31530000 >> 0x10) * iVar84 * 4;
        iVar148 = (uint6)(ushort)((uint)((iVar120 * 0x41b0 + -0x31530000 >> 0x10) * iVar120 * 4) >>
                                 0x10) << 0x10;
        uVar79 = CONCAT17((char)((uint)iVar86 >> 0x18),
                          CONCAT16((char)((uint)iVar86 >> 0x10),iVar148));
        auVar149._8_2_ = 0;
        auVar149._0_8_ = uVar79;
        auVar149[10] = (undefined1)((uint)iVar87 >> 0x10);
        auVar149[0xb] = (undefined1)((uint)iVar87 >> 0x18);
        auVar153._12_2_ = 0;
        auVar153._0_12_ = auVar149;
        auVar153[0xe] = (undefined1)((uint)iVar156 >> 0x10);
        auVar153[0xf] = (undefined1)((uint)iVar156 >> 0x18);
        iVar125 = ((int)(uVar79 >> 0x20) + 0x52b50000 >> 0x10) * iVar125 * 4;
        iVar126 = (auVar149._8_4_ + 0x52b50000 >> 0x10) * iVar126 * 4;
        iVar84 = (auVar153._12_4_ + 0x52b50000 >> 0x10) * iVar84 * 4;
        iVar148 = (uint6)(ushort)((uint)(((int)iVar148 + 0x52b50000 >> 0x10) * iVar120 * 4) >> 0x10)
                  << 0x10;
        uVar79 = CONCAT17((char)((uint)iVar125 >> 0x18),
                          CONCAT16((char)((uint)iVar125 >> 0x10),iVar148));
        auVar150._8_2_ = 0;
        auVar150._0_8_ = uVar79;
        auVar150[10] = (undefined1)((uint)iVar126 >> 0x10);
        auVar150[0xb] = (undefined1)((uint)iVar126 >> 0x18);
        auVar154._12_2_ = 0;
        auVar154._0_12_ = auVar150;
        auVar154[0xe] = (undefined1)((uint)iVar84 >> 0x10);
        auVar154[0xf] = (undefined1)((uint)iVar84 >> 0x18);
        auVar138._0_4_ = -(uint)(0 < (int)(0xd - uVar140));
        auVar138._4_4_ = -(uint)(0 < (int)(0xd - (uint)bVar108));
        auVar138._8_4_ = -(uint)(0 < 0xd - iVar91);
        auVar138._12_4_ = -(uint)(0 < 0xd - iVar85);
        auVar146._0_4_ = -(0xd - uVar140);
        auVar146._4_4_ = -(0xd - (uint)bVar108);
        auVar146._8_4_ = -(0xd - iVar91);
        auVar146._12_4_ = -(0xd - iVar85);
        auVar155._0_4_ = (int)iVar148 + 0xe320000 >> 0x10;
        auVar155._4_4_ = (int)(uVar79 >> 0x20) + 0xe320000 >> 0x10;
        auVar155._8_4_ = auVar150._8_4_ + 0xe320000 >> 0x10;
        auVar155._12_4_ = auVar154._12_4_ + 0xe320000 >> 0x10;
        auVar102 = NEON_sshl(auVar155,auVar146,4);
        auVar98 = NEON_ushl(auVar155,auVar146,4);
        auVar98 = auVar98 ^ (auVar98 ^ auVar102) & auVar138;
        piVar69 = piVar69 + 4;
        uVar67 = uVar67 - 4;
        *puVar73 = CONCAT26((short)((uint)(auVar98._12_2_ * iVar88) >> 0xf),
                            CONCAT24((short)((uint)(auVar98._8_2_ * iVar88) >> 0xf),
                                     CONCAT22((short)((uint)(auVar98._4_2_ * iVar88) >> 0xf),
                                              (short)((uint)(auVar98._0_2_ * iVar88) >> 0xf))));
        pauVar51 = pauVar51 + 1;
        puVar73 = puVar73 + 1;
      } while (uVar67 != 0);
      if (uVar49 == uVar83) goto LAB_00122458;
    }
    lVar66 = uVar83 - uVar49;
    lVar75 = (uVar49 + lVar81) * 4;
    puVar61 = (uint *)(lVar60 + lVar75);
    piVar69 = (int *)(lVar59 + lVar75);
    puVar57 = (undefined2 *)(lVar55 + (uVar49 + lVar81) * 2);
    do {
      uVar140 = *puVar61;
      iVar91 = *piVar69 + 0x40 >> 7;
      iVar120 = iVar91 + ((int)((uVar140 & 0x7fff) * iVar90) >> 0xf) +
                ((int)(uVar140 << 1) >> 0x10) * iVar90;
      uVar140 = uVar140 + iVar91 + 1;
      if (iVar120 >> 0xf < (int)uVar140) {
        uVar47 = (int)uVar140 >> 8;
        iVar91 = iVar120 >> 8;
        if ((int)uVar140 < 0x800000) {
          uVar47 = uVar140;
          iVar91 = iVar120;
        }
        uVar140 = (int)uVar47 >> 4;
        iVar120 = iVar91 >> 4;
        if ((int)uVar47 < 0x80000) {
          uVar140 = uVar47;
          iVar120 = iVar91;
        }
        uVar47 = uVar140 >> 4;
        iVar91 = iVar120 >> 4;
        if ((int)uVar140 < 0x8000) {
          uVar47 = uVar140;
          iVar91 = iVar120;
        }
        uVar140 = 0;
        if ((short)uVar47 != 0) {
          uVar140 = (iVar91 * 0x7fff) / (int)(short)uVar47;
        }
      }
      else {
        uVar140 = 0x7fff;
      }
      uVar147 = -(uVar140 >> 0xf & 1) & 0x80000000 | (uVar140 & 0xffff) << 0xf;
      uVar47 = uVar147 >> 0x10;
      uVar140 = uVar47;
      if (uVar47 == 0) {
        uVar140 = uVar147;
      }
      uVar52 = (uint)(uVar47 != 0);
      uVar47 = uVar52 << 3 | 4;
      uVar9 = uVar140 >> 8;
      if (uVar140 < 0x100) {
        uVar47 = uVar52 << 3;
        uVar9 = uVar140;
      }
      uVar140 = uVar47 | 2;
      uVar52 = uVar9 >> 4;
      if (uVar9 < 0x10) {
        uVar140 = uVar47;
        uVar52 = uVar9;
      }
      uVar140 = uVar140 | 3 < uVar52;
      sVar53 = (short)((int)uVar147 >> (uVar140 * 2 - 0xc & 0x1f));
      if ((ushort)uVar140 < 7) {
        sVar53 = (short)(uVar147 << (ulong)(uVar140 * -2 + 0xc & 0x1f));
      }
      iVar91 = (int)sVar53;
      uVar140 = 0xd - uVar140;
      iVar91 = (int)((((int)(((iVar91 * 0x41b0 + -0x31530000 >> 0x10) * iVar91 * 4 & 0xffff0000U) +
                            0x52b50000) >> 0x10) * iVar91 * 4 & 0xffff0000U) + 0xe320000) >> 0x10;
      sVar53 = (short)(iVar91 >> (uVar140 & 0x1f));
      if ((int)uVar140 < 1) {
        sVar53 = (short)(iVar91 << (ulong)(-uVar140 & 0x1f));
      }
      puVar61 = puVar61 + 1;
      lVar66 = lVar66 + -1;
      *puVar57 = (short)((uint)(sVar53 * iVar88) >> 0xf);
      piVar69 = piVar69 + 1;
      puVar57 = puVar57 + 1;
    } while (lVar66 != 0);
LAB_00122458:
    if (!bVar46) goto LAB_00122858;
    lVar75 = *(long *)(param_1 + 0x28);
    lVar55 = *(long *)(param_1 + 0x22);
    lVar66 = *(long *)(param_1 + 0x24);
    lVar59 = *(long *)(param_1 + 0x18);
    lVar60 = lVar81;
    do {
      iVar88 = psVar56[lVar60] + 0x100;
      iVar90 = (int)(short)iVar88;
      uVar140 = *(short *)(lVar75 + lVar60 * 2) * 8 + 0x800;
      sVar53 = 0;
      if (iVar90 != 0) {
        sVar53 = (short)(((iVar88 * 0x10000 >> 0x11) + psVar56[lVar60] * 0x8000) / iVar90);
      }
      iVar88 = (int)sVar53;
      uVar140 = ((int)uVar140 >> 0xf) * iVar88 +
                ((int)((uVar140 & 0x7ff8) * iVar88 + 0x4000) >> 0xf);
      sVar53 = 0x7fff;
      if ((int)uVar140 < 0) {
        uVar47 = 0x7fff;
      }
      else if ((int)uVar140 < 0x5000) {
        uVar47 = uVar140 * 0x8000 | 0x1a37;
        lVar48 = (long)((int)uVar140 >> 10) * 2;
        bVar46 = (uVar140 & 0x1ffff) >> 1 != 0;
        uVar147 = uVar140 >> 1 & 0xffff;
        if (!bVar46) {
          uVar147 = uVar47;
        }
        uVar52 = (uVar140 & 0x3ff) * 0x20;
        uVar9 = uVar147 >> 8;
        if (uVar147 < 0x100) {
          uVar9 = uVar147;
        }
        uVar6 = (uint)bVar46 << 3 | 4;
        if (uVar147 < 0x100) {
          uVar6 = (uint)bVar46 << 3;
        }
        uVar147 = uVar6 | 2;
        uVar44 = uVar9 >> 4;
        if (uVar9 < 0x10) {
          uVar147 = uVar6;
          uVar44 = uVar9;
        }
        uVar147 = uVar147 | 3 < uVar44;
        uVar9 = 0xd - uVar147;
        sVar7 = (short)((int)uVar47 >> (uVar147 * 2 - 0xc & 0x1f));
        if ((ushort)uVar147 < 7) {
          sVar7 = (short)(uVar47 << (ulong)(uVar147 * -2 + 0xc & 0x1f));
        }
        iVar90 = (int)sVar7;
        iVar90 = (int)((((int)(((iVar90 * 0x41b0 + -0x31530000 >> 0x10) * iVar90 * 4 & 0xffff0000U)
                              + 0x52b50000) >> 0x10) * iVar90 * 4 & 0xffff0000U) + 0xe320000) >>
                 0x10;
        sVar7 = (short)(iVar90 >> (uVar9 & 0x1f));
        if ((int)uVar9 < 1) {
          sVar7 = (short)(iVar90 << (ulong)(-uVar9 & 0x1f));
        }
        uVar47 = 0;
        if (sVar7 != 0) {
          uVar47 = ((int)(uVar52 * (int)*(short *)(&DAT_00136be0 + lVar48) +
                          (uVar52 ^ 0x7fff) * (int)*(short *)(&DAT_00136bde + lVar48) + 0x40) >> 7)
                   / (int)sVar7;
        }
        uVar47 = -(uVar47 >> 0xf & 1) & 0xff800000 | (uVar47 & 0xffff) << 7;
      }
      else {
        iVar90 = (int)(uVar140 * 0x2000) >> 0x10;
        sVar7 = 0;
        if (iVar90 != 0) {
          sVar7 = (short)(0x1096bc / iVar90);
        }
        uVar47 = (int)sVar7 + 0x7fff;
      }
      uVar47 = ((int)uVar47 >> 0xf) * iVar88 + ((int)((uVar47 & 0x7fff) * iVar88) >> 0xf);
      if (0x7ffe < (int)uVar47) {
        uVar47 = 0x7fff;
      }
      *(short *)(lVar66 + lVar60 * 2) = (short)uVar47;
      uVar147 = *(uint *)(lVar55 + lVar60 * 4);
      iVar88 = ((int)((-(uVar47 >> 0xf & 1) & 0xfffe0000 | (uVar47 & 0xffff) << 1) *
                     (int)(short)uVar47) >> 0x10) * 0xcccc + 0x8000 >> 0x10;
      *(uint *)(lVar55 + lVar60 * 4) =
           ((int)(uVar147 << 1) >> 0x10) * 0x199a + ((uVar147 & 0x7fff) * 0x199a + 0x4000 >> 0xf) +
           iVar88 * ((int)(puVar82[lVar60] << 1) >> 0x10) +
           ((int)(iVar88 * (puVar82[lVar60] & 0x7fff) + 0x4000) >> 0xf);
      uVar47 = (uint)psVar62[lVar60];
      if (psVar62[lVar60] < 2) {
        uVar47 = 1;
      }
      if (0x7ffe < (int)uVar140) {
        uVar140 = 0x7fff;
      }
      uVar147 = 0;
      if ((uVar47 & 0xffff) != 0) {
        uVar147 = 0x7fff / (uVar47 & 0xffff);
      }
      iVar90 = (int)(short)-(short)uVar140;
      iVar88 = (int)((uVar147 * 0x999a & 0x7fff0000) + 0x2000000) >> 0x10;
      sVar7 = 0;
      if (iVar88 != 0) {
        sVar7 = (short)(0xfffe00 / iVar88);
      }
      uVar140 = (uint)(((int)((sVar7 * 0xcccc & 0xffff0000U) + 0x19790000) >> 0x10) * iVar10) >> 0xf
      ;
      if (iVar90 < 0x532b) {
        if (iVar90 < -0x532a) {
LAB_001227a4:
          iVar88 = 0;
        }
        else {
          uVar47 = iVar90 * 0x5c55 + 0x2000;
          iVar88 = (int)(uVar47 * 4) >> 0x10;
          if (0x77ff < iVar88) {
LAB_001227cc:
            sVar53 = 0x7fff;
            goto LAB_001227d0;
          }
          if (iVar88 < -0x7800) goto LAB_001227a4;
          uVar47 = uVar47 >> 0xe;
          uVar147 = uVar47 & 0x7ff;
          iVar88 = uVar147 * 8;
          uVar47 = -((int)(uVar47 << 0x10) >> 0x1b) - 2;
          iVar90 = (int)((((((uVar147 * 0x28a8 >> 0xe) + 0xe8e) * iVar88 * 4 & 0x1fff0000) +
                           0x2c5c0000 >> 0x10) * iVar88 * 4 & 0x7fff0000) + 0x40000000) >> 0x10;
          iVar88 = iVar90 >> (uVar47 & 0x1f);
          iVar91 = iVar88;
          if ((int)uVar47 < 1) {
            iVar91 = iVar90 << (ulong)(-uVar47 & 0x1f);
          }
          if (0xffff < iVar91) goto LAB_001227cc;
          if ((int)uVar47 < 1) {
            iVar88 = iVar90 << (ulong)(-uVar47 & 0x1f);
          }
        }
        sVar53 = (short)(iVar88 >> 1);
      }
LAB_001227d0:
      iVar88 = (int)(short)(psVar56[lVar60] + 0x100) * (int)sVar53 * 2 >> 0x10;
      sVar53 = 0;
      if ((short)uVar140 != 0) {
        sVar53 = (short)((((int)(uVar140 * -0x10000 + 0x7fff0000) >> 8) +
                         ((int)(uVar140 * 0x10000) >> 0x11)) / (int)(short)uVar140);
      }
      if (0x2ff < iVar88) {
        iVar88 = 0x300;
      }
      iVar88 = (int)((iVar88 * sVar53 * 0x100 + 0x8000U & 0xffff0000) + 0x1000000) >> 0x10;
      uVar8 = 0;
      if (iVar88 != 0) {
        uVar8 = (undefined2)(0x7fff00 / iVar88);
      }
      *(undefined2 *)(lVar59 + lVar60 * 2) = uVar8;
      lVar60 = lVar60 + 1;
    } while (lVar60 < (int)uVar78);
  }
  lVar81 = lVar81 * 2;
  filterbank_compute_psd16(*(undefined8 *)(param_1 + 4),lVar59 + lVar81);
  filterbank_compute_psd16(*(undefined8 *)(param_1 + 4),*(long *)(param_1 + 0x24) + lVar81);
  filterbank_compute_psd16(*(undefined8 *)(param_1 + 4),*(long *)(param_1 + 0x1a) + lVar81);
  if (0 < (int)uVar5) {
    psVar62 = *(short **)(param_1 + 0x26);
    psVar56 = *(short **)(param_1 + 0x28);
    puVar61 = *(uint **)(param_1 + 0x22);
    puVar72 = *(ushort **)(param_1 + 0x24);
    puVar76 = *(ushort **)(param_1 + 0x1a);
    uVar83 = uVar80;
    psVar64 = *(short **)(param_1 + 0x18);
    do {
      iVar88 = *psVar62 + 0x100;
      iVar90 = (int)(short)iVar88;
      uVar140 = *psVar56 * 8 + 0x800;
      sVar53 = 0;
      if (iVar90 != 0) {
        sVar53 = (short)(((iVar88 * 0x10000 >> 0x11) + *psVar62 * 0x8000) / iVar90);
      }
      iVar88 = (int)sVar53;
      uVar140 = ((int)uVar140 >> 0xf) * iVar88 +
                ((int)((uVar140 & 0x7ff8) * iVar88 + 0x4000) >> 0xf);
      if ((int)uVar140 < 0) {
        uVar140 = 0x7fff;
      }
      else if ((int)uVar140 < 0x5000) {
        uVar47 = uVar140 * 0x8000 | 0x1a37;
        lVar81 = (long)((int)uVar140 >> 10) * 2;
        uVar147 = (uVar140 & 0x3ff) * 0x20;
        bVar46 = (uVar140 & 0x1ffff) >> 1 != 0;
        uVar140 = uVar140 >> 1 & 0xffff;
        if (!bVar46) {
          uVar140 = uVar47;
        }
        uVar9 = uVar140 >> 8;
        if (uVar140 < 0x100) {
          uVar9 = uVar140;
        }
        uVar52 = (uint)bVar46 << 3 | 4;
        if (uVar140 < 0x100) {
          uVar52 = (uint)bVar46 << 3;
        }
        uVar140 = uVar52 | 2;
        uVar6 = uVar9 >> 4;
        if (uVar9 < 0x10) {
          uVar140 = uVar52;
          uVar6 = uVar9;
        }
        uVar140 = uVar140 | 3 < uVar6;
        sVar53 = (short)((int)uVar47 >> (uVar140 * 2 - 0xc & 0x1f));
        if ((ushort)uVar140 < 7) {
          sVar53 = (short)(uVar47 << (ulong)(uVar140 * -2 + 0xc & 0x1f));
        }
        iVar90 = (int)sVar53;
        uVar140 = 0xd - uVar140;
        iVar90 = (int)((((int)(((iVar90 * 0x41b0 + -0x31530000 >> 0x10) * iVar90 * 4 & 0xffff0000U)
                              + 0x52b50000) >> 0x10) * iVar90 * 4 & 0xffff0000U) + 0xe320000) >>
                 0x10;
        sVar53 = (short)(iVar90 >> (uVar140 & 0x1f));
        if ((int)uVar140 < 1) {
          sVar53 = (short)(iVar90 << (ulong)(-uVar140 & 0x1f));
        }
        uVar140 = 0;
        if (sVar53 != 0) {
          uVar140 = ((int)(uVar147 * (int)*(short *)(&DAT_00136be0 + lVar81) +
                           (uVar147 ^ 0x7fff) * (int)*(short *)(&DAT_00136bde + lVar81) + 0x40) >> 7
                    ) / (int)sVar53;
        }
        uVar140 = -(uVar140 >> 0xf & 1) & 0xff800000 | (uVar140 & 0xffff) << 7;
      }
      else {
        iVar90 = (int)(uVar140 * 0x2000) >> 0x10;
        sVar53 = 0;
        if (iVar90 != 0) {
          sVar53 = (short)(0x1096bc / iVar90);
        }
        uVar140 = (int)sVar53 + 0x7fff;
      }
      uVar140 = ((int)uVar140 >> 0xf) * iVar88 + ((int)((uVar140 & 0x7fff) * iVar88) >> 0xf);
      if (0x7ffe < (int)uVar140) {
        uVar140 = 0x7fff;
      }
      uVar47 = (short)*puVar72 * 3;
      if ((short)uVar140 * 0x2aa0 >> 0xf <= (int)(short)*puVar72) {
        uVar47 = uVar140;
      }
      sVar53 = *psVar64;
      *puVar72 = (ushort)uVar47;
      uVar140 = (uint)(short)(ushort)uVar47;
      iVar88 = ((int)((-(uVar47 >> 0xf & 1) & 0xfffe0000 | (uVar47 & 0xffff) << 1) * uVar140) >>
               0x10) * 0xcccc + 0x8000 >> 0x10;
      *puVar61 = ((int)(*puVar61 << 1) >> 0x10) * 0x199a +
                 ((*puVar61 & 0x7fff) * 0x199a + 0x4000 >> 0xf) +
                 iVar88 * ((int)(*puVar82 << 1) >> 0x10) +
                 ((int)(iVar88 * (*puVar82 & 0x7fff) + 0x4000) >> 0xf);
      uVar139 = *puVar76;
      uVar47 = (uint)(short)uVar139;
      if ((int)uVar140 < (int)(short)uVar139) {
        *puVar72 = uVar139;
        uVar47 = (uint)*puVar76;
        uVar140 = (int)(short)uVar139;
      }
      uVar147 = uVar140 << 0xf;
      uVar140 = uVar140 >> 1 & 0xffff;
      bVar46 = uVar140 != 0;
      if (!bVar46) {
        uVar140 = uVar147;
      }
      uVar9 = uVar140 >> 8;
      if (uVar140 < 0x100) {
        uVar9 = uVar140;
      }
      uVar52 = (uint)bVar46 << 3 | 4;
      if (uVar140 < 0x100) {
        uVar52 = (uint)bVar46 << 3;
      }
      uVar140 = uVar9 >> 4;
      if (uVar9 < 0x10) {
        uVar140 = uVar9;
      }
      uVar6 = uVar52 | 2;
      if (uVar9 < 0x10) {
        uVar6 = uVar52;
      }
      uVar6 = uVar6 | 3 < uVar140;
      sVar7 = (short)((int)uVar147 >> (uVar6 * 2 - 0xc & 0x1f));
      if ((ushort)uVar6 < 7) {
        sVar7 = (short)(uVar147 << (ulong)(uVar6 * -2 + 0xc & 0x1f));
      }
      iVar88 = (int)sVar7;
      uVar6 = 0xd - uVar6;
      iVar88 = (int)((((int)(((iVar88 * 0x41b0 + -0x31530000 >> 0x10) * iVar88 * 4 & 0xffff0000U) +
                            0x52b50000) >> 0x10) * iVar88 * 4 & 0xffff0000U) + 0xe320000) >> 0x10;
      uVar147 = (uint)(int)(short)uVar47 >> 1 & 0xffff;
      uVar140 = -(uVar47 >> 0xf & 1) & 0x80000000 | (uVar47 & 0xffff) << 0xf;
      sVar7 = (short)(iVar88 >> (uVar6 & 0x1f));
      if ((int)uVar6 < 1) {
        sVar7 = (short)(iVar88 << (ulong)(-uVar6 & 0x1f));
      }
      uVar47 = uVar147;
      if (uVar147 == 0) {
        uVar47 = uVar140;
      }
      uVar52 = (uint)(uVar147 != 0);
      uVar147 = uVar52 << 3 | 4;
      uVar9 = uVar47 >> 8;
      if (uVar47 < 0x100) {
        uVar147 = uVar52 << 3;
        uVar9 = uVar47;
      }
      uVar47 = uVar147 | 2;
      uVar52 = uVar9 >> 4;
      if (uVar9 < 0x10) {
        uVar47 = uVar147;
        uVar52 = uVar9;
      }
      uVar47 = uVar47 | 3 < uVar52;
      sVar3 = (short)((int)uVar140 >> (uVar47 * 2 - 0xc & 0x1f));
      if ((ushort)uVar47 < 7) {
        sVar3 = (short)(uVar140 << (ulong)(uVar47 * -2 + 0xc & 0x1f));
      }
      iVar88 = (int)sVar3;
      uVar47 = 0xd - uVar47;
      iVar88 = (int)((((int)(((iVar88 * 0x41b0 + -0x31530000 >> 0x10) * iVar88 * 4 & 0xffff0000U) +
                            0x52b50000) >> 0x10) * iVar88 * 4 & 0xffff0000U) + 0xe320000) >> 0x10;
      sVar3 = (short)(iVar88 >> (uVar47 & 0x1f));
      if ((int)uVar47 < 1) {
        sVar3 = (short)(iVar88 << (ulong)(-uVar47 & 0x1f));
      }
      iVar88 = (int)(short)((short)((int)sVar3 * (int)(short)(0x7fff - sVar53) + 0x4000U >> 0xf) +
                           (short)((int)sVar7 * (int)sVar53 + 0x4000U >> 0xf));
      puVar76 = puVar76 + 1;
      puVar82 = puVar82 + 1;
      puVar61 = puVar61 + 1;
      puVar72 = puVar72 + 1;
      psVar56 = psVar56 + 1;
      uVar83 = uVar83 - 1;
      *psVar64 = (short)((uint)(iVar88 * iVar88) >> 0xf);
      psVar62 = psVar62 + 1;
      psVar64 = psVar64 + 1;
    } while (uVar83 != 0);
  }
  psVar56 = *(short **)(param_1 + 0x18);
  if (param_1[6] == 0 && !(bool)(bVar1 ^ 1)) {
    if (uVar78 < 0x10) {
      uVar67 = 0;
    }
    else {
      uVar67 = uVar58 & 0xfffffff0;
      psVar62 = psVar56 + 8;
      auVar89._8_2_ = 0x7fff;
      auVar89._0_8_ = 0x7fff7fff7fff7fff;
      auVar89._10_2_ = 0x7fff;
      auVar89._12_2_ = 0x7fff;
      auVar89._14_2_ = 0x7fff;
      uVar83 = uVar67;
      do {
        *(long *)(psVar62 + -4) = auVar89._8_8_;
        psVar62[-8] = 0x7fff;
        psVar62[-7] = 0x7fff;
        psVar62[-6] = 0x7fff;
        psVar62[-5] = 0x7fff;
        *(long *)(psVar62 + 4) = auVar89._8_8_;
        psVar62[0] = 0x7fff;
        psVar62[1] = 0x7fff;
        psVar62[2] = 0x7fff;
        psVar62[3] = 0x7fff;
        uVar83 = uVar83 - 0x10;
        psVar62 = psVar62 + 0x10;
      } while (uVar83 != 0);
      if (uVar67 == uVar58) goto LAB_00122d30;
    }
    lVar81 = uVar58 - uVar67;
    psVar62 = psVar56 + uVar67;
    do {
      lVar81 = lVar81 + -1;
      *psVar62 = 0x7fff;
      psVar62 = psVar62 + 1;
    } while (lVar81 != 0);
  }
LAB_00122d30:
  psVar62 = *(short **)(param_1 + 0x14);
  iVar88 = uVar5 * 2;
  if (1 < (int)uVar5) {
    if (uVar80 - 1 < 8) {
LAB_00122d70:
      lVar81 = 1;
    }
    else {
      psVar64 = psVar62 + 1;
      if ((psVar64 < psVar56 + uVar80) &&
         ((undefined1 (*) [16])(psVar56 + 1) < (undefined1 (*) [16])(psVar62 + uVar80 * 2 + -1)))
      goto LAB_00122d70;
      uVar140 = uVar5 - 1 & 7;
      lVar59 = (uVar80 - 1) - (ulong)uVar140;
      lVar81 = lVar59 + 1;
      pauVar51 = (undefined1 (*) [16])(psVar56 + 1);
      do {
        auVar98 = *pauVar51;
        auVar93._0_2_ = *psVar64;
        auVar99._0_2_ = psVar64[1];
        auVar93._2_2_ = psVar64[2];
        auVar99._2_2_ = psVar64[3];
        auVar93._4_2_ = psVar64[4];
        auVar99._4_2_ = psVar64[5];
        auVar93._6_2_ = psVar64[6];
        auVar99._6_2_ = psVar64[7];
        auVar93._8_2_ = psVar64[8];
        auVar99._8_2_ = psVar64[9];
        auVar93._10_2_ = psVar64[10];
        auVar99._10_2_ = psVar64[0xb];
        auVar93._12_2_ = psVar64[0xc];
        auVar99._12_2_ = psVar64[0xd];
        auVar93._14_2_ = psVar64[0xe];
        auVar99._14_2_ = psVar64[0xf];
        auVar107 = NEON_ext(auVar98,auVar98,8,1);
        auVar102 = NEON_ext(auVar93,auVar93,8,1);
        auVar105 = NEON_ext(auVar99,auVar99,8,1);
        lVar59 = lVar59 + -8;
        *psVar64 = (short)((int)auVar93._0_2_ * (int)auVar98._0_2_ + 0x4000U >> 0xf);
        psVar64[1] = (short)((int)auVar99._0_2_ * (int)auVar98._0_2_ + 0x4000U >> 0xf);
        psVar64[2] = (short)((int)auVar93._2_2_ * (int)auVar98._2_2_ + 0x4000U >> 0xf);
        psVar64[3] = (short)((int)auVar99._2_2_ * (int)auVar98._2_2_ + 0x4000U >> 0xf);
        psVar64[4] = (short)((int)auVar93._4_2_ * (int)auVar98._4_2_ + 0x4000U >> 0xf);
        psVar64[5] = (short)((int)auVar99._4_2_ * (int)auVar98._4_2_ + 0x4000U >> 0xf);
        psVar64[6] = (short)((int)auVar93._6_2_ * (int)auVar98._6_2_ + 0x4000U >> 0xf);
        psVar64[7] = (short)((int)auVar99._6_2_ * (int)auVar98._6_2_ + 0x4000U >> 0xf);
        psVar64[8] = (short)((int)auVar102._0_2_ * (int)auVar107._0_2_ + 0x4000U >> 0xf);
        psVar64[9] = (short)((int)auVar105._0_2_ * (int)auVar107._0_2_ + 0x4000U >> 0xf);
        psVar64[10] = (short)((int)auVar102._2_2_ * (int)auVar107._2_2_ + 0x4000U >> 0xf);
        psVar64[0xb] = (short)((int)auVar105._2_2_ * (int)auVar107._2_2_ + 0x4000U >> 0xf);
        psVar64[0xc] = (short)((int)auVar102._4_2_ * (int)auVar107._4_2_ + 0x4000U >> 0xf);
        psVar64[0xd] = (short)((int)auVar105._4_2_ * (int)auVar107._4_2_ + 0x4000U >> 0xf);
        psVar64[0xe] = (short)((int)auVar102._6_2_ * (int)auVar107._6_2_ + 0x4000U >> 0xf);
        psVar64[0xf] = (short)((int)auVar105._6_2_ * (int)auVar107._6_2_ + 0x4000U >> 0xf);
        psVar64 = psVar64 + 0x10;
        pauVar51 = pauVar51 + 1;
      } while (lVar59 != 0);
      if (uVar140 == 0) goto LAB_00122db4;
    }
    lVar59 = uVar80 - lVar81;
    psVar64 = psVar56 + lVar81;
    psVar70 = psVar62 + lVar81 * 2;
    do {
      lVar59 = lVar59 + -1;
      psVar70[-1] = (short)((int)psVar70[-1] * (int)*psVar64 + 0x4000U >> 0xf);
      *psVar70 = (short)((int)*psVar70 * (int)*psVar64 + 0x4000U >> 0xf);
      psVar64 = psVar64 + 1;
      psVar70 = psVar70 + 2;
    } while (lVar59 != 0);
  }
LAB_00122db4:
  uVar83 = -(ulong)(iVar88 - 1U >> 0x1f) & 0xfffffffe00000000 | (ulong)(iVar88 - 1U) << 1;
  *psVar62 = (short)((int)*psVar62 * (int)*psVar56 + 0x4000U >> 0xf);
  uVar140 = iVar88 - iVar4;
  *(short *)((long)psVar62 + uVar83) =
       (short)((int)*(short *)((long)psVar62 + uVar83) * (int)psVar56[(int)uVar74] + 0x4000U >> 0xf)
  ;
  spx_ifft(*(undefined8 *)(param_1 + 0x40),psVar62,*(undefined8 *)(param_1 + 0x12));
  if (0 < (int)uVar5) {
    uVar78 = param_1[0x42];
    lVar81 = *(long *)(param_1 + 0x12);
    uVar80 = (ulong)iVar88;
    uVar83 = uVar80;
    if ((long)uVar80 < 2) {
      uVar83 = 1;
    }
    iVar90 = (1 << (ulong)(uVar78 & 0x1f)) >> 1;
    if (uVar83 < 0x10) {
      uVar58 = 0;
LAB_00122e98:
      do {
        lVar59 = uVar58 * 2;
        uVar58 = uVar58 + 1;
        *(short *)(lVar81 + lVar59) =
             (short)(iVar90 + *(short *)(lVar81 + lVar59) >> (uVar78 & 0x1f));
      } while ((long)uVar58 < (long)uVar80);
    }
    else {
      uVar58 = uVar83 & 0x7ffffffffffffff0;
      psVar56 = (short *)(lVar81 + 0x10);
      auVar92._0_4_ = -uVar78;
      auVar92._4_4_ = -uVar78;
      auVar92._8_4_ = -uVar78;
      auVar92._12_4_ = -uVar78;
      uVar67 = uVar58;
      do {
        uVar67 = uVar67 - 0x10;
        auVar103._0_4_ = iVar90 + psVar56[-8];
        auVar103._4_4_ = iVar90 + psVar56[-7];
        auVar103._8_4_ = iVar90 + psVar56[-6];
        auVar103._12_4_ = iVar90 + psVar56[-5];
        auVar106._0_4_ = iVar90 + *psVar56;
        auVar106._4_4_ = iVar90 + psVar56[1];
        auVar106._8_4_ = iVar90 + psVar56[2];
        auVar106._12_4_ = iVar90 + psVar56[3];
        auVar97._0_4_ = iVar90 + psVar56[-4];
        auVar97._4_4_ = iVar90 + psVar56[-3];
        auVar97._8_4_ = iVar90 + psVar56[-2];
        auVar97._12_4_ = iVar90 + psVar56[-1];
        auVar101._0_4_ = iVar90 + psVar56[4];
        auVar101._4_4_ = iVar90 + psVar56[5];
        auVar101._8_4_ = iVar90 + psVar56[6];
        auVar101._12_4_ = iVar90 + psVar56[7];
        auVar105 = NEON_sshl(auVar103,auVar92,4);
        auVar107 = NEON_sshl(auVar106,auVar92,4);
        auVar98 = NEON_sshl(auVar97,auVar92,4);
        auVar102 = NEON_sshl(auVar101,auVar92,4);
        auVar104._0_8_ =
             CONCAT26(auVar105._12_2_,
                      CONCAT24(auVar105._8_2_,CONCAT22(auVar105._4_2_,auVar105._0_2_)));
        auVar104._8_2_ = auVar98._0_2_;
        auVar104._10_2_ = auVar98._4_2_;
        auVar104._12_2_ = auVar98._8_2_;
        auVar104._14_2_ = auVar98._12_2_;
        *(long *)(psVar56 + -4) = auVar104._8_8_;
        *(undefined8 *)(psVar56 + -8) = auVar104._0_8_;
        psVar56[4] = auVar102._0_2_;
        psVar56[5] = auVar102._4_2_;
        psVar56[6] = auVar102._8_2_;
        psVar56[7] = auVar102._12_2_;
        *psVar56 = auVar107._0_2_;
        psVar56[1] = auVar107._4_2_;
        psVar56[2] = auVar107._8_2_;
        psVar56[3] = auVar107._12_2_;
        psVar56 = psVar56 + 0x10;
      } while (uVar67 != 0);
      if (uVar83 != uVar58) goto LAB_00122e98;
    }
    if (0 < (int)uVar5) {
      uVar58 = *(ulong *)(param_1 + 0x12);
      uVar67 = *(ulong *)(param_1 + 0x1c);
      uVar83 = uVar80;
      if ((long)uVar80 < 2) {
        uVar83 = 1;
      }
      if (uVar83 < 0x10) {
LAB_00122efc:
        uVar80 = 0;
      }
      else {
        if ((long)uVar80 < 2) {
          uVar80 = 1;
        }
        if ((uVar58 < uVar67 + uVar80 * 2) && (uVar67 < uVar58 + uVar80 * 2)) goto LAB_00122efc;
        uVar80 = uVar83 & 0x7ffffffffffffff0;
        psVar56 = (short *)(uVar58 + 0x10);
        psVar62 = (short *)(uVar67 + 0x10);
        uVar49 = uVar80;
        do {
          sVar53 = psVar62[-8];
          sVar7 = psVar62[-7];
          sVar3 = psVar62[-6];
          sVar14 = psVar62[-5];
          psVar64 = psVar62 + -4;
          psVar70 = psVar62 + -3;
          psVar2 = psVar62 + -2;
          psVar43 = psVar62 + -1;
          sVar15 = *psVar62;
          sVar16 = psVar62[1];
          sVar17 = psVar62[2];
          sVar18 = psVar62[3];
          sVar19 = psVar62[4];
          sVar20 = psVar62[5];
          sVar21 = psVar62[6];
          sVar22 = psVar62[7];
          uVar49 = uVar49 - 0x10;
          psVar62 = psVar62 + 0x10;
          *(ulong *)(psVar56 + -4) =
               CONCAT26((short)((uint)((int)*psVar43 * (int)psVar56[-1]) >> 0xf),
                        CONCAT24((short)((uint)((int)*psVar2 * (int)psVar56[-2]) >> 0xf),
                                 CONCAT22((short)((uint)((int)*psVar70 * (int)psVar56[-3]) >> 0xf),
                                          (short)((uint)((int)*psVar64 * (int)psVar56[-4]) >> 0xf)))
                       );
          *(ulong *)(psVar56 + -8) =
               CONCAT26((short)((uint)((int)sVar14 * (int)psVar56[-5]) >> 0xf),
                        CONCAT24((short)((uint)((int)sVar3 * (int)psVar56[-6]) >> 0xf),
                                 CONCAT22((short)((uint)((int)sVar7 * (int)psVar56[-7]) >> 0xf),
                                          (short)((uint)((int)sVar53 * (int)psVar56[-8]) >> 0xf))));
          *(ulong *)(psVar56 + 4) =
               CONCAT26((short)((uint)((int)sVar22 * (int)psVar56[7]) >> 0xf),
                        CONCAT24((short)((uint)((int)sVar21 * (int)psVar56[6]) >> 0xf),
                                 CONCAT22((short)((uint)((int)sVar20 * (int)psVar56[5]) >> 0xf),
                                          (short)((uint)((int)sVar19 * (int)psVar56[4]) >> 0xf))));
          *(ulong *)psVar56 =
               CONCAT26((short)((uint)((int)sVar18 * (int)psVar56[3]) >> 0xf),
                        CONCAT24((short)((uint)((int)sVar17 * (int)psVar56[2]) >> 0xf),
                                 CONCAT22((short)((uint)((int)sVar16 * (int)psVar56[1]) >> 0xf),
                                          (short)((uint)((int)sVar15 * (int)*psVar56) >> 0xf))));
          psVar56 = psVar56 + 0x10;
        } while (uVar49 != 0);
        if (uVar83 == uVar80) goto LAB_00122f28;
      }
      do {
        lVar81 = uVar80 * 2;
        uVar80 = uVar80 + 1;
        *(short *)(uVar58 + lVar81) =
             (short)((uint)((int)*(short *)(uVar67 + lVar81) * (int)*(short *)(uVar58 + lVar81)) >>
                    0xf);
      } while ((long)uVar80 < (long)iVar88);
    }
  }
LAB_00122f28:
  if (0 < (int)uVar140) {
    uVar83 = *(ulong *)(param_1 + 0x3a);
    uVar58 = *(ulong *)(param_1 + 0x12);
    uVar80 = (ulong)uVar140;
    uVar67 = 0;
    if (0xf < uVar140) {
      lVar81 = uVar80 * 2;
      if ((uVar83 + lVar81 <= param_2 || param_2 + lVar81 <= uVar83) &&
         (uVar58 + lVar81 <= param_2 || param_2 + lVar81 <= uVar58)) {
        uVar67 = uVar80 & 0xfffffff0;
        psVar56 = (short *)(uVar83 + 0x10);
        psVar62 = (short *)(uVar58 + 0x10);
        psVar64 = (short *)(param_2 + 0x10);
        uVar49 = uVar67;
        do {
          sVar53 = psVar56[-8];
          sVar7 = psVar56[-7];
          sVar3 = psVar56[-6];
          sVar14 = psVar56[-5];
          psVar70 = psVar56 + -4;
          sVar15 = psVar56[-3];
          sVar16 = psVar56[-2];
          sVar17 = psVar56[-1];
          sVar18 = *psVar56;
          sVar19 = psVar56[1];
          sVar20 = psVar56[2];
          sVar21 = psVar56[3];
          sVar22 = psVar56[4];
          sVar23 = psVar56[5];
          sVar24 = psVar56[6];
          sVar25 = psVar56[7];
          sVar26 = psVar62[-8];
          sVar27 = psVar62[-7];
          sVar28 = psVar62[-6];
          sVar29 = psVar62[-5];
          psVar2 = psVar62 + -4;
          sVar30 = psVar62[-3];
          sVar31 = psVar62[-2];
          sVar32 = psVar62[-1];
          sVar33 = *psVar62;
          sVar34 = psVar62[1];
          sVar35 = psVar62[2];
          sVar36 = psVar62[3];
          sVar37 = psVar62[4];
          sVar38 = psVar62[5];
          sVar39 = psVar62[6];
          sVar40 = psVar62[7];
          psVar56 = psVar56 + 0x10;
          psVar62 = psVar62 + 0x10;
          uVar49 = uVar49 - 0x10;
          psVar64[-4] = *psVar2 + *psVar70;
          psVar64[-3] = sVar30 + sVar15;
          psVar64[-2] = sVar31 + sVar16;
          psVar64[-1] = sVar32 + sVar17;
          psVar64[-8] = sVar26 + sVar53;
          psVar64[-7] = sVar27 + sVar7;
          psVar64[-6] = sVar28 + sVar3;
          psVar64[-5] = sVar29 + sVar14;
          psVar64[4] = sVar37 + sVar22;
          psVar64[5] = sVar38 + sVar23;
          psVar64[6] = sVar39 + sVar24;
          psVar64[7] = sVar40 + sVar25;
          *psVar64 = sVar33 + sVar18;
          psVar64[1] = sVar34 + sVar19;
          psVar64[2] = sVar35 + sVar20;
          psVar64[3] = sVar36 + sVar21;
          psVar64 = psVar64 + 0x10;
        } while (uVar49 != 0);
        if (uVar67 == uVar80) goto LAB_00122f74;
      }
    }
    lVar59 = uVar67 * 2;
    lVar81 = uVar80 - uVar67;
    psVar56 = (short *)(uVar83 + lVar59);
    psVar62 = (short *)(uVar58 + lVar59);
    psVar64 = (short *)(param_2 + lVar59);
    do {
      lVar81 = lVar81 + -1;
      *psVar64 = *psVar62 + *psVar56;
      psVar56 = psVar56 + 1;
      psVar62 = psVar62 + 1;
      psVar64 = psVar64 + 1;
    } while (lVar81 != 0);
  }
LAB_00122f74:
  if ((int)uVar140 < iVar4) {
    lVar81 = *(long *)(param_1 + 0x12);
    uVar5 = iVar4 * 2 + uVar5 * -2;
    uVar83 = (ulong)uVar5;
    if (uVar5 < 0x10) {
LAB_00122f90:
      uVar80 = 0;
      iVar90 = 0;
    }
    else {
      uVar80 = 0;
      iVar90 = 0;
      if (((int)uVar140 <= (int)(uVar140 + (int)(uVar83 - 1))) &&
         (iVar90 = 0, uVar83 - 1 >> 0x20 == 0)) {
        uVar80 = -(ulong)(uVar140 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar140 << 1;
        lVar59 = ((long)(int)uVar140 + uVar83) * 2;
        if ((param_2 + uVar80 < (ulong)(lVar81 + lVar59)) && (lVar81 + uVar80 < param_2 + lVar59))
        goto LAB_00122f90;
        uVar80 = uVar83 & 0xfffffff0;
        uVar58 = uVar80;
        uVar5 = uVar140;
        do {
          uVar67 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar5 << 1;
          puVar73 = (undefined8 *)(lVar81 + uVar67);
          uVar95 = *puVar73;
          uVar100 = puVar73[2];
          uVar41 = puVar73[3];
          uVar58 = uVar58 - 0x10;
          puVar77 = (undefined8 *)(param_2 + uVar67);
          uVar5 = uVar5 + 0x10;
          puVar77[1] = puVar73[1];
          *puVar77 = uVar95;
          puVar77[3] = uVar41;
          puVar77[2] = uVar100;
        } while (uVar58 != 0);
        iVar90 = (int)uVar80;
        if (uVar80 == uVar83) goto LAB_00122fbc;
      }
    }
    lVar59 = uVar83 - uVar80;
    uVar5 = (iVar90 + iVar88) - iVar4;
    do {
      uVar83 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar5 << 1;
      lVar59 = lVar59 + -1;
      uVar5 = uVar5 + 1;
      *(undefined2 *)(param_2 + uVar83) = *(undefined2 *)(lVar81 + uVar83);
    } while (lVar59 != 0);
  }
LAB_00122fbc:
  if (0 < (int)uVar140) {
    lVar81 = *(long *)(param_1 + 0x12);
    lVar59 = (long)*param_1;
    uVar83 = *(ulong *)(param_1 + 0x3a);
    uVar80 = (ulong)uVar140;
    if ((uVar140 < 0x10) ||
       ((uVar58 = lVar81 + lVar59 * 2, uVar83 < lVar81 + (lVar59 + uVar80) * 2 &&
        (uVar58 < uVar83 + uVar80 * 2)))) {
      uVar67 = 0;
    }
    else {
      uVar67 = uVar80 & 0xfffffff0;
      puVar73 = (undefined8 *)(uVar58 + 0x10);
      puVar77 = (undefined8 *)(uVar83 + 0x10);
      uVar58 = uVar67;
      do {
        uVar95 = puVar73[-2];
        puVar42 = puVar73 + -1;
        uVar100 = *puVar73;
        uVar41 = puVar73[1];
        puVar73 = puVar73 + 4;
        uVar58 = uVar58 - 0x10;
        puVar77[-1] = *puVar42;
        puVar77[-2] = uVar95;
        puVar77[1] = uVar41;
        *puVar77 = uVar100;
        puVar77 = puVar77 + 4;
      } while (uVar58 != 0);
      if (uVar67 == uVar80) goto LAB_00123020;
    }
    lVar60 = uVar80 - uVar67;
    puVar57 = (undefined2 *)(lVar81 + (uVar67 + lVar59) * 2);
    puVar63 = (undefined2 *)(uVar83 + uVar67 * 2);
    do {
      lVar60 = lVar60 + -1;
      *puVar63 = *puVar57;
      puVar57 = puVar57 + 1;
      puVar63 = puVar63 + 1;
    } while (lVar60 != 0);
  }
LAB_00123020:
  *(short *)(param_1 + 0x10) = sVar50;
  if (param_1[7] == 0) {
    iVar88 = 1;
  }
  else {
    if (((short)param_1[10] < iVar10) ||
       ((param_1[0x3d] != 0 && (*(short *)((long)param_1 + 0x2a) < iVar10)))) {
      iVar88 = 1;
    }
    else {
      iVar88 = 0;
    }
    param_1[0x3d] = iVar88;
  }
  return iVar88;
}

