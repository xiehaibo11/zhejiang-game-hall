
/* void cocos2d::experimental::volumeMulti<1, 7, float, float, float, int, short>(float*, unsigned
   long, float const*, int*, float const*, short) */

void __thiscall
cocos2d::experimental::volumeMulti<1,7,float,float,float,int,short>
          (experimental *this,float *param_1,ulong param_2,float *param_3,int *param_4,
          float *param_5,short param_6)

{
  experimental *peVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  float *pfVar8;
  experimental *peVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float *pfVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 in_q0 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 in_q5 [16];
  undefined1 auVar35 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar68 [16];
  float fVar72;
  float fVar73;
  float fVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar85 [16];
  float fVar89;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  float fVar96;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar36 [16];
  undefined1 auVar41 [16];
  undefined1 auVar48 [16];
  undefined1 auVar37 [16];
  undefined1 auVar42 [16];
  undefined1 auVar49 [16];
  undefined1 auVar38 [16];
  undefined1 auVar43 [16];
  undefined1 auVar50 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar65 [16];
  undefined1 auVar69 [16];
  undefined1 auVar66 [16];
  undefined1 auVar70 [16];
  undefined1 auVar67 [16];
  undefined1 auVar71 [16];
  undefined1 auVar77 [16];
  undefined1 auVar82 [16];
  undefined1 auVar86 [16];
  undefined1 auVar78 [16];
  undefined1 auVar83 [16];
  undefined1 auVar87 [16];
  undefined1 auVar79 [16];
  undefined1 auVar84 [16];
  undefined1 auVar88 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  
  if (param_3 == (float *)0x0) {
    if ((float *)0x3 < param_1) {
      if (((experimental *)(param_2 + (long)param_1 * 4) <= this ||
           this + (long)param_1 * 0x1c <= param_2) &&
         ((experimental *)((long)param_4 + 0x19U) <= this ||
          this + (long)param_1 * 0x1c <= (experimental *)(param_4 + 6))) {
        pfVar11 = (float *)((ulong)param_1 & 0xfffffffffffffffc);
        peVar9 = this + (long)pfVar11 * 0x1c;
        pfVar8 = (float *)param_2;
        pfVar18 = pfVar11;
        do {
          fVar4 = *pfVar8;
          fVar30 = pfVar8[1];
          fVar5 = pfVar8[2];
          fVar6 = pfVar8[3];
          fVar2 = (float)*param_4;
          auVar32 = *(undefined1 (*) [16])(this + 0x20);
          auVar33 = *(undefined1 (*) [16])(this + 0x30);
          auVar24 = *(undefined1 (*) [16])this;
          peVar1 = this + 0x10;
          uVar3 = *(undefined8 *)(this + 0x18);
          auVar52 = *(undefined1 (*) [16])(this + 0x40);
          auVar58 = *(undefined1 (*) [16])(this + 0x50);
          auVar45 = *(undefined1 (*) [16])(this + 0x60);
          uVar19 = auVar24._0_4_;
          auVar21._4_12_ = in_q0._4_12_;
          auVar21._0_4_ = uVar19;
          auVar44._12_4_ = in_q0._12_4_;
          auVar44._0_8_ = auVar21._0_8_;
          auVar44._8_4_ = auVar24._4_4_;
          auVar39._8_8_ = auVar44._8_8_;
          auVar39._4_4_ = uVar19;
          auVar39._0_4_ = uVar19;
          auVar75._0_12_ = auVar39._0_12_;
          auVar75._12_4_ = auVar24._4_4_;
          auVar35._4_12_ = in_q5._4_12_;
          auVar35._0_4_ = auVar58._8_4_;
          auVar37._12_4_ = in_q5._12_4_;
          auVar37._0_8_ = auVar35._0_8_;
          auVar37._8_4_ = auVar58._12_4_;
          auVar36._8_8_ = auVar37._8_8_;
          auVar36._4_4_ = auVar33._8_4_;
          auVar36._0_4_ = auVar58._8_4_;
          auVar38._0_12_ = auVar36._0_12_;
          auVar38._12_4_ = auVar33._12_4_;
          auVar21 = NEON_ext(auVar75,auVar32,0xc,1);
          auVar39 = NEON_ext(auVar33,auVar38,4,1);
          auVar75 = NEON_ext(auVar32,auVar24,8,1);
          auVar21 = NEON_ext(auVar39,auVar21,8,1);
          auVar40._4_12_ = auVar39._4_12_;
          auVar40._0_4_ = auVar45._8_4_;
          auVar42._12_4_ = auVar39._12_4_;
          auVar42._0_8_ = auVar40._0_8_;
          auVar42._8_4_ = auVar45._12_4_;
          auVar41._8_8_ = auVar42._8_8_;
          auVar41._4_4_ = auVar52._8_4_;
          auVar41._0_4_ = auVar45._8_4_;
          auVar43._0_12_ = auVar41._0_12_;
          auVar43._12_4_ = auVar52._12_4_;
          auVar90 = NEON_ext(auVar52,auVar52,8,1);
          auVar44 = NEON_ext(auVar52,auVar43,4,1);
          auVar39 = NEON_ext(auVar24,auVar75,0xc,1);
          uVar20 = SUB124(*(undefined1 (*) [12])peVar1,0);
          auVar76._4_12_ = auVar75._4_12_;
          auVar76._0_4_ = uVar20;
          auVar78._12_4_ = auVar75._12_4_;
          auVar78._0_8_ = auVar76._0_8_;
          auVar78._8_4_ = SUB124(*(undefined1 (*) [12])peVar1,4);
          auVar77._8_8_ = auVar78._8_8_;
          auVar77._4_4_ = SUB124(*(undefined1 (*) [12])peVar1,0);
          auVar77._0_4_ = uVar20;
          auVar79._0_12_ = auVar77._0_12_;
          auVar79._12_4_ = SUB124(*(undefined1 (*) [12])peVar1,4);
          auVar90 = NEON_ext(auVar90,auVar45,4,1);
          auVar62._0_8_ = auVar45._0_8_;
          auVar62._8_4_ = auVar58._0_4_;
          auVar62._12_4_ = auVar45._12_4_;
          auVar75 = NEON_ext(auVar79,auVar33,0xc,1);
          auVar57._4_12_ = auVar33._4_12_;
          auVar57._0_4_ = (int)uVar3;
          auVar39 = NEON_ext(auVar90,auVar39,8,1);
          auVar31._0_4_ = (undefined4)*(undefined8 *)peVar1;
          auVar31._4_4_ = auVar32._12_4_;
          auVar31._8_8_ = uVar3;
          auVar44 = NEON_ext(auVar44,auVar75,8,1);
          fVar74 = (float)param_4[2];
          fVar89 = (float)param_4[3];
          auVar51._4_12_ = auVar32._4_12_;
          auVar51._0_4_ = auVar24._8_4_;
          auVar75 = NEON_ext(auVar62,auVar57,8,1);
          auVar60._8_8_ = auVar24._8_8_;
          auVar60._4_4_ = (int)((ulong)uVar3 >> 0x20);
          auVar60._0_4_ = uVar19;
          fVar61 = (float)param_4[4];
          fVar72 = (float)param_4[5];
          auVar45._12_4_ = auVar45._4_4_;
          auVar45._0_12_ = auVar52._0_12_;
          auVar32 = NEON_ext(auVar45,auVar31,8,1);
          fVar96 = (float)param_4[6];
          auVar24._12_4_ = auVar58._4_4_;
          auVar24._0_12_ = auVar33._0_12_;
          auVar90 = NEON_ext(auVar24,auVar60,8,1);
          fVar73 = (float)param_4[1];
          auVar52._8_4_ = auVar52._0_4_;
          auVar52._0_8_ = auVar58._0_8_;
          auVar52._12_4_ = auVar58._12_4_;
          auVar52 = NEON_ext(auVar52,auVar51,8,1);
          auVar91._0_4_ = fVar4 * fVar89;
          auVar91._4_4_ = fVar30 * fVar89;
          auVar91._8_4_ = fVar5 * fVar89;
          auVar91._12_4_ = fVar6 * fVar89;
          auVar63._0_4_ = fVar4 * fVar61;
          auVar63._4_4_ = fVar30 * fVar61;
          auVar63._8_4_ = fVar5 * fVar61;
          auVar63._12_4_ = fVar6 * fVar61;
          auVar24 = NEON_ext(auVar39,auVar39,8,1);
          auVar33 = NEON_ext(auVar32,auVar32,8,1);
          auVar80._0_4_ = fVar4 * fVar74;
          auVar80._4_4_ = fVar30 * fVar74;
          auVar80._8_4_ = fVar5 * fVar74;
          auVar80._12_4_ = fVar6 * fVar74;
          auVar32 = NEON_ext(auVar21,auVar21,8,1);
          auVar45 = NEON_ext(auVar44,auVar44,8,1);
          auVar58 = NEON_ext(auVar75,auVar75,8,1);
          auVar52 = NEON_ext(auVar52,auVar52,8,1);
          auVar25._0_4_ = auVar24._0_4_ + auVar91._0_4_;
          auVar25._4_4_ = auVar24._4_4_ + auVar91._4_4_;
          auVar25._8_4_ = auVar24._8_4_ + auVar91._8_4_;
          auVar25._12_4_ = auVar24._12_4_ + auVar91._12_4_;
          auVar34._0_4_ = auVar33._0_4_ + auVar63._0_4_;
          auVar34._4_4_ = auVar33._4_4_ + auVar63._4_4_;
          auVar34._8_4_ = auVar33._8_4_ + auVar63._8_4_;
          auVar46._0_4_ = auVar45._0_4_ + fVar4 * fVar72;
          auVar46._4_4_ = auVar45._4_4_ + fVar30 * fVar72;
          auVar46._8_4_ = auVar45._8_4_ + fVar5 * fVar72;
          auVar46._12_4_ = auVar45._12_4_ + fVar6 * fVar72;
          auVar59._0_4_ = auVar58._0_4_ + fVar4 * fVar96;
          auVar59._4_4_ = auVar58._4_4_ + fVar30 * fVar96;
          auVar59._8_4_ = auVar58._8_4_ + fVar5 * fVar96;
          auVar59._12_4_ = auVar58._12_4_ + fVar6 * fVar96;
          auVar24 = NEON_ext(auVar90,auVar90,8,1);
          fVar61 = auVar32._4_4_ + fVar30 * fVar73;
          fVar72 = auVar32._8_4_ + fVar5 * fVar73;
          fVar74 = auVar32._12_4_ + fVar6 * fVar73;
          auVar58._0_4_ = auVar52._0_4_ + auVar80._0_4_;
          auVar58._4_4_ = auVar52._4_4_ + auVar80._4_4_;
          auVar58._8_4_ = auVar52._8_4_ + auVar80._8_4_;
          auVar55._12_4_ = auVar52._12_4_;
          auVar58._12_4_ = auVar55._12_4_ + auVar80._12_4_;
          auVar64._4_12_ = auVar63._4_12_;
          auVar64._0_4_ = auVar25._4_4_;
          auVar66._0_8_ = auVar64._0_8_;
          auVar66._8_4_ = auVar25._12_4_;
          auVar66._12_4_ = auVar63._12_4_;
          auVar65._8_8_ = auVar66._8_8_;
          auVar65._4_4_ = auVar34._4_4_;
          auVar65._0_4_ = auVar25._4_4_;
          auVar67._0_12_ = auVar65._0_12_;
          auVar67._12_4_ = auVar33._12_4_ + auVar63._12_4_;
          auVar53._4_12_ = auVar52._4_12_;
          auVar53._0_4_ = auVar46._8_4_;
          auVar55._0_8_ = auVar53._0_8_;
          auVar55._8_4_ = auVar46._12_4_;
          auVar54._8_8_ = auVar55._8_8_;
          auVar54._4_4_ = auVar59._8_4_;
          auVar54._0_4_ = auVar46._8_4_;
          auVar56._0_12_ = auVar54._0_12_;
          auVar56._12_4_ = auVar59._12_4_;
          auVar22._0_4_ = auVar24._0_4_ + fVar4 * fVar2;
          auVar22._4_4_ = auVar24._4_4_ + fVar30 * fVar2;
          auVar22._8_4_ = auVar24._8_4_ + fVar5 * fVar2;
          auVar90._12_4_ = auVar24._12_4_ + fVar6 * fVar2;
          auVar90._0_12_ = auVar22;
          auVar24 = NEON_ext(auVar67,auVar25,8,1);
          auVar81._4_12_ = auVar80._4_12_;
          auVar81._0_4_ = fVar61;
          auVar83._0_8_ = auVar81._0_8_;
          auVar83._8_4_ = fVar74;
          auVar83._12_4_ = auVar80._12_4_;
          auVar82._8_8_ = auVar83._8_8_;
          auVar82._4_4_ = auVar58._4_4_;
          auVar82._0_4_ = fVar61;
          auVar84._0_12_ = auVar82._0_12_;
          auVar84._12_4_ = auVar58._12_4_;
          auVar45 = NEON_ext(auVar25,auVar67,8,1);
          auVar92._4_12_ = auVar91._4_12_;
          auVar92._0_4_ = auVar58._0_4_;
          auVar94._0_8_ = auVar92._0_8_;
          auVar94._8_4_ = auVar58._4_4_;
          auVar94._12_4_ = auVar91._12_4_;
          auVar93._8_8_ = auVar94._8_8_;
          auVar93._4_4_ = auVar25._0_4_;
          auVar93._0_4_ = auVar58._0_4_;
          auVar95._0_12_ = auVar93._0_12_;
          auVar95._12_4_ = auVar25._4_4_;
          auVar34._12_4_ = auVar46._8_4_;
          auVar26._4_12_ = auVar25._4_12_;
          auVar26._0_4_ = auVar58._8_4_;
          auVar28._0_8_ = auVar26._0_8_;
          auVar28._8_4_ = auVar58._12_4_;
          auVar28._12_4_ = auVar25._12_4_;
          auVar27._8_8_ = auVar28._8_8_;
          auVar27._4_4_ = auVar25._8_4_;
          auVar27._0_4_ = auVar58._8_4_;
          auVar29._0_12_ = auVar27._0_12_;
          auVar29._12_4_ = auVar25._12_4_;
          auVar33 = NEON_ext(auVar56,auVar24,8,1);
          auVar39 = NEON_ext(auVar45,auVar84,8,1);
          auVar85._4_12_ = auVar84._4_12_;
          auVar85._0_4_ = auVar22._8_4_;
          auVar87._0_8_ = auVar85._0_8_;
          auVar87._8_4_ = auVar90._12_4_;
          auVar87._12_4_ = auVar58._12_4_;
          auVar86._8_8_ = auVar87._8_8_;
          auVar86._4_4_ = auVar59._8_4_;
          auVar86._0_4_ = auVar22._8_4_;
          auVar88._0_12_ = auVar86._0_12_;
          auVar88._12_4_ = auVar59._12_4_;
          auVar52 = NEON_ext(auVar34,auVar29,8,1);
          auVar24 = NEON_ext(auVar90,auVar59,4,1);
          auVar47._4_12_ = auVar46._4_12_;
          auVar47._0_4_ = fVar72;
          auVar49._0_8_ = auVar47._0_8_;
          auVar49._8_4_ = fVar74;
          auVar49._12_4_ = auVar46._12_4_;
          auVar48._8_8_ = auVar49._8_8_;
          auVar48._4_4_ = auVar58._8_4_;
          auVar48._0_4_ = fVar72;
          auVar50._0_12_ = auVar48._0_12_;
          auVar50._12_4_ = auVar58._12_4_;
          auVar68._4_12_ = auVar45._4_12_;
          auVar68._0_4_ = auVar22._0_4_;
          auVar70._12_4_ = auVar45._12_4_;
          auVar70._0_8_ = auVar68._0_8_;
          auVar70._8_4_ = auVar22._4_4_;
          auVar69._8_8_ = auVar70._8_8_;
          auVar69._4_4_ = auVar32._0_4_ + fVar4 * fVar73;
          auVar69._0_4_ = auVar22._0_4_;
          auVar71._0_12_ = auVar69._0_12_;
          auVar71._12_4_ = fVar61;
          auVar32 = NEON_ext(auVar58,auVar95,8,1);
          auVar23._12_4_ = fVar72;
          auVar23._0_12_ = auVar22;
          auVar21 = NEON_ext(auVar88,auVar59,4,1);
          auVar58 = NEON_ext(auVar24,auVar24,4,1);
          auVar24 = NEON_ext(auVar33,auVar33,8,1);
          auVar45 = NEON_ext(auVar32,auVar71,8,1);
          auVar33._4_4_ = auVar59._4_4_;
          auVar33._0_4_ = auVar46._4_4_;
          auVar33._8_4_ = auVar46._12_4_;
          auVar33._12_4_ = auVar59._12_4_;
          auVar33 = NEON_ext(auVar23,auVar33,8,1);
          in_q5 = NEON_ext(auVar50,auVar21,8,1);
          auVar32._4_4_ = auVar46._0_4_;
          auVar32._0_4_ = auVar34._0_4_;
          auVar32._8_4_ = auVar34._4_4_;
          auVar32._12_4_ = auVar46._4_4_;
          auVar58 = NEON_ext(auVar58,auVar32,8,1);
          auVar21 = NEON_ext(auVar39,auVar39,8,1);
          auVar52 = NEON_ext(auVar52,auVar52,8,1);
          auVar32 = NEON_ext(auVar45,auVar45,8,1);
          auVar33 = NEON_ext(auVar33,auVar33,8,1);
          *(long *)(this + 0x68) = auVar24._8_8_;
          *(long *)(this + 0x60) = auVar24._0_8_;
          in_q0 = NEON_ext(in_q5,in_q5,8,1);
          auVar24 = NEON_ext(auVar58,auVar58,8,1);
          pfVar18 = pfVar18 + -1;
          *(long *)(this + 0x28) = auVar21._8_8_;
          *(long *)(this + 0x20) = auVar21._0_8_;
          *(long *)(this + 0x38) = auVar33._8_8_;
          *(long *)(this + 0x30) = auVar33._0_8_;
          *(long *)(this + 8) = auVar32._8_8_;
          *(long *)this = auVar32._0_8_;
          *(long *)(this + 0x18) = auVar24._8_8_;
          *(long *)(this + 0x10) = auVar24._0_8_;
          *(long *)(this + 0x48) = auVar52._8_8_;
          *(long *)(this + 0x40) = auVar52._0_8_;
          *(long *)(this + 0x58) = in_q0._8_8_;
          *(long *)(this + 0x50) = in_q0._0_8_;
          this = this + 0x70;
          pfVar8 = pfVar8 + 4;
        } while (pfVar18 != (float *)0x0);
        bVar7 = pfVar11 == param_1;
        param_2 = (ulong)(param_2 + (long)pfVar11 * 4);
        param_1 = (float *)((long)param_1 - (long)pfVar11);
        this = peVar9;
        if (bVar7) {
          return;
        }
      }
    }
    do {
      param_1 = (float *)((long)param_1 + -1);
      *(float *)this = *(float *)this + *(float *)param_2 * (float)*param_4;
      *(float *)(this + 4) = *(float *)(this + 4) + *(float *)param_2 * (float)param_4[1];
      *(float *)(this + 8) = *(float *)(this + 8) + *(float *)param_2 * (float)param_4[2];
      *(float *)(this + 0xc) = *(float *)(this + 0xc) + *(float *)param_2 * (float)param_4[3];
      *(float *)(this + 0x10) = *(float *)(this + 0x10) + *(float *)param_2 * (float)param_4[4];
      *(float *)(this + 0x14) = *(float *)(this + 0x14) + *(float *)param_2 * (float)param_4[5];
      *(float *)(this + 0x18) = *(float *)(this + 0x18) + *(float *)param_2 * (float)param_4[6];
      this = this + 0x1c;
      param_2 = (ulong)(param_2 + 4);
    } while (param_1 != (float *)0x0);
  }
  else {
    do {
      fVar30 = *(float *)param_2;
      fVar2 = -0.5;
      fVar4 = 0.5;
      if (fVar30 <= -16.0) {
        iVar10 = -0x80000000;
      }
      else if (16.0 <= fVar30) {
        iVar10 = 0x7fffffff;
      }
      else {
        fVar5 = fVar4;
        if (fVar30 * 1.3421773e+08 <= 0.0) {
          fVar5 = fVar2;
        }
        iVar10 = (int)(fVar5 + fVar30 * 1.3421773e+08);
      }
      *(float *)this = fVar30 * (float)*param_4 + *(float *)this;
      fVar30 = *(float *)param_2;
      if (fVar30 <= -16.0) {
        iVar12 = -0x80000000;
      }
      else if (16.0 <= fVar30) {
        iVar12 = 0x7fffffff;
      }
      else {
        fVar5 = fVar4;
        if (fVar30 * 1.3421773e+08 <= 0.0) {
          fVar5 = fVar2;
        }
        iVar12 = (int)(fVar5 + fVar30 * 1.3421773e+08);
      }
      *(float *)(this + 4) = fVar30 * (float)param_4[1] + *(float *)(this + 4);
      fVar30 = *(float *)param_2;
      if (fVar30 <= -16.0) {
        iVar13 = -0x80000000;
      }
      else if (16.0 <= fVar30) {
        iVar13 = 0x7fffffff;
      }
      else {
        fVar5 = fVar4;
        if (fVar30 * 1.3421773e+08 <= 0.0) {
          fVar5 = fVar2;
        }
        iVar13 = (int)(fVar5 + fVar30 * 1.3421773e+08);
      }
      *(float *)(this + 8) = fVar30 * (float)param_4[2] + *(float *)(this + 8);
      fVar30 = *(float *)param_2;
      if (fVar30 <= -16.0) {
        iVar14 = -0x80000000;
      }
      else if (16.0 <= fVar30) {
        iVar14 = 0x7fffffff;
      }
      else {
        fVar5 = fVar4;
        if (fVar30 * 1.3421773e+08 <= 0.0) {
          fVar5 = fVar2;
        }
        iVar14 = (int)(fVar5 + fVar30 * 1.3421773e+08);
      }
      *(float *)(this + 0xc) = fVar30 * (float)param_4[3] + *(float *)(this + 0xc);
      fVar30 = *(float *)param_2;
      if (fVar30 <= -16.0) {
        iVar15 = -0x80000000;
      }
      else if (16.0 <= fVar30) {
        iVar15 = 0x7fffffff;
      }
      else {
        fVar5 = fVar4;
        if (fVar30 * 1.3421773e+08 <= 0.0) {
          fVar5 = fVar2;
        }
        iVar15 = (int)(fVar5 + fVar30 * 1.3421773e+08);
      }
      *(float *)(this + 0x10) = fVar30 * (float)param_4[4] + *(float *)(this + 0x10);
      fVar30 = *(float *)param_2;
      if (fVar30 <= -16.0) {
        iVar16 = -0x80000000;
      }
      else if (16.0 <= fVar30) {
        iVar16 = 0x7fffffff;
      }
      else {
        fVar5 = fVar4;
        if (fVar30 * 1.3421773e+08 <= 0.0) {
          fVar5 = fVar2;
        }
        iVar16 = (int)(fVar5 + fVar30 * 1.3421773e+08);
      }
      *(float *)(this + 0x14) = fVar30 * (float)param_4[5] + *(float *)(this + 0x14);
      fVar30 = *(float *)param_2;
      if (fVar30 <= -16.0) {
        iVar17 = -0x80000000;
      }
      else if (16.0 <= fVar30) {
        iVar17 = 0x7fffffff;
      }
      else {
        if (fVar30 * 1.3421773e+08 <= 0.0) {
          fVar4 = fVar2;
        }
        iVar17 = (int)(fVar4 + fVar30 * 1.3421773e+08);
      }
      *(float *)(this + 0x18) = fVar30 * (float)param_4[6] + *(float *)(this + 0x18);
      param_2 = param_2 + 4;
      param_1 = (float *)((long)param_1 + -1);
      *param_3 = (float)((int)*param_3 +
                        ((iVar17 + iVar16 + iVar15 + iVar14 + iVar13 + iVar12 + iVar10) / 7 >> 0xc)
                        * (int)(short)param_5);
      this = this + 0x1c;
      param_3 = param_3 + 1;
    } while (param_1 != (float *)0x0);
  }
  return;
}

