
void nb_encode(long param_1,void *param_2,undefined8 param_3)

{
  short sVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
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
  undefined8 uVar29;
  int *piVar30;
  int *piVar31;
  int *piVar32;
  int *piVar33;
  int *piVar34;
  int *piVar35;
  undefined1 auVar36 [16];
  undefined1 *puVar37;
  bool bVar38;
  short *psVar39;
  short *psVar42;
  short sVar49;
  short sVar50;
  undefined2 uVar51;
  uint uVar52;
  int iVar53;
  undefined4 uVar54;
  ulong uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  uint uVar59;
  ulong uVar60;
  long lVar61;
  undefined2 *puVar62;
  short *psVar63;
  long lVar64;
  int *piVar65;
  undefined1 *puVar66;
  code *pcVar67;
  ulong uVar68;
  void *pvVar69;
  int *piVar70;
  int iVar71;
  ulong uVar72;
  ulong uVar73;
  short *psVar74;
  undefined1 (*pauVar75) [16];
  undefined8 *puVar76;
  ulong uVar77;
  undefined2 *puVar78;
  long lVar79;
  ulong uVar80;
  short *psVar81;
  long lVar82;
  short *psVar83;
  int *piVar84;
  undefined8 *puVar85;
  short *psVar86;
  ulong uVar87;
  size_t __n;
  short *psVar88;
  undefined1 *puVar89;
  void *pvVar90;
  void *pvVar91;
  int *__s;
  ulong uVar92;
  float fVar93;
  int iVar94;
  int iVar104;
  int iVar106;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  int iVar108;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  int iVar105;
  int iVar107;
  int iVar109;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  float fVar110;
  undefined8 uVar117;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  float fVar118;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  float fVar121;
  float fVar122;
  undefined8 uVar123;
  int iVar124;
  undefined4 uStack_240;
  long local_238;
  undefined8 local_230;
  long local_228;
  short *local_220;
  int *local_218;
  undefined1 (*local_210) [16];
  undefined8 *local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  int *local_1f0;
  short *local_1e8;
  short *local_1e0;
  undefined8 *local_1d8;
  void *local_1d0;
  uint local_1c4;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  uint local_1b4;
  undefined8 local_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  long local_198;
  ulong local_190;
  int local_184;
  long local_180;
  void *local_178;
  void *local_170;
  uint local_164;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  int iStack_148;
  int iStack_144;
  undefined8 local_140;
  int iStack_138;
  int iStack_134;
  short *local_130;
  ulong local_128;
  short *local_120;
  long local_118;
  int local_10c;
  undefined1 *local_108;
  void *local_100;
  short *local_f8;
  long local_f0;
  ulong local_e8;
  long local_e0;
  short *local_d8;
  undefined8 local_d0;
  ulong local_c8;
  void *local_c0;
  long local_b8;
  long local_b0;
  undefined4 local_a4;
  int local_98 [6];
  long local_80;
  short *psVar40;
  short *psVar41;
  short *psVar43;
  short *psVar44;
  short *psVar45;
  short *psVar46;
  short *psVar47;
  short *psVar48;
  
  local_228 = tpidr_el0;
  local_80 = *(long *)(local_228 + 0x28);
  local_d0 = *(undefined8 *)(param_1 + 0x48);
  uVar60 = (ulong)*(uint *)(param_1 + 0x1c) * 2 + 0xf & 0x3fffffff0;
  lVar64 = (long)&uStack_240 - uVar60;
  local_b8 = lVar64 - uVar60;
  local_c0 = (void *)(local_b8 - uVar60);
  pvVar90 = (void *)((long)local_c0 - uVar60);
  uVar92 = (long)pvVar90 - uVar60;
  pvVar91 = (void *)(uVar92 - uVar60);
  local_180 = (long)pvVar91 - uVar60;
  local_118 = local_180 - uVar60;
  lVar61 = local_118 - uVar60;
  local_b0 = lVar61;
  memmove(*(void **)(param_1 + 0x58),
          (void *)((long)*(void **)(param_1 + 0x58) + (long)*(int *)(param_1 + 0xc) * 2),
          (long)*(int *)(param_1 + 0x24) * 2 + 4);
  memmove(*(void **)(param_1 + 0x68),
          (void *)((long)*(void **)(param_1 + 0x68) + (long)*(int *)(param_1 + 0xc) * 2),
          (long)*(int *)(param_1 + 0x24) * 2 + 4);
  if (*(int *)(param_1 + 0x134) != 0) {
    uVar54 = 0;
    if (*(int *)(param_1 + 0x130) != 0) {
      uVar54 = 2;
    }
    highpass(param_2,param_2,*(undefined4 *)(param_1 + 0xc),uVar54,param_1 + 0xc0);
  }
  uVar55 = lVar61 - ((ulong)*(uint *)(param_1 + 0x18) * 2 + 0xf & 0x3fffffff0);
  uVar59 = *(uint *)(param_1 + 0x18);
  uVar60 = (ulong)uVar59;
  psVar88 = (short *)(uVar55 - ((ulong)(*(int *)(param_1 + 0x1c) + 1) * 2 + 0xf & 0x3fffffff0));
  iVar53 = *(int *)(param_1 + 0xc);
  if (iVar53 < (int)uVar59) {
    uVar72 = *(ulong *)(param_1 + 0x50);
    uVar77 = *(ulong *)(param_1 + 0x78);
    uVar80 = (ulong)(int)(uVar59 - iVar53);
    uVar73 = uVar80;
    if ((long)uVar80 < 2) {
      uVar73 = 1;
    }
    if (uVar73 < 0x10) {
      uVar68 = 0;
LAB_0011b9fc:
      do {
        lVar82 = uVar68 * 2;
        uVar68 = uVar68 + 1;
        *(short *)(uVar55 + lVar82) =
             (short)((uint)((int)*(short *)(uVar77 + lVar82) * (int)*(short *)(uVar72 + lVar82)) >>
                    0xe);
      } while ((long)uVar68 < (long)uVar80);
    }
    else {
      uVar68 = uVar80;
      if ((long)uVar80 < 2) {
        uVar68 = 1;
      }
      lVar82 = uVar68 * 2;
      uVar68 = 0;
      if ((uVar55 < uVar72 + lVar82 && uVar72 < uVar55 + lVar82) ||
         (uVar55 < uVar77 + lVar82 && uVar77 < uVar55 + lVar82)) goto LAB_0011b9fc;
      uVar68 = uVar73 & 0x7ffffffffffffff0;
      psVar63 = (short *)(uVar72 + 0x10);
      puVar76 = (undefined8 *)(uVar77 + 0x10);
      puVar85 = (undefined8 *)(uVar55 + 0x10);
      uVar87 = uVar68;
      do {
        sVar50 = psVar63[-8];
        sVar49 = psVar63[-7];
        sVar1 = psVar63[-6];
        sVar16 = psVar63[-5];
        psVar74 = psVar63 + -4;
        psVar81 = psVar63 + -3;
        psVar83 = psVar63 + -2;
        psVar40 = psVar63 + -1;
        sVar17 = *psVar63;
        sVar18 = psVar63[1];
        sVar19 = psVar63[2];
        sVar20 = psVar63[3];
        sVar21 = psVar63[4];
        sVar22 = psVar63[5];
        sVar23 = psVar63[6];
        sVar24 = psVar63[7];
        sVar25 = *(short *)(puVar76 + -2);
        sVar26 = *(short *)((long)puVar76 + -0xe);
        sVar27 = *(short *)((long)puVar76 + -0xc);
        sVar28 = *(short *)((long)puVar76 + -10);
        psVar39 = (short *)(puVar76 + -1);
        psVar41 = (short *)((long)puVar76 + -6);
        psVar43 = (short *)((long)puVar76 + -4);
        psVar44 = (short *)((long)puVar76 + -2);
        uVar57 = puVar76[1];
        uVar56 = *puVar76;
        psVar63 = psVar63 + 0x10;
        puVar76 = puVar76 + 4;
        uVar87 = uVar87 - 0x10;
        puVar85[-1] = CONCAT26((short)((uint)((int)*psVar44 * (int)*psVar40) >> 0xe),
                               CONCAT24((short)((uint)((int)*psVar43 * (int)*psVar83) >> 0xe),
                                        CONCAT22((short)((uint)((int)*psVar41 * (int)*psVar81) >>
                                                        0xe),
                                                 (short)((uint)((int)*psVar39 * (int)*psVar74) >>
                                                        0xe))));
        puVar85[-2] = CONCAT26((short)((uint)((int)sVar28 * (int)sVar16) >> 0xe),
                               CONCAT24((short)((uint)((int)sVar27 * (int)sVar1) >> 0xe),
                                        CONCAT22((short)((uint)((int)sVar26 * (int)sVar49) >> 0xe),
                                                 (short)((uint)((int)sVar25 * (int)sVar50) >> 0xe)))
                              );
        puVar85[1] = CONCAT26((short)((uint)((int)(short)((ulong)uVar57 >> 0x30) * (int)sVar24) >>
                                     0xe),
                              CONCAT24((short)((uint)((int)(short)((ulong)uVar57 >> 0x20) *
                                                     (int)sVar23) >> 0xe),
                                       CONCAT22((short)((uint)((int)(short)((ulong)uVar57 >> 0x10) *
                                                              (int)sVar22) >> 0xe),
                                                (short)((uint)((int)(short)uVar57 * (int)sVar21) >>
                                                       0xe))));
        *puVar85 = CONCAT26((short)((uint)((int)(short)((ulong)uVar56 >> 0x30) * (int)sVar20) >> 0xe
                                   ),CONCAT24((short)((uint)((int)(short)((ulong)uVar56 >> 0x20) *
                                                            (int)sVar19) >> 0xe),
                                              CONCAT22((short)((uint)((int)(short)((ulong)uVar56 >>
                                                                                  0x10) *
                                                                     (int)sVar18) >> 0xe),
                                                       (short)((uint)((int)(short)uVar56 *
                                                                     (int)sVar17) >> 0xe))));
        puVar85 = puVar85 + 4;
      } while (uVar87 != 0);
      if (uVar73 != uVar68) goto LAB_0011b9fc;
    }
    if ((int)uVar68 < (int)uVar59) {
LAB_0011ba38:
      lVar82 = *(long *)(param_1 + 0x78);
      uVar73 = uVar68 & 0xffffffff;
      uVar72 = uVar60 - uVar73;
      if (7 < uVar72) {
        uVar52 = ((int)uVar68 + iVar53) - uVar59;
        if (((int)uVar52 <= (int)(uVar52 + (int)(~uVar73 + uVar60))) &&
           (~uVar73 + uVar60 >> 0x20 == 0)) {
          lVar79 = uVar73 * 2;
          iVar124 = ((int)uVar68 + iVar53) - uVar59;
          pvVar69 = (void *)(uVar55 + uVar60 * 2);
          if (((void *)(lVar82 + uVar60 * 2) <= (void *)(uVar55 + lVar79) ||
               pvVar69 <= (void *)(lVar82 + lVar79)) &&
             ((void *)((long)param_2 + ((uVar60 + (long)iVar124) - uVar73) * 2) <=
              (void *)(uVar55 + lVar79) || pvVar69 <= (void *)((long)param_2 + (long)iVar124 * 2)))
          {
            uVar77 = uVar72 & 0xfffffffffffffff8;
            uVar73 = uVar77 + uVar73;
            pauVar75 = (undefined1 (*) [16])(lVar82 + lVar79);
            puVar76 = (undefined8 *)(uVar55 + lVar79);
            uVar68 = uVar77;
            do {
              psVar63 = (short *)((long)param_2 +
                                 (-(ulong)(uVar52 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar52 << 1
                                 ));
              sVar50 = *psVar63;
              sVar49 = psVar63[1];
              sVar1 = psVar63[2];
              sVar16 = psVar63[3];
              auVar97 = *pauVar75;
              uVar68 = uVar68 - 8;
              uVar52 = uVar52 + 8;
              puVar76[1] = CONCAT26((short)((uint)((int)auVar97._14_2_ * (int)psVar63[7]) >> 0xe),
                                    CONCAT24((short)((uint)((int)auVar97._12_2_ * (int)psVar63[6])
                                                    >> 0xe),
                                             CONCAT22((short)((uint)((int)auVar97._10_2_ *
                                                                    (int)psVar63[5]) >> 0xe),
                                                      (short)((uint)((int)auVar97._8_2_ *
                                                                    (int)psVar63[4]) >> 0xe))));
              *puVar76 = CONCAT26((short)((uint)((int)auVar97._6_2_ * (int)sVar16) >> 0xe),
                                  CONCAT24((short)((uint)((int)auVar97._4_2_ * (int)sVar1) >> 0xe),
                                           CONCAT22((short)((uint)((int)auVar97._2_2_ * (int)sVar49)
                                                           >> 0xe),
                                                    (short)((uint)((int)auVar97._0_2_ * (int)sVar50)
                                                           >> 0xe))));
              pauVar75 = pauVar75 + 1;
              puVar76 = puVar76 + 2;
            } while (uVar68 != 0);
            if (uVar72 == uVar77) goto LAB_0011ba84;
          }
        }
      }
      iVar53 = (iVar53 + (int)uVar73) - uVar59;
      lVar79 = uVar60 - uVar73;
      puVar62 = (undefined2 *)(uVar55 + uVar73 * 2);
      psVar63 = (short *)(lVar82 + uVar73 * 2);
      do {
        lVar82 = (long)iVar53;
        lVar79 = lVar79 + -1;
        iVar53 = iVar53 + 1;
        *puVar62 = (short)((uint)((int)*psVar63 * (int)*(short *)((long)param_2 + lVar82 * 2)) >>
                          0xe);
        puVar62 = puVar62 + 1;
        psVar63 = psVar63 + 1;
      } while (lVar79 != 0);
    }
  }
  else {
    uVar68 = 0;
    if (0 < (int)uVar59) goto LAB_0011ba38;
  }
LAB_0011ba84:
  _spx_autocorr(uVar55,psVar88);
  sVar50 = *psVar88 + (short)((uint)((int)*(short *)(param_1 + 0x44) * (int)*psVar88) >> 0xf);
  *psVar88 = sVar50;
  uVar59 = *(uint *)(param_1 + 0x1c);
  uVar60 = (ulong)(int)uVar59;
  if (-1 < (int)uVar59) {
    psVar63 = *(short **)(param_1 + 0x80);
    *psVar88 = (short)((uint)((int)*psVar63 * (int)sVar50) >> 0xe);
    if (uVar59 != 0) {
      if (uVar59 < 0x10) {
        uVar68 = 1;
      }
      else if ((psVar88 + 1 < psVar63 + uVar60 + 1) && (psVar63 + 1 < psVar88 + uVar60 + 1)) {
        uVar68 = 1;
      }
      else {
        uVar73 = uVar60 & 0xfffffffffffffff0;
        psVar74 = psVar88 + 9;
        uVar68 = uVar73 | 1;
        psVar81 = psVar63 + 9;
        uVar55 = uVar73;
        do {
          sVar50 = psVar81[-8];
          sVar49 = psVar81[-7];
          sVar1 = psVar81[-6];
          sVar16 = psVar81[-5];
          psVar83 = psVar81 + -4;
          psVar40 = psVar81 + -3;
          psVar39 = psVar81 + -2;
          psVar41 = psVar81 + -1;
          uVar57 = *(undefined8 *)(psVar81 + 4);
          uVar56 = *(undefined8 *)psVar81;
          uVar55 = uVar55 - 0x10;
          psVar81 = psVar81 + 0x10;
          *(ulong *)(psVar74 + -4) =
               CONCAT26((short)((uint)((int)*psVar41 * (int)psVar74[-1]) >> 0xe),
                        CONCAT24((short)((uint)((int)*psVar39 * (int)psVar74[-2]) >> 0xe),
                                 CONCAT22((short)((uint)((int)*psVar40 * (int)psVar74[-3]) >> 0xe),
                                          (short)((uint)((int)*psVar83 * (int)psVar74[-4]) >> 0xe)))
                       );
          *(ulong *)(psVar74 + -8) =
               CONCAT26((short)((uint)((int)sVar16 * (int)psVar74[-5]) >> 0xe),
                        CONCAT24((short)((uint)((int)sVar1 * (int)psVar74[-6]) >> 0xe),
                                 CONCAT22((short)((uint)((int)sVar49 * (int)psVar74[-7]) >> 0xe),
                                          (short)((uint)((int)sVar50 * (int)psVar74[-8]) >> 0xe))));
          *(ulong *)(psVar74 + 4) =
               CONCAT26((short)((uint)((int)(short)((ulong)uVar57 >> 0x30) * (int)psVar74[7]) >> 0xe
                               ),CONCAT24((short)((uint)((int)(short)((ulong)uVar57 >> 0x20) *
                                                        (int)psVar74[6]) >> 0xe),
                                          CONCAT22((short)((uint)((int)(short)((ulong)uVar57 >> 0x10
                                                                              ) * (int)psVar74[5])
                                                          >> 0xe),
                                                   (short)((uint)((int)(short)uVar57 *
                                                                 (int)psVar74[4]) >> 0xe))));
          *(ulong *)psVar74 =
               CONCAT26((short)((uint)((int)(short)((ulong)uVar56 >> 0x30) * (int)psVar74[3]) >> 0xe
                               ),CONCAT24((short)((uint)((int)(short)((ulong)uVar56 >> 0x20) *
                                                        (int)psVar74[2]) >> 0xe),
                                          CONCAT22((short)((uint)((int)(short)((ulong)uVar56 >> 0x10
                                                                              ) * (int)psVar74[1])
                                                          >> 0xe),
                                                   (short)((uint)((int)(short)uVar56 * (int)*psVar74
                                                                 ) >> 0xe))));
          psVar74 = psVar74 + 0x10;
        } while (uVar55 != 0);
        if (uVar73 == uVar60) goto LAB_0011bcfc;
      }
      do {
        psVar88[uVar68] = (short)((uint)((int)psVar63[uVar68] * (int)psVar88[uVar68]) >> 0xe);
        bVar38 = (long)uVar68 < (long)uVar60;
        uVar68 = uVar68 + 1;
      } while (bVar38);
    }
  }
LAB_0011bcfc:
  _spx_lpc(lVar64,psVar88);
  uVar52 = lpc_to_lsp(lVar64,*(undefined4 *)(param_1 + 0x1c),pvVar90,10,0x1999,local_d0);
  uVar59 = *(uint *)(param_1 + 0x1c);
  uVar60 = (ulong)uVar59;
  if ((uVar52 != uVar59) && (0 < (int)uVar59)) {
    pvVar69 = *(void **)(param_1 + 0x88);
    if ((uVar59 < 0x10) ||
       ((pvVar90 < (void *)((long)pvVar69 + uVar60 * 2) &&
        (pvVar69 < (void *)((long)pvVar90 + uVar60 * 2))))) {
      uVar55 = 0;
    }
    else {
      uVar55 = uVar60 & 0xfffffff0;
      pauVar75 = (undefined1 (*) [16])((long)pvVar69 + 0x10);
      puVar76 = (undefined8 *)((long)pvVar90 + 0x10);
      uVar68 = uVar55;
      do {
        auVar97 = pauVar75[-1];
        auVar113 = *pauVar75;
        pauVar75 = pauVar75 + 2;
        uVar68 = uVar68 - 0x10;
        puVar76[-1] = auVar97._8_8_;
        puVar76[-2] = auVar97._0_8_;
        puVar76[1] = auVar113._8_8_;
        *puVar76 = auVar113._0_8_;
        puVar76 = puVar76 + 4;
      } while (uVar68 != 0);
      if (uVar55 == uVar60) goto LAB_0011bd84;
    }
    lVar64 = uVar60 - uVar55;
    puVar62 = (undefined2 *)((long)pvVar69 + uVar55 * 2);
    puVar78 = (undefined2 *)((long)pvVar90 + uVar55 * 2);
    do {
      lVar64 = lVar64 + -1;
      *puVar78 = *puVar62;
      puVar62 = puVar62 + 1;
      puVar78 = puVar78 + 1;
    } while (lVar64 != 0);
  }
LAB_0011bd84:
  uVar60 = (long)*(int *)(param_1 + 0x18) - (long)*(int *)(param_1 + 0xc);
  local_230 = param_3;
  if (*(int *)(param_1 + 8) == 0) {
    lsp_interpolate(*(undefined8 *)(param_1 + 0x88),pvVar90,pvVar91,*(undefined4 *)(param_1 + 0x1c),
                    *(int *)(param_1 + 0x14),*(int *)(param_1 + 0x14) << 1);
    uVar55 = (ulong)*(uint *)(param_1 + 0x1c);
  }
  else {
    uVar55 = (ulong)*(uint *)(param_1 + 0x1c);
    if (0 < (int)*(uint *)(param_1 + 0x1c)) {
      memcpy(pvVar91,pvVar90,uVar55 << 1);
    }
  }
  lsp_enforce_margin(pvVar91,uVar55,0x10);
  lsp_to_lpc(pvVar91,local_118,*(undefined4 *)(param_1 + 0x1c),local_d0);
  lVar82 = local_b8;
  lVar64 = local_118;
  piVar65 = *(int **)(*(long *)(param_1 + 0x120) + (long)*(int *)(param_1 + 0x128) * 8);
  iVar53 = (int)uVar60;
  local_178 = pvVar91;
  local_170 = pvVar90;
  if ((piVar65 == (int *)0x0) ||
     (((((2 < *(int *)(param_1 + 0x10c) && (piVar65[2] < 3)) || (piVar65[1] != 0)) ||
       ((*piVar65 != -1 || (*(int *)(param_1 + 0xe8) != 0)))) || (*(int *)(param_1 + 0xf0) != 0))))
  {
    bw_lpc(*(undefined2 *)(param_1 + 0x40),local_118,local_b8,*(undefined4 *)(param_1 + 0x1c));
    pvVar90 = local_c0;
    bw_lpc(*(undefined2 *)(param_1 + 0x42),lVar64,local_c0,*(undefined4 *)(param_1 + 0x1c));
    __n = -(uVar60 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar60 & 0xffffffff) << 1;
    uVar60 = (ulong)iVar53;
    memcpy(*(void **)(param_1 + 0x70),*(void **)(param_1 + 0x50),__n);
    uVar59 = *(int *)(param_1 + 0xc) - iVar53;
    memcpy((void *)(*(long *)(param_1 + 0x70) + __n),param_2,
           -(ulong)(uVar59 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar59 << 1);
    uVar56 = local_d0;
    filter_mem16(*(undefined8 *)(param_1 + 0x70),lVar82,pvVar90,*(undefined8 *)(param_1 + 0x70),
                 *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x1c),
                 *(undefined8 *)(param_1 + 0xa8),local_d0);
    local_208 = (undefined8 *)(param_1 + 0x50);
    open_loop_nbest_pitch
              (*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x20),
               *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0xc),local_98,&local_a4,6,
               uVar56);
    lVar64 = 1;
    local_164 = local_a4 & 0xffff;
    iVar124 = local_98[0];
    do {
      if ((short)local_a4 * 0x6ccd >> 0xf < (int)*(short *)((long)&local_a4 + lVar64 * 2)) {
        iVar104 = local_98[lVar64];
        iVar106 = iVar104 * 2 - iVar124;
        iVar71 = -iVar106;
        if (-1 < iVar106) {
          iVar71 = iVar106;
        }
        if (2 < iVar71) {
          iVar106 = iVar104 * 3 - iVar124;
          iVar71 = -iVar106;
          if (-1 < iVar106) {
            iVar71 = iVar106;
          }
          if (3 < iVar71) {
            iVar106 = iVar104 * 4 - iVar124;
            iVar71 = -iVar106;
            if (-1 < iVar106) {
              iVar71 = iVar106;
            }
            if (4 < iVar71) {
              iVar106 = iVar104 * 5 - iVar124;
              iVar71 = -iVar106;
              if (-1 < iVar106) {
                iVar71 = iVar106;
              }
              if (5 < iVar71) goto LAB_0011bfb8;
            }
          }
        }
        iVar124 = iVar104;
      }
LAB_0011bfb8:
      lVar64 = lVar64 + 1;
    } while (lVar64 != 6);
  }
  else {
    local_164 = 0;
    local_208 = (undefined8 *)(param_1 + 0x50);
    iVar124 = 0;
    __n = uVar60 * 2;
  }
  pvVar90 = local_170;
  memcpy(*(void **)(param_1 + 0x60),*(void **)(param_1 + 0x50),__n);
  uVar59 = *(int *)(param_1 + 0xc) - iVar53;
  memcpy((void *)(*(long *)(param_1 + 0x60) + uVar60 * 2),param_2,
         -(ulong)(uVar59 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar59 << 1);
  fir_mem16(*(undefined8 *)(param_1 + 0x60),local_118,*(undefined8 *)(param_1 + 0x60),
            *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x1c),
            *(undefined8 *)(param_1 + 0xb0),local_d0);
  sVar49 = compute_rms16(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0xc));
  uVar56 = local_230;
  sVar50 = (short)local_164;
  if ((iVar124 < 1) || (*(int *)(param_1 + 0x128) == 1)) {
    iVar53 = (int)sVar49 << 0xe;
    lVar64 = *(long *)(param_1 + 0xd8);
    if (lVar64 != 0) goto LAB_0011c158;
LAB_0011c1b8:
    *(undefined4 *)(param_1 + 0xe4) = 0xbf800000;
    iVar71 = *(int *)(param_1 + 0x118);
  }
  else {
    uVar52 = (short)(sVar50 * sVar50 * 2) * -0x6666 + 0x10000000;
    bVar38 = uVar52 >> 0x10 != 0;
    uVar59 = uVar52 >> 0x10;
    if (!bVar38) {
      uVar59 = uVar52;
    }
    uVar4 = uVar59 >> 8;
    if (uVar59 < 0x100) {
      uVar4 = uVar59;
    }
    uVar3 = (uint)bVar38 << 3 | 4;
    if (uVar59 < 0x100) {
      uVar3 = (uint)bVar38 << 3;
    }
    uVar59 = uVar4 >> 4;
    if (uVar4 < 0x10) {
      uVar59 = uVar4;
    }
    uVar7 = uVar3 | 2;
    if (uVar4 < 0x10) {
      uVar7 = uVar3;
    }
    uVar7 = uVar7 | 3 < uVar59;
    uVar59 = 0xd - uVar7;
    sVar1 = (short)((int)uVar52 >> (uVar7 * 2 - 0xc & 0x1f));
    if ((ushort)uVar7 < 7) {
      sVar1 = (short)(uVar52 << (ulong)(uVar7 * -2 + 0xc & 0x1f));
    }
    iVar53 = (int)sVar1;
    iVar53 = (int)((((int)(((iVar53 * 0x41b0 + -0x31530000 >> 0x10) * iVar53 * 4 & 0xffff0000U) +
                          0x52b50000) >> 0x10) * iVar53 * 4 & 0xffff0000U) + 0xe320000) >> 0x10;
    sVar1 = (short)(iVar53 >> (uVar59 & 0x1f));
    if ((int)uVar59 < 1) {
      sVar1 = (short)(iVar53 << (ulong)(-uVar59 & 0x1f));
    }
    iVar53 = (sVar1 * 0x11998 >> 0x10) * (int)sVar49;
    lVar64 = *(long *)(param_1 + 0xd8);
    if (lVar64 == 0) goto LAB_0011c1b8;
LAB_0011c158:
    if ((*(int *)(param_1 + 0xe8) == 0) && (*(int *)(param_1 + 0xf0) == 0)) goto LAB_0011c1b8;
    if (*(int *)(param_1 + 0x1c) < 1) {
      fVar93 = 0.0;
    }
    else {
      lVar82 = 0;
      fVar93 = 0.0;
      do {
        lVar79 = lVar82 * 2;
        lVar82 = lVar82 + 1;
        iVar71 = (int)*(short *)(*(long *)(param_1 + 0x88) + lVar79) -
                 (int)*(short *)((long)pvVar90 + lVar79);
        fVar93 = fVar93 + (float)(iVar71 * iVar71);
      } while (lVar82 < *(int *)(param_1 + 0x1c));
    }
    if (*(int *)(param_1 + 0xfc) != 0) {
      fVar121 = 0.0;
      if (0.0 < *(float *)(param_1 + 0x104) * *(float *)(param_1 + 0x100)) {
        fVar110 = (*(float *)(param_1 + 0x100) * -1e-05) / (*(float *)(param_1 + 0x108) + 1.0);
        fVar121 = 0.05;
        if (fVar110 <= 0.05) {
          fVar121 = fVar110;
        }
        if (fVar121 < -0.05) {
          fVar121 = -0.05;
        }
      }
      fVar121 = fVar121 + *(float *)(param_1 + 0xe0);
      if (10.0 < fVar121) {
        fVar121 = 10.0;
      }
      *(float *)(param_1 + 0xe0) = fVar121;
    }
    auVar97._0_8_ = (double)(int)sVar50;
    auVar97._8_8_ = 0;
    fVar121 = (float)vbr_analysis((float)(auVar97._0_8_ * 0.015625),auVar97,lVar64,param_2,
                                  *(undefined4 *)(param_1 + 0xc),iVar124);
    *(float *)(param_1 + 0xe4) = fVar121;
    if (*(int *)(param_1 + 0xe8) == 0) {
      if (fVar121 < 2.0) {
        if ((((0.05 < fVar93 * 1.4901161e-08) || (iVar71 = *(int *)(param_1 + 0xf8), iVar71 == 0))
            || (0x14 < iVar71)) || (*(int *)(param_1 + 0xf4) == 0)) {
          uVar54 = 1;
          *(undefined4 *)(param_1 + 0xf8) = 1;
          goto LAB_0011dd88;
        }
        *(int *)(param_1 + 0xf8) = iVar71 + 1;
        *(undefined4 *)(param_1 + 0x128) = 0;
        iVar71 = *(int *)(param_1 + 0x118);
      }
      else {
        uVar54 = *(undefined4 *)(param_1 + 300);
        *(undefined4 *)(param_1 + 0xf8) = 0;
LAB_0011dd88:
        *(undefined4 *)(param_1 + 0x128) = uVar54;
        iVar71 = *(int *)(param_1 + 0x118);
      }
    }
    else {
      fVar118 = *(float *)(param_1 + 0xe0);
      iVar71 = (int)fVar118;
      lVar82 = (long)iVar71;
      lVar64 = lVar82 + 1;
      fVar110 = fVar118 - (float)iVar71;
      fVar118 = (float)(int)lVar64 - fVar118;
      if (iVar71 == 10) {
        fVar10 = (float)0;
      }
      else {
        fVar10 = fVar110 * *(float *)(vbr_nb_thresh + lVar64 * 4 + 0x160) +
                 fVar118 * *(float *)(vbr_nb_thresh + lVar82 * 4 + 0x160);
      }
      fVar122 = 100.0;
      if ((fVar121 <= fVar10) || (100.0 <= fVar121 - fVar10)) {
        local_98[0] = 0;
      }
      else {
        local_98[0] = 8;
        fVar122 = fVar121 - fVar10;
      }
      if (iVar71 == 10) {
        fVar10 = (float)0x40f00000;
        if ((float)0x40f00000 < fVar121) {
LAB_0011c3d0:
          if (fVar121 - fVar10 < fVar122) {
            local_98[0] = 7;
            fVar122 = fVar121 - fVar10;
          }
        }
      }
      else {
        fVar10 = fVar110 * *(float *)(vbr_nb_thresh + lVar64 * 4 + 0x134) +
                 fVar118 * *(float *)(vbr_nb_thresh + lVar82 * 4 + 0x134);
        if (fVar10 < fVar121) goto LAB_0011c3d0;
      }
      if (iVar71 == 10) {
        fVar10 = (float)0x40a00000;
        if ((float)0x40a00000 < fVar121) {
LAB_0011c428:
          if (fVar121 - fVar10 < fVar122) {
            local_98[0] = 6;
            fVar122 = fVar121 - fVar10;
          }
        }
      }
      else {
        fVar10 = fVar110 * *(float *)(vbr_nb_thresh + lVar64 * 4 + 0x108) +
                 fVar118 * *(float *)(vbr_nb_thresh + lVar82 * 4 + 0x108);
        if (fVar10 < fVar121) goto LAB_0011c428;
      }
      if (iVar71 == 10) {
        fVar10 = (float)0x40400000;
        if ((float)0x40400000 < fVar121) {
LAB_0011c480:
          if (fVar121 - fVar10 < fVar122) {
            local_98[0] = 5;
            fVar122 = fVar121 - fVar10;
          }
        }
      }
      else {
        fVar10 = fVar110 * *(float *)(vbr_nb_thresh + lVar64 * 4 + 0xdc) +
                 fVar118 * *(float *)(vbr_nb_thresh + lVar82 * 4 + 0xdc);
        if (fVar10 < fVar121) goto LAB_0011c480;
      }
      if (iVar71 == 10) {
        fVar10 = (float)0x40000000;
        if ((float)0x40000000 < fVar121) {
LAB_0011c4d8:
          if (fVar121 - fVar10 < fVar122) {
            local_98[0] = 4;
            fVar122 = fVar121 - fVar10;
          }
        }
      }
      else {
        fVar10 = fVar110 * *(float *)(vbr_nb_thresh + lVar64 * 4 + 0xb0) +
                 fVar118 * *(float *)(vbr_nb_thresh + lVar82 * 4 + 0xb0);
        if (fVar10 < fVar121) goto LAB_0011c4d8;
      }
      if (iVar71 == 10) {
        fVar10 = (float)0x3f800000;
        if ((float)0x3f800000 < fVar121) {
LAB_0011c530:
          if (fVar121 - fVar10 < fVar122) {
            local_98[0] = 3;
            fVar122 = fVar121 - fVar10;
          }
        }
      }
      else {
        fVar10 = fVar110 * *(float *)(vbr_nb_thresh + lVar64 * 4 + 0x84) +
                 fVar118 * *(float *)(vbr_nb_thresh + lVar82 * 4 + 0x84);
        if (fVar10 < fVar121) goto LAB_0011c530;
      }
      if (iVar71 == 10) {
        fVar10 = (float)0x3f800000;
        if ((float)0x3f800000 < fVar121) {
LAB_0011c588:
          if (fVar121 - fVar10 < fVar122) {
            local_98[0] = 2;
            fVar122 = fVar121 - fVar10;
          }
        }
      }
      else {
        fVar10 = fVar110 * *(float *)(vbr_nb_thresh + lVar64 * 4 + 0x58) +
                 fVar118 * *(float *)(vbr_nb_thresh + lVar82 * 4 + 0x58);
        if (fVar10 < fVar121) goto LAB_0011c588;
      }
      if (iVar71 == 10) {
        fVar110 = (float)0xbf800000;
        if (fVar121 <= (float)0xbf800000) goto LAB_0011c604;
LAB_0011c5e8:
        if (fVar122 <= fVar121 - fVar110) goto LAB_0011c604;
        local_98[0] = 1;
LAB_0011c610:
        *(undefined4 *)(param_1 + 0xf8) = 0;
      }
      else {
        fVar110 = fVar110 * *(float *)(vbr_nb_thresh + lVar64 * 4 + 0x2c) +
                  fVar118 * *(float *)(vbr_nb_thresh + lVar82 * 4 + 0x2c);
        if (fVar110 < fVar121) goto LAB_0011c5e8;
LAB_0011c604:
        piVar65 = (int *)(param_1 + 0xf8);
        if (local_98[0] != 0) goto LAB_0011c610;
        if (((0.05 < fVar93 * 1.4901161e-08) || (iVar71 = *piVar65, iVar71 == 0)) ||
           ((0x14 < iVar71 || (*(int *)(param_1 + 0xf4) == 0)))) {
          local_98[0] = 1;
          *piVar65 = 1;
        }
        else {
          local_98[0] = 0;
          *piVar65 = iVar71 + 1;
        }
      }
      speex_encoder_ctl(param_1,6,local_98);
      if (0 < *(int *)(param_1 + 0xec)) {
        speex_encoder_ctl(param_1,0x13,&local_a4);
        if ((int)*(uint *)(param_1 + 0xec) < (int)local_a4) {
          local_a4 = *(uint *)(param_1 + 0xec);
          speex_encoder_ctl(param_1,0x12,&local_a4);
        }
      }
      if (*(int *)(param_1 + 0xfc) != 0) {
        speex_encoder_ctl(param_1,0x13,&local_a4);
        iVar71 = local_a4 - *(int *)(param_1 + 0xfc);
        *(float *)(param_1 + 0x100) = *(float *)(param_1 + 0x100) + (float)iVar71;
        *(float *)(param_1 + 0x104) = (float)iVar71 * 0.05 + *(float *)(param_1 + 0x104) * 0.95;
        *(float *)(param_1 + 0x108) = *(float *)(param_1 + 0x108) + 1.0;
      }
      iVar71 = *(int *)(param_1 + 0x118);
    }
  }
  if (iVar71 != 0) {
    speex_bits_pack(uVar56,0,1);
    speex_bits_pack(uVar56,*(undefined4 *)(param_1 + 0x128),4);
  }
  lVar64 = *(long *)(*(long *)(param_1 + 0x120) + (long)*(int *)(param_1 + 0x128) * 8);
  if (lVar64 == 0) {
    uVar59 = *(uint *)(param_1 + 0xc);
    if (0 < (int)uVar59) {
      uVar92 = *(ulong *)(param_1 + 0x70);
      uVar60 = *(ulong *)(param_1 + 0x60);
      uVar55 = (ulong)(int)uVar59;
      if ((uVar59 < 0x10) || ((uVar92 < uVar60 + uVar55 * 2 && (uVar60 < uVar92 + uVar55 * 2)))) {
        uVar68 = 0;
      }
      else {
        uVar68 = uVar55 & 0xfffffffffffffff0;
        puVar76 = (undefined8 *)(uVar92 + 0x10);
        puVar85 = (undefined8 *)(uVar60 + 0x10);
        uVar73 = uVar68;
        do {
          puVar76[-1] = 0;
          puVar76[-2] = 0;
          puVar76[1] = 0;
          *puVar76 = 0;
          puVar85[-1] = 0;
          puVar85[-2] = 0;
          puVar85[1] = 0;
          *puVar85 = 0;
          puVar76 = puVar76 + 4;
          uVar73 = uVar73 - 0x10;
          puVar85 = puVar85 + 4;
        } while (uVar73 != 0);
        if (uVar68 == uVar55) goto LAB_0011c794;
      }
      do {
        lVar61 = uVar68 * 2;
        uVar68 = uVar68 + 1;
        *(undefined2 *)(uVar92 + lVar61) = 0;
        *(undefined2 *)(uVar60 + lVar61) = 0;
      } while ((long)uVar68 < (long)uVar55);
    }
LAB_0011c794:
    if (0 < *(int *)(param_1 + 0x1c)) {
      lVar64 = *(long *)(param_1 + 0xa0);
      lVar61 = 0;
      do {
        *(undefined4 *)(lVar64 + lVar61 * 4) = 0;
        lVar61 = lVar61 + 1;
      } while (lVar61 < *(int *)(param_1 + 0x1c));
      uVar59 = *(uint *)(param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 8) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 1;
    uVar52 = *(int *)(param_1 + 0x18) - uVar59;
    memcpy(*(void **)(param_1 + 0x50),
           (void *)((long)param_2 +
                   (long)*(int *)(param_1 + 0x18) * -2 + (long)(int)(uVar59 << 1) * 2),
           -(ulong)(uVar52 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar52 << 1);
    lVar61 = local_228;
    if (*(int *)(param_1 + 0x1c) < 1) {
      uVar56 = 0;
    }
    else {
      lVar82 = *(long *)(param_1 + 0x98);
      lVar64 = 0;
      do {
        *(undefined4 *)(lVar82 + lVar64 * 4) = 0;
        lVar64 = lVar64 + 1;
      } while (lVar64 < *(int *)(param_1 + 0x1c));
      uVar56 = 0;
    }
    goto LAB_0011defc;
  }
  uVar59 = *(uint *)(param_1 + 0x1c);
  uVar60 = (ulong)(int)uVar59;
  if ((*(int *)(param_1 + 8) != 0) && (0 < (int)uVar59)) {
    pvVar91 = *(void **)(param_1 + 0x88);
    if (uVar59 < 0x10) {
      uVar55 = 0;
    }
    else if ((pvVar91 < (void *)((long)pvVar90 + uVar60 * 2)) &&
            (pvVar90 < (void *)((long)pvVar91 + uVar60 * 2))) {
      uVar55 = 0;
    }
    else {
      uVar55 = uVar60 & 0xfffffffffffffff0;
      pauVar75 = (undefined1 (*) [16])((long)pvVar90 + 0x10);
      puVar76 = (undefined8 *)((long)pvVar91 + 0x10);
      uVar68 = uVar55;
      do {
        auVar97 = pauVar75[-1];
        auVar113 = *pauVar75;
        pauVar75 = pauVar75 + 2;
        uVar68 = uVar68 - 0x10;
        puVar76[-1] = auVar97._8_8_;
        puVar76[-2] = auVar97._0_8_;
        puVar76[1] = auVar113._8_8_;
        *puVar76 = auVar113._0_8_;
        puVar76 = puVar76 + 4;
      } while (uVar68 != 0);
      if (uVar55 == uVar60) goto LAB_0011c8e0;
    }
    do {
      lVar82 = uVar55 * 2;
      uVar55 = uVar55 + 1;
      *(undefined2 *)((long)pvVar91 + lVar82) = *(undefined2 *)((long)pvVar90 + lVar82);
    } while ((long)uVar55 < (long)uVar60);
  }
LAB_0011c8e0:
  (**(code **)(lVar64 + 0x10))(pvVar90,uVar92,uVar60,uVar56);
  piVar65 = *(int **)(*(long *)(param_1 + 0x120) + (long)*(int *)(param_1 + 0x128) * 8);
  if (*piVar65 != -1) {
    speex_bits_pack(uVar56,iVar124 - *(int *)(param_1 + 0x20),7);
    piVar65 = *(int **)(*(long *)(param_1 + 0x120) + (long)*(int *)(param_1 + 0x128) * 8);
  }
  local_1d0 = param_2;
  if (piVar65[1] != 0) {
    uVar59 = ((short)local_164 * 0xe666 >> 0x10) * 0xf + 0x20 >> 6;
    if (0xe < (int)uVar59) {
      uVar59 = 0xf;
    }
    uVar59 = uVar59 & ((int)uVar59 >> 0x1f ^ 0xffffffffU);
    speex_bits_pack(uVar56,uVar59,4);
    local_164 = (short)(uVar59 << 6) * 0x889 + 0x4000 >> 0xf;
  }
  iVar53 = scal_quant32(iVar53,ol_gain_table,0x20);
  speex_bits_pack(uVar56,iVar53,5);
  uVar59 = *(uint *)(param_1 + 0x1c);
  uVar60 = (ulong)uVar59;
  if ((*(int *)(param_1 + 8) != 0) && (0 < (int)uVar59)) {
    uVar55 = *(ulong *)(param_1 + 0x90);
    uVar68 = (ulong)(int)uVar59;
    if (uVar59 < 0x10) {
      uVar73 = 0;
    }
    else if ((uVar55 < uVar92 + uVar68 * 2) && (uVar92 < uVar55 + uVar68 * 2)) {
      uVar73 = 0;
    }
    else {
      uVar73 = uVar68 & 0xfffffffffffffff0;
      pauVar75 = (undefined1 (*) [16])(uVar92 + 0x10);
      puVar76 = (undefined8 *)(uVar55 + 0x10);
      uVar72 = uVar73;
      do {
        auVar97 = pauVar75[-1];
        auVar113 = *pauVar75;
        pauVar75 = pauVar75 + 2;
        uVar72 = uVar72 - 0x10;
        puVar76[-1] = auVar97._8_8_;
        puVar76[-2] = auVar97._0_8_;
        puVar76[1] = auVar113._8_8_;
        *puVar76 = auVar113._0_8_;
        puVar76 = puVar76 + 4;
      } while (uVar72 != 0);
      if (uVar73 == uVar68) goto LAB_0011ca68;
    }
    do {
      lVar64 = uVar73 * 2;
      uVar73 = uVar73 + 1;
      *(undefined2 *)(uVar55 + lVar64) = *(undefined2 *)(uVar92 + lVar64);
    } while ((long)uVar73 < (long)uVar68);
  }
LAB_0011ca68:
  psVar88 = (short *)(ulong)*(uint *)(param_1 + 0x10);
  local_184 = iVar124;
  uVar55 = (long)psVar88 * 2 + 0xfU & 0x3fffffff0;
  local_130 = (short *)(lVar61 - uVar55);
  uVar68 = (long)psVar88 * 4 + 0xfU & 0x7fffffff0;
  __s = (int *)((long)local_130 - uVar68);
  piVar65 = (int *)((long)__s - uVar68);
  local_120 = (short *)((long)piVar65 - uVar55);
  local_e0 = (long)((long)piVar65 - uVar55) - uVar55;
  local_f8 = (short *)(local_e0 - uVar55);
  puVar89 = (undefined1 *)((long)local_f8 - (uVar60 * 4 + 0xf & 0x7fffffff0));
  if (0 < *(int *)(param_1 + 0x14)) {
    local_198 = param_1 + 0x28;
    local_1e0 = (short *)(local_b0 + 0x10);
    local_238 = (long)local_1d0 + 0x10;
    local_220 = local_f8 + 8;
    local_1d8 = (undefined8 *)(puVar89 + 0x10);
    local_1e8 = local_f8 + 4;
    local_1f0 = piVar65 + 4;
    local_210 = (undefined1 (*) [16])(local_130 + 8);
    local_218 = __s + 4;
    local_10c = -1;
    uStack_1f8 = 0;
    local_200 = 0x2000;
    uStack_1a8 = 0xffff8001;
    uStack_1a4 = 0xffff8001;
    local_1b0 = 0xffff8001ffff8001;
    iStack_138 = 0x1fffdfff;
    iStack_134 = 0x1fffdfff;
    local_140 = 0x1fffdfff1fffdfff;
    iStack_148 = -0x1fffe000;
    iStack_144 = -0x1fffe000;
    local_150 = 0xe0002000e0002000;
    auVar113._8_4_ = 0x8001;
    auVar113._0_8_ = 0x800100008001;
    auVar113._12_4_ = 0x8001;
    uStack_158 = auVar113._8_8_;
    local_160 = 0x800100008001;
    local_1b4 = ((int)(*(uint *)(ol_gain_table + (long)iVar53 * 4) << 1) >> 0x10) * 0x6ef6 +
                ((*(uint *)(ol_gain_table + (long)iVar53 * 4) & 0x7fff) * 0x6ef6 >> 0xf);
    local_1c0 = (int)(local_1b4 * 4) >> 0x10;
    local_1c4 = local_1b4 & 0x3fff;
    local_1b8 = (int)(local_1b4 + 0x2000) >> 0xe;
    local_1bc = (local_1b8 << 0x10) >> 0x11;
    local_c8 = 0;
    puVar37 = puVar89;
    local_190 = uVar92;
    local_d8 = psVar88;
    do {
      uVar55 = local_c8;
      pvVar90 = local_178;
      local_f0 = *(long *)(param_1 + 0x60);
      local_100 = *(void **)(param_1 + 0x70);
      lsp_interpolate(*(undefined8 *)(param_1 + 0x88),local_170,local_178,uVar60,
                      local_c8 & 0xffffffff);
      lVar61 = local_180;
      lsp_interpolate(*(undefined8 *)(param_1 + 0x90),uVar92,local_180,
                      *(undefined4 *)(param_1 + 0x1c),uVar55 & 0xffffffff,
                      *(undefined4 *)(param_1 + 0x14));
      lsp_enforce_margin(pvVar90,*(undefined4 *)(param_1 + 0x1c),0x10);
      lsp_enforce_margin(lVar61,*(undefined4 *)(param_1 + 0x1c),0x10);
      uVar57 = local_d0;
      lsp_to_lpc(pvVar90,local_118,*(undefined4 *)(param_1 + 0x1c),local_d0);
      lsp_to_lpc(lVar61,local_b0,*(undefined4 *)(param_1 + 0x1c),uVar57);
      lVar61 = local_118;
      iVar53 = *(int *)(param_1 + 0x1c);
      iVar124 = (int)local_d8;
      if (iVar53 < 1) {
        iVar71 = 0x2000;
      }
      else {
        uVar92 = ((long)iVar53 - 1U >> 1) + 1;
        if (uVar92 < 8) {
          lVar64 = 0;
          iVar71 = 0x2000;
        }
        else {
          auVar100._8_8_ = uStack_1f8;
          auVar100._0_8_ = local_200;
          uVar55 = uVar92 & 0xfffffffffffffff8;
          lVar64 = uVar55 << 1;
          iVar71 = 0;
          iVar104 = 0;
          iVar106 = 0;
          iVar108 = 0;
          uVar60 = uVar55;
          psVar88 = local_1e0;
          do {
            psVar86 = psVar88 + -8;
            sVar50 = *psVar88;
            psVar39 = psVar88 + 1;
            psVar63 = psVar88 + 2;
            psVar74 = psVar88 + 3;
            psVar81 = psVar88 + 4;
            psVar83 = psVar88 + 5;
            psVar40 = psVar88 + 6;
            psVar41 = psVar88 + 7;
            psVar42 = psVar88 + -7;
            psVar43 = psVar88 + -6;
            psVar44 = psVar88 + -5;
            psVar45 = psVar88 + -4;
            psVar46 = psVar88 + -3;
            psVar47 = psVar88 + -2;
            psVar48 = psVar88 + -1;
            uVar60 = uVar60 - 8;
            psVar88 = psVar88 + 0x10;
            iVar94 = auVar100._4_4_;
            iVar105 = auVar100._8_4_;
            iVar107 = auVar100._12_4_;
            iVar71 = (iVar71 + *psVar39) - (int)sVar50;
            iVar104 = (iVar104 + *psVar74) - (int)*psVar63;
            iVar106 = (iVar106 + *psVar83) - (int)*psVar81;
            iVar108 = (iVar108 + *psVar41) - (int)*psVar40;
            auVar100._0_4_ = (auVar100._0_4_ + (int)*psVar42) - (int)*psVar86;
            auVar100._4_4_ = (iVar94 + *psVar44) - (int)*psVar43;
            auVar100._8_4_ = (iVar105 + *psVar46) - (int)*psVar45;
            auVar100._12_4_ = (iVar107 + *psVar48) - (int)*psVar47;
          } while (uVar60 != 0);
          iVar71 = iVar71 + auVar100._0_4_ + iVar104 + auVar100._4_4_ +
                   iVar106 + auVar100._8_4_ + iVar108 + auVar100._12_4_;
          if (uVar92 == uVar55) goto LAB_0011ce18;
        }
        do {
          psVar88 = (short *)(local_b0 + lVar64 * 2);
          lVar64 = lVar64 + 2;
          iVar71 = (iVar71 + psVar88[1]) - (int)*psVar88;
        } while (lVar64 < iVar53);
      }
LAB_0011ce18:
      *(int *)(*(long *)(param_1 + 200) + local_c8 * 4) = iVar71;
      bw_lpc(*(undefined2 *)(param_1 + 0x40),local_118,local_b8,*(undefined4 *)(param_1 + 0x1c));
      if (*(short *)(param_1 + 0x42) < 0) {
        if (0 < (int)*(uint *)(param_1 + 0x1c)) {
          memset(local_c0,0,(ulong)*(uint *)(param_1 + 0x1c) << 1);
        }
      }
      else {
        bw_lpc((long)*(short *)(param_1 + 0x42),lVar61,local_c0);
      }
      lVar61 = local_b0;
      uVar59 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0xc);
      if (uVar59 != *(uint *)(param_1 + 0x10)) {
        FUN_0011e004("assertion failed: st->windowSize-st->frameSize == st->subframeSize",0x2c4);
LAB_0011dfe0:
        FUN_0011e004("assertion failed: SUBMODE(ltp_quant)",0x2f8);
LAB_0011dff0:
        uVar56 = FUN_0011e004("assertion failed: SUBMODE(innovation_quant)",0x34a);
        goto LAB_0011e000;
      }
      uVar52 = iVar124 * (int)local_c8;
      local_e8 = (ulong)uVar52;
      local_128 = -(ulong)(uVar52 >> 0x1f) & 0xfffffffe00000000 | local_e8 << 1;
      local_108 = (undefined1 *)(long)(int)uVar52;
      local_d8 = (short *)((long)local_100 + local_128);
      if (local_c8 == 0) {
        if (0 < (int)uVar59) {
          uVar92 = (ulong)uVar59;
          uVar60 = 0;
          psVar88 = (short *)*local_208;
          if (0xf < uVar59) {
            psVar63 = (short *)((long)local_100 + (long)(local_108 + uVar92) * 2);
            if (((local_f8 + uVar92 <= local_d8 || psVar63 <= local_f8) &&
                (psVar88 + uVar92 <= local_d8 || psVar63 <= psVar88)) &&
               (psVar88 + uVar92 <= local_f8 || local_f8 + uVar92 <= psVar88)) {
              uVar60 = uVar92 & 0xfffffff0;
              pauVar75 = (undefined1 (*) [16])(psVar88 + 8);
              puVar76 = (undefined8 *)((long)local_100 + (long)(int)uVar52 * 2 + 0x10);
              uVar55 = uVar60;
              psVar63 = local_220;
              do {
                uVar58 = *(undefined8 *)pauVar75[-1];
                uVar29 = *(undefined8 *)(pauVar75[-1] + 8);
                auVar97 = *pauVar75;
                pauVar75 = pauVar75 + 2;
                uVar55 = uVar55 - 0x10;
                puVar76[-1] = uVar29;
                puVar76[-2] = uVar58;
                uVar117 = auVar97._8_8_;
                puVar76[1] = uVar117;
                uVar123 = auVar97._0_8_;
                *puVar76 = uVar123;
                *(undefined8 *)(psVar63 + -4) = uVar29;
                *(undefined8 *)(psVar63 + -8) = uVar58;
                *(undefined8 *)(psVar63 + 4) = uVar117;
                *(undefined8 *)psVar63 = uVar123;
                puVar76 = puVar76 + 4;
                psVar63 = psVar63 + 0x10;
              } while (uVar55 != 0);
              if (uVar60 == uVar92) goto LAB_0011cf64;
            }
          }
          lVar64 = uVar92 - uVar60;
          psVar88 = psVar88 + uVar60;
          psVar63 = local_f8 + uVar60;
          psVar74 = (short *)((long)local_100 + (uVar60 + (long)(int)uVar52) * 2);
          do {
            sVar50 = *psVar88;
            lVar64 = lVar64 + -1;
            *psVar74 = sVar50;
            *psVar63 = sVar50;
            psVar88 = psVar88 + 1;
            psVar63 = psVar63 + 1;
            psVar74 = psVar74 + 1;
          } while (lVar64 != 0);
        }
      }
      else if (0 < (int)uVar59) {
        uVar92 = (ulong)uVar59;
        uVar60 = 0;
        if (0xf < uVar59) {
          lVar64 = (long)(int)(uVar59 * ((int)local_c8 + -1)) * 2;
          psVar88 = (short *)((long)local_100 + (long)(local_108 + uVar92) * 2);
          psVar63 = (short *)((long)local_1d0 + lVar64);
          psVar74 = (short *)((long)local_1d0 + uVar92 * 2 + lVar64);
          if (((local_f8 + uVar92 <= local_d8 || psVar88 <= local_f8) &&
              (psVar74 <= local_d8 || psVar88 <= psVar63)) &&
             (psVar74 <= local_f8 || local_f8 + uVar92 <= psVar63)) {
            uVar60 = uVar92 & 0xfffffff0;
            pauVar75 = (undefined1 (*) [16])(local_238 + (long)(int)(local_10c * uVar59) * 2);
            puVar76 = (undefined8 *)((long)local_100 + (long)(int)uVar52 * 2 + 0x10);
            psVar88 = local_220;
            uVar55 = uVar60;
            do {
              uVar58 = *(undefined8 *)pauVar75[-1];
              uVar29 = *(undefined8 *)(pauVar75[-1] + 8);
              auVar97 = *pauVar75;
              uVar55 = uVar55 - 0x10;
              pauVar75 = pauVar75 + 2;
              puVar76[-1] = uVar29;
              puVar76[-2] = uVar58;
              uVar117 = auVar97._8_8_;
              puVar76[1] = uVar117;
              uVar123 = auVar97._0_8_;
              *puVar76 = uVar123;
              *(undefined8 *)(psVar88 + -4) = uVar29;
              *(undefined8 *)(psVar88 + -8) = uVar58;
              *(undefined8 *)(psVar88 + 4) = uVar117;
              *(undefined8 *)psVar88 = uVar123;
              psVar88 = psVar88 + 0x10;
              puVar76 = puVar76 + 4;
            } while (uVar55 != 0);
            if (uVar60 == uVar92) goto LAB_0011cf64;
          }
        }
        lVar64 = uVar92 - uVar60;
        psVar88 = local_f8 + uVar60;
        psVar63 = (short *)((long)local_100 + (uVar60 + (long)(int)uVar52) * 2);
        psVar74 = (short *)((long)local_1d0 + (uVar60 + (long)(int)(local_10c * uVar59)) * 2);
        do {
          sVar50 = *psVar74;
          lVar64 = lVar64 + -1;
          *psVar63 = sVar50;
          *psVar88 = sVar50;
          psVar88 = psVar88 + 1;
          psVar63 = psVar63 + 1;
          psVar74 = psVar74 + 1;
        } while (lVar64 != 0);
      }
LAB_0011cf64:
      fir_mem16(local_f8,local_b0,local_f8,uVar59,*(undefined4 *)(param_1 + 0x1c),
                *(undefined8 *)(param_1 + 0xb8),uVar57);
      uVar59 = iVar124 >> (*(int *)(param_1 + 0x10c) == 0);
      compute_impulse_response
                (lVar61,local_b8,local_c0,local_e0,uVar59,*(undefined4 *)(param_1 + 0x1c),uVar57);
      uVar52 = *(uint *)(param_1 + 0x10);
      if ((int)uVar59 < (int)uVar52) {
        uVar4 = uVar52;
        if ((int)uVar52 <= (int)(uVar59 + 1)) {
          uVar4 = uVar59 + 1;
        }
        memset((void *)(local_e0 + (long)(int)uVar59 * 2),0,(ulong)(uVar4 + ~uVar59) * 2 + 2);
      }
      lVar61 = local_b0;
      psVar88 = local_130;
      uVar59 = *(uint *)(param_1 + 0x1c);
      uVar92 = (ulong)(int)uVar59;
      if (0 < (int)uVar59) {
        puVar66 = *(undefined1 **)(param_1 + 0x98);
        if ((uVar59 < 8) || ((puVar89 < puVar66 + uVar92 * 4 && (puVar66 < puVar89 + uVar92 * 4))))
        {
          uVar60 = 0;
        }
        else {
          uVar60 = uVar92 & 0xfffffffffffffff8;
          piVar70 = (int *)(puVar66 + 0x10);
          uVar55 = uVar60;
          puVar76 = local_1d8;
          do {
            iVar53 = piVar70[-4];
            iVar124 = piVar70[-3];
            piVar84 = piVar70 + -2;
            iVar71 = piVar70[-1];
            iVar104 = *piVar70;
            piVar30 = piVar70 + 1;
            piVar31 = piVar70 + 2;
            piVar32 = piVar70 + 3;
            piVar70 = piVar70 + 8;
            uVar55 = uVar55 - 8;
            auVar115._0_8_ = CONCAT44(*piVar30 << 1,iVar104 << 1);
            auVar115._8_4_ = *piVar31 << 1;
            auVar115._12_4_ = *piVar32 << 1;
            *(int *)(puVar76 + -1) = *piVar84 << 1;
            *(int *)((long)puVar76 + -4) = iVar71 << 1;
            *(int *)(puVar76 + -2) = iVar53 << 1;
            *(int *)((long)puVar76 + -0xc) = iVar124 << 1;
            puVar76[1] = auVar115._8_8_;
            *puVar76 = auVar115._0_8_;
            puVar76 = puVar76 + 4;
          } while (uVar55 != 0);
          if (uVar60 == uVar92) goto LAB_0011d050;
        }
        do {
          lVar64 = uVar60 * 4;
          uVar60 = uVar60 + 1;
          *(int *)(puVar89 + lVar64) = *(int *)(puVar66 + lVar64) << 1;
        } while ((long)uVar60 < (long)uVar92);
      }
LAB_0011d050:
      psVar63 = local_120;
      if (0 < (int)uVar52) {
        memset(local_120,0,(ulong)uVar52 << 1);
        lVar61 = local_b0;
      }
      uVar57 = local_d0;
      iir_mem16(psVar63,lVar61,psVar63,uVar52,uVar59,puVar89,local_d0);
      uVar59 = *(uint *)(param_1 + 0x1c);
      uVar92 = (ulong)(int)uVar59;
      if (0 < (int)uVar59) {
        puVar66 = *(undefined1 **)(param_1 + 0xa0);
        if (uVar59 < 8) {
          uVar60 = 0;
        }
        else if ((puVar89 < puVar66 + uVar92 * 4) && (puVar66 < puVar89 + uVar92 * 4)) {
          uVar60 = 0;
        }
        else {
          uVar60 = uVar92 & 0xfffffffffffffff8;
          piVar70 = (int *)(puVar66 + 0x10);
          uVar55 = uVar60;
          puVar76 = local_1d8;
          do {
            piVar84 = piVar70 + -4;
            piVar30 = piVar70 + -3;
            piVar31 = piVar70 + -2;
            piVar32 = piVar70 + -1;
            iVar53 = *piVar70;
            piVar33 = piVar70 + 1;
            piVar34 = piVar70 + 2;
            piVar35 = piVar70 + 3;
            piVar70 = piVar70 + 8;
            uVar55 = uVar55 - 8;
            auVar95._0_8_ = CONCAT44(*piVar30 << 1,*piVar84 << 1);
            auVar95._8_4_ = *piVar31 << 1;
            auVar95._12_4_ = *piVar32 << 1;
            auVar111._0_8_ = CONCAT44(*piVar33 << 1,iVar53 << 1);
            auVar111._8_4_ = *piVar34 << 1;
            auVar111._12_4_ = *piVar35 << 1;
            puVar76[-1] = auVar95._8_8_;
            puVar76[-2] = auVar95._0_8_;
            puVar76[1] = auVar111._8_8_;
            *puVar76 = auVar111._0_8_;
            puVar76 = puVar76 + 4;
          } while (uVar55 != 0);
          if (uVar60 == uVar92) goto LAB_0011d260;
        }
        do {
          lVar61 = uVar60 * 4;
          uVar60 = uVar60 + 1;
          *(int *)(puVar89 + lVar61) = *(int *)(puVar66 + lVar61) << 1;
        } while ((long)uVar60 < (long)uVar92);
      }
LAB_0011d260:
      psVar63 = local_120;
      filter_mem16(local_120,local_b8,local_c0,local_120,*(undefined4 *)(param_1 + 0x10),uVar92,
                   puVar89,uVar57);
      uVar59 = *(uint *)(param_1 + 0x1c);
      uVar92 = (ulong)(int)uVar59;
      if (0 < (int)uVar59) {
        puVar66 = *(undefined1 **)(param_1 + 0xa0);
        if (uVar59 < 8) {
          uVar60 = 0;
        }
        else if ((puVar89 < puVar66 + uVar92 * 4) && (puVar66 < puVar89 + uVar92 * 4)) {
          uVar60 = 0;
        }
        else {
          uVar60 = uVar92 & 0xfffffffffffffff8;
          pauVar75 = (undefined1 (*) [16])(puVar66 + 0x10);
          uVar55 = uVar60;
          puVar76 = local_1d8;
          do {
            auVar97 = pauVar75[-1];
            auVar113 = *pauVar75;
            pauVar75 = pauVar75 + 2;
            uVar55 = uVar55 - 8;
            puVar76[-1] = auVar97._8_8_;
            puVar76[-2] = auVar97._0_8_;
            puVar76[1] = auVar113._8_8_;
            *puVar76 = auVar113._0_8_;
            puVar76 = puVar76 + 4;
          } while (uVar55 != 0);
          if (uVar60 == uVar92) goto LAB_0011d314;
        }
        do {
          lVar61 = uVar60 * 4;
          uVar60 = uVar60 + 1;
          *(undefined4 *)(puVar89 + lVar61) = *(undefined4 *)(puVar66 + lVar61);
        } while ((long)uVar60 < (long)uVar92);
      }
LAB_0011d314:
      filter_mem16(local_d8,local_b8,local_c0,local_d8,*(undefined4 *)(param_1 + 0x10),uVar92,
                   puVar89,uVar57);
      if ((*(int *)(param_1 + 0x10c) == 0) && (0 < *(int *)(param_1 + 0x1c))) {
        lVar64 = *(long *)(param_1 + 0xa0);
        lVar61 = 0;
        do {
          lVar82 = lVar61 * 4;
          lVar61 = lVar61 + 1;
          *(undefined4 *)(lVar64 + lVar82) = *(undefined4 *)(puVar89 + lVar82);
        } while (lVar61 < *(int *)(param_1 + 0x1c));
      }
      uVar59 = *(uint *)(param_1 + 0x10);
      uVar92 = (ulong)(int)uVar59;
      auVar14._8_4_ = uStack_1a8;
      auVar14._0_8_ = local_1b0;
      auVar13._8_4_ = uStack_1a8;
      auVar13._0_8_ = local_1b0;
      if (0 < (int)uVar59) {
        if (uVar59 < 8) {
          uVar60 = 0;
        }
        else {
          uVar60 = 0;
          if (((short *)((long)local_100 + (long)(local_108 + uVar92) * 2) <= psVar88 ||
               psVar88 + uVar92 <= local_d8) &&
             (psVar63 + uVar92 <= psVar88 || psVar88 + uVar92 <= psVar63)) {
            uVar60 = uVar92 & 0xfffffffffffffff8;
            psVar74 = (short *)((long)local_100 + (long)(int)local_e8 * 2);
            uVar55 = uVar60;
            psVar81 = psVar88;
            psVar83 = psVar63;
            do {
              uVar55 = uVar55 - 8;
              auVar112._0_4_ = (int)*psVar74 - (*psVar83 + 1 >> 1);
              auVar112._4_4_ = (int)psVar74[1] - (psVar83[1] + 1 >> 1);
              auVar112._8_4_ = (int)psVar74[2] - (psVar83[2] + 1 >> 1);
              auVar112._12_4_ = (int)psVar74[3] - (psVar83[3] + 1 >> 1);
              auVar96._0_4_ = (int)psVar74[4] - (psVar83[4] + 1 >> 1);
              auVar96._4_4_ = (int)psVar74[5] - (psVar83[5] + 1 >> 1);
              auVar96._8_4_ = (int)psVar74[6] - (psVar83[6] + 1 >> 1);
              auVar96._12_4_ = (int)psVar74[7] - (psVar83[7] + 1 >> 1);
              auVar13._12_4_ = uStack_1a4;
              auVar113 = NEON_smax(auVar112,auVar13,4);
              auVar14._12_4_ = uStack_1a4;
              auVar97 = NEON_smax(auVar96,auVar14,4);
              auVar11._8_4_ = 0x7fff;
              auVar11._0_8_ = 0x7fff00007fff;
              auVar11._12_4_ = 0x7fff;
              auVar113 = NEON_smin(auVar113,auVar11,4);
              auVar12._8_4_ = 0x7fff;
              auVar12._0_8_ = 0x7fff00007fff;
              auVar12._12_4_ = 0x7fff;
              auVar97 = NEON_smin(auVar97,auVar12,4);
              auVar114._0_8_ =
                   CONCAT26(auVar113._12_2_,
                            CONCAT24(auVar113._8_2_,CONCAT22(auVar113._4_2_,auVar113._0_2_)));
              auVar114._8_2_ = auVar97._0_2_;
              auVar114._10_2_ = auVar97._4_2_;
              auVar114._12_2_ = auVar97._8_2_;
              auVar114._14_2_ = auVar97._12_2_;
              *(long *)(psVar81 + 4) = auVar114._8_8_;
              *(undefined8 *)psVar81 = auVar114._0_8_;
              psVar74 = psVar74 + 8;
              psVar81 = psVar81 + 8;
              psVar83 = psVar83 + 8;
            } while (uVar55 != 0);
            if (uVar60 == uVar92) goto LAB_0011d3e0;
          }
        }
        do {
          uVar55 = uVar60 + 1;
          iVar53 = (int)*(short *)((long)local_100 + uVar60 * 2 + (long)(int)local_e8 * 2) -
                   (psVar63[uVar60] + 1 >> 1);
          if (iVar53 < -0x7ffe) {
            iVar53 = -0x7fff;
          }
          if (0x7ffe < iVar53) {
            iVar53 = 0x7fff;
          }
          psVar88[uVar60] = (short)iVar53;
          uVar60 = uVar55;
        } while ((long)uVar55 < (long)uVar92);
      }
LAB_0011d3e0:
      local_100 = (void *)(local_f0 + local_128);
      memset((void *)(local_f0 + local_128),0,uVar92 << 1);
      lVar64 = local_b0;
      psVar63 = local_d8;
      pvVar90 = local_100;
      lVar61 = local_198;
      piVar70 = *(int **)(*(long *)(param_1 + 0x120) + (long)*(int *)(param_1 + 0x128) * 8);
      pcVar67 = *(code **)(piVar70 + 8);
      if (pcVar67 == (code *)0x0) goto LAB_0011dfe0;
      iVar53 = *piVar70;
      if (iVar53 == -1) {
        iVar124 = *(int *)(param_1 + 0x24);
        iVar71 = *(int *)(param_1 + 0x20);
      }
      else {
        iVar124 = local_184;
        iVar71 = local_184;
        if (iVar53 != 0) {
          iVar124 = iVar53 + *(int *)(param_1 + 0x20) + -1;
          iVar71 = *(int *)(param_1 + 0x24) - iVar53;
          if (iVar124 <= local_184) {
            iVar124 = local_184;
          }
          local_184 = iVar71;
          if (iVar124 <= iVar71) {
            local_184 = iVar124;
          }
          iVar124 = local_184 + iVar53;
          iVar71 = (1 - iVar53) + local_184;
        }
      }
      uVar58 = *(undefined8 *)(piVar70 + 0xc);
      uVar54 = *(undefined4 *)(param_1 + 0x10);
      uVar5 = *(undefined4 *)(param_1 + 0x10c);
      uVar6 = *(undefined4 *)(param_1 + 0x114);
      iVar53 = (int)local_108;
      if (*(int *)(param_1 + 0x2c) == 0 || iVar124 <= (int)local_108) {
        iVar53 = iVar124;
      }
      *(undefined4 *)(puVar37 + -0x50) = *(undefined4 *)(param_1 + 0x1c);
      uVar59 = local_164;
      *(long *)(puVar37 + -8) = lVar61;
      lVar82 = local_b8;
      pvVar91 = local_c0;
      lVar61 = local_e0;
      *(undefined4 *)(puVar37 + -0x10) = uVar6;
      *(undefined4 *)(puVar37 + -0x18) = 0;
      *(undefined4 *)(puVar37 + -0x20) = uVar5;
      *(void **)(puVar37 + -0x30) = pvVar90;
      *(long *)(puVar37 + -0x28) = lVar61;
      *(undefined8 *)(puVar37 + -0x40) = uVar56;
      *(undefined8 *)(puVar37 + -0x38) = uVar57;
      *(undefined4 *)(puVar37 + -0x48) = uVar54;
      *(short *)(puVar37 + -0x58) = (short)uVar59;
      *(int *)(puVar37 + -0x60) = iVar53;
      uVar54 = (*pcVar67)(psVar88,psVar63,lVar64,lVar82,pvVar91,piVar65,uVar58,iVar71);
      *(undefined4 *)(*(long *)(param_1 + 0x38) + local_c8 * 4) = uVar54;
      uVar59 = *(uint *)(param_1 + 0x10);
      uVar92 = (ulong)uVar59;
      memset(__s,0,(long)(int)uVar59 << 2);
      if (0 < (int)uVar59) {
        if (uVar59 < 8) {
          uVar55 = 0;
        }
        else {
          uVar55 = uVar92 & 0xfffffff8;
          uVar60 = uVar55;
          piVar70 = local_1f0;
          psVar63 = local_1e8;
          do {
            piVar84 = piVar70 + -4;
            piVar30 = piVar70 + -3;
            piVar31 = piVar70 + -2;
            piVar32 = piVar70 + -1;
            iVar53 = *piVar70;
            iVar124 = piVar70[1];
            iVar71 = piVar70[2];
            iVar104 = piVar70[3];
            uVar57 = *(undefined8 *)(psVar63 + -4);
            uVar58 = *(undefined8 *)psVar63;
            uVar60 = uVar60 - 8;
            piVar70 = piVar70 + 8;
            *(ulong *)(psVar63 + -4) =
                 CONCAT26((short)((ulong)uVar57 >> 0x30) - (short)(*piVar32 + 0x1000U >> 0xd),
                          CONCAT24((short)((ulong)uVar57 >> 0x20) -
                                   (short)(*piVar31 + 0x1000U >> 0xd),
                                   CONCAT22((short)((ulong)uVar57 >> 0x10) -
                                            (short)(*piVar30 + 0x1000U >> 0xd),
                                            (short)uVar57 - (short)(*piVar84 + 0x1000U >> 0xd))));
            *(ulong *)psVar63 =
                 CONCAT26((short)((ulong)uVar58 >> 0x30) - (short)(iVar104 + 0x1000U >> 0xd),
                          CONCAT24((short)((ulong)uVar58 >> 0x20) - (short)(iVar71 + 0x1000U >> 0xd)
                                   ,CONCAT22((short)((ulong)uVar58 >> 0x10) -
                                             (short)(iVar124 + 0x1000U >> 0xd),
                                             (short)uVar58 - (short)(iVar53 + 0x1000U >> 0xd))));
            psVar63 = psVar63 + 8;
          } while (uVar60 != 0);
          if (uVar55 == uVar92) goto LAB_0011d67c;
        }
        lVar61 = uVar92 - uVar55;
        piVar70 = piVar65 + uVar55;
        psVar63 = local_f8 + uVar55;
        do {
          lVar61 = lVar61 + -1;
          *psVar63 = *psVar63 - (short)(*piVar70 + 0x1000U >> 0xd);
          piVar70 = piVar70 + 1;
          psVar63 = psVar63 + 1;
        } while (lVar61 != 0);
      }
LAB_0011d67c:
      sVar50 = compute_rms16(local_f8,uVar92);
      iVar124 = *(int *)(*(long *)(*(long *)(param_1 + 0x120) + (long)*(int *)(param_1 + 0x128) * 8)
                        + 8);
      iVar53 = 0;
      if (local_1b8 != 0) {
        iVar53 = (local_1bc + sVar50 * 0x4000) / local_1b8;
      }
      if (0x7fff < iVar53) {
        iVar53 = 0x7fff;
      }
      uVar59 = local_1b4;
      if (iVar124 != 0) {
        if (iVar124 == 3) {
          iVar53 = scal_quant(iVar53,exc_gain_quant_scal3_bound,8);
          speex_bits_pack(uVar56,iVar53,3);
          puVar66 = exc_gain_quant_scal3;
        }
        else {
          iVar53 = scal_quant(iVar53,&exc_gain_quant_scal1_bound,2);
          speex_bits_pack(uVar56,iVar53,1);
          puVar66 = &exc_gain_quant_scal1;
        }
        uVar59 = local_1c0 * *(short *)(puVar66 + (long)iVar53 * 2) +
                 ((int)(local_1c4 * (int)*(short *)(puVar66 + (long)iVar53 * 2)) >> 0xe);
      }
      signal_div(psVar88,psVar88,uVar59,*(undefined4 *)(param_1 + 0x10));
      lVar61 = *(long *)(*(long *)(param_1 + 0x120) + (long)*(int *)(param_1 + 0x128) * 8);
      pcVar67 = *(code **)(lVar61 + 0x38);
      if (pcVar67 == (code *)0x0) goto LAB_0011dff0;
      uVar57 = *(undefined8 *)(lVar61 + 0x48);
      uVar54 = *(undefined4 *)(param_1 + 0x1c);
      uVar5 = *(undefined4 *)(param_1 + 0x10);
      uVar6 = *(undefined4 *)(param_1 + 0x10c);
      *(undefined4 *)(puVar37 + -0x10) = *(undefined4 *)(lVar61 + 0xc);
      lVar82 = local_b0;
      lVar64 = local_b8;
      pvVar90 = local_c0;
      *(undefined8 *)(puVar37 + -0x20) = local_d0;
      lVar61 = local_e0;
      *(undefined4 *)(puVar37 + -0x18) = uVar6;
      *(long *)(puVar37 + -0x30) = lVar61;
      *(undefined8 *)(puVar37 + -0x28) = uVar56;
      (*pcVar67)(psVar88,lVar82,lVar64,pvVar90,uVar57,uVar54,uVar5,__s);
      signal_mul(__s,__s,uVar59,*(undefined4 *)(param_1 + 0x10));
      iVar53 = (int)local_140;
      iVar124 = (int)((ulong)local_140 >> 0x20);
      uVar52 = *(uint *)(param_1 + 0x10);
      uVar60 = (ulong)uVar52;
      auVar36._8_8_ = uStack_158;
      auVar36._0_8_ = local_160;
      if (0 < (int)uVar52) {
        uVar92 = (ulong)(int)uVar52;
        if (uVar52 < 4) {
          uVar55 = 0;
        }
        else {
          uVar55 = uVar92 & 0xfffffffffffffffc;
          puVar76 = (undefined8 *)(local_f0 + (long)(int)local_e8 * 2);
          uVar68 = uVar55;
          piVar70 = __s;
          piVar84 = piVar65;
          do {
            uVar68 = uVar68 - 4;
            iVar71 = *piVar84 * 2 + *piVar70;
            iVar104 = piVar84[1] * 2 + piVar70[1];
            iVar106 = piVar84[2] * 2 + piVar70[2];
            iVar108 = piVar84[3] * 2 + piVar70[3];
            auVar119._0_4_ = -(uint)(iVar53 < iVar71);
            auVar119._4_4_ = -(uint)(iVar124 < iVar104);
            auVar119._8_4_ = -(uint)(iStack_138 < iVar106);
            auVar119._12_4_ = -(uint)(iStack_134 < iVar108);
            auVar98._0_4_ = -(uint)(iVar71 < (int)local_150);
            auVar98._4_4_ = -(uint)(iVar104 < (int)((ulong)local_150 >> 0x20));
            auVar98._8_4_ = -(uint)(iVar106 < iStack_148);
            auVar98._12_4_ = -(uint)(iVar108 < iStack_144);
            auVar99._0_4_ = iVar71 + 0x2000U >> 0xe;
            auVar99._4_4_ = iVar104 + 0x2000U >> 0xe;
            auVar99._8_4_ = iVar106 + 0x2000U >> 0xe;
            auVar99._12_4_ = iVar108 + 0x2000U >> 0xe;
            auVar99 = auVar99 ^ (auVar99 ^ auVar36) & auVar98;
            auVar9._8_4_ = 0x7fff;
            auVar9._0_8_ = 0x7fff00007fff;
            auVar9._12_4_ = 0x7fff;
            auVar99 = auVar99 ^ (auVar99 ^ auVar9) & auVar119;
            *puVar76 = CONCAT26(auVar99._12_2_,
                                CONCAT24(auVar99._8_2_,CONCAT22(auVar99._4_2_,auVar99._0_2_)));
            puVar76 = puVar76 + 1;
            piVar70 = piVar70 + 4;
            piVar84 = piVar84 + 4;
          } while (uVar68 != 0);
          if (uVar55 == uVar92) goto LAB_0011d8bc;
        }
        do {
          iVar71 = __s[uVar55] + piVar65[uVar55] * 2;
          uVar51 = 0x8001;
          if (-0x1fffe001 < iVar71) {
            uVar51 = (short)(iVar71 + 0x2000U >> 0xe);
          }
          uVar2 = 0x7fff;
          if (iVar71 < 0x1fffe000) {
            uVar2 = uVar51;
          }
          *(undefined2 *)(local_f0 + (long)(int)local_e8 * 2 + uVar55 * 2) = uVar2;
          uVar55 = uVar55 + 1;
        } while ((long)uVar55 < (long)uVar92);
      }
LAB_0011d8bc:
      uVar92 = local_190;
      uVar57 = local_160;
      uVar58 = uStack_158;
      uVar29 = local_150;
      iVar71 = iStack_148;
      iVar104 = iStack_144;
      iVar106 = iStack_138;
      iVar108 = iStack_134;
      psVar88 = local_d8;
      uVar123 = local_d0;
      if (*(int *)(*(long *)(*(long *)(param_1 + 0x120) + (long)*(int *)(param_1 + 0x128) * 8) + 0xc
                  ) != 0) {
        puVar66 = puVar37 + -(uVar60 * 4 + 0xf & 0x7fffffff0);
        uVar52 = *(uint *)(param_1 + 0x10);
        uVar92 = (ulong)uVar52;
        local_108 = puVar37;
        memset(puVar66,0,(long)(int)uVar52 << 2);
        lVar61 = local_b0;
        if (0 < (int)uVar52) {
          if (uVar52 < 0x10) {
            uVar55 = 0;
          }
          else {
            uVar55 = uVar92 & 0xfffffff0;
            uVar60 = uVar55;
            pauVar75 = local_210;
            do {
              auVar97 = pauVar75[-1];
              auVar113 = *pauVar75;
              auVar100 = NEON_ext(auVar97,auVar97,8,1);
              auVar115 = NEON_ext(auVar113,auVar113,8,1);
              uVar60 = uVar60 - 0x10;
              *(ulong *)(pauVar75[-1] + 8) =
                   CONCAT26((short)(auVar100._6_2_ * 0x4666 + 0x1000U >> 0xd),
                            CONCAT24((short)(auVar100._4_2_ * 0x4666 + 0x1000U >> 0xd),
                                     CONCAT22((short)(auVar100._2_2_ * 0x4666 + 0x1000U >> 0xd),
                                              (short)(auVar100._0_2_ * 0x4666 + 0x1000U >> 0xd))));
              *(ulong *)pauVar75[-1] =
                   CONCAT26((short)(auVar97._6_2_ * 0x4666 + 0x1000U >> 0xd),
                            CONCAT24((short)(auVar97._4_2_ * 0x4666 + 0x1000U >> 0xd),
                                     CONCAT22((short)(auVar97._2_2_ * 0x4666 + 0x1000U >> 0xd),
                                              (short)(auVar97._0_2_ * 0x4666 + 0x1000U >> 0xd))));
              *(ulong *)(*pauVar75 + 8) =
                   CONCAT26((short)(auVar115._6_2_ * 0x4666 + 0x1000U >> 0xd),
                            CONCAT24((short)(auVar115._4_2_ * 0x4666 + 0x1000U >> 0xd),
                                     CONCAT22((short)(auVar115._2_2_ * 0x4666 + 0x1000U >> 0xd),
                                              (short)(auVar115._0_2_ * 0x4666 + 0x1000U >> 0xd))));
              *(ulong *)*pauVar75 =
                   CONCAT26((short)(auVar113._6_2_ * 0x4666 + 0x1000U >> 0xd),
                            CONCAT24((short)(auVar113._4_2_ * 0x4666 + 0x1000U >> 0xd),
                                     CONCAT22((short)(auVar113._2_2_ * 0x4666 + 0x1000U >> 0xd),
                                              (short)(auVar113._0_2_ * 0x4666 + 0x1000U >> 0xd))));
              pauVar75 = pauVar75 + 2;
            } while (uVar60 != 0);
            if (uVar55 == uVar92) goto LAB_0011d9d8;
          }
          lVar64 = uVar92 - uVar55;
          psVar88 = local_130 + uVar55;
          do {
            lVar64 = lVar64 + -1;
            *psVar88 = (short)(*psVar88 * 0x4666 + 0x1000U >> 0xd);
            psVar88 = psVar88 + 1;
          } while (lVar64 != 0);
        }
LAB_0011d9d8:
        uVar54 = *(undefined4 *)(param_1 + 0x1c);
        lVar64 = *(long *)(*(long *)(param_1 + 0x120) + (long)*(int *)(param_1 + 0x128) * 8);
        pcVar67 = *(code **)(lVar64 + 0x38);
        uVar57 = *(undefined8 *)(lVar64 + 0x48);
        *(undefined4 *)(puVar66 + -0x18) = *(undefined4 *)(param_1 + 0x10c);
        lVar82 = local_b8;
        pvVar90 = local_c0;
        *(undefined8 *)(puVar66 + -0x20) = local_d0;
        lVar64 = local_e0;
        *(undefined4 *)(puVar66 + -0x10) = 0;
        *(long *)(puVar66 + -0x30) = lVar64;
        *(undefined8 *)(puVar66 + -0x28) = uVar56;
        (*pcVar67)(local_130,lVar61,lVar82,pvVar90,uVar57,uVar54,uVar92,puVar66);
        signal_mul(puVar66,puVar66,
                   ((int)(uVar59 << 1) >> 0x10) * 0x3a2f + ((uVar59 & 0x7fff) * 0x3a2f >> 0xf),
                   *(undefined4 *)(param_1 + 0x10));
        psVar88 = local_d8;
        iVar108 = iStack_134;
        iVar106 = iStack_138;
        iVar104 = iStack_144;
        iVar71 = iStack_148;
        uVar29 = local_150;
        uVar58 = uStack_158;
        uVar57 = local_160;
        uVar92 = local_190;
        iVar53 = (int)local_140;
        iVar124 = (int)((ulong)local_140 >> 0x20);
        uVar59 = *(uint *)(param_1 + 0x10);
        uVar60 = (ulong)(int)uVar59;
        if (0 < (int)uVar59) {
          if (uVar59 < 8) {
            uVar68 = 0;
          }
          else {
            uVar68 = uVar60 & 0xfffffffffffffff8;
            puVar76 = (undefined8 *)(puVar66 + 0x10);
            uVar55 = uVar68;
            piVar70 = local_218;
            do {
              auVar97 = *(undefined1 (*) [16])(puVar76 + -2);
              puVar85 = puVar76 + 1;
              uVar123 = *puVar76;
              uVar55 = uVar55 - 8;
              puVar76 = puVar76 + 4;
              auVar101._0_8_ = CONCAT44(auVar97._4_4_ + piVar70[-3],auVar97._0_4_ + piVar70[-4]);
              auVar101._8_4_ = auVar97._8_4_ + piVar70[-2];
              auVar101._12_4_ = auVar97._12_4_ + piVar70[-1];
              auVar116._0_8_ =
                   CONCAT44((int)((ulong)uVar123 >> 0x20) + piVar70[1],(int)uVar123 + *piVar70);
              auVar116._8_4_ = (int)*puVar85 + piVar70[2];
              auVar116._12_4_ = (int)((ulong)*puVar85 >> 0x20) + piVar70[3];
              *(long *)(piVar70 + -2) = auVar101._8_8_;
              *(undefined8 *)(piVar70 + -4) = auVar101._0_8_;
              *(long *)(piVar70 + 2) = auVar116._8_8_;
              *(undefined8 *)piVar70 = auVar116._0_8_;
              piVar70 = piVar70 + 8;
            } while (uVar55 != 0);
            if (uVar68 == uVar60) goto LAB_0011dafc;
          }
          do {
            uVar55 = uVar68 + 1;
            __s[uVar68] = *(int *)(puVar66 + uVar68 * 4) + __s[uVar68];
            uVar68 = uVar55;
          } while ((long)uVar55 < (long)uVar60);
        }
LAB_0011dafc:
        uVar52 = *(uint *)(param_1 + 0x10);
        uVar60 = (ulong)uVar52;
        puVar37 = local_108;
        uVar123 = local_d0;
      }
      if (0 < (int)uVar52) {
        uVar55 = (ulong)(int)(uint)uVar60;
        if ((uint)uVar60 < 4) {
          uVar68 = 0;
        }
        else {
          uVar68 = uVar55 & 0xfffffffffffffffc;
          puVar76 = (undefined8 *)(local_f0 + (long)(int)local_e8 * 2);
          uVar73 = uVar68;
          piVar70 = __s;
          piVar84 = piVar65;
          do {
            uVar73 = uVar73 - 4;
            iVar94 = *piVar84 * 2 + *piVar70;
            iVar105 = piVar84[1] * 2 + piVar70[1];
            iVar107 = piVar84[2] * 2 + piVar70[2];
            iVar109 = piVar84[3] * 2 + piVar70[3];
            auVar120._0_4_ = -(uint)(iVar53 < iVar94);
            auVar120._4_4_ = -(uint)(iVar124 < iVar105);
            auVar120._8_4_ = -(uint)(iVar106 < iVar107);
            auVar120._12_4_ = -(uint)(iVar108 < iVar109);
            auVar102._0_4_ = -(uint)(iVar94 < (int)uVar29);
            auVar102._4_4_ = -(uint)(iVar105 < (int)((ulong)uVar29 >> 0x20));
            auVar102._8_4_ = -(uint)(iVar107 < iVar71);
            auVar102._12_4_ = -(uint)(iVar109 < iVar104);
            auVar103._0_4_ = iVar94 + 0x2000U >> 0xe;
            auVar103._4_4_ = iVar105 + 0x2000U >> 0xe;
            auVar103._8_4_ = iVar107 + 0x2000U >> 0xe;
            auVar103._12_4_ = iVar109 + 0x2000U >> 0xe;
            auVar15._8_8_ = uVar58;
            auVar15._0_8_ = uVar57;
            auVar103 = auVar103 ^ (auVar103 ^ auVar15) & auVar102;
            auVar8._8_4_ = 0x7fff;
            auVar8._0_8_ = 0x7fff00007fff;
            auVar8._12_4_ = 0x7fff;
            auVar103 = auVar103 ^ (auVar103 ^ auVar8) & auVar120;
            *puVar76 = CONCAT26(auVar103._12_2_,
                                CONCAT24(auVar103._8_2_,CONCAT22(auVar103._4_2_,auVar103._0_2_)));
            puVar76 = puVar76 + 1;
            piVar70 = piVar70 + 4;
            piVar84 = piVar84 + 4;
          } while (uVar73 != 0);
          if (uVar68 == uVar55) goto LAB_0011dbd4;
        }
        do {
          iVar53 = __s[uVar68] + piVar65[uVar68] * 2;
          uVar51 = 0x8001;
          if (-0x1fffe001 < iVar53) {
            uVar51 = (short)(iVar53 + 0x2000U >> 0xe);
          }
          uVar2 = 0x7fff;
          if (iVar53 < 0x1fffe000) {
            uVar2 = uVar51;
          }
          *(undefined2 *)(local_f0 + (long)(int)local_e8 * 2 + uVar68 * 2) = uVar2;
          uVar68 = uVar68 + 1;
        } while ((long)uVar68 < (long)uVar55);
      }
LAB_0011dbd4:
      local_d0 = uVar123;
      if (*(long *)(param_1 + 0xd0) != 0) {
        uVar51 = compute_rms(__s,uVar60);
        *(undefined2 *)(*(long *)(param_1 + 0xd0) + local_c8 * 2) = uVar51;
        uVar60 = (ulong)*(uint *)(param_1 + 0x10);
      }
      iir_mem16(local_100,local_b0,psVar88,uVar60,*(undefined4 *)(param_1 + 0x1c),
                *(undefined8 *)(param_1 + 0x98),uVar123);
      if (*(int *)(param_1 + 0x10c) != 0) {
        filter_mem16(psVar88,local_b8,local_c0,psVar88,*(undefined4 *)(param_1 + 0x10),
                     *(undefined4 *)(param_1 + 0x1c),*(undefined8 *)(param_1 + 0xa0),uVar123);
      }
      local_c8 = local_c8 + 1;
      if ((long)*(int *)(param_1 + 0x14) <= (long)local_c8) break;
      local_d8 = (short *)(ulong)*(uint *)(param_1 + 0x10);
      uVar60 = (ulong)*(uint *)(param_1 + 0x1c);
      local_10c = local_10c + 1;
    } while( true );
  }
  pvVar90 = local_1d0;
  lVar61 = local_228;
  iVar53 = *(int *)(param_1 + 0x128);
  if (0 < iVar53) {
    uVar59 = *(uint *)(param_1 + 0x1c);
    uVar60 = (ulong)(int)uVar59;
    if (0 < (int)uVar59) {
      pvVar91 = *(void **)(param_1 + 0x88);
      uVar55 = (ulong)uVar59;
      if (uVar59 < 0x10) {
        uVar68 = 0;
LAB_0011de04:
        do {
          lVar64 = uVar68 * 2;
          uVar68 = uVar68 + 1;
          *(undefined2 *)((long)pvVar91 + lVar64) = *(undefined2 *)((long)local_170 + lVar64);
        } while ((long)uVar68 < (long)uVar60);
      }
      else {
        if ((pvVar91 < (void *)((long)local_170 + uVar60 * 2)) &&
           (local_170 < (void *)((long)pvVar91 + uVar60 * 2))) {
          uVar68 = 0;
          goto LAB_0011de04;
        }
        uVar68 = uVar60 & 0xfffffffffffffff0;
        pauVar75 = (undefined1 (*) [16])((long)local_170 + 0x10);
        puVar76 = (undefined8 *)((long)pvVar91 + 0x10);
        uVar73 = uVar68;
        do {
          auVar97 = pauVar75[-1];
          auVar113 = *pauVar75;
          pauVar75 = pauVar75 + 2;
          uVar73 = uVar73 - 0x10;
          puVar76[-1] = auVar97._8_8_;
          puVar76[-2] = auVar97._0_8_;
          puVar76[1] = auVar113._8_8_;
          *puVar76 = auVar113._0_8_;
          puVar76 = puVar76 + 4;
        } while (uVar73 != 0);
        if (uVar68 != uVar60) goto LAB_0011de04;
      }
      if (0 < (int)uVar59) {
        uVar60 = *(ulong *)(param_1 + 0x90);
        if ((uVar59 < 0x10) || ((uVar60 < uVar92 + uVar55 * 2 && (uVar92 < uVar60 + uVar55 * 2)))) {
          uVar68 = 0;
        }
        else {
          uVar68 = uVar55 & 0xfffffff0;
          puVar76 = (undefined8 *)(uVar92 + 0x10);
          puVar85 = (undefined8 *)(uVar60 + 0x10);
          uVar73 = uVar68;
          do {
            auVar97 = *(undefined1 (*) [16])(puVar76 + -2);
            uVar57 = *puVar76;
            uVar58 = puVar76[1];
            puVar76 = puVar76 + 4;
            uVar73 = uVar73 - 0x10;
            puVar85[-1] = auVar97._8_8_;
            puVar85[-2] = auVar97._0_8_;
            puVar85[1] = uVar58;
            *puVar85 = uVar57;
            puVar85 = puVar85 + 4;
          } while (uVar73 != 0);
          if (uVar68 == uVar55) goto LAB_0011de70;
        }
        lVar64 = uVar55 - uVar68;
        puVar62 = (undefined2 *)(uVar60 + uVar68 * 2);
        puVar78 = (undefined2 *)(uVar92 + uVar68 * 2);
        do {
          lVar64 = lVar64 + -1;
          *puVar62 = *puVar78;
          puVar62 = puVar62 + 1;
          puVar78 = puVar78 + 1;
        } while (lVar64 != 0);
      }
    }
LAB_0011de70:
    if (iVar53 == 1) {
      if (*(int *)(param_1 + 0xf8) == 0) {
        uVar57 = 0;
      }
      else {
        uVar57 = 0xf;
      }
      speex_bits_pack(uVar56,uVar57,4);
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  uVar59 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0xc);
  memcpy(*(void **)(param_1 + 0x50),
         (void *)((long)pvVar90 +
                 (long)*(int *)(param_1 + 0x18) * -2 + (long)*(int *)(param_1 + 0xc) * 4),
         -(ulong)(uVar59 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar59 << 1);
  if ((*(int *)(param_1 + 0x128) == 0) ||
     (*(code **)(*(long *)(*(long *)(param_1 + 0x120) + (long)*(int *)(param_1 + 0x128) * 8) + 0x38)
      == noise_codebook_quant)) {
    uVar56 = 1;
    *(undefined4 *)(param_1 + 0x2c) = 1;
  }
  else {
    uVar56 = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_0011defc:
  if (*(long *)(lVar61 + 0x28) == local_80) {
    return;
  }
LAB_0011e000:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar56);
}

