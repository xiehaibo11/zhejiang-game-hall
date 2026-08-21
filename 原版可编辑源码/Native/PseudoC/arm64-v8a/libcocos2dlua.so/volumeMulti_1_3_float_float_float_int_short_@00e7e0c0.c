
/* void cocos2d::experimental::volumeMulti<1, 3, float, float, float, int, short>(float*, unsigned
   long, float const*, int*, float const*, short) */

void cocos2d::experimental::volumeMulti<1,3,float,float,float,int,short>
               (float *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               short param_6)

{
  int iVar1;
  bool bVar2;
  float *pfVar3;
  int *piVar4;
  float *pfVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  byte bVar23;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  uint uVar24;
  byte bVar28;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  uint uVar29;
  byte bVar33;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  uint uVar34;
  byte bVar38;
  byte bVar41;
  byte bVar42;
  int iVar39;
  byte bVar43;
  uint uVar40;
  float fVar44;
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  
  if (param_4 == (int *)0x0) {
    if (3 < param_2) {
      if ((param_3 + param_2 <= param_1 || param_1 + param_2 * 3 <= param_3) &&
         ((float *)((long)param_5 + 9U) <= param_1 || param_1 + param_2 * 3 <= param_5 + 2)) {
        uVar7 = param_2 & 0xfffffffffffffffc;
        pfVar5 = param_1 + uVar7 * 3;
        pfVar3 = param_3;
        uVar6 = uVar7;
        do {
          fVar17 = *param_5;
          fVar44 = param_5[2];
          uVar6 = uVar6 - 4;
          fVar45 = param_5[1];
          fVar11 = (float)*(undefined8 *)pfVar3;
          fVar12 = (float)((ulong)*(undefined8 *)pfVar3 >> 0x20);
          fVar13 = (float)*(undefined8 *)(pfVar3 + 2);
          fVar14 = (float)((ulong)*(undefined8 *)(pfVar3 + 2) >> 0x20);
          *param_1 = *param_1 + fVar11 * fVar17;
          param_1[1] = param_1[1] + fVar11 * fVar45;
          param_1[2] = param_1[2] + fVar11 * fVar44;
          param_1[3] = param_1[3] + fVar12 * fVar17;
          param_1[4] = param_1[4] + fVar12 * fVar45;
          param_1[5] = param_1[5] + fVar12 * fVar44;
          param_1[6] = param_1[6] + fVar13 * fVar17;
          param_1[7] = param_1[7] + fVar13 * fVar45;
          param_1[8] = param_1[8] + fVar13 * fVar44;
          param_1[9] = param_1[9] + fVar14 * fVar17;
          param_1[10] = param_1[10] + fVar14 * fVar45;
          param_1[0xb] = param_1[0xb] + fVar14 * fVar44;
          param_1 = param_1 + 0xc;
          pfVar3 = pfVar3 + 4;
        } while (uVar6 != 0);
        bVar2 = uVar7 == param_2;
        param_3 = param_3 + uVar7;
        param_2 = param_2 - uVar7;
        param_1 = pfVar5;
        if (bVar2) {
          return;
        }
      }
    }
    do {
      param_2 = param_2 - 1;
      *param_1 = *param_1 + *param_3 * *param_5;
      param_1[1] = param_1[1] + *param_3 * param_5[1];
      param_1[2] = param_1[2] + *param_3 * param_5[2];
      param_1 = param_1 + 3;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  else {
    iVar1 = (int)param_6;
    if (3 < param_2) {
      if ((param_3 + param_2 <= param_1 || param_1 + param_2 * 3 <= param_3) &&
         ((float *)((long)param_5 + 9U) <= param_1 || param_1 + param_2 * 3 <= param_5 + 2)) {
        uVar7 = param_2 & 0xfffffffffffffffc;
        auVar15 = NEON_fmov(0xc1800000,4);
        auVar16 = NEON_fmov(0x41800000,4);
        auVar18 = NEON_fmov(0xbfe0000000000000,8);
        auVar19 = NEON_fmov(0x3fe0000000000000,8);
        pfVar5 = param_1 + uVar7 * 3;
        pfVar3 = param_3;
        piVar4 = param_4;
        uVar6 = uVar7;
        do {
          fVar13 = (float)*(undefined8 *)(pfVar3 + 2);
          fVar14 = (float)((ulong)*(undefined8 *)(pfVar3 + 2) >> 0x20);
          fVar11 = (float)*(undefined8 *)pfVar3;
          fVar12 = (float)((ulong)*(undefined8 *)pfVar3 >> 0x20);
          fVar17 = *param_5;
          uVar6 = uVar6 - 4;
          auVar48._0_8_ = (long)(int)-(uint)(0.0 < fVar13 * 1.3421773e+08);
          auVar48._8_8_ = (long)(int)-(uint)(0.0 < fVar14 * 1.3421773e+08);
          auVar46._0_8_ = (long)(int)-(uint)(0.0 < fVar11 * 1.3421773e+08);
          auVar46._8_8_ = (long)(int)-(uint)(0.0 < fVar12 * 1.3421773e+08);
          auVar47 = auVar18 ^ (auVar18 ^ auVar19) & auVar46;
          auVar49 = auVar18 ^ (auVar18 ^ auVar19) & auVar48;
          auVar22._0_4_ = (undefined4)(long)(auVar47._0_8_ + (double)(fVar11 * 1.3421773e+08));
          auVar22._4_4_ = (int)(long)(auVar47._8_8_ + (double)(fVar12 * 1.3421773e+08));
          auVar21._0_4_ = -(uint)(fVar11 <= auVar15._0_4_);
          auVar21._4_4_ = -(uint)(fVar12 <= auVar15._4_4_);
          auVar21._8_4_ = -(uint)(fVar13 <= auVar15._8_4_);
          auVar21._12_4_ = -(uint)(fVar14 <= auVar15._12_4_);
          iVar8 = -(uint)(auVar16._0_4_ <= fVar11);
          iVar9 = -(uint)(auVar16._4_4_ <= fVar12);
          iVar10 = -(uint)(auVar16._8_4_ <= fVar13);
          iVar39 = -(uint)(auVar16._12_4_ <= fVar14);
          auVar22._8_4_ = (int)(long)(auVar49._0_8_ + (double)(fVar13 * 1.3421773e+08));
          auVar22._12_4_ = (int)(long)(auVar49._8_8_ + (double)(fVar14 * 1.3421773e+08));
          fVar44 = param_5[1];
          bVar23 = (byte)iVar8 & ~(byte)auVar21._0_4_;
          bVar25 = (byte)((uint)iVar8 >> 8) & ~(byte)((uint)auVar21._0_4_ >> 8);
          bVar26 = (byte)((uint)iVar8 >> 0x10) & ~(byte)((uint)auVar21._0_4_ >> 0x10);
          bVar27 = (byte)((uint)iVar8 >> 0x18) & ~(byte)((uint)auVar21._0_4_ >> 0x18);
          bVar28 = (byte)iVar9 & ~(byte)auVar21._4_4_;
          bVar30 = (byte)((uint)iVar9 >> 8) & ~(byte)((uint)auVar21._4_4_ >> 8);
          bVar31 = (byte)((uint)iVar9 >> 0x10) & ~(byte)((uint)auVar21._4_4_ >> 0x10);
          bVar32 = (byte)((uint)iVar9 >> 0x18) & ~(byte)((uint)auVar21._4_4_ >> 0x18);
          bVar33 = (byte)iVar10 & ~(byte)auVar21._8_4_;
          bVar35 = (byte)((uint)iVar10 >> 8) & ~(byte)((uint)auVar21._8_4_ >> 8);
          bVar36 = (byte)((uint)iVar10 >> 0x10) & ~(byte)((uint)auVar21._8_4_ >> 0x10);
          bVar37 = (byte)((uint)iVar10 >> 0x18) & ~(byte)((uint)auVar21._8_4_ >> 0x18);
          bVar38 = (byte)iVar39 & ~(byte)auVar21._12_4_;
          bVar41 = (byte)((uint)iVar39 >> 8) & ~(byte)((uint)auVar21._12_4_ >> 8);
          bVar42 = (byte)((uint)iVar39 >> 0x10) & ~(byte)((uint)auVar21._12_4_ >> 0x10);
          bVar43 = (byte)((uint)iVar39 >> 0x18) & ~(byte)((uint)auVar21._12_4_ >> 0x18);
          auVar47._8_4_ = 0x80000000;
          auVar47._0_8_ = 0x8000000080000000;
          auVar47._12_4_ = 0x80000000;
          auVar22 = auVar22 ^ (auVar22 ^ auVar47) & auVar21;
          fVar45 = param_5[2];
          uVar24 = CONCAT13(bVar27,CONCAT12(bVar26,CONCAT11(bVar25,bVar23))) & 0x7fffffff;
          uVar29 = CONCAT13(bVar32,CONCAT12(bVar31,CONCAT11(bVar30,bVar28))) & 0x7fffffff;
          uVar34 = CONCAT13(bVar37,CONCAT12(bVar36,CONCAT11(bVar35,bVar33))) & 0x7fffffff;
          uVar40 = CONCAT13(bVar43,CONCAT12(bVar42,CONCAT11(bVar41,bVar38))) & 0x7fffffff;
          iVar8 = CONCAT13((byte)(uVar24 >> 0x18) | auVar22[3] & ~bVar27,
                           CONCAT12((byte)(uVar24 >> 0x10) | auVar22[2] & ~bVar26,
                                    CONCAT11((byte)(uVar24 >> 8) | auVar22[1] & ~bVar25,
                                             (byte)uVar24 | auVar22[0] & ~bVar23)));
          auVar20._0_8_ =
               CONCAT17((byte)(uVar29 >> 0x18) | auVar22[7] & ~bVar32,
                        CONCAT16((byte)(uVar29 >> 0x10) | auVar22[6] & ~bVar31,
                                 CONCAT15((byte)(uVar29 >> 8) | auVar22[5] & ~bVar30,
                                          CONCAT14((byte)uVar29 | auVar22[4] & ~bVar28,iVar8))));
          auVar20[8] = (byte)uVar34 | auVar22[8] & ~bVar33;
          auVar20[9] = (byte)(uVar34 >> 8) | auVar22[9] & ~bVar35;
          auVar20[10] = (byte)(uVar34 >> 0x10) | auVar22[10] & ~bVar36;
          auVar20[0xb] = (byte)(uVar34 >> 0x18) | auVar22[0xb] & ~bVar37;
          auVar49[0xc] = (byte)uVar40 | auVar22[0xc] & ~bVar38;
          auVar49._0_12_ = auVar20;
          auVar49[0xd] = (byte)(uVar40 >> 8) | auVar22[0xd] & ~bVar41;
          auVar49[0xe] = (byte)(uVar40 >> 0x10) | auVar22[0xe] & ~bVar42;
          auVar49[0xf] = (byte)(uVar40 >> 0x18) | auVar22[0xf] & ~bVar43;
          *param_1 = fVar11 * fVar17 + *param_1;
          param_1[1] = fVar11 * fVar44 + param_1[1];
          param_1[2] = fVar11 * fVar45 + param_1[2];
          param_1[3] = fVar12 * fVar17 + param_1[3];
          param_1[4] = fVar12 * fVar44 + param_1[4];
          param_1[5] = fVar12 * fVar45 + param_1[5];
          param_1[6] = fVar13 * fVar17 + param_1[6];
          param_1[7] = fVar13 * fVar44 + param_1[7];
          param_1[8] = fVar13 * fVar45 + param_1[8];
          param_1[9] = fVar14 * fVar17 + param_1[9];
          param_1[10] = fVar14 * fVar44 + param_1[10];
          param_1[0xb] = fVar14 * fVar45 + param_1[0xb];
          param_1 = param_1 + 0xc;
          piVar4[2] = piVar4[2] + ((auVar20._8_4_ * 3) / 3 >> 0xc) * iVar1;
          piVar4[3] = piVar4[3] + ((auVar49._12_4_ * 3) / 3 >> 0xc) * iVar1;
          *piVar4 = *piVar4 + ((iVar8 * 3) / 3 >> 0xc) * iVar1;
          piVar4[1] = piVar4[1] + (((int)((ulong)auVar20._0_8_ >> 0x20) * 3) / 3 >> 0xc) * iVar1;
          pfVar3 = pfVar3 + 4;
          piVar4 = piVar4 + 4;
        } while (uVar6 != 0);
        bVar2 = uVar7 == param_2;
        param_3 = param_3 + uVar7;
        param_4 = param_4 + uVar7;
        param_2 = param_2 - uVar7;
        param_1 = pfVar5;
        if (bVar2) {
          return;
        }
      }
    }
    do {
      fVar17 = *param_3;
      uVar24 = 0xbfe00000;
      if (fVar17 <= -16.0) {
        iVar8 = -0x80000000;
      }
      else if (16.0 <= fVar17) {
        iVar8 = 0x7fffffff;
      }
      else {
        uVar29 = 0x3fe00000;
        if (fVar17 * 1.3421773e+08 <= 0.0) {
          uVar29 = uVar24;
        }
        iVar8 = (int)((double)((ulong)uVar29 << 0x20) + (double)(fVar17 * 1.3421773e+08));
      }
      *param_1 = fVar17 * *param_5 + *param_1;
      fVar17 = *param_3;
      if (fVar17 <= -16.0) {
        iVar9 = -0x80000000;
      }
      else if (16.0 <= fVar17) {
        iVar9 = 0x7fffffff;
      }
      else {
        uVar29 = 0x3fe00000;
        if (fVar17 * 1.3421773e+08 <= 0.0) {
          uVar29 = uVar24;
        }
        iVar9 = (int)((double)((ulong)uVar29 << 0x20) + (double)(fVar17 * 1.3421773e+08));
      }
      param_1[1] = fVar17 * param_5[1] + param_1[1];
      fVar17 = *param_3;
      if (fVar17 <= -16.0) {
        iVar10 = -0x80000000;
      }
      else if (16.0 <= fVar17) {
        iVar10 = 0x7fffffff;
      }
      else {
        uVar29 = 0x3fe00000;
        if (fVar17 * 1.3421773e+08 <= 0.0) {
          uVar29 = uVar24;
        }
        iVar10 = (int)((double)((ulong)uVar29 << 0x20) + (double)(fVar17 * 1.3421773e+08));
      }
      param_1[2] = fVar17 * param_5[2] + param_1[2];
      param_2 = param_2 - 1;
      *param_4 = *param_4 + ((iVar10 + iVar9 + iVar8) / 3 >> 0xc) * iVar1;
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
      param_1 = param_1 + 3;
    } while (param_2 != 0);
  }
  return;
}

