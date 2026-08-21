
void sb_encode(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  short sVar5;
  short sVar6;
  short *psVar7;
  short *psVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short *psVar17;
  short *psVar18;
  short *psVar19;
  short *psVar20;
  short *psVar21;
  short *psVar22;
  short *psVar23;
  short *psVar24;
  short *psVar25;
  short *psVar26;
  int *piVar27;
  int *piVar28;
  int *piVar29;
  float fVar30;
  undefined1 (*pauVar31) [16];
  undefined1 *puVar32;
  bool bVar33;
  short sVar34;
  short sVar35;
  int iVar36;
  uint uVar37;
  int iVar38;
  uint uVar39;
  undefined8 uVar40;
  ulong uVar41;
  undefined8 uVar42;
  undefined4 uVar43;
  ulong uVar44;
  short *psVar45;
  ulong uVar46;
  long lVar47;
  undefined1 (*pauVar48) [16];
  undefined2 *puVar49;
  int iVar50;
  ulong uVar51;
  long lVar52;
  ulong uVar53;
  ulong uVar54;
  code *pcVar55;
  undefined8 *puVar56;
  ulong uVar57;
  long lVar58;
  short *psVar59;
  float *pfVar60;
  ulong uVar61;
  undefined1 *puVar62;
  undefined2 *puVar63;
  int iVar64;
  short *psVar65;
  float *pfVar66;
  long lVar67;
  int *piVar68;
  undefined8 *puVar69;
  void *pvVar70;
  long lVar71;
  short *psVar72;
  long lVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  void *pvVar77;
  float fVar78;
  double dVar79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined8 uVar85;
  undefined8 uVar86;
  undefined8 uVar87;
  undefined8 uVar88;
  float fVar89;
  undefined8 local_160;
  int *local_158;
  undefined8 local_150;
  undefined1 *local_148;
  undefined8 *local_140;
  long local_138;
  long local_130;
  long local_128;
  ulong local_120;
  undefined1 *local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  undefined1 *local_f0;
  undefined8 local_e8;
  void *local_e0;
  int local_d4;
  ulong local_d0;
  long local_c8;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  void *local_a8;
  long local_a0;
  long local_98;
  int local_8c;
  uint local_88;
  uint local_84;
  long local_80;
  
  lVar67 = tpidr_el0;
  local_80 = *(long *)(lVar67 + 0x28);
  local_e8 = param_1[7];
  lVar76 = *(long *)*param_1;
  lVar73 = (long)*(int *)((long)param_1 + 0x14);
  lVar47 = param_2 + lVar73 * 2;
  qmf_decomp(param_2,&DAT_001370ac,param_2,lVar47,*(undefined4 *)(param_1 + 2),0x40,param_1[9]);
  if ((*(int *)((long)param_1 + 0xb4) == 0) && (*(int *)(param_1 + 0x1a) == 0)) {
    fVar89 = 1.0;
    fVar78 = fVar89;
  }
  else {
    sVar34 = compute_rms16(param_2,*(undefined4 *)((long)param_1 + 0x14));
    sVar35 = compute_rms16(lVar47,*(undefined4 *)((long)param_1 + 0x14));
    fVar89 = (float)(int)sVar35 + 1.0;
    fVar78 = (float)(int)sVar34 + 1.0;
  }
  lVar52 = (long)&local_160 - ((ulong)*(uint *)((long)param_1 + 0x1c) * 2 + 0xf & 0x3fffffff0);
  local_148 = (undefined1 *)&local_160;
  local_138 = lVar52;
  speex_encoder_ctl(param_1[1],0x68);
  local_c0 = param_3;
  speex_encode_native(param_1[1],param_2,param_3);
  lVar74 = (long)*(int *)(param_1 + 4);
  lVar75 = (long)*(int *)((long)param_1 + 0x14);
  pvVar70 = (void *)(lVar47 + (lVar74 - lVar75) * -2);
  memcpy(pvVar70,(void *)param_1[8],(lVar74 - lVar75) * 2);
  uVar39 = *(int *)(param_1 + 4) - *(int *)((long)param_1 + 0x14);
  local_e0 = pvVar70;
  memcpy((void *)param_1[8],(void *)((long)pvVar70 + (long)*(int *)((long)param_1 + 0x14) * 2),
         -(ulong)(uVar39 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar39 << 1);
  local_f8 = lVar52 - ((ulong)*(uint *)((long)param_1 + 0x1c) * 4 + 0xf & 0x7fffffff0);
  lVar71 = local_f8 - ((ulong)*(uint *)((long)param_1 + 0x1c) * 2 + 0xf & 0x3fffffff0);
  speex_encoder_ctl(param_1[1],100);
  local_128 = lVar71;
  speex_encoder_ctl(param_1[1],0x65,lVar71);
  speex_encoder_ctl(param_1[1],9,&local_84);
  local_84 = (uint)(local_84 == 0);
  uVar51 = (ulong)*(uint *)((long)param_1 + 0x24) * 2 + 0xf & 0x3fffffff0;
  lVar71 = lVar71 - uVar51;
  local_100 = lVar71 - uVar51;
  local_98 = local_100 - uVar51;
  local_a0 = local_98 - uVar51;
  local_d0 = local_a0 - uVar51;
  local_120 = local_d0 - uVar51;
  local_108 = local_120 - uVar51;
  lVar47 = local_108 - uVar51;
  psVar72 = (short *)(lVar47 - ((ulong)(*(uint *)((long)param_1 + 0x24) + 1) * 2 + 0xf & 0x3fffffff0
                               ));
  uVar39 = *(uint *)(param_1 + 4);
  uVar41 = (ulong)uVar39;
  lVar52 = uVar41 * 2;
  uVar51 = (long)psVar72 - (lVar52 + 0xfU & 0x3fffffff0);
  local_110 = lVar47;
  if (*(int *)(param_1 + 3) == 0x50) {
    if (0 < (int)uVar39) {
      lVar52 = param_1[0xb];
      uVar44 = 0;
      do {
        lVar58 = uVar44 * 2;
        uVar53 = uVar44 >> 1;
        uVar44 = uVar44 + 1;
        *(short *)(uVar51 + lVar58) =
             (short)((uint)((int)*(short *)(lVar52 + (uVar53 & 0x7fffffff) * 2) *
                           (int)*(short *)(param_2 + lVar73 * 2 + lVar75 * 2 + lVar74 * -2 + lVar58)
                           ) >> 0xe);
      } while (uVar41 != uVar44);
    }
  }
  else if (0 < (int)uVar39) {
    uVar44 = param_1[0xb];
    if (uVar39 < 0x10) {
      uVar53 = 0;
    }
    else {
      lVar58 = lVar75 * 2;
      uVar53 = 0;
      if (((ulong)(param_2 + lVar52 + lVar58 + lVar73 * 2 + lVar74 * -2) <= uVar51 ||
           uVar51 + lVar52 <= (ulong)(param_2 + lVar58 + lVar73 * 2 + lVar74 * -2)) &&
         (uVar44 + lVar52 <= uVar51 || uVar51 + lVar52 <= uVar44)) {
        uVar53 = uVar41 & 0xfffffff0;
        puVar56 = (undefined8 *)(uVar51 + 0x10);
        psVar45 = (short *)(param_2 + lVar58 + lVar73 * 2 + 0x10 + lVar74 * -2);
        puVar69 = (undefined8 *)(uVar44 + 0x10);
        uVar54 = uVar53;
        do {
          sVar34 = psVar45[-8];
          sVar35 = psVar45[-7];
          sVar5 = psVar45[-6];
          sVar6 = psVar45[-5];
          psVar59 = psVar45 + -4;
          psVar65 = psVar45 + -3;
          psVar7 = psVar45 + -2;
          psVar8 = psVar45 + -1;
          sVar9 = *psVar45;
          sVar10 = psVar45[1];
          sVar11 = psVar45[2];
          sVar12 = psVar45[3];
          sVar13 = psVar45[4];
          sVar14 = psVar45[5];
          sVar15 = psVar45[6];
          sVar16 = psVar45[7];
          uVar86 = puVar69[-1];
          uVar85 = puVar69[-2];
          uVar42 = puVar69[1];
          uVar40 = *puVar69;
          uVar54 = uVar54 - 0x10;
          psVar45 = psVar45 + 0x10;
          puVar69 = puVar69 + 4;
          puVar56[-1] = CONCAT26((short)((uint)((int)(short)((ulong)uVar86 >> 0x30) * (int)*psVar8)
                                        >> 0xe),
                                 CONCAT24((short)((uint)((int)(short)((ulong)uVar86 >> 0x20) *
                                                        (int)*psVar7) >> 0xe),
                                          CONCAT22((short)((uint)((int)(short)((ulong)uVar86 >> 0x10
                                                                              ) * (int)*psVar65) >>
                                                          0xe),
                                                   (short)((uint)((int)(short)uVar86 * (int)*psVar59
                                                                 ) >> 0xe))));
          puVar56[-2] = CONCAT26((short)((uint)((int)(short)((ulong)uVar85 >> 0x30) * (int)sVar6) >>
                                        0xe),
                                 CONCAT24((short)((uint)((int)(short)((ulong)uVar85 >> 0x20) *
                                                        (int)sVar5) >> 0xe),
                                          CONCAT22((short)((uint)((int)(short)((ulong)uVar85 >> 0x10
                                                                              ) * (int)sVar35) >>
                                                          0xe),
                                                   (short)((uint)((int)(short)uVar85 * (int)sVar34)
                                                          >> 0xe))));
          puVar56[1] = CONCAT26((short)((uint)((int)(short)((ulong)uVar42 >> 0x30) * (int)sVar16) >>
                                       0xe),
                                CONCAT24((short)((uint)((int)(short)((ulong)uVar42 >> 0x20) *
                                                       (int)sVar15) >> 0xe),
                                         CONCAT22((short)((uint)((int)(short)((ulong)uVar42 >> 0x10)
                                                                * (int)sVar14) >> 0xe),
                                                  (short)((uint)((int)(short)uVar42 * (int)sVar13)
                                                         >> 0xe))));
          *puVar56 = CONCAT26((short)((uint)((int)(short)((ulong)uVar40 >> 0x30) * (int)sVar12) >>
                                     0xe),
                              CONCAT24((short)((uint)((int)(short)((ulong)uVar40 >> 0x20) *
                                                     (int)sVar11) >> 0xe),
                                       CONCAT22((short)((uint)((int)(short)((ulong)uVar40 >> 0x10) *
                                                              (int)sVar10) >> 0xe),
                                                (short)((uint)((int)(short)uVar40 * (int)sVar9) >>
                                                       0xe))));
          puVar56 = puVar56 + 4;
        } while (uVar54 != 0);
        if (uVar53 == uVar41) goto LAB_00129800;
      }
    }
    lVar58 = uVar53 * 2;
    lVar52 = uVar41 - uVar53;
    psVar45 = (short *)(uVar44 + lVar58);
    puVar49 = (undefined2 *)(uVar51 + lVar58);
    psVar59 = (short *)(param_2 + lVar58 + lVar75 * 2 + lVar73 * 2 + lVar74 * -2);
    do {
      lVar52 = lVar52 + -1;
      *puVar49 = (short)((uint)((int)*psVar45 * (int)*psVar59) >> 0xe);
      psVar45 = psVar45 + 1;
      puVar49 = puVar49 + 1;
      psVar59 = psVar59 + 1;
    } while (lVar52 != 0);
  }
LAB_00129800:
  _spx_autocorr(uVar51,psVar72,*(int *)((long)param_1 + 0x24) + 1);
  sVar34 = *psVar72 + (short)((uint)((int)*(short *)((long)param_1 + 0x2c) * (int)*psVar72) >> 0xf);
  *psVar72 = sVar34;
  uVar39 = *(uint *)((long)param_1 + 0x24);
  uVar51 = (ulong)(int)uVar39;
  if (-1 < (int)uVar39) {
    psVar45 = (short *)param_1[0xc];
    *psVar72 = (short)((uint)((int)*psVar45 * (int)sVar34) >> 0xe);
    if (uVar39 != 0) {
      if (uVar39 < 0x10) {
        uVar44 = 1;
      }
      else if ((psVar72 + 1 < psVar45 + uVar51 + 1) && (psVar45 + 1 < psVar72 + uVar51 + 1)) {
        uVar44 = 1;
      }
      else {
        uVar53 = uVar51 & 0xfffffffffffffff0;
        psVar59 = psVar72 + 9;
        uVar44 = uVar53 | 1;
        psVar65 = psVar45 + 9;
        uVar41 = uVar53;
        do {
          uVar86 = *(undefined8 *)(psVar59 + 4);
          uVar85 = *(undefined8 *)psVar59;
          sVar34 = psVar65[-8];
          sVar35 = psVar65[-7];
          sVar5 = psVar65[-6];
          sVar6 = psVar65[-5];
          psVar7 = psVar65 + -4;
          psVar8 = psVar65 + -3;
          psVar17 = psVar65 + -2;
          psVar18 = psVar65 + -1;
          uVar42 = *(undefined8 *)(psVar65 + 4);
          uVar40 = *(undefined8 *)psVar65;
          uVar41 = uVar41 - 0x10;
          psVar65 = psVar65 + 0x10;
          *(ulong *)(psVar59 + -4) =
               CONCAT26((short)((uint)((int)*psVar18 * (int)psVar59[-1]) >> 0xe),
                        CONCAT24((short)((uint)((int)*psVar17 * (int)psVar59[-2]) >> 0xe),
                                 CONCAT22((short)((uint)((int)*psVar8 * (int)psVar59[-3]) >> 0xe),
                                          (short)((uint)((int)*psVar7 * (int)psVar59[-4]) >> 0xe))))
          ;
          *(ulong *)(psVar59 + -8) =
               CONCAT26((short)((uint)((int)sVar6 * (int)psVar59[-5]) >> 0xe),
                        CONCAT24((short)((uint)((int)sVar5 * (int)psVar59[-6]) >> 0xe),
                                 CONCAT22((short)((uint)((int)sVar35 * (int)psVar59[-7]) >> 0xe),
                                          (short)((uint)((int)sVar34 * (int)psVar59[-8]) >> 0xe))));
          *(ulong *)(psVar59 + 4) =
               CONCAT26((short)((uint)((int)(short)((ulong)uVar42 >> 0x30) *
                                      (int)(short)((ulong)uVar86 >> 0x30)) >> 0xe),
                        CONCAT24((short)((uint)((int)(short)((ulong)uVar42 >> 0x20) *
                                               (int)(short)((ulong)uVar86 >> 0x20)) >> 0xe),
                                 CONCAT22((short)((uint)((int)(short)((ulong)uVar42 >> 0x10) *
                                                        (int)(short)((ulong)uVar86 >> 0x10)) >> 0xe)
                                          ,(short)((uint)((int)(short)uVar42 * (int)(short)uVar86)
                                                  >> 0xe))));
          *(ulong *)psVar59 =
               CONCAT26((short)((uint)((int)(short)((ulong)uVar40 >> 0x30) *
                                      (int)(short)((ulong)uVar85 >> 0x30)) >> 0xe),
                        CONCAT24((short)((uint)((int)(short)((ulong)uVar40 >> 0x20) *
                                               (int)(short)((ulong)uVar85 >> 0x20)) >> 0xe),
                                 CONCAT22((short)((uint)((int)(short)((ulong)uVar40 >> 0x10) *
                                                        (int)(short)((ulong)uVar85 >> 0x10)) >> 0xe)
                                          ,(short)((uint)((int)(short)uVar40 * (int)(short)uVar85)
                                                  >> 0xe))));
          psVar59 = psVar59 + 0x10;
        } while (uVar41 != 0);
        if (uVar53 == uVar51) goto LAB_001299e0;
      }
      do {
        psVar72[uVar44] = (short)((uint)((int)psVar45[uVar44] * (int)psVar72[uVar44]) >> 0xe);
        bVar33 = (long)uVar44 < (long)uVar51;
        uVar44 = uVar44 + 1;
      } while (bVar33);
    }
  }
LAB_001299e0:
  _spx_lpc(lVar71,psVar72);
  uVar51 = local_d0;
  iVar36 = lpc_to_lsp(lVar71,*(undefined4 *)((long)param_1 + 0x24),local_d0,10,0x1999,local_e8);
  if (iVar36 != *(int *)((long)param_1 + 0x24)) {
    uVar37 = lpc_to_lsp(lVar71,*(int *)((long)param_1 + 0x24),uVar51,10,0x666,local_e8);
    uVar39 = *(uint *)((long)param_1 + 0x24);
    uVar41 = (ulong)uVar39;
    if ((uVar37 != uVar39) && (0 < (int)uVar39)) {
      uVar44 = param_1[0xd];
      if ((uVar39 < 0x10) || ((uVar51 < uVar44 + uVar41 * 2 && (uVar44 < uVar51 + uVar41 * 2)))) {
        uVar53 = 0;
      }
      else {
        uVar53 = uVar41 & 0xfffffff0;
        pauVar48 = (undefined1 (*) [16])(uVar44 + 0x10);
        puVar56 = (undefined8 *)(uVar51 + 0x10);
        uVar54 = uVar53;
        do {
          auVar80 = pauVar48[-1];
          auVar83 = *pauVar48;
          pauVar48 = pauVar48 + 2;
          uVar54 = uVar54 - 0x10;
          puVar56[-1] = auVar80._8_8_;
          puVar56[-2] = auVar80._0_8_;
          puVar56[1] = auVar83._8_8_;
          *puVar56 = auVar83._0_8_;
          puVar56 = puVar56 + 4;
        } while (uVar54 != 0);
        if (uVar53 == uVar41) goto LAB_00129a94;
      }
      lVar52 = uVar41 - uVar53;
      puVar49 = (undefined2 *)(uVar44 + uVar53 * 2);
      puVar63 = (undefined2 *)(uVar51 + uVar53 * 2);
      do {
        lVar52 = lVar52 + -1;
        *puVar63 = *puVar49;
        puVar49 = puVar49 + 1;
        puVar63 = puVar63 + 1;
      } while (lVar52 != 0);
    }
  }
LAB_00129a94:
  if (((*(int *)((long)param_1 + 0xb4) == 0) && (*(int *)(param_1 + 0x1a) == 0)) || (local_84 != 0))
  {
LAB_00129ce4:
    iVar36 = *(int *)(param_1 + 0x1b);
    uVar85 = local_c0;
  }
  else {
    if (*(int *)(param_1 + 0x18) != 0) {
      fVar82 = 0.0;
      if (0.0 < *(float *)(param_1 + 0x19) * *(float *)((long)param_1 + 0xc4)) {
        fVar30 = (*(float *)((long)param_1 + 0xc4) * -1e-05) /
                 (*(float *)((long)param_1 + 0xcc) + 1.0);
        fVar82 = 0.1;
        if (fVar30 <= 0.1) {
          fVar82 = fVar30;
        }
        if (fVar82 < -0.1) {
          fVar82 = -0.1;
        }
      }
      fVar82 = fVar82 + *(float *)(param_1 + 0x16);
      if (10.0 < fVar82) {
        fVar82 = 10.0;
      }
      *(float *)(param_1 + 0x16) = fVar82;
    }
    dVar79 = log((double)(fVar89 / fVar78));
    pfVar66 = (float *)((long)param_1 + 0xd4);
    speex_encoder_ctl(param_1[1],0x1d,pfVar66);
    uVar51 = local_d0;
    if (*(int *)((long)param_1 + 0xb4) != 0) {
      iVar36 = *(int *)(lVar76 + 200);
      fVar78 = (float)(dVar79 + dVar79);
      local_88 = iVar36 - 1;
      if (fVar78 <= -4.0) {
        fVar78 = -4.0;
      }
      if (2.0 < fVar78) {
        fVar78 = 2.0;
      }
      fVar78 = fVar78 + 2.0 + *pfVar66;
      if (fVar78 <= -1.0) {
        fVar78 = -1.0;
      }
      *pfVar66 = fVar78;
      if (local_88 != 0) {
        fVar89 = *(float *)(param_1 + 0x16);
        uVar41 = -(ulong)(local_88 >> 0x1f) & 0xfffffff800000000 | (ulong)local_88 << 3;
        iVar50 = (int)fVar89;
        lVar76 = *(long *)(lVar76 + 0xc0) + (long)(int)local_88 * 0x2c;
        pfVar60 = (float *)(lVar76 + ((long)iVar50 + 1) * 4);
        pfVar66 = (float *)(lVar76 + (long)iVar50 * 4);
        uVar39 = iVar36 - 2;
        do {
          if (iVar50 == 10) {
            fVar82 = *pfVar66;
          }
          else {
            fVar82 = (fVar89 - (float)iVar50) * *pfVar60 +
                     ((float)(int)((long)iVar50 + 1) - fVar89) * *pfVar66;
          }
          if (fVar82 <= fVar78) {
            iVar36 = 0;
            if (*(int *)(param_1 + 2) != 0) {
              iVar36 = (*(int *)(*(long *)(param_1[0x1c] + uVar41) + 0x54) *
                       *(int *)((long)param_1 + 0xf4)) / *(int *)(param_1 + 2);
            }
            if (iVar36 <= *(int *)((long)param_1 + 0xbc)) break;
          }
          uVar37 = uVar39 - 1;
          uVar41 = uVar41 - 8;
          pfVar60 = pfVar60 + -0xb;
          pfVar66 = pfVar66 + -0xb;
          local_88 = uVar39;
          uVar39 = uVar37;
        } while (uVar37 != 0xffffffff);
      }
      speex_encoder_ctl(param_1,10,&local_88);
      if (*(int *)(param_1 + 0x18) != 0) {
        speex_encoder_ctl(param_1,0x13,&local_8c);
        *(float *)((long)param_1 + 0xc4) =
             *(float *)((long)param_1 + 0xc4) + (float)(local_8c - *(int *)(param_1 + 0x18));
        *(float *)(param_1 + 0x19) =
             (float)(local_8c - *(int *)(param_1 + 0x18)) * 0.05 + *(float *)(param_1 + 0x19) * 0.95
        ;
        *(float *)((long)param_1 + 0xcc) = *(float *)((long)param_1 + 0xcc) + 1.0;
      }
      goto LAB_00129ce4;
    }
    if (2.0 <= *pfVar66) {
      uVar43 = *(undefined4 *)((long)param_1 + 0xec);
    }
    else {
      uVar43 = 1;
    }
    *(undefined4 *)(param_1 + 0x1d) = uVar43;
    iVar36 = *(int *)(param_1 + 0x1b);
    uVar85 = local_c0;
  }
  local_c0 = uVar85;
  if (iVar36 != 0) {
    speex_bits_pack(uVar85,1,1);
    if (local_84 == 0) {
      uVar43 = *(undefined4 *)(param_1 + 0x1d);
    }
    else {
      uVar43 = 0;
    }
    speex_bits_pack(uVar85,uVar43,3);
    uVar51 = local_d0;
  }
  uVar41 = local_120;
  if ((local_84 != 0) ||
     (lVar76 = *(long *)(param_1[0x1c] + (long)*(int *)(param_1 + 0x1d) * 8), lVar76 == 0)) {
    if (0 < (int)*(uint *)((long)param_1 + 0x14)) {
      memset((void *)(param_2 + ((lVar75 + lVar73) - lVar74) * 2),0,
             (ulong)*(uint *)((long)param_1 + 0x14) << 1);
    }
    uVar51 = (ulong)*(uint *)((long)param_1 + 0x24);
    if (0 < (int)*(uint *)((long)param_1 + 0x24)) {
      lVar73 = param_1[0x12];
      lVar47 = 0;
      do {
        *(undefined4 *)(lVar73 + lVar47 * 4) = 0;
        uVar51 = (ulong)*(int *)((long)param_1 + 0x24);
        lVar47 = lVar47 + 1;
      } while (lVar47 < (long)uVar51);
    }
    *(undefined4 *)(param_1 + 5) = 1;
    iir_mem16(local_e0,param_1[0xf],local_e0,*(undefined4 *)((long)param_1 + 0x14),uVar51,
              param_1[0x10],local_e8);
    bVar33 = local_84 == 0;
    goto LAB_0012aa38;
  }
  local_160 = lVar67;
  (**(code **)(lVar76 + 0x10))(uVar51,local_120,*(undefined4 *)((long)param_1 + 0x24),local_c0);
  uVar39 = *(uint *)((long)param_1 + 0x24);
  uVar44 = (ulong)uVar39;
  if ((*(int *)(param_1 + 5) != 0) && (0 < (int)uVar39)) {
    uVar53 = param_1[0xd];
    uVar54 = (ulong)(int)uVar39;
    if ((uVar39 < 0x10) || ((uVar53 < uVar51 + uVar54 * 2 && (uVar51 < uVar53 + uVar54 * 2)))) {
      uVar61 = 0;
LAB_00129e04:
      do {
        lVar67 = uVar61 * 2;
        uVar61 = uVar61 + 1;
        *(undefined2 *)(uVar53 + lVar67) = *(undefined2 *)(uVar51 + lVar67);
      } while ((long)uVar61 < (long)uVar54);
    }
    else {
      uVar61 = uVar54 & 0xfffffffffffffff0;
      pauVar48 = (undefined1 (*) [16])(uVar51 + 0x10);
      puVar56 = (undefined8 *)(uVar53 + 0x10);
      uVar46 = uVar61;
      do {
        auVar80 = pauVar48[-1];
        auVar83 = *pauVar48;
        pauVar48 = pauVar48 + 2;
        uVar46 = uVar46 - 0x10;
        puVar56[-1] = auVar80._8_8_;
        puVar56[-2] = auVar80._0_8_;
        puVar56[1] = auVar83._8_8_;
        *puVar56 = auVar83._0_8_;
        puVar56 = puVar56 + 4;
      } while (uVar46 != 0);
      if (uVar61 != uVar54) goto LAB_00129e04;
    }
    if (0 < (int)uVar39) {
      uVar53 = param_1[0xe];
      if ((uVar39 < 0x10) || ((uVar53 < uVar41 + uVar44 * 2 && (uVar41 < uVar53 + uVar44 * 2)))) {
        uVar54 = 0;
      }
      else {
        uVar54 = uVar44 & 0xfffffff0;
        pauVar48 = (undefined1 (*) [16])(uVar41 + 0x10);
        puVar56 = (undefined8 *)(uVar53 + 0x10);
        uVar61 = uVar54;
        do {
          auVar80 = pauVar48[-1];
          auVar83 = *pauVar48;
          pauVar48 = pauVar48 + 2;
          uVar61 = uVar61 - 0x10;
          puVar56[-1] = auVar80._8_8_;
          puVar56[-2] = auVar80._0_8_;
          puVar56[1] = auVar83._8_8_;
          *puVar56 = auVar83._0_8_;
          puVar56 = puVar56 + 4;
        } while (uVar61 != 0);
        if (uVar54 == uVar44) goto LAB_00129e70;
      }
      lVar67 = uVar44 - uVar54;
      puVar49 = (undefined2 *)(uVar53 + uVar54 * 2);
      puVar63 = (undefined2 *)(uVar41 + uVar54 * 2);
      do {
        lVar67 = lVar67 + -1;
        *puVar49 = *puVar63;
        puVar49 = puVar49 + 1;
        puVar63 = puVar63 + 1;
      } while (lVar67 != 0);
    }
  }
LAB_00129e70:
  uVar54 = lVar47 - (uVar44 * 4 + 0xf & 0x7fffffff0);
  uVar44 = (ulong)*(uint *)(param_1 + 3);
  uVar53 = uVar44 * 2 + 0xf & 0x3fffffff0;
  local_c8 = uVar54 - uVar53;
  pvVar70 = (void *)(local_c8 - (uVar44 * 4 + 0xf & 0x7fffffff0));
  puVar62 = (undefined1 *)((long)pvVar70 - uVar53);
  if (0 < *(int *)((long)param_1 + 0x1c)) {
    local_140 = (undefined8 *)(uVar54 + 0x10);
    local_150 = (undefined1 (*) [16])(puVar62 + 0x10);
    uVar53 = 0;
    local_158 = (int *)((long)pvVar70 + 0x10);
    uVar85 = local_e8;
    local_118 = puVar62;
    do {
      lVar67 = local_108;
      local_a8 = (void *)((long)local_e0 + (long)((int)uVar44 * (int)uVar53) * 2);
      local_b0 = (long)puVar62 - (uVar44 * 2 + 0xf & 0x3fffffff0);
      uVar44 = (ulong)*(uint *)(param_1 + 3) * 2 + 0xf & 0x3fffffff0;
      pvVar77 = (void *)(local_b0 - uVar44);
      lVar76 = (long)pvVar77 - uVar44;
      local_b8 = lVar76;
      lsp_interpolate(param_1[0xd],uVar51,local_108,*(undefined4 *)((long)param_1 + 0x24),
                      uVar53 & 0xffffffff,*(undefined4 *)((long)param_1 + 0x1c));
      lVar47 = local_110;
      lsp_interpolate(param_1[0xe],uVar41,local_110,*(undefined4 *)((long)param_1 + 0x24),
                      uVar53 & 0xffffffff,*(undefined4 *)((long)param_1 + 0x1c));
      lsp_enforce_margin(lVar67,*(undefined4 *)((long)param_1 + 0x24),0x19a);
      lsp_enforce_margin(lVar47,*(undefined4 *)((long)param_1 + 0x24),0x19a);
      lVar73 = local_100;
      lsp_to_lpc(lVar67,local_100,*(undefined4 *)((long)param_1 + 0x24),uVar85);
      lsp_to_lpc(lVar47,param_1[0xf],*(undefined4 *)((long)param_1 + 0x24),uVar85);
      bw_lpc(*(undefined2 *)((long)param_1 + 0x2e),lVar73,local_98,
             *(undefined4 *)((long)param_1 + 0x24));
      bw_lpc(*(undefined2 *)(param_1 + 6),lVar73,local_a0,*(undefined4 *)((long)param_1 + 0x24));
      lVar47 = local_b0;
      lVar73 = param_1[0x13];
      iVar36 = 0x2000;
      *(undefined4 *)(lVar73 + uVar53 * 4) = 0x2000;
      uVar51 = (ulong)*(uint *)((long)param_1 + 0x24);
      lVar67 = param_1[0xf];
      if (0 < (int)*(uint *)((long)param_1 + 0x24)) {
        lVar52 = 0;
        iVar50 = 0x2000;
        iVar36 = 0x2000;
        do {
          psVar72 = (short *)(lVar67 + lVar52 * 2);
          lVar52 = lVar52 + 2;
          iVar38 = (int)psVar72[1];
          iVar64 = (int)*psVar72;
          iVar50 = iVar64 + iVar38 + iVar50;
          *(int *)(lVar73 + uVar53 * 4) = iVar50;
          uVar51 = (ulong)*(int *)((long)param_1 + 0x24);
          iVar36 = (iVar36 + iVar38) - iVar64;
        } while (lVar52 < (long)uVar51);
      }
      iVar36 = iVar36 + 0x52;
      iVar50 = 0;
      if (iVar36 != 0) {
        iVar50 = ((iVar36 * 0x10000 >> 0x11) + *(int *)(local_f8 + uVar53 * 4) * 0x80 + 0x2900) /
                 iVar36;
      }
      if (iVar50 < -0x7ffe) {
        iVar50 = -0x7fff;
      }
      if (0x7ffe < iVar50) {
        iVar50 = 0x7fff;
      }
      fir_mem16(local_a8,lVar67,local_b0,*(undefined4 *)(param_1 + 3),uVar51,param_1[0x11],uVar85);
      sVar34 = compute_rms16(lVar47,*(undefined4 *)(param_1 + 3));
      if (*(long *)(*(long *)(param_1[0x1c] + (long)*(int *)(param_1 + 0x1d) * 8) + 0x38) == 0) {
        iVar64 = (int)(short)(*(short *)(local_138 + uVar53 * 2) + 1);
        iVar36 = 0;
        if (iVar64 != 0) {
          iVar36 = ((int)(short)iVar50 * (int)sVar34 + (iVar64 >> 1)) / iVar64;
        }
        uVar39 = scal_quant(iVar36,&DAT_0013712c,0x20);
        uVar39 = uVar39 & ((int)uVar39 >> 0x1f ^ 0xffffffffU);
        if (0x1e < (int)uVar39) {
          uVar39 = 0x1f;
        }
        speex_bits_pack(local_c0,uVar39,5);
        lVar47 = local_b0;
        if (param_1[0x15] != 0) {
          *(short *)(param_1[0x15] + uVar53 * 2) = sVar34;
        }
      }
      else {
        iVar36 = (int)(short)iVar50;
        iVar64 = (int)(short)(*(short *)(local_128 + uVar53 * 2) + 1);
        uVar39 = 0;
        if (iVar64 != 0) {
          uVar39 = (iVar36 * (short)(sVar34 + 1) + (iVar64 >> 1)) / iVar64;
        }
        if (*(int *)(param_1 + 3) == 0x50) {
          uVar39 = (short)uVar39 * 0x5a83 + 0x4000U >> 0xf;
        }
        local_f0 = puVar62;
        iVar38 = scal_quant(uVar39,&DAT_0013716c,0x10);
        speex_bits_pack(local_c0,iVar38,4);
        uVar85 = local_e8;
        uVar39 = (uint)(*(short *)(&DAT_0013716c + (long)iVar38 * 2) * 0x6fd2) >> 0xf;
        if (*(int *)(param_1 + 3) == 0x50) {
          uVar39 = (short)uVar39 * 0x5a82 + 0x2000 >> 0xe;
        }
        sVar34 = 0;
        if (iVar36 != 0) {
          sVar34 = (short)((int)((-(uVar39 >> 0xf & 1) & 0xff000000 | (uVar39 & 0xffff) << 8) +
                                ((iVar50 << 0x10) >> 0x11)) / iVar36);
        }
        compute_impulse_response
                  (param_1[0xf],local_98,local_a0,local_c8,*(int *)(param_1 + 3),
                   *(undefined4 *)((long)param_1 + 0x24),local_e8);
        uVar39 = *(uint *)(param_1 + 3);
        if (0 < (int)uVar39) {
          memset(pvVar77,0,(ulong)uVar39 << 1);
        }
        uVar86 = local_c0;
        puVar62 = local_f0;
        uVar37 = *(uint *)((long)param_1 + 0x24);
        uVar51 = (ulong)(int)uVar37;
        if (0 < (int)uVar37) {
          uVar41 = param_1[0x10];
          if (uVar37 < 8) {
            uVar44 = 0;
          }
          else if ((uVar54 < uVar41 + uVar51 * 4) && (uVar41 < uVar54 + uVar51 * 4)) {
            uVar44 = 0;
          }
          else {
            uVar44 = uVar51 & 0xfffffffffffffff8;
            pauVar48 = (undefined1 (*) [16])(uVar41 + 0x10);
            uVar61 = uVar44;
            puVar56 = local_140;
            do {
              uVar40 = *(undefined8 *)pauVar48[-1];
              pauVar31 = pauVar48 + -1;
              auVar80 = *pauVar48;
              pauVar48 = pauVar48 + 2;
              uVar61 = uVar61 - 8;
              puVar56[-1] = *(undefined8 *)(*pauVar31 + 8);
              puVar56[-2] = uVar40;
              puVar56[1] = auVar80._8_8_;
              *puVar56 = auVar80._0_8_;
              puVar56 = puVar56 + 4;
            } while (uVar61 != 0);
            if (uVar44 == uVar51) goto LAB_0012a2ec;
          }
          do {
            lVar47 = uVar44 * 4;
            uVar44 = uVar44 + 1;
            *(undefined4 *)(uVar54 + lVar47) = *(undefined4 *)(uVar41 + lVar47);
          } while ((long)uVar44 < (long)uVar51);
        }
LAB_0012a2ec:
        local_d4 = sVar34 * iVar64;
        iir_mem16(pvVar77,param_1[0xf],pvVar77,(ulong)uVar39,uVar51,uVar54,uVar85);
        lVar47 = local_b8;
        uVar39 = *(uint *)((long)param_1 + 0x24);
        uVar51 = (ulong)(int)uVar39;
        if (0 < (int)uVar39) {
          uVar41 = param_1[0x12];
          if (uVar39 < 8) {
            uVar44 = 0;
          }
          else if ((uVar54 < uVar41 + uVar51 * 4) && (uVar41 < uVar54 + uVar51 * 4)) {
            uVar44 = 0;
          }
          else {
            uVar44 = uVar51 & 0xfffffffffffffff8;
            pauVar48 = (undefined1 (*) [16])(uVar41 + 0x10);
            uVar61 = uVar44;
            puVar56 = local_140;
            do {
              auVar80 = pauVar48[-1];
              auVar83 = *pauVar48;
              pauVar48 = pauVar48 + 2;
              uVar61 = uVar61 - 8;
              puVar56[-1] = auVar80._8_8_;
              puVar56[-2] = auVar80._0_8_;
              puVar56[1] = auVar83._8_8_;
              *puVar56 = auVar83._0_8_;
              puVar56 = puVar56 + 4;
            } while (uVar61 != 0);
            if (uVar44 == uVar51) goto LAB_0012a3a4;
          }
          do {
            lVar67 = uVar44 * 4;
            uVar44 = uVar44 + 1;
            *(undefined4 *)(uVar54 + lVar67) = *(undefined4 *)(uVar41 + lVar67);
          } while ((long)uVar44 < (long)uVar51);
        }
LAB_0012a3a4:
        uVar37 = local_d4 << 6;
        filter_mem16(pvVar77,local_98,local_a0,pvVar77,*(undefined4 *)(param_1 + 3),uVar51,uVar54,
                     uVar85);
        uVar39 = *(uint *)((long)param_1 + 0x24);
        uVar51 = (ulong)(int)uVar39;
        if (0 < (int)uVar39) {
          uVar41 = param_1[0x12];
          if (uVar39 < 8) {
            uVar44 = 0;
          }
          else if ((uVar54 < uVar41 + uVar51 * 4) && (uVar41 < uVar54 + uVar51 * 4)) {
            uVar44 = 0;
          }
          else {
            uVar44 = uVar51 & 0xfffffffffffffff8;
            pauVar48 = (undefined1 (*) [16])(uVar41 + 0x10);
            uVar61 = uVar44;
            puVar56 = local_140;
            do {
              auVar80 = pauVar48[-1];
              auVar83 = *pauVar48;
              pauVar48 = pauVar48 + 2;
              uVar61 = uVar61 - 8;
              puVar56[-1] = auVar80._8_8_;
              puVar56[-2] = auVar80._0_8_;
              puVar56[1] = auVar83._8_8_;
              *puVar56 = auVar83._0_8_;
              puVar56 = puVar56 + 4;
            } while (uVar61 != 0);
            if (uVar44 == uVar51) goto LAB_0012a458;
          }
          do {
            lVar67 = uVar44 * 4;
            uVar44 = uVar44 + 1;
            *(undefined4 *)(uVar54 + lVar67) = *(undefined4 *)(uVar41 + lVar67);
          } while ((long)uVar44 < (long)uVar51);
        }
LAB_0012a458:
        filter_mem16(local_a8,local_98,local_a0,lVar47,*(undefined4 *)(param_1 + 3),uVar51,uVar54,
                     uVar85);
        puVar32 = local_118;
        uVar39 = *(uint *)(param_1 + 3);
        uVar51 = (ulong)(int)uVar39;
        if (0 < (int)uVar39) {
          if (uVar39 < 0x10) {
            uVar41 = 0;
          }
          else {
            uVar41 = uVar51 & 0xfffffffffffffff0;
            psVar72 = (short *)(lVar47 + 0x10);
            puVar56 = (undefined8 *)((long)pvVar77 + 0x10);
            uVar44 = uVar41;
            pauVar48 = local_150;
            do {
              psVar45 = psVar72 + -8;
              psVar59 = psVar72 + -7;
              psVar65 = psVar72 + -6;
              psVar7 = psVar72 + -5;
              psVar8 = psVar72 + -4;
              psVar17 = psVar72 + -3;
              psVar18 = psVar72 + -2;
              psVar19 = psVar72 + -1;
              sVar34 = *psVar72;
              psVar20 = psVar72 + 1;
              psVar21 = psVar72 + 2;
              psVar22 = psVar72 + 3;
              psVar23 = psVar72 + 4;
              psVar24 = psVar72 + 5;
              psVar25 = psVar72 + 6;
              psVar26 = psVar72 + 7;
              uVar42 = puVar56[-1];
              uVar40 = puVar56[-2];
              uVar88 = puVar56[1];
              uVar87 = *puVar56;
              psVar72 = psVar72 + 0x10;
              puVar56 = puVar56 + 4;
              uVar44 = uVar44 - 0x10;
              auVar80._0_8_ =
                   CONCAT26(*psVar7 - (short)((ulong)uVar40 >> 0x30),
                            CONCAT24(*psVar65 - (short)((ulong)uVar40 >> 0x20),
                                     CONCAT22(*psVar59 - (short)((ulong)uVar40 >> 0x10),
                                              *psVar45 - (short)uVar40)));
              auVar80._8_2_ = *psVar8 - (short)uVar42;
              auVar80._10_2_ = *psVar17 - (short)((ulong)uVar42 >> 0x10);
              auVar80._12_2_ = *psVar18 - (short)((ulong)uVar42 >> 0x20);
              auVar80._14_2_ = *psVar19 - (short)((ulong)uVar42 >> 0x30);
              auVar83._0_8_ =
                   CONCAT26(*psVar22 - (short)((ulong)uVar87 >> 0x30),
                            CONCAT24(*psVar21 - (short)((ulong)uVar87 >> 0x20),
                                     CONCAT22(*psVar20 - (short)((ulong)uVar87 >> 0x10),
                                              sVar34 - (short)uVar87)));
              auVar83._8_2_ = *psVar23 - (short)uVar88;
              auVar83._10_2_ = *psVar24 - (short)((ulong)uVar88 >> 0x10);
              auVar83._12_2_ = *psVar25 - (short)((ulong)uVar88 >> 0x20);
              auVar83._14_2_ = *psVar26 - (short)((ulong)uVar88 >> 0x30);
              *(long *)(pauVar48[-1] + 8) = auVar80._8_8_;
              *(undefined8 *)pauVar48[-1] = auVar80._0_8_;
              *(long *)(*pauVar48 + 8) = auVar83._8_8_;
              *(undefined8 *)*pauVar48 = auVar83._0_8_;
              pauVar48 = pauVar48 + 2;
            } while (uVar44 != 0);
            if (uVar41 == uVar51) goto LAB_0012a500;
          }
          do {
            lVar67 = uVar41 * 2;
            uVar41 = uVar41 + 1;
            *(short *)(local_118 + lVar67) =
                 *(short *)(lVar47 + lVar67) - *(short *)((long)pvVar77 + lVar67);
          } while ((long)uVar41 < (long)uVar51);
        }
LAB_0012a500:
        signal_div(local_118,local_118,uVar37);
        iVar36 = *(int *)(param_1 + 3);
        memset(pvVar70,0,(long)iVar36 << 2);
        uVar40 = param_1[0xf];
        uVar43 = *(undefined4 *)((long)param_1 + 0x24);
        lVar47 = *(long *)(param_1[0x1c] + (long)*(int *)(param_1 + 0x1d) * 8);
        uVar2 = *(undefined4 *)(param_1 + 0x1e);
        pcVar55 = *(code **)(lVar47 + 0x38);
        uVar42 = *(undefined8 *)(lVar47 + 0x48);
        *(undefined4 *)(lVar76 + -0x10) = *(undefined4 *)(lVar47 + 0xc);
        lVar73 = local_98;
        lVar67 = local_a0;
        lVar47 = local_c8;
        *(undefined4 *)(lVar76 + -0x18) = uVar2;
        *(undefined8 *)(lVar76 + -0x20) = uVar85;
        *(long *)(lVar76 + -0x30) = lVar47;
        *(undefined8 *)(lVar76 + -0x28) = uVar86;
        (*pcVar55)(puVar32,uVar40,lVar73,lVar67,uVar42,uVar43,iVar36,pvVar70);
        signal_mul(pvVar70,pvVar70,uVar37,*(undefined4 *)(param_1 + 3));
        if (*(int *)(*(long *)(param_1[0x1c] + (long)*(int *)(param_1 + 0x1d) * 8) + 0xc) != 0) {
          pvVar77 = (void *)(lVar76 - ((ulong)*(uint *)(param_1 + 3) * 4 + 0xf & 0x7fffffff0));
          uVar39 = *(uint *)(param_1 + 3);
          uVar51 = (ulong)uVar39;
          local_130 = lVar76;
          memset(pvVar77,0,(long)(int)uVar39 << 2);
          uVar86 = local_c0;
          puVar32 = local_118;
          if (0 < (int)uVar39) {
            if (uVar39 < 0x10) {
              uVar44 = 0;
            }
            else {
              uVar44 = uVar51 & 0xfffffff0;
              uVar41 = uVar44;
              pauVar48 = local_150;
              do {
                auVar80 = pauVar48[-1];
                auVar83 = *pauVar48;
                auVar81 = NEON_ext(auVar80,auVar80,8,1);
                auVar84 = NEON_ext(auVar83,auVar83,8,1);
                uVar41 = uVar41 - 0x10;
                *(ulong *)(pauVar48[-1] + 8) =
                     CONCAT26((short)(auVar81._6_2_ * 0x5000 + 0x1000U >> 0xd),
                              CONCAT24((short)(auVar81._4_2_ * 0x5000 + 0x1000U >> 0xd),
                                       CONCAT22((short)(auVar81._2_2_ * 0x5000 + 0x1000U >> 0xd),
                                                (short)(auVar81._0_2_ * 0x5000 + 0x1000U >> 0xd))));
                *(ulong *)pauVar48[-1] =
                     CONCAT26((short)(auVar80._6_2_ * 0x5000 + 0x1000U >> 0xd),
                              CONCAT24((short)(auVar80._4_2_ * 0x5000 + 0x1000U >> 0xd),
                                       CONCAT22((short)(auVar80._2_2_ * 0x5000 + 0x1000U >> 0xd),
                                                (short)(auVar80._0_2_ * 0x5000 + 0x1000U >> 0xd))));
                *(ulong *)(*pauVar48 + 8) =
                     CONCAT26((short)(auVar84._6_2_ * 0x5000 + 0x1000U >> 0xd),
                              CONCAT24((short)(auVar84._4_2_ * 0x5000 + 0x1000U >> 0xd),
                                       CONCAT22((short)(auVar84._2_2_ * 0x5000 + 0x1000U >> 0xd),
                                                (short)(auVar84._0_2_ * 0x5000 + 0x1000U >> 0xd))));
                *(ulong *)*pauVar48 =
                     CONCAT26((short)(auVar83._6_2_ * 0x5000 + 0x1000U >> 0xd),
                              CONCAT24((short)(auVar83._4_2_ * 0x5000 + 0x1000U >> 0xd),
                                       CONCAT22((short)(auVar83._2_2_ * 0x5000 + 0x1000U >> 0xd),
                                                (short)(auVar83._0_2_ * 0x5000 + 0x1000U >> 0xd))));
                pauVar48 = pauVar48 + 2;
              } while (uVar41 != 0);
              if (uVar44 == uVar51) goto LAB_0012a694;
            }
            lVar47 = uVar51 - uVar44;
            psVar72 = (short *)(local_118 + uVar44 * 2);
            do {
              lVar47 = lVar47 + -1;
              *psVar72 = (short)(*psVar72 * 0x5000 + 0x1000U >> 0xd);
              psVar72 = psVar72 + 1;
            } while (lVar47 != 0);
          }
LAB_0012a694:
          uVar40 = param_1[0xf];
          uVar43 = *(undefined4 *)((long)param_1 + 0x24);
          lVar47 = *(long *)(param_1[0x1c] + (long)*(int *)(param_1 + 0x1d) * 8);
          pcVar55 = *(code **)(lVar47 + 0x38);
          uVar42 = *(undefined8 *)(lVar47 + 0x48);
          *(undefined4 *)((long)pvVar77 + -0x18) = *(undefined4 *)(param_1 + 0x1e);
          lVar73 = local_98;
          lVar67 = local_a0;
          lVar47 = local_c8;
          *(undefined4 *)((long)pvVar77 + -0x10) = 0;
          *(undefined8 *)((long)pvVar77 + -0x20) = uVar85;
          *(long *)((long)pvVar77 + -0x30) = lVar47;
          *(undefined8 *)((long)pvVar77 + -0x28) = uVar86;
          (*pcVar55)(puVar32,uVar40,lVar73,lVar67,uVar42,uVar43,uVar51,pvVar77);
          signal_mul(pvVar77,pvVar77,
                     ((local_d4 << 7) >> 0x10) * 0x3333 +
                     ((uVar37 & 0x7fc0) * 0x3333 + 0x4000 >> 0xf),*(undefined4 *)(param_1 + 3));
          uVar39 = *(uint *)(param_1 + 3);
          uVar51 = (ulong)(int)uVar39;
          if (0 < (int)uVar39) {
            if (uVar39 < 8) {
              uVar41 = 0;
            }
            else {
              uVar41 = uVar51 & 0xfffffffffffffff8;
              puVar56 = (undefined8 *)((long)pvVar77 + 0x10);
              uVar44 = uVar41;
              piVar68 = local_158;
              do {
                puVar69 = puVar56 + -2;
                puVar3 = puVar56 + -1;
                puVar4 = puVar56 + 1;
                uVar86 = *puVar56;
                uVar44 = uVar44 - 8;
                puVar56 = puVar56 + 4;
                auVar81._0_8_ =
                     CONCAT44((int)((ulong)*puVar69 >> 0x20) + piVar68[-3],
                              (int)*puVar69 + piVar68[-4]);
                auVar81._8_4_ = (int)*puVar3 + piVar68[-2];
                auVar81._12_4_ = (int)((ulong)*puVar3 >> 0x20) + piVar68[-1];
                auVar84._0_8_ =
                     CONCAT44((int)((ulong)uVar86 >> 0x20) + piVar68[1],(int)uVar86 + *piVar68);
                auVar84._8_4_ = (int)*puVar4 + piVar68[2];
                auVar84._12_4_ = (int)((ulong)*puVar4 >> 0x20) + piVar68[3];
                *(long *)(piVar68 + -2) = auVar81._8_8_;
                *(undefined8 *)(piVar68 + -4) = auVar81._0_8_;
                *(long *)(piVar68 + 2) = auVar84._8_8_;
                *(undefined8 *)piVar68 = auVar84._0_8_;
                piVar68 = piVar68 + 8;
              } while (uVar44 != 0);
              if (uVar41 == uVar51) goto LAB_0012a798;
            }
            do {
              lVar47 = uVar41 * 4;
              uVar41 = uVar41 + 1;
              *(int *)((long)pvVar70 + lVar47) =
                   *(int *)((long)pvVar77 + lVar47) + *(int *)((long)pvVar70 + lVar47);
            } while ((long)uVar41 < (long)uVar51);
          }
        }
LAB_0012a798:
        lVar47 = local_b0;
        uVar41 = local_120;
        uVar39 = *(uint *)(param_1 + 3);
        if (0 < (int)uVar39) {
          uVar51 = (ulong)(int)uVar39;
          if (uVar39 < 8) {
            uVar44 = 0;
          }
          else {
            uVar44 = uVar51 & 0xfffffffffffffff8;
            puVar56 = (undefined8 *)(local_b0 + 8);
            uVar61 = uVar44;
            piVar68 = local_158;
            do {
              piVar1 = piVar68 + -4;
              piVar27 = piVar68 + -3;
              piVar28 = piVar68 + -2;
              piVar29 = piVar68 + -1;
              iVar36 = *piVar68;
              iVar50 = piVar68[1];
              iVar64 = piVar68[2];
              iVar38 = piVar68[3];
              piVar68 = piVar68 + 8;
              uVar61 = uVar61 - 8;
              puVar56[-1] = CONCAT26((short)(*piVar29 + 0x2000U >> 0xe),
                                     CONCAT24((short)(*piVar28 + 0x2000U >> 0xe),
                                              CONCAT22((short)(*piVar27 + 0x2000U >> 0xe),
                                                       (short)(*piVar1 + 0x2000U >> 0xe))));
              *puVar56 = CONCAT26((short)(iVar38 + 0x2000U >> 0xe),
                                  CONCAT24((short)(iVar64 + 0x2000U >> 0xe),
                                           CONCAT22((short)(iVar50 + 0x2000U >> 0xe),
                                                    (short)(iVar36 + 0x2000U >> 0xe))));
              puVar56 = puVar56 + 2;
            } while (uVar61 != 0);
            if (uVar44 == uVar51) goto LAB_0012a828;
          }
          do {
            *(short *)(local_b0 + uVar44 * 2) =
                 (short)(*(int *)((long)pvVar70 + uVar44 * 4) + 0x2000U >> 0xe);
            uVar44 = uVar44 + 1;
          } while ((long)uVar44 < (long)uVar51);
        }
LAB_0012a828:
        if (param_1[0x15] != 0) {
          sVar34 = compute_rms(pvVar70);
          *(short *)(param_1[0x15] + uVar53 * 2) = (short)((uint)(sVar34 * 0x5a83) >> 0xf);
          uVar39 = *(uint *)(param_1 + 3);
        }
        sVar34 = compute_rms16(lVar47,uVar39);
      }
      uVar51 = local_d0;
      *(short *)(param_1[0x14] + uVar53 * 2) = sVar34;
      uVar39 = *(uint *)((long)param_1 + 0x24);
      uVar44 = (ulong)(int)uVar39;
      uVar61 = param_1[0x10];
      if (0 < (int)uVar39) {
        if (uVar39 < 8) {
          uVar46 = 0;
        }
        else if ((uVar54 < uVar61 + uVar44 * 4) && (uVar61 < uVar54 + uVar44 * 4)) {
          uVar46 = 0;
        }
        else {
          uVar46 = uVar44 & 0xfffffffffffffff8;
          pauVar48 = (undefined1 (*) [16])(uVar61 + 0x10);
          uVar57 = uVar46;
          puVar56 = local_140;
          do {
            auVar80 = pauVar48[-1];
            auVar83 = *pauVar48;
            pauVar48 = pauVar48 + 2;
            uVar57 = uVar57 - 8;
            puVar56[-1] = auVar80._8_8_;
            puVar56[-2] = auVar80._0_8_;
            puVar56[1] = auVar83._8_8_;
            *puVar56 = auVar83._0_8_;
            puVar56 = puVar56 + 4;
          } while (uVar57 != 0);
          if (uVar46 == uVar44) goto LAB_0012a8fc;
        }
        do {
          lVar67 = uVar46 * 4;
          uVar46 = uVar46 + 1;
          *(undefined4 *)(uVar54 + lVar67) = *(undefined4 *)(uVar61 + lVar67);
        } while ((long)uVar46 < (long)uVar44);
      }
LAB_0012a8fc:
      pvVar77 = local_a8;
      iir_mem16(lVar47,param_1[0xf],local_a8,*(undefined4 *)(param_1 + 3),uVar44,uVar61,uVar85);
      filter_mem16(pvVar77,local_98,local_a0,local_b8,*(undefined4 *)(param_1 + 3),
                   *(undefined4 *)((long)param_1 + 0x24),param_1[0x12],uVar85);
      uVar53 = uVar53 + 1;
      if ((long)*(int *)((long)param_1 + 0x1c) <= (long)uVar53) goto code_r0x0012a94c;
      uVar44 = (ulong)*(uint *)(param_1 + 3);
    } while( true );
  }
LAB_0012a950:
  if (0 < (int)uVar39) {
    uVar44 = param_1[0xd];
    uVar53 = (ulong)(int)uVar39;
    if ((uVar39 < 0x10) || ((uVar44 < uVar51 + uVar53 * 2 && (uVar51 < uVar44 + uVar53 * 2)))) {
      uVar54 = 0;
LAB_0012a990:
      do {
        lVar47 = uVar54 * 2;
        uVar54 = uVar54 + 1;
        *(undefined2 *)(uVar44 + lVar47) = *(undefined2 *)(uVar51 + lVar47);
      } while ((long)uVar54 < (long)uVar53);
    }
    else {
      uVar54 = uVar53 & 0xfffffffffffffff0;
      pauVar48 = (undefined1 (*) [16])(uVar51 + 0x10);
      puVar56 = (undefined8 *)(uVar44 + 0x10);
      uVar61 = uVar54;
      do {
        auVar80 = pauVar48[-1];
        auVar83 = *pauVar48;
        pauVar48 = pauVar48 + 2;
        uVar61 = uVar61 - 0x10;
        puVar56[-1] = auVar80._8_8_;
        puVar56[-2] = auVar80._0_8_;
        puVar56[1] = auVar83._8_8_;
        *puVar56 = auVar83._0_8_;
        puVar56 = puVar56 + 4;
      } while (uVar61 != 0);
      if (uVar54 != uVar53) goto LAB_0012a990;
    }
    if (0 < (int)uVar39) {
      uVar44 = param_1[0xe];
      uVar51 = (ulong)uVar39;
      if ((uVar39 < 0x10) || ((uVar44 < uVar41 + uVar51 * 2 && (uVar41 < uVar44 + uVar51 * 2)))) {
        uVar53 = 0;
      }
      else {
        uVar53 = uVar51 & 0xfffffff0;
        puVar56 = (undefined8 *)(uVar41 + 0x10);
        puVar69 = (undefined8 *)(uVar44 + 0x10);
        uVar54 = uVar53;
        do {
          auVar80 = *(undefined1 (*) [16])(puVar56 + -2);
          uVar85 = *puVar56;
          uVar86 = puVar56[1];
          puVar56 = puVar56 + 4;
          uVar54 = uVar54 - 0x10;
          puVar69[-1] = auVar80._8_8_;
          puVar69[-2] = auVar80._0_8_;
          puVar69[1] = uVar86;
          *puVar69 = uVar85;
          puVar69 = puVar69 + 4;
        } while (uVar54 != 0);
        if (uVar53 == uVar51) goto LAB_0012aa00;
      }
      lVar47 = uVar51 - uVar53;
      puVar49 = (undefined2 *)(uVar44 + uVar53 * 2);
      puVar63 = (undefined2 *)(uVar41 + uVar53 * 2);
      do {
        lVar47 = lVar47 + -1;
        *puVar49 = *puVar63;
        puVar49 = puVar49 + 1;
        puVar63 = puVar63 + 1;
      } while (lVar47 != 0);
    }
  }
LAB_0012aa00:
  bVar33 = true;
  *(undefined4 *)(param_1 + 5) = 0;
  lVar67 = local_160;
LAB_0012aa38:
  if (*(long *)(lVar67 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar33);
  }
  return;
code_r0x0012a94c:
  uVar39 = *(uint *)((long)param_1 + 0x24);
  goto LAB_0012a950;
}

