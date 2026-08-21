
void FUN_010f4fe4(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  ushort *puVar15;
  undefined8 *puVar16;
  code *pcVar17;
  undefined4 *puVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  int *piVar23;
  int iVar24;
  ushort uVar25;
  double dVar26;
  undefined8 uVar27;
  double dVar28;
  undefined1 auVar29 [16];
  double dVar47;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar48;
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  double dVar83;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  
  if (0 < *(int *)((long)param_1 + 0x5c)) {
    auVar29 = NEON_fmov(0x3ff0000000000000,8);
    lVar22 = param_1[0x45];
    dVar47 = auVar29._8_8_;
    dVar26 = auVar29._0_8_;
    lVar21 = 0;
    iVar24 = 0;
    piVar23 = (int *)(param_1[0xd] + 0x34);
    do {
      iVar3 = piVar23[-4];
      iVar1 = piVar23[-3] + iVar3 * 0x100;
      if (iVar1 < 0x70e) {
        if (iVar1 < 0x404) {
          if (iVar1 < 0x204) {
            if (iVar1 < 0x201) {
              if (iVar1 == 0x101) {
                pcVar17 = jpeg_fdct_1x1;
              }
              else {
                if (iVar1 != 0x102) {
LAB_010f51a0:
                  puVar16 = (undefined8 *)*param_1;
                  *(undefined4 *)(puVar16 + 5) = 7;
                  *(int *)((long)puVar16 + 0x2c) = iVar3;
                  *(int *)(puVar16 + 6) = piVar23[-3];
                  (*(code *)*puVar16)(param_1);
                  goto LAB_010f5538;
                }
                pcVar17 = jpeg_fdct_1x2;
              }
            }
            else if (iVar1 == 0x201) {
              pcVar17 = jpeg_fdct_2x1;
            }
            else {
              if (iVar1 != 0x202) goto LAB_010f51a0;
              pcVar17 = jpeg_fdct_2x2;
            }
          }
          else if (iVar1 < 0x306) {
            if (iVar1 == 0x204) {
              pcVar17 = jpeg_fdct_2x4;
            }
            else {
              if (iVar1 != 0x303) goto LAB_010f51a0;
                    /* catch() { ... } // from try @ 010f533c with catch @ 010f52f8 */
              pcVar17 = jpeg_fdct_3x3;
            }
          }
          else if (iVar1 == 0x306) {
            pcVar17 = jpeg_fdct_3x6;
          }
          else {
            if (iVar1 != 0x402) goto LAB_010f51a0;
            pcVar17 = jpeg_fdct_4x2;
          }
        }
        else if (iVar1 < 0x603) {
          if (iVar1 < 0x505) {
            if (iVar1 == 0x404) {
              pcVar17 = jpeg_fdct_4x4;
            }
            else {
              if (iVar1 != 0x408) goto LAB_010f51a0;
              pcVar17 = jpeg_fdct_4x8;
            }
          }
          else if (iVar1 == 0x505) {
            pcVar17 = jpeg_fdct_5x5;
          }
          else {
            if (iVar1 != 0x50a) goto LAB_010f51a0;
            pcVar17 = jpeg_fdct_5x10;
          }
        }
        else if (iVar1 < 0x60c) {
          if (iVar1 == 0x603) {
            pcVar17 = jpeg_fdct_6x3;
          }
          else {
                    /* try { // try from 010f5334 to 011f533b has its CatchHandler @ 010f5390 */
            if (iVar1 != 0x606) goto LAB_010f51a0;
                    /* try { // try from 010f533c to 011f53ab has its CatchHandler @ 010f52f8 */
            pcVar17 = jpeg_fdct_6x6;
          }
        }
        else if (iVar1 == 0x60c) {
          pcVar17 = jpeg_fdct_6x12;
        }
        else {
          if (iVar1 != 0x707) goto LAB_010f51a0;
          pcVar17 = jpeg_fdct_7x7;
        }
LAB_010f552c:
        iVar24 = 0;
        *(code **)(lVar22 + lVar21 * 8 + 0x58) = pcVar17;
      }
      else {
        if (0xc05 < iVar1) {
          if (iVar1 < 0xe0e) {
            if (iVar1 < 0xd0d) {
              if (iVar1 == 0xc06) {
                pcVar17 = jpeg_fdct_12x6;
              }
              else {
                if (iVar1 != 0xc0c) goto LAB_010f51a0;
                pcVar17 = jpeg_fdct_12x12;
              }
            }
            else if (iVar1 == 0xd0d) {
              pcVar17 = jpeg_fdct_13x13;
            }
            else {
              if (iVar1 != 0xe07) goto LAB_010f51a0;
              pcVar17 = jpeg_fdct_14x7;
            }
          }
          else if (iVar1 < 0x1008) {
            if (iVar1 == 0xe0e) {
              pcVar17 = jpeg_fdct_14x14;
            }
            else {
              if (iVar1 != 0xf0f) goto LAB_010f51a0;
              pcVar17 = jpeg_fdct_15x15;
            }
          }
          else if (iVar1 == 0x1008) {
            pcVar17 = jpeg_fdct_16x8;
          }
          else {
            if (iVar1 != 0x1010) goto LAB_010f51a0;
            pcVar17 = jpeg_fdct_16x16;
          }
          goto LAB_010f552c;
        }
        if (0x908 < iVar1) {
          if (iVar1 < 0xa0a) {
            if (iVar1 == 0x909) {
              pcVar17 = jpeg_fdct_9x9;
            }
            else {
              if (iVar1 != 0xa05) goto LAB_010f51a0;
              pcVar17 = jpeg_fdct_10x5;
            }
          }
          else if (iVar1 == 0xa0a) {
            pcVar17 = jpeg_fdct_10x10;
          }
          else {
            if (iVar1 != 0xb0b) goto LAB_010f51a0;
            pcVar17 = jpeg_fdct_11x11;
          }
          goto LAB_010f552c;
        }
        if (iVar1 < 0x808) {
          if (iVar1 == 0x70e) {
            pcVar17 = jpeg_fdct_7x14;
          }
          else {
            if (iVar1 != 0x804) goto LAB_010f51a0;
            pcVar17 = jpeg_fdct_8x4;
          }
          goto LAB_010f552c;
        }
                    /* catch() { ... } // from try @ 010f5334 with catch @ 010f5390 */
        if (iVar1 != 0x808) {
          if (iVar1 != 0x810) goto LAB_010f51a0;
          pcVar17 = jpeg_fdct_8x16;
          goto LAB_010f552c;
        }
        iVar1 = (int)param_1[0x27];
        if (iVar1 == 2) {
          iVar24 = 2;
          *(code **)(lVar22 + lVar21 * 8 + 0xa8) = jpeg_fdct_float;
        }
        else if (iVar1 == 1) {
          iVar24 = 1;
          *(code **)(lVar22 + lVar21 * 8 + 0x58) = jpeg_fdct_ifast;
        }
        else {
          if (iVar1 == 0) {
            pcVar17 = jpeg_fdct_islow;
            goto LAB_010f552c;
          }
          puVar16 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar16 + 5) = 0x31;
          (*(code *)*puVar16)(param_1);
        }
      }
LAB_010f5538:
      uVar19 = piVar23[-9];
      if ((3 < uVar19) ||
         (puVar15 = (ushort *)param_1[(long)(int)uVar19 + 0xe], puVar15 == (ushort *)0x0)) {
        puVar16 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar16 + 5) = 0x36;
        *(uint *)((long)puVar16 + 0x2c) = uVar19;
        (*(code *)*puVar16)(param_1);
        puVar15 = (ushort *)param_1[(long)(int)uVar19 + 0xe];
      }
      if (iVar24 == 2) {
        dVar49 = (double)NEON_ucvtf((ulong)*puVar15);
        dVar28 = 16.0;
        if (*piVar23 == 0) {
          dVar28 = 8.0;
        }
                    /* catch() { ... } // from try @ 010f5600 with catch @ 010f56dc */
        dVar48 = (double)NEON_ucvtf((ulong)puVar15[1]);
                    /* catch() { ... } // from try @ 010f55f8 with catch @ 010f56e0 */
        auVar29._0_8_ = (ulong)CONCAT24(puVar15[3],(uint)puVar15[2]) & 0xffffffff;
        auVar29._8_2_ = puVar15[3];
        auVar29._10_6_ = 0;
        auVar29 = NEON_ucvtf(auVar29,8);
        puVar16 = *(undefined8 **)(piVar23 + 9);
        puVar16[1] = CONCAT44((float)(dVar47 / (auVar29._8_8_ * 1.175875602 * dVar28)),
                              (float)(dVar26 / (auVar29._0_8_ * 1.306562965 * dVar28)));
        *puVar16 = CONCAT44((float)(dVar47 / (dVar48 * 1.387039845 * dVar28)),
                            (float)(dVar26 / (dVar26 * dVar49 * dVar28)));
                    /* try { // try from 010f5720 to 011f5797 has its CatchHandler @ 010f57ac */
        dVar49 = (double)NEON_ucvtf((ulong)puVar15[4]);
        dVar48 = (double)NEON_ucvtf((ulong)puVar15[5]);
        auVar72._0_8_ = (ulong)CONCAT24(puVar15[7],(uint)puVar15[6]) & 0xffffffff;
        auVar72._8_2_ = puVar15[7];
        auVar72._10_6_ = 0;
        auVar29 = NEON_ucvtf(auVar72,8);
        puVar16[3] = CONCAT44((float)(dVar47 / (auVar29._8_8_ * 0.275899379 * dVar28)),
                              (float)(dVar26 / (auVar29._0_8_ * 0.5411961 * dVar28)));
        puVar16[2] = CONCAT44((float)(dVar47 / (dVar48 * 0.785694958 * dVar28)),
                              (float)(dVar26 / (dVar26 * dVar49 * dVar28)));
        dVar48 = (double)NEON_ucvtf((ulong)puVar15[8]);
        dVar49 = (double)NEON_ucvtf((ulong)puVar15[9]);
        dVar83 = (double)NEON_ucvtf((ulong)puVar15[10]);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010f5720 with catch @ 010f57ac
                        */
        dVar50 = (double)NEON_ucvtf((ulong)puVar15[0xb]);
        puVar16[5] = CONCAT44((float)(dVar47 / (dVar50 * 1.387039845 * 1.175875602 * dVar28)),
                              (float)(dVar26 / (dVar83 * 1.387039845 * 1.306562965 * dVar28)));
        puVar16[4] = CONCAT44((float)(dVar47 / (dVar49 * 1.387039845 * 1.387039845 * dVar28)),
                              (float)(dVar26 / (dVar48 * 1.387039845 * dVar28)));
        dVar49 = (double)NEON_ucvtf((ulong)puVar15[0xc]);
        dVar48 = (double)NEON_ucvtf((ulong)puVar15[0xd]);
        dVar50 = (double)NEON_ucvtf((ulong)puVar15[0xe]);
        dVar83 = (double)NEON_ucvtf((ulong)puVar15[0xf]);
        puVar16[7] = CONCAT44((float)(dVar47 / (dVar83 * 1.387039845 * 0.275899379 * dVar28)),
                              (float)(dVar26 / (dVar50 * 1.387039845 * 0.5411961 * dVar28)));
        puVar16[6] = CONCAT44((float)(dVar47 / (dVar48 * 1.387039845 * 0.785694958 * dVar28)),
                              (float)(dVar26 / (dVar49 * 1.387039845 * dVar28)));
        dVar48 = (double)NEON_ucvtf((ulong)puVar15[0x10]);
        dVar49 = (double)NEON_ucvtf((ulong)puVar15[0x11]);
        dVar83 = (double)NEON_ucvtf((ulong)puVar15[0x12]);
        dVar50 = (double)NEON_ucvtf((ulong)puVar15[0x13]);
        puVar16[9] = CONCAT44((float)(dVar47 / (dVar50 * 1.306562965 * 1.175875602 * dVar28)),
                              (float)(dVar26 / (dVar83 * 1.306562965 * 1.306562965 * dVar28)));
        puVar16[8] = CONCAT44((float)(dVar47 / (dVar49 * 1.306562965 * 1.387039845 * dVar28)),
                              (float)(dVar26 / (dVar48 * 1.306562965 * dVar28)));
        dVar49 = (double)NEON_ucvtf((ulong)puVar15[0x14]);
        dVar48 = (double)NEON_ucvtf((ulong)puVar15[0x15]);
        dVar50 = (double)NEON_ucvtf((ulong)puVar15[0x16]);
        dVar83 = (double)NEON_ucvtf((ulong)puVar15[0x17]);
        puVar16[0xb] = CONCAT44((float)(dVar47 / (dVar83 * 1.306562965 * 0.275899379 * dVar28)),
                                (float)(dVar26 / (dVar50 * 1.306562965 * 0.5411961 * dVar28)));
        puVar16[10] = CONCAT44((float)(dVar47 / (dVar48 * 1.306562965 * 0.785694958 * dVar28)),
                               (float)(dVar26 / (dVar49 * 1.306562965 * dVar28)));
        dVar48 = (double)NEON_ucvtf((ulong)puVar15[0x18]);
        dVar49 = (double)NEON_ucvtf((ulong)puVar15[0x19]);
        dVar83 = (double)NEON_ucvtf((ulong)puVar15[0x1a]);
        dVar50 = (double)NEON_ucvtf((ulong)puVar15[0x1b]);
        puVar16[0xd] = CONCAT44((float)(dVar47 / (dVar50 * 1.175875602 * 1.175875602 * dVar28)),
                                (float)(dVar26 / (dVar83 * 1.175875602 * 1.306562965 * dVar28)));
        puVar16[0xc] = CONCAT44((float)(dVar47 / (dVar49 * 1.175875602 * 1.387039845 * dVar28)),
                                (float)(dVar26 / (dVar48 * 1.175875602 * dVar28)));
        dVar49 = (double)NEON_ucvtf((ulong)puVar15[0x1c]);
        dVar48 = (double)NEON_ucvtf((ulong)puVar15[0x1d]);
        dVar50 = (double)NEON_ucvtf((ulong)puVar15[0x1e]);
        dVar83 = (double)NEON_ucvtf((ulong)puVar15[0x1f]);
        puVar16[0xf] = CONCAT44((float)(dVar47 / (dVar83 * 1.175875602 * 0.275899379 * dVar28)),
                                (float)(dVar26 / (dVar50 * 1.175875602 * 0.5411961 * dVar28)));
        puVar16[0xe] = CONCAT44((float)(dVar47 / (dVar48 * 1.175875602 * 0.785694958 * dVar28)),
                                (float)(dVar26 / (dVar49 * 1.175875602 * dVar28)));
        dVar49 = (double)NEON_ucvtf((ulong)puVar15[0x21]);
        dVar48 = (double)NEON_ucvtf((ulong)puVar15[0x20]);
        auVar55._0_8_ = (ulong)CONCAT24(puVar15[0x23],(uint)puVar15[0x22]) & 0xffffffff;
        auVar55._8_2_ = puVar15[0x23];
        auVar55._10_6_ = 0;
        auVar29 = NEON_ucvtf(auVar55,8);
        puVar16[0x11] =
             CONCAT44((float)(dVar47 / (auVar29._8_8_ * 1.175875602 * dVar28)),
                      (float)(dVar26 / (auVar29._0_8_ * 1.306562965 * dVar28)));
        puVar16[0x10] =
             CONCAT44((float)(dVar47 / (dVar49 * 1.387039845 * dVar28)),
                      (float)(dVar26 / (dVar26 * dVar48 * dVar28)));
        dVar48 = (double)NEON_ucvtf((ulong)puVar15[0x25]);
        dVar49 = (double)NEON_ucvtf((ulong)puVar15[0x24]);
        auVar52._0_8_ = (ulong)CONCAT24(puVar15[0x27],(uint)puVar15[0x26]) & 0xffffffff;
        auVar52._8_2_ = puVar15[0x27];
        auVar52._10_6_ = 0;
        auVar29 = NEON_ucvtf(auVar52,8);
        puVar16[0x13] =
             CONCAT44((float)(dVar47 / (auVar29._8_8_ * 0.275899379 * dVar28)),
                      (float)(dVar26 / (auVar29._0_8_ * 0.5411961 * dVar28)));
        puVar16[0x12] =
             CONCAT44((float)(dVar47 / (dVar48 * 0.785694958 * dVar28)),
                      (float)(dVar26 / (dVar26 * dVar49 * dVar28)));
        dVar48 = (double)NEON_ucvtf((ulong)puVar15[0x28]);
        dVar50 = (double)NEON_ucvtf((ulong)puVar15[0x29]);
        dVar83 = (double)NEON_ucvtf((ulong)puVar15[0x2a]);
        dVar49 = (double)NEON_ucvtf((ulong)puVar15[0x2b]);
        puVar16[0x15] =
             CONCAT44((float)(dVar47 / (dVar49 * 0.785694958 * 1.175875602 * dVar28)),
                      (float)(dVar26 / (dVar83 * 0.785694958 * 1.306562965 * dVar28)));
        puVar16[0x14] =
             CONCAT44((float)(dVar47 / (dVar50 * 0.785694958 * 1.387039845 * dVar28)),
                      (float)(dVar26 / (dVar48 * 0.785694958 * dVar28)));
        dVar48 = (double)NEON_ucvtf((ulong)puVar15[0x2c]);
        dVar49 = (double)NEON_ucvtf((ulong)puVar15[0x2d]);
        dVar83 = (double)NEON_ucvtf((ulong)puVar15[0x2e]);
        dVar50 = (double)NEON_ucvtf((ulong)puVar15[0x2f]);
        puVar16[0x17] =
             CONCAT44((float)(dVar47 / (dVar50 * 0.785694958 * 0.275899379 * dVar28)),
                      (float)(dVar26 / (dVar83 * 0.785694958 * 0.5411961 * dVar28)));
        puVar16[0x16] =
             CONCAT44((float)(dVar47 / (dVar49 * 0.785694958 * 0.785694958 * dVar28)),
                      (float)(dVar26 / (dVar48 * 0.785694958 * dVar28)));
        dVar49 = (double)NEON_ucvtf((ulong)puVar15[0x30]);
        dVar48 = (double)NEON_ucvtf((ulong)puVar15[0x31]);
        dVar50 = (double)NEON_ucvtf((ulong)puVar15[0x32]);
        dVar83 = (double)NEON_ucvtf((ulong)puVar15[0x33]);
        puVar16[0x19] =
             CONCAT44((float)(dVar47 / (dVar83 * 0.5411961 * 1.175875602 * dVar28)),
                      (float)(dVar26 / (dVar50 * 0.5411961 * 1.306562965 * dVar28)));
        puVar16[0x18] =
             CONCAT44((float)(dVar47 / (dVar48 * 0.5411961 * 1.387039845 * dVar28)),
                      (float)(dVar26 / (dVar49 * 0.5411961 * dVar28)));
        dVar48 = (double)NEON_ucvtf((ulong)puVar15[0x34]);
        dVar49 = (double)NEON_ucvtf((ulong)puVar15[0x35]);
        dVar83 = (double)NEON_ucvtf((ulong)puVar15[0x36]);
        dVar50 = (double)NEON_ucvtf((ulong)puVar15[0x37]);
        puVar16[0x1b] =
             CONCAT44((float)(dVar47 / (dVar50 * 0.5411961 * 0.275899379 * dVar28)),
                      (float)(dVar26 / (dVar83 * 0.5411961 * 0.5411961 * dVar28)));
        puVar16[0x1a] =
             CONCAT44((float)(dVar47 / (dVar49 * 0.5411961 * 0.785694958 * dVar28)),
                      (float)(dVar26 / (dVar48 * 0.5411961 * dVar28)));
        dVar49 = (double)NEON_ucvtf((ulong)puVar15[0x38]);
        dVar48 = (double)NEON_ucvtf((ulong)puVar15[0x39]);
        dVar50 = (double)NEON_ucvtf((ulong)puVar15[0x3a]);
        dVar83 = (double)NEON_ucvtf((ulong)puVar15[0x3b]);
        puVar16[0x1d] =
             CONCAT44((float)(dVar47 / (dVar83 * 0.275899379 * 1.175875602 * dVar28)),
                      (float)(dVar26 / (dVar50 * 0.275899379 * 1.306562965 * dVar28)));
        puVar16[0x1c] =
             CONCAT44((float)(dVar47 / (dVar48 * 0.275899379 * 1.387039845 * dVar28)),
                      (float)(dVar26 / (dVar49 * 0.275899379 * dVar28)));
        dVar48 = (double)NEON_ucvtf((ulong)puVar15[0x3c]);
        dVar49 = (double)NEON_ucvtf((ulong)puVar15[0x3d]);
        dVar83 = (double)NEON_ucvtf((ulong)puVar15[0x3e]);
        dVar50 = (double)NEON_ucvtf((ulong)puVar15[0x3f]);
        puVar16[0x1f] =
             CONCAT44((float)(dVar47 / (dVar50 * 0.275899379 * 0.275899379 * dVar28)),
                      (float)(dVar26 / (dVar83 * 0.275899379 * 0.5411961 * dVar28)));
        puVar16[0x1e] =
             CONCAT44((float)(dVar47 / (dVar49 * 0.275899379 * 0.785694958 * dVar28)),
                      (float)(dVar26 / (dVar48 * 0.275899379 * dVar28)));
        *(code **)(lVar22 + lVar21 * 8 + 8) = FUN_010f6218;
      }
      else if (iVar24 == 1) {
        uVar27 = *(undefined8 *)puVar15;
        uVar19 = 10;
        if (*piVar23 == 0) {
          uVar19 = 0xb;
        }
        lVar20 = 1L << ((ulong)(uVar19 - 1) & 0x3f);
        uVar25 = (ushort)((ulong)uVar27 >> 0x10);
        auVar56._0_8_ = CONCAT26(0,CONCAT24(uVar25,(uint)(ushort)uVar27));
        auVar56._8_2_ = (short)((ulong)uVar27 >> 0x20);
        auVar56._10_2_ = 0;
        auVar56._12_2_ = (short)((ulong)uVar27 >> 0x30);
        auVar56._14_2_ = 0;
        puVar18 = *(undefined4 **)(piVar23 + 9);
        auVar29 = NEON_ext(auVar56,auVar56,8,1);
        auVar53._0_8_ = -(ulong)uVar19;
        auVar53._8_8_ = -(ulong)uVar19;
        auVar84._0_8_ = lVar20 + (ulong)auVar29._0_4_ * 0x539f;
        auVar84._8_8_ = lVar20 + (ulong)auVar29._4_4_ * 0x4b42;
        auVar4._8_8_ = lVar20 + (ulong)uVar25 * 0x58c5;
        auVar4._0_8_ = lVar20 + (auVar56._0_8_ & 0xffffffff) * 0x4000;
        auVar72 = NEON_sshl(auVar4,auVar53,8);
        auVar29 = NEON_sshl(auVar84,auVar53,8);
        puVar18[2] = auVar29._0_4_;
        puVar18[3] = auVar29._8_4_;
        *puVar18 = auVar72._0_4_;
        puVar18[1] = auVar72._8_4_;
        uVar27 = *(undefined8 *)(puVar15 + 4);
        uVar25 = (ushort)((ulong)uVar27 >> 0x10);
        auVar57._0_8_ = CONCAT26(0,CONCAT24(uVar25,(uint)(ushort)uVar27));
        auVar57._8_2_ = (short)((ulong)uVar27 >> 0x20);
        auVar57._10_2_ = 0;
        auVar57._12_2_ = (short)((ulong)uVar27 >> 0x30);
        auVar57._14_2_ = 0;
        auVar72 = NEON_ext(auVar57,auVar57,8,1);
        auVar73._0_8_ = lVar20 + (auVar57._0_8_ & 0xffffffff) * 0x4000;
        auVar73._8_8_ = lVar20 + (ulong)uVar25 * 0x3249;
        auVar29 = NEON_sshl(auVar73,auVar53,8);
        auVar5._8_8_ = lVar20 + (ulong)auVar72._4_4_ * 0x11a8;
        auVar5._0_8_ = lVar20 + (ulong)auVar72._0_4_ * 0x22a3;
        auVar72 = NEON_sshl(auVar5,auVar53,8);
        puVar18[6] = auVar72._0_4_;
        puVar18[7] = auVar72._8_4_;
        puVar18[4] = auVar29._0_4_;
        puVar18[5] = auVar29._8_4_;
        uVar27 = *(undefined8 *)(puVar15 + 8);
        uVar25 = (ushort)((ulong)uVar27 >> 0x10);
        auVar58._0_8_ = CONCAT26(0,CONCAT24(uVar25,(uint)(ushort)uVar27));
        auVar58._8_2_ = (short)((ulong)uVar27 >> 0x20);
        auVar58._10_2_ = 0;
        auVar58._12_2_ = (short)((ulong)uVar27 >> 0x30);
        auVar58._14_2_ = 0;
        auVar72 = NEON_ext(auVar58,auVar58,8,1);
        auVar74._0_8_ = lVar20 + (auVar58._0_8_ & 0xffffffff) * 0x58c5;
        auVar74._8_8_ = lVar20 + (ulong)uVar25 * 0x7b21;
        auVar29 = NEON_sshl(auVar74,auVar53,8);
        auVar6._8_8_ = lVar20 + (ulong)auVar72._4_4_ * 0x6862;
        auVar6._0_8_ = lVar20 + (ulong)auVar72._0_4_ * 0x73fc;
        auVar72 = NEON_sshl(auVar6,auVar53,8);
        puVar18[10] = auVar72._0_4_;
        puVar18[0xb] = auVar72._8_4_;
        puVar18[8] = auVar29._0_4_;
        puVar18[9] = auVar29._8_4_;
        uVar27 = *(undefined8 *)(puVar15 + 0xc);
        uVar25 = (ushort)((ulong)uVar27 >> 0x10);
        auVar59._0_8_ = CONCAT26(0,CONCAT24(uVar25,(uint)(ushort)uVar27));
        auVar59._8_2_ = (short)((ulong)uVar27 >> 0x20);
        auVar59._10_2_ = 0;
        auVar59._12_2_ = (short)((ulong)uVar27 >> 0x30);
        auVar59._14_2_ = 0;
        auVar72 = NEON_ext(auVar59,auVar59,8,1);
        auVar75._0_8_ = lVar20 + (auVar59._0_8_ & 0xffffffff) * 0x58c5;
        auVar75._8_8_ = lVar20 + (ulong)uVar25 * 0x45bf;
        auVar29 = NEON_sshl(auVar75,auVar53,8);
        auVar7._8_8_ = lVar20 + (ulong)auVar72._4_4_ * 0x187e;
        auVar7._0_8_ = lVar20 + (ulong)auVar72._0_4_ * 0x300b;
        auVar72 = NEON_sshl(auVar7,auVar53,8);
        puVar18[0xe] = auVar72._0_4_;
        puVar18[0xf] = auVar72._8_4_;
        puVar18[0xc] = auVar29._0_4_;
        puVar18[0xd] = auVar29._8_4_;
        uVar27 = *(undefined8 *)(puVar15 + 0x10);
        uVar25 = (ushort)((ulong)uVar27 >> 0x10);
        auVar60._0_8_ = CONCAT26(0,CONCAT24(uVar25,(uint)(ushort)uVar27));
        auVar60._8_2_ = (short)((ulong)uVar27 >> 0x20);
        auVar60._10_2_ = 0;
        auVar60._12_2_ = (short)((ulong)uVar27 >> 0x30);
        auVar60._14_2_ = 0;
        auVar72 = NEON_ext(auVar60,auVar60,8,1);
        auVar76._0_8_ = lVar20 + (auVar60._0_8_ & 0xffffffff) * 0x539f;
        auVar76._8_8_ = lVar20 + (ulong)uVar25 * 0x73fc;
        auVar29 = NEON_sshl(auVar76,auVar53,8);
        auVar8._8_8_ = lVar20 + (ulong)auVar72._4_4_ * 0x6254;
        auVar8._0_8_ = lVar20 + (ulong)auVar72._0_4_ * 0x6d41;
        auVar72 = NEON_sshl(auVar8,auVar53,8);
        puVar18[0x12] = auVar72._0_4_;
        puVar18[0x13] = auVar72._8_4_;
        puVar18[0x10] = auVar29._0_4_;
        puVar18[0x11] = auVar29._8_4_;
        uVar27 = *(undefined8 *)(puVar15 + 0x14);
        uVar25 = (ushort)((ulong)uVar27 >> 0x10);
        auVar61._0_8_ = CONCAT26(0,CONCAT24(uVar25,(uint)(ushort)uVar27));
        auVar61._8_2_ = (short)((ulong)uVar27 >> 0x20);
        auVar61._10_2_ = 0;
        auVar61._12_2_ = (short)((ulong)uVar27 >> 0x30);
        auVar61._14_2_ = 0;
        auVar72 = NEON_ext(auVar61,auVar61,8,1);
        auVar77._0_8_ = lVar20 + (auVar61._0_8_ & 0xffffffff) * 0x539f;
        auVar77._8_8_ = lVar20 + (ulong)uVar25 * 0x41b3;
        auVar29 = NEON_sshl(auVar77,auVar53,8);
        auVar9._8_8_ = lVar20 + (ulong)auVar72._4_4_ * 0x1712;
        auVar9._0_8_ = lVar20 + (ulong)auVar72._0_4_ * 0x2d41;
        auVar72 = NEON_sshl(auVar9,auVar53,8);
        puVar18[0x16] = auVar72._0_4_;
        puVar18[0x17] = auVar72._8_4_;
        puVar18[0x14] = auVar29._0_4_;
        puVar18[0x15] = auVar29._8_4_;
        uVar27 = *(undefined8 *)(puVar15 + 0x18);
        uVar25 = (ushort)((ulong)uVar27 >> 0x10);
        auVar62._0_8_ = CONCAT26(0,CONCAT24(uVar25,(uint)(ushort)uVar27));
        auVar62._8_2_ = (short)((ulong)uVar27 >> 0x20);
        auVar62._10_2_ = 0;
        auVar62._12_2_ = (short)((ulong)uVar27 >> 0x30);
        auVar62._14_2_ = 0;
        auVar72 = NEON_ext(auVar62,auVar62,8,1);
        auVar78._0_8_ = lVar20 + (auVar62._0_8_ & 0xffffffff) * 0x4b42;
        auVar78._8_8_ = lVar20 + (ulong)uVar25 * 0x6862;
        auVar29 = NEON_sshl(auVar78,auVar53,8);
        auVar10._8_8_ = lVar20 + (ulong)auVar72._4_4_ * 0x587e;
        auVar10._0_8_ = lVar20 + (ulong)auVar72._0_4_ * 0x6254;
        auVar72 = NEON_sshl(auVar10,auVar53,8);
        puVar18[0x1a] = auVar72._0_4_;
        puVar18[0x1b] = auVar72._8_4_;
        puVar18[0x18] = auVar29._0_4_;
        puVar18[0x19] = auVar29._8_4_;
                    /* catch() { ... } // from try @ 010f5ef0 with catch @ 010f5ec4 */
        uVar27 = *(undefined8 *)(puVar15 + 0x1c);
        uVar25 = (ushort)((ulong)uVar27 >> 0x10);
        auVar63._0_8_ = CONCAT26(0,CONCAT24(uVar25,(uint)(ushort)uVar27));
        auVar63._8_2_ = (short)((ulong)uVar27 >> 0x20);
        auVar63._10_2_ = 0;
        auVar63._12_2_ = (short)((ulong)uVar27 >> 0x30);
        auVar63._14_2_ = 0;
        auVar72 = NEON_ext(auVar63,auVar63,8,1);
        auVar79._0_8_ = lVar20 + (auVar63._0_8_ & 0xffffffff) * 0x4b42;
        auVar79._8_8_ = lVar20 + (ulong)uVar25 * 0x3b21;
        auVar29 = NEON_sshl(auVar79,auVar53,8);
        auVar11._8_8_ = lVar20 + (ulong)auVar72._4_4_ * 0x14c3;
        auVar11._0_8_ = lVar20 + (ulong)auVar72._0_4_ * 0x28ba;
        auVar72 = NEON_sshl(auVar11,auVar53,8);
                    /* try { // try from 010f5ee8 to 011f5eef has its CatchHandler @ 010f5f28 */
                    /* try { // try from 010f5ef0 to 011f5f43 has its CatchHandler @ 010f5ec4 */
        puVar18[0x1e] = auVar72._0_4_;
        puVar18[0x1f] = auVar72._8_4_;
        puVar18[0x1c] = auVar29._0_4_;
        puVar18[0x1d] = auVar29._8_4_;
        uVar27 = *(undefined8 *)(puVar15 + 0x20);
        uVar25 = (ushort)((ulong)uVar27 >> 0x10);
        auVar64._0_8_ = CONCAT26(0,CONCAT24(uVar25,(uint)(ushort)uVar27));
        auVar64._8_2_ = (short)((ulong)uVar27 >> 0x20);
        auVar64._10_2_ = 0;
        auVar64._12_2_ = (short)((ulong)uVar27 >> 0x30);
        auVar64._14_2_ = 0;
        auVar72 = NEON_ext(auVar64,auVar64,8,1);
        auVar80._0_8_ = lVar20 + (auVar64._0_8_ & 0xffffffff) * 0x4000;
        auVar80._8_8_ = lVar20 + (ulong)uVar25 * 0x58c5;
        auVar29 = NEON_sshl(auVar80,auVar53,8);
        auVar12._8_8_ = lVar20 + (ulong)auVar72._4_4_ * 0x4b42;
        auVar12._0_8_ = lVar20 + (ulong)auVar72._0_4_ * 0x539f;
        auVar72 = NEON_sshl(auVar12,auVar53,8);
        puVar18[0x22] = auVar72._0_4_;
        puVar18[0x23] = auVar72._8_4_;
        puVar18[0x20] = auVar29._0_4_;
        puVar18[0x21] = auVar29._8_4_;
        uVar27 = *(undefined8 *)(puVar15 + 0x24);
                    /* catch() { ... } // from try @ 010f5ee8 with catch @ 010f5f28 */
        uVar25 = (ushort)((ulong)uVar27 >> 0x10);
        auVar65._0_8_ = CONCAT26(0,CONCAT24(uVar25,(uint)(ushort)uVar27));
        auVar65._8_2_ = (short)((ulong)uVar27 >> 0x20);
        auVar65._10_2_ = 0;
        auVar65._12_2_ = (short)((ulong)uVar27 >> 0x30);
        auVar65._14_2_ = 0;
        auVar72 = NEON_ext(auVar65,auVar65,8,1);
        auVar81._0_8_ = lVar20 + (auVar65._0_8_ & 0xffffffff) * 0x4000;
        auVar81._8_8_ = lVar20 + (ulong)uVar25 * 0x3249;
        auVar29 = NEON_sshl(auVar81,auVar53,8);
        auVar13._8_8_ = lVar20 + (ulong)auVar72._4_4_ * 0x11a8;
        auVar13._0_8_ = lVar20 + (ulong)auVar72._0_4_ * 0x22a3;
        auVar72 = NEON_sshl(auVar13,auVar53,8);
        puVar18[0x26] = auVar72._0_4_;
        puVar18[0x27] = auVar72._8_4_;
        puVar18[0x24] = auVar29._0_4_;
        puVar18[0x25] = auVar29._8_4_;
        uVar27 = *(undefined8 *)(puVar15 + 0x28);
        uVar25 = (ushort)((ulong)uVar27 >> 0x10);
        auVar66._0_8_ = CONCAT26(0,CONCAT24(uVar25,(uint)(ushort)uVar27));
        auVar66._8_2_ = (short)((ulong)uVar27 >> 0x20);
        auVar66._10_2_ = 0;
        auVar66._12_2_ = (short)((ulong)uVar27 >> 0x30);
        auVar66._14_2_ = 0;
        auVar72 = NEON_ext(auVar66,auVar66,8,1);
        auVar82._0_8_ = lVar20 + (auVar66._0_8_ & 0xffffffff) * 0x3249;
        auVar82._8_8_ = lVar20 + (ulong)uVar25 * 0x45bf;
        auVar29 = NEON_sshl(auVar82,auVar53,8);
        auVar14._8_8_ = lVar20 + (ulong)auVar72._4_4_ * 0x3b21;
        auVar14._0_8_ = lVar20 + (ulong)auVar72._0_4_ * 0x41b3;
        auVar72 = NEON_sshl(auVar14,auVar53,8);
        puVar18[0x2a] = auVar72._0_4_;
        puVar18[0x2b] = auVar72._8_4_;
        puVar18[0x28] = auVar29._0_4_;
        puVar18[0x29] = auVar29._8_4_;
        uVar27 = *(undefined8 *)(puVar15 + 0x2c);
        uVar25 = (ushort)((ulong)uVar27 >> 0x10);
        auVar67._0_8_ = CONCAT26(0,CONCAT24(uVar25,(uint)(ushort)uVar27));
        auVar67._8_2_ = (short)((ulong)uVar27 >> 0x20);
        auVar67._10_2_ = 0;
        auVar67._12_2_ = (short)((ulong)uVar27 >> 0x30);
        auVar67._14_2_ = 0;
        auVar85._0_8_ = lVar20 + (auVar67._0_8_ & 0xffffffff) * 0x3249;
        auVar85._8_8_ = lVar20 + (ulong)uVar25 * 0x2782;
        auVar29 = NEON_ext(auVar67,auVar67,8,1);
        auVar90._0_8_ = lVar20 + (ulong)auVar29._0_4_ * 0x1b37;
        auVar90._8_8_ = lVar20 + (ulong)auVar29._4_4_ * 0xde0;
        auVar29 = NEON_sshl(auVar85,auVar53,8);
        auVar72 = NEON_sshl(auVar90,auVar53,8);
        puVar18[0x2e] = auVar72._0_4_;
        puVar18[0x2f] = auVar72._8_4_;
        puVar18[0x2c] = auVar29._0_4_;
        puVar18[0x2d] = auVar29._8_4_;
        uVar27 = *(undefined8 *)(puVar15 + 0x30);
        uVar25 = (ushort)((ulong)uVar27 >> 0x10);
        auVar68._0_8_ = CONCAT26(0,CONCAT24(uVar25,(uint)(ushort)uVar27));
        auVar68._8_2_ = (short)((ulong)uVar27 >> 0x20);
        auVar68._10_2_ = 0;
        auVar68._12_2_ = (short)((ulong)uVar27 >> 0x30);
        auVar68._14_2_ = 0;
        auVar86._0_8_ = lVar20 + (auVar68._0_8_ & 0xffffffff) * 0x22a3;
        auVar86._8_8_ = lVar20 + (ulong)uVar25 * 0x300b;
        auVar29 = NEON_ext(auVar68,auVar68,8,1);
        auVar91._0_8_ = lVar20 + (ulong)auVar29._0_4_ * 0x2d41;
        auVar91._8_8_ = lVar20 + (ulong)auVar29._4_4_ * 0x28ba;
        auVar29 = NEON_sshl(auVar86,auVar53,8);
        auVar72 = NEON_sshl(auVar91,auVar53,8);
        puVar18[0x32] = auVar72._0_4_;
        puVar18[0x33] = auVar72._8_4_;
        puVar18[0x30] = auVar29._0_4_;
        puVar18[0x31] = auVar29._8_4_;
        uVar27 = *(undefined8 *)(puVar15 + 0x34);
        uVar25 = (ushort)((ulong)uVar27 >> 0x10);
        auVar69._0_8_ = CONCAT26(0,CONCAT24(uVar25,(uint)(ushort)uVar27));
        auVar69._8_2_ = (short)((ulong)uVar27 >> 0x20);
        auVar69._10_2_ = 0;
        auVar69._12_2_ = (short)((ulong)uVar27 >> 0x30);
        auVar69._14_2_ = 0;
        auVar87._0_8_ = lVar20 + (auVar69._0_8_ & 0xffffffff) * 0x22a3;
        auVar87._8_8_ = lVar20 + (ulong)uVar25 * 0x1b37;
        auVar29 = NEON_ext(auVar69,auVar69,8,1);
        auVar92._0_8_ = lVar20 + (ulong)auVar29._0_4_ * 0x12bf;
        auVar92._8_8_ = lVar20 + (ulong)auVar29._4_4_ * 0x98e;
        auVar29 = NEON_sshl(auVar87,auVar53,8);
        auVar72 = NEON_sshl(auVar92,auVar53,8);
        puVar18[0x36] = auVar72._0_4_;
        puVar18[0x37] = auVar72._8_4_;
        puVar18[0x34] = auVar29._0_4_;
        puVar18[0x35] = auVar29._8_4_;
        uVar27 = *(undefined8 *)(puVar15 + 0x38);
        uVar25 = (ushort)((ulong)uVar27 >> 0x10);
        auVar70._0_8_ = CONCAT26(0,CONCAT24(uVar25,(uint)(ushort)uVar27));
        auVar70._8_2_ = (short)((ulong)uVar27 >> 0x20);
        auVar70._10_2_ = 0;
        auVar70._12_2_ = (short)((ulong)uVar27 >> 0x30);
        auVar70._14_2_ = 0;
        auVar88._0_8_ = lVar20 + (auVar70._0_8_ & 0xffffffff) * 0x11a8;
        auVar88._8_8_ = lVar20 + (ulong)uVar25 * 0x187e;
        auVar29 = NEON_ext(auVar70,auVar70,8,1);
        auVar93._0_8_ = lVar20 + (ulong)auVar29._0_4_ * 0x1712;
        auVar93._8_8_ = lVar20 + (ulong)auVar29._4_4_ * 0x14c3;
        auVar29 = NEON_sshl(auVar88,auVar53,8);
        auVar72 = NEON_sshl(auVar93,auVar53,8);
        puVar18[0x3a] = auVar72._0_4_;
        puVar18[0x3b] = auVar72._8_4_;
        puVar18[0x38] = auVar29._0_4_;
        puVar18[0x39] = auVar29._8_4_;
        uVar27 = *(undefined8 *)(puVar15 + 0x3c);
        uVar25 = (ushort)((ulong)uVar27 >> 0x10);
        auVar71._0_8_ = CONCAT26(0,CONCAT24(uVar25,(uint)(ushort)uVar27));
        auVar71._8_2_ = (short)((ulong)uVar27 >> 0x20);
        auVar71._10_2_ = 0;
        auVar71._12_2_ = (short)((ulong)uVar27 >> 0x30);
        auVar71._14_2_ = 0;
        auVar29 = NEON_ext(auVar71,auVar71,8,1);
        auVar89._0_8_ = lVar20 + (auVar71._0_8_ & 0xffffffff) * 0x11a8;
        auVar89._8_8_ = lVar20 + (ulong)uVar25 * 0xde0;
        auVar46._0_8_ = lVar20 + (ulong)auVar29._0_4_ * 0x98e;
        auVar46._8_8_ = lVar20 + (ulong)auVar29._4_4_ * 0x4df;
        auVar72 = NEON_sshl(auVar89,auVar53,8);
        auVar29 = NEON_sshl(auVar46,auVar53,8);
        auVar54._0_8_ = CONCAT44(auVar72._8_4_,auVar72._0_4_);
        auVar54._8_4_ = auVar29._0_4_;
        auVar54._12_4_ = auVar29._8_4_;
        *(long *)(puVar18 + 0x3e) = auVar54._8_8_;
        *(undefined8 *)(puVar18 + 0x3c) = auVar54._0_8_;
        *(code **)(lVar22 + lVar21 * 8 + 8) = FUN_010f611c;
      }
      else if (iVar24 == 0) {
        uVar27 = *(undefined8 *)puVar15;
        puVar16 = *(undefined8 **)(piVar23 + 9);
        uVar2 = 3;
        if (*piVar23 != 0) {
          uVar2 = 4;
        }
        auVar30._2_2_ = 0;
        auVar30._0_2_ = (ushort)uVar27;
        auVar30._4_2_ = (short)((ulong)uVar27 >> 0x10);
        auVar30._6_2_ = 0;
        auVar30._8_2_ = (short)((ulong)uVar27 >> 0x20);
        auVar30._10_2_ = 0;
        auVar30._12_2_ = (short)((ulong)uVar27 >> 0x30);
        auVar30._14_2_ = 0;
        auVar51._4_4_ = uVar2;
        auVar51._0_4_ = uVar2;
        auVar51._8_4_ = uVar2;
        auVar51._12_4_ = uVar2;
        auVar29 = NEON_ushl(auVar30,auVar51,4);
        puVar16[1] = auVar29._8_8_;
        *puVar16 = auVar29._0_8_;
        uVar27 = *(undefined8 *)(puVar15 + 4);
        auVar31._2_2_ = 0;
        auVar31._0_2_ = (ushort)uVar27;
        auVar31._4_2_ = (short)((ulong)uVar27 >> 0x10);
        auVar31._6_2_ = 0;
        auVar31._8_2_ = (short)((ulong)uVar27 >> 0x20);
        auVar31._10_2_ = 0;
        auVar31._12_2_ = (short)((ulong)uVar27 >> 0x30);
        auVar31._14_2_ = 0;
        auVar29 = NEON_ushl(auVar31,auVar51,4);
                    /* try { // try from 010f55b0 to 011f55f7 has its CatchHandler @ 010f55b0
                       catch() { ... } // from try @ 010f55b0 with catch @ 010f55b0
                       catch() { ... } // from try @ 010f5634 with catch @ 010f55b0 */
        puVar16[3] = auVar29._8_8_;
        puVar16[2] = auVar29._0_8_;
        uVar27 = *(undefined8 *)(puVar15 + 8);
        auVar32._2_2_ = 0;
        auVar32._0_2_ = (ushort)uVar27;
        auVar32._4_2_ = (short)((ulong)uVar27 >> 0x10);
        auVar32._6_2_ = 0;
        auVar32._8_2_ = (short)((ulong)uVar27 >> 0x20);
        auVar32._10_2_ = 0;
        auVar32._12_2_ = (short)((ulong)uVar27 >> 0x30);
        auVar32._14_2_ = 0;
        auVar29 = NEON_ushl(auVar32,auVar51,4);
        puVar16[5] = auVar29._8_8_;
        puVar16[4] = auVar29._0_8_;
        uVar27 = *(undefined8 *)(puVar15 + 0xc);
        auVar33._2_2_ = 0;
        auVar33._0_2_ = (ushort)uVar27;
        auVar33._4_2_ = (short)((ulong)uVar27 >> 0x10);
        auVar33._6_2_ = 0;
        auVar33._8_2_ = (short)((ulong)uVar27 >> 0x20);
        auVar33._10_2_ = 0;
        auVar33._12_2_ = (short)((ulong)uVar27 >> 0x30);
        auVar33._14_2_ = 0;
        auVar29 = NEON_ushl(auVar33,auVar51,4);
        puVar16[7] = auVar29._8_8_;
        puVar16[6] = auVar29._0_8_;
        uVar27 = *(undefined8 *)(puVar15 + 0x10);
        auVar34._2_2_ = 0;
        auVar34._0_2_ = (ushort)uVar27;
        auVar34._4_2_ = (short)((ulong)uVar27 >> 0x10);
        auVar34._6_2_ = 0;
        auVar34._8_2_ = (short)((ulong)uVar27 >> 0x20);
        auVar34._10_2_ = 0;
        auVar34._12_2_ = (short)((ulong)uVar27 >> 0x30);
        auVar34._14_2_ = 0;
        auVar29 = NEON_ushl(auVar34,auVar51,4);
        puVar16[9] = auVar29._8_8_;
        puVar16[8] = auVar29._0_8_;
        uVar27 = *(undefined8 *)(puVar15 + 0x14);
        auVar35._2_2_ = 0;
        auVar35._0_2_ = (ushort)uVar27;
        auVar35._4_2_ = (short)((ulong)uVar27 >> 0x10);
        auVar35._6_2_ = 0;
        auVar35._8_2_ = (short)((ulong)uVar27 >> 0x20);
        auVar35._10_2_ = 0;
        auVar35._12_2_ = (short)((ulong)uVar27 >> 0x30);
        auVar35._14_2_ = 0;
        auVar29 = NEON_ushl(auVar35,auVar51,4);
        puVar16[0xb] = auVar29._8_8_;
        puVar16[10] = auVar29._0_8_;
        uVar27 = *(undefined8 *)(puVar15 + 0x18);
        auVar36._2_2_ = 0;
        auVar36._0_2_ = (ushort)uVar27;
                    /* try { // try from 010f55f8 to 011f55fb has its CatchHandler @ 010f56e0 */
        auVar36._4_2_ = (short)((ulong)uVar27 >> 0x10);
        auVar36._6_2_ = 0;
        auVar36._8_2_ = (short)((ulong)uVar27 >> 0x20);
        auVar36._10_2_ = 0;
        auVar36._12_2_ = (short)((ulong)uVar27 >> 0x30);
        auVar36._14_2_ = 0;
        auVar29 = NEON_ushl(auVar36,auVar51,4);
                    /* try { // try from 010f5600 to 011f560f has its CatchHandler @ 010f56dc */
        puVar16[0xd] = auVar29._8_8_;
        puVar16[0xc] = auVar29._0_8_;
        uVar27 = *(undefined8 *)(puVar15 + 0x1c);
        auVar37._2_2_ = 0;
        auVar37._0_2_ = (ushort)uVar27;
        auVar37._4_2_ = (short)((ulong)uVar27 >> 0x10);
        auVar37._6_2_ = 0;
        auVar37._8_2_ = (short)((ulong)uVar27 >> 0x20);
        auVar37._10_2_ = 0;
        auVar37._12_2_ = (short)((ulong)uVar27 >> 0x30);
        auVar37._14_2_ = 0;
        auVar29 = NEON_ushl(auVar37,auVar51,4);
        puVar16[0xf] = auVar29._8_8_;
        puVar16[0xe] = auVar29._0_8_;
        uVar27 = *(undefined8 *)(puVar15 + 0x20);
        auVar38._2_2_ = 0;
        auVar38._0_2_ = (ushort)uVar27;
        auVar38._4_2_ = (short)((ulong)uVar27 >> 0x10);
        auVar38._6_2_ = 0;
        auVar38._8_2_ = (short)((ulong)uVar27 >> 0x20);
        auVar38._10_2_ = 0;
        auVar38._12_2_ = (short)((ulong)uVar27 >> 0x30);
        auVar38._14_2_ = 0;
        auVar29 = NEON_ushl(auVar38,auVar51,4);
        puVar16[0x11] = auVar29._8_8_;
        puVar16[0x10] = auVar29._0_8_;
                    /* try { // try from 010f5624 to 011f5633 has its CatchHandler @ 010f5698 */
        uVar27 = *(undefined8 *)(puVar15 + 0x24);
        auVar39._2_2_ = 0;
        auVar39._0_2_ = (ushort)uVar27;
        auVar39._4_2_ = (short)((ulong)uVar27 >> 0x10);
        auVar39._6_2_ = 0;
        auVar39._8_2_ = (short)((ulong)uVar27 >> 0x20);
        auVar39._10_2_ = 0;
        auVar39._12_2_ = (short)((ulong)uVar27 >> 0x30);
        auVar39._14_2_ = 0;
        auVar29 = NEON_ushl(auVar39,auVar51,4);
        puVar16[0x13] = auVar29._8_8_;
        puVar16[0x12] = auVar29._0_8_;
                    /* try { // try from 010f5634 to 011f56f3 has its CatchHandler @ 010f55b0 */
        uVar27 = *(undefined8 *)(puVar15 + 0x28);
        auVar40._2_2_ = 0;
        auVar40._0_2_ = (ushort)uVar27;
        auVar40._4_2_ = (short)((ulong)uVar27 >> 0x10);
        auVar40._6_2_ = 0;
        auVar40._8_2_ = (short)((ulong)uVar27 >> 0x20);
        auVar40._10_2_ = 0;
        auVar40._12_2_ = (short)((ulong)uVar27 >> 0x30);
        auVar40._14_2_ = 0;
        auVar29 = NEON_ushl(auVar40,auVar51,4);
        puVar16[0x15] = auVar29._8_8_;
        puVar16[0x14] = auVar29._0_8_;
        uVar27 = *(undefined8 *)(puVar15 + 0x2c);
        auVar41._2_2_ = 0;
        auVar41._0_2_ = (ushort)uVar27;
        auVar41._4_2_ = (short)((ulong)uVar27 >> 0x10);
        auVar41._6_2_ = 0;
        auVar41._8_2_ = (short)((ulong)uVar27 >> 0x20);
        auVar41._10_2_ = 0;
        auVar41._12_2_ = (short)((ulong)uVar27 >> 0x30);
        auVar41._14_2_ = 0;
        auVar29 = NEON_ushl(auVar41,auVar51,4);
        puVar16[0x17] = auVar29._8_8_;
        puVar16[0x16] = auVar29._0_8_;
        uVar27 = *(undefined8 *)(puVar15 + 0x30);
        auVar42._2_2_ = 0;
        auVar42._0_2_ = (ushort)uVar27;
        auVar42._4_2_ = (short)((ulong)uVar27 >> 0x10);
        auVar42._6_2_ = 0;
        auVar42._8_2_ = (short)((ulong)uVar27 >> 0x20);
        auVar42._10_2_ = 0;
        auVar42._12_2_ = (short)((ulong)uVar27 >> 0x30);
        auVar42._14_2_ = 0;
        auVar29 = NEON_ushl(auVar42,auVar51,4);
        puVar16[0x19] = auVar29._8_8_;
        puVar16[0x18] = auVar29._0_8_;
        uVar27 = *(undefined8 *)(puVar15 + 0x34);
        auVar43._2_2_ = 0;
        auVar43._0_2_ = (ushort)uVar27;
        auVar43._4_2_ = (short)((ulong)uVar27 >> 0x10);
        auVar43._6_2_ = 0;
        auVar43._8_2_ = (short)((ulong)uVar27 >> 0x20);
        auVar43._10_2_ = 0;
        auVar43._12_2_ = (short)((ulong)uVar27 >> 0x30);
        auVar43._14_2_ = 0;
        auVar29 = NEON_ushl(auVar43,auVar51,4);
        puVar16[0x1b] = auVar29._8_8_;
        puVar16[0x1a] = auVar29._0_8_;
        uVar27 = *(undefined8 *)(puVar15 + 0x38);
        auVar44._2_2_ = 0;
        auVar44._0_2_ = (ushort)uVar27;
        auVar44._4_2_ = (short)((ulong)uVar27 >> 0x10);
        auVar44._6_2_ = 0;
        auVar44._8_2_ = (short)((ulong)uVar27 >> 0x20);
        auVar44._10_2_ = 0;
        auVar44._12_2_ = (short)((ulong)uVar27 >> 0x30);
        auVar44._14_2_ = 0;
        auVar29 = NEON_ushl(auVar44,auVar51,4);
        puVar16[0x1d] = auVar29._8_8_;
        puVar16[0x1c] = auVar29._0_8_;
        uVar27 = *(undefined8 *)(puVar15 + 0x3c);
        auVar45._2_2_ = 0;
        auVar45._0_2_ = (ushort)uVar27;
        auVar45._4_2_ = (short)((ulong)uVar27 >> 0x10);
        auVar45._6_2_ = 0;
        auVar45._8_2_ = (short)((ulong)uVar27 >> 0x20);
        auVar45._10_2_ = 0;
        auVar45._12_2_ = (short)((ulong)uVar27 >> 0x30);
        auVar45._14_2_ = 0;
        auVar29 = NEON_ushl(auVar45,auVar51,4);
        puVar16[0x1f] = auVar29._8_8_;
        puVar16[0x1e] = auVar29._0_8_;
                    /* catch() { ... } // from try @ 010f5624 with catch @ 010f5698 */
        *(code **)(lVar22 + lVar21 * 8 + 8) = FUN_010f611c;
      }
      else {
        puVar16 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar16 + 5) = 0x31;
        (*(code *)*puVar16)(param_1);
      }
      lVar21 = lVar21 + 1;
      piVar23 = piVar23 + 0x18;
    } while (lVar21 < *(int *)((long)param_1 + 0x5c));
  }
  return;
}

