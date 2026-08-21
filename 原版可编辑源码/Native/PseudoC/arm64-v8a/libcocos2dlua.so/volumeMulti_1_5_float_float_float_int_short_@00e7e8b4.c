
/* void cocos2d::experimental::volumeMulti<1, 5, float, float, float, int, short>(float*, unsigned
   long, float const*, int*, float const*, short) */

void cocos2d::experimental::volumeMulti<1,5,float,float,float,int,short>
               (float *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               short param_6)

{
  undefined1 (*pauVar1) [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  undefined1 (*pauVar7) [16];
  float *pfVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  undefined4 uVar36;
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 in_q17 [16];
  undefined1 auVar50 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  
  if (param_4 == (int *)0x0) {
    if (3 < param_2) {
      if ((param_3 + param_2 <= param_1 || param_1 + param_2 * 5 <= param_3) &&
         ((float *)((long)param_5 + 0x11U) <= param_1 || param_1 + param_2 * 5 <= param_5 + 4)) {
        uVar10 = param_2 & 0xfffffffffffffffc;
        pauVar7 = (undefined1 (*) [16])param_1;
        pfVar8 = param_3;
        uVar15 = uVar10;
        do {
          fVar2 = *pfVar8;
          fVar3 = pfVar8[1];
          fVar4 = pfVar8[2];
          fVar5 = pfVar8[3];
          fVar19 = *param_5;
          pauVar1 = pauVar7 + 3;
          uVar36 = (undefined4)((ulong)*(undefined8 *)(pauVar7[3] + 8) >> 0x20);
          auVar38 = pauVar7[4];
          auVar45 = pauVar7[1];
          auVar55 = pauVar7[2];
          auVar16 = *pauVar7;
          auVar58._12_4_ = uVar36;
          auVar58._0_12_ = *(undefined1 (*) [12])*pauVar1;
          auVar58 = NEON_ext(auVar38,auVar58,4,1);
          auVar59 = NEON_ext(auVar58,auVar58,4,1);
          auVar50._4_12_ = in_q17._4_12_;
          auVar50._0_4_ = auVar45._8_4_;
          auVar52._12_4_ = in_q17._12_4_;
          auVar52._0_8_ = auVar50._0_8_;
          auVar52._8_4_ = auVar45._12_4_;
          auVar51._8_8_ = auVar52._8_8_;
          auVar51._4_4_ = auVar16._8_4_;
          auVar51._0_4_ = auVar45._8_4_;
          auVar53._0_12_ = auVar51._0_12_;
          auVar53._12_4_ = auVar16._12_4_;
          auVar43 = NEON_ext(auVar45,auVar16,8,1);
          auVar54 = NEON_ext(auVar53,auVar16,4,1);
          auVar58 = NEON_ext(auVar55,auVar38,4,1);
          auVar44 = NEON_ext(auVar43,auVar43,0xc,1);
          auVar59 = NEON_ext(auVar59,auVar54,8,1);
          auVar43._12_4_ = uVar36;
          auVar43._0_12_ = *(undefined1 (*) [12])*pauVar1;
          auVar43 = NEON_ext(auVar38,auVar43,8,1);
          auVar44 = NEON_ext(auVar58,auVar44,8,1);
          auVar58 = NEON_ext(auVar16,auVar55,0xc,1);
          auVar43 = NEON_ext(auVar43,auVar43,4,1);
          auVar26._8_8_ = auVar16._8_8_;
          auVar26._0_4_ = auVar16._0_4_;
          auVar26._4_4_ = auVar45._4_4_;
          auVar54._8_8_ = auVar45._8_8_;
          auVar54._0_4_ = auVar45._0_4_;
          auVar54._4_4_ = auVar55._4_4_;
          auVar20._0_12_ = auVar55._0_12_;
          auVar20._12_4_ = uVar36;
          auVar45 = NEON_ext(auVar43,auVar58,8,1);
          fVar17 = param_5[2];
          fVar57 = param_5[3];
          auVar43 = NEON_ext(auVar20,auVar26,8,1);
          fVar25 = param_5[4];
          auVar38._12_4_ = auVar38._12_4_;
          auVar38._0_12_ = *(undefined1 (*) [12])*pauVar1;
          auVar58 = NEON_ext(auVar38,auVar54,8,1);
          fVar32 = param_5[1];
          auVar60._0_4_ = fVar2 * fVar57;
          auVar60._4_4_ = fVar3 * fVar57;
          auVar60._8_4_ = fVar4 * fVar57;
          auVar60._12_4_ = fVar5 * fVar57;
          auVar27._0_4_ = fVar2 * fVar25;
          auVar27._4_4_ = fVar3 * fVar25;
          auVar27._8_4_ = fVar4 * fVar25;
          auVar27._12_4_ = fVar5 * fVar25;
          auVar38 = NEON_ext(auVar44,auVar44,8,1);
          auVar55 = NEON_ext(auVar59,auVar59,8,1);
          auVar45 = NEON_ext(auVar45,auVar45,8,1);
          auVar58 = NEON_ext(auVar58,auVar58,8,1);
          auVar44._0_4_ = auVar55._0_4_ + fVar2 * fVar17;
          auVar44._4_4_ = auVar55._4_4_ + fVar3 * fVar17;
          auVar44._8_4_ = auVar55._8_4_ + fVar4 * fVar17;
          auVar44._12_4_ = auVar55._12_4_ + fVar5 * fVar17;
          fVar25 = auVar45._4_4_ + auVar60._4_4_;
          fVar57 = auVar45._8_4_ + auVar60._8_4_;
          auVar48._12_4_ = auVar45._12_4_;
          fVar37 = auVar48._12_4_ + auVar60._12_4_;
          auVar43 = NEON_ext(auVar43,auVar43,8,1);
          auVar55._0_4_ = auVar38._0_4_ + fVar2 * fVar32;
          auVar55._4_4_ = auVar38._4_4_ + fVar3 * fVar32;
          auVar55._8_4_ = auVar38._8_4_ + fVar4 * fVar32;
          auVar41._12_4_ = auVar38._12_4_;
          auVar55._12_4_ = auVar41._12_4_ + fVar5 * fVar32;
          auVar18._0_4_ = auVar58._0_4_ + auVar27._0_4_;
          fVar17 = auVar58._4_4_ + auVar27._4_4_;
          auVar59._0_8_ = CONCAT44(fVar17,auVar18._0_4_);
          auVar59._8_4_ = auVar58._8_4_ + auVar27._8_4_;
          auVar59._12_4_ = auVar58._12_4_ + auVar27._12_4_;
          auVar39._4_12_ = auVar38._4_12_;
          auVar39._0_4_ = auVar44._0_4_;
          auVar41._0_8_ = auVar39._0_8_;
          auVar41._8_4_ = auVar44._4_4_;
          auVar40._8_8_ = auVar41._8_8_;
          auVar40._4_4_ = auVar45._0_4_ + auVar60._0_4_;
          auVar40._0_4_ = auVar44._0_4_;
          auVar42._0_12_ = auVar40._0_12_;
          auVar42._12_4_ = fVar25;
          auVar16._0_4_ = auVar43._0_4_ + fVar2 * fVar19;
          auVar16._4_4_ = auVar43._4_4_ + fVar3 * fVar19;
          auVar16._8_4_ = auVar43._8_4_ + fVar4 * fVar19;
          auVar23._12_4_ = auVar43._12_4_;
          auVar21._4_12_ = auVar43._4_12_;
          auVar21._0_4_ = auVar55._4_4_;
          auVar23._0_8_ = auVar21._0_8_;
          auVar23._8_4_ = auVar55._12_4_;
          auVar22._8_8_ = auVar23._8_8_;
          auVar22._4_4_ = auVar44._4_4_;
          auVar22._0_4_ = auVar55._4_4_;
          auVar24._0_12_ = auVar22._0_12_;
          auVar24._12_4_ = auVar44._12_4_;
          auVar18._8_8_ = auVar59._8_8_;
          auVar56._8_8_ = auVar18._8_8_;
          auVar56._0_8_ = auVar59._0_8_;
          auVar46._4_12_ = auVar45._4_12_;
          auVar46._0_4_ = auVar44._8_4_;
          auVar48._0_8_ = auVar46._0_8_;
          auVar48._8_4_ = auVar44._12_4_;
          auVar47._8_8_ = auVar48._8_8_;
          auVar47._4_4_ = fVar57;
          auVar47._0_4_ = auVar44._8_4_;
          auVar49._0_12_ = auVar47._0_12_;
          auVar49._12_4_ = fVar37;
          auVar58 = NEON_ext(auVar44,auVar42,8,1);
          auVar28._4_12_ = auVar27._4_12_;
          auVar28._0_4_ = fVar57;
          auVar30._0_8_ = auVar28._0_8_;
          auVar30._8_4_ = fVar37;
          auVar30._12_4_ = auVar27._12_4_;
          auVar29._8_8_ = auVar30._8_8_;
          auVar29._4_4_ = auVar59._8_4_;
          auVar29._0_4_ = fVar57;
          auVar31._0_12_ = auVar29._0_12_;
          auVar31._12_4_ = auVar59._12_4_;
          auVar38 = NEON_ext(auVar24,auVar55,8,1);
          auVar43 = NEON_ext(auVar55,auVar24,8,1);
          auVar61._4_12_ = auVar60._4_12_;
          auVar61._0_4_ = auVar16._0_4_;
          auVar63._0_8_ = auVar61._0_8_;
          auVar63._8_4_ = auVar16._4_4_;
          auVar63._12_4_ = auVar60._12_4_;
          auVar62._8_8_ = auVar63._8_8_;
          auVar62._4_4_ = auVar55._0_4_;
          auVar62._0_4_ = auVar16._0_4_;
          auVar64._0_12_ = auVar62._0_12_;
          auVar64._12_4_ = auVar55._4_4_;
          auVar18._4_4_ = auVar16._4_4_;
          in_q17._0_12_ = auVar56._0_12_;
          in_q17._12_4_ = auVar23._12_4_ + fVar5 * fVar19;
          auVar16._12_4_ = auVar55._8_4_;
          auVar54 = NEON_ext(auVar31,auVar38,8,1);
          auVar38 = NEON_ext(auVar58,auVar64,8,1);
          auVar55 = NEON_ext(auVar43,auVar18,8,1);
          auVar44 = NEON_ext(in_q17,auVar49,8,1);
          auVar45._4_4_ = fVar17;
          auVar45._0_4_ = fVar25;
          auVar45._8_4_ = fVar37;
          auVar45._12_4_ = auVar59._12_4_;
          auVar43 = NEON_ext(auVar16,auVar45,8,1);
          auVar58 = NEON_ext(auVar54,auVar54,8,1);
          auVar38 = NEON_ext(auVar38,auVar38,8,1);
          auVar45 = NEON_ext(auVar55,auVar55,8,1);
          auVar55 = NEON_ext(auVar44,auVar44,8,1);
          auVar43 = NEON_ext(auVar43,auVar43,8,1);
          uVar15 = uVar15 - 4;
          *(long *)(pauVar7[3] + 8) = auVar55._8_8_;
          *(long *)pauVar7[3] = auVar55._0_8_;
          *(long *)(pauVar7[4] + 8) = auVar58._8_8_;
          *(long *)pauVar7[4] = auVar58._0_8_;
          *(long *)(pauVar7[1] + 8) = auVar45._8_8_;
          *(long *)pauVar7[1] = auVar45._0_8_;
          *(long *)(pauVar7[2] + 8) = auVar43._8_8_;
          *(long *)pauVar7[2] = auVar43._0_8_;
          *(long *)(*pauVar7 + 8) = auVar38._8_8_;
          *(long *)*pauVar7 = auVar38._0_8_;
          pauVar7 = pauVar7 + 5;
          pfVar8 = pfVar8 + 4;
        } while (uVar15 != 0);
        bVar6 = uVar10 == param_2;
        param_3 = param_3 + uVar10;
        param_2 = param_2 - uVar10;
        param_1 = param_1 + uVar10 * 5;
        if (bVar6) {
          return;
        }
      }
    }
    do {
      param_2 = param_2 - 1;
      *param_1 = *param_1 + *param_3 * *param_5;
      param_1[1] = param_1[1] + *param_3 * param_5[1];
      param_1[2] = param_1[2] + *param_3 * param_5[2];
      param_1[3] = param_1[3] + *param_3 * param_5[3];
      param_1[4] = param_1[4] + *param_3 * param_5[4];
      param_1 = param_1 + 5;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  else {
    do {
      fVar19 = *param_3;
      uVar35 = 0x3fe00000;
      uVar33 = 0xbfe00000;
      if (fVar19 <= -16.0) {
        iVar9 = -0x80000000;
      }
      else if (16.0 <= fVar19) {
        iVar9 = 0x7fffffff;
      }
      else {
        uVar34 = uVar35;
        if (fVar19 * 1.3421773e+08 <= 0.0) {
          uVar34 = uVar33;
        }
        iVar9 = (int)((double)((ulong)uVar34 << 0x20) + (double)(fVar19 * 1.3421773e+08));
      }
      *param_1 = fVar19 * *param_5 + *param_1;
      fVar19 = *param_3;
      if (fVar19 <= -16.0) {
        iVar11 = -0x80000000;
      }
      else if (16.0 <= fVar19) {
        iVar11 = 0x7fffffff;
      }
      else {
        uVar34 = uVar35;
        if (fVar19 * 1.3421773e+08 <= 0.0) {
          uVar34 = uVar33;
        }
        iVar11 = (int)((double)((ulong)uVar34 << 0x20) + (double)(fVar19 * 1.3421773e+08));
      }
      param_1[1] = fVar19 * param_5[1] + param_1[1];
      fVar19 = *param_3;
      if (fVar19 <= -16.0) {
        iVar12 = -0x80000000;
      }
      else if (16.0 <= fVar19) {
        iVar12 = 0x7fffffff;
      }
      else {
        uVar34 = uVar35;
        if (fVar19 * 1.3421773e+08 <= 0.0) {
          uVar34 = uVar33;
        }
        iVar12 = (int)((double)((ulong)uVar34 << 0x20) + (double)(fVar19 * 1.3421773e+08));
      }
      param_1[2] = fVar19 * param_5[2] + param_1[2];
      fVar19 = *param_3;
      if (fVar19 <= -16.0) {
        iVar13 = -0x80000000;
      }
      else if (16.0 <= fVar19) {
        iVar13 = 0x7fffffff;
      }
      else {
        uVar34 = uVar35;
        if (fVar19 * 1.3421773e+08 <= 0.0) {
          uVar34 = uVar33;
        }
        iVar13 = (int)((double)((ulong)uVar34 << 0x20) + (double)(fVar19 * 1.3421773e+08));
      }
      param_1[3] = fVar19 * param_5[3] + param_1[3];
      fVar19 = *param_3;
      if (fVar19 <= -16.0) {
        iVar14 = -0x80000000;
      }
      else if (16.0 <= fVar19) {
        iVar14 = 0x7fffffff;
      }
      else {
        if (fVar19 * 1.3421773e+08 <= 0.0) {
          uVar35 = uVar33;
        }
        iVar14 = (int)((double)((ulong)uVar35 << 0x20) + (double)(fVar19 * 1.3421773e+08));
      }
      param_1[4] = fVar19 * param_5[4] + param_1[4];
      param_3 = param_3 + 1;
      param_2 = param_2 - 1;
      *param_4 = *param_4 + ((iVar14 + iVar13 + iVar12 + iVar11 + iVar9) / 5 >> 0xc) * (int)param_6;
      param_1 = param_1 + 5;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

