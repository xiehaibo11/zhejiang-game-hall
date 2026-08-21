
void FUN_00da0e58(long *param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
  undefined1 auVar17 [14];
  undefined1 auVar18 [14];
  undefined1 auVar19 [14];
  undefined1 auVar20 [14];
  undefined8 *puVar21;
  ushort *puVar22;
  uint *puVar23;
  ulong *puVar24;
  long lVar25;
  undefined8 *puVar26;
  float *pfVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  code *pcVar31;
  uint uVar32;
  ushort uVar33;
  undefined8 uVar34;
  ulong uVar35;
  double dVar36;
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
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  
  if (0 < (int)param_1[7]) {
    lVar29 = param_1[0x4f];
    lVar30 = param_1[0x26];
    lVar28 = 0;
    uVar32 = 0;
    pcVar31 = (code *)0x0;
    do {
      iVar3 = *(int *)(lVar30 + 0x24);
      iVar2 = *(int *)(lVar30 + 0x28) + iVar3 * 0x100;
      if (iVar2 < 0x70e) {
        if (iVar2 < 0x404) {
          if (iVar2 < 0x204) {
            if (iVar2 < 0x201) {
              if (iVar2 == 0x101) {
                pcVar31 = jpeg_idct_1x1;
                uVar32 = 0;
              }
              else if (iVar2 == 0x102) {
                pcVar31 = jpeg_idct_1x2;
                uVar32 = 0;
              }
              else {
LAB_00da13a8:
                puVar21 = (undefined8 *)*param_1;
                *(undefined4 *)(puVar21 + 5) = 7;
                *(int *)((long)puVar21 + 0x2c) = iVar3;
                *(undefined4 *)(puVar21 + 6) = *(undefined4 *)(lVar30 + 0x28);
                (*(code *)*puVar21)(param_1);
              }
            }
            else if (iVar2 == 0x201) {
              pcVar31 = jpeg_idct_2x1;
              uVar32 = 0;
            }
            else {
              if (iVar2 != 0x202) goto LAB_00da13a8;
              pcVar31 = jpeg_idct_2x2;
              uVar32 = 0;
            }
          }
          else if (iVar2 < 0x306) {
            if (iVar2 == 0x204) {
              pcVar31 = jpeg_idct_2x4;
              uVar32 = 0;
            }
            else {
              if (iVar2 != 0x303) goto LAB_00da13a8;
              pcVar31 = jpeg_idct_3x3;
              uVar32 = 0;
            }
          }
          else if (iVar2 == 0x306) {
            pcVar31 = jpeg_idct_3x6;
            uVar32 = 0;
          }
          else {
            if (iVar2 != 0x402) goto LAB_00da13a8;
            pcVar31 = jpeg_idct_4x2;
            uVar32 = 0;
          }
        }
        else if (iVar2 < 0x603) {
          if (iVar2 < 0x505) {
            if (iVar2 == 0x404) {
              pcVar31 = jpeg_idct_4x4;
              uVar32 = 0;
            }
            else {
              if (iVar2 != 0x408) goto LAB_00da13a8;
              pcVar31 = jpeg_idct_4x8;
              uVar32 = 0;
            }
          }
          else if (iVar2 == 0x505) {
            pcVar31 = jpeg_idct_5x5;
            uVar32 = 0;
          }
          else {
            if (iVar2 != 0x50a) goto LAB_00da13a8;
            pcVar31 = jpeg_idct_5x10;
            uVar32 = 0;
          }
        }
        else if (iVar2 < 0x60c) {
          if (iVar2 == 0x603) {
            pcVar31 = jpeg_idct_6x3;
            uVar32 = 0;
          }
          else {
            if (iVar2 != 0x606) goto LAB_00da13a8;
            pcVar31 = jpeg_idct_6x6;
            uVar32 = 0;
          }
        }
        else if (iVar2 == 0x60c) {
          pcVar31 = jpeg_idct_6x12;
          uVar32 = 0;
        }
        else {
          if (iVar2 != 0x707) goto LAB_00da13a8;
          pcVar31 = jpeg_idct_7x7;
          uVar32 = 0;
        }
      }
      else if (iVar2 < 0xc06) {
        if (iVar2 < 0x909) {
          if (iVar2 < 0x808) {
            if (iVar2 == 0x70e) {
              pcVar31 = jpeg_idct_7x14;
              uVar32 = 0;
            }
            else {
              if (iVar2 != 0x804) goto LAB_00da13a8;
              pcVar31 = jpeg_idct_8x4;
              uVar32 = 0;
            }
          }
          else if (iVar2 == 0x808) {
            uVar4 = *(uint *)(param_1 + 0xc);
            if (uVar4 < 3) {
              pcVar31 = (code *)(&PTR_jpeg_idct_islow_01c92500)[(int)uVar4];
              uVar32 = uVar4;
            }
            else {
              puVar21 = (undefined8 *)*param_1;
              *(undefined4 *)(puVar21 + 5) = 0x31;
              (*(code *)*puVar21)(param_1);
            }
          }
          else {
            if (iVar2 != 0x810) goto LAB_00da13a8;
            pcVar31 = jpeg_idct_8x16;
            uVar32 = 0;
          }
        }
        else if (iVar2 < 0xa0a) {
          if (iVar2 == 0x909) {
            pcVar31 = jpeg_idct_9x9;
            uVar32 = 0;
          }
          else {
            if (iVar2 != 0xa05) goto LAB_00da13a8;
            pcVar31 = jpeg_idct_10x5;
            uVar32 = 0;
          }
        }
        else if (iVar2 == 0xa0a) {
          pcVar31 = jpeg_idct_10x10;
          uVar32 = 0;
        }
        else {
          if (iVar2 != 0xb0b) goto LAB_00da13a8;
          pcVar31 = jpeg_idct_11x11;
          uVar32 = 0;
        }
      }
      else if (iVar2 < 0xe0e) {
        if (iVar2 < 0xd0d) {
          if (iVar2 == 0xc06) {
            pcVar31 = jpeg_idct_12x6;
            uVar32 = 0;
          }
          else {
            if (iVar2 != 0xc0c) goto LAB_00da13a8;
            pcVar31 = jpeg_idct_12x12;
            uVar32 = 0;
          }
        }
        else if (iVar2 == 0xd0d) {
          pcVar31 = jpeg_idct_13x13;
          uVar32 = 0;
        }
        else {
          if (iVar2 != 0xe07) goto LAB_00da13a8;
          pcVar31 = jpeg_idct_14x7;
          uVar32 = 0;
        }
      }
      else if (iVar2 < 0x1008) {
        if (iVar2 == 0xe0e) {
          pcVar31 = jpeg_idct_14x14;
          uVar32 = 0;
        }
        else {
          if (iVar2 != 0xf0f) goto LAB_00da13a8;
          pcVar31 = jpeg_idct_15x15;
          uVar32 = 0;
        }
      }
      else if (iVar2 == 0x1008) {
        pcVar31 = jpeg_idct_16x8;
        uVar32 = 0;
      }
      else {
        if (iVar2 != 0x1010) goto LAB_00da13a8;
        pcVar31 = jpeg_idct_16x16;
        uVar32 = 0;
      }
      *(code **)(lVar29 + lVar28 * 8 + 8) = pcVar31;
      if (((*(int *)(lVar30 + 0x34) != 0) &&
          (puVar23 = (uint *)(lVar29 + lVar28 * 4 + 0x58), *puVar23 != uVar32)) &&
         (puVar21 = *(undefined8 **)(lVar30 + 0x50), puVar21 != (undefined8 *)0x0)) {
        *puVar23 = uVar32;
        if (uVar32 == 2) {
          lVar25 = 0;
          puVar22 = (ushort *)(puVar21 + 1);
          pfVar27 = (float *)(*(long *)(lVar30 + 0x58) + 0x10);
          do {
            dVar36 = *(double *)((long)&DAT_01950100 + lVar25);
            lVar25 = lVar25 + 8;
            dVar51 = (double)NEON_ucvtf((ulong)puVar22[-4]);
            pfVar27[-4] = (float)(dVar36 * dVar51 * 0.125);
            dVar51 = (double)NEON_ucvtf((ulong)puVar22[-3]);
            pfVar27[-3] = (float)(dVar36 * dVar51 * 1.387039845 * 0.125);
            dVar51 = (double)NEON_ucvtf((ulong)puVar22[-2]);
            pfVar27[-2] = (float)(dVar36 * dVar51 * 1.306562965 * 0.125);
            dVar51 = (double)NEON_ucvtf((ulong)puVar22[-1]);
            pfVar27[-1] = (float)(dVar36 * dVar51 * 1.175875602 * 0.125);
            dVar51 = (double)NEON_ucvtf((ulong)*puVar22);
            *pfVar27 = (float)(dVar36 * dVar51 * 0.125);
            dVar51 = (double)NEON_ucvtf((ulong)puVar22[1]);
            pfVar27[1] = (float)(dVar36 * dVar51 * 0.785694958 * 0.125);
            dVar51 = (double)NEON_ucvtf((ulong)puVar22[2]);
            pfVar27[2] = (float)(dVar36 * dVar51 * 0.5411961 * 0.125);
            puVar1 = puVar22 + 3;
            puVar22 = puVar22 + 8;
            dVar51 = (double)NEON_ucvtf((ulong)*puVar1);
            pfVar27[3] = (float)(dVar36 * dVar51 * 0.275899379 * 0.125);
            pfVar27 = pfVar27 + 8;
          } while (lVar25 != 0x40);
        }
        else if (uVar32 == 1) {
          uVar34 = *puVar21;
          puVar26 = *(undefined8 **)(lVar30 + 0x58);
          uVar33 = (ushort)((ulong)uVar34 >> 0x10);
          auVar53._0_8_ = CONCAT26(0,CONCAT24(uVar33,(uint)(ushort)uVar34));
          auVar53._8_2_ = (short)((ulong)uVar34 >> 0x20);
          auVar53._10_2_ = 0;
          auVar53._12_2_ = (short)((ulong)uVar34 >> 0x30);
          auVar53._14_2_ = 0;
          auVar52 = NEON_ext(auVar53,auVar53,8,1);
          puVar26[1] = CONCAT44((int)((ulong)auVar52._4_4_ * 0x4b42 + 0x800 >> 0xc),
                                (int)((ulong)auVar52._0_4_ * 0x539f + 0x800 >> 0xc));
          *puVar26 = CONCAT44((int)((ulong)uVar33 * 0x58c5 + 0x800 >> 0xc),
                              (int)((auVar53._0_8_ & 0xffffffff) * 0x4000 + 0x800 >> 0xc));
          uVar34 = puVar21[1];
          uVar33 = (ushort)((ulong)uVar34 >> 0x10);
          auVar52._0_8_ = CONCAT26(0,CONCAT24(uVar33,(uint)(ushort)uVar34));
          auVar52._8_2_ = (short)((ulong)uVar34 >> 0x20);
          auVar52._10_2_ = 0;
          auVar52._12_2_ = (short)((ulong)uVar34 >> 0x30);
          auVar52._14_2_ = 0;
          auVar53 = NEON_ext(auVar52,auVar52,8,1);
          puVar26[3] = CONCAT44((int)((ulong)auVar53._4_4_ * 0x11a8 + 0x800 >> 0xc),
                                (int)((ulong)auVar53._0_4_ * 0x22a3 + 0x800 >> 0xc));
          puVar26[2] = CONCAT44((int)((ulong)uVar33 * 0x3249 + 0x800 >> 0xc),
                                (int)((auVar52._0_8_ & 0xffffffff) * 0x4000 + 0x800 >> 0xc));
          uVar34 = puVar21[2];
          uVar33 = (ushort)((ulong)uVar34 >> 0x10);
          auVar37._0_8_ = CONCAT26(0,CONCAT24(uVar33,(uint)(ushort)uVar34));
          auVar37._8_2_ = (short)((ulong)uVar34 >> 0x20);
          auVar37._10_2_ = 0;
          auVar37._12_2_ = (short)((ulong)uVar34 >> 0x30);
          auVar37._14_2_ = 0;
          auVar53 = NEON_ext(auVar37,auVar37,8,1);
          puVar26[5] = CONCAT44((int)((ulong)auVar53._4_4_ * 0x6862 + 0x800 >> 0xc),
                                (int)((ulong)auVar53._0_4_ * 0x73fc + 0x800 >> 0xc));
          puVar26[4] = CONCAT44((int)((ulong)uVar33 * 0x7b21 + 0x800 >> 0xc),
                                (int)((auVar37._0_8_ & 0xffffffff) * 0x58c5 + 0x800 >> 0xc));
          uVar34 = puVar21[3];
          uVar33 = (ushort)((ulong)uVar34 >> 0x10);
          auVar38._0_8_ = CONCAT26(0,CONCAT24(uVar33,(uint)(ushort)uVar34));
          auVar38._8_2_ = (short)((ulong)uVar34 >> 0x20);
          auVar38._10_2_ = 0;
          auVar38._12_2_ = (short)((ulong)uVar34 >> 0x30);
          auVar38._14_2_ = 0;
          auVar53 = NEON_ext(auVar38,auVar38,8,1);
          puVar26[7] = CONCAT44((int)((ulong)auVar53._4_4_ * 0x187e + 0x800 >> 0xc),
                                (int)((ulong)auVar53._0_4_ * 0x300b + 0x800 >> 0xc));
          puVar26[6] = CONCAT44((int)((ulong)uVar33 * 0x45bf + 0x800 >> 0xc),
                                (int)((auVar38._0_8_ & 0xffffffff) * 0x58c5 + 0x800 >> 0xc));
          uVar34 = puVar21[4];
          uVar33 = (ushort)((ulong)uVar34 >> 0x10);
          auVar39._0_8_ = CONCAT26(0,CONCAT24(uVar33,(uint)(ushort)uVar34));
          auVar39._8_2_ = (short)((ulong)uVar34 >> 0x20);
          auVar39._10_2_ = 0;
          auVar39._12_2_ = (short)((ulong)uVar34 >> 0x30);
          auVar39._14_2_ = 0;
          auVar53 = NEON_ext(auVar39,auVar39,8,1);
          puVar26[9] = CONCAT44((int)((ulong)auVar53._4_4_ * 0x6254 + 0x800 >> 0xc),
                                (int)((ulong)auVar53._0_4_ * 0x6d41 + 0x800 >> 0xc));
          puVar26[8] = CONCAT44((int)((ulong)uVar33 * 0x73fc + 0x800 >> 0xc),
                                (int)((auVar39._0_8_ & 0xffffffff) * 0x539f + 0x800 >> 0xc));
          uVar34 = puVar21[5];
          uVar33 = (ushort)((ulong)uVar34 >> 0x10);
          auVar40._0_8_ = CONCAT26(0,CONCAT24(uVar33,(uint)(ushort)uVar34));
          auVar40._8_2_ = (short)((ulong)uVar34 >> 0x20);
          auVar40._10_2_ = 0;
          auVar40._12_2_ = (short)((ulong)uVar34 >> 0x30);
          auVar40._14_2_ = 0;
          auVar53 = NEON_ext(auVar40,auVar40,8,1);
          puVar26[0xb] = CONCAT44((int)((ulong)auVar53._4_4_ * 0x1712 + 0x800 >> 0xc),
                                  (int)((ulong)auVar53._0_4_ * 0x2d41 + 0x800 >> 0xc));
          puVar26[10] = CONCAT44((int)((ulong)uVar33 * 0x41b3 + 0x800 >> 0xc),
                                 (int)((auVar40._0_8_ & 0xffffffff) * 0x539f + 0x800 >> 0xc));
          uVar34 = puVar21[6];
          uVar33 = (ushort)((ulong)uVar34 >> 0x10);
          auVar41._0_8_ = CONCAT26(0,CONCAT24(uVar33,(uint)(ushort)uVar34));
          auVar41._8_2_ = (short)((ulong)uVar34 >> 0x20);
          auVar41._10_2_ = 0;
          auVar41._12_2_ = (short)((ulong)uVar34 >> 0x30);
          auVar41._14_2_ = 0;
          auVar53 = NEON_ext(auVar41,auVar41,8,1);
          puVar26[0xd] = CONCAT44((int)((ulong)auVar53._4_4_ * 0x587e + 0x800 >> 0xc),
                                  (int)((ulong)auVar53._0_4_ * 0x6254 + 0x800 >> 0xc));
          puVar26[0xc] = CONCAT44((int)((ulong)uVar33 * 0x6862 + 0x800 >> 0xc),
                                  (int)((auVar41._0_8_ & 0xffffffff) * 0x4b42 + 0x800 >> 0xc));
          uVar34 = puVar21[7];
          uVar33 = (ushort)((ulong)uVar34 >> 0x10);
          auVar42._0_8_ = CONCAT26(0,CONCAT24(uVar33,(uint)(ushort)uVar34));
          auVar42._8_2_ = (short)((ulong)uVar34 >> 0x20);
          auVar42._10_2_ = 0;
          auVar42._12_2_ = (short)((ulong)uVar34 >> 0x30);
          auVar42._14_2_ = 0;
          auVar53 = NEON_ext(auVar42,auVar42,8,1);
          puVar26[0xf] = CONCAT44((int)((ulong)auVar53._4_4_ * 0x14c3 + 0x800 >> 0xc),
                                  (int)((ulong)auVar53._0_4_ * 0x28ba + 0x800 >> 0xc));
          puVar26[0xe] = CONCAT44((int)((ulong)uVar33 * 0x3b21 + 0x800 >> 0xc),
                                  (int)((auVar42._0_8_ & 0xffffffff) * 0x4b42 + 0x800 >> 0xc));
          uVar34 = puVar21[8];
          uVar33 = (ushort)((ulong)uVar34 >> 0x10);
          auVar43._0_8_ = CONCAT26(0,CONCAT24(uVar33,(uint)(ushort)uVar34));
          auVar43._8_2_ = (short)((ulong)uVar34 >> 0x20);
          auVar43._10_2_ = 0;
          auVar43._12_2_ = (short)((ulong)uVar34 >> 0x30);
          auVar43._14_2_ = 0;
          auVar53 = NEON_ext(auVar43,auVar43,8,1);
          puVar26[0x11] =
               CONCAT44((int)((ulong)auVar53._4_4_ * 0x4b42 + 0x800 >> 0xc),
                        (int)((ulong)auVar53._0_4_ * 0x539f + 0x800 >> 0xc));
          puVar26[0x10] =
               CONCAT44((int)((ulong)uVar33 * 0x58c5 + 0x800 >> 0xc),
                        (int)((auVar43._0_8_ & 0xffffffff) * 0x4000 + 0x800 >> 0xc));
          uVar34 = puVar21[9];
          uVar33 = (ushort)((ulong)uVar34 >> 0x10);
          auVar44._0_8_ = CONCAT26(0,CONCAT24(uVar33,(uint)(ushort)uVar34));
          auVar44._8_2_ = (short)((ulong)uVar34 >> 0x20);
          auVar44._10_2_ = 0;
          auVar44._12_2_ = (short)((ulong)uVar34 >> 0x30);
          auVar44._14_2_ = 0;
          auVar53 = NEON_ext(auVar44,auVar44,8,1);
          puVar26[0x13] =
               CONCAT44((int)((ulong)auVar53._4_4_ * 0x11a8 + 0x800 >> 0xc),
                        (int)((ulong)auVar53._0_4_ * 0x22a3 + 0x800 >> 0xc));
          puVar26[0x12] =
               CONCAT44((int)((ulong)uVar33 * 0x3249 + 0x800 >> 0xc),
                        (int)((auVar44._0_8_ & 0xffffffff) * 0x4000 + 0x800 >> 0xc));
          uVar34 = puVar21[10];
          uVar33 = (ushort)((ulong)uVar34 >> 0x10);
          auVar45._0_8_ = CONCAT26(0,CONCAT24(uVar33,(uint)(ushort)uVar34));
          auVar45._8_2_ = (short)((ulong)uVar34 >> 0x20);
          auVar45._10_2_ = 0;
          auVar45._12_2_ = (short)((ulong)uVar34 >> 0x30);
          auVar45._14_2_ = 0;
          auVar53 = NEON_ext(auVar45,auVar45,8,1);
          puVar26[0x15] =
               CONCAT44((int)((ulong)auVar53._4_4_ * 0x3b21 + 0x800 >> 0xc),
                        (int)((ulong)auVar53._0_4_ * 0x41b3 + 0x800 >> 0xc));
          puVar26[0x14] =
               CONCAT44((int)((ulong)uVar33 * 0x45bf + 0x800 >> 0xc),
                        (int)((auVar45._0_8_ & 0xffffffff) * 0x3249 + 0x800 >> 0xc));
          uVar34 = puVar21[0xb];
          uVar33 = (ushort)((ulong)uVar34 >> 0x10);
          auVar46._0_8_ = CONCAT26(0,CONCAT24(uVar33,(uint)(ushort)uVar34));
          auVar46._8_2_ = (short)((ulong)uVar34 >> 0x20);
          auVar46._10_2_ = 0;
          auVar46._12_2_ = (short)((ulong)uVar34 >> 0x30);
          auVar46._14_2_ = 0;
          auVar53 = NEON_ext(auVar46,auVar46,8,1);
          puVar26[0x17] =
               CONCAT44((int)((ulong)auVar53._4_4_ * 0xde0 + 0x800 >> 0xc),
                        (int)((ulong)auVar53._0_4_ * 0x1b37 + 0x800 >> 0xc));
          puVar26[0x16] =
               CONCAT44((int)((ulong)uVar33 * 0x2782 + 0x800 >> 0xc),
                        (int)((auVar46._0_8_ & 0xffffffff) * 0x3249 + 0x800 >> 0xc));
          uVar34 = puVar21[0xc];
          uVar33 = (ushort)((ulong)uVar34 >> 0x10);
          auVar47._0_8_ = CONCAT26(0,CONCAT24(uVar33,(uint)(ushort)uVar34));
          auVar47._8_2_ = (short)((ulong)uVar34 >> 0x20);
          auVar47._10_2_ = 0;
          auVar47._12_2_ = (short)((ulong)uVar34 >> 0x30);
          auVar47._14_2_ = 0;
          auVar53 = NEON_ext(auVar47,auVar47,8,1);
          puVar26[0x19] =
               CONCAT44((int)((ulong)auVar53._4_4_ * 0x28ba + 0x800 >> 0xc),
                        (int)((ulong)auVar53._0_4_ * 0x2d41 + 0x800 >> 0xc));
          puVar26[0x18] =
               CONCAT44((int)((ulong)uVar33 * 0x300b + 0x800 >> 0xc),
                        (int)((auVar47._0_8_ & 0xffffffff) * 0x22a3 + 0x800 >> 0xc));
          uVar34 = puVar21[0xd];
          uVar33 = (ushort)((ulong)uVar34 >> 0x10);
          auVar48._0_8_ = CONCAT26(0,CONCAT24(uVar33,(uint)(ushort)uVar34));
          auVar48._8_2_ = (short)((ulong)uVar34 >> 0x20);
          auVar48._10_2_ = 0;
          auVar48._12_2_ = (short)((ulong)uVar34 >> 0x30);
          auVar48._14_2_ = 0;
          auVar53 = NEON_ext(auVar48,auVar48,8,1);
          puVar26[0x1b] =
               CONCAT44((int)((ulong)auVar53._4_4_ * 0x98e + 0x800 >> 0xc),
                        (int)((ulong)auVar53._0_4_ * 0x12bf + 0x800 >> 0xc));
          puVar26[0x1a] =
               CONCAT44((int)((ulong)uVar33 * 0x1b37 + 0x800 >> 0xc),
                        (int)((auVar48._0_8_ & 0xffffffff) * 0x22a3 + 0x800 >> 0xc));
          uVar34 = puVar21[0xe];
          uVar33 = (ushort)((ulong)uVar34 >> 0x10);
          auVar49._0_8_ = CONCAT26(0,CONCAT24(uVar33,(uint)(ushort)uVar34));
          auVar49._8_2_ = (short)((ulong)uVar34 >> 0x20);
          auVar49._10_2_ = 0;
          auVar49._12_2_ = (short)((ulong)uVar34 >> 0x30);
          auVar49._14_2_ = 0;
          auVar53 = NEON_ext(auVar49,auVar49,8,1);
          puVar26[0x1d] =
               CONCAT44((int)((ulong)auVar53._4_4_ * 0x14c3 + 0x800 >> 0xc),
                        (int)((ulong)auVar53._0_4_ * 0x1712 + 0x800 >> 0xc));
          puVar26[0x1c] =
               CONCAT44((int)((ulong)uVar33 * 0x187e + 0x800 >> 0xc),
                        (int)((auVar49._0_8_ & 0xffffffff) * 0x11a8 + 0x800 >> 0xc));
          uVar34 = puVar21[0xf];
          uVar33 = (ushort)((ulong)uVar34 >> 0x10);
          auVar50._0_8_ = CONCAT26(0,CONCAT24(uVar33,(uint)(ushort)uVar34));
          auVar50._8_2_ = (short)((ulong)uVar34 >> 0x20);
          auVar50._10_2_ = 0;
          auVar50._12_2_ = (short)((ulong)uVar34 >> 0x30);
          auVar50._14_2_ = 0;
          auVar53 = NEON_ext(auVar50,auVar50,8,1);
          puVar26[0x1f] =
               CONCAT44((int)((ulong)auVar53._4_4_ * 0x4df + 0x800 >> 0xc),
                        (int)((ulong)auVar53._0_4_ * 0x98e + 0x800 >> 0xc));
          puVar26[0x1e] =
               CONCAT44((int)((ulong)uVar33 * 0xde0 + 0x800 >> 0xc),
                        (int)((auVar50._0_8_ & 0xffffffff) * 0x11a8 + 0x800 >> 0xc));
        }
        else if (uVar32 == 0) {
          uVar34 = *puVar21;
          puVar24 = *(ulong **)(lVar30 + 0x58);
          uVar35 = CONCAT26(0,CONCAT24((short)((ulong)uVar34 >> 0x10),(uint)(ushort)uVar34));
          auVar5._8_2_ = (short)((ulong)uVar34 >> 0x20);
          auVar5._0_8_ = uVar35;
          auVar5._10_2_ = 0;
          auVar5._12_2_ = (short)((ulong)uVar34 >> 0x30);
          puVar24[1] = (ulong)auVar5._8_6_;
          *puVar24 = uVar35;
          uVar34 = puVar21[1];
          uVar35 = CONCAT26(0,CONCAT24((short)((ulong)uVar34 >> 0x10),(uint)(ushort)uVar34));
          auVar6._8_2_ = (short)((ulong)uVar34 >> 0x20);
          auVar6._0_8_ = uVar35;
          auVar6._10_2_ = 0;
          auVar6._12_2_ = (short)((ulong)uVar34 >> 0x30);
          puVar24[3] = (ulong)auVar6._8_6_;
          puVar24[2] = uVar35;
          uVar34 = puVar21[2];
          uVar35 = CONCAT26(0,CONCAT24((short)((ulong)uVar34 >> 0x10),(uint)(ushort)uVar34));
          auVar7._8_2_ = (short)((ulong)uVar34 >> 0x20);
          auVar7._0_8_ = uVar35;
          auVar7._10_2_ = 0;
          auVar7._12_2_ = (short)((ulong)uVar34 >> 0x30);
          puVar24[5] = (ulong)auVar7._8_6_;
          puVar24[4] = uVar35;
          uVar34 = puVar21[3];
          uVar35 = CONCAT26(0,CONCAT24((short)((ulong)uVar34 >> 0x10),(uint)(ushort)uVar34));
          auVar8._8_2_ = (short)((ulong)uVar34 >> 0x20);
          auVar8._0_8_ = uVar35;
          auVar8._10_2_ = 0;
          auVar8._12_2_ = (short)((ulong)uVar34 >> 0x30);
          puVar24[7] = (ulong)auVar8._8_6_;
          puVar24[6] = uVar35;
          uVar34 = puVar21[4];
          uVar35 = CONCAT26(0,CONCAT24((short)((ulong)uVar34 >> 0x10),(uint)(ushort)uVar34));
          auVar9._8_2_ = (short)((ulong)uVar34 >> 0x20);
          auVar9._0_8_ = uVar35;
          auVar9._10_2_ = 0;
          auVar9._12_2_ = (short)((ulong)uVar34 >> 0x30);
          puVar24[9] = (ulong)auVar9._8_6_;
          puVar24[8] = uVar35;
          uVar34 = puVar21[5];
          uVar35 = CONCAT26(0,CONCAT24((short)((ulong)uVar34 >> 0x10),(uint)(ushort)uVar34));
          auVar10._8_2_ = (short)((ulong)uVar34 >> 0x20);
          auVar10._0_8_ = uVar35;
          auVar10._10_2_ = 0;
          auVar10._12_2_ = (short)((ulong)uVar34 >> 0x30);
          puVar24[0xb] = (ulong)auVar10._8_6_;
          puVar24[10] = uVar35;
          uVar34 = puVar21[6];
          uVar35 = CONCAT26(0,CONCAT24((short)((ulong)uVar34 >> 0x10),(uint)(ushort)uVar34));
          auVar11._8_2_ = (short)((ulong)uVar34 >> 0x20);
          auVar11._0_8_ = uVar35;
          auVar11._10_2_ = 0;
          auVar11._12_2_ = (short)((ulong)uVar34 >> 0x30);
          puVar24[0xd] = (ulong)auVar11._8_6_;
          puVar24[0xc] = uVar35;
          uVar34 = puVar21[7];
          uVar35 = CONCAT26(0,CONCAT24((short)((ulong)uVar34 >> 0x10),(uint)(ushort)uVar34));
          auVar12._8_2_ = (short)((ulong)uVar34 >> 0x20);
          auVar12._0_8_ = uVar35;
          auVar12._10_2_ = 0;
          auVar12._12_2_ = (short)((ulong)uVar34 >> 0x30);
          puVar24[0xf] = (ulong)auVar12._8_6_;
          puVar24[0xe] = uVar35;
          uVar34 = puVar21[8];
          uVar35 = CONCAT26(0,CONCAT24((short)((ulong)uVar34 >> 0x10),(uint)(ushort)uVar34));
          auVar13._8_2_ = (short)((ulong)uVar34 >> 0x20);
          auVar13._0_8_ = uVar35;
          auVar13._10_2_ = 0;
          auVar13._12_2_ = (short)((ulong)uVar34 >> 0x30);
          puVar24[0x11] = (ulong)auVar13._8_6_;
          puVar24[0x10] = uVar35;
          uVar34 = puVar21[9];
          uVar35 = CONCAT26(0,CONCAT24((short)((ulong)uVar34 >> 0x10),(uint)(ushort)uVar34));
          auVar14._8_2_ = (short)((ulong)uVar34 >> 0x20);
          auVar14._0_8_ = uVar35;
          auVar14._10_2_ = 0;
          auVar14._12_2_ = (short)((ulong)uVar34 >> 0x30);
          puVar24[0x13] = (ulong)auVar14._8_6_;
          puVar24[0x12] = uVar35;
          uVar34 = puVar21[10];
          uVar35 = CONCAT26(0,CONCAT24((short)((ulong)uVar34 >> 0x10),(uint)(ushort)uVar34));
          auVar15._8_2_ = (short)((ulong)uVar34 >> 0x20);
          auVar15._0_8_ = uVar35;
          auVar15._10_2_ = 0;
          auVar15._12_2_ = (short)((ulong)uVar34 >> 0x30);
          puVar24[0x15] = (ulong)auVar15._8_6_;
          puVar24[0x14] = uVar35;
          uVar34 = puVar21[0xb];
          uVar35 = CONCAT26(0,CONCAT24((short)((ulong)uVar34 >> 0x10),(uint)(ushort)uVar34));
          auVar16._8_2_ = (short)((ulong)uVar34 >> 0x20);
          auVar16._0_8_ = uVar35;
          auVar16._10_2_ = 0;
          auVar16._12_2_ = (short)((ulong)uVar34 >> 0x30);
          puVar24[0x17] = (ulong)auVar16._8_6_;
          puVar24[0x16] = uVar35;
          uVar34 = puVar21[0xc];
          uVar35 = CONCAT26(0,CONCAT24((short)((ulong)uVar34 >> 0x10),(uint)(ushort)uVar34));
          auVar17._8_2_ = (short)((ulong)uVar34 >> 0x20);
          auVar17._0_8_ = uVar35;
          auVar17._10_2_ = 0;
          auVar17._12_2_ = (short)((ulong)uVar34 >> 0x30);
          puVar24[0x19] = (ulong)auVar17._8_6_;
          puVar24[0x18] = uVar35;
          uVar34 = puVar21[0xd];
          uVar35 = CONCAT26(0,CONCAT24((short)((ulong)uVar34 >> 0x10),(uint)(ushort)uVar34));
          auVar18._8_2_ = (short)((ulong)uVar34 >> 0x20);
          auVar18._0_8_ = uVar35;
          auVar18._10_2_ = 0;
          auVar18._12_2_ = (short)((ulong)uVar34 >> 0x30);
          puVar24[0x1b] = (ulong)auVar18._8_6_;
          puVar24[0x1a] = uVar35;
          uVar34 = puVar21[0xe];
          uVar35 = CONCAT26(0,CONCAT24((short)((ulong)uVar34 >> 0x10),(uint)(ushort)uVar34));
          auVar19._8_2_ = (short)((ulong)uVar34 >> 0x20);
          auVar19._0_8_ = uVar35;
          auVar19._10_2_ = 0;
          auVar19._12_2_ = (short)((ulong)uVar34 >> 0x30);
          puVar24[0x1d] = (ulong)auVar19._8_6_;
          puVar24[0x1c] = uVar35;
          uVar34 = puVar21[0xf];
          uVar35 = CONCAT26(0,CONCAT24((short)((ulong)uVar34 >> 0x10),(uint)(ushort)uVar34));
          auVar20._8_2_ = (short)((ulong)uVar34 >> 0x20);
          auVar20._0_8_ = uVar35;
          auVar20._10_2_ = 0;
          auVar20._12_2_ = (short)((ulong)uVar34 >> 0x30);
          puVar24[0x1f] = (ulong)auVar20._8_6_;
          puVar24[0x1e] = uVar35;
        }
        else {
          puVar21 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar21 + 5) = 0x31;
          (*(code *)*puVar21)(param_1);
        }
      }
      lVar28 = lVar28 + 1;
      lVar30 = lVar30 + 0x60;
    } while (lVar28 < (int)param_1[7]);
  }
  return;
}

