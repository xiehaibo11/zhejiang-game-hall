
/* WARNING: Type propagation algorithm not settling */

ulong speex_echo_cancellation(uint *param_1,short *param_2,short *param_3,short *param_4)

{
  undefined1 (*pauVar1) [16];
  ushort uVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  short *psVar12;
  short *psVar14;
  short *psVar21;
  short *psVar22;
  ushort uVar25;
  uint uVar26;
  ulong uVar27;
  undefined8 *puVar28;
  short *psVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  short *psVar33;
  short *psVar34;
  undefined2 *puVar35;
  long lVar36;
  undefined8 *puVar37;
  undefined2 *puVar38;
  int *piVar39;
  ulong uVar40;
  short *psVar41;
  short *psVar42;
  ushort uVar43;
  uint uVar44;
  ulong uVar45;
  long lVar46;
  long lVar47;
  int *piVar48;
  ulong uVar49;
  uint uVar50;
  uint uVar51;
  short *psVar52;
  uint uVar53;
  ulong uVar54;
  long lVar55;
  ulong uVar56;
  short *psVar57;
  ulong *puVar58;
  uint uVar59;
  long lVar60;
  ulong uVar61;
  ulong uVar62;
  long lVar63;
  long lVar64;
  ulong uVar65;
  ushort *puVar66;
  uint uVar67;
  long lVar68;
  ulong uVar69;
  int *piVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  short *psVar74;
  short *psVar75;
  uint uVar76;
  uint uVar77;
  long lVar78;
  uint uVar79;
  uint uVar80;
  undefined8 *puVar81;
  long lVar82;
  uint uVar83;
  uint uVar84;
  uint uVar85;
  uint uVar86;
  long lVar87;
  ulong uVar88;
  int *piVar89;
  uint uVar90;
  int iVar91;
  uint uVar92;
  int iVar93;
  uint uVar95;
  int iVar96;
  undefined8 uVar94;
  int iVar97;
  int iVar98;
  int iVar99;
  int iVar101;
  undefined8 uVar100;
  int iVar102;
  int iVar103;
  undefined8 uVar104;
  undefined8 uVar105;
  int iVar106;
  int iVar107;
  int iVar108;
  short sVar109;
  undefined8 uVar110;
  undefined8 uVar111;
  short sVar113;
  short sVar114;
  undefined8 uVar112;
  short sVar115;
  undefined8 uVar116;
  short sVar117;
  short sVar120;
  short sVar121;
  short sVar122;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  int iVar124;
  int iVar125;
  undefined1 auVar123 [16];
  undefined1 auVar126 [16];
  uint6 uVar127;
  undefined1 auVar129 [16];
  short sVar130;
  undefined2 uVar131;
  undefined2 uVar132;
  int iVar133;
  int iVar135;
  int iVar136;
  int iVar137;
  undefined1 auVar134 [16];
  undefined1 auVar138 [16];
  int iVar139;
  int iVar140;
  int iVar141;
  int iVar142;
  int local_17c;
  ulong local_178;
  uint local_170;
  int local_11c;
  int local_118;
  uint local_114;
  ulong local_b8;
  uint local_a4;
  ulong local_a0;
  long local_90;
  short *psVar13;
  short *psVar15;
  short *psVar16;
  short *psVar17;
  short *psVar18;
  short *psVar19;
  short *psVar20;
  short *psVar23;
  short *psVar24;
  undefined1 auVar128 [14];
  
  uVar80 = param_1[1];
  uVar65 = (ulong)uVar80;
  uVar53 = param_1[2];
  uVar88 = (ulong)uVar53;
  uVar86 = param_1[7];
  uVar84 = param_1[8];
  lVar60 = (long)(int)uVar80;
  uVar61 = (ulong)uVar86;
  uVar62 = (ulong)uVar84;
  param_1[3] = param_1[3] + 1;
  if (0 < (int)uVar86) {
    lVar63 = *(long *)(param_1 + 0x14);
    lVar68 = *(long *)(param_1 + 0x4a);
    uVar30 = *param_1;
    uVar54 = 0;
    psVar57 = param_2;
    do {
      iVar91 = (int)uVar54;
      if (0 < (int)uVar30) {
        sVar109 = *(short *)((long)param_1 + 0x122);
        piVar70 = (int *)(lVar68 + uVar54 * 8);
        uVar45 = (ulong)uVar30;
        iVar93 = *piVar70;
        iVar96 = piVar70[1];
        iVar98 = (int)sVar109;
        iVar97 = (int)(short)((short)((uint)(((int)(short)(0x7fff - sVar109) *
                                              (int)(short)(0x7fff - sVar109) * 2 >> 0x10) * 0x599a)
                                     >> 0xf) + (short)((uint)(sVar109 * iVar98) >> 0xf));
        puVar35 = (undefined2 *)(lVar63 + (long)(int)(uVar30 * iVar91) * 2);
        psVar33 = psVar57;
        do {
          sVar109 = *psVar33;
          psVar33 = psVar33 + (int)uVar86;
          iVar99 = sVar109 * 0x8000;
          uVar30 = iVar99 + iVar93;
          iVar101 = (int)(uVar30 * 2) >> 0x10;
          uVar30 = uVar30 & 0x7fff;
          iVar93 = iVar101 * iVar98 + ((int)(uVar30 * iVar98) >> 0xf);
          uVar131 = 0x8001;
          if (-0x3fffc001 < iVar93) {
            uVar131 = (short)(iVar93 + 0x4000U >> 0xf);
          }
          uVar132 = 0x7fff;
          if (iVar93 < 0x3fffc000) {
            uVar132 = uVar131;
          }
          iVar93 = iVar96 + (iVar93 + sVar109 * -0x8000) * 2;
          iVar96 = (iVar99 - ((int)(uVar30 * iVar97) >> 0xf)) - iVar101 * iVar97;
          uVar45 = uVar45 - 1;
          *puVar35 = uVar132;
          puVar35 = puVar35 + 1;
        } while (uVar45 != 0);
        *piVar70 = iVar93;
        piVar70[1] = iVar96;
        uVar30 = *param_1;
      }
      if (0 < (int)uVar30) {
        lVar36 = *(long *)(param_1 + 0x44);
        sVar109 = *(short *)(lVar63 + (long)(int)(uVar30 * iVar91) * 2);
        iVar93 = (int)sVar109 -
                 ((int)*(short *)(lVar36 + uVar54 * 2) * (int)(short)param_1[0x48] + 0x4000 >> 0xf);
        if (iVar93 < 0x8000) {
          if (iVar93 < -0x7fff) {
            if (param_1[5] == 0) {
              param_1[5] = 1;
            }
            iVar93 = -0x7fff;
          }
        }
        else {
          if (param_1[5] == 0) {
            param_1[5] = 1;
          }
          iVar93 = 0x7fff;
        }
        *(short *)(lVar36 + uVar54 * 2) = sVar109;
        *(short *)(lVar63 + (long)(int)(uVar30 * iVar91) * 2) = (short)iVar93;
        if (1 < (int)uVar30) {
          lVar82 = lVar63 + (long)(int)(uVar30 * iVar91) * 2;
          lVar46 = 1;
          do {
            sVar109 = *(short *)(lVar82 + lVar46 * 2);
            iVar91 = (int)sVar109 -
                     ((int)*(short *)(lVar36 + uVar54 * 2) * (int)(short)param_1[0x48] + 0x4000 >>
                     0xf);
            if (iVar91 < 0x8000) {
              if (iVar91 < -0x7fff) {
                if (param_1[5] == 0) {
                  param_1[5] = 1;
                }
                iVar91 = -0x7fff;
              }
            }
            else {
              if (param_1[5] == 0) {
                param_1[5] = 1;
              }
              iVar91 = 0x7fff;
            }
            *(short *)(lVar36 + uVar54 * 2) = sVar109;
            *(short *)(lVar82 + lVar46 * 2) = (short)iVar91;
            lVar46 = lVar46 + 1;
          } while ((int)lVar46 < (int)uVar30);
        }
      }
      uVar54 = uVar54 + 1;
      psVar57 = psVar57 + 1;
    } while (uVar54 != uVar61);
  }
  if ((int)uVar84 < 1) {
LAB_001158a8:
    uVar30 = 0;
  }
  else {
    uVar59 = *param_1;
    lVar63 = 0;
    uVar54 = 0;
    uVar30 = uVar59;
    do {
      if (0 < (int)uVar59) {
        lVar36 = *(long *)(param_1 + 0x10);
        lVar82 = *(long *)(param_1 + 0x42);
        lVar68 = 0;
        psVar57 = param_3;
        do {
          iVar91 = uVar30 + (int)lVar68;
          *(undefined2 *)(lVar36 + lVar63 * 2 + lVar68 * 2) =
               *(undefined2 *)(lVar36 + (long)iVar91 * 2);
          iVar93 = (int)*psVar57 -
                   ((int)*(short *)(lVar82 + uVar54 * 2) * (int)(short)param_1[0x48] + 0x4000 >> 0xf
                   );
          if (iVar93 < 0x8000) {
            if (iVar93 < -0x7fff) {
              iVar93 = -0x7fff;
              goto LAB_001154fc;
            }
          }
          else {
            iVar93 = 0x7fff;
LAB_001154fc:
            param_1[5] = uVar53 + 1;
          }
          *(short *)(lVar36 + (long)iVar91 * 2) = (short)iVar93;
          sVar109 = *psVar57;
          lVar68 = lVar68 + 1;
          psVar57 = psVar57 + (int)uVar84;
          *(short *)(lVar82 + uVar54 * 2) = sVar109;
        } while (lVar68 < (int)uVar59);
      }
      uVar54 = uVar54 + 1;
      uVar30 = uVar30 + uVar80;
      param_3 = param_3 + 1;
      lVar63 = lVar63 + lVar60;
    } while (uVar54 != uVar62);
    if ((int)uVar84 < 1) goto LAB_001158a8;
    uVar54 = 0;
    iVar96 = uVar84 * uVar80;
    iVar97 = uVar84 * uVar80 * uVar53;
    iVar98 = iVar96 * (uVar53 - 1);
    uVar45 = uVar65 & 0xfffffff0;
    iVar93 = iVar97;
    iVar91 = iVar98;
    do {
      if (0 < (int)uVar53) {
        iVar101 = (int)uVar54 * uVar80;
        iVar99 = 0;
        uVar27 = uVar88;
        iVar108 = iVar91;
        iVar103 = iVar93;
        do {
          iVar107 = (int)uVar27;
          if (0 < (int)uVar80) {
            lVar63 = *(long *)(param_1 + 0x12);
            if (uVar80 < 0x10) {
LAB_001156a8:
              uVar27 = 0;
            }
            else {
              iVar106 = iVar99 * -(uVar84 * uVar80);
              iVar102 = iVar97 + iVar101 + iVar106;
              iVar124 = (int)(uVar65 - 1);
              uVar27 = 0;
              if (((iVar102 <= iVar102 + iVar124) && (uVar65 - 1 >> 0x20 == 0)) &&
                 (iVar106 = iVar98 + iVar101 + iVar106, iVar106 <= iVar106 + iVar124)) {
                iVar102 = iVar99 * -(uVar84 * uVar80);
                lVar68 = lVar63 + uVar65 * 2;
                lVar82 = (long)(int)(iVar96 * uVar53 + iVar101 + iVar102) * 2;
                lVar36 = (long)(int)(uVar84 * uVar80 * (uVar53 - 1) + iVar101 + iVar102) * 2;
                uVar27 = uVar45;
                iVar102 = iVar108;
                iVar106 = iVar103;
                if (((ulong)(lVar63 + lVar82) < (ulong)(lVar68 + lVar36)) &&
                   ((ulong)(lVar63 + lVar36) < (ulong)(lVar68 + lVar82))) goto LAB_001156a8;
                do {
                  puVar81 = (undefined8 *)(lVar63 + (long)iVar102 * 2);
                  uVar94 = *puVar81;
                  uVar104 = puVar81[3];
                  uVar100 = puVar81[2];
                  puVar37 = (undefined8 *)(lVar63 + (long)iVar106 * 2);
                  uVar27 = uVar27 - 0x10;
                  puVar37[1] = puVar81[1];
                  *puVar37 = uVar94;
                  puVar37[3] = uVar104;
                  puVar37[2] = uVar100;
                  iVar102 = iVar102 + 0x10;
                  iVar106 = iVar106 + 0x10;
                } while (uVar27 != 0);
                uVar27 = uVar45;
                if (uVar45 == uVar65) goto LAB_001156cc;
              }
            }
            lVar68 = uVar65 - uVar27;
            do {
              iVar102 = (int)uVar27;
              lVar68 = lVar68 + -1;
              uVar27 = (ulong)(iVar102 + 1);
              *(undefined2 *)(lVar63 + (long)(iVar103 + iVar102) * 2) =
                   *(undefined2 *)(lVar63 + (long)(iVar108 + iVar102) * 2);
            } while (lVar68 != 0);
          }
LAB_001156cc:
          iVar99 = iVar99 + 1;
          iVar103 = iVar103 - iVar96;
          iVar108 = iVar108 - iVar96;
          uVar27 = (ulong)(iVar107 - 1);
        } while (1 < iVar107);
      }
      lVar63 = uVar54 * lVar60 * 2;
      spx_fft(*(undefined8 *)(param_1 + 0x40),*(long *)(param_1 + 0x10) + lVar63,
              *(long *)(param_1 + 0x12) + lVar63);
      uVar54 = uVar54 + 1;
      iVar91 = iVar91 + uVar80;
      iVar93 = iVar93 + uVar80;
    } while (uVar54 != uVar62);
    if ((int)uVar84 < 1) goto LAB_001158a8;
    lVar68 = *(long *)(param_1 + 0x10);
    lVar36 = *(long *)(param_1 + 0x12);
    piVar70 = *(int **)(param_1 + 0x34);
    uVar45 = (ulong)((uVar80 - 3 >> 1) + 2);
    lVar63 = 0;
    uVar54 = 0;
    uVar30 = 0;
    psVar57 = (short *)(lVar36 + 6);
    do {
      uVar59 = *param_1;
      iVar91 = (int)uVar59 >> 1;
      if (iVar91 == 0) {
        iVar93 = 0;
      }
      else {
        uVar27 = (ulong)(iVar91 - 1) + 1;
        psVar33 = (short *)(lVar68 + uVar54 * lVar60 * 2 + (long)(int)uVar59 * 2);
        if (uVar27 < 8) {
          iVar93 = 0;
        }
        else {
          uVar90 = uVar59 >> 1 & 7;
          lVar46 = uVar27 - uVar90;
          lVar82 = lVar63 + (long)(int)uVar59 * 2;
          iVar93 = 0;
          iVar96 = 0;
          iVar97 = 0;
          iVar98 = 0;
          psVar33 = psVar33 + lVar46 * 2;
          iVar91 = iVar91 - (int)lVar46;
          iVar99 = 0;
          iVar101 = 0;
          iVar103 = 0;
          iVar108 = 0;
          do {
            psVar42 = (short *)(lVar68 + lVar82);
            lVar46 = lVar46 + -8;
            lVar82 = lVar82 + 0x20;
            iVar93 = iVar93 + ((uint)((int)psVar42[1] * (int)psVar42[1] +
                                     (int)*psVar42 * (int)*psVar42) >> 6);
            iVar96 = iVar96 + ((uint)((int)psVar42[3] * (int)psVar42[3] +
                                     (int)psVar42[2] * (int)psVar42[2]) >> 6);
            iVar97 = iVar97 + ((uint)((int)psVar42[5] * (int)psVar42[5] +
                                     (int)psVar42[4] * (int)psVar42[4]) >> 6);
            iVar98 = iVar98 + ((uint)((int)psVar42[7] * (int)psVar42[7] +
                                     (int)psVar42[6] * (int)psVar42[6]) >> 6);
            iVar99 = iVar99 + ((uint)((int)psVar42[9] * (int)psVar42[9] +
                                     (int)psVar42[8] * (int)psVar42[8]) >> 6);
            iVar101 = iVar101 + ((uint)((int)psVar42[0xb] * (int)psVar42[0xb] +
                                       (int)psVar42[10] * (int)psVar42[10]) >> 6);
            iVar103 = iVar103 + ((uint)((int)psVar42[0xd] * (int)psVar42[0xd] +
                                       (int)psVar42[0xc] * (int)psVar42[0xc]) >> 6);
            iVar108 = iVar108 + ((uint)((int)psVar42[0xf] * (int)psVar42[0xf] +
                                       (int)psVar42[0xe] * (int)psVar42[0xe]) >> 6);
          } while (lVar46 != 0);
          iVar93 = iVar99 + iVar93 + iVar101 + iVar96 + iVar103 + iVar97 + iVar108 + iVar98;
          if (uVar90 == 0) goto LAB_00115808;
        }
        do {
          sVar109 = *psVar33;
          psVar42 = psVar33 + 1;
          iVar91 = iVar91 + -1;
          psVar33 = psVar33 + 2;
          iVar93 = iVar93 + ((uint)((int)sVar109 * (int)sVar109 + (int)*psVar42 * (int)*psVar42) >>
                            6);
        } while (iVar91 != 0);
      }
LAB_00115808:
      psVar33 = (short *)(lVar36 + uVar54 * lVar60 * 2);
      uVar30 = iVar93 + uVar30;
      iVar91 = (int)*psVar33;
      *piVar70 = *piVar70 + iVar91 * iVar91;
      iVar91 = (int)psVar33[1];
      iVar91 = iVar91 * iVar91;
      lVar82 = uVar45 - 1;
      psVar33 = psVar57;
      piVar48 = piVar70;
      if ((int)uVar80 < 3) {
        uVar27 = 1;
      }
      else {
        do {
          piVar48 = piVar48 + 1;
          lVar82 = lVar82 + -1;
          *piVar48 = *piVar48 + iVar91 + (int)psVar33[-1] * (int)psVar33[-1];
          iVar91 = (int)*psVar33 * (int)*psVar33;
          uVar27 = uVar45;
          psVar33 = psVar33 + 2;
        } while (lVar82 != 0);
      }
      uVar54 = uVar54 + 1;
      lVar63 = lVar63 + lVar60 * 2;
      psVar57 = psVar57 + lVar60;
      piVar70[uVar27] = piVar70[uVar27] + iVar91;
    } while (uVar54 != uVar62);
  }
  if ((int)uVar86 < 1) {
    local_170 = 0;
    uVar59 = param_1[4];
  }
  else {
    local_170 = 0;
    lVar46 = lVar60 * 2;
    lVar82 = lVar60 + -1;
    lVar68 = 0;
    uVar59 = uVar84 * uVar53;
    uVar27 = (ulong)uVar59;
    uVar45 = uVar27 & 0xfffffffe;
    iVar91 = 0;
    uVar54 = 0;
    lVar63 = 8;
    lVar36 = (lVar46 + -1) * 2;
    do {
      lVar87 = (long)iVar91;
      lVar55 = *(long *)(param_1 + 0x12);
      lVar64 = *(long *)(param_1 + 0x22);
      lVar47 = uVar54 * lVar60;
      puVar35 = (undefined2 *)(*(long *)(param_1 + 0x1a) + lVar47 * 2);
      if ((int)uVar59 < 1) {
        uVar131 = 0;
      }
      else {
        if (uVar59 == 1) {
          iVar93 = 0;
          uVar56 = 0;
LAB_0011599c:
          lVar71 = lVar46 * uVar56;
          lVar73 = uVar27 - uVar56;
          do {
            psVar57 = (short *)(lVar55 + lVar71);
            psVar33 = (short *)(lVar64 + lVar87 * 2 + lVar71);
            lVar73 = lVar73 + -1;
            lVar71 = lVar71 + lVar46;
            iVar93 = iVar93 + (int)*psVar33 * (int)*psVar57;
          } while (lVar73 != 0);
        }
        else {
          lVar71 = lVar64 + lVar87 * 2;
          lVar73 = 0;
          iVar96 = 0;
          iVar93 = 0;
          uVar56 = uVar45;
          do {
            psVar57 = (short *)(lVar55 + lVar73);
            psVar33 = (short *)(lVar55 + lVar46 + lVar73);
            psVar42 = (short *)(lVar71 + lVar73);
            psVar52 = (short *)(lVar71 + lVar46 + lVar73);
            uVar56 = uVar56 - 2;
            lVar73 = lVar73 + lVar60 * 4;
            iVar96 = iVar96 + (int)*psVar42 * (int)*psVar57;
            iVar93 = iVar93 + (int)*psVar52 * (int)*psVar33;
          } while (uVar56 != 0);
          iVar93 = iVar93 + iVar96;
          uVar56 = uVar45;
          if (uVar45 != uVar27) goto LAB_0011599c;
        }
        uVar131 = (undefined2)(iVar93 + 0x400U >> 0xb);
      }
      *puVar35 = uVar131;
      if (2 < (int)uVar80) {
        lVar71 = lVar55 + 2;
        lVar73 = lVar64 + lVar87 * 2 + 2;
        lVar72 = 1;
        do {
          if ((int)uVar59 < 1) {
            iVar96 = 0;
            iVar93 = 0;
          }
          else {
            lVar78 = 0;
            iVar93 = 0;
            iVar96 = 0;
            uVar56 = uVar27;
            do {
              uVar56 = uVar56 - 1;
              iVar97 = (int)*(short *)(lVar71 + lVar78);
              iVar98 = (int)*(short *)(lVar73 + lVar78);
              iVar99 = (int)((short *)(lVar71 + lVar78))[1];
              iVar101 = (int)((short *)(lVar73 + lVar78))[1];
              iVar96 = (iVar96 + iVar98 * iVar97) - iVar101 * iVar99;
              iVar93 = iVar93 + iVar99 * iVar98 + iVar101 * iVar97;
              lVar78 = lVar78 + lVar46;
            } while (uVar56 != 0);
          }
          puVar38 = puVar35 + lVar72;
          lVar72 = lVar72 + 2;
          lVar71 = lVar71 + 4;
          lVar73 = lVar73 + 4;
          *puVar38 = (short)(iVar96 + 0x400U >> 0xb);
          puVar38[1] = (short)(iVar93 + 0x400U >> 0xb);
        } while (lVar72 < lVar82);
      }
      if ((int)uVar59 < 1) {
        uVar131 = 0;
      }
      else {
        if (uVar59 == 1) {
          iVar93 = 0;
          uVar56 = 0;
LAB_00115af8:
          lVar71 = 0;
          lVar73 = uVar27 - uVar56;
          lVar72 = lVar60 * (uVar56 + 1);
          do {
            psVar57 = (short *)(lVar55 + lVar72 * 2 + -2 + lVar71);
            psVar33 = (short *)(lVar64 + (lVar72 + lVar87) * 2 + -2 + lVar71);
            lVar73 = lVar73 + -1;
            lVar71 = lVar71 + lVar46;
            iVar93 = iVar93 + (int)*psVar33 * (int)*psVar57;
          } while (lVar73 != 0);
        }
        else {
          lVar71 = 0;
          iVar96 = 0;
          iVar93 = 0;
          uVar56 = uVar45;
          do {
            psVar57 = (short *)(lVar55 + lVar82 * 2 + lVar71);
            psVar33 = (short *)(lVar55 + lVar36 + lVar71);
            psVar42 = (short *)(lVar64 + lVar82 * 2 + lVar87 * 2 + lVar71);
            psVar52 = (short *)(lVar64 + lVar36 + lVar87 * 2 + lVar71);
            uVar56 = uVar56 - 2;
            lVar71 = lVar71 + lVar60 * 4;
            iVar96 = iVar96 + (int)*psVar42 * (int)*psVar57;
            iVar93 = iVar93 + (int)*psVar52 * (int)*psVar33;
          } while (uVar56 != 0);
          iVar93 = iVar93 + iVar96;
          uVar56 = uVar45;
          if (uVar45 != uVar27) goto LAB_00115af8;
        }
        uVar131 = (undefined2)(iVar93 + 0x400U >> 0xb);
      }
      puVar35[lVar82] = uVar131;
      spx_ifft(*(undefined8 *)(param_1 + 0x40),puVar35,*(long *)(param_1 + 0xe) + lVar47 * 2);
      uVar67 = *param_1;
      uVar56 = (ulong)(int)uVar67;
      uVar90 = (int)uVar67 >> 1;
      if ((int)uVar67 < 1) {
        lVar55 = *(long *)(param_1 + 0xe);
        if (uVar90 == 0) goto LAB_00115bf0;
LAB_00115bc0:
        uVar56 = (ulong)(uVar90 - 1) + 1;
        psVar57 = (short *)(lVar55 + lVar47 * 2);
        if (7 < uVar56) {
          uVar67 = uVar67 >> 1 & 7;
          lVar47 = uVar56 - uVar67;
          psVar33 = (short *)(lVar55 + lVar63 * 2);
          iVar93 = 0;
          iVar96 = 0;
          iVar97 = 0;
          iVar98 = 0;
          psVar57 = psVar57 + lVar47 * 2;
          uVar90 = uVar90 - (int)lVar47;
          iVar99 = 0;
          iVar101 = 0;
          iVar103 = 0;
          iVar108 = 0;
          do {
            psVar74 = psVar33 + -8;
            sVar109 = *psVar33;
            psVar34 = psVar33 + 1;
            psVar29 = psVar33 + 2;
            psVar52 = psVar33 + 3;
            psVar42 = psVar33 + 4;
            psVar12 = psVar33 + 5;
            psVar13 = psVar33 + 6;
            psVar75 = psVar33 + 7;
            psVar14 = psVar33 + -7;
            psVar15 = psVar33 + -6;
            psVar16 = psVar33 + -5;
            psVar17 = psVar33 + -4;
            psVar18 = psVar33 + -3;
            psVar19 = psVar33 + -2;
            psVar20 = psVar33 + -1;
            lVar47 = lVar47 + -8;
            psVar33 = psVar33 + 0x10;
            iVar99 = iVar99 + ((uint)((int)*psVar34 * (int)*psVar34 + (int)sVar109 * (int)sVar109)
                              >> 6);
            iVar101 = iVar101 + ((uint)((int)*psVar52 * (int)*psVar52 +
                                       (int)*psVar29 * (int)*psVar29) >> 6);
            iVar103 = iVar103 + ((uint)((int)*psVar12 * (int)*psVar12 +
                                       (int)*psVar42 * (int)*psVar42) >> 6);
            iVar108 = iVar108 + ((uint)((int)*psVar75 * (int)*psVar75 +
                                       (int)*psVar13 * (int)*psVar13) >> 6);
            iVar93 = iVar93 + ((uint)((int)*psVar14 * (int)*psVar14 + (int)*psVar74 * (int)*psVar74)
                              >> 6);
            iVar96 = iVar96 + ((uint)((int)*psVar16 * (int)*psVar16 + (int)*psVar15 * (int)*psVar15)
                              >> 6);
            iVar97 = iVar97 + ((uint)((int)*psVar18 * (int)*psVar18 + (int)*psVar17 * (int)*psVar17)
                              >> 6);
            iVar98 = iVar98 + ((uint)((int)*psVar20 * (int)*psVar20 + (int)*psVar19 * (int)*psVar19)
                              >> 6);
          } while (lVar47 != 0);
          iVar93 = iVar99 + iVar93 + iVar101 + iVar96 + iVar103 + iVar97 + iVar108 + iVar98;
          goto joined_r0x00115d40;
        }
        iVar93 = 0;
        do {
          sVar109 = *psVar57;
          psVar33 = psVar57 + 1;
          uVar90 = uVar90 - 1;
          psVar57 = psVar57 + 2;
          iVar93 = iVar93 + ((uint)((int)sVar109 * (int)sVar109 + (int)*psVar33 * (int)*psVar33) >>
                            6);
          uVar67 = uVar90;
joined_r0x00115d40:
        } while (uVar67 != 0);
      }
      else {
        lVar64 = *(long *)(param_1 + 0x14);
        lVar55 = *(long *)(param_1 + 0xe);
        iVar93 = (int)uVar54;
        if (uVar67 < 0x10) {
          uVar69 = 0;
LAB_00115b84:
          do {
            *(short *)(lVar55 + lVar68 * 2 + uVar69 * 2) =
                 *(short *)(lVar64 + (long)(int)(uVar67 * iVar93 + (int)uVar69) * 2) -
                 *(short *)(lVar55 + (long)(int)(uVar67 + (int)lVar68 + (int)uVar69) * 2);
            uVar69 = uVar69 + 1;
          } while ((long)uVar69 < (long)uVar56);
        }
        else {
          iVar96 = (int)(uVar56 - 1);
          uVar69 = 0;
          if ((((int)(uVar67 * iVar93 + iVar96) < (int)(uVar67 * iVar93)) ||
              (uVar56 - 1 >> 0x20 != 0)) ||
             (iVar97 = uVar67 + uVar80 * iVar93, iVar97 + iVar96 < iVar97)) goto LAB_00115b84;
          uVar40 = lVar55 + lVar47 * 2;
          uVar49 = lVar55 + (lVar47 + uVar56) * 2;
          uVar69 = 0;
          if ((uVar40 < lVar64 + (uVar56 + (long)(int)(uVar67 * iVar93)) * 2 &&
               (ulong)(lVar64 + (long)(int)(uVar67 * iVar93) * 2) < uVar49) ||
             (uVar40 < lVar55 + ((long)(int)(uVar80 * iVar93) + uVar56 * 2) * 2 &&
              lVar55 + (uVar56 + (long)(int)(uVar80 * iVar93)) * 2 < uVar49)) goto LAB_00115b84;
          uVar69 = uVar56 & 0xfffffffffffffff0;
          puVar81 = (undefined8 *)(lVar55 + lVar63 * 2);
          iVar96 = uVar67 + (int)lVar68;
          iVar97 = uVar67 * iVar93;
          uVar40 = uVar69;
          do {
            puVar37 = (undefined8 *)(lVar64 + (long)iVar97 * 2);
            puVar28 = (undefined8 *)(lVar55 + (long)iVar96 * 2);
            uVar100 = puVar37[1];
            uVar94 = *puVar37;
            uVar105 = puVar37[3];
            uVar104 = puVar37[2];
            uVar111 = puVar28[1];
            uVar110 = *puVar28;
            uVar116 = puVar28[3];
            uVar112 = puVar28[2];
            iVar96 = iVar96 + 0x10;
            uVar40 = uVar40 - 0x10;
            iVar97 = iVar97 + 0x10;
            puVar81[-1] = CONCAT26((short)((ulong)uVar100 >> 0x30) - (short)((ulong)uVar111 >> 0x30)
                                   ,CONCAT24((short)((ulong)uVar100 >> 0x20) -
                                             (short)((ulong)uVar111 >> 0x20),
                                             CONCAT22((short)((ulong)uVar100 >> 0x10) -
                                                      (short)((ulong)uVar111 >> 0x10),
                                                      (short)uVar100 - (short)uVar111)));
            puVar81[-2] = CONCAT26((short)((ulong)uVar94 >> 0x30) - (short)((ulong)uVar110 >> 0x30),
                                   CONCAT24((short)((ulong)uVar94 >> 0x20) -
                                            (short)((ulong)uVar110 >> 0x20),
                                            CONCAT22((short)((ulong)uVar94 >> 0x10) -
                                                     (short)((ulong)uVar110 >> 0x10),
                                                     (short)uVar94 - (short)uVar110)));
            puVar81[1] = CONCAT26((short)((ulong)uVar105 >> 0x30) - (short)((ulong)uVar116 >> 0x30),
                                  CONCAT24((short)((ulong)uVar105 >> 0x20) -
                                           (short)((ulong)uVar116 >> 0x20),
                                           CONCAT22((short)((ulong)uVar105 >> 0x10) -
                                                    (short)((ulong)uVar116 >> 0x10),
                                                    (short)uVar105 - (short)uVar116)));
            *puVar81 = CONCAT26((short)((ulong)uVar104 >> 0x30) - (short)((ulong)uVar112 >> 0x30),
                                CONCAT24((short)((ulong)uVar104 >> 0x20) -
                                         (short)((ulong)uVar112 >> 0x20),
                                         CONCAT22((short)((ulong)uVar104 >> 0x10) -
                                                  (short)((ulong)uVar112 >> 0x10),
                                                  (short)uVar104 - (short)uVar112)));
            puVar81 = puVar81 + 4;
          } while (uVar40 != 0);
          if (uVar69 != uVar56) goto LAB_00115b84;
        }
        if (uVar90 != 0) goto LAB_00115bc0;
LAB_00115bf0:
        iVar93 = 0;
      }
      uVar54 = uVar54 + 1;
      lVar63 = lVar63 + lVar60;
      lVar68 = lVar68 + lVar60;
      local_170 = iVar93 + local_170;
      iVar91 = iVar91 + uVar84 * uVar53 * uVar80;
    } while (uVar54 != uVar61);
    uVar59 = param_1[4];
  }
  if ((uVar59 != 0) && (0 < (int)uVar53)) {
    lVar68 = *(long *)(param_1 + 0x20);
    iVar91 = 0;
    lVar63 = *(long *)(param_1 + 0x3e);
    uVar54 = 0;
    uVar45 = uVar65 & 0xfffffff8;
    iVar93 = 1;
    do {
      if ((int)(uVar84 * uVar86) < 1) {
        uVar59 = 1;
      }
      else {
        iVar96 = 0;
        uVar90 = 1;
        iVar97 = iVar91;
        do {
          if (0 < (int)uVar80) {
            if (uVar80 < 8) {
              uVar27 = 0;
            }
            else {
              iVar98 = uVar80 * (int)uVar54 + uVar53 * uVar80 * iVar96;
              uVar27 = 0;
              if ((iVar98 <= iVar98 + (int)(uVar65 - 1)) && (uVar65 - 1 >> 0x20 == 0)) {
                iVar101 = 0;
                iVar103 = 0;
                iVar99 = 0;
                iVar108 = 0;
                iVar107 = 0;
                iVar102 = 0;
                iVar106 = 0;
                uVar27 = uVar45;
                iVar98 = iVar97;
                do {
                  puVar81 = (undefined8 *)(lVar68 + (long)iVar98 * 4);
                  uVar27 = uVar27 - 8;
                  iVar98 = iVar98 + 8;
                  iVar124 = (int)*puVar81 >> 0x12;
                  iVar125 = (int)((long)*puVar81 >> 0x32);
                  iVar133 = (int)puVar81[1] >> 0x12;
                  iVar135 = (int)((long)puVar81[1] >> 0x32);
                  iVar136 = (int)puVar81[2] >> 0x12;
                  iVar137 = (int)((long)puVar81[2] >> 0x32);
                  iVar139 = (int)puVar81[3] >> 0x12;
                  iVar140 = (int)((long)puVar81[3] >> 0x32);
                  uVar90 = uVar90 + iVar124 * iVar124;
                  iVar99 = iVar99 + iVar125 * iVar125;
                  iVar101 = iVar101 + iVar133 * iVar133;
                  iVar103 = iVar103 + iVar135 * iVar135;
                  iVar108 = iVar108 + iVar136 * iVar136;
                  iVar107 = iVar107 + iVar137 * iVar137;
                  iVar102 = iVar102 + iVar139 * iVar139;
                  iVar106 = iVar106 + iVar140 * iVar140;
                } while (uVar27 != 0);
                uVar90 = iVar108 + uVar90 + iVar107 + iVar99 + iVar102 + iVar101 + iVar106 + iVar103
                ;
                uVar27 = uVar45;
                if (uVar45 == uVar65) goto LAB_00115ea4;
              }
            }
            lVar36 = uVar65 - uVar27;
            iVar98 = iVar97 + (int)uVar27;
            do {
              lVar82 = (long)iVar98;
              lVar36 = lVar36 + -1;
              iVar98 = iVar98 + 1;
              iVar99 = *(int *)(lVar68 + lVar82 * 4) >> 0x12;
              uVar90 = uVar90 + iVar99 * iVar99;
            } while (lVar36 != 0);
          }
LAB_00115ea4:
          iVar96 = iVar96 + 1;
          iVar97 = iVar97 + uVar53 * uVar80;
        } while (iVar96 != uVar84 * uVar86);
        uVar59 = -uVar90;
        if (-1 < (int)uVar90) {
          uVar59 = uVar90;
        }
        if (0x1fffffff < (int)uVar59) {
          uVar59 = 0x20000000;
        }
      }
      uVar67 = uVar59 >> 0x10;
      uVar90 = uVar67;
      if (uVar67 == 0) {
        uVar90 = uVar59;
      }
      uVar50 = (uint)(uVar67 != 0);
      uVar67 = uVar50 << 3 | 4;
      uVar79 = uVar90 >> 8;
      if (uVar90 < 0x100) {
        uVar67 = uVar50 << 3;
        uVar79 = uVar90;
      }
      uVar90 = uVar67 | 2;
      uVar50 = uVar79 >> 4;
      if (uVar79 < 0x10) {
        uVar90 = uVar67;
        uVar50 = uVar79;
      }
      uVar90 = uVar90 | 3 < uVar50;
      sVar109 = (short)(uVar59 >> (ulong)(uVar90 * 2 - 0xc & 0x1f));
      if ((ushort)uVar90 < 7) {
        sVar109 = (short)(uVar59 << (ulong)(uVar90 * -2 + 0xc & 0x1f));
      }
      iVar96 = (int)sVar109;
      uVar90 = 0xd - uVar90;
      iVar96 = (int)((((int)(((iVar96 * 0x41b0 + -0x31530000 >> 0x10) * iVar96 * 4 & 0xffff0000U) +
                            0x52b50000) >> 0x10) * iVar96 * 4 & 0xffff0000U) + 0xe320000) >> 0x10;
      iVar97 = iVar96 >> (uVar90 & 0x1f);
      if ((int)uVar90 < 1) {
        iVar97 = iVar96 << (ulong)(-uVar90 & 0x1f);
      }
      *(short *)(lVar63 + uVar54 * 2) = (short)iVar97;
      if ((short)iVar97 <= (short)iVar93) {
        iVar97 = iVar93;
      }
      uVar54 = uVar54 + 1;
      iVar91 = iVar91 + uVar80;
      iVar93 = iVar97;
    } while (uVar54 != uVar88);
    uVar59 = (short)iVar97 * 0xccd;
    if (uVar53 < 8) {
      uVar45 = 0;
      iVar91 = 1;
LAB_00116050:
      lVar68 = uVar88 - uVar45;
      psVar57 = (short *)(lVar63 + uVar45 * 2);
      do {
        lVar68 = lVar68 + -1;
        sVar109 = *psVar57 + (short)(uVar59 >> 0xf);
        *psVar57 = sVar109;
        iVar91 = iVar91 + sVar109;
        psVar57 = psVar57 + 1;
      } while (lVar68 != 0);
    }
    else {
      iVar96 = 0;
      iVar97 = 0;
      iVar91 = 1;
      iVar93 = 0;
      uVar45 = uVar88 & 0xfffffff8;
      sVar109 = (short)(uVar59 >> 0xf);
      puVar81 = (undefined8 *)(lVar63 + 8);
      iVar98 = 0;
      iVar99 = 0;
      iVar101 = 0;
      iVar103 = 0;
      uVar54 = uVar45;
      do {
        uVar94 = puVar81[-1];
        uVar100 = *puVar81;
        uVar54 = uVar54 - 8;
        sVar130 = (short)uVar94 + sVar109;
        sVar113 = (short)((ulong)uVar94 >> 0x10) + sVar109;
        sVar114 = (short)((ulong)uVar94 >> 0x20) + sVar109;
        sVar115 = (short)((ulong)uVar94 >> 0x30) + sVar109;
        sVar117 = (short)uVar100 + sVar109;
        sVar120 = (short)((ulong)uVar100 >> 0x10) + sVar109;
        sVar121 = (short)((ulong)uVar100 >> 0x20) + sVar109;
        sVar122 = (short)((ulong)uVar100 >> 0x30) + sVar109;
        puVar81[-1] = CONCAT26(sVar115,CONCAT24(sVar114,CONCAT22(sVar113,sVar130)));
        *puVar81 = CONCAT26(sVar122,CONCAT24(sVar121,CONCAT22(sVar120,sVar117)));
        iVar91 = iVar91 + sVar130;
        iVar93 = iVar93 + sVar113;
        iVar96 = iVar96 + sVar114;
        iVar97 = iVar97 + sVar115;
        iVar98 = iVar98 + sVar117;
        iVar99 = iVar99 + sVar120;
        iVar101 = iVar101 + sVar121;
        iVar103 = iVar103 + sVar122;
        puVar81 = puVar81 + 2;
      } while (uVar54 != 0);
      iVar91 = iVar98 + iVar91 + iVar99 + iVar93 + iVar101 + iVar96 + iVar103 + iVar97;
      if (uVar45 != uVar88) goto LAB_00116050;
    }
    if (uVar53 < 2) {
      uVar45 = 0;
    }
    else {
      uVar45 = uVar88 & 0xfffffffe;
      psVar57 = (short *)(lVar63 + 2);
      uVar54 = uVar45;
      do {
        uVar54 = uVar54 - 2;
        sVar109 = 0;
        if (iVar91 != 0) {
          sVar109 = (short)((psVar57[-1] * 0x7eb8) / iVar91);
        }
        sVar130 = 0;
        if (iVar91 != 0) {
          sVar130 = (short)((*psVar57 * 0x7eb8) / iVar91);
        }
        psVar57[-1] = sVar109;
        *psVar57 = sVar130;
        psVar57 = psVar57 + 2;
      } while (uVar54 != 0);
      if (uVar45 == uVar88) goto LAB_001160e4;
    }
    lVar68 = uVar88 - uVar45;
    psVar57 = (short *)(lVar63 + uVar45 * 2);
    do {
      lVar68 = lVar68 + -1;
      sVar109 = 0;
      if (iVar91 != 0) {
        sVar109 = (short)((*psVar57 * 0x7eb8) / iVar91);
      }
      *psVar57 = sVar109;
      psVar57 = psVar57 + 1;
    } while (lVar68 != 0);
  }
LAB_001160e4:
  if (param_1[5] == 0) {
    if (0 < (int)uVar86) {
      local_178 = 0;
      uVar88 = uVar65 & 0xfffffff8;
      local_90 = 1;
      iVar91 = uVar80 * uVar84 * (uVar53 - 1);
      uVar59 = uVar80 - 3 >> 1;
      uVar54 = (ulong)(uVar59 + 2);
      uVar59 = uVar59 + 1 & 3;
      lVar68 = uVar54 * 2 + -1;
      lVar63 = (uVar54 - 1) - (ulong)uVar59;
      local_17c = iVar91;
      do {
        if (0 < (int)uVar84) {
          local_114 = 0;
          lVar36 = local_178 * lVar60;
          local_118 = local_17c;
          local_11c = uVar84 * uVar80 * uVar53;
          do {
            if (0 < (int)uVar53) {
              iVar93 = 0;
              lVar46 = *(long *)(param_1 + 0x3e);
              lVar82 = (long)(int)uVar53;
              iVar97 = local_11c;
              iVar96 = local_118;
              do {
                piVar70 = *(int **)(param_1 + 0x2a);
                sVar109 = *(short *)(lVar46 + (lVar82 + -1) * 2);
                uVar90 = -(int)sVar109;
                if (-1 < sVar109) {
                  uVar90 = (int)sVar109;
                }
                if (uVar90 == 0) {
                  sVar130 = 0;
                  iVar98 = 0;
                }
                else {
                  uVar79 = uVar90 >> 0x10;
                  uVar67 = uVar79;
                  if (uVar79 == 0) {
                    uVar67 = uVar90;
                  }
                  uVar43 = (ushort)(uVar79 != 0);
                  uVar2 = uVar43 << 4 | 8;
                  uVar79 = uVar67 >> 8;
                  if (uVar67 < 0x100) {
                    uVar2 = uVar43 << 4;
                    uVar79 = uVar67;
                  }
                  uVar43 = uVar2 | 4;
                  uVar67 = uVar79 >> 4;
                  if (uVar79 < 0x10) {
                    uVar43 = uVar2;
                    uVar67 = uVar79;
                  }
                  uVar2 = uVar43 | 2;
                  uVar79 = uVar67 >> 2;
                  if (uVar67 < 4) {
                    uVar2 = uVar43;
                    uVar79 = uVar67;
                  }
                  if (1 < uVar79) {
                    uVar2 = uVar2 + 1;
                  }
                  uVar79 = (uint)(short)uVar2;
                  uVar67 = uVar79 - 0xe;
                  sVar113 = (short)(uVar90 >> (ulong)(uVar67 & 0x1f));
                  if (uVar67 == 0 || uVar79 < 0xe) {
                    sVar113 = (short)(uVar90 << (ulong)(0xe - uVar79 & 0x1f));
                  }
                  sVar130 = -sVar113;
                  if (-1 < sVar109) {
                    sVar130 = sVar113;
                  }
                  iVar98 = uVar67 * 0x10000;
                }
                lVar55 = *(long *)(param_1 + 0x12);
                lVar47 = *(long *)(param_1 + 0x1c);
                piVar3 = *(int **)(param_1 + 0x1e);
                piVar48 = piVar70 + 1;
                psVar57 = (short *)(lVar55 + (long)(int)(local_114 * uVar80 +
                                                        uVar84 * uVar80 * (int)lVar82) * 2);
                psVar33 = (short *)(lVar47 + lVar36 * 2);
                iVar103 = (int)sVar130;
                uVar90 = (int)*psVar33 * (int)*psVar57;
                iVar99 = (short)*piVar70 * iVar103 * 2 >> 0x10;
                uVar67 = -(*piVar70 + iVar98 >> 0x10) - 0xf;
                iVar99 = iVar99 * ((int)(uVar90 * 2) >> 0x10) +
                         ((int)(iVar99 * (uVar90 & 0x7fff)) >> 0xf);
                iVar101 = iVar99 >> (uVar67 & 0x1f);
                if ((int)uVar67 < 1) {
                  iVar101 = iVar99 << (ulong)(-uVar67 & 0x1f);
                }
                *piVar3 = iVar101;
                if ((int)uVar80 < 3) {
                  uVar45 = 1;
                }
                else {
                  if (uVar54 - 1 < 4) {
LAB_0011661c:
                    lVar64 = 1;
                    lVar87 = 1;
LAB_00116628:
                    piVar89 = piVar70 + lVar64;
                    lVar64 = uVar54 - lVar64;
                    piVar39 = piVar3 + lVar87 + 1;
                    psVar42 = (short *)(lVar55 + (lVar87 + iVar97) * 2 + 2);
                    psVar52 = (short *)(lVar47 + local_90 * 2 + lVar87 * 2);
                    do {
                      piVar89 = piVar89 + 1;
                      uVar90 = (int)psVar52[-1] * (int)psVar42[-1] + (int)*psVar52 * (int)*psVar42;
                      iVar101 = (short)*piVar48 * iVar103 * 2 >> 0x10;
                      uVar67 = (int)-*psVar42 * (int)psVar52[-1] + (int)*psVar52 * (int)psVar42[-1];
                      iVar99 = ((int)(uVar90 * 2) >> 0x10) * iVar101 +
                               ((int)((uVar90 & 0x7fff) * iVar101) >> 0xf);
                      uVar90 = -(*piVar48 + iVar98 >> 0x10) - 0xf;
                      iVar101 = ((int)(uVar67 * 2) >> 0x10) * iVar101 +
                                ((int)((uVar67 & 0x7fff) * iVar101) >> 0xf);
                      iVar108 = iVar101 >> (uVar90 & 0x1f);
                      iVar107 = iVar99 >> (uVar90 & 0x1f);
                      if ((int)uVar90 < 1) {
                        iVar108 = iVar101 << (ulong)(-uVar90 & 0x1f);
                        iVar107 = iVar99 << (ulong)(-uVar90 & 0x1f);
                      }
                      psVar42 = psVar42 + 2;
                      lVar64 = lVar64 + -1;
                      piVar39[-1] = iVar107;
                      *piVar39 = iVar108;
                      piVar39 = piVar39 + 2;
                      psVar52 = psVar52 + 2;
                      piVar48 = piVar89;
                    } while (lVar64 != 0);
                  }
                  else {
                    piVar39 = piVar3 + 1;
                    lVar64 = (long)(int)(uVar84 * uVar80 * uVar53 + uVar80 * local_114 +
                                        iVar93 * -(uVar84 * uVar80)) * 2;
                    piVar89 = piVar3 + lVar68;
                    if (((piVar39 < piVar70 + uVar54 && piVar48 < piVar89) ||
                        (piVar39 < (int *)(lVar55 + lVar68 * 2 + lVar64) &&
                         (int *)(lVar55 + lVar64 + 2U) < piVar89)) ||
                       (piVar39 < (int *)(lVar47 + (lVar68 + lVar36) * 2) &&
                        (int *)(lVar47 + (lVar36 + 1) * 2) < piVar89)) goto LAB_0011661c;
                    piVar39 = piVar3 + 1;
                    psVar42 = (short *)(lVar55 + (long)iVar97 * 2 + 2);
                    psVar52 = (short *)(lVar47 + local_90 * 2);
                    lVar64 = lVar63;
                    piVar89 = piVar48;
                    do {
                      sVar109 = *psVar42;
                      psVar16 = psVar42 + 1;
                      psVar14 = psVar42 + 2;
                      psVar12 = psVar42 + 3;
                      psVar13 = psVar42 + 4;
                      psVar75 = psVar42 + 5;
                      psVar34 = psVar42 + 6;
                      psVar29 = psVar42 + 7;
                      psVar42 = psVar42 + 8;
                      sVar130 = *psVar52;
                      psVar15 = psVar52 + 1;
                      psVar20 = psVar52 + 2;
                      psVar19 = psVar52 + 3;
                      psVar17 = psVar52 + 4;
                      psVar18 = psVar52 + 5;
                      psVar21 = psVar52 + 6;
                      psVar74 = psVar52 + 7;
                      psVar52 = psVar52 + 8;
                      lVar64 = lVar64 + -4;
                      iVar133 = (int)*psVar15 * (int)*psVar16 + (int)sVar130 * (int)sVar109;
                      iVar135 = (int)*psVar19 * (int)*psVar12 + (int)*psVar20 * (int)*psVar14;
                      iVar136 = (int)*psVar18 * (int)*psVar75 + (int)*psVar17 * (int)*psVar13;
                      iVar137 = (int)*psVar74 * (int)*psVar29 + (int)*psVar21 * (int)*psVar34;
                      iVar139 = (int)*psVar15 * (int)sVar109 + (int)-*psVar16 * (int)sVar130;
                      iVar140 = (int)*psVar19 * (int)*psVar14 + (int)-*psVar12 * (int)*psVar20;
                      iVar141 = (int)*psVar18 * (int)*psVar13 + (int)-*psVar75 * (int)*psVar17;
                      iVar142 = (int)*psVar74 * (int)*psVar34 + (int)-*psVar29 * (int)*psVar21;
                      uVar127 = CONCAT15((char)((uint)iVar135 >> 8),
                                         CONCAT14((char)iVar135,(uint)((ushort)iVar133 & 0x7fff))) &
                                0x7fffffffffff;
                      uVar2 = (ushort)iVar136 & 0x7fff;
                      auVar128._0_12_ = ZEXT212(uVar2) << 0x40;
                      auVar128[0xc] = (char)iVar137;
                      auVar128[0xd] = (byte)((uint)iVar137 >> 8) & 0x7f;
                      iVar102 = (int)(short)((uint)((short)*piVar89 * iVar103) >> 0xf);
                      iVar106 = (int)(short)((uint)((short)piVar89[1] * iVar103) >> 0xf);
                      iVar124 = (int)(short)((uint)((short)piVar89[2] * iVar103) >> 0xf);
                      iVar125 = (int)(short)((uint)((short)piVar89[3] * iVar103) >> 0xf);
                      iVar99 = -0xf - (*piVar89 + iVar98 >> 0x10);
                      iVar101 = -0xf - (piVar89[1] + iVar98 >> 0x10);
                      iVar108 = -0xf - (piVar89[2] + iVar98 >> 0x10);
                      iVar107 = -0xf - (piVar89[3] + iVar98 >> 0x10);
                      auVar138._0_8_ = CONCAT44(-(uint)(0 < iVar101),-(uint)(0 < iVar99));
                      auVar138._8_4_ = -(uint)(0 < iVar108);
                      auVar138._12_4_ = -(uint)(0 < iVar107);
                      auVar118._0_4_ = -iVar99;
                      auVar118._4_4_ = -iVar101;
                      auVar118._8_4_ = -iVar108;
                      auVar118._12_4_ = -iVar107;
                      auVar126._0_4_ =
                           (iVar133 * 2 >> 0x10) * iVar102 + ((int)uVar127 * iVar102 >> 0xf);
                      auVar126._4_4_ =
                           (iVar135 * 2 >> 0x10) * iVar106 +
                           ((int)((uint)(ushort)(uVar127 >> 0x20) * iVar106) >> 0xf);
                      auVar126._8_4_ =
                           (iVar136 * 2 >> 0x10) * iVar124 + ((int)((uint)uVar2 * iVar124) >> 0xf);
                      auVar126._12_4_ =
                           (iVar137 * 2 >> 0x10) * iVar125 +
                           ((int)((uint)auVar128._12_2_ * iVar125) >> 0xf);
                      auVar134._8_8_ = auVar138._8_8_;
                      auVar134._0_8_ = auVar138._0_8_;
                      iVar99 = (short)((uint)(iVar139 * 2) >> 0x10) * iVar102 +
                               ((int)((uint)((ushort)iVar139 & 0x7fff) * iVar102) >> 0xf);
                      iVar101 = (short)((uint)(iVar140 * 2) >> 0x10) * iVar106 +
                                ((int)((uint)((ushort)iVar140 & 0x7fff) * iVar106) >> 0xf);
                      uVar131 = (undefined2)iVar101;
                      uVar132 = (undefined2)((uint)iVar101 >> 0x10);
                      iVar101 = (iVar141 * 2 >> 0x10) * iVar124 +
                                ((int)((uint)((ushort)iVar141 & 0x7fff) * iVar124) >> 0xf);
                      iVar108 = (iVar142 * 2 >> 0x10) * iVar125 +
                                ((int)((uint)((ushort)iVar142 & 0x7fff) * iVar125) >> 0xf);
                      auVar123 = NEON_sshl(auVar126,auVar118,4);
                      auVar126 = NEON_ushl(auVar126,auVar118,4);
                      auVar119._4_2_ = uVar131;
                      auVar119._0_4_ = iVar99;
                      auVar119._6_2_ = uVar132;
                      auVar119._8_4_ = iVar101;
                      auVar119._12_4_ = iVar108;
                      auVar129 = NEON_sshl(auVar119,auVar118,4);
                      auVar5._4_2_ = uVar131;
                      auVar5._0_4_ = iVar99;
                      auVar5._6_2_ = uVar132;
                      auVar5._8_4_ = iVar101;
                      auVar5._12_4_ = iVar108;
                      auVar119 = NEON_ushl(auVar5,auVar118,4);
                      auVar126 = auVar126 ^ (auVar126 ^ auVar123) & auVar134;
                      auVar119 = auVar119 ^ (auVar119 ^ auVar129) & auVar138;
                      *piVar39 = auVar126._0_4_;
                      piVar39[1] = auVar119._0_4_;
                      piVar39[2] = auVar126._4_4_;
                      piVar39[3] = auVar119._4_4_;
                      piVar39[4] = auVar126._8_4_;
                      piVar39[5] = auVar119._8_4_;
                      piVar39[6] = auVar126._12_4_;
                      piVar39[7] = auVar119._12_4_;
                      piVar39 = piVar39 + 8;
                      piVar89 = piVar89 + 4;
                    } while (lVar64 != 0);
                    piVar48 = piVar48 + ~(ulong)uVar59 + uVar54;
                    lVar87 = uVar54 * 2 + ~(ulong)(uVar80 - 1 & 6);
                    lVar64 = lVar63 + 1;
                    if (uVar59 != 0) goto LAB_00116628;
                  }
                  piVar48 = piVar70 + uVar54;
                  uVar45 = (ulong)((uVar80 - 3 & 0xfffffffe) + 3);
                }
                uVar90 = (int)psVar33[uVar45] * (int)psVar57[uVar45];
                iVar99 = (short)*piVar48 * iVar103 * 2 >> 0x10;
                uVar67 = -(*piVar48 + iVar98 >> 0x10) - 0xf;
                iVar98 = iVar99 * ((int)(uVar90 * 2) >> 0x10) +
                         ((int)(iVar99 * (uVar90 & 0x7fff)) >> 0xf);
                iVar99 = iVar98 >> (uVar67 & 0x1f);
                if ((int)uVar67 < 1) {
                  iVar99 = iVar98 << (ulong)(-uVar67 & 0x1f);
                }
                piVar3[uVar45] = iVar99;
                if (0 < (int)uVar80) {
                  lVar47 = *(long *)(param_1 + 0x20);
                  if (uVar80 < 8) {
LAB_00116778:
                    uVar45 = 0;
                  }
                  else {
                    iVar98 = iVar91 + uVar80 * uVar53 * uVar84 * (int)local_178 + uVar80 * local_114
                             + iVar93 * -(uVar80 * uVar84);
                    uVar45 = 0;
                    if ((iVar98 <= iVar98 + (int)(uVar65 - 1)) && (uVar65 - 1 >> 0x20 == 0)) {
                      lVar55 = (long)(int)(uVar80 * uVar84 * (uVar53 - 1) +
                                           uVar80 * uVar53 * uVar84 * (int)local_178 +
                                           uVar80 * local_114 + iVar93 * -(uVar80 * uVar84)) * 4;
                      if ((piVar3 < (int *)(lVar47 + uVar65 * 4 + lVar55)) &&
                         ((int *)(lVar47 + lVar55) < piVar3 + uVar65)) goto LAB_00116778;
                      piVar70 = piVar3 + 4;
                      uVar45 = uVar88;
                      iVar98 = iVar96;
                      do {
                        pauVar1 = (undefined1 (*) [16])(lVar47 + (long)iVar98 * 4);
                        piVar48 = piVar70 + -2;
                        uVar94 = *(undefined8 *)(piVar70 + -4);
                        uVar104 = *(undefined8 *)(piVar70 + 2);
                        uVar100 = *(undefined8 *)piVar70;
                        auVar119 = *pauVar1;
                        auVar5 = pauVar1[1];
                        piVar70 = piVar70 + 8;
                        uVar45 = uVar45 - 8;
                        iVar98 = iVar98 + 8;
                        *(ulong *)(*pauVar1 + 8) =
                             CONCAT44(auVar119._12_4_ + (int)((ulong)*(undefined8 *)piVar48 >> 0x20)
                                      ,auVar119._8_4_ + (int)*(undefined8 *)piVar48);
                        *(ulong *)*pauVar1 =
                             CONCAT44(auVar119._4_4_ + (int)((ulong)uVar94 >> 0x20),
                                      auVar119._0_4_ + (int)uVar94);
                        *(ulong *)(pauVar1[1] + 8) =
                             CONCAT44(auVar5._12_4_ + (int)((ulong)uVar104 >> 0x20),
                                      auVar5._8_4_ + (int)uVar104);
                        *(ulong *)pauVar1[1] =
                             CONCAT44(auVar5._4_4_ + (int)((ulong)uVar100 >> 0x20),
                                      auVar5._0_4_ + (int)uVar100);
                      } while (uVar45 != 0);
                      uVar45 = uVar88;
                      if (uVar88 == uVar65) goto LAB_001167a8;
                    }
                  }
                  uVar90 = iVar96 + (int)uVar45;
                  lVar55 = uVar65 - uVar45;
                  piVar70 = piVar3 + uVar45;
                  do {
                    uVar45 = -(ulong)(uVar90 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar90 << 2;
                    lVar55 = lVar55 + -1;
                    uVar90 = uVar90 + 1;
                    *(int *)(lVar47 + uVar45) = *(int *)(lVar47 + uVar45) + *piVar70;
                    piVar70 = piVar70 + 1;
                  } while (lVar55 != 0);
                }
LAB_001167a8:
                iVar93 = iVar93 + 1;
                iVar96 = iVar96 - uVar80 * uVar84;
                iVar97 = iVar97 - uVar84 * uVar80;
                bVar6 = 1 < lVar82;
                lVar82 = lVar82 + -1;
              } while (bVar6);
            }
            local_11c = local_11c + uVar80;
            local_114 = local_114 + 1;
            local_118 = local_118 + uVar80;
          } while (local_114 != uVar84);
        }
        local_90 = local_90 + lVar60;
        local_178 = local_178 + 1;
        local_17c = local_17c + uVar80 * uVar53 * uVar84;
      } while (local_178 != uVar61);
      goto LAB_00116824;
    }
  }
  else {
    param_1[5] = param_1[5] - 1;
LAB_00116824:
    if (0 < (int)uVar86) {
      local_b8 = 0;
      uVar59 = 0;
      iVar91 = uVar53 - 1;
      uVar88 = uVar65 - 1;
      uVar90 = uVar53 * uVar84 * uVar80;
      uVar54 = uVar65 & 0xfffffff8;
      auVar123._8_4_ = 0x100000;
      auVar123._0_8_ = 0x10000000100000;
      auVar123._12_4_ = 0x100000;
      do {
        if (0 < (int)uVar84) {
          uVar67 = 0;
          local_a0 = local_b8;
          do {
            if (0 < (int)uVar53) {
              uVar79 = 0;
              uVar45 = local_a0;
              do {
                if (uVar79 == 0) {
LAB_001169e4:
                  iVar93 = (int)uVar45;
                  if ((int)uVar80 < 1) {
                    lVar63 = *(long *)(param_1 + 0x2e);
                  }
                  else {
                    lVar68 = *(long *)(param_1 + 0x20);
                    lVar63 = *(long *)(param_1 + 0x2e);
                    if (uVar80 < 8) {
                      uVar27 = 0;
                    }
                    else {
                      iVar96 = uVar53 * uVar84 * uVar80 * uVar59 + uVar80 * uVar67 +
                               uVar84 * uVar80 * uVar79;
                      uVar27 = 0;
                      if ((iVar96 <= iVar96 + (int)uVar88) && (uVar88 >> 0x20 == 0)) {
                        puVar81 = (undefined8 *)(lVar63 + 8);
                        uVar56 = uVar45 & 0xffffffff;
                        uVar27 = uVar54;
                        do {
                          puVar37 = (undefined8 *)(lVar68 + (long)(int)uVar56 * 4);
                          uVar100 = puVar37[3];
                          uVar94 = puVar37[2];
                          uVar27 = uVar27 - 8;
                          uVar56 = (ulong)((int)uVar56 + 8);
                          puVar81[-1] = CONCAT26((short)((int)((ulong)puVar37[1] >> 0x20) +
                                                         auVar123._12_4_ >> 0x15),
                                                 CONCAT24((short)((int)puVar37[1] + auVar123._8_4_
                                                                 >> 0x15),
                                                          CONCAT22((short)((int)((ulong)*puVar37 >>
                                                                                0x20) +
                                                                           auVar123._4_4_ >> 0x15),
                                                                   (short)((int)*puVar37 +
                                                                           auVar123._0_4_ >> 0x15)))
                                                );
                          *puVar81 = CONCAT26((short)((int)((ulong)uVar100 >> 0x20) +
                                                      auVar123._12_4_ >> 0x15),
                                              CONCAT24((short)((int)uVar100 + auVar123._8_4_ >> 0x15
                                                              ),CONCAT22((short)((int)((ulong)uVar94
                                                                                      >> 0x20) +
                                                                                 auVar123._4_4_ >>
                                                                                0x15),
                                                                         (short)((int)uVar94 +
                                                                                 auVar123._0_4_ >>
                                                                                0x15))));
                          puVar81 = puVar81 + 2;
                        } while (uVar27 != 0);
                        uVar27 = uVar54;
                        if (uVar54 == uVar65) goto LAB_00116a28;
                      }
                    }
                    do {
                      *(short *)(lVar63 + uVar27 * 2) =
                           (short)(*(int *)(lVar68 + (long)(iVar93 + (int)uVar27) * 4) + 0x100000 >>
                                  0x15);
                      uVar27 = uVar27 + 1;
                    } while (uVar65 != uVar27);
                  }
LAB_00116a28:
                  spx_ifft(*(undefined8 *)(param_1 + 0x40),lVar63,*(undefined8 *)(param_1 + 0x2c));
                  uVar50 = *param_1;
                  if (0 < (int)uVar50) {
                    memset(*(void **)(param_1 + 0x2c),0,(ulong)uVar50 << 1);
                  }
                  lVar63 = *(long *)(param_1 + 0x2c);
                  if ((int)uVar50 < (int)uVar80) {
                    lVar68 = (long)(int)uVar50;
                    uVar27 = lVar60 - lVar68;
                    if (0xf < uVar27) {
                      uVar69 = uVar27 & 0xfffffffffffffff0;
                      lVar36 = lVar68 * 2;
                      lVar68 = uVar69 + lVar68;
                      puVar81 = (undefined8 *)(lVar63 + lVar36 + 0x10);
                      uVar56 = uVar69;
                      do {
                        uVar100 = puVar81[-1];
                        uVar94 = puVar81[-2];
                        uVar105 = puVar81[1];
                        uVar104 = *puVar81;
                        uVar56 = uVar56 - 0x10;
                        puVar81[-1] = CONCAT26((short)((ulong)uVar100 >> 0x30) << 3,
                                               CONCAT24((short)((ulong)uVar100 >> 0x20) << 3,
                                                        CONCAT22((short)((ulong)uVar100 >> 0x10) <<
                                                                 3,(short)uVar100 << 3)));
                        puVar81[-2] = CONCAT26((short)((ulong)uVar94 >> 0x30) << 3,
                                               CONCAT24((short)((ulong)uVar94 >> 0x20) << 3,
                                                        CONCAT22((short)((ulong)uVar94 >> 0x10) << 3
                                                                 ,(short)uVar94 << 3)));
                        puVar81[1] = CONCAT26((short)((ulong)uVar105 >> 0x30) << 3,
                                              CONCAT24((short)((ulong)uVar105 >> 0x20) << 3,
                                                       CONCAT22((short)((ulong)uVar105 >> 0x10) << 3
                                                                ,(short)uVar105 << 3)));
                        *puVar81 = CONCAT26((short)((ulong)uVar104 >> 0x30) << 3,
                                            CONCAT24((short)((ulong)uVar104 >> 0x20) << 3,
                                                     CONCAT22((short)((ulong)uVar104 >> 0x10) << 3,
                                                              (short)uVar104 << 3)));
                        puVar81 = puVar81 + 4;
                      } while (uVar56 != 0);
                      if (uVar27 == uVar69) goto LAB_00116ac8;
                    }
                    lVar36 = lVar60 - lVar68;
                    psVar57 = (short *)(lVar63 + lVar68 * 2);
                    do {
                      lVar36 = lVar36 + -1;
                      *psVar57 = *psVar57 << 3;
                      psVar57 = psVar57 + 1;
                    } while (lVar36 != 0);
                  }
LAB_00116ac8:
                  spx_fft(*(undefined8 *)(param_1 + 0x40),lVar63,*(undefined8 *)(param_1 + 0x2e));
                  auVar123._8_4_ = 0x100000;
                  auVar123._0_8_ = 0x10000000100000;
                  auVar123._12_4_ = 0x100000;
                  if (0 < (int)uVar80) {
                    lVar63 = *(long *)(param_1 + 0x2e);
                    lVar68 = *(long *)(param_1 + 0x20);
                    if (uVar80 < 8) {
                      uVar27 = 0;
                    }
                    else {
                      iVar96 = uVar90 * uVar59 + uVar80 * uVar67 + uVar84 * uVar80 * uVar79;
                      uVar27 = 0;
                      if ((iVar96 <= iVar96 + (int)uVar88) && (uVar88 >> 0x20 == 0)) {
                        uVar27 = 0;
                        puVar81 = (undefined8 *)(lVar63 + 8);
                        do {
                          uVar94 = puVar81[-1];
                          uVar100 = *puVar81;
                          puVar37 = (undefined8 *)(lVar68 + (long)(iVar93 + (int)uVar27) * 4);
                          uVar27 = uVar27 + 8;
                          puVar81 = puVar81 + 2;
                          puVar37[1] = CONCAT44((int)((ulong)puVar37[1] >> 0x20) +
                                                (uint)(ushort)((ulong)uVar94 >> 0x30) * -0x20000,
                                                (int)puVar37[1] +
                                                (uint)(ushort)((ulong)uVar94 >> 0x20) * -0x20000);
                          *puVar37 = CONCAT44((int)((ulong)*puVar37 >> 0x20) +
                                              (uint)(ushort)((ulong)uVar94 >> 0x10) * -0x20000,
                                              (int)*puVar37 + (int)uVar94 * -0x20000);
                          puVar37[3] = CONCAT44((int)((ulong)puVar37[3] >> 0x20) +
                                                (uint)(ushort)((ulong)uVar100 >> 0x30) * -0x20000,
                                                (int)puVar37[3] +
                                                (uint)(ushort)((ulong)uVar100 >> 0x20) * -0x20000);
                          puVar37[2] = CONCAT44((int)((ulong)puVar37[2] >> 0x20) +
                                                (uint)(ushort)((ulong)uVar100 >> 0x10) * -0x20000,
                                                (int)puVar37[2] + (int)uVar100 * -0x20000);
                        } while (uVar54 != uVar27);
                        uVar27 = uVar54;
                        if (uVar54 == uVar65) goto LAB_00116b1c;
                      }
                    }
                    do {
                      uVar50 = iVar93 + (int)uVar27;
                      uVar69 = -(ulong)(uVar50 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar50 << 2;
                      uVar56 = uVar27 + 1;
                      *(uint *)(lVar68 + uVar69) =
                           *(int *)(lVar68 + uVar69) +
                           (uint)*(ushort *)(lVar63 + uVar27 * 2) * -0x20000;
                      uVar27 = uVar56;
                    } while (uVar65 != uVar56);
                  }
                }
                else {
                  iVar93 = 0;
                  if (iVar91 != 0) {
                    iVar93 = (int)param_1[3] / iVar91;
                  }
                  if (param_1[3] - iVar93 * iVar91 == uVar79 - 1) goto LAB_001169e4;
                }
LAB_00116b1c:
                uVar79 = uVar79 + 1;
                uVar45 = uVar45 + uVar84 * uVar80;
              } while (uVar79 != uVar53);
            }
            uVar67 = uVar67 + 1;
            local_a0 = local_a0 + uVar65;
          } while (uVar67 != uVar84);
        }
        uVar59 = uVar59 + 1;
        local_b8 = local_b8 + uVar90;
      } while (uVar59 != uVar86);
    }
  }
  uVar65 = (ulong)*param_1;
  if (-1 < (int)*param_1) {
    lVar63 = *(long *)(param_1 + 0x32);
    lVar68 = *(long *)(param_1 + 0x34);
    lVar82 = *(long *)(param_1 + 0x30);
    lVar36 = 0;
    do {
      lVar46 = lVar36 * 4;
      *(undefined4 *)(lVar68 + lVar46) = 0;
      *(undefined4 *)(lVar63 + lVar46) = 0;
      *(undefined4 *)(lVar82 + lVar46) = 0;
      uVar65 = (ulong)(int)*param_1;
      bVar6 = lVar36 < (long)uVar65;
      lVar36 = lVar36 + 1;
    } while (bVar6);
  }
  if ((int)uVar86 < 1) {
    uVar59 = 0;
    uVar90 = 0;
  }
  else {
    lVar68 = 0;
    iVar91 = 0;
    uVar88 = 0;
    uVar67 = uVar84 * uVar53;
    uVar45 = (ulong)uVar67;
    uVar54 = uVar45 & 0xfffffffe;
    uVar90 = 0;
    uVar59 = 0;
    lVar63 = 8;
    do {
      lVar36 = (long)iVar91;
      psVar57 = *(short **)(param_1 + 0x12);
      lVar82 = *(long *)(param_1 + 0x20);
      lVar46 = uVar88 * lVar60;
      puVar35 = (undefined2 *)(*(long *)(param_1 + 0x1a) + lVar46 * 2);
      if ((int)uVar67 < 1) {
        uVar131 = 0;
      }
      else {
        if (uVar67 == 1) {
          iVar93 = 0;
          uVar65 = 0;
LAB_00116c98:
          psVar33 = psVar57 + lVar60 * uVar65;
          piVar70 = (int *)(lVar82 + (lVar60 * uVar65 + lVar36) * 4);
          lVar47 = uVar45 - uVar65;
          do {
            iVar96 = *piVar70;
            piVar70 = piVar70 + lVar60;
            lVar47 = lVar47 + -1;
            iVar93 = iVar93 + (iVar96 >> 0x10) * (int)*psVar33;
            psVar33 = psVar33 + lVar60;
          } while (lVar47 != 0);
        }
        else {
          iVar96 = 0;
          iVar93 = 0;
          piVar70 = (int *)(lVar82 + lVar36 * 4);
          uVar65 = uVar54;
          psVar33 = psVar57;
          do {
            iVar97 = *piVar70;
            piVar48 = piVar70 + lVar60;
            piVar70 = piVar70 + lVar60 * 2;
            uVar65 = uVar65 - 2;
            iVar96 = iVar96 + (iVar97 >> 0x10) * (int)*psVar33;
            iVar93 = iVar93 + (*piVar48 >> 0x10) * (int)psVar33[lVar60];
            psVar33 = psVar33 + lVar60 * 2;
          } while (uVar65 != 0);
          iVar93 = iVar93 + iVar96;
          uVar65 = uVar54;
          if (uVar54 != uVar45) goto LAB_00116c98;
        }
        uVar131 = (undefined2)(iVar93 + 0x400U >> 0xb);
      }
      *puVar35 = uVar131;
      if (2 < (int)uVar80) {
        piVar70 = (int *)(lVar82 + lVar36 * 4);
        lVar47 = 1;
        psVar33 = psVar57;
        do {
          piVar70 = piVar70 + 2;
          psVar33 = psVar33 + 2;
          if ((int)uVar67 < 1) {
            iVar96 = 0;
            iVar93 = 0;
          }
          else {
            iVar93 = 0;
            iVar96 = 0;
            piVar48 = piVar70;
            psVar42 = psVar33;
            uVar65 = uVar45;
            do {
              psVar52 = psVar42 + -1;
              sVar109 = *psVar42;
              uVar65 = uVar65 - 1;
              psVar42 = psVar42 + lVar60;
              iVar96 = (iVar96 + (piVar48[-1] >> 0x10) * (int)*psVar52) -
                       (*piVar48 >> 0x10) * (int)sVar109;
              iVar93 = iVar93 + (piVar48[-1] >> 0x10) * (int)sVar109 +
                       (*piVar48 >> 0x10) * (int)*psVar52;
              piVar48 = piVar48 + lVar60;
            } while (uVar65 != 0);
          }
          puVar38 = puVar35 + lVar47;
          lVar47 = lVar47 + 2;
          *puVar38 = (short)(iVar96 + 0x400U >> 0xb);
          puVar38[1] = (short)(iVar93 + 0x400U >> 0xb);
        } while (lVar47 < lVar60 + -1);
      }
      if ((int)uVar67 < 1) {
        uVar131 = 0;
      }
      else {
        if (uVar67 == 1) {
          iVar93 = 0;
          uVar65 = 0;
LAB_00116e18:
          lVar47 = lVar60 * (uVar65 + 1);
          psVar57 = psVar57 + lVar47 + -1;
          piVar70 = (int *)(lVar82 + (lVar47 + lVar36) * 4 + -4);
          lVar36 = uVar45 - uVar65;
          do {
            iVar96 = *piVar70;
            piVar70 = piVar70 + lVar60;
            lVar36 = lVar36 + -1;
            iVar93 = iVar93 + (iVar96 >> 0x10) * (int)*psVar57;
            psVar57 = psVar57 + lVar60;
          } while (lVar36 != 0);
        }
        else {
          piVar70 = (int *)(lVar82 + lVar36 * 4 + -4);
          iVar96 = 0;
          iVar93 = 0;
          psVar33 = psVar57 + -1;
          uVar65 = uVar54;
          do {
            piVar48 = piVar70 + lVar60;
            piVar70 = piVar70 + lVar60 * 2;
            psVar42 = psVar33 + lVar60;
            psVar33 = psVar33 + lVar60 * 2;
            iVar96 = iVar96 + (*piVar48 >> 0x10) * (int)*psVar42;
            uVar65 = uVar65 - 2;
            iVar93 = iVar93 + (*piVar70 >> 0x10) * (int)*psVar33;
          } while (uVar65 != 0);
          iVar93 = iVar93 + iVar96;
          uVar65 = uVar54;
          if (uVar54 != uVar45) goto LAB_00116e18;
        }
        uVar131 = (undefined2)(iVar93 + 0x400U >> 0xb);
      }
      puVar35[lVar60 + -1] = uVar131;
      spx_ifft(*(undefined8 *)(param_1 + 0x40),puVar35,*(long *)(param_1 + 0x16) + lVar46 * 2);
      uVar79 = *param_1;
      uVar65 = (ulong)uVar79;
      lVar36 = *(long *)(param_1 + 0xe);
      uVar27 = (ulong)(int)uVar79;
      iVar93 = (int)uVar88;
      if (0 < (int)uVar79) {
        lVar82 = *(long *)(param_1 + 0x16);
        if (uVar79 < 0x10) {
          uVar56 = 0;
        }
        else {
          iVar96 = uVar79 + uVar80 * iVar93;
          uVar56 = 0;
          if ((iVar96 <= iVar96 + (int)(uVar27 - 1)) && (uVar27 - 1 >> 0x20 == 0)) {
            lVar47 = ((long)(int)(uVar80 * iVar93) + uVar27 * 2) * 2;
            uVar69 = lVar36 + lVar46 * 2;
            lVar55 = (uVar27 + (long)(int)(uVar80 * iVar93)) * 2;
            uVar40 = lVar36 + (lVar46 + uVar27) * 2;
            uVar56 = 0;
            if (((ulong)(lVar36 + lVar47) <= uVar69 || uVar40 <= (ulong)(lVar36 + lVar55)) &&
               ((ulong)(lVar82 + lVar47) <= uVar69 || uVar40 <= (ulong)(lVar82 + lVar55))) {
              uVar56 = uVar27 & 0xfffffffffffffff0;
              puVar81 = (undefined8 *)(lVar36 + lVar63 * 2);
              uVar50 = uVar79 + (int)lVar68;
              uVar69 = uVar56;
              do {
                uVar40 = -(ulong)(uVar50 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar50 << 1;
                puVar37 = (undefined8 *)(lVar36 + uVar40);
                puVar28 = (undefined8 *)(lVar82 + uVar40);
                uVar100 = puVar37[1];
                uVar94 = *puVar37;
                uVar105 = puVar37[3];
                uVar104 = puVar37[2];
                uVar111 = puVar28[1];
                uVar110 = *puVar28;
                uVar116 = puVar28[3];
                uVar112 = puVar28[2];
                uVar69 = uVar69 - 0x10;
                uVar50 = uVar50 + 0x10;
                puVar81[-1] = CONCAT26((short)((ulong)uVar100 >> 0x30) -
                                       (short)((ulong)uVar111 >> 0x30),
                                       CONCAT24((short)((ulong)uVar100 >> 0x20) -
                                                (short)((ulong)uVar111 >> 0x20),
                                                CONCAT22((short)((ulong)uVar100 >> 0x10) -
                                                         (short)((ulong)uVar111 >> 0x10),
                                                         (short)uVar100 - (short)uVar111)));
                puVar81[-2] = CONCAT26((short)((ulong)uVar94 >> 0x30) -
                                       (short)((ulong)uVar110 >> 0x30),
                                       CONCAT24((short)((ulong)uVar94 >> 0x20) -
                                                (short)((ulong)uVar110 >> 0x20),
                                                CONCAT22((short)((ulong)uVar94 >> 0x10) -
                                                         (short)((ulong)uVar110 >> 0x10),
                                                         (short)uVar94 - (short)uVar110)));
                puVar81[1] = CONCAT26((short)((ulong)uVar105 >> 0x30) -
                                      (short)((ulong)uVar116 >> 0x30),
                                      CONCAT24((short)((ulong)uVar105 >> 0x20) -
                                               (short)((ulong)uVar116 >> 0x20),
                                               CONCAT22((short)((ulong)uVar105 >> 0x10) -
                                                        (short)((ulong)uVar116 >> 0x10),
                                                        (short)uVar105 - (short)uVar116)));
                *puVar81 = CONCAT26((short)((ulong)uVar104 >> 0x30) -
                                    (short)((ulong)uVar112 >> 0x30),
                                    CONCAT24((short)((ulong)uVar104 >> 0x20) -
                                             (short)((ulong)uVar112 >> 0x20),
                                             CONCAT22((short)((ulong)uVar104 >> 0x10) -
                                                      (short)((ulong)uVar112 >> 0x10),
                                                      (short)uVar104 - (short)uVar112)));
                puVar81 = puVar81 + 4;
              } while (uVar69 != 0);
              if (uVar56 == uVar27) goto LAB_00116edc;
            }
          }
        }
        do {
          uVar50 = uVar79 + (int)lVar68 + (int)uVar56;
          uVar69 = -(ulong)(uVar50 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar50 << 1;
          *(short *)(lVar36 + lVar68 * 2 + uVar56 * 2) =
               *(short *)(lVar36 + uVar69) - *(short *)(lVar82 + uVar69);
          uVar56 = uVar56 + 1;
        } while ((long)uVar56 < (long)uVar27);
      }
LAB_00116edc:
      iVar96 = (int)uVar79 >> 1;
      psVar57 = (short *)(lVar36 + lVar46 * 2);
      if (iVar96 == 0) {
        iVar97 = 0;
      }
      else {
        uVar56 = (ulong)(iVar96 - 1) + 1;
        if (uVar56 < 8) {
          iVar97 = 0;
          psVar42 = psVar57;
          iVar98 = iVar96;
        }
        else {
          uVar50 = uVar79 >> 1 & 7;
          lVar82 = uVar56 - uVar50;
          psVar33 = (short *)(lVar36 + lVar63 * 2);
          iVar97 = 0;
          iVar99 = 0;
          iVar101 = 0;
          iVar103 = 0;
          psVar42 = psVar57 + lVar82 * 2;
          iVar98 = iVar96 - (int)lVar82;
          iVar108 = 0;
          iVar107 = 0;
          iVar102 = 0;
          iVar106 = 0;
          do {
            psVar21 = psVar33 + -8;
            sVar109 = *psVar33;
            psVar12 = psVar33 + 1;
            psVar14 = psVar33 + 2;
            psVar34 = psVar33 + 3;
            psVar29 = psVar33 + 4;
            psVar75 = psVar33 + 5;
            psVar13 = psVar33 + 6;
            psVar52 = psVar33 + 7;
            psVar18 = psVar33 + -7;
            psVar16 = psVar33 + -6;
            psVar15 = psVar33 + -5;
            psVar17 = psVar33 + -4;
            psVar19 = psVar33 + -3;
            psVar20 = psVar33 + -2;
            psVar74 = psVar33 + -1;
            lVar82 = lVar82 + -8;
            psVar33 = psVar33 + 0x10;
            iVar108 = iVar108 + ((uint)((int)*psVar12 * (int)*psVar12 + (int)sVar109 * (int)sVar109)
                                >> 6);
            iVar107 = iVar107 + ((uint)((int)*psVar34 * (int)*psVar34 +
                                       (int)*psVar14 * (int)*psVar14) >> 6);
            iVar102 = iVar102 + ((uint)((int)*psVar75 * (int)*psVar75 +
                                       (int)*psVar29 * (int)*psVar29) >> 6);
            iVar106 = iVar106 + ((uint)((int)*psVar52 * (int)*psVar52 +
                                       (int)*psVar13 * (int)*psVar13) >> 6);
            iVar97 = iVar97 + ((uint)((int)*psVar18 * (int)*psVar18 + (int)*psVar21 * (int)*psVar21)
                              >> 6);
            iVar99 = iVar99 + ((uint)((int)*psVar15 * (int)*psVar15 + (int)*psVar16 * (int)*psVar16)
                              >> 6);
            iVar101 = iVar101 + ((uint)((int)*psVar19 * (int)*psVar19 +
                                       (int)*psVar17 * (int)*psVar17) >> 6);
            iVar103 = iVar103 + ((uint)((int)*psVar74 * (int)*psVar74 +
                                       (int)*psVar20 * (int)*psVar20) >> 6);
          } while (lVar82 != 0);
          iVar97 = iVar108 + iVar97 + iVar107 + iVar99 + iVar102 + iVar101 + iVar106 + iVar103;
          if (uVar50 == 0) goto LAB_00117068;
        }
        do {
          sVar109 = *psVar42;
          psVar33 = psVar42 + 1;
          iVar98 = iVar98 + -1;
          psVar42 = psVar42 + 2;
          iVar97 = iVar97 + ((uint)((int)sVar109 * (int)sVar109 + (int)*psVar33 * (int)*psVar33) >>
                            6);
        } while (iVar98 != 0);
      }
LAB_00117068:
      if (0 < (int)uVar79) {
        lVar82 = *(long *)(param_1 + 0x14);
        lVar47 = *(long *)(param_1 + 0x16);
        if (uVar79 < 0x10) {
          uVar69 = 0;
        }
        else {
          uVar56 = lVar36 + (lVar46 + uVar65) * 2;
          uVar69 = 0;
          if (((short *)(lVar82 + ((long)(int)(uVar79 * iVar93) + uVar65) * 2) <= psVar57 ||
               uVar56 <= (ulong)(lVar82 + (long)(int)(uVar79 * iVar93) * 2)) &&
             ((short *)(lVar47 + (lVar46 + uVar27 + uVar65) * 2) <= psVar57 ||
              uVar56 <= lVar47 + (lVar46 + uVar27) * 2)) {
            uVar69 = uVar65 & 0xfffffff0;
            puVar81 = (undefined8 *)(lVar82 + (long)(int)(uVar79 * iVar93) * 2 + 0x10);
            puVar37 = (undefined8 *)(lVar47 + (lVar68 + uVar27) * 2 + 0x10);
            puVar28 = (undefined8 *)(lVar36 + lVar63 * 2);
            uVar56 = uVar69;
            do {
              uVar100 = puVar81[-1];
              uVar94 = puVar81[-2];
              uVar105 = puVar81[1];
              uVar104 = *puVar81;
              uVar111 = puVar37[-1];
              uVar110 = puVar37[-2];
              uVar116 = puVar37[1];
              uVar112 = *puVar37;
              uVar56 = uVar56 - 0x10;
              puVar81 = puVar81 + 4;
              puVar37 = puVar37 + 4;
              puVar28[-1] = CONCAT26((short)((ulong)uVar100 >> 0x30) -
                                     (short)((ulong)uVar111 >> 0x30),
                                     CONCAT24((short)((ulong)uVar100 >> 0x20) -
                                              (short)((ulong)uVar111 >> 0x20),
                                              CONCAT22((short)((ulong)uVar100 >> 0x10) -
                                                       (short)((ulong)uVar111 >> 0x10),
                                                       (short)uVar100 - (short)uVar111)));
              puVar28[-2] = CONCAT26((short)((ulong)uVar94 >> 0x30) -
                                     (short)((ulong)uVar110 >> 0x30),
                                     CONCAT24((short)((ulong)uVar94 >> 0x20) -
                                              (short)((ulong)uVar110 >> 0x20),
                                              CONCAT22((short)((ulong)uVar94 >> 0x10) -
                                                       (short)((ulong)uVar110 >> 0x10),
                                                       (short)uVar94 - (short)uVar110)));
              puVar28[1] = CONCAT26((short)((ulong)uVar105 >> 0x30) -
                                    (short)((ulong)uVar116 >> 0x30),
                                    CONCAT24((short)((ulong)uVar105 >> 0x20) -
                                             (short)((ulong)uVar116 >> 0x20),
                                             CONCAT22((short)((ulong)uVar105 >> 0x10) -
                                                      (short)((ulong)uVar116 >> 0x10),
                                                      (short)uVar105 - (short)uVar116)));
              *puVar28 = CONCAT26((short)((ulong)uVar104 >> 0x30) - (short)((ulong)uVar112 >> 0x30),
                                  CONCAT24((short)((ulong)uVar104 >> 0x20) -
                                           (short)((ulong)uVar112 >> 0x20),
                                           CONCAT22((short)((ulong)uVar104 >> 0x10) -
                                                    (short)((ulong)uVar112 >> 0x10),
                                                    (short)uVar104 - (short)uVar112)));
              puVar28 = puVar28 + 4;
            } while (uVar56 != 0);
            if (uVar69 == uVar65) goto LAB_001170bc;
          }
        }
        lVar46 = uVar65 - uVar69;
        psVar33 = (short *)(lVar36 + (uVar69 + lVar68) * 2);
        psVar42 = (short *)(lVar82 + (uVar69 + (long)(int)(uVar79 * iVar93)) * 2);
        psVar52 = (short *)(lVar47 + (uVar69 + lVar68 + uVar27) * 2);
        do {
          lVar46 = lVar46 + -1;
          *psVar33 = *psVar42 - *psVar52;
          psVar33 = psVar33 + 1;
          psVar42 = psVar42 + 1;
          psVar52 = psVar52 + 1;
        } while (lVar46 != 0);
      }
LAB_001170bc:
      uVar59 = uVar59 + iVar97 + 10;
      if (iVar96 == 0) {
        iVar93 = 0;
      }
      else {
        uVar27 = (ulong)(iVar96 - 1) + 1;
        if (uVar27 < 8) {
          iVar93 = 0;
        }
        else {
          uVar79 = uVar79 >> 1 & 7;
          lVar82 = uVar27 - uVar79;
          psVar33 = (short *)(lVar36 + lVar63 * 2);
          iVar93 = 0;
          iVar97 = 0;
          iVar98 = 0;
          iVar99 = 0;
          psVar57 = psVar57 + lVar82 * 2;
          iVar96 = iVar96 - (int)lVar82;
          iVar101 = 0;
          iVar103 = 0;
          iVar108 = 0;
          iVar107 = 0;
          do {
            psVar74 = psVar33 + -8;
            sVar109 = *psVar33;
            psVar34 = psVar33 + 1;
            psVar75 = psVar33 + 2;
            psVar13 = psVar33 + 3;
            psVar12 = psVar33 + 4;
            psVar29 = psVar33 + 5;
            psVar52 = psVar33 + 6;
            psVar42 = psVar33 + 7;
            psVar16 = psVar33 + -7;
            psVar14 = psVar33 + -6;
            psVar18 = psVar33 + -5;
            psVar15 = psVar33 + -4;
            psVar17 = psVar33 + -3;
            psVar19 = psVar33 + -2;
            psVar20 = psVar33 + -1;
            lVar82 = lVar82 + -8;
            psVar33 = psVar33 + 0x10;
            iVar101 = iVar101 + ((uint)((int)*psVar34 * (int)*psVar34 + (int)sVar109 * (int)sVar109)
                                >> 6);
            iVar103 = iVar103 + ((uint)((int)*psVar13 * (int)*psVar13 +
                                       (int)*psVar75 * (int)*psVar75) >> 6);
            iVar108 = iVar108 + ((uint)((int)*psVar29 * (int)*psVar29 +
                                       (int)*psVar12 * (int)*psVar12) >> 6);
            iVar107 = iVar107 + ((uint)((int)*psVar42 * (int)*psVar42 +
                                       (int)*psVar52 * (int)*psVar52) >> 6);
            iVar93 = iVar93 + ((uint)((int)*psVar16 * (int)*psVar16 + (int)*psVar74 * (int)*psVar74)
                              >> 6);
            iVar97 = iVar97 + ((uint)((int)*psVar18 * (int)*psVar18 + (int)*psVar14 * (int)*psVar14)
                              >> 6);
            iVar98 = iVar98 + ((uint)((int)*psVar17 * (int)*psVar17 + (int)*psVar15 * (int)*psVar15)
                              >> 6);
            iVar99 = iVar99 + ((uint)((int)*psVar20 * (int)*psVar20 + (int)*psVar19 * (int)*psVar19)
                              >> 6);
          } while (lVar82 != 0);
          iVar93 = iVar101 + iVar93 + iVar103 + iVar97 + iVar108 + iVar98 + iVar107 + iVar99;
          if (uVar79 == 0) goto LAB_0011721c;
        }
        do {
          sVar109 = *psVar57;
          psVar33 = psVar57 + 1;
          iVar96 = iVar96 + -1;
          psVar57 = psVar57 + 2;
          iVar93 = iVar93 + ((uint)((int)sVar109 * (int)sVar109 + (int)*psVar33 * (int)*psVar33) >>
                            6);
        } while (iVar96 != 0);
      }
LAB_0011721c:
      uVar90 = iVar93 + uVar90;
      uVar88 = uVar88 + 1;
      lVar63 = lVar63 + lVar60;
      iVar91 = iVar91 + uVar67 * uVar80;
      lVar68 = lVar68 + lVar60;
    } while (uVar88 != uVar61);
  }
  puVar58 = (ulong *)(param_1 + 0x24);
  uVar88 = *puVar58;
  uVar85 = local_170 - uVar90;
  iVar93 = (int)(uVar85 * 2) >> 0x10;
  uVar67 = (uint)((short)param_1[0x26] * 0x5c29) >> 0xf;
  uVar50 = param_1[0x26] >> 0x10;
  iVar91 = uVar67 * 0x10000;
  uVar92 = iVar93 * 0x3333 + ((uVar85 & 0x7fff) * 0x3333 >> 0xf) +
           ((uint)((int)(uVar88 & 0x7fff00007fff) * 0x4ccd) >> 0xf) +
           (((int)uVar88 << 1) >> 0x10) * 0x4ccd;
  uVar95 = iVar93 * 0x1333 + ((uVar85 & 0x7fff) * 0x1333 >> 0xf) +
           ((uint)((int)((uVar88 & 0x7fff00007fff) >> 0x20) * 0x6ccd) >> 0xf) +
           (((int)(uVar88 >> 0x20) << 1) >> 0x10) * 0x6ccd;
  uVar79 = uVar50 - 1;
  *puVar58 = CONCAT44(uVar95,uVar92);
  if (iVar91 < 1) {
    if (-0x40000000 < iVar91) {
      uVar67 = iVar91 >> 0xf;
      goto LAB_001172f8;
    }
  }
  else if (iVar91 < 0x40000000) {
    uVar67 = (uVar67 & 0xffff) << 1;
LAB_001172f8:
    uVar79 = uVar50 - 2;
  }
  iVar91 = (int)(local_170 << 1) >> 0x10;
  uVar26 = 0;
  uVar50 = iVar91 * 0x3333 + ((local_170 & 0x7fff) * 0x3333 >> 0xf);
  iVar93 = (int)(uVar59 << 1) >> 0x10;
  if (uVar50 == 0) {
    uVar50 = 0;
    uVar31 = 0;
    if ((uVar67 & 0xffff) == 0) goto LAB_0011748c;
LAB_00117458:
    if (uVar26 != 0) {
      uVar50 = (uint)(short)uVar79;
      uVar79 = (int)uVar31 >> 0x10;
      iVar96 = uVar67 << 0x10;
      iVar97 = uVar79 - uVar50;
      iVar98 = uVar26 << 0x10;
      if ((int)uVar79 < (int)uVar50) {
        iVar97 = uVar50 - uVar79;
        uVar79 = uVar50;
        iVar98 = iVar96;
        iVar96 = uVar26 << 0x10;
      }
      uVar67 = 0xf;
      if (iVar97 < 0xf) {
        uVar67 = iVar97 + 1;
      }
      iVar96 = ((iVar96 >> 0x10) >> (uVar67 & 0x1f)) + (iVar98 >> 0x11);
      iVar97 = iVar96 * 0x10000;
      if (iVar97 < 1) {
        uVar67 = iVar96 << (-0x40000000 < iVar97);
        if (iVar97 < -0x3fffffff) {
          uVar79 = uVar79 + 1;
        }
      }
      else {
        uVar67 = iVar96 << (iVar97 < 0x40000000);
        if (0x3fffffff < iVar97) {
          uVar79 = uVar79 + 1;
        }
      }
    }
  }
  else {
    uVar77 = iVar93 * 0x3333 + ((uVar59 & 0x7fff) * 0x3333 >> 0xf);
    uVar31 = uVar26;
    if (uVar77 != 0) {
      uVar26 = -uVar50;
      if (-1 < (int)uVar50) {
        uVar26 = uVar50;
      }
      uVar76 = uVar26 >> 0x10;
      uVar31 = uVar76;
      if (uVar76 == 0) {
        uVar31 = uVar26;
      }
      uVar44 = (uint)(uVar76 != 0);
      uVar26 = uVar44 << 4 | 8;
      uVar76 = uVar31 >> 8;
      if (uVar31 < 0x100) {
        uVar26 = uVar44 << 4;
        uVar76 = uVar31;
      }
      uVar31 = uVar26 | 4;
      uVar44 = uVar76 >> 4;
      if (uVar76 < 0x10) {
        uVar31 = uVar26;
        uVar44 = uVar76;
      }
      uVar26 = uVar31 | 2;
      uVar76 = uVar44 >> 2;
      if (uVar44 < 4) {
        uVar26 = uVar31;
        uVar76 = uVar44;
      }
      if (1 < uVar76) {
        uVar26 = uVar26 + 1;
      }
      uVar31 = (uint)(short)uVar26;
      sVar109 = (short)((int)uVar50 >> (uVar31 - 0xe & 0x1f));
      if (uVar31 - 0xe == 0 || uVar31 < 0xe) {
        sVar109 = (short)(uVar50 << (ulong)(0xe - uVar31 & 0x1f));
      }
      uVar50 = -uVar77;
      if (-1 < (int)uVar77) {
        uVar50 = uVar77;
      }
      uVar76 = uVar50 >> 0x10;
      uVar31 = uVar76;
      if (uVar76 == 0) {
        uVar31 = uVar50;
      }
      uVar44 = (uint)(uVar76 != 0);
      uVar50 = uVar44 << 4 | 8;
      uVar76 = uVar31 >> 8;
      if (uVar31 < 0x100) {
        uVar50 = uVar44 << 4;
        uVar76 = uVar31;
      }
      uVar31 = uVar50 | 4;
      uVar44 = uVar76 >> 4;
      if (uVar76 < 0x10) {
        uVar31 = uVar50;
        uVar44 = uVar76;
      }
      uVar50 = uVar31 | 2;
      uVar76 = uVar44 >> 2;
      if (uVar44 < 4) {
        uVar50 = uVar31;
        uVar76 = uVar44;
      }
      if (1 < uVar76) {
        uVar50 = uVar50 + 1;
      }
      uVar31 = (uint)(short)uVar50;
      sVar130 = (short)((int)uVar77 >> (uVar31 - 0xe & 0x1f));
      if (uVar31 - 0xe == 0 || uVar31 < 0xe) {
        sVar130 = (short)(uVar77 << (ulong)(0xe - uVar31 & 0x1f));
      }
      uVar31 = (uVar26 + uVar50) * 0x10000 - 0xd0000;
      uVar26 = (uint)((int)sVar130 * (int)sVar109) >> 0xf & 0xffff;
    }
    uVar50 = uVar31;
    if ((uVar67 & 0xffff) != 0) goto LAB_00117458;
LAB_0011748c:
    uVar79 = uVar50 >> 0x10;
    uVar67 = uVar26;
  }
  sVar109 = (short)uVar79;
  uVar26 = param_1[0x27];
  uVar50 = (uint)((short)uVar26 * 0x5c7b) >> 0xf;
  iVar96 = uVar50 * 0x10000;
  param_1[0x26] = uVar67 & 0xffff | uVar79 << 0x10;
  if (iVar96 < 1) {
    uVar79 = uVar26 >> 0x10;
    if (-0x40000000 < iVar96) {
      uVar50 = iVar96 >> 0xf;
      goto LAB_00117554;
    }
  }
  else {
    uVar79 = uVar26 >> 0x10;
    if (iVar96 < 0x40000000) {
      uVar50 = (uVar50 & 0xffff) << 1;
LAB_00117554:
      uVar79 = (uVar26 >> 0x10) - 1;
    }
  }
  uVar26 = iVar91 * 0x1333 + ((local_170 & 0x7fff) * 0x1333 >> 0xf);
  uVar31 = 0;
  if (uVar26 == 0) {
    uVar26 = 0;
    uVar77 = 0;
    if ((uVar50 & 0xffff) == 0) goto LAB_001176d8;
LAB_001176a4:
    if (uVar31 != 0) {
      uVar26 = (uint)(short)uVar79;
      uVar79 = (int)uVar77 >> 0x10;
      iVar91 = uVar50 << 0x10;
      iVar93 = uVar79 - uVar26;
      iVar96 = uVar31 << 0x10;
      if ((int)uVar79 < (int)uVar26) {
        iVar93 = uVar26 - uVar79;
        uVar79 = uVar26;
        iVar96 = iVar91;
        iVar91 = uVar31 << 0x10;
      }
      uVar50 = 0xf;
      if (iVar93 < 0xf) {
        uVar50 = iVar93 + 1;
      }
      iVar91 = ((iVar91 >> 0x10) >> (uVar50 & 0x1f)) + (iVar96 >> 0x11);
      iVar93 = iVar91 * 0x10000;
      if (iVar93 < 1) {
        uVar50 = iVar91 << (-0x40000000 < iVar93);
        if (iVar93 < -0x3fffffff) {
          uVar79 = uVar79 + 1;
        }
      }
      else {
        uVar50 = iVar91 << (iVar93 < 0x40000000);
        if (0x3fffffff < iVar93) {
          uVar79 = uVar79 + 1;
        }
      }
    }
  }
  else {
    uVar76 = iVar93 * 0x1333 + ((uVar59 & 0x7fff) * 0x1333 >> 0xf);
    uVar77 = uVar31;
    if (uVar76 != 0) {
      uVar31 = -uVar26;
      if (-1 < (int)uVar26) {
        uVar31 = uVar26;
      }
      uVar44 = uVar31 >> 0x10;
      uVar77 = uVar44;
      if (uVar44 == 0) {
        uVar77 = uVar31;
      }
      uVar32 = (uint)(uVar44 != 0);
      uVar31 = uVar32 << 4 | 8;
      uVar44 = uVar77 >> 8;
      if (uVar77 < 0x100) {
        uVar31 = uVar32 << 4;
        uVar44 = uVar77;
      }
      uVar77 = uVar31 | 4;
      uVar32 = uVar44 >> 4;
      if (uVar44 < 0x10) {
        uVar77 = uVar31;
        uVar32 = uVar44;
      }
      uVar31 = uVar77 | 2;
      uVar44 = uVar32 >> 2;
      if (uVar32 < 4) {
        uVar31 = uVar77;
        uVar44 = uVar32;
      }
      if (1 < uVar44) {
        uVar31 = uVar31 + 1;
      }
      uVar77 = (uint)(short)uVar31;
      sVar130 = (short)((int)uVar26 >> (uVar77 - 0xe & 0x1f));
      if (uVar77 - 0xe == 0 || uVar77 < 0xe) {
        sVar130 = (short)(uVar26 << (ulong)(0xe - uVar77 & 0x1f));
      }
      uVar26 = -uVar76;
      if (-1 < (int)uVar76) {
        uVar26 = uVar76;
      }
      uVar44 = uVar26 >> 0x10;
      uVar77 = uVar44;
      if (uVar44 == 0) {
        uVar77 = uVar26;
      }
      uVar32 = (uint)(uVar44 != 0);
      uVar26 = uVar32 << 4 | 8;
      uVar44 = uVar77 >> 8;
      if (uVar77 < 0x100) {
        uVar26 = uVar32 << 4;
        uVar44 = uVar77;
      }
      uVar77 = uVar26 | 4;
      uVar32 = uVar44 >> 4;
      if (uVar44 < 0x10) {
        uVar77 = uVar26;
        uVar32 = uVar44;
      }
      uVar26 = uVar77 | 2;
      uVar44 = uVar32 >> 2;
      if (uVar32 < 4) {
        uVar26 = uVar77;
        uVar44 = uVar32;
      }
      if (1 < uVar44) {
        uVar26 = uVar26 + 1;
      }
      uVar77 = (uint)(short)uVar26;
      sVar113 = (short)((int)uVar76 >> (uVar77 - 0xe & 0x1f));
      if (uVar77 - 0xe == 0 || uVar77 < 0xe) {
        sVar113 = (short)(uVar76 << (ulong)(0xe - uVar77 & 0x1f));
      }
      uVar77 = (uVar31 + uVar26) * 0x10000 - 0xd0000;
      uVar31 = (uint)((int)sVar113 * (int)sVar130) >> 0xf & 0xffff;
    }
    uVar26 = uVar77;
    if ((uVar50 & 0xffff) != 0) goto LAB_001176a4;
LAB_001176d8:
    uVar79 = uVar26 >> 0x10;
    uVar50 = uVar31;
  }
  uVar26 = -uVar85;
  if (-1 < (int)uVar85) {
    uVar26 = uVar85;
  }
  uVar31 = 0;
  iVar91 = 0;
  param_1[0x27] = uVar50 & 0xffff | uVar79 << 0x10;
  if (uVar85 != 0 && uVar26 != 0) {
    uVar77 = uVar26 >> 0x10;
    uVar31 = uVar77;
    if (uVar77 == 0) {
      uVar31 = uVar26;
    }
    uVar44 = (uint)(uVar77 != 0);
    uVar77 = uVar44 << 4 | 8;
    uVar76 = uVar31 >> 8;
    if (uVar31 < 0x100) {
      uVar77 = uVar44 << 4;
      uVar76 = uVar31;
    }
    uVar31 = uVar77 | 4;
    uVar44 = uVar76 >> 4;
    if (uVar76 < 0x10) {
      uVar31 = uVar77;
      uVar44 = uVar76;
    }
    uVar77 = uVar31 | 2;
    uVar76 = uVar44 >> 2;
    if (uVar44 < 4) {
      uVar77 = uVar31;
      uVar76 = uVar44;
    }
    if (1 < uVar76) {
      uVar77 = uVar77 + 1;
    }
    uVar76 = (uint)(short)uVar77;
    uVar31 = uVar76 - 0xe;
    sVar130 = (short)(uVar26 >> (ulong)(uVar31 & 0x1f));
    sVar113 = (short)((int)uVar85 >> (uVar31 & 0x1f));
    if (uVar31 == 0 || uVar76 < 0xe) {
      sVar130 = (short)(uVar26 << (ulong)(0xe - uVar76 & 0x1f));
      sVar113 = (short)(uVar85 << (ulong)(0xe - uVar76 & 0x1f));
    }
    iVar91 = uVar77 * 0x20000 + -0xd0000;
    uVar31 = (uint)((int)sVar130 * (int)sVar113) >> 0xf & 0xffff;
  }
  bVar6 = local_170 != 0;
  bVar7 = uVar59 != 0;
  if (bVar6 && bVar7) {
    uVar77 = -local_170;
    if (-1 < (int)local_170) {
      uVar77 = local_170;
    }
    uVar44 = uVar77 >> 0x10;
    uVar76 = uVar44;
    if (uVar44 == 0) {
      uVar76 = uVar77;
    }
    uVar32 = (uint)(uVar44 != 0);
    uVar77 = uVar32 << 4 | 8;
    uVar44 = uVar76 >> 8;
    if (uVar76 < 0x100) {
      uVar77 = uVar32 << 4;
      uVar44 = uVar76;
    }
    uVar76 = uVar77 | 4;
    uVar32 = uVar44 >> 4;
    if (uVar44 < 0x10) {
      uVar76 = uVar77;
      uVar32 = uVar44;
    }
    uVar77 = uVar76 | 2;
    uVar44 = uVar32 >> 2;
    if (uVar32 < 4) {
      uVar77 = uVar76;
      uVar44 = uVar32;
    }
    if (1 < uVar44) {
      uVar77 = uVar77 + 1;
    }
    uVar76 = (uint)(short)uVar77;
    sVar130 = (short)((int)local_170 >> (uVar76 - 0xe & 0x1f));
    if (uVar76 - 0xe == 0 || uVar76 < 0xe) {
      sVar130 = (short)(local_170 << (ulong)(0xe - uVar76 & 0x1f));
    }
    uVar76 = -uVar59;
    if (-1 < (int)uVar59) {
      uVar76 = uVar59;
    }
    uVar32 = uVar76 >> 0x10;
    uVar44 = uVar32;
    if (uVar32 == 0) {
      uVar44 = uVar76;
    }
    uVar51 = (uint)(uVar32 != 0);
    uVar76 = uVar51 << 4 | 8;
    uVar32 = uVar44 >> 8;
    if (uVar44 < 0x100) {
      uVar76 = uVar51 << 4;
      uVar32 = uVar44;
    }
    uVar44 = uVar76 | 4;
    uVar51 = uVar32 >> 4;
    if (uVar32 < 0x10) {
      uVar44 = uVar76;
      uVar51 = uVar32;
    }
    uVar76 = uVar44 | 2;
    uVar32 = uVar51 >> 2;
    if (uVar51 < 4) {
      uVar76 = uVar44;
      uVar32 = uVar51;
    }
    if (1 < uVar32) {
      uVar76 = uVar76 + 1;
    }
    uVar44 = (uint)(short)uVar76;
    sVar113 = (short)((int)uVar59 >> (uVar44 - 0xe & 0x1f));
    if (uVar44 - 0xe == 0 || uVar44 < 0xe) {
      sVar113 = (short)(uVar59 << (ulong)(0xe - uVar44 & 0x1f));
    }
    uVar44 = (uint)((int)sVar113 * (int)sVar130) >> 0xf;
    if ((uVar44 & 0xffff) == 0) goto LAB_00117994;
    if (uVar31 != 0) {
      iVar93 = (int)((uVar77 + uVar76) * 0x10000 + -0xd0000) >> 0x10;
      iVar91 = iVar91 >> 0x10;
      iVar96 = iVar93 - iVar91;
      if (iVar96 == 0 || iVar93 < iVar91) {
        uVar77 = 0xf;
        if (iVar91 - iVar93 < 0xf) {
          uVar77 = (iVar91 - iVar93) + 1;
        }
        if ((int)(uVar31 << 0x10) >> 0x11 <= (int)(short)uVar44 >> (uVar77 & 0x1f))
        goto LAB_00118d5c;
        goto LAB_0011799c;
      }
      uVar77 = 0xf;
      if (iVar96 < 0xf) {
        uVar77 = iVar96 + 1;
      }
      if ((int)(uVar44 << 0x10) >> 0x11 < (int)(short)uVar31 >> (uVar77 & 0x1f)) goto LAB_0011799c;
      goto LAB_00118d5c;
    }
    if (-1 < (int)(uVar44 << 0x10)) goto LAB_00118d5c;
LAB_0011799c:
    *puVar58 = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    uVar59 = uVar84 * uVar80 * uVar53 * uVar86;
    if (0 < (int)uVar59) {
      lVar63 = *(long *)(param_1 + 0x20);
      lVar68 = *(long *)(param_1 + 0x22);
      uVar88 = (ulong)uVar59;
      if (uVar59 < 8) {
        uVar45 = 0;
      }
      else {
        uVar45 = uVar88 & 0xfffffff8;
        puVar81 = (undefined8 *)(lVar63 + 0x10);
        puVar37 = (undefined8 *)(lVar68 + 8);
        uVar54 = uVar45;
        do {
          puVar28 = puVar81 + -2;
          puVar4 = puVar81 + -1;
          uVar100 = puVar81[1];
          uVar94 = *puVar81;
          puVar81 = puVar81 + 4;
          uVar54 = uVar54 - 8;
          puVar37[-1] = CONCAT26((short)((uint)((int)((ulong)*puVar4 >> 0x20) + 0x8000) >> 0x10),
                                 CONCAT24((short)((uint)((int)*puVar4 + 0x8000) >> 0x10),
                                          CONCAT22((short)((uint)((int)((ulong)*puVar28 >> 0x20) +
                                                                 0x8000) >> 0x10),
                                                   (short)((uint)((int)*puVar28 + 0x8000) >> 0x10)))
                                );
          *puVar37 = CONCAT26((short)((uint)((int)((ulong)uVar100 >> 0x20) + 0x8000) >> 0x10),
                              CONCAT24((short)((uint)((int)uVar100 + 0x8000) >> 0x10),
                                       CONCAT22((short)((uint)((int)((ulong)uVar94 >> 0x20) + 0x8000
                                                              ) >> 0x10),
                                                (short)((uint)((int)uVar94 + 0x8000) >> 0x10))));
          puVar37 = puVar37 + 2;
        } while (uVar54 != 0);
        if (uVar45 == uVar88) goto LAB_00117a38;
      }
      lVar36 = uVar88 - uVar45;
      piVar70 = (int *)(lVar63 + uVar45 * 4);
      puVar35 = (undefined2 *)(lVar68 + uVar45 * 2);
      do {
        lVar36 = lVar36 + -1;
        *puVar35 = (short)((uint)(*piVar70 + 0x8000) >> 0x10);
        piVar70 = piVar70 + 1;
        puVar35 = puVar35 + 1;
      } while (lVar36 != 0);
    }
LAB_00117a38:
    if (0 < (int)uVar86) {
      uVar67 = (uint)uVar65;
      uVar88 = (ulong)(int)uVar67;
      iVar93 = (int)(uVar88 - 1);
      iVar91 = 0;
      uVar59 = 0;
      uVar54 = uVar88 & 0xfffffffffffffff8;
      do {
        if (0 < (int)uVar67) {
          puVar81 = *(undefined8 **)(param_1 + 0x3c);
          uVar27 = *(ulong *)(param_1 + 0xe);
          uVar45 = *(ulong *)(param_1 + 0x16);
          if ((uVar67 < 8) ||
             (iVar96 = uVar67 + uVar80 * uVar59,
             uVar88 - 1 >> 0x20 != 0 ||
             (iVar96 + iVar93 < iVar96 || (int)(uVar67 + iVar93) < (int)uVar67))) {
            uVar56 = 0;
          }
          else {
            lVar68 = uVar88 * 2;
            lVar63 = (long)(int)(uVar67 + uVar80 * uVar59) * 2;
            puVar37 = (undefined8 *)(uVar27 + lVar63);
            puVar28 = (undefined8 *)(uVar27 + lVar68 + lVar63);
            uVar56 = 0;
            if (((puVar28 <= puVar81 || (undefined8 *)((long)puVar81 + lVar68) <= puVar37) &&
                (puVar28 <= (undefined8 *)((long)puVar81 + lVar68) ||
                 (undefined8 *)
                 ((long)puVar81 +
                 (-(uVar65 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar65 & 0xffffffff) << 1) * 2) <=
                 puVar37)) && (uVar45 + lVar68 <= uVar27 || uVar27 + lVar68 <= uVar45)) {
              uVar69 = uVar65 & 0xffffffff;
              uVar56 = uVar54;
              puVar37 = puVar81;
              do {
                puVar28 = (undefined8 *)
                          ((long)puVar81 + (-(uVar69 >> 0x1f) & 0xfffffffe00000000 | uVar69 << 1));
                uVar100 = puVar28[1];
                uVar94 = *puVar28;
                uVar79 = iVar91 + (int)uVar69;
                uVar40 = -(ulong)(uVar79 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar79 << 1;
                uVar105 = ((undefined8 *)(uVar27 + uVar40))[1];
                uVar104 = *(undefined8 *)(uVar27 + uVar40);
                uVar111 = puVar37[1];
                uVar110 = *puVar37;
                uVar116 = ((undefined8 *)(uVar45 + uVar40))[1];
                uVar112 = *(undefined8 *)(uVar45 + uVar40);
                uVar56 = uVar56 - 8;
                uVar69 = (ulong)((int)uVar69 + 8);
                ((undefined8 *)(uVar27 + uVar40))[1] =
                     CONCAT26((short)((uint)((int)(short)((ulong)uVar116 >> 0x30) *
                                            (int)(short)((ulong)uVar111 >> 0x30)) >> 0xf) +
                              (short)((uint)((int)(short)((ulong)uVar105 >> 0x30) *
                                            (int)(short)((ulong)uVar100 >> 0x30)) >> 0xf),
                              CONCAT24((short)((uint)((int)(short)((ulong)uVar116 >> 0x20) *
                                                     (int)(short)((ulong)uVar111 >> 0x20)) >> 0xf) +
                                       (short)((uint)((int)(short)((ulong)uVar105 >> 0x20) *
                                                     (int)(short)((ulong)uVar100 >> 0x20)) >> 0xf),
                                       CONCAT22((short)((uint)((int)(short)((ulong)uVar116 >> 0x10)
                                                              * (int)(short)((ulong)uVar111 >> 0x10)
                                                              ) >> 0xf) +
                                                (short)((uint)((int)(short)((ulong)uVar105 >> 0x10)
                                                              * (int)(short)((ulong)uVar100 >> 0x10)
                                                              ) >> 0xf),
                                                (short)((uint)((int)(short)uVar116 *
                                                              (int)(short)uVar111) >> 0xf) +
                                                (short)((uint)((int)(short)uVar105 *
                                                              (int)(short)uVar100) >> 0xf))));
                *(undefined8 *)(uVar27 + uVar40) =
                     CONCAT26((short)((uint)((int)(short)((ulong)uVar112 >> 0x30) *
                                            (int)(short)((ulong)uVar110 >> 0x30)) >> 0xf) +
                              (short)((uint)((int)(short)((ulong)uVar104 >> 0x30) *
                                            (int)(short)((ulong)uVar94 >> 0x30)) >> 0xf),
                              CONCAT24((short)((uint)((int)(short)((ulong)uVar112 >> 0x20) *
                                                     (int)(short)((ulong)uVar110 >> 0x20)) >> 0xf) +
                                       (short)((uint)((int)(short)((ulong)uVar104 >> 0x20) *
                                                     (int)(short)((ulong)uVar94 >> 0x20)) >> 0xf),
                                       CONCAT22((short)((uint)((int)(short)((ulong)uVar112 >> 0x10)
                                                              * (int)(short)((ulong)uVar110 >> 0x10)
                                                              ) >> 0xf) +
                                                (short)((uint)((int)(short)((ulong)uVar104 >> 0x10)
                                                              * (int)(short)((ulong)uVar94 >> 0x10))
                                                       >> 0xf),
                                                (short)((uint)((int)(short)uVar112 *
                                                              (int)(short)uVar110) >> 0xf) +
                                                (short)((uint)((int)(short)uVar104 *
                                                              (int)(short)uVar94) >> 0xf))));
                puVar37 = puVar37 + 2;
              } while (uVar56 != 0);
              uVar56 = uVar54;
              if (uVar54 == uVar88) goto LAB_00117bec;
            }
          }
          iVar96 = uVar67 + (int)uVar56;
          psVar57 = (short *)((long)puVar81 + uVar56 * 2);
          do {
            uVar69 = -(ulong)((uint)(iVar91 + iVar96) >> 0x1f) & 0xfffffffe00000000 |
                     (ulong)(uint)(iVar91 + iVar96) << 1;
            lVar63 = (long)iVar96;
            uVar56 = uVar56 + 1;
            iVar96 = iVar96 + 1;
            *(short *)(uVar27 + uVar69) =
                 (short)((uint)((int)*(short *)(uVar45 + uVar69) * (int)*psVar57) >> 0xf) +
                 (short)((uint)((int)*(short *)(uVar27 + uVar69) *
                               (int)*(short *)((long)puVar81 + lVar63 * 2)) >> 0xf);
            psVar57 = psVar57 + 1;
          } while ((long)uVar56 < (long)uVar88);
        }
LAB_00117bec:
        uVar59 = uVar59 + 1;
        iVar91 = iVar91 + uVar80;
      } while (uVar59 != uVar86);
      goto LAB_00117c04;
    }
LAB_00118228:
    uVar59 = 0;
    iVar91 = 0;
    local_a4 = 0;
  }
  else {
LAB_00117994:
    if (0 < (int)(uVar31 * 0x10000)) goto LAB_0011799c;
LAB_00118d5c:
    bVar8 = uVar92 != 0;
    uVar31 = -uVar92;
    if (-1 < (int)uVar92) {
      uVar31 = uVar92;
    }
    bVar9 = uVar31 != 0;
    uVar77 = 0;
    iVar91 = 0;
    if (bVar8 && bVar9) {
      uVar76 = uVar31 >> 0x10;
      uVar77 = uVar76;
      if (uVar76 == 0) {
        uVar77 = uVar31;
      }
      uVar32 = (uint)(uVar76 != 0);
      uVar76 = uVar32 << 4 | 8;
      uVar44 = uVar77 >> 8;
      if (uVar77 < 0x100) {
        uVar76 = uVar32 << 4;
        uVar44 = uVar77;
      }
      uVar77 = uVar76 | 4;
      uVar32 = uVar44 >> 4;
      if (uVar44 < 0x10) {
        uVar77 = uVar76;
        uVar32 = uVar44;
      }
      uVar76 = uVar77 | 2;
      uVar44 = uVar32 >> 2;
      if (uVar32 < 4) {
        uVar76 = uVar77;
        uVar44 = uVar32;
      }
      if (1 < uVar44) {
        uVar76 = uVar76 + 1;
      }
      uVar44 = (uint)(short)uVar76;
      uVar77 = uVar44 - 0xe;
      sVar130 = (short)(uVar31 >> (ulong)(uVar77 & 0x1f));
      sVar113 = (short)((int)uVar92 >> (uVar77 & 0x1f));
      if (uVar77 == 0 || uVar44 < 0xe) {
        sVar130 = (short)(uVar31 << (ulong)(0xe - uVar44 & 0x1f));
        sVar113 = (short)(uVar92 << (ulong)(0xe - uVar44 & 0x1f));
      }
      iVar91 = uVar76 * 0x20000 + -0xd0000;
      uVar77 = (uint)((int)sVar130 * (int)sVar113) >> 0xf & 0xffff;
    }
    iVar93 = ((uint)(int)(short)uVar67 >> 1) * 0x10000;
    uVar67 = (uint)(int)(short)uVar67 >> 1;
    uVar76 = uVar67 & 0x1ffff;
    uVar44 = uVar76;
    sVar130 = sVar109;
    if (iVar93 < 1) {
      uVar32 = iVar93 >> 0xf;
      if (-0x40000000 < iVar93) goto LAB_00118e68;
    }
    else if (iVar93 < 0x40000000) {
      uVar32 = (uVar67 & 0xffff) << 1;
LAB_00118e68:
      uVar44 = uVar32;
      sVar130 = sVar109 + -1;
    }
    iVar96 = uVar44 << 0x10;
    if (iVar96 == 0) {
      if ((int)(uVar77 * 0x10000) < 1) goto LAB_001197b8;
      goto LAB_0011799c;
    }
    if (uVar77 == 0) {
      if (-1 < iVar96) goto LAB_001197b8;
      goto LAB_0011799c;
    }
    iVar97 = (int)sVar130;
    iVar91 = iVar91 >> 0x10;
    if (iVar97 <= iVar91) {
      uVar32 = 0xf;
      if (iVar91 - iVar97 < 0xf) {
        uVar32 = (iVar91 - iVar97) + 1;
      }
      if ((int)(uVar77 * 0x10000) >> 0x11 <= (int)(short)uVar44 >> (uVar32 & 0x1f))
      goto LAB_001197b8;
      goto LAB_0011799c;
    }
    uVar44 = 0xf;
    if (iVar97 - iVar91 < 0xf) {
      uVar44 = (iVar97 - iVar91) + 1;
    }
    if (iVar96 >> 0x11 < (int)(short)uVar77 >> (uVar44 & 0x1f)) goto LAB_0011799c;
LAB_001197b8:
    bVar10 = uVar95 != 0;
    uVar77 = -uVar95;
    if (-1 < (int)uVar95) {
      uVar77 = uVar95;
    }
    bVar11 = uVar77 != 0;
    uVar44 = 0;
    iVar91 = 0;
    if (bVar10 && bVar11) {
      uVar32 = uVar77 >> 0x10;
      uVar44 = uVar32;
      if (uVar32 == 0) {
        uVar44 = uVar77;
      }
      uVar83 = (uint)(uVar32 != 0);
      uVar32 = uVar83 << 4 | 8;
      uVar51 = uVar44 >> 8;
      if (uVar44 < 0x100) {
        uVar32 = uVar83 << 4;
        uVar51 = uVar44;
      }
      uVar44 = uVar32 | 4;
      uVar83 = uVar51 >> 4;
      if (uVar51 < 0x10) {
        uVar44 = uVar32;
        uVar83 = uVar51;
      }
      uVar32 = uVar44 | 2;
      uVar51 = uVar83 >> 2;
      if (uVar83 < 4) {
        uVar32 = uVar44;
        uVar51 = uVar83;
      }
      if (1 < uVar51) {
        uVar32 = uVar32 + 1;
      }
      uVar51 = (uint)(short)uVar32;
      uVar44 = uVar51 - 0xe;
      sVar130 = (short)(uVar77 >> (ulong)(uVar44 & 0x1f));
      sVar113 = (short)((int)uVar95 >> (uVar44 & 0x1f));
      if (uVar44 == 0 || uVar51 < 0xe) {
        sVar130 = (short)(uVar77 << (ulong)(0xe - uVar51 & 0x1f));
        sVar113 = (short)(uVar95 << (ulong)(0xe - uVar51 & 0x1f));
      }
      iVar91 = uVar32 * 0x20000 + -0xd0000;
      uVar44 = (uint)((int)sVar130 * (int)sVar113) >> 0xf & 0xffff;
    }
    iVar96 = ((uint)(int)(short)uVar50 >> 1) * 0x10000;
    uVar50 = (uint)(int)(short)uVar50 >> 1;
    uVar32 = uVar50 & 0x1ffff;
    sVar113 = (short)uVar79;
    sVar130 = sVar113 + -1;
    uVar79 = uVar32;
    if (iVar96 < 1) {
      uVar51 = iVar96 >> 0xf;
      if (-0x40000000 < iVar96) goto LAB_00119948;
    }
    else if (iVar96 < 0x40000000) {
      uVar51 = (uVar50 & 0xffff) << 1;
LAB_00119948:
      sVar130 = sVar113 + -2;
      uVar79 = uVar51;
    }
    iVar97 = uVar79 << 0x10;
    if (iVar97 == 0) {
      if (0 < (int)(uVar44 * 0x10000)) goto LAB_0011799c;
    }
    else if (uVar44 == 0) {
      if (iVar97 < 0) goto LAB_0011799c;
    }
    else {
      iVar98 = (int)sVar130;
      iVar91 = iVar91 >> 0x10;
      if (iVar91 < iVar98) {
        uVar79 = 0xf;
        if (iVar98 - iVar91 < 0xf) {
          uVar79 = (iVar98 - iVar91) + 1;
        }
        if (iVar97 >> 0x11 < (int)(short)uVar44 >> (uVar79 & 0x1f)) goto LAB_0011799c;
      }
      else {
        uVar51 = 0xf;
        if (iVar91 - iVar98 < 0xf) {
          uVar51 = (iVar91 - iVar98) + 1;
        }
        if ((int)(short)uVar79 >> (uVar51 & 0x1f) < (int)(uVar44 * 0x10000) >> 0x11)
        goto LAB_0011799c;
      }
    }
    if (uVar85 != 0 && uVar26 != 0) {
      uVar44 = uVar26 >> 0x10;
      uVar79 = uVar44;
      if (uVar44 == 0) {
        uVar79 = uVar26;
      }
      uVar83 = (uint)(uVar44 != 0);
      uVar44 = uVar83 << 4 | 8;
      uVar51 = uVar79 >> 8;
      if (uVar79 < 0x100) {
        uVar44 = uVar83 << 4;
        uVar51 = uVar79;
      }
      uVar79 = uVar44 | 4;
      uVar83 = uVar51 >> 4;
      if (uVar51 < 0x10) {
        uVar79 = uVar44;
        uVar83 = uVar51;
      }
      uVar44 = uVar79 | 2;
      uVar51 = uVar83 >> 2;
      if (uVar83 < 4) {
        uVar44 = uVar79;
        uVar51 = uVar83;
      }
      if (1 < uVar51) {
        uVar44 = uVar44 + 1;
      }
      uVar51 = (uint)(short)uVar44;
      uVar79 = uVar51 - 0xe;
      sVar130 = (short)(uVar26 >> (ulong)(uVar79 & 0x1f));
      sVar114 = (short)((int)-uVar85 >> (uVar79 & 0x1f));
      if (uVar79 == 0 || uVar51 < 0xe) {
        sVar130 = (short)(uVar26 << (ulong)(0xe - uVar51 & 0x1f));
        sVar114 = (short)(-uVar85 << (ulong)(0xe - uVar51 & 0x1f));
      }
      iVar91 = uVar44 * 0x20000 + -0xd0000;
      uVar79 = (uint)((int)sVar130 * (int)sVar114) >> 0xf & 0xffff;
      if (!bVar6 || !bVar7) goto LAB_0011a2b0;
LAB_001199c0:
      uVar85 = -local_170;
      if (-1 < (int)local_170) {
        uVar85 = local_170;
      }
      uVar44 = uVar85 >> 0x10;
      uVar26 = uVar44;
      if (uVar44 == 0) {
        uVar26 = uVar85;
      }
      uVar43 = (ushort)(uVar44 != 0);
      uVar85 = uVar26 >> 8;
      uVar2 = uVar43 << 4 | 8;
      if (uVar26 < 0x100) {
        uVar85 = uVar26;
        uVar2 = uVar43 << 4;
      }
      uVar26 = uVar85 >> 4;
      uVar43 = uVar2 | 4;
      if (uVar85 < 0x10) {
        uVar26 = uVar85;
        uVar43 = uVar2;
      }
      uVar85 = uVar26 >> 2;
      uVar2 = uVar43 | 2;
      if (uVar26 < 4) {
        uVar85 = uVar26;
        uVar2 = uVar43;
      }
      if (1 < uVar85) {
        uVar2 = uVar2 + 1;
      }
      uVar85 = (uint)(short)uVar2;
      sVar114 = (short)((int)local_170 >> (uVar85 - 0xe & 0x1f));
      if (uVar85 - 0xe == 0 || uVar85 < 0xe) {
        sVar114 = (short)(local_170 << (ulong)(0xe - uVar85 & 0x1f));
      }
      uVar85 = -uVar59;
      if (-1 < (int)uVar59) {
        uVar85 = uVar59;
      }
      uVar44 = uVar85 >> 0x10;
      uVar26 = uVar44;
      if (uVar44 == 0) {
        uVar26 = uVar85;
      }
      uVar25 = (ushort)(uVar44 != 0);
      uVar85 = uVar26 >> 8;
      uVar43 = uVar25 << 4 | 8;
      if (uVar26 < 0x100) {
        uVar85 = uVar26;
        uVar43 = uVar25 << 4;
      }
      uVar26 = uVar85 >> 4;
      uVar25 = uVar43 | 4;
      if (uVar85 < 0x10) {
        uVar26 = uVar85;
        uVar25 = uVar43;
      }
      uVar85 = uVar26 >> 2;
      uVar43 = uVar25 | 2;
      if (uVar26 < 4) {
        uVar85 = uVar26;
        uVar43 = uVar25;
      }
      if (1 < uVar85) {
        uVar43 = uVar43 + 1;
      }
      uVar85 = (uint)(short)uVar43;
      sVar115 = (short)((int)uVar59 >> (uVar85 - 0xe & 0x1f));
      if (uVar85 - 0xe == 0 || uVar85 < 0xe) {
        sVar115 = (short)(uVar59 << (ulong)(0xe - uVar85 & 0x1f));
      }
      sVar130 = uVar2 + uVar43 + -0xd;
      uVar59 = (uint)((int)sVar115 * (int)sVar114) >> 0xf & 0xffff;
    }
    else {
      uVar79 = 0;
      iVar91 = 0;
      if (bVar6 && bVar7) goto LAB_001199c0;
LAB_0011a2b0:
      uVar59 = 0;
      sVar130 = 0;
    }
    uVar59 = (-(uVar59 >> 0xf) & 0xc0000000 | uVar59 << 0xe) >> 0xf;
    iVar97 = uVar59 * 0x10000;
    sVar114 = sVar130 + 3;
    if (iVar97 < 1) {
      if (-0x40000000 < iVar97) {
        uVar59 = iVar97 >> 0xf;
        goto LAB_0011a334;
      }
    }
    else if (iVar97 < 0x40000000) {
      uVar59 = (uVar59 & 0xffff) << 1;
LAB_0011a334:
      sVar114 = sVar130 + 2;
    }
    if (uVar59 << 0x10 == 0) {
      uVar59 = (uint)(0 < (int)(uVar79 * 0x10000));
joined_r0x0011a38c:
      if (bVar8 && bVar9) goto LAB_0011a7b0;
LAB_0011a390:
      uVar79 = 0;
      iVar91 = 0;
    }
    else {
      if (uVar79 == 0) {
        uVar59 = (uVar59 & 0xffff) >> 0xf;
        goto joined_r0x0011a38c;
      }
      iVar97 = (int)sVar114;
      iVar91 = iVar91 >> 0x10;
      if (iVar97 <= iVar91) {
        uVar85 = 0xf;
        if (iVar91 - iVar97 < 0xf) {
          uVar85 = (iVar91 - iVar97) + 1;
        }
        uVar59 = (uint)((int)(short)uVar59 >> (uVar85 & 0x1f) < (int)(uVar79 * 0x10000) >> 0x11);
        goto joined_r0x0011a38c;
      }
      uVar85 = 0xf;
      if (iVar97 - iVar91 < 0xf) {
        uVar85 = (iVar97 - iVar91) + 1;
      }
      uVar59 = (uint)((int)(uVar59 << 0x10) >> 0x11 < (int)(short)uVar79 >> (uVar85 & 0x1f));
      if (!bVar8 || !bVar9) goto LAB_0011a390;
LAB_0011a7b0:
      uVar85 = uVar31 >> 0x10;
      uVar79 = uVar85;
      if (uVar85 == 0) {
        uVar79 = uVar31;
      }
      uVar44 = (uint)(uVar85 != 0);
      uVar85 = uVar44 << 4 | 8;
      uVar26 = uVar79 >> 8;
      if (uVar79 < 0x100) {
        uVar85 = uVar44 << 4;
        uVar26 = uVar79;
      }
      uVar79 = uVar85 | 4;
      uVar44 = uVar26 >> 4;
      if (uVar26 < 0x10) {
        uVar79 = uVar85;
        uVar44 = uVar26;
      }
      uVar85 = uVar79 | 2;
      uVar26 = uVar44 >> 2;
      if (uVar44 < 4) {
        uVar85 = uVar79;
        uVar26 = uVar44;
      }
      if (1 < uVar26) {
        uVar85 = uVar85 + 1;
      }
      uVar26 = (uint)(short)uVar85;
      uVar79 = uVar26 - 0xe;
      sVar130 = (short)(uVar31 >> (ulong)(uVar79 & 0x1f));
      sVar114 = (short)((int)-uVar92 >> (uVar79 & 0x1f));
      if (uVar79 == 0 || uVar26 < 0xe) {
        sVar130 = (short)(uVar31 << (ulong)(0xe - uVar26 & 0x1f));
        sVar114 = (short)(-uVar92 << (ulong)(0xe - uVar26 & 0x1f));
      }
      iVar91 = uVar85 * 0x20000 + -0xd0000;
      uVar79 = (uint)((int)sVar130 * (int)sVar114) >> 0xf & 0xffff;
    }
    sVar130 = sVar109 + 3;
    if (iVar93 < 1) {
      uVar67 = iVar93 >> 0xf;
      if (-0x40000000 < iVar93) goto LAB_0011a87c;
    }
    else if (iVar93 < 0x40000000) {
      uVar67 = (uVar67 & 0xffff) << 1;
LAB_0011a87c:
      uVar76 = uVar67;
      sVar130 = sVar109 + 2;
    }
    if (uVar76 << 0x10 == 0) {
      uVar67 = (uint)(0 < (int)(uVar79 * 0x10000));
joined_r0x0011a8dc:
      if (bVar10 && bVar11) goto LAB_0011a8f4;
LAB_0011a8e0:
      uVar79 = 0;
      iVar91 = 0;
    }
    else {
      if (uVar79 == 0) {
        uVar67 = (uVar76 & 0xffff) >> 0xf;
        goto joined_r0x0011a8dc;
      }
      iVar93 = (int)sVar130;
      iVar91 = iVar91 >> 0x10;
      if (iVar93 <= iVar91) {
        uVar67 = 0xf;
        if (iVar91 - iVar93 < 0xf) {
          uVar67 = (iVar91 - iVar93) + 1;
        }
        uVar67 = (uint)((int)(short)uVar76 >> (uVar67 & 0x1f) < (int)(uVar79 * 0x10000) >> 0x11);
        goto joined_r0x0011a8dc;
      }
      uVar67 = 0xf;
      if (iVar93 - iVar91 < 0xf) {
        uVar67 = (iVar93 - iVar91) + 1;
      }
      uVar67 = (uint)((int)(uVar76 << 0x10) >> 0x11 < (int)(short)uVar79 >> (uVar67 & 0x1f));
      if (!bVar10 || !bVar11) goto LAB_0011a8e0;
LAB_0011a8f4:
      uVar85 = uVar77 >> 0x10;
      uVar79 = uVar85;
      if (uVar85 == 0) {
        uVar79 = uVar77;
      }
      uVar26 = (uint)(uVar85 != 0);
      uVar85 = uVar26 << 4 | 8;
      uVar92 = uVar79 >> 8;
      if (uVar79 < 0x100) {
        uVar85 = uVar26 << 4;
        uVar92 = uVar79;
      }
      uVar79 = uVar85 | 4;
      uVar26 = uVar92 >> 4;
      if (uVar92 < 0x10) {
        uVar79 = uVar85;
        uVar26 = uVar92;
      }
      uVar85 = uVar79 | 2;
      uVar92 = uVar26 >> 2;
      if (uVar26 < 4) {
        uVar85 = uVar79;
        uVar92 = uVar26;
      }
      if (1 < uVar92) {
        uVar85 = uVar85 + 1;
      }
      uVar92 = (uint)(short)uVar85;
      uVar79 = uVar92 - 0xe;
      sVar109 = (short)(uVar77 >> (ulong)(uVar79 & 0x1f));
      sVar130 = (short)((int)-uVar95 >> (uVar79 & 0x1f));
      if (uVar79 == 0 || uVar92 < 0xe) {
        sVar109 = (short)(uVar77 << (ulong)(0xe - uVar92 & 0x1f));
        sVar130 = (short)(-uVar95 << (ulong)(0xe - uVar92 & 0x1f));
      }
      iVar91 = uVar85 * 0x20000 + -0xd0000;
      uVar79 = (uint)((int)sVar109 * (int)sVar130) >> 0xf & 0xffff;
    }
    sVar109 = sVar113 + 3;
    if (iVar96 < 1) {
      uVar50 = iVar96 >> 0xf;
      if (-0x40000000 < iVar96) goto LAB_0011a9c0;
    }
    else if (iVar96 < 0x40000000) {
      uVar50 = (uVar50 & 0xffff) << 1;
LAB_0011a9c0:
      uVar32 = uVar50;
      sVar109 = sVar113 + 2;
    }
    if (uVar32 << 0x10 == 0) {
      uVar79 = (uint)(0 < (int)(uVar79 * 0x10000));
    }
    else if (uVar79 == 0) {
      uVar79 = (uVar32 & 0xffff) >> 0xf;
    }
    else {
      iVar93 = (int)sVar109;
      iVar91 = iVar91 >> 0x10;
      if (iVar91 < iVar93) {
        uVar50 = 0xf;
        if (iVar93 - iVar91 < 0xf) {
          uVar50 = (iVar93 - iVar91) + 1;
        }
        bVar6 = (int)(uVar32 << 0x10) >> 0x11 < (int)(short)uVar79 >> (uVar50 & 0x1f);
      }
      else {
        uVar50 = 0xf;
        if (iVar91 - iVar93 < 0xf) {
          uVar50 = (iVar91 - iVar93) + 1;
        }
        bVar6 = (int)(short)uVar32 >> (uVar50 & 0x1f) < (int)(uVar79 * 0x10000) >> 0x11;
      }
      uVar79 = (uint)bVar6;
    }
    if ((uVar59 | uVar67 | uVar79) == 1) {
      uVar59 = uVar84 * uVar80 * uVar53 * uVar86;
      if (0 < (int)uVar59) {
        lVar63 = *(long *)(param_1 + 0x20);
        lVar68 = *(long *)(param_1 + 0x22);
        uVar65 = (ulong)uVar59;
        if (uVar59 < 8) {
          uVar54 = 0;
        }
        else {
          uVar54 = uVar65 & 0xfffffff8;
          puVar81 = (undefined8 *)(lVar68 + 8);
          puVar37 = (undefined8 *)(lVar63 + 0x10);
          uVar88 = uVar54;
          do {
            uVar94 = puVar81[-1];
            uVar100 = *puVar81;
            puVar81 = puVar81 + 2;
            uVar88 = uVar88 - 8;
            puVar37[-1] = CONCAT44((int)(short)((ulong)uVar94 >> 0x30) << 0x10,
                                   (int)(short)((ulong)uVar94 >> 0x20) << 0x10);
            puVar37[-2] = CONCAT44((int)(short)((ulong)uVar94 >> 0x10) << 0x10,
                                   (int)(short)uVar94 << 0x10);
            puVar37[1] = CONCAT44((int)(short)((ulong)uVar100 >> 0x30) << 0x10,
                                  (int)(short)((ulong)uVar100 >> 0x20) << 0x10);
            *puVar37 = CONCAT44((int)(short)((ulong)uVar100 >> 0x10) << 0x10,
                                (int)(short)uVar100 << 0x10);
            puVar37 = puVar37 + 4;
          } while (uVar88 != 0);
          if (uVar54 == uVar65) goto LAB_0011ab38;
        }
        lVar36 = uVar65 - uVar54;
        puVar66 = (ushort *)(lVar68 + uVar54 * 2);
        piVar70 = (int *)(lVar63 + uVar54 * 4);
        do {
          lVar36 = lVar36 + -1;
          *piVar70 = (uint)*puVar66 << 0x10;
          puVar66 = puVar66 + 1;
          piVar70 = piVar70 + 1;
        } while (lVar36 != 0);
      }
LAB_0011ab38:
      if (0 < (int)uVar86) {
        uVar90 = *param_1;
        uVar54 = (ulong)uVar90;
        lVar36 = 0;
        iVar91 = 0;
        uVar65 = 0;
        uVar45 = (ulong)(int)uVar90;
        uVar59 = uVar90 & 0xfffffff0;
        uVar27 = uVar54 & 0xfffffff0;
        lVar63 = uVar45 + 8;
        lVar68 = 8;
        lVar82 = ((ulong)(uVar90 - 1) + 1) * 2;
        uVar88 = uVar45;
        do {
          if (0 < (int)uVar90) {
            uVar56 = *(ulong *)(param_1 + 0xe);
            uVar69 = *(ulong *)(param_1 + 0x16);
            if ((uVar90 < 0x10) || ((uVar69 < uVar56 + lVar82 && (uVar56 < uVar69 + lVar82)))) {
              uVar67 = 0;
LAB_0011abf0:
              uVar79 = uVar67 + (int)uVar88;
              uVar40 = -(ulong)(uVar79 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar79 << 1;
              puVar35 = (undefined2 *)(uVar56 + uVar40);
              puVar38 = (undefined2 *)(uVar69 + uVar40);
              do {
                uVar67 = uVar67 + 1;
                *puVar38 = *puVar35;
                puVar35 = puVar35 + 1;
                puVar38 = puVar38 + 1;
              } while ((int)uVar67 < (int)uVar90);
            }
            else {
              uVar40 = uVar88 & 0xffffffff;
              uVar67 = uVar59;
              do {
                uVar49 = -(uVar40 >> 0x1f) & 0xfffffffe00000000 | uVar40 << 1;
                puVar81 = (undefined8 *)(uVar56 + uVar49);
                uVar94 = *puVar81;
                uVar104 = puVar81[3];
                uVar100 = puVar81[2];
                uVar67 = uVar67 - 0x10;
                puVar37 = (undefined8 *)(uVar69 + uVar49);
                uVar40 = (ulong)((int)uVar40 + 0x10);
                puVar37[1] = puVar81[1];
                *puVar37 = uVar94;
                puVar37[3] = uVar104;
                puVar37[2] = uVar100;
              } while (uVar67 != 0);
              uVar67 = uVar59;
              if (uVar90 != uVar59) goto LAB_0011abf0;
            }
            if (0 < (int)uVar90) {
              lVar46 = *(long *)(param_1 + 0x14);
              lVar47 = *(long *)(param_1 + 0x16);
              lVar55 = *(long *)(param_1 + 0xe);
              if (uVar90 < 0x10) {
                uVar40 = 0;
              }
              else {
                lVar87 = uVar65 * lVar60;
                lVar64 = (long)(int)(uVar90 * (int)uVar65) * 2;
                uVar56 = lVar55 + lVar87 * 2;
                uVar69 = lVar55 + (lVar87 + uVar54) * 2;
                uVar40 = 0;
                if ((lVar46 + uVar54 * 2 + lVar64 <= uVar56 || uVar69 <= (ulong)(lVar46 + lVar64))
                   && (lVar47 + (uVar45 + uVar54 + lVar87) * 2 <= uVar56 ||
                       uVar69 <= lVar47 + (lVar87 + uVar45) * 2)) {
                  puVar37 = (undefined8 *)(lVar47 + lVar63 * 2);
                  puVar81 = (undefined8 *)(lVar46 + (long)iVar91 * 2 + 0x10);
                  puVar28 = (undefined8 *)(lVar55 + lVar68 * 2);
                  uVar56 = uVar27;
                  do {
                    uVar100 = puVar81[-1];
                    uVar94 = puVar81[-2];
                    uVar105 = puVar81[1];
                    uVar104 = *puVar81;
                    uVar111 = puVar37[-1];
                    uVar110 = puVar37[-2];
                    uVar116 = puVar37[1];
                    uVar112 = *puVar37;
                    uVar56 = uVar56 - 0x10;
                    puVar81 = puVar81 + 4;
                    puVar37 = puVar37 + 4;
                    puVar28[-1] = CONCAT26((short)((ulong)uVar100 >> 0x30) -
                                           (short)((ulong)uVar111 >> 0x30),
                                           CONCAT24((short)((ulong)uVar100 >> 0x20) -
                                                    (short)((ulong)uVar111 >> 0x20),
                                                    CONCAT22((short)((ulong)uVar100 >> 0x10) -
                                                             (short)((ulong)uVar111 >> 0x10),
                                                             (short)uVar100 - (short)uVar111)));
                    puVar28[-2] = CONCAT26((short)((ulong)uVar94 >> 0x30) -
                                           (short)((ulong)uVar110 >> 0x30),
                                           CONCAT24((short)((ulong)uVar94 >> 0x20) -
                                                    (short)((ulong)uVar110 >> 0x20),
                                                    CONCAT22((short)((ulong)uVar94 >> 0x10) -
                                                             (short)((ulong)uVar110 >> 0x10),
                                                             (short)uVar94 - (short)uVar110)));
                    puVar28[1] = CONCAT26((short)((ulong)uVar105 >> 0x30) -
                                          (short)((ulong)uVar116 >> 0x30),
                                          CONCAT24((short)((ulong)uVar105 >> 0x20) -
                                                   (short)((ulong)uVar116 >> 0x20),
                                                   CONCAT22((short)((ulong)uVar105 >> 0x10) -
                                                            (short)((ulong)uVar116 >> 0x10),
                                                            (short)uVar105 - (short)uVar116)));
                    *puVar28 = CONCAT26((short)((ulong)uVar104 >> 0x30) -
                                        (short)((ulong)uVar112 >> 0x30),
                                        CONCAT24((short)((ulong)uVar104 >> 0x20) -
                                                 (short)((ulong)uVar112 >> 0x20),
                                                 CONCAT22((short)((ulong)uVar104 >> 0x10) -
                                                          (short)((ulong)uVar112 >> 0x10),
                                                          (short)uVar104 - (short)uVar112)));
                    puVar28 = puVar28 + 4;
                  } while (uVar56 != 0);
                  uVar40 = uVar27;
                  if (uVar27 == uVar54) goto LAB_0011ad20;
                }
              }
              lVar64 = uVar54 - uVar40;
              psVar57 = (short *)(lVar46 + (uVar40 + (long)iVar91) * 2);
              psVar33 = (short *)(lVar47 + (uVar40 + uVar88) * 2);
              psVar42 = (short *)(lVar55 + (uVar40 + lVar36) * 2);
              do {
                lVar64 = lVar64 + -1;
                *psVar42 = *psVar57 - *psVar33;
                psVar57 = psVar57 + 1;
                psVar33 = psVar33 + 1;
                psVar42 = psVar42 + 1;
              } while (lVar64 != 0);
            }
          }
LAB_0011ad20:
          uVar65 = uVar65 + 1;
          iVar91 = iVar91 + uVar90;
          uVar88 = uVar88 + lVar60;
          lVar63 = lVar63 + lVar60;
          lVar68 = lVar68 + lVar60;
          lVar36 = lVar36 + lVar60;
        } while (uVar65 != uVar61);
      }
      *puVar58 = 0;
      param_1[0x26] = 0;
      param_1[0x27] = 0;
      uVar90 = local_170;
    }
LAB_00117c04:
    if ((int)uVar86 < 1) goto LAB_00118228;
    uVar88 = (ulong)((uVar80 - 3 >> 1) + 2);
    local_a4 = 0;
    uVar59 = 0;
    lVar63 = 0;
    lVar68 = 0;
    uVar65 = 0;
    iVar91 = 0;
    psVar33 = param_4;
    psVar57 = param_2;
    do {
      uVar67 = *param_1;
      uVar54 = (ulong)(int)uVar67;
      lVar36 = uVar65 * lVar60;
      uVar45 = (ulong)uVar67;
      iVar93 = (int)uVar65;
      if ((int)uVar67 < 1) {
        lVar82 = *(long *)(param_1 + 0xe);
      }
      else {
        lVar55 = *(long *)(param_1 + 0x46);
        lVar64 = *(long *)(param_1 + 0x14);
        lVar82 = *(long *)(param_1 + 0xe);
        uVar79 = (uint)*(ushort *)(lVar55 + uVar65 * 2);
        lVar47 = 0;
        lVar46 = 0;
        do {
          uVar79 = ((int)*(short *)(lVar64 + (long)(int)(uVar67 * iVar93 + (int)lVar46) * 2) -
                   (int)*(short *)(lVar82 + (long)(int)(uVar67 + (int)lVar63 + (int)lVar46) * 2)) +
                   ((int)(short)uVar79 * (int)(short)param_1[0x48] + 0x4000 >> 0xf);
          if ((0xf9fe < (ushort)(*(short *)((long)psVar57 + lVar47) + 31999U)) && (param_1[5] == 0))
          {
            param_1[5] = 1;
          }
          uVar50 = uVar79;
          if (0x7ffe < (int)uVar79) {
            uVar50 = 0x7fff;
          }
          lVar46 = lVar46 + 1;
          uVar131 = 0x8000;
          if (-0x8000 < (int)uVar79) {
            uVar131 = (short)uVar50;
          }
          *(undefined2 *)((long)psVar33 + lVar47) = uVar131;
          lVar47 = lVar47 + (long)(int)uVar86 * 2;
          *(short *)(lVar55 + uVar65 * 2) = (short)uVar79;
        } while (lVar46 < (long)uVar54);
        if (0 < (int)uVar67) {
          if ((uVar67 < 0x10) ||
             ((lVar82 + (lVar36 + uVar54) * 2 < lVar82 + (lVar36 + uVar45) * 2 &&
              ((ulong)(lVar82 + lVar36 * 2) < lVar82 + (lVar36 + uVar54 + uVar45) * 2)))) {
            uVar27 = 0;
          }
          else {
            uVar27 = uVar54 & 0xfffffff0;
            lVar47 = lVar82 + uVar54 * 2;
            uVar56 = uVar27;
            lVar46 = lVar68;
            do {
              puVar81 = (undefined8 *)(lVar82 + lVar46);
              uVar94 = *puVar81;
              uVar104 = puVar81[3];
              uVar100 = puVar81[2];
              lVar55 = lVar47 + lVar46;
              uVar56 = uVar56 - 0x10;
              puVar37 = (undefined8 *)(lVar47 + lVar46);
              puVar37[1] = puVar81[1];
              *puVar37 = uVar94;
              lVar46 = lVar46 + 0x20;
              *(undefined8 *)(lVar55 + 0x18) = uVar104;
              *(undefined8 *)(lVar55 + 0x10) = uVar100;
              puVar81[1] = 0;
              *puVar81 = 0;
              puVar81[3] = 0;
              puVar81[2] = 0;
            } while (uVar56 != 0);
            if (uVar27 == uVar45) goto LAB_00117dd0;
          }
          do {
            lVar46 = uVar27 * 2;
            uVar27 = uVar27 + 1;
            *(undefined2 *)(lVar82 + (lVar63 + uVar54) * 2 + lVar46) =
                 *(undefined2 *)(lVar82 + lVar68 + lVar46);
            *(undefined2 *)(lVar82 + lVar68 + lVar46) = 0;
          } while (uVar45 != uVar27);
        }
      }
LAB_00117dd0:
      lVar46 = lVar36 * 2;
      uVar79 = (int)uVar67 >> 1;
      if (uVar79 == 0) {
        iVar96 = 0;
      }
      else {
        lVar47 = *(long *)(param_1 + 0x16);
        uVar45 = (ulong)(uVar79 - 1);
        psVar52 = (short *)(lVar47 + lVar46 + uVar54 * 2);
        psVar42 = (short *)(lVar82 + lVar46 + uVar54 * 2);
        if (7 < uVar45 + 1) {
          uVar85 = uVar67 >> 1 & 7;
          lVar55 = (uVar45 + 1) - (ulong)uVar85;
          lVar64 = (lVar36 + uVar54) * 2;
          iVar96 = 0;
          iVar97 = 0;
          iVar98 = 0;
          iVar99 = 0;
          uVar50 = uVar79 - (int)lVar55;
          psVar42 = psVar42 + lVar55 * 2;
          psVar75 = psVar52 + lVar55 * 2;
          psVar29 = (short *)(lVar47 + lVar64 + 0x10);
          psVar34 = (short *)(lVar82 + lVar64 + 0x10);
          iVar101 = 0;
          iVar103 = 0;
          iVar108 = 0;
          iVar107 = 0;
          do {
            psVar41 = psVar29 + -8;
            sVar109 = *psVar29;
            psVar17 = psVar29 + 1;
            psVar15 = psVar29 + 2;
            psVar18 = psVar29 + 3;
            psVar16 = psVar29 + 4;
            psVar14 = psVar29 + 5;
            psVar12 = psVar29 + 6;
            psVar13 = psVar29 + 7;
            psVar20 = psVar29 + -7;
            psVar22 = psVar29 + -6;
            psVar23 = psVar29 + -5;
            psVar19 = psVar29 + -4;
            psVar24 = psVar29 + -3;
            psVar21 = psVar29 + -2;
            psVar74 = psVar29 + -1;
            lVar55 = lVar55 + -8;
            psVar29 = psVar29 + 0x10;
            iVar101 = iVar101 + ((int)*psVar17 * (int)psVar34[1] + (int)sVar109 * (int)*psVar34 >> 6
                                );
            iVar103 = iVar103 + ((int)*psVar18 * (int)psVar34[3] + (int)*psVar15 * (int)psVar34[2]
                                >> 6);
            iVar108 = iVar108 + ((int)*psVar14 * (int)psVar34[5] + (int)*psVar16 * (int)psVar34[4]
                                >> 6);
            iVar107 = iVar107 + ((int)*psVar13 * (int)psVar34[7] + (int)*psVar12 * (int)psVar34[6]
                                >> 6);
            iVar96 = iVar96 + ((int)*psVar20 * (int)psVar34[-7] + (int)*psVar41 * (int)psVar34[-8]
                              >> 6);
            iVar97 = iVar97 + ((int)*psVar23 * (int)psVar34[-5] + (int)*psVar22 * (int)psVar34[-6]
                              >> 6);
            iVar98 = iVar98 + ((int)*psVar24 * (int)psVar34[-3] + (int)*psVar19 * (int)psVar34[-4]
                              >> 6);
            iVar99 = iVar99 + ((int)*psVar74 * (int)psVar34[-1] + (int)*psVar21 * (int)psVar34[-2]
                              >> 6);
            psVar34 = psVar34 + 0x10;
          } while (lVar55 != 0);
          iVar96 = iVar101 + iVar96 + iVar103 + iVar97 + iVar108 + iVar98 + iVar107 + iVar99;
          goto joined_r0x00117ea0;
        }
        iVar96 = 0;
        psVar75 = psVar52;
        uVar50 = uVar79;
        do {
          sVar109 = *psVar42;
          psVar29 = psVar42 + 1;
          uVar50 = uVar50 - 1;
          psVar42 = psVar42 + 2;
          iVar96 = iVar96 + ((int)*psVar75 * (int)sVar109 + (int)psVar75[1] * (int)*psVar29 >> 6);
          psVar75 = psVar75 + 2;
          uVar85 = uVar50;
joined_r0x00117ea0:
        } while (uVar85 != 0);
        uVar59 = iVar96 + uVar59;
        if (7 < uVar45 + 1) {
          uVar85 = uVar67 >> 1 & 7;
          lVar64 = (uVar45 + 1) - (ulong)uVar85;
          iVar96 = 0;
          iVar97 = 0;
          iVar98 = 0;
          iVar99 = 0;
          lVar55 = (uVar45 + 1) - (ulong)uVar85;
          psVar52 = psVar52 + lVar64 * 2;
          uVar50 = uVar79 - (int)lVar64;
          psVar42 = (short *)(lVar47 + (lVar36 + uVar54) * 2 + 0x10);
          iVar101 = 0;
          iVar103 = 0;
          iVar108 = 0;
          iVar107 = 0;
          do {
            psVar24 = psVar42 + -8;
            sVar109 = *psVar42;
            psVar12 = psVar42 + 1;
            psVar14 = psVar42 + 2;
            psVar16 = psVar42 + 3;
            psVar29 = psVar42 + 4;
            psVar34 = psVar42 + 5;
            psVar13 = psVar42 + 6;
            psVar75 = psVar42 + 7;
            psVar17 = psVar42 + -7;
            psVar15 = psVar42 + -6;
            psVar18 = psVar42 + -5;
            psVar19 = psVar42 + -4;
            psVar20 = psVar42 + -3;
            psVar74 = psVar42 + -2;
            psVar21 = psVar42 + -1;
            lVar55 = lVar55 + -8;
            psVar42 = psVar42 + 0x10;
            iVar101 = iVar101 + ((uint)((int)*psVar12 * (int)*psVar12 + (int)sVar109 * (int)sVar109)
                                >> 6);
            iVar103 = iVar103 + ((uint)((int)*psVar16 * (int)*psVar16 +
                                       (int)*psVar14 * (int)*psVar14) >> 6);
            iVar108 = iVar108 + ((uint)((int)*psVar34 * (int)*psVar34 +
                                       (int)*psVar29 * (int)*psVar29) >> 6);
            iVar107 = iVar107 + ((uint)((int)*psVar75 * (int)*psVar75 +
                                       (int)*psVar13 * (int)*psVar13) >> 6);
            iVar96 = iVar96 + ((uint)((int)*psVar17 * (int)*psVar17 + (int)*psVar24 * (int)*psVar24)
                              >> 6);
            iVar97 = iVar97 + ((uint)((int)*psVar18 * (int)*psVar18 + (int)*psVar15 * (int)*psVar15)
                              >> 6);
            iVar98 = iVar98 + ((uint)((int)*psVar20 * (int)*psVar20 + (int)*psVar19 * (int)*psVar19)
                              >> 6);
            iVar99 = iVar99 + ((uint)((int)*psVar21 * (int)*psVar21 + (int)*psVar74 * (int)*psVar74)
                              >> 6);
          } while (lVar55 != 0);
          iVar96 = iVar101 + iVar96 + iVar103 + iVar97 + iVar108 + iVar98 + iVar107 + iVar99;
          goto joined_r0x00117f60;
        }
        iVar96 = 0;
        uVar50 = uVar79;
        do {
          sVar109 = *psVar52;
          psVar42 = psVar52 + 1;
          uVar50 = uVar50 - 1;
          psVar52 = psVar52 + 2;
          iVar96 = iVar96 + ((uint)((int)sVar109 * (int)sVar109 + (int)*psVar42 * (int)*psVar42) >>
                            6);
          uVar85 = uVar50;
joined_r0x00117f60:
        } while (uVar85 != 0);
        local_a4 = iVar96 + local_a4;
        psVar42 = (short *)(*(long *)(param_1 + 0x14) + (long)(int)(uVar67 * iVar93) * 2);
        if (uVar45 + 1 < 8) {
          iVar96 = 0;
        }
        else {
          uVar50 = uVar67 >> 1 & 7;
          lVar55 = (uVar45 + 1) - (ulong)uVar50;
          iVar96 = 0;
          iVar97 = 0;
          iVar98 = 0;
          iVar99 = 0;
          lVar47 = (uVar45 + 1) - (ulong)uVar50;
          psVar42 = psVar42 + lVar55 * 2;
          uVar79 = uVar79 - (int)lVar55;
          psVar52 = (short *)(*(long *)(param_1 + 0x14) + (long)(int)(uVar67 * iVar93) * 2 + 0x10);
          iVar101 = 0;
          iVar103 = 0;
          iVar108 = 0;
          iVar107 = 0;
          do {
            psVar24 = psVar52 + -8;
            sVar109 = *psVar52;
            psVar75 = psVar52 + 1;
            psVar13 = psVar52 + 2;
            psVar12 = psVar52 + 3;
            psVar14 = psVar52 + 4;
            psVar16 = psVar52 + 5;
            psVar29 = psVar52 + 6;
            psVar34 = psVar52 + 7;
            psVar18 = psVar52 + -7;
            psVar15 = psVar52 + -6;
            psVar17 = psVar52 + -5;
            psVar19 = psVar52 + -4;
            psVar20 = psVar52 + -3;
            psVar74 = psVar52 + -2;
            psVar21 = psVar52 + -1;
            lVar47 = lVar47 + -8;
            psVar52 = psVar52 + 0x10;
            iVar101 = iVar101 + ((uint)((int)*psVar75 * (int)*psVar75 + (int)sVar109 * (int)sVar109)
                                >> 6);
            iVar103 = iVar103 + ((uint)((int)*psVar12 * (int)*psVar12 +
                                       (int)*psVar13 * (int)*psVar13) >> 6);
            iVar108 = iVar108 + ((uint)((int)*psVar16 * (int)*psVar16 +
                                       (int)*psVar14 * (int)*psVar14) >> 6);
            iVar107 = iVar107 + ((uint)((int)*psVar34 * (int)*psVar34 +
                                       (int)*psVar29 * (int)*psVar29) >> 6);
            iVar96 = iVar96 + ((uint)((int)*psVar18 * (int)*psVar18 + (int)*psVar24 * (int)*psVar24)
                              >> 6);
            iVar97 = iVar97 + ((uint)((int)*psVar17 * (int)*psVar17 + (int)*psVar15 * (int)*psVar15)
                              >> 6);
            iVar98 = iVar98 + ((uint)((int)*psVar20 * (int)*psVar20 + (int)*psVar19 * (int)*psVar19)
                              >> 6);
            iVar99 = iVar99 + ((uint)((int)*psVar21 * (int)*psVar21 + (int)*psVar74 * (int)*psVar74)
                              >> 6);
          } while (lVar47 != 0);
          iVar96 = iVar101 + iVar96 + iVar103 + iVar97 + iVar108 + iVar98 + iVar107 + iVar99;
          if (uVar50 == 0) goto LAB_00118040;
        }
        do {
          sVar109 = *psVar42;
          psVar52 = psVar42 + 1;
          uVar79 = uVar79 - 1;
          psVar42 = psVar42 + 2;
          iVar96 = iVar96 + ((uint)((int)sVar109 * (int)sVar109 + (int)*psVar52 * (int)*psVar52) >>
                            6);
        } while (uVar79 != 0);
      }
LAB_00118040:
      spx_fft(*(undefined8 *)(param_1 + 0x40),lVar82 + lVar46,*(long *)(param_1 + 0x1c) + lVar36 * 2
             );
      if (0 < (int)*param_1) {
        memset((void *)(*(long *)(param_1 + 0x16) + (long)(int)(uVar80 * iVar93) * 2),0,
               (ulong)*param_1 << 1);
      }
      spx_fft(*(undefined8 *)(param_1 + 0x40),*(long *)(param_1 + 0x16) + lVar46,
              *(long *)(param_1 + 0x1a) + lVar46);
      lVar82 = *(long *)(param_1 + 0x1c);
      piVar70 = *(int **)(param_1 + 0x30);
      psVar42 = (short *)(lVar82 + lVar46);
      iVar93 = (int)*psVar42;
      *piVar70 = *piVar70 + iVar93 * iVar93;
      iVar93 = (int)psVar42[1];
      iVar93 = iVar93 * iVar93;
      if ((int)uVar80 < 3) {
        uVar54 = 1;
      }
      else {
        psVar42 = (short *)(lVar82 + lVar36 * 2 + 6);
        lVar82 = uVar88 - 1;
        piVar48 = piVar70;
        do {
          piVar48 = piVar48 + 1;
          lVar82 = lVar82 + -1;
          *piVar48 = *piVar48 + iVar93 + (int)psVar42[-1] * (int)psVar42[-1];
          sVar109 = *psVar42;
          psVar42 = psVar42 + 2;
          iVar93 = (int)sVar109 * (int)sVar109;
          uVar54 = uVar88;
        } while (lVar82 != 0);
      }
      iVar91 = iVar96 + iVar91;
      piVar70[uVar54] = piVar70[uVar54] + iVar93;
      piVar70 = *(int **)(param_1 + 0x32);
      psVar42 = (short *)(*(long *)(param_1 + 0x1a) + lVar36 * 2);
      *piVar70 = *piVar70 + (int)*psVar42 * (int)*psVar42;
      iVar93 = (int)psVar42[1] * (int)psVar42[1];
      if ((int)uVar80 < 3) {
        uVar54 = 1;
      }
      else {
        psVar42 = psVar42 + 3;
        lVar36 = uVar88 - 1;
        piVar48 = piVar70;
        do {
          piVar48 = piVar48 + 1;
          lVar36 = lVar36 + -1;
          *piVar48 = *piVar48 + iVar93 + (int)psVar42[-1] * (int)psVar42[-1];
          sVar109 = *psVar42;
          psVar42 = psVar42 + 2;
          iVar93 = (int)sVar109 * (int)sVar109;
          uVar54 = uVar88;
        } while (lVar36 != 0);
      }
      uVar65 = uVar65 + 1;
      lVar63 = lVar63 + lVar60;
      piVar70[uVar54] = piVar70[uVar54] + iVar93;
      psVar57 = psVar57 + 1;
      psVar33 = psVar33 + 1;
      lVar68 = lVar68 + lVar60 * 2;
    } while (uVar65 != uVar61);
  }
  sVar109 = (short)uVar80;
  if ((int)(uVar90 | uVar30 | local_a4) < 0) {
    uVar67 = param_1[6] + 0x32;
    param_1[6] = uVar67;
    if (0 < (int)(*param_1 * uVar86)) {
      memset(param_4,0,(ulong)(*param_1 * uVar86) << 1);
      uVar67 = param_1[6];
    }
joined_r0x001182ac:
    if (0x31 < (int)uVar67) {
      fprintf((FILE *)0x14d168,"warning: %s\n",
              "The echo canceller started acting funny and got slapped (reset). It swears it will behave now."
             );
      uVar65 = speex_echo_state_reset(param_1);
      return uVar65;
    }
  }
  else {
    if (iVar91 + (sVar109 * 10000 >> 6) < (int)local_170 >> 2) {
      uVar67 = param_1[6] + 1;
      param_1[6] = uVar67;
      goto joined_r0x001182ac;
    }
    param_1[6] = 0;
  }
  uVar86 = sVar109 * 100 >> 6;
  if ((int)uVar90 <= (int)uVar86) {
    uVar90 = uVar86;
  }
  if (0 < (int)uVar84) {
    lVar68 = *(long *)(param_1 + 0x10);
    lVar36 = *(long *)(param_1 + 0x12);
    piVar70 = *(int **)(param_1 + 0x34);
    uVar88 = (ulong)((uVar80 - 3 >> 1) + 2);
    lVar63 = 0;
    uVar65 = 0;
    psVar57 = (short *)(lVar36 + 6);
    do {
      uVar86 = *param_1;
      iVar91 = (int)uVar86 >> 1;
      if (iVar91 == 0) {
        iVar93 = 0;
      }
      else {
        uVar61 = (ulong)(iVar91 - 1) + 1;
        psVar33 = (short *)(lVar68 + uVar65 * lVar60 * 2 + (long)(int)uVar86 * 2);
        if (uVar61 < 8) {
          iVar93 = 0;
        }
        else {
          uVar84 = uVar86 >> 1 & 7;
          lVar46 = uVar61 - uVar84;
          lVar82 = lVar63 + (long)(int)uVar86 * 2;
          iVar93 = 0;
          iVar96 = 0;
          iVar97 = 0;
          iVar98 = 0;
          psVar33 = psVar33 + lVar46 * 2;
          iVar91 = iVar91 - (int)lVar46;
          iVar99 = 0;
          iVar101 = 0;
          iVar103 = 0;
          iVar108 = 0;
          do {
            psVar42 = (short *)(lVar68 + lVar82);
            lVar46 = lVar46 + -8;
            lVar82 = lVar82 + 0x20;
            iVar93 = iVar93 + ((uint)((int)psVar42[1] * (int)psVar42[1] +
                                     (int)*psVar42 * (int)*psVar42) >> 6);
            iVar96 = iVar96 + ((uint)((int)psVar42[3] * (int)psVar42[3] +
                                     (int)psVar42[2] * (int)psVar42[2]) >> 6);
            iVar97 = iVar97 + ((uint)((int)psVar42[5] * (int)psVar42[5] +
                                     (int)psVar42[4] * (int)psVar42[4]) >> 6);
            iVar98 = iVar98 + ((uint)((int)psVar42[7] * (int)psVar42[7] +
                                     (int)psVar42[6] * (int)psVar42[6]) >> 6);
            iVar99 = iVar99 + ((uint)((int)psVar42[9] * (int)psVar42[9] +
                                     (int)psVar42[8] * (int)psVar42[8]) >> 6);
            iVar101 = iVar101 + ((uint)((int)psVar42[0xb] * (int)psVar42[0xb] +
                                       (int)psVar42[10] * (int)psVar42[10]) >> 6);
            iVar103 = iVar103 + ((uint)((int)psVar42[0xd] * (int)psVar42[0xd] +
                                       (int)psVar42[0xc] * (int)psVar42[0xc]) >> 6);
            iVar108 = iVar108 + ((uint)((int)psVar42[0xf] * (int)psVar42[0xf] +
                                       (int)psVar42[0xe] * (int)psVar42[0xe]) >> 6);
          } while (lVar46 != 0);
          iVar93 = iVar99 + iVar93 + iVar101 + iVar96 + iVar103 + iVar97 + iVar108 + iVar98;
          if (uVar84 == 0) goto LAB_00118404;
        }
        do {
          sVar130 = *psVar33;
          psVar42 = psVar33 + 1;
          iVar91 = iVar91 + -1;
          psVar33 = psVar33 + 2;
          iVar93 = iVar93 + ((uint)((int)sVar130 * (int)sVar130 + (int)*psVar42 * (int)*psVar42) >>
                            6);
        } while (iVar91 != 0);
      }
LAB_00118404:
      psVar33 = (short *)(lVar36 + uVar65 * lVar60 * 2);
      uVar30 = iVar93 + uVar30;
      iVar91 = (int)*psVar33;
      *piVar70 = *piVar70 + iVar91 * iVar91;
      iVar91 = (int)psVar33[1];
      iVar91 = iVar91 * iVar91;
      lVar82 = uVar88 - 1;
      psVar33 = psVar57;
      piVar48 = piVar70;
      if ((int)uVar80 < 3) {
        uVar61 = 1;
      }
      else {
        do {
          piVar48 = piVar48 + 1;
          lVar82 = lVar82 + -1;
          *piVar48 = *piVar48 + iVar91 + (int)psVar33[-1] * (int)psVar33[-1];
          iVar91 = (int)*psVar33 * (int)*psVar33;
          uVar61 = uVar88;
          psVar33 = psVar33 + 2;
        } while (lVar82 != 0);
      }
      uVar65 = uVar65 + 1;
      lVar63 = lVar63 + lVar60 * 2;
      psVar57 = psVar57 + lVar60;
      piVar70[uVar61] = piVar70[uVar61] + iVar91;
    } while (uVar65 != uVar62);
  }
  uVar65 = 0xfff24000;
  uVar80 = 0xfff24000;
  if (-1 < (int)*param_1) {
    lVar60 = *(long *)(param_1 + 0x28);
    lVar63 = *(long *)(param_1 + 0x34);
    iVar91 = 0;
    if ((short)uVar53 != 0) {
      iVar91 = 0x2ccd / (int)(short)uVar53;
    }
    iVar93 = iVar91 * -0x10000 + 0x7fff0000 >> 0x10;
    lVar68 = 0;
    do {
      lVar36 = lVar68 * 4;
      uVar80 = *(uint *)(lVar60 + lVar36);
      *(int *)(lVar60 + lVar36) =
           ((int)(uVar80 << 1) >> 0x10) * iVar93 + ((int)((uVar80 & 0x7fff) * iVar93) >> 0xf) +
           ((int)((*(uint *)(lVar63 + lVar36) & 0x7fff) * (int)(short)iVar91) >> 0xf) +
           ((int)(*(uint *)(lVar63 + lVar36) << 1) >> 0x10) * (int)(short)iVar91 + 1;
      uVar86 = *param_1;
      bVar6 = lVar68 < (int)uVar86;
      lVar68 = lVar68 + 1;
    } while (bVar6);
    uVar65 = 0xfff24000;
    uVar80 = 0xfff24000;
    if (-1 < (int)uVar86) {
      sVar130 = (short)param_1[10];
      lVar60 = *(long *)(param_1 + 0x30);
      lVar68 = *(long *)(param_1 + 0x32);
      lVar63 = *(long *)(param_1 + 0x36);
      lVar36 = *(long *)(param_1 + 0x38);
      uVar80 = 0xfff24000;
      iVar91 = (int)(short)(0x7fff - sVar130);
      uVar65 = 0xfff24000;
      lVar82 = (long)(int)uVar86;
      do {
        uVar50 = (uint)uVar65;
        lVar46 = lVar82 * 4;
        uVar84 = *(uint *)(lVar60 + lVar46);
        uVar67 = *(uint *)(lVar63 + lVar46);
        uVar79 = uVar84 - uVar67;
        uVar86 = -uVar79;
        if (-1 < (int)uVar79) {
          uVar86 = uVar79;
        }
        if (uVar86 == 0) {
          uVar85 = 0;
          sVar113 = 0;
        }
        else {
          uVar92 = uVar86 >> 0x10;
          uVar85 = uVar92;
          if (uVar92 == 0) {
            uVar85 = uVar86;
          }
          uVar43 = (ushort)(uVar92 != 0);
          uVar2 = uVar43 << 4 | 8;
          uVar92 = uVar85 >> 8;
          if (uVar85 < 0x100) {
            uVar2 = uVar43 << 4;
            uVar92 = uVar85;
          }
          uVar43 = uVar2 | 4;
          uVar85 = uVar92 >> 4;
          if (uVar92 < 0x10) {
            uVar43 = uVar2;
            uVar85 = uVar92;
          }
          uVar2 = uVar43 | 2;
          uVar92 = uVar85 >> 2;
          if (uVar85 < 4) {
            uVar2 = uVar43;
            uVar92 = uVar85;
          }
          if (1 < uVar92) {
            uVar2 = uVar2 + 1;
          }
          uVar92 = (uint)(short)uVar2;
          uVar85 = uVar92 - 0xe;
          sVar114 = (short)(uVar86 >> (ulong)(uVar85 & 0x1f));
          if (uVar85 == 0 || uVar92 < 0xe) {
            sVar114 = (short)(uVar86 << (ulong)(0xe - uVar92 & 0x1f));
          }
          sVar113 = -sVar114;
          if (-1 < (int)uVar79) {
            sVar113 = sVar114;
          }
          uVar85 = uVar85 & 0xffff;
        }
        uVar79 = *(int *)(lVar68 + lVar46) - *(int *)(lVar36 + lVar46);
        uVar86 = -uVar79;
        if (-1 < (int)uVar79) {
          uVar86 = uVar79;
        }
        if (uVar86 == 0) {
          uVar92 = 0;
          sVar114 = 0;
        }
        else {
          uVar95 = uVar86 >> 0x10;
          uVar92 = uVar95;
          if (uVar95 == 0) {
            uVar92 = uVar86;
          }
          uVar43 = (ushort)(uVar95 != 0);
          uVar2 = uVar43 << 4 | 8;
          uVar95 = uVar92 >> 8;
          if (uVar92 < 0x100) {
            uVar2 = uVar43 << 4;
            uVar95 = uVar92;
          }
          uVar43 = uVar2 | 4;
          uVar92 = uVar95 >> 4;
          if (uVar95 < 0x10) {
            uVar43 = uVar2;
            uVar92 = uVar95;
          }
          uVar2 = uVar43 | 2;
          uVar95 = uVar92 >> 2;
          if (uVar92 < 4) {
            uVar2 = uVar43;
            uVar95 = uVar92;
          }
          if (1 < uVar95) {
            uVar2 = uVar2 + 1;
          }
          uVar95 = (uint)(short)uVar2;
          uVar92 = uVar95 - 0xe;
          sVar115 = (short)(uVar86 >> (ulong)(uVar92 & 0x1f));
          if (uVar92 == 0 || uVar95 < 0xe) {
            sVar115 = (short)(uVar86 << (ulong)(0xe - uVar95 & 0x1f));
          }
          sVar114 = -sVar115;
          if (-1 < (int)uVar79) {
            sVar114 = sVar115;
          }
          uVar92 = uVar92 & 0xffff;
        }
        iVar96 = (int)sVar114;
        uVar79 = (uint)(iVar96 * sVar113) >> 0xf;
        iVar93 = uVar79 * 0x10000;
        uVar86 = uVar92 + uVar85 + 0xf;
        if (iVar93 < 1) {
          if (-0x40000000 < iVar93) {
            uVar79 = iVar93 >> 0xf;
            goto LAB_0011870c;
          }
        }
        else if (iVar93 < 0x40000000) {
          uVar79 = (uVar79 & 0xffff) << 1;
LAB_0011870c:
          uVar86 = uVar92 + uVar85 + 0xe;
        }
        if ((uVar80 & 0xffff) != 0) {
          if ((uVar79 & 0xffff) == 0) {
            uVar79 = uVar80;
            uVar86 = uVar80 >> 0x10;
          }
          else {
            uVar85 = (int)uVar80 >> 0x10;
            uVar86 = (uint)(short)uVar86;
            iVar97 = uVar85 - uVar86;
            iVar93 = uVar79 << 0x10;
            iVar98 = uVar80 << 0x10;
            if (iVar97 == 0 || (int)uVar85 < (int)uVar86) {
              iVar97 = uVar86 - uVar85;
              uVar85 = uVar86;
              iVar98 = iVar93;
              iVar93 = uVar80 << 0x10;
            }
            uVar80 = 0xf;
            if (iVar97 < 0xf) {
              uVar80 = iVar97 + 1;
            }
            iVar93 = ((iVar93 >> 0x10) >> (uVar80 & 0x1f)) + (iVar98 >> 0x11);
            iVar97 = iVar93 * 0x10000;
            uVar86 = uVar85;
            if (iVar97 < 1) {
              uVar79 = iVar93 << (-0x40000000 < iVar97);
              if (iVar97 < -0x3fffffff) {
                uVar86 = uVar85 + 1;
              }
            }
            else {
              uVar79 = iVar93 << (iVar97 < 0x40000000);
              if (0x3fffffff < iVar97) {
                uVar86 = uVar85 + 1;
              }
            }
          }
        }
        uVar95 = (uint)(iVar96 * iVar96) >> 0xf;
        iVar93 = uVar95 * 0x10000;
        uVar85 = uVar92 * 2 + 0xf;
        if (iVar93 < 1) {
          if (-0x40000000 < iVar93) {
            uVar95 = iVar93 >> 0xf;
            goto LAB_001187e0;
          }
        }
        else if (iVar93 < 0x40000000) {
          uVar95 = uVar95 << 1;
LAB_001187e0:
          uVar85 = uVar92 * 2 + 0xe;
        }
        uVar80 = uVar79 & 0xffff | uVar86 << 0x10;
        if ((uVar65 & 0xffff) != 0) {
          if ((uVar95 & 0xffff) == 0) {
            uVar85 = uVar50 >> 0x10;
            uVar95 = uVar50;
          }
          else {
            uVar86 = (int)uVar50 >> 0x10;
            uVar79 = (uint)(short)uVar85;
            iVar96 = uVar86 - uVar79;
            iVar93 = uVar95 << 0x10;
            iVar97 = uVar50 << 0x10;
            if (iVar96 == 0 || (int)uVar86 < (int)uVar79) {
              iVar96 = uVar79 - uVar86;
              uVar86 = uVar79;
              iVar97 = iVar93;
              iVar93 = uVar50 << 0x10;
            }
            uVar79 = 0xf;
            if (iVar96 < 0xf) {
              uVar79 = iVar96 + 1;
            }
            iVar93 = ((iVar93 >> 0x10) >> (uVar79 & 0x1f)) + (iVar97 >> 0x11);
            iVar96 = iVar93 * 0x10000;
            uVar85 = uVar86;
            if (iVar96 < 1) {
              uVar95 = iVar93 << (-0x40000000 < iVar96);
              if (iVar96 < -0x3fffffff) {
                uVar85 = uVar86 + 1;
              }
            }
            else {
              uVar95 = iVar93 << (iVar96 < 0x40000000);
              if (0x3fffffff < iVar96) {
                uVar85 = uVar86 + 1;
              }
            }
          }
        }
        iVar93 = (int)sVar130;
        *(int *)(lVar63 + lVar46) =
             ((int)(uVar84 << 1) >> 0x10) * (int)sVar130 +
             ((int)((uVar84 & 0x7fff) * iVar93) >> 0xf) + ((int)(uVar67 << 1) >> 0x10) * iVar91 +
             ((int)((uVar67 & 0x7fff) * iVar91) >> 0xf);
        uVar86 = *(uint *)(lVar68 + lVar46);
        uVar65 = (ulong)(uVar95 & 0xffff | uVar85 << 0x10);
        *(int *)(lVar36 + lVar46) =
             ((int)(*(uint *)(lVar36 + lVar46) << 1) >> 0x10) * iVar91 +
             ((int)((*(uint *)(lVar36 + lVar46) & 0x7fff) * iVar91) >> 0xf) +
             ((int)((uVar86 & 0x7fff) * iVar93) >> 0xf) + ((int)(uVar86 << 1) >> 0x10) * iVar93;
        bVar6 = 0 < lVar82;
        lVar82 = lVar82 + -1;
      } while (bVar6);
    }
  }
  uVar86 = (int)(uVar65 >> 0x10) - 0xe;
  bVar6 = (uVar86 & 1) == 0;
  iVar91 = 1;
  if (bVar6) {
    iVar91 = 2;
  }
  uVar84 = ((int)uVar65 << 0x10) >> iVar91;
  sVar130 = (short)uVar86;
  if (!bVar6) {
    sVar130 = (short)(uVar65 >> 0x10) + -0xf;
  }
  bVar6 = uVar84 >> 0x10 != 0;
  uVar86 = uVar84 >> 0x10;
  if (!bVar6) {
    uVar86 = uVar84;
  }
  uVar67 = uVar86 >> 8;
  if (uVar86 < 0x100) {
    uVar67 = uVar86;
  }
  uVar79 = (uint)bVar6 << 3 | 4;
  if (uVar86 < 0x100) {
    uVar79 = (uint)bVar6 << 3;
  }
  uVar86 = uVar67 >> 4;
  if (uVar67 < 0x10) {
    uVar86 = uVar67;
  }
  uVar50 = uVar79 | 2;
  if (uVar67 < 0x10) {
    uVar50 = uVar79;
  }
  uVar50 = uVar50 | 3 < uVar86;
  uVar86 = 0xd - uVar50;
  sVar113 = (short)((int)uVar84 >> (uVar50 * 2 - 0xc & 0x1f));
  if ((ushort)uVar50 < 7) {
    sVar113 = (short)(uVar84 << (ulong)(uVar50 * -2 + 0xc & 0x1f));
  }
  iVar91 = (int)sVar113;
  iVar91 = (int)((((int)(((iVar91 * 0x41b0 + -0x31530000 >> 0x10) * iVar91 * 4 & 0xffff0000U) +
                        0x52b50000) >> 0x10) * iVar91 * 4 & 0xffff0000U) + 0xe320000) >> 0x10;
  iVar93 = iVar91 >> (uVar86 & 0x1f);
  if ((int)uVar86 < 1) {
    iVar93 = iVar91 << (ulong)(-uVar86 & 0x1f);
  }
  uVar84 = (uint)(int)sVar130 >> 1 & 0xffff;
  uVar86 = (uint)(short)iVar93;
  if (iVar93 * 0x10000 < 0x10000) {
    fprintf((FILE *)0x14d168,"warning: %s %d\n","Attempted to divide by",(ulong)uVar86);
    uVar80 = 0xfff2;
    sVar130 = 0x4000;
  }
  else {
    uVar67 = -(uVar80 >> 0xf & 1);
    uVar67 = (int)(short)uVar80 + uVar67 ^ uVar67;
    iVar91 = 0;
    uVar79 = (int)(short)uVar67;
    while ((int)uVar86 <= (int)uVar79) {
      iVar91 = iVar91 + 1;
      uVar67 = (int)(uVar67 << 0x10) >> 0x11;
      uVar79 = uVar67;
    }
    sVar130 = 0;
    if (uVar86 != 0) {
      sVar130 = (short)(((int)(short)uVar80 << (ulong)(0xfU - iVar91 & 0x1f)) / (int)uVar86);
    }
    uVar80 = (((uVar80 >> 0x10) + 0xfff1) - uVar84) + iVar91 & 0xffff;
  }
  iVar91 = (int)(local_a4 << 1) >> 0x10;
  uVar50 = local_a4 & 0x7fff;
  uVar67 = iVar91 * *(short *)((long)param_1 + 0x2a) +
           ((int)(uVar50 * (int)*(short *)((long)param_1 + 0x2a)) >> 0xf);
  uVar79 = ((int)(uVar90 << 1) >> 0x10) * (int)(short)param_1[0xb] +
           ((int)((uVar90 & 0x7fff) * (int)(short)param_1[0xb]) >> 0xf);
  if ((int)uVar67 <= (int)uVar79) {
    uVar79 = uVar67;
  }
  if (uVar79 == 0) {
    iVar96 = 0;
    iVar93 = 0xfff2;
    sVar113 = 0x4000;
    uVar67 = 0;
  }
  else {
    if ((int)uVar90 < 0x8000) {
      uVar67 = 0;
      uVar85 = uVar90;
    }
    else {
      uVar85 = uVar90 >> 0x10;
      uVar67 = uVar85;
      if (uVar85 == 0) {
        uVar67 = uVar90;
      }
      uVar43 = (ushort)(uVar85 != 0);
      uVar2 = uVar43 << 4 | 8;
      uVar85 = uVar67 >> 8;
      if (uVar67 < 0x100) {
        uVar2 = uVar43 << 4;
        uVar85 = uVar67;
      }
      uVar43 = uVar2 | 4;
      uVar67 = uVar85 >> 4;
      if (uVar85 < 0x10) {
        uVar43 = uVar2;
        uVar67 = uVar85;
      }
      uVar2 = uVar43 | 2;
      uVar85 = uVar67 >> 2;
      if (uVar67 < 4) {
        uVar2 = uVar43;
        uVar85 = uVar67;
      }
      if (1 < uVar85) {
        uVar2 = uVar2 + 1;
      }
      uVar92 = (uint)(short)uVar2;
      uVar67 = 0xe - uVar92;
      uVar85 = uVar90 >> (ulong)(uVar92 - 0xe & 0x1f);
      if (uVar92 - 0xe == 0 || uVar92 < 0xe) {
        uVar85 = uVar90 << (ulong)(uVar67 & 0x1f);
      }
    }
    uVar92 = -uVar79;
    if (-1 < (int)uVar79) {
      uVar92 = uVar79;
    }
    bVar6 = uVar92 >> 0x10 != 0;
    uVar95 = uVar92 >> 0x10;
    if (!bVar6) {
      uVar95 = uVar92;
    }
    uVar92 = uVar95 >> 8;
    if (uVar95 < 0x100) {
      uVar92 = uVar95;
    }
    uVar2 = (ushort)bVar6 << 4 | 8;
    if (uVar95 < 0x100) {
      uVar2 = (ushort)bVar6 << 4;
    }
    uVar95 = uVar92 >> 4;
    if (uVar92 < 0x10) {
      uVar95 = uVar92;
    }
    uVar43 = uVar2 | 4;
    if (uVar92 < 0x10) {
      uVar43 = uVar2;
    }
    uVar26 = uVar85 - 1;
    uVar92 = uVar95 >> 2;
    if (uVar95 < 4) {
      uVar92 = uVar95;
    }
    uVar2 = uVar43 | 2;
    if (uVar95 < 4) {
      uVar2 = uVar43;
    }
    if (1 < uVar92) {
      uVar2 = uVar2 + 1;
    }
    bVar6 = uVar26 >> 0x10 != 0;
    uVar92 = uVar26 >> 0x10;
    if (!bVar6) {
      uVar92 = uVar26;
    }
    uVar95 = uVar92 >> 8;
    if (uVar92 < 0x100) {
      uVar95 = uVar92;
    }
    uVar43 = (ushort)bVar6 << 4 | 8;
    if (uVar92 < 0x100) {
      uVar43 = (ushort)bVar6 << 4;
    }
    uVar92 = uVar95 >> 4;
    if (uVar95 < 0x10) {
      uVar92 = uVar95;
    }
    uVar25 = uVar43 | 4;
    if (uVar95 < 0x10) {
      uVar25 = uVar43;
    }
    uVar95 = uVar92 >> 2;
    if (uVar92 < 4) {
      uVar95 = uVar92;
    }
    uVar43 = uVar25 | 2;
    if (uVar92 < 4) {
      uVar43 = uVar25;
    }
    if (1 < uVar95) {
      uVar43 = uVar43 + 1;
    }
    iVar97 = (int)(short)uVar2 - (int)(short)uVar43;
    uVar92 = iVar97 - 0xf;
    iVar96 = (int)uVar79 >> (uVar92 & 0x1f);
    if (uVar92 == 0 || iVar97 < 0xf) {
      iVar96 = uVar79 << (ulong)(0xfU - iVar97 & 0x1f);
    }
    iVar98 = -iVar96;
    if (-1 < iVar96) {
      iVar98 = iVar96;
    }
    iVar93 = 0xfff2;
    if ((int)(uVar26 * 0x8000) <= iVar98) {
      uVar92 = iVar97 + 0xfff2;
    }
    uVar79 = 0;
    if ((short)uVar85 != 0) {
      uVar79 = (iVar96 >> ((int)(uVar26 * 0x8000) <= iVar98)) / (int)(short)uVar85;
    }
    uVar92 = uVar92 + uVar67;
    uVar67 = uVar92 * 0x10000;
    iVar96 = (int)(short)uVar79;
    if ((uVar79 & 0xffff) == 0) {
      sVar113 = 0x4000;
    }
    else {
      uVar85 = uVar79 & 0xffff | uVar92 * 0x10000;
      iVar93 = (int)uVar67 >> 0x10;
      if ((int)uVar85 < -0xe0000) {
        uVar79 = 0xf;
        if (-0xe - iVar93 < 0xf) {
          uVar79 = -iVar93 - 0xd;
        }
        uVar95 = 0x2000 - (iVar96 >> (uVar79 & 0x1f));
        iVar93 = 0xfff3;
      }
      else {
        uVar95 = 0;
        if ((int)uVar85 < 0x10000) {
          uVar95 = 0x4000 >> (ulong)(iVar93 + 0xfU & 0x1f);
        }
        uVar95 = uVar95 - ((int)(uVar79 << 0x10) >> 0x11);
        iVar93 = (uVar92 & 0xffff) + 1;
      }
      sVar113 = (short)uVar95;
      iVar97 = uVar95 * 0x10000;
      if (iVar97 < 1) {
        if (-0x40000000 < iVar97) {
          sVar113 = (short)(iVar97 >> 0xf);
          goto LAB_00118edc;
        }
      }
      else if (iVar97 < 0x40000000) {
        sVar113 = (short)((uVar95 & 0xffff) << 1);
LAB_00118edc:
        iVar93 = iVar93 + -1;
      }
    }
  }
  uVar79 = (uint)((int)(short)param_1[0x3a] * (int)sVar113) >> 0xf;
  iVar98 = iVar93 + (param_1[0x3a] >> 0x10);
  iVar99 = uVar79 * 0x10000;
  iVar97 = iVar98 + 0xf;
  if (iVar99 < 1) {
    if (-0x40000000 < iVar99) {
      uVar79 = iVar99 >> 0xf;
      goto LAB_00118f2c;
    }
  }
  else if (iVar99 < 0x40000000) {
    uVar79 = (uVar79 & 0xffff) << 1;
LAB_00118f2c:
    iVar97 = iVar98 + 0xe;
  }
  uVar85 = (uint)(iVar96 * sVar130) >> 0xf;
  iVar99 = uVar80 + (uVar67 >> 0x10);
  iVar101 = uVar85 * 0x10000;
  iVar98 = iVar99 + 0xf;
  if (iVar101 < 1) {
    if (-0x40000000 < iVar101) {
      uVar85 = iVar101 >> 0xf;
      goto LAB_00118f74;
    }
  }
  else if (iVar101 < 0x40000000) {
    uVar85 = (uVar85 & 0xffff) << 1;
LAB_00118f74:
    iVar98 = iVar99 + 0xe;
  }
  uVar80 = uVar85;
  iVar99 = iVar98;
  if (((uVar79 & 0xffff) != 0) && (uVar80 = uVar79, iVar99 = iVar97, (uVar85 & 0xffff) != 0)) {
    iVar103 = (int)(short)iVar97;
    iVar108 = (int)(short)iVar98;
    iVar101 = iVar103 - iVar108;
    iVar99 = uVar85 << 0x10;
    iVar107 = uVar79 << 0x10;
    if (iVar101 == 0 || iVar103 < iVar108) {
      iVar101 = iVar108 - iVar103;
      iVar97 = iVar98;
      iVar107 = iVar99;
      iVar99 = uVar79 << 0x10;
    }
    uVar80 = 0xf;
    if (iVar101 < 0xf) {
      uVar80 = iVar101 + 1;
    }
    iVar98 = ((iVar99 >> 0x10) >> (uVar80 & 0x1f)) + (iVar107 >> 0x11);
    iVar101 = iVar98 * 0x10000;
    iVar99 = iVar97;
    if (iVar101 < 1) {
      uVar80 = iVar98 << (-0x40000000 < iVar101);
      if (iVar101 < -0x3fffffff) {
        iVar99 = iVar97 + 1;
      }
    }
    else {
      uVar80 = iVar98 << (iVar101 < 0x40000000);
      if (0x3fffffff < iVar101) {
        iVar99 = iVar97 + 1;
      }
    }
  }
  uVar85 = uVar80 & 0xffff | iVar99 << 0x10;
  param_1[0x3a] = uVar85;
  uVar79 = (uint)((int)(short)param_1[0x3b] * (int)sVar113) >> 0xf;
  iVar93 = iVar93 + (param_1[0x3b] >> 0x10);
  iVar98 = uVar79 * 0x10000;
  iVar97 = iVar93 + 0xf;
  if (iVar98 < 1) {
    if (-0x40000000 < iVar98) {
      uVar79 = iVar98 >> 0xf;
      goto LAB_0011906c;
    }
  }
  else if (iVar98 < 0x40000000) {
    uVar79 = (uVar79 & 0xffff) << 1;
LAB_0011906c:
    iVar97 = iVar93 + 0xe;
  }
  uVar86 = iVar96 * uVar86 >> 0xf;
  iVar96 = uVar84 + (uVar67 >> 0x10);
  iVar98 = uVar86 * 0x10000;
  iVar93 = iVar96 + 0xf;
  if (iVar98 < 1) {
    if (-0x40000000 < iVar98) {
      uVar86 = iVar98 >> 0xf;
      goto LAB_001190b0;
    }
  }
  else if (iVar98 < 0x40000000) {
    uVar86 = (uVar86 & 0xffff) << 1;
LAB_001190b0:
    iVar93 = iVar96 + 0xe;
  }
  uVar84 = uVar86;
  iVar96 = iVar93;
  if (((uVar79 & 0xffff) != 0) && (uVar84 = uVar79, iVar96 = iVar97, (uVar86 & 0xffff) != 0)) {
    iVar101 = (int)(short)iVar97;
    iVar103 = (int)(short)iVar93;
    iVar98 = iVar101 - iVar103;
    iVar96 = uVar86 << 0x10;
    iVar108 = uVar79 << 0x10;
    if (iVar98 == 0 || iVar101 < iVar103) {
      iVar98 = iVar103 - iVar101;
      iVar97 = iVar93;
      iVar108 = iVar96;
      iVar96 = uVar79 << 0x10;
    }
    uVar86 = 0xf;
    if (iVar98 < 0xf) {
      uVar86 = iVar98 + 1;
    }
    iVar93 = ((iVar96 >> 0x10) >> (uVar86 & 0x1f)) + (iVar108 >> 0x11);
    iVar98 = iVar93 * 0x10000;
    iVar96 = iVar97;
    if (iVar98 < 1) {
      uVar84 = iVar93 << (-0x40000000 < iVar98);
      if (iVar98 < -0x3fffffff) {
        iVar96 = iVar97 + 1;
      }
    }
    else {
      uVar84 = iVar93 << (iVar98 < 0x40000000);
      if (0x3fffffff < iVar98) {
        iVar96 = iVar97 + 1;
      }
    }
  }
  uVar86 = uVar84 & 0xffff | iVar96 << 0x10;
  param_1[0x3b] = uVar86;
  if ((uVar84 & 0xffff) == 0) {
LAB_001191d0:
    uVar86 = 0xfff24000;
    param_1[0x3b] = 0xfff24000;
  }
  else {
    iVar93 = (int)(short)iVar96;
    if ((int)uVar86 < -0xd0000) {
      uVar67 = 0xf;
      if (-0xe - iVar93 < 0xf) {
        uVar67 = -iVar93 - 0xd;
      }
      if ((int)(short)uVar84 >> (uVar67 & 0x1f) < 0x2000) goto LAB_001191d0;
    }
    else {
      uVar67 = 0;
      if ((int)uVar86 < 0x10000) {
        uVar67 = 0x4000 >> (ulong)(iVar93 + 0xfU & 0x1f);
      }
      if ((int)(uVar84 << 0x10) >> 0x11 < (int)uVar67) goto LAB_001191d0;
    }
  }
  iVar98 = (int)(short)uVar86;
  uVar84 = (uint)(iVar98 * 0x51ec) >> 0xf;
  uVar67 = uVar86 >> 0x10;
  iVar93 = uVar84 * 0x10000;
  iVar96 = uVar86 * 0x10000;
  iVar97 = uVar67 - 7;
  sVar130 = (short)iVar97;
  uVar79 = uVar84;
  if (iVar93 < 1) {
    uVar92 = iVar93 >> 0xf;
    if (-0x40000000 < iVar93) goto LAB_00119238;
  }
  else if (iVar93 < 0x40000000) {
    uVar92 = (uVar84 & 0xffff) << 1;
LAB_00119238:
    sVar130 = (short)(uVar86 >> 0x10) + -8;
    uVar79 = uVar92;
  }
  uVar92 = uVar79 * 0x10000;
  if ((uVar80 & 0xffff) == 0) {
    if (0 < (int)uVar92) goto LAB_0011927c;
  }
  else if (uVar92 == 0) {
    if ((int)(uVar80 << 0x10) < 0) goto LAB_0011927c;
  }
  else {
    iVar101 = (int)(short)iVar99;
    iVar103 = (int)sVar130;
    iVar99 = iVar101 - iVar103;
    if (iVar99 == 0 || iVar101 < iVar103) {
      uVar79 = 0xf;
      if (iVar103 - iVar101 < 0xf) {
        uVar79 = (iVar103 - iVar101) + 1;
      }
      if ((int)(short)uVar80 >> (uVar79 & 0x1f) < (int)uVar92 >> 0x11) goto LAB_0011927c;
    }
    else {
      uVar95 = 0xf;
      if (iVar99 < 0xf) {
        uVar95 = iVar99 + 1;
      }
      if ((int)(uVar80 << 0x10) >> 0x11 < (int)(short)uVar79 >> (uVar95 & 0x1f)) {
LAB_0011927c:
        if (iVar93 < 1) {
          uVar80 = iVar93 >> 0xf;
          if (-0x40000000 < iVar93) goto LAB_001192e4;
        }
        else if (iVar93 < 0x40000000) {
          uVar80 = (uVar84 & 0xffff) << 1;
LAB_001192e4:
          uVar84 = uVar80;
          iVar97 = uVar67 - 8;
        }
        uVar85 = uVar84 & 0xffff | iVar97 << 0x10;
        param_1[0x3a] = uVar85;
      }
    }
  }
  iVar93 = uVar85 * 0x10000;
  if (iVar96 == 0) {
    if (0 < iVar93) goto LAB_00119370;
LAB_00119380:
    uVar92 = fprintf((FILE *)0x14d168,"warning: %s %d\n","Attempted to divide by");
    uVar86 = 0xfff20000;
    uVar80 = 0x4000;
  }
  else {
    if (iVar93 == 0) {
      if (iVar96 < 0) goto LAB_00119370;
    }
    else {
      iVar97 = (int)uVar86 >> 0x10;
      iVar99 = (int)uVar85 >> 0x10;
      iVar101 = iVar97 - iVar99;
      if (iVar101 == 0 || iVar97 < iVar99) {
        uVar80 = 0xf;
        if (iVar99 - iVar97 < 0xf) {
          uVar80 = (iVar99 - iVar97) + 1;
        }
        if (iVar98 >> (uVar80 & 0x1f) < iVar93 >> 0x11) goto LAB_00119370;
      }
      else {
        uVar80 = 0xf;
        if (iVar101 < 0xf) {
          uVar80 = iVar101 + 1;
        }
        if (iVar96 >> 0x11 < (int)(short)uVar85 >> (uVar80 & 0x1f)) {
LAB_00119370:
          param_1[0x3a] = uVar86;
          uVar85 = uVar86;
        }
      }
    }
    if (iVar96 < 0x10000) goto LAB_00119380;
    uVar80 = -(uVar85 >> 0xf & 1);
    uVar80 = (int)(short)uVar85 + uVar80 ^ uVar80;
    if ((short)uVar80 < iVar98) {
      iVar93 = 0;
    }
    else {
      iVar93 = 0;
      do {
        uVar80 = (int)(uVar80 << 0x10) >> 0x11;
        iVar93 = iVar93 + 1;
      } while (iVar98 <= (int)uVar80);
    }
    uVar80 = 0;
    if (iVar98 != 0) {
      uVar80 = ((int)(short)uVar85 << (ulong)(0xfU - iVar93 & 0x1f)) / iVar98;
    }
    uVar86 = ((0xfff1 - uVar67) + (uVar85 >> 0x10) + iVar93) * 0x10000;
    uVar80 = uVar80 & 0xffff;
  }
  iVar93 = (uVar86 | uVar80) + 0xe0000;
  uVar80 = iVar93 >> 0x10;
  if (iVar93 < 0) {
    iVar93 = (int)(short)iVar93 + (1 << (ulong)(~uVar80 & 0x1f)) >> (-uVar80 & 0x1f);
  }
  else {
    iVar93 = (int)(short)iVar93 << (ulong)(uVar80 & 0x1f);
  }
  sVar130 = 0x7fff;
  if ((short)iVar93 < 0x4000) {
    sVar130 = (short)(iVar93 << 1);
  }
  uVar80 = -uVar59;
  if (-1 < (int)uVar59) {
    uVar80 = uVar59;
  }
  *(short *)(param_1 + 0xd) = sVar130;
  if (uVar80 == 0) {
    uVar86 = 0;
    sVar113 = 0;
  }
  else {
    uVar84 = uVar80 >> 0x10;
    uVar86 = uVar84;
    if (uVar84 == 0) {
      uVar86 = uVar80;
    }
    uVar43 = (ushort)(uVar84 != 0);
    uVar2 = uVar43 << 4 | 8;
    uVar84 = uVar86 >> 8;
    if (uVar86 < 0x100) {
      uVar2 = uVar43 << 4;
      uVar84 = uVar86;
    }
    uVar43 = uVar2 | 4;
    uVar86 = uVar84 >> 4;
    if (uVar84 < 0x10) {
      uVar43 = uVar2;
      uVar86 = uVar84;
    }
    uVar2 = uVar43 | 2;
    uVar84 = uVar86 >> 2;
    if (uVar86 < 4) {
      uVar2 = uVar43;
      uVar84 = uVar86;
    }
    if (1 < uVar84) {
      uVar2 = uVar2 + 1;
    }
    uVar84 = (uint)(short)uVar2;
    uVar86 = uVar84 - 0xe;
    sVar114 = (short)(uVar80 >> (ulong)(uVar86 & 0x1f));
    if (uVar86 == 0 || uVar84 < 0xe) {
      sVar114 = (short)(uVar80 << (ulong)(0xe - uVar84 & 0x1f));
    }
    sVar113 = -sVar114;
    if (-1 < (int)uVar59) {
      sVar113 = sVar114;
    }
    uVar86 = uVar86 * 0x10000;
  }
  uVar84 = (uint)((int)sVar113 * (int)sVar113) >> 0xf;
  iVar93 = uVar84 * 0x10000;
  uVar80 = (uVar86 >> 0xf) + 0xf;
  if (iVar93 < 1) {
    if (-0x40000000 < iVar93) {
      uVar84 = iVar93 >> 0xf;
      goto LAB_0011954c;
    }
  }
  else if (iVar93 < 0x40000000) {
    uVar84 = uVar84 << 1;
LAB_0011954c:
    uVar80 = (uVar86 >> 0xf) + 0xe;
  }
  uVar86 = ~local_a4;
  if (-2 < (int)local_a4) {
    uVar86 = local_a4 + 1;
  }
  if (uVar86 == 0) {
    uVar65 = 0;
LAB_00119620:
    uVar92 = fprintf((FILE *)0x14d168,"warning: %s %d\n","Attempted to divide by",uVar65);
    iVar93 = -0xe0000;
    uVar86 = 0x4000;
  }
  else {
    uVar67 = uVar86 >> 0x10;
    uVar59 = uVar67;
    if (uVar67 == 0) {
      uVar59 = uVar86;
    }
    uVar43 = (ushort)(uVar67 != 0);
    uVar2 = uVar43 << 4 | 8;
    uVar67 = uVar59 >> 8;
    if (uVar59 < 0x100) {
      uVar2 = uVar43 << 4;
      uVar67 = uVar59;
    }
    uVar43 = uVar2 | 4;
    uVar59 = uVar67 >> 4;
    if (uVar67 < 0x10) {
      uVar43 = uVar2;
      uVar59 = uVar67;
    }
    uVar2 = uVar43 | 2;
    uVar67 = uVar59 >> 2;
    if (uVar59 < 4) {
      uVar2 = uVar43;
      uVar67 = uVar59;
    }
    if (1 < uVar67) {
      uVar2 = uVar2 + 1;
    }
    uVar79 = (uint)(short)uVar2;
    uVar67 = uVar79 - 0xe;
    uVar59 = uVar86 >> (ulong)(uVar67 & 0x1f);
    if (uVar67 == 0 || uVar79 < 0xe) {
      uVar59 = uVar86 << (ulong)(0xe - uVar79 & 0x1f);
    }
    uVar86 = -uVar59;
    if (-2 < (int)local_a4) {
      uVar86 = uVar59;
    }
    uVar59 = (uint)(short)uVar86;
    uVar65 = (ulong)uVar59;
    if ((int)(uVar86 * 0x10000) < 0x10000) goto LAB_00119620;
    uVar86 = -(uVar84 >> 0xf & 1);
    uVar86 = (int)(short)uVar84 + uVar86 ^ uVar86;
    iVar93 = 0;
    uVar79 = (int)(short)uVar86;
    while ((int)uVar59 <= (int)uVar79) {
      iVar93 = iVar93 + 1;
      uVar86 = (int)(uVar86 << 0x10) >> 0x11;
      uVar79 = uVar86;
    }
    uVar86 = 0;
    if (uVar59 != 0) {
      uVar86 = ((int)(short)uVar84 << (ulong)(0xfU - iVar93 & 0x1f)) / (int)uVar59;
    }
    iVar93 = ((((uVar80 & 0xffff) + 0xfff1) - uVar67) + iVar93) * 0x10000;
    uVar86 = uVar86 & 0xffff;
  }
  uVar65 = (ulong)uVar92;
  uVar80 = -uVar90;
  if (-1 < (int)uVar90) {
    uVar80 = uVar90;
  }
  uVar59 = iVar93 >> 0x10;
  uVar84 = uVar90;
  if (uVar80 == 0) {
LAB_00119778:
    if ((int)(uVar86 * 0x10000) < 1) {
LAB_001198d8:
      iVar96 = (int)(short)uVar86;
      uVar84 = (iVar91 * sVar130 + ((int)(uVar50 * (int)sVar130) >> 0xf)) * 3 + ((int)uVar30 >> 0xd)
      ;
      if (iVar93 < 0) {
        iVar97 = (1 << (ulong)(~uVar59 & 0x1f)) + iVar96 >> (-uVar59 & 0x1f);
      }
      else {
        iVar97 = iVar96 << (ulong)(uVar59 & 0x1f);
      }
      if ((int)uVar84 < iVar97) {
        if (iVar93 < 0) {
          uVar84 = (1 << (ulong)(~uVar59 & 0x1f)) + iVar96 >> (-uVar59 & 0x1f);
        }
        else {
          uVar84 = iVar96 << (ulong)(uVar59 & 0x1f);
        }
      }
    }
  }
  else {
    uVar79 = uVar80 >> 0x10;
    uVar67 = uVar79;
    if (uVar79 == 0) {
      uVar67 = uVar80;
    }
    uVar43 = (ushort)(uVar79 != 0);
    uVar2 = uVar43 << 4 | 8;
    uVar79 = uVar67 >> 8;
    if (uVar67 < 0x100) {
      uVar2 = uVar43 << 4;
      uVar79 = uVar67;
    }
    uVar43 = uVar2 | 4;
    uVar67 = uVar79 >> 4;
    if (uVar79 < 0x10) {
      uVar43 = uVar2;
      uVar67 = uVar79;
    }
    uVar2 = uVar43 | 2;
    uVar79 = uVar67 >> 2;
    if (uVar67 < 4) {
      uVar2 = uVar43;
      uVar79 = uVar67;
    }
    if (1 < uVar79) {
      uVar2 = uVar2 + 1;
    }
    uVar85 = (uint)(short)uVar2;
    uVar79 = uVar85 - 0xe;
    uVar67 = uVar80 >> (ulong)(uVar79 & 0x1f);
    if (uVar79 == 0 || uVar85 < 0xe) {
      uVar67 = uVar80 << (ulong)(0xe - uVar85 & 0x1f);
    }
    uVar80 = -uVar67;
    if (-1 < (int)uVar90) {
      uVar80 = uVar67;
    }
    if ((uVar80 & 0xffff) == 0) goto LAB_00119778;
    if (uVar86 != 0) {
      iVar96 = (int)(uVar79 * 0x10000) >> 0x10;
      iVar97 = iVar96 - uVar59;
      if (iVar97 == 0 || iVar96 < (int)uVar59) {
        uVar67 = 0xf;
        if ((int)(uVar59 - iVar96) < 0xf) {
          uVar67 = (uVar59 - iVar96) + 1;
        }
        if ((int)(uVar86 << 0x10) >> 0x11 <= (int)(short)uVar80 >> (uVar67 & 0x1f))
        goto LAB_001198d8;
        goto LAB_00119afc;
      }
      uVar67 = 0xf;
      if (iVar97 < 0xf) {
        uVar67 = iVar97 + 1;
      }
      if ((int)(uVar80 << 0x10) >> 0x11 < (int)(short)uVar86 >> (uVar67 & 0x1f)) goto LAB_00119afc;
      goto LAB_001198d8;
    }
    if (-1 < (int)(uVar80 << 0x10)) goto LAB_001198d8;
  }
LAB_00119afc:
  uVar80 = (int)uVar90 >> 1;
  if ((int)uVar84 <= (int)uVar90 >> 1) {
    uVar80 = uVar84;
  }
  if (uVar80 == 0) {
    uVar86 = 0;
    uVar80 = 0;
  }
  else {
    if ((int)uVar90 < 0x8000) {
      uVar86 = 0;
      uVar84 = uVar90;
    }
    else {
      uVar84 = uVar90 >> 0x10;
      uVar86 = uVar84;
      if (uVar84 == 0) {
        uVar86 = uVar90;
      }
      uVar43 = (ushort)(uVar84 != 0);
      uVar2 = uVar43 << 4 | 8;
      uVar84 = uVar86 >> 8;
      if (uVar86 < 0x100) {
        uVar2 = uVar43 << 4;
        uVar84 = uVar86;
      }
      uVar43 = uVar2 | 4;
      uVar86 = uVar84 >> 4;
      if (uVar84 < 0x10) {
        uVar43 = uVar2;
        uVar86 = uVar84;
      }
      uVar2 = uVar43 | 2;
      uVar84 = uVar86 >> 2;
      if (uVar86 < 4) {
        uVar2 = uVar43;
        uVar84 = uVar86;
      }
      if (1 < uVar84) {
        uVar2 = uVar2 + 1;
      }
      uVar59 = (uint)(short)uVar2;
      uVar86 = 0xe - uVar59;
      uVar84 = uVar90 >> (ulong)(uVar59 - 0xe & 0x1f);
      if (uVar59 - 0xe == 0 || uVar59 < 0xe) {
        uVar84 = uVar90 << (ulong)(uVar86 & 0x1f);
      }
    }
    uVar59 = -uVar80;
    if (-1 < (int)uVar80) {
      uVar59 = uVar80;
    }
    bVar6 = uVar59 >> 0x10 != 0;
    uVar67 = uVar59 >> 0x10;
    if (!bVar6) {
      uVar67 = uVar59;
    }
    uVar59 = uVar67 >> 8;
    if (uVar67 < 0x100) {
      uVar59 = uVar67;
    }
    uVar2 = (ushort)bVar6 << 4 | 8;
    if (uVar67 < 0x100) {
      uVar2 = (ushort)bVar6 << 4;
    }
    uVar67 = uVar59 >> 4;
    if (uVar59 < 0x10) {
      uVar67 = uVar59;
    }
    uVar43 = uVar2 | 4;
    if (uVar59 < 0x10) {
      uVar43 = uVar2;
    }
    uVar79 = uVar84 - 1;
    uVar59 = uVar67 >> 2;
    if (uVar67 < 4) {
      uVar59 = uVar67;
    }
    uVar2 = uVar43 | 2;
    if (uVar67 < 4) {
      uVar2 = uVar43;
    }
    if (1 < uVar59) {
      uVar2 = uVar2 + 1;
    }
    bVar6 = uVar79 >> 0x10 != 0;
    uVar59 = uVar79 >> 0x10;
    if (!bVar6) {
      uVar59 = uVar79;
    }
    uVar67 = uVar59 >> 8;
    if (uVar59 < 0x100) {
      uVar67 = uVar59;
    }
    uVar43 = (ushort)bVar6 << 4 | 8;
    if (uVar59 < 0x100) {
      uVar43 = (ushort)bVar6 << 4;
    }
    uVar59 = uVar67 >> 4;
    if (uVar67 < 0x10) {
      uVar59 = uVar67;
    }
    uVar25 = uVar43 | 4;
    if (uVar67 < 0x10) {
      uVar25 = uVar43;
    }
    uVar67 = uVar59 >> 2;
    if (uVar59 < 4) {
      uVar67 = uVar59;
    }
    uVar43 = uVar25 | 2;
    if (uVar59 < 4) {
      uVar43 = uVar25;
    }
    if (1 < uVar67) {
      uVar43 = uVar43 + 1;
    }
    iVar96 = (int)(short)uVar2 - (int)(short)uVar43;
    uVar59 = iVar96 - 0xf;
    iVar93 = (int)uVar80 >> (uVar59 & 0x1f);
    if (uVar59 == 0 || iVar96 < 0xf) {
      iVar93 = uVar80 << (ulong)(0xfU - iVar96 & 0x1f);
    }
    iVar97 = -iVar93;
    if (-1 < iVar93) {
      iVar97 = iVar93;
    }
    if ((int)(uVar79 * 0x8000) <= iVar97) {
      uVar59 = iVar96 + 0xfff2;
    }
    uVar80 = 0;
    if ((short)uVar84 != 0) {
      uVar80 = (iVar93 >> ((int)(uVar79 * 0x8000) <= iVar97)) / (int)(short)uVar84;
    }
    uVar86 = (uVar59 + uVar86) * 0x10000;
    uVar80 = uVar80 & 0xffff;
  }
  iVar93 = (uVar86 | uVar80) + 0xf0000;
  uVar80 = iVar93 >> 0x10;
  if (iVar93 < 0) {
    sVar130 = (short)((int)(short)iVar93 + (1 << (ulong)(~uVar80 & 0x1f)) >> (-uVar80 & 0x1f));
    if (param_1[4] == 0) goto LAB_0011a00c;
LAB_00119cdc:
    uVar80 = *param_1;
joined_r0x00119ce0:
    if ((int)uVar80 < 0) {
      bVar6 = false;
      uVar53 = param_1[4];
      goto joined_r0x0011a058;
    }
    lVar60 = 0;
    do {
      lVar63 = lVar60 * 4;
      uVar84 = *(uint *)(*(long *)(param_1 + 0x30) + lVar63);
      iVar91 = *(int *)(*(long *)(param_1 + 0x28) + lVar63);
      uVar53 = uVar84 << 3 | 1;
      uVar80 = ((int)(*(uint *)(*(long *)(param_1 + 0x32) + lVar63) << 4) >> 0x10) *
               (int)(short)param_1[0xd] +
               ((int)((*(uint *)(*(long *)(param_1 + 0x32) + lVar63) & 0xfff) * 8 *
                     (int)(short)param_1[0xd]) >> 0xf);
      uVar86 = -(uVar84 >> 0x1c & 1) & 0x80000000 | (uVar84 & 0x1fffffff) << 2;
      if ((int)uVar80 <= (int)uVar86) {
        uVar86 = uVar80;
      }
      uVar84 = ((int)(uVar84 << 4) >> 0x10) * (int)sVar130 +
               ((int)((uVar84 << 3 & 0x7fff | 1) * (int)sVar130) >> 0xf);
      uVar80 = iVar91 + 10;
      uVar86 = ((int)(uVar86 << 1) >> 0x10) * 0x599a + ((uVar86 & 0x7fff) * 0x599a >> 0xf) +
               ((uVar84 & 0x7fff) * 0x2666 >> 0xf) + ((int)(uVar84 * 2) >> 0x10) * 0x2666;
      if (uVar80 == 0) {
        uVar80 = 0;
        sVar109 = 0;
        if (uVar86 == 0) goto LAB_00119fc8;
LAB_00119eac:
        uVar53 = -uVar86;
        if (-1 < (int)uVar86) {
          uVar53 = uVar86;
        }
        uVar30 = uVar53 >> 0x10;
        uVar84 = uVar30;
        if (uVar30 == 0) {
          uVar84 = uVar53;
        }
        uVar43 = (ushort)(uVar30 != 0);
        uVar2 = uVar43 << 4 | 8;
        uVar53 = uVar84 >> 8;
        if (uVar84 < 0x100) {
          uVar2 = uVar43 << 4;
          uVar53 = uVar84;
        }
        uVar84 = uVar53 >> 4;
        if (uVar53 < 0x10) {
          uVar84 = uVar53;
        }
        iVar91 = (int)sVar109;
        uVar43 = uVar2 | 4;
        if (uVar53 < 0x10) {
          uVar43 = uVar2;
        }
        uVar30 = iVar91 - 1;
        uVar53 = uVar84 >> 2;
        if (uVar84 < 4) {
          uVar53 = uVar84;
        }
        uVar59 = uVar30 >> 0x10;
        uVar2 = uVar43 | 2;
        if (uVar84 < 4) {
          uVar2 = uVar43;
        }
        if (1 < uVar53) {
          uVar2 = uVar2 + 1;
        }
        uVar53 = uVar59;
        if (uVar59 == 0) {
          uVar53 = uVar30;
        }
        uVar25 = (ushort)(uVar59 != 0);
        uVar43 = uVar25 << 4 | 8;
        uVar84 = uVar53 >> 8;
        if (uVar53 < 0x100) {
          uVar43 = uVar25 << 4;
          uVar84 = uVar53;
        }
        uVar25 = uVar43 | 4;
        uVar53 = uVar84 >> 4;
        if (uVar84 < 0x10) {
          uVar25 = uVar43;
          uVar53 = uVar84;
        }
        uVar43 = uVar25 | 2;
        uVar84 = uVar53 >> 2;
        if (uVar53 < 4) {
          uVar43 = uVar25;
          uVar84 = uVar53;
        }
        if (1 < uVar84) {
          uVar43 = uVar43 + 1;
        }
        iVar96 = (int)(short)uVar2 - (int)(short)uVar43;
        uVar53 = iVar96 - 0xf;
        iVar93 = (int)uVar86 >> (uVar53 & 0x1f);
        if (uVar53 == 0 || iVar96 < 0xf) {
          iVar93 = uVar86 << (ulong)(0xfU - iVar96 & 0x1f);
        }
        iVar97 = -iVar93;
        if (-1 < iVar93) {
          iVar97 = iVar93;
        }
        if ((int)(uVar30 * 0x8000) <= iVar97) {
          uVar53 = iVar96 + 0xfff2;
        }
        uVar84 = 0;
        if (iVar91 != 0) {
          uVar84 = (iVar93 >> ((int)(uVar30 * 0x8000) <= iVar97)) / iVar91;
        }
        uVar86 = (uVar53 - uVar80) * 0x10000;
        uVar65 = (ulong)(uVar84 & 0xffff);
      }
      else {
        uVar84 = -uVar53;
        if (-1 < (int)uVar53) {
          uVar84 = uVar53;
        }
        bVar6 = uVar84 >> 0x10 != 0;
        uVar30 = uVar84 >> 0x10;
        if (!bVar6) {
          uVar30 = uVar84;
        }
        uVar84 = uVar30 >> 8;
        if (uVar30 < 0x100) {
          uVar84 = uVar30;
        }
        uVar59 = (uint)bVar6 << 4 | 8;
        if (uVar30 < 0x100) {
          uVar59 = (uint)bVar6 << 4;
        }
        uVar30 = uVar84 >> 4;
        if (uVar84 < 0x10) {
          uVar30 = uVar84;
        }
        uVar90 = uVar59 | 4;
        if (uVar84 < 0x10) {
          uVar90 = uVar59;
        }
        uVar84 = uVar30 >> 2;
        if (uVar30 < 4) {
          uVar84 = uVar30;
        }
        uVar59 = uVar90 | 2;
        if (uVar30 < 4) {
          uVar59 = uVar90;
        }
        if (1 < uVar84) {
          uVar59 = uVar59 + 1;
        }
        uVar84 = (uint)(short)uVar59;
        sVar109 = (short)((int)uVar53 >> (uVar84 - 0xe & 0x1f));
        if (uVar84 - 0xe == 0 || uVar84 < 0xe) {
          sVar109 = (short)(uVar53 << (ulong)(0xe - uVar84 & 0x1f));
        }
        uVar53 = -iVar91 - 10;
        if (-0xb < iVar91) {
          uVar53 = uVar80;
        }
        uVar30 = uVar53 >> 0x10;
        uVar84 = uVar30;
        if (uVar30 == 0) {
          uVar84 = uVar53;
        }
        uVar90 = (uint)(uVar30 != 0);
        uVar53 = uVar90 << 4 | 8;
        uVar30 = uVar84 >> 8;
        if (uVar84 < 0x100) {
          uVar53 = uVar90 << 4;
          uVar30 = uVar84;
        }
        uVar84 = uVar53 | 4;
        uVar90 = uVar30 >> 4;
        if (uVar30 < 0x10) {
          uVar84 = uVar53;
          uVar90 = uVar30;
        }
        uVar53 = uVar84 | 2;
        uVar30 = uVar90 >> 2;
        if (uVar90 < 4) {
          uVar53 = uVar84;
          uVar30 = uVar90;
        }
        if (1 < uVar30) {
          uVar53 = uVar53 + 1;
        }
        uVar84 = (uint)(short)uVar53;
        sVar113 = (short)((int)uVar80 >> (uVar84 - 0xe & 0x1f));
        if (uVar84 - 0xe == 0 || uVar84 < 0xe) {
          sVar113 = (short)(uVar80 << (ulong)(0xe - uVar84 & 0x1f));
        }
        uVar80 = uVar59 + uVar53 + 0xfff3 & 0xffff;
        sVar109 = (short)((uint)((int)sVar113 * (int)sVar109) >> 0xf);
        if (uVar86 != 0) goto LAB_00119eac;
LAB_00119fc8:
        uVar65 = 0;
      }
      *(uint *)(*(long *)(param_1 + 0x2a) + lVar60 * 4) = (uVar86 | (uint)uVar65) + 0x1b0000;
      uVar88 = (ulong)(int)*param_1;
      bVar6 = lVar60 < (long)uVar88;
      lVar60 = lVar60 + 1;
    } while (bVar6);
  }
  else {
    sVar130 = (short)((int)(short)iVar93 << (ulong)(uVar80 & 0x1f));
    if (param_1[4] != 0) goto LAB_00119cdc;
LAB_0011a00c:
    if (((int)(uVar53 * 0x8000) < (int)param_1[0xc]) &&
       ((int)(iVar91 * 0x3d7 + (uVar50 * 0x3d7 >> 0xf)) <
        iVar91 * (short)param_1[0xd] + ((int)(uVar50 * (int)(short)param_1[0xd]) >> 0xf))) {
      param_1[4] = 1;
      uVar80 = *param_1;
      goto joined_r0x00119ce0;
    }
    if (sVar109 * 1000 >> 6 < (int)uVar30) {
      uVar80 = uVar30 >> 2 & 0x1fff | ((int)(uVar30 << 1) >> 0x10) << 0xd;
      uVar53 = (int)uVar90 >> 2;
      if ((int)uVar80 <= (int)uVar90 >> 2) {
        uVar53 = uVar80;
      }
      if (uVar53 == 0) {
        uVar53 = 0;
        uVar80 = 0;
      }
      else {
        if ((int)uVar90 < 0x8000) {
          uVar86 = 0;
          uVar84 = uVar90;
        }
        else {
          uVar86 = uVar90 >> 0x10;
          uVar80 = uVar86;
          if (uVar86 == 0) {
            uVar80 = uVar90;
          }
          uVar43 = (ushort)(uVar86 != 0);
          uVar2 = uVar43 << 4 | 8;
          uVar86 = uVar80 >> 8;
          if (uVar80 < 0x100) {
            uVar2 = uVar43 << 4;
            uVar86 = uVar80;
          }
          uVar43 = uVar2 | 4;
          uVar80 = uVar86 >> 4;
          if (uVar86 < 0x10) {
            uVar43 = uVar2;
            uVar80 = uVar86;
          }
          uVar2 = uVar43 | 2;
          uVar86 = uVar80 >> 2;
          if (uVar80 < 4) {
            uVar2 = uVar43;
            uVar86 = uVar80;
          }
          if (1 < uVar86) {
            uVar2 = uVar2 + 1;
          }
          uVar80 = (uint)(short)uVar2;
          uVar86 = 0xe - uVar80;
          uVar84 = uVar90 >> (ulong)(uVar80 - 0xe & 0x1f);
          if (uVar80 - 0xe == 0 || uVar80 < 0xe) {
            uVar84 = uVar90 << (ulong)(uVar86 & 0x1f);
          }
        }
        uVar80 = -uVar53;
        if (-1 < (int)uVar53) {
          uVar80 = uVar53;
        }
        bVar6 = uVar80 >> 0x10 != 0;
        uVar30 = uVar80 >> 0x10;
        if (!bVar6) {
          uVar30 = uVar80;
        }
        uVar80 = uVar30 >> 8;
        if (uVar30 < 0x100) {
          uVar80 = uVar30;
        }
        uVar2 = (ushort)bVar6 << 4 | 8;
        if (uVar30 < 0x100) {
          uVar2 = (ushort)bVar6 << 4;
        }
        uVar30 = uVar80 >> 4;
        if (uVar80 < 0x10) {
          uVar30 = uVar80;
        }
        uVar43 = uVar2 | 4;
        if (uVar80 < 0x10) {
          uVar43 = uVar2;
        }
        uVar59 = uVar84 - 1;
        uVar80 = uVar30 >> 2;
        if (uVar30 < 4) {
          uVar80 = uVar30;
        }
        uVar2 = uVar43 | 2;
        if (uVar30 < 4) {
          uVar2 = uVar43;
        }
        if (1 < uVar80) {
          uVar2 = uVar2 + 1;
        }
        bVar6 = uVar59 >> 0x10 != 0;
        uVar80 = uVar59 >> 0x10;
        if (!bVar6) {
          uVar80 = uVar59;
        }
        uVar30 = uVar80 >> 8;
        if (uVar80 < 0x100) {
          uVar30 = uVar80;
        }
        uVar43 = (ushort)bVar6 << 4 | 8;
        if (uVar80 < 0x100) {
          uVar43 = (ushort)bVar6 << 4;
        }
        uVar80 = uVar30 >> 4;
        if (uVar30 < 0x10) {
          uVar80 = uVar30;
        }
        uVar25 = uVar43 | 4;
        if (uVar30 < 0x10) {
          uVar25 = uVar43;
        }
        uVar30 = uVar80 >> 2;
        if (uVar80 < 4) {
          uVar30 = uVar80;
        }
        uVar43 = uVar25 | 2;
        if (uVar80 < 4) {
          uVar43 = uVar25;
        }
        if (1 < uVar30) {
          uVar43 = uVar43 + 1;
        }
        iVar93 = (int)(short)uVar2 - (int)(short)uVar43;
        uVar30 = iVar93 - 0xf;
        iVar91 = (int)uVar53 >> (uVar30 & 0x1f);
        if (uVar30 == 0 || iVar93 < 0xf) {
          iVar91 = uVar53 << (ulong)(0xfU - iVar93 & 0x1f);
        }
        iVar96 = -iVar91;
        if (-1 < iVar91) {
          iVar96 = iVar91;
        }
        if ((int)(uVar59 * 0x8000) <= iVar96) {
          uVar30 = iVar93 + 0xfff2;
        }
        uVar80 = 0;
        if ((short)uVar84 != 0) {
          uVar80 = (iVar91 >> ((int)(uVar59 * 0x8000) <= iVar96)) / (int)(short)uVar84;
        }
        uVar53 = (uVar30 + uVar86) * 0x10000;
        uVar80 = uVar80 & 0xffff;
      }
      iVar91 = (uVar53 | uVar80) + 0xf0000;
      uVar80 = iVar91 >> 0x10;
      if (iVar91 < 0) {
        sVar109 = (short)((int)(short)iVar91 + (1 << (ulong)(~uVar80 & 0x1f)) >> (-uVar80 & 0x1f));
      }
      else {
        sVar109 = (short)((int)(short)iVar91 << (ulong)(uVar80 & 0x1f));
      }
      uVar53 = (uint)sVar109;
      uVar80 = *param_1;
    }
    else {
      uVar53 = 0;
      uVar80 = *param_1;
    }
    uVar88 = (ulong)uVar80;
    if (-1 < (int)uVar80) {
      uVar80 = -uVar53;
      if (-1 < (int)uVar53) {
        uVar80 = uVar53;
      }
      bVar6 = uVar80 >> 0x10 != 0;
      uVar86 = uVar80 >> 0x10;
      if (!bVar6) {
        uVar86 = uVar80;
      }
      uVar80 = uVar86 >> 8;
      if (uVar86 < 0x100) {
        uVar80 = uVar86;
      }
      uVar2 = (ushort)bVar6 << 4 | 8;
      if (uVar86 < 0x100) {
        uVar2 = (ushort)bVar6 << 4;
      }
      uVar86 = uVar80 >> 4;
      if (uVar80 < 0x10) {
        uVar86 = uVar80;
      }
      uVar43 = uVar2 | 4;
      if (uVar80 < 0x10) {
        uVar43 = uVar2;
      }
      uVar80 = uVar86 >> 2;
      if (uVar86 < 4) {
        uVar80 = uVar86;
      }
      uVar2 = uVar43 | 2;
      if (uVar86 < 4) {
        uVar2 = uVar43;
      }
      if (1 < uVar80) {
        uVar2 = uVar2 + 1;
      }
      lVar60 = 0;
      do {
        if (uVar53 == 0) {
          uVar80 = 0;
          uVar86 = 0;
        }
        else {
          iVar91 = *(int *)(*(long *)(param_1 + 0x28) + lVar60 * 4);
          uVar80 = iVar91 + 10;
          if (iVar91 < 0x7ff6) {
            uVar86 = 0;
            uVar84 = uVar80;
          }
          else {
            uVar84 = uVar80 >> 0x10;
            uVar86 = uVar84;
            if (uVar84 == 0) {
              uVar86 = uVar80;
            }
            uVar25 = (ushort)(uVar84 != 0);
            uVar43 = uVar25 << 4 | 8;
            uVar84 = uVar86 >> 8;
            if (uVar86 < 0x100) {
              uVar43 = uVar25 << 4;
              uVar84 = uVar86;
            }
            uVar25 = uVar43 | 4;
            uVar86 = uVar84 >> 4;
            if (uVar84 < 0x10) {
              uVar25 = uVar43;
              uVar86 = uVar84;
            }
            uVar43 = uVar25 | 2;
            uVar84 = uVar86 >> 2;
            if (uVar86 < 4) {
              uVar43 = uVar25;
              uVar84 = uVar86;
            }
            if (1 < uVar84) {
              uVar43 = uVar43 + 1;
            }
            uVar30 = (uint)(short)uVar43;
            uVar86 = 0xe - uVar30;
            uVar84 = uVar80 >> (ulong)(uVar30 - 0xe & 0x1f);
            if (uVar30 - 0xe == 0 || uVar30 < 0xe) {
              uVar84 = uVar80 << (ulong)(uVar86 & 0x1f);
            }
          }
          uVar59 = uVar84 - 1;
          uVar30 = uVar59 >> 0x10;
          uVar80 = uVar30;
          if (uVar30 == 0) {
            uVar80 = uVar59;
          }
          uVar25 = (ushort)(uVar30 != 0);
          uVar43 = uVar25 << 4 | 8;
          uVar30 = uVar80 >> 8;
          if (uVar80 < 0x100) {
            uVar43 = uVar25 << 4;
            uVar30 = uVar80;
          }
          uVar25 = uVar43 | 4;
          uVar80 = uVar30 >> 4;
          if (uVar30 < 0x10) {
            uVar25 = uVar43;
            uVar80 = uVar30;
          }
          uVar43 = uVar25 | 2;
          uVar30 = uVar80 >> 2;
          if (uVar80 < 4) {
            uVar43 = uVar25;
            uVar30 = uVar80;
          }
          if (1 < uVar30) {
            uVar43 = uVar43 + 1;
          }
          iVar93 = (int)(short)uVar2 - (int)(short)uVar43;
          uVar30 = iVar93 - 0xf;
          iVar91 = (int)uVar53 >> (uVar30 & 0x1f);
          if (uVar30 == 0 || iVar93 < 0xf) {
            iVar91 = uVar53 << (ulong)(0xfU - iVar93 & 0x1f);
          }
          iVar96 = -iVar91;
          if (-1 < iVar91) {
            iVar96 = iVar91;
          }
          if ((int)(uVar59 * 0x8000) <= iVar96) {
            uVar30 = iVar93 + 0xfff2;
          }
          uVar65 = (ulong)uVar30;
          uVar80 = 0;
          if ((short)uVar84 != 0) {
            uVar80 = (iVar91 >> ((int)(uVar59 * 0x8000) <= iVar96)) / (int)(short)uVar84;
          }
          uVar86 = (uVar30 + uVar86) * 0x10000;
          uVar80 = uVar80 & 0xffff;
        }
        *(uint *)(*(long *)(param_1 + 0x2a) + lVar60 * 4) = (uVar86 | uVar80) + 0xc0000;
        uVar88 = (ulong)(int)*param_1;
        bVar6 = lVar60 < (long)uVar88;
        lVar60 = lVar60 + 1;
      } while (bVar6);
    }
    param_1[0xc] = param_1[0xc] + uVar53;
  }
  uVar80 = (uint)uVar88;
  bVar6 = 0 < (int)uVar80;
  if ((int)uVar80 < 1) {
    return uVar65;
  }
  lVar60 = *(long *)(param_1 + 0x18);
  uVar61 = (ulong)(int)uVar80;
  if (uVar80 < 0x10) {
    uVar62 = 0;
LAB_0011a768:
    do {
      *(undefined2 *)(lVar60 + uVar62 * 2) =
           *(undefined2 *)(lVar60 + (long)(int)(uVar80 + (int)uVar62) * 2);
      uVar62 = uVar62 + 1;
    } while ((long)uVar62 < (long)uVar61);
  }
  else {
    uVar62 = 0;
    if (((int)(uVar80 + (int)(uVar61 - 1)) < (int)uVar80) || (uVar61 - 1 >> 0x20 != 0))
    goto LAB_0011a768;
    uVar62 = uVar61 & 0xfffffffffffffff0;
    puVar81 = (undefined8 *)(lVar60 + 0x10);
    uVar54 = uVar62;
    do {
      puVar37 = (undefined8 *)(lVar60 + (long)(int)uVar88 * 2);
      uVar94 = *puVar37;
      uVar104 = puVar37[3];
      uVar100 = puVar37[2];
      uVar54 = uVar54 - 0x10;
      uVar88 = (ulong)((int)uVar88 + 0x10);
      puVar81[-1] = puVar37[1];
      puVar81[-2] = uVar94;
      puVar81[1] = uVar104;
      *puVar81 = uVar100;
      puVar81 = puVar81 + 4;
    } while (uVar54 != 0);
    if (uVar62 != uVar61) goto LAB_0011a768;
  }
  uVar53 = param_1[4];
joined_r0x0011a058:
  if ((uVar53 != 0) && (bVar6)) {
    lVar60 = *(long *)(param_1 + 0x18);
    lVar63 = (long)(int)uVar80;
    uVar88 = (ulong)uVar80;
    uVar61 = 0;
    if (0xf < uVar80) {
      psVar57 = (short *)(lVar60 + lVar63 * 2);
      psVar33 = (short *)(lVar60 + (lVar63 + uVar88) * 2);
      if ((param_2 + uVar88 <= psVar57 || psVar33 <= param_2) &&
         (param_4 + uVar88 <= psVar57 || psVar33 <= param_4)) {
        uVar61 = uVar88 & 0xfffffff0;
        puVar81 = (undefined8 *)(lVar60 + lVar63 * 2 + 0x10);
        psVar57 = param_2 + 8;
        psVar33 = param_4 + 8;
        uVar62 = uVar61;
        do {
          uVar100 = *(undefined8 *)(psVar57 + -4);
          uVar94 = *(undefined8 *)(psVar57 + -8);
          uVar105 = *(undefined8 *)(psVar57 + 4);
          uVar104 = *(undefined8 *)psVar57;
          uVar111 = *(undefined8 *)(psVar33 + -4);
          uVar110 = *(undefined8 *)(psVar33 + -8);
          uVar116 = *(undefined8 *)(psVar33 + 4);
          uVar112 = *(undefined8 *)psVar33;
          psVar57 = psVar57 + 0x10;
          psVar33 = psVar33 + 0x10;
          uVar62 = uVar62 - 0x10;
          puVar81[-1] = CONCAT26((short)((ulong)uVar100 >> 0x30) - (short)((ulong)uVar111 >> 0x30),
                                 CONCAT24((short)((ulong)uVar100 >> 0x20) -
                                          (short)((ulong)uVar111 >> 0x20),
                                          CONCAT22((short)((ulong)uVar100 >> 0x10) -
                                                   (short)((ulong)uVar111 >> 0x10),
                                                   (short)uVar100 - (short)uVar111)));
          puVar81[-2] = CONCAT26((short)((ulong)uVar94 >> 0x30) - (short)((ulong)uVar110 >> 0x30),
                                 CONCAT24((short)((ulong)uVar94 >> 0x20) -
                                          (short)((ulong)uVar110 >> 0x20),
                                          CONCAT22((short)((ulong)uVar94 >> 0x10) -
                                                   (short)((ulong)uVar110 >> 0x10),
                                                   (short)uVar94 - (short)uVar110)));
          puVar81[1] = CONCAT26((short)((ulong)uVar105 >> 0x30) - (short)((ulong)uVar116 >> 0x30),
                                CONCAT24((short)((ulong)uVar105 >> 0x20) -
                                         (short)((ulong)uVar116 >> 0x20),
                                         CONCAT22((short)((ulong)uVar105 >> 0x10) -
                                                  (short)((ulong)uVar116 >> 0x10),
                                                  (short)uVar105 - (short)uVar116)));
          *puVar81 = CONCAT26((short)((ulong)uVar104 >> 0x30) - (short)((ulong)uVar112 >> 0x30),
                              CONCAT24((short)((ulong)uVar104 >> 0x20) -
                                       (short)((ulong)uVar112 >> 0x20),
                                       CONCAT22((short)((ulong)uVar104 >> 0x10) -
                                                (short)((ulong)uVar112 >> 0x10),
                                                (short)uVar104 - (short)uVar112)));
          puVar81 = puVar81 + 4;
        } while (uVar62 != 0);
        if (uVar61 == uVar88) {
          return uVar65;
        }
      }
    }
    lVar68 = uVar88 - uVar61;
    psVar57 = (short *)(lVar60 + (uVar61 + lVar63) * 2);
    psVar33 = param_4 + uVar61;
    psVar42 = param_2 + uVar61;
    do {
      lVar68 = lVar68 + -1;
      *psVar57 = *psVar42 - *psVar33;
      psVar57 = psVar57 + 1;
      psVar33 = psVar33 + 1;
      psVar42 = psVar42 + 1;
    } while (lVar68 != 0);
  }
  return uVar65;
}

