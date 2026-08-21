
/* void cocos2d::experimental::volumeMulti<1, 6, float, float, float, int, short>(float*, unsigned
   long, float const*, int*, float const*, short) */

void cocos2d::experimental::volumeMulti<1,6,float,float,float,int,short>
               (float *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               short param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  undefined1 (*pauVar6) [16];
  float *pfVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auVar18 [12];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar46;
  undefined1 in_q16 [16];
  undefined1 auVar47 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar56 [16];
  float fVar60;
  undefined1 in_q17 [16];
  undefined1 auVar61 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar76;
  undefined1 in_q20 [16];
  undefined1 auVar77 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar86 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar53 [16];
  undefined1 auVar57 [16];
  undefined1 auVar48 [16];
  undefined1 auVar54 [16];
  undefined1 auVar58 [16];
  undefined1 auVar49 [16];
  undefined1 auVar55 [16];
  undefined1 auVar59 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar78 [16];
  undefined1 auVar83 [16];
  undefined1 auVar79 [16];
  undefined1 auVar84 [16];
  undefined1 auVar80 [16];
  undefined1 auVar85 [16];
  
  if (param_4 == (int *)0x0) {
    if (3 < param_2) {
      if ((param_3 + param_2 <= param_1 || param_1 + param_2 * 6 <= param_3) &&
         ((float *)((long)param_5 + 0x15U) <= param_1 || param_1 + param_2 * 6 <= param_5 + 5)) {
        uVar9 = param_2 & 0xfffffffffffffffc;
        pauVar6 = (undefined1 (*) [16])param_1;
        pfVar7 = param_3;
        uVar15 = uVar9;
        do {
          fVar2 = *pfVar7;
          fVar21 = pfVar7[1];
          fVar3 = pfVar7[2];
          fVar4 = pfVar7[3];
          fVar1 = *param_5;
          auVar19 = pauVar6[3];
          auVar65 = pauVar6[4];
          auVar75 = pauVar6[5];
          auVar34 = *pauVar6;
          auVar41 = pauVar6[1];
          auVar51 = pauVar6[2];
          uVar16 = auVar65._0_4_;
          auVar68._4_12_ = in_q16._4_12_;
          auVar68._0_4_ = uVar16;
          auVar48._12_4_ = in_q16._12_4_;
          auVar48._0_8_ = auVar68._0_8_;
          auVar48._8_4_ = auVar65._8_4_;
          auVar47._8_8_ = auVar48._8_8_;
          auVar47._4_4_ = auVar19._0_4_;
          auVar47._0_4_ = uVar16;
          auVar49._0_12_ = auVar47._0_12_;
          auVar49._12_4_ = auVar19._8_4_;
          auVar74._4_4_ = auVar19._12_4_;
          auVar74._0_4_ = auVar19._4_4_;
          auVar74._8_4_ = auVar75._4_4_;
          auVar74._12_4_ = auVar75._12_4_;
          uVar17 = auVar75._0_4_;
          auVar77._4_12_ = in_q20._4_12_;
          auVar77._0_4_ = uVar17;
          auVar79._12_4_ = in_q20._12_4_;
          auVar79._0_8_ = auVar77._0_8_;
          auVar79._8_4_ = auVar75._8_4_;
          auVar78._8_8_ = auVar79._8_8_;
          auVar78._4_4_ = uVar16;
          auVar78._0_4_ = uVar17;
          auVar80._0_12_ = auVar78._0_12_;
          auVar80._12_4_ = auVar65._8_4_;
          auVar50 = NEON_ext(auVar65,auVar49,0xc,1);
          auVar66._0_12_ = auVar19._0_12_;
          auVar66._12_4_ = uVar17;
          auVar81 = NEON_ext(auVar75,auVar80,0xc,1);
          auVar33._0_8_ = auVar75._0_8_;
          auVar33._8_4_ = auVar65._4_4_;
          auVar33._12_4_ = auVar75._12_4_;
          auVar75 = NEON_ext(auVar19,auVar74,0xc,1);
          auVar20._12_4_ = auVar65._12_4_;
          auVar20._0_8_ = auVar65._0_8_;
          auVar20._8_4_ = auVar19._4_4_;
          uVar16 = auVar34._0_4_;
          auVar86._4_4_ = auVar34._8_4_;
          auVar86._0_4_ = uVar16;
          auVar86._8_4_ = uVar16;
          auVar86._12_4_ = auVar34._8_4_;
          auVar19 = NEON_ext(auVar86,auVar51,0xc,1);
          auVar19 = NEON_ext(auVar66,auVar19,8,1);
          auVar67._0_4_ = auVar41._0_4_;
          auVar67._4_4_ = auVar51._8_4_;
          auVar67._8_8_ = auVar41._8_8_;
          uVar17 = auVar41._4_4_;
          auVar61._4_12_ = in_q17._4_12_;
          auVar61._0_4_ = uVar17;
          auVar63._12_4_ = in_q17._12_4_;
          auVar63._0_8_ = auVar61._0_8_;
          auVar63._8_4_ = auVar41._12_4_;
          auVar62._8_8_ = auVar63._8_8_;
          auVar62._4_4_ = auVar34._4_4_;
          auVar62._0_4_ = uVar17;
          auVar64._0_12_ = auVar62._0_12_;
          auVar64._12_4_ = auVar34._12_4_;
          auVar68 = NEON_ext(auVar81,auVar67,8,1);
          auVar82._4_12_ = auVar81._4_12_;
          auVar82._0_4_ = auVar51._4_4_;
          auVar84._12_4_ = auVar81._12_4_;
          auVar84._0_8_ = auVar82._0_8_;
          auVar84._8_4_ = auVar51._12_4_;
          auVar83._8_8_ = auVar84._8_8_;
          auVar83._4_4_ = uVar17;
          auVar83._0_4_ = auVar51._4_4_;
          auVar85._0_12_ = auVar83._0_12_;
          auVar85._12_4_ = auVar41._12_4_;
          auVar65 = NEON_ext(auVar64,auVar34,4,1);
          auVar86 = NEON_ext(auVar85,auVar41,4,1);
          auVar40._4_12_ = auVar51._4_12_;
          auVar40._0_4_ = auVar34._12_4_;
          auVar22._8_8_ = auVar34._8_8_;
          auVar22._4_4_ = auVar41._8_4_;
          auVar22._0_4_ = uVar16;
          auVar34 = NEON_ext(auVar33,auVar86,8,1);
          fVar27 = param_5[2];
          fVar76 = param_5[3];
          auVar65 = NEON_ext(auVar20,auVar65,8,1);
          auVar41 = NEON_ext(auVar75,auVar40,8,1);
          fVar60 = param_5[4];
          fVar73 = param_5[5];
          auVar75 = NEON_ext(auVar50,auVar22,8,1);
          fVar46 = param_5[1];
          in_q20._0_4_ = fVar2 * fVar76;
          in_q20._4_4_ = fVar21 * fVar76;
          in_q20._8_4_ = fVar3 * fVar76;
          in_q20._12_4_ = fVar4 * fVar76;
          auVar19 = NEON_ext(auVar19,auVar19,8,1);
          auVar51 = NEON_ext(auVar68,auVar68,8,1);
          auVar34 = NEON_ext(auVar34,auVar34,8,1);
          auVar65 = NEON_ext(auVar65,auVar65,8,1);
          auVar81 = NEON_ext(auVar41,auVar41,8,1);
          auVar18._0_4_ = auVar19._0_4_ + fVar2 * fVar27;
          auVar18._4_4_ = auVar19._4_4_ + fVar21 * fVar27;
          auVar18._8_4_ = auVar19._8_4_ + fVar3 * fVar27;
          auVar50._12_4_ = auVar19._12_4_ + fVar4 * fVar27;
          auVar50._0_12_ = auVar18;
          auVar28._0_4_ = auVar51._0_4_ + fVar2 * fVar60;
          auVar28._4_4_ = auVar51._4_4_ + fVar21 * fVar60;
          auVar28._8_4_ = auVar51._8_4_ + fVar3 * fVar60;
          auVar54._12_4_ = auVar51._12_4_;
          auVar28._12_4_ = auVar54._12_4_ + fVar4 * fVar60;
          auVar35._0_4_ = auVar34._0_4_ + fVar2 * fVar73;
          auVar35._4_4_ = auVar34._4_4_ + fVar21 * fVar73;
          auVar35._8_4_ = auVar34._8_4_ + fVar3 * fVar73;
          auVar35._12_4_ = auVar34._12_4_ + fVar4 * fVar73;
          auVar75 = NEON_ext(auVar75,auVar75,8,1);
          auVar19._0_4_ = auVar65._0_4_ + fVar2 * fVar46;
          auVar19._4_4_ = auVar65._4_4_ + fVar21 * fVar46;
          auVar19._8_4_ = auVar65._8_4_ + fVar3 * fVar46;
          auVar19._12_4_ = auVar65._12_4_ + fVar4 * fVar46;
          fVar27 = auVar81._4_4_ + in_q20._4_4_;
          auVar44._12_4_ = auVar81._12_4_;
          auVar52._4_12_ = auVar51._4_12_;
          auVar52._0_4_ = auVar28._4_4_;
          auVar54._0_8_ = auVar52._0_8_;
          auVar54._8_4_ = auVar28._12_4_;
          auVar53._8_8_ = auVar54._8_8_;
          auVar53._4_4_ = auVar35._4_4_;
          auVar53._0_4_ = auVar28._4_4_;
          auVar55._0_12_ = auVar53._0_12_;
          auVar55._12_4_ = auVar35._12_4_;
          auVar42._4_12_ = auVar81._4_12_;
          auVar42._0_4_ = auVar28._8_4_;
          auVar44._0_8_ = auVar42._0_8_;
          auVar44._8_4_ = auVar28._12_4_;
          auVar43._8_8_ = auVar44._8_8_;
          auVar43._4_4_ = auVar35._8_4_;
          auVar43._0_4_ = auVar28._8_4_;
          auVar45._0_12_ = auVar43._0_12_;
          auVar45._12_4_ = auVar35._12_4_;
          auVar36._4_12_ = auVar35._4_12_;
          auVar36._0_4_ = auVar28._0_4_;
          auVar38._0_8_ = auVar36._0_8_;
          auVar38._8_4_ = auVar28._4_4_;
          auVar38._12_4_ = auVar35._12_4_;
          auVar37._8_8_ = auVar38._8_8_;
          auVar37._4_4_ = auVar35._0_4_;
          auVar37._0_4_ = auVar28._0_4_;
          auVar39._0_12_ = auVar37._0_12_;
          auVar39._12_4_ = auVar35._4_4_;
          auVar51._0_4_ = auVar75._0_4_ + fVar2 * fVar1;
          auVar51._4_4_ = auVar75._4_4_ + fVar21 * fVar1;
          auVar51._8_4_ = auVar75._8_4_ + fVar3 * fVar1;
          auVar25._12_4_ = auVar75._12_4_;
          auVar51._12_4_ = auVar25._12_4_ + fVar4 * fVar1;
          auVar23._4_12_ = auVar75._4_12_;
          auVar23._0_4_ = auVar18._4_4_;
          auVar25._0_8_ = auVar23._0_8_;
          auVar25._8_4_ = auVar50._12_4_;
          auVar24._8_8_ = auVar25._8_8_;
          auVar24._4_4_ = fVar27;
          auVar24._0_4_ = auVar18._4_4_;
          auVar26._0_12_ = auVar24._0_12_;
          auVar26._12_4_ = auVar44._12_4_ + in_q20._12_4_;
          auVar65 = NEON_ext(auVar28,auVar55,8,1);
          auVar56._4_12_ = auVar55._4_12_;
          auVar56._0_4_ = auVar18._0_4_;
          auVar58._0_8_ = auVar56._0_8_;
          auVar58._8_4_ = auVar18._4_4_;
          auVar58._12_4_ = auVar35._12_4_;
          auVar57._8_8_ = auVar58._8_8_;
          auVar57._4_4_ = auVar81._0_4_ + in_q20._0_4_;
          auVar57._0_4_ = auVar18._0_4_;
          auVar59._0_12_ = auVar57._0_12_;
          auVar59._12_4_ = fVar27;
          in_q17 = NEON_ext(auVar26,auVar50,8,1);
          auVar86 = NEON_ext(auVar65,auVar26,8,1);
          auVar29._4_12_ = auVar65._4_12_;
          auVar29._0_4_ = auVar51._4_4_;
          auVar31._12_4_ = auVar65._12_4_;
          auVar31._0_8_ = auVar29._0_8_;
          auVar31._8_4_ = auVar51._12_4_;
          auVar30._8_8_ = auVar31._8_8_;
          auVar30._4_4_ = auVar19._4_4_;
          auVar30._0_4_ = auVar51._4_4_;
          auVar32._0_12_ = auVar30._0_12_;
          auVar32._12_4_ = auVar19._12_4_;
          auVar69._4_12_ = auVar68._4_12_;
          auVar69._0_4_ = auVar51._0_4_;
          auVar71._12_4_ = auVar68._12_4_;
          auVar71._0_8_ = auVar69._0_8_;
          auVar71._8_4_ = auVar51._4_4_;
          auVar70._8_8_ = auVar71._8_8_;
          auVar70._4_4_ = auVar19._0_4_;
          auVar70._0_4_ = auVar51._0_4_;
          auVar72._0_12_ = auVar70._0_12_;
          auVar72._12_4_ = auVar19._4_4_;
          in_q16 = NEON_ext(auVar50,auVar59,8,1);
          auVar65._4_12_ = auVar19._4_12_;
          auVar65._0_4_ = auVar51._8_4_;
          auVar34._0_8_ = auVar65._0_8_;
          auVar34._8_4_ = auVar51._12_4_;
          auVar34._12_4_ = auVar19._12_4_;
          auVar75._8_8_ = auVar34._8_8_;
          auVar75._4_4_ = auVar19._8_4_;
          auVar75._0_4_ = auVar51._8_4_;
          auVar41._0_12_ = auVar75._0_12_;
          auVar41._12_4_ = auVar19._12_4_;
          auVar81._12_4_ = auVar81._8_4_ + in_q20._8_4_;
          auVar81._0_12_ = auVar18;
          auVar65 = NEON_ext(auVar51,auVar32,8,1);
          auVar75 = NEON_ext(auVar45,in_q17,8,1);
          auVar34 = NEON_ext(in_q16,auVar72,8,1);
          auVar51 = NEON_ext(auVar41,auVar45,8,1);
          auVar19 = NEON_ext(auVar81,auVar41,8,1);
          auVar65 = NEON_ext(auVar65,auVar39,8,1);
          auVar41 = NEON_ext(auVar86,auVar86,8,1);
          auVar75 = NEON_ext(auVar75,auVar75,8,1);
          auVar34 = NEON_ext(auVar34,auVar34,8,1);
          auVar51 = NEON_ext(auVar51,auVar51,8,1);
          auVar19 = NEON_ext(auVar19,auVar19,8,1);
          auVar65 = NEON_ext(auVar65,auVar65,8,1);
          uVar15 = uVar15 - 4;
          *(long *)(pauVar6[2] + 8) = auVar41._8_8_;
          *(long *)pauVar6[2] = auVar41._0_8_;
          *(long *)(pauVar6[3] + 8) = auVar19._8_8_;
          *(long *)pauVar6[3] = auVar19._0_8_;
          *(long *)(pauVar6[4] + 8) = auVar51._8_8_;
          *(long *)pauVar6[4] = auVar51._0_8_;
          *(long *)(pauVar6[5] + 8) = auVar75._8_8_;
          *(long *)pauVar6[5] = auVar75._0_8_;
          *(long *)(*pauVar6 + 8) = auVar34._8_8_;
          *(long *)*pauVar6 = auVar34._0_8_;
          *(long *)(pauVar6[1] + 8) = auVar65._8_8_;
          *(long *)pauVar6[1] = auVar65._0_8_;
          pauVar6 = pauVar6 + 6;
          pfVar7 = pfVar7 + 4;
        } while (uVar15 != 0);
        bVar5 = uVar9 == param_2;
        param_3 = param_3 + uVar9;
        param_2 = param_2 - uVar9;
        param_1 = param_1 + uVar9 * 6;
        if (bVar5) {
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
      param_1[5] = param_1[5] + *param_3 * param_5[5];
      param_1 = param_1 + 6;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  else {
    do {
      fVar21 = *param_3;
      fVar1 = -0.5;
      fVar2 = 0.5;
      if (fVar21 <= -16.0) {
        iVar8 = -0x80000000;
      }
      else if (16.0 <= fVar21) {
        iVar8 = 0x7fffffff;
      }
      else {
        fVar3 = fVar2;
        if (fVar21 * 1.3421773e+08 <= 0.0) {
          fVar3 = fVar1;
        }
        iVar8 = (int)(fVar3 + fVar21 * 1.3421773e+08);
      }
      *param_1 = fVar21 * *param_5 + *param_1;
      fVar21 = *param_3;
      if (fVar21 <= -16.0) {
        iVar10 = -0x80000000;
      }
      else if (16.0 <= fVar21) {
        iVar10 = 0x7fffffff;
      }
      else {
        fVar3 = fVar2;
        if (fVar21 * 1.3421773e+08 <= 0.0) {
          fVar3 = fVar1;
        }
        iVar10 = (int)(fVar3 + fVar21 * 1.3421773e+08);
      }
      param_1[1] = fVar21 * param_5[1] + param_1[1];
      fVar21 = *param_3;
      if (fVar21 <= -16.0) {
        iVar11 = -0x80000000;
      }
      else if (16.0 <= fVar21) {
        iVar11 = 0x7fffffff;
      }
      else {
        fVar3 = fVar2;
        if (fVar21 * 1.3421773e+08 <= 0.0) {
          fVar3 = fVar1;
        }
        iVar11 = (int)(fVar3 + fVar21 * 1.3421773e+08);
      }
      param_1[2] = fVar21 * param_5[2] + param_1[2];
      fVar21 = *param_3;
      if (fVar21 <= -16.0) {
        iVar12 = -0x80000000;
      }
      else if (16.0 <= fVar21) {
        iVar12 = 0x7fffffff;
      }
      else {
        fVar3 = fVar2;
        if (fVar21 * 1.3421773e+08 <= 0.0) {
          fVar3 = fVar1;
        }
        iVar12 = (int)(fVar3 + fVar21 * 1.3421773e+08);
      }
      param_1[3] = fVar21 * param_5[3] + param_1[3];
      fVar21 = *param_3;
      if (fVar21 <= -16.0) {
        iVar13 = -0x80000000;
      }
      else if (16.0 <= fVar21) {
        iVar13 = 0x7fffffff;
      }
      else {
        fVar3 = fVar2;
        if (fVar21 * 1.3421773e+08 <= 0.0) {
          fVar3 = fVar1;
        }
        iVar13 = (int)(fVar3 + fVar21 * 1.3421773e+08);
      }
      param_1[4] = fVar21 * param_5[4] + param_1[4];
      fVar21 = *param_3;
      if (fVar21 <= -16.0) {
        iVar14 = -0x80000000;
      }
      else if (16.0 <= fVar21) {
        iVar14 = 0x7fffffff;
      }
      else {
        if (fVar21 * 1.3421773e+08 <= 0.0) {
          fVar2 = fVar1;
        }
        iVar14 = (int)(fVar2 + fVar21 * 1.3421773e+08);
      }
      param_1[5] = fVar21 * param_5[5] + param_1[5];
      param_3 = param_3 + 1;
      param_2 = param_2 - 1;
      *param_4 = *param_4 +
                 ((iVar14 + iVar13 + iVar12 + iVar11 + iVar10 + iVar8) / 6 >> 0xc) * (int)param_6;
      param_1 = param_1 + 6;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

