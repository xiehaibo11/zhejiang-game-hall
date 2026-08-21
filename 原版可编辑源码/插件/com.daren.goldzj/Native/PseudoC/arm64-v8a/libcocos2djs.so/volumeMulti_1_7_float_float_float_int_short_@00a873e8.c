
/* void cocos2d::volumeMulti<1, 7, float, float, float, int, short>(float*, unsigned long, float
   const*, int*, float const*, short) */

void __thiscall
cocos2d::volumeMulti<1,7,float,float,float,int,short>
          (cocos2d *this,float *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
          short param_6)

{
  cocos2d *pcVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  cocos2d *pcVar8;
  float *pfVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float *pfVar18;
  float *pfVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 in_q0 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  undefined1 in_q5 [16];
  undefined1 auVar37 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar53 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar79;
  float fVar80;
  float fVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar87 [16];
  float fVar91;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  float fVar97;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar38 [16];
  undefined1 auVar43 [16];
  undefined1 auVar50 [16];
  undefined1 auVar54 [16];
  undefined1 auVar39 [16];
  undefined1 auVar44 [16];
  undefined1 auVar51 [16];
  undefined1 auVar55 [16];
  undefined1 auVar40 [16];
  undefined1 auVar45 [16];
  undefined1 auVar52 [16];
  undefined1 auVar56 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar84 [16];
  undefined1 auVar88 [16];
  undefined1 auVar85 [16];
  undefined1 auVar89 [16];
  undefined1 auVar86 [16];
  undefined1 auVar90 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  
  if (param_3 == (float *)0x0) {
    if ((float *)0x3 < param_1) {
      auVar33._8_8_ = 0;
      auVar33._0_8_ = (long)param_1 - 1U;
      uVar10 = ((long)param_1 - 1U) * 0x1c;
                    /* catch() { ... } // from try @ 00a876b4 with catch @ 00a877cc */
                    /* catch() { ... } // from try @ 00a876c8 with catch @ 00a877d0 */
                    /* catch() { ... } // from try @ 00a8769c with catch @ 00a877d4 */
                    /* catch() { ... } // from try @ 00a876e8 with catch @ 00a877d8 */
                    /* catch() { ... } // from try @ 00a876cc with catch @ 00a877dc */
      if (((((uVar10 < ~(ulong)(this + 0x18) || uVar10 - ~(ulong)(this + 0x18) == 0) &&
            (SUB168(auVar33 * ZEXT816(0x1c),8) == 0)) &&
           (uVar10 < ~(ulong)(this + 0x14) || uVar10 - ~(ulong)(this + 0x14) == 0)) &&
          ((uVar10 < ~(ulong)(this + 0x10) || uVar10 - ~(ulong)(this + 0x10) == 0 &&
           (uVar10 < ~(ulong)(this + 0xc) || uVar10 - ~(ulong)(this + 0xc) == 0)))) &&
         ((uVar10 < ~(ulong)(this + 8) || uVar10 - ~(ulong)(this + 8) == 0 &&
          ((uVar10 < ~(ulong)(this + 4) || uVar10 - ~(ulong)(this + 4) == 0 &&
           (uVar10 < ~(ulong)this || uVar10 - ~(ulong)this == 0)))))) {
                    /* catch() { ... } // from try @ 00a87668 with catch @ 00a877f4 */
        if (((cocos2d *)(param_2 + (long)param_1 * 4) <= this ||
             this + (long)param_1 * 0x1c <= param_2) &&
           ((cocos2d *)((long)param_4 + 0x19U) <= this ||
            this + (long)param_1 * 0x1c <= (cocos2d *)(param_4 + 6))) {
          pfVar18 = (float *)((ulong)param_1 & 0xfffffffffffffffc);
          pcVar8 = this;
          pfVar9 = (float *)param_2;
          pfVar19 = pfVar18;
          do {
            fVar4 = *pfVar9;
            fVar36 = pfVar9[1];
            fVar5 = pfVar9[2];
            fVar6 = pfVar9[3];
            fVar2 = (float)*param_4;
            auVar33 = *(undefined1 (*) [16])(pcVar8 + 0x20);
            auVar26 = *(undefined1 (*) [16])(pcVar8 + 0x30);
            auVar34 = *(undefined1 (*) [16])pcVar8;
            pcVar1 = pcVar8 + 0x10;
            uVar3 = *(undefined8 *)(pcVar8 + 0x18);
            auVar47 = *(undefined1 (*) [16])(pcVar8 + 0x40);
            auVar57 = *(undefined1 (*) [16])(pcVar8 + 0x50);
            auVar59 = *(undefined1 (*) [16])(pcVar8 + 0x60);
            uVar20 = auVar34._0_4_;
            auVar23._4_12_ = in_q0._4_12_;
            auVar23._0_4_ = uVar20;
            auVar46._12_4_ = in_q0._12_4_;
            auVar46._0_8_ = auVar23._0_8_;
            auVar46._8_4_ = auVar34._4_4_;
            auVar41._8_8_ = auVar46._8_8_;
            auVar41._4_4_ = uVar20;
            auVar41._0_4_ = uVar20;
            auVar82._0_12_ = auVar41._0_12_;
            auVar82._12_4_ = auVar34._4_4_;
            auVar37._4_12_ = in_q5._4_12_;
            auVar37._0_4_ = auVar57._8_4_;
            auVar39._12_4_ = in_q5._12_4_;
            auVar39._0_8_ = auVar37._0_8_;
            auVar39._8_4_ = auVar57._12_4_;
            auVar38._8_8_ = auVar39._8_8_;
            auVar38._4_4_ = auVar26._8_4_;
            auVar38._0_4_ = auVar57._8_4_;
            auVar40._0_12_ = auVar38._0_12_;
            auVar40._12_4_ = auVar26._12_4_;
            auVar22 = NEON_ext(auVar82,auVar33,0xc,1);
            auVar41 = NEON_ext(auVar26,auVar40,4,1);
            auVar82 = NEON_ext(auVar33,auVar34,8,1);
            auVar23 = NEON_ext(auVar41,auVar22,8,1);
            auVar42._4_12_ = auVar41._4_12_;
            auVar42._0_4_ = auVar59._8_4_;
            auVar44._12_4_ = auVar41._12_4_;
            auVar44._0_8_ = auVar42._0_8_;
            auVar44._8_4_ = auVar59._12_4_;
            auVar43._8_8_ = auVar44._8_8_;
            auVar43._4_4_ = auVar47._8_4_;
            auVar43._0_4_ = auVar59._8_4_;
            auVar45._0_12_ = auVar43._0_12_;
            auVar45._12_4_ = auVar47._12_4_;
            auVar41 = NEON_ext(auVar47,auVar47,8,1);
            auVar46 = NEON_ext(auVar47,auVar45,4,1);
            auVar22 = NEON_ext(auVar34,auVar82,0xc,1);
            uVar21 = SUB124(*(undefined1 (*) [12])pcVar1,0);
            auVar83._4_12_ = auVar82._4_12_;
            auVar83._0_4_ = uVar21;
            auVar85._12_4_ = auVar82._12_4_;
            auVar85._0_8_ = auVar83._0_8_;
            auVar85._8_4_ = SUB124(*(undefined1 (*) [12])pcVar1,4);
            auVar84._8_8_ = auVar85._8_8_;
            auVar84._4_4_ = SUB124(*(undefined1 (*) [12])pcVar1,0);
            auVar84._0_4_ = uVar21;
            auVar86._0_12_ = auVar84._0_12_;
            auVar86._12_4_ = SUB124(*(undefined1 (*) [12])pcVar1,4);
            auVar41 = NEON_ext(auVar41,auVar59,4,1);
            auVar73._0_8_ = auVar59._0_8_;
            auVar73._8_4_ = auVar57._0_4_;
            auVar73._12_4_ = auVar59._12_4_;
            auVar82 = NEON_ext(auVar86,auVar26,0xc,1);
            auVar64._4_12_ = auVar26._4_12_;
            auVar64._0_4_ = (int)uVar3;
            auVar41 = NEON_ext(auVar41,auVar22,8,1);
            auVar32._0_4_ = (undefined4)*(undefined8 *)pcVar1;
            auVar32._4_4_ = auVar33._12_4_;
            auVar32._8_8_ = uVar3;
            auVar46 = NEON_ext(auVar46,auVar82,8,1);
            fVar81 = (float)param_4[2];
            fVar91 = (float)param_4[3];
            auVar58._4_12_ = auVar33._4_12_;
            auVar58._0_4_ = auVar34._8_4_;
            auVar82 = NEON_ext(auVar73,auVar64,8,1);
            auVar66._8_8_ = auVar34._8_8_;
            auVar66._4_4_ = (int)((ulong)uVar3 >> 0x20);
            auVar66._0_4_ = uVar20;
            fVar72 = (float)param_4[4];
            fVar79 = (float)param_4[5];
            auVar59._12_4_ = auVar59._4_4_;
            auVar59._0_12_ = auVar47._0_12_;
            auVar33 = NEON_ext(auVar59,auVar32,8,1);
            fVar97 = (float)param_4[6];
            auVar34._12_4_ = auVar57._4_4_;
            auVar34._0_12_ = auVar26._0_12_;
            auVar67 = NEON_ext(auVar34,auVar66,8,1);
            fVar80 = (float)param_4[1];
            auVar22._8_4_ = auVar47._0_4_;
            auVar22._0_8_ = auVar57._0_8_;
            auVar22._12_4_ = auVar57._12_4_;
            auVar59 = NEON_ext(auVar22,auVar58,8,1);
            auVar92._0_4_ = fVar4 * fVar91;
            auVar92._4_4_ = fVar36 * fVar91;
            auVar92._8_4_ = fVar5 * fVar91;
            auVar92._12_4_ = fVar6 * fVar91;
            auVar74._0_4_ = fVar4 * fVar72;
            auVar74._4_4_ = fVar36 * fVar72;
            auVar74._8_4_ = fVar5 * fVar72;
            auVar74._12_4_ = fVar6 * fVar72;
            auVar26 = NEON_ext(auVar41,auVar41,8,1);
            auVar34 = NEON_ext(auVar33,auVar33,8,1);
            auVar33 = NEON_ext(auVar23,auVar23,8,1);
                    /* try { // try from 00a8791c to 00b879cb has its CatchHandler @ 00a8791c
                       catch() { ... } // from try @ 00a8791c with catch @ 00a8791c
                       catch() { ... } // from try @ 00a87a08 with catch @ 00a8791c */
            auVar47 = NEON_ext(auVar46,auVar46,8,1);
            auVar22 = NEON_ext(auVar82,auVar82,8,1);
            auVar59 = NEON_ext(auVar59,auVar59,8,1);
            auVar27._0_4_ = auVar26._0_4_ + auVar92._0_4_;
            auVar27._4_4_ = auVar26._4_4_ + auVar92._4_4_;
            auVar27._8_4_ = auVar26._8_4_ + auVar92._8_4_;
            auVar27._12_4_ = auVar26._12_4_ + auVar92._12_4_;
            auVar35._0_4_ = auVar34._0_4_ + auVar74._0_4_;
            auVar35._4_4_ = auVar34._4_4_ + auVar74._4_4_;
            auVar35._8_4_ = auVar34._8_4_ + auVar74._8_4_;
            auVar48._0_4_ = auVar47._0_4_ + fVar4 * fVar79;
            auVar48._4_4_ = auVar47._4_4_ + fVar36 * fVar79;
            auVar48._8_4_ = auVar47._8_4_ + fVar5 * fVar79;
            auVar48._12_4_ = auVar47._12_4_ + fVar6 * fVar79;
            auVar65._0_4_ = auVar22._0_4_ + fVar4 * fVar97;
            auVar65._4_4_ = auVar22._4_4_ + fVar36 * fVar97;
            auVar65._8_4_ = auVar22._8_4_ + fVar5 * fVar97;
            auVar65._12_4_ = auVar22._12_4_ + fVar6 * fVar97;
            auVar26 = NEON_ext(auVar67,auVar67,8,1);
            fVar72 = auVar33._4_4_ + fVar36 * fVar80;
            fVar79 = auVar33._8_4_ + fVar5 * fVar80;
            fVar91 = auVar33._12_4_ + fVar6 * fVar80;
            auVar57._0_4_ = auVar59._0_4_ + fVar4 * fVar81;
            auVar57._4_4_ = auVar59._4_4_ + fVar36 * fVar81;
            auVar57._8_4_ = auVar59._8_4_ + fVar5 * fVar81;
            auVar62._12_4_ = auVar59._12_4_;
            auVar57._12_4_ = auVar62._12_4_ + fVar6 * fVar81;
            auVar60._4_12_ = auVar59._4_12_;
            auVar60._0_4_ = auVar27._4_4_;
            auVar62._0_8_ = auVar60._0_8_;
            auVar62._8_4_ = auVar27._12_4_;
            auVar61._8_8_ = auVar62._8_8_;
            auVar61._4_4_ = auVar35._4_4_;
            auVar61._0_4_ = auVar27._4_4_;
            auVar63._0_12_ = auVar61._0_12_;
            auVar63._12_4_ = auVar34._12_4_ + auVar74._12_4_;
            auVar75._4_12_ = auVar74._4_12_;
            auVar75._0_4_ = auVar48._8_4_;
            auVar77._0_8_ = auVar75._0_8_;
            auVar77._8_4_ = auVar48._12_4_;
            auVar77._12_4_ = auVar74._12_4_;
            auVar76._8_8_ = auVar77._8_8_;
            auVar76._4_4_ = auVar65._8_4_;
            auVar76._0_4_ = auVar48._8_4_;
            auVar78._0_12_ = auVar76._0_12_;
            auVar78._12_4_ = auVar65._12_4_;
            auVar35._12_4_ = auVar48._8_4_;
            auVar24._0_4_ = auVar26._0_4_ + fVar4 * fVar2;
            auVar24._4_4_ = auVar26._4_4_ + fVar36 * fVar2;
            auVar24._8_4_ = auVar26._8_4_ + fVar5 * fVar2;
            auVar70._12_4_ = auVar26._12_4_;
            auVar67._12_4_ = auVar70._12_4_ + fVar6 * fVar2;
            auVar67._0_12_ = auVar24;
            auVar49._4_12_ = auVar48._4_12_;
            auVar49._0_4_ = auVar57._0_4_;
            auVar51._0_8_ = auVar49._0_8_;
            auVar51._8_4_ = auVar57._4_4_;
            auVar51._12_4_ = auVar48._12_4_;
            auVar50._8_8_ = auVar51._8_8_;
            auVar50._4_4_ = auVar27._0_4_;
            auVar50._0_4_ = auVar57._0_4_;
            auVar52._0_12_ = auVar50._0_12_;
            auVar52._12_4_ = auVar27._4_4_;
            auVar68._4_12_ = auVar26._4_12_;
            auVar68._0_4_ = fVar72;
            auVar70._0_8_ = auVar68._0_8_;
            auVar70._8_4_ = fVar91;
            auVar69._8_8_ = auVar70._8_8_;
            auVar69._4_4_ = auVar57._4_4_;
            auVar69._0_4_ = fVar72;
            auVar71._0_12_ = auVar69._0_12_;
            auVar71._12_4_ = auVar57._12_4_;
            auVar22 = NEON_ext(auVar27,auVar63,8,1);
            auVar34 = NEON_ext(auVar63,auVar27,8,1);
            auVar28._4_12_ = auVar27._4_12_;
            auVar28._0_4_ = auVar57._8_4_;
            auVar30._0_8_ = auVar28._0_8_;
            auVar30._8_4_ = auVar57._12_4_;
            auVar30._12_4_ = auVar27._12_4_;
            auVar29._8_8_ = auVar30._8_8_;
            auVar29._4_4_ = auVar27._8_4_;
            auVar29._0_4_ = auVar57._8_4_;
            auVar31._0_12_ = auVar29._0_12_;
            auVar31._12_4_ = auVar27._12_4_;
            auVar93._4_12_ = auVar92._4_12_;
            auVar93._0_4_ = fVar79;
            auVar95._0_8_ = auVar93._0_8_;
            auVar95._8_4_ = fVar91;
            auVar95._12_4_ = auVar92._12_4_;
            auVar94._8_8_ = auVar95._8_8_;
            auVar94._4_4_ = auVar57._8_4_;
            auVar94._0_4_ = fVar79;
            auVar96._0_12_ = auVar94._0_12_;
            auVar96._12_4_ = auVar57._12_4_;
            auVar26 = NEON_ext(auVar57,auVar52,8,1);
            auVar53._4_12_ = auVar52._4_12_;
            auVar53._0_4_ = auVar24._0_4_;
            auVar55._0_8_ = auVar53._0_8_;
            auVar55._8_4_ = auVar24._4_4_;
            auVar55._12_4_ = auVar27._4_4_;
            auVar54._8_8_ = auVar55._8_8_;
            auVar54._4_4_ = auVar33._0_4_ + fVar4 * fVar80;
            auVar54._0_4_ = auVar24._0_4_;
            auVar56._0_12_ = auVar54._0_12_;
            auVar56._12_4_ = fVar72;
            auVar41 = NEON_ext(auVar22,auVar71,8,1);
            auVar47 = NEON_ext(auVar78,auVar34,8,1);
            auVar59 = NEON_ext(auVar67,auVar65,4,1);
            auVar87._4_12_ = auVar22._4_12_;
            auVar87._0_4_ = auVar24._8_4_;
            auVar89._12_4_ = auVar22._12_4_;
            auVar89._0_8_ = auVar87._0_8_;
            auVar89._8_4_ = auVar67._12_4_;
            auVar88._8_8_ = auVar89._8_8_;
            auVar88._4_4_ = auVar65._8_4_;
            auVar88._0_4_ = auVar24._8_4_;
            auVar90._0_12_ = auVar88._0_12_;
            auVar90._12_4_ = auVar65._12_4_;
            auVar25._12_4_ = fVar79;
            auVar25._0_12_ = auVar24;
            auVar33 = NEON_ext(auVar35,auVar31,8,1);
            auVar34 = NEON_ext(auVar26,auVar56,8,1);
            auVar22 = NEON_ext(auVar47,auVar47,8,1);
            auVar59 = NEON_ext(auVar59,auVar59,4,1);
            auVar23 = NEON_ext(auVar90,auVar65,4,1);
            auVar47._4_4_ = auVar65._4_4_;
            auVar47._0_4_ = auVar48._4_4_;
            auVar47._8_4_ = auVar48._12_4_;
            auVar47._12_4_ = auVar65._12_4_;
            auVar47 = NEON_ext(auVar25,auVar47,8,1);
            auVar26._4_4_ = auVar48._0_4_;
            auVar26._0_4_ = auVar35._0_4_;
            auVar26._8_4_ = auVar35._4_4_;
            auVar26._12_4_ = auVar48._4_4_;
            auVar57 = NEON_ext(auVar59,auVar26,8,1);
            auVar23 = NEON_ext(auVar96,auVar23,8,1);
            auVar59 = NEON_ext(auVar41,auVar41,8,1);
            in_q0 = NEON_ext(auVar33,auVar33,8,1);
            auVar33 = NEON_ext(auVar34,auVar34,8,1);
            auVar26 = NEON_ext(auVar47,auVar47,8,1);
            *(long *)(pcVar8 + 0x68) = auVar22._8_8_;
            *(long *)(pcVar8 + 0x60) = auVar22._0_8_;
            auVar34 = NEON_ext(auVar57,auVar57,8,1);
            in_q5 = NEON_ext(auVar23,auVar23,8,1);
            pfVar19 = pfVar19 + -1;
                    /* try { // try from 00a879cc to 00b879fb has its CatchHandler @ 00a87a70 */
            *(long *)(pcVar8 + 0x28) = auVar59._8_8_;
            *(long *)(pcVar8 + 0x20) = auVar59._0_8_;
            *(long *)(pcVar8 + 0x38) = auVar26._8_8_;
            *(long *)(pcVar8 + 0x30) = auVar26._0_8_;
            *(long *)(pcVar8 + 0x48) = in_q0._8_8_;
            *(long *)(pcVar8 + 0x40) = in_q0._0_8_;
            *(long *)(pcVar8 + 0x58) = in_q5._8_8_;
            *(long *)(pcVar8 + 0x50) = in_q5._0_8_;
            *(long *)(pcVar8 + 8) = auVar33._8_8_;
            *(long *)pcVar8 = auVar33._0_8_;
            *(long *)(pcVar8 + 0x18) = auVar34._8_8_;
            *(long *)(pcVar8 + 0x10) = auVar34._0_8_;
            pcVar8 = pcVar8 + 0x70;
            pfVar9 = pfVar9 + 4;
          } while (pfVar19 != (float *)0x0);
          bVar7 = pfVar18 == param_1;
          param_2 = (ulong)(param_2 + (long)pfVar18 * 4);
          param_1 = (float *)((long)param_1 - (long)pfVar18);
          this = this + (long)pfVar18 * 0x1c;
          if (bVar7) {
            return;
          }
        }
      }
    }
    do {
      param_1 = (float *)((long)param_1 + -1);
                    /* try { // try from 00a876b4 to 00b876b7 has its CatchHandler @ 00a877cc */
      *(float *)this = *(float *)this + *(float *)param_2 * (float)*param_4;
                    /* try { // try from 00a876c8 to 00b876cb has its CatchHandler @ 00a877d0 */
                    /* try { // try from 00a876cc to 00b876e7 has its CatchHandler @ 00a877dc */
      *(float *)(this + 4) = *(float *)(this + 4) + *(float *)param_2 * (float)param_4[1];
                    /* try { // try from 00a876e8 to 00b87743 has its CatchHandler @ 00a877d8 */
      *(float *)(this + 8) = *(float *)(this + 8) + *(float *)param_2 * (float)param_4[2];
      *(float *)(this + 0xc) = *(float *)(this + 0xc) + *(float *)param_2 * (float)param_4[3];
      *(float *)(this + 0x10) = *(float *)(this + 0x10) + *(float *)param_2 * (float)param_4[4];
      *(float *)(this + 0x14) = *(float *)(this + 0x14) + *(float *)param_2 * (float)param_4[5];
      *(float *)(this + 0x18) = *(float *)(this + 0x18) + *(float *)param_2 * (float)param_4[6];
                    /* try { // try from 00a87744 to 00b87843 has its CatchHandler @ 00a87618 */
      param_2 = (ulong)(param_2 + 4);
      this = this + 0x1c;
    } while (param_1 != (float *)0x0);
  }
  else {
                    /* try { // try from 00a87404 to 00b8740f has its CatchHandler @ 00a87458 */
    do {
                    /* try { // try from 00a87410 to 00b8746b has its CatchHandler @ 00a87388 */
      fVar36 = *(float *)param_2;
      fVar2 = -0.5;
      fVar4 = 0.5;
      if (fVar36 <= -16.0) {
        iVar11 = -0x80000000;
      }
      else if (16.0 <= fVar36) {
        iVar11 = 0x7fffffff;
      }
      else {
        fVar5 = fVar4;
        if (fVar36 * 1.3421773e+08 <= 0.0) {
          fVar5 = fVar2;
        }
        iVar11 = (int)(fVar5 + fVar36 * 1.3421773e+08);
                    /* catch() { ... } // from try @ 00a873d8 with catch @ 00a87440 */
      }
                    /* catch() { ... } // from try @ 00a873c8 with catch @ 00a87450 */
                    /* catch() { ... } // from try @ 00a873b0 with catch @ 00a87454 */
                    /* catch() { ... } // from try @ 00a87404 with catch @ 00a87458 */
      *(float *)this = fVar36 * (float)*param_4 + *(float *)this;
      fVar36 = *(float *)param_2;
      if (fVar36 <= -16.0) {
        iVar12 = -0x80000000;
      }
      else if (16.0 <= fVar36) {
        iVar12 = 0x7fffffff;
      }
      else {
        fVar5 = fVar4;
        if (fVar36 * 1.3421773e+08 <= 0.0) {
          fVar5 = fVar2;
        }
        iVar12 = (int)(fVar5 + fVar36 * 1.3421773e+08);
      }
      *(float *)(this + 4) = fVar36 * (float)param_4[1] + *(float *)(this + 4);
      fVar36 = *(float *)param_2;
      if (fVar36 <= -16.0) {
        iVar13 = -0x80000000;
      }
      else if (16.0 <= fVar36) {
        iVar13 = 0x7fffffff;
      }
      else {
                    /* try { // try from 00a874d8 to 00b8750b has its CatchHandler @ 00a874d8
                       catch() { ... } // from try @ 00a874d8 with catch @ 00a874d8
                       catch() { ... } // from try @ 00a87520 with catch @ 00a874d8 */
        fVar5 = fVar4;
        if (fVar36 * 1.3421773e+08 <= 0.0) {
          fVar5 = fVar2;
        }
        iVar13 = (int)(fVar5 + fVar36 * 1.3421773e+08);
      }
      *(float *)(this + 8) = fVar36 * (float)param_4[2] + *(float *)(this + 8);
      fVar36 = *(float *)param_2;
                    /* try { // try from 00a8750c to 00b87513 has its CatchHandler @ 00a87544 */
      if (fVar36 <= -16.0) {
        iVar14 = -0x80000000;
      }
      else {
                    /* try { // try from 00a8751c to 00b8751f has its CatchHandler @ 00a87534 */
        if (16.0 <= fVar36) {
                    /* catch() { ... } // from try @ 00a8750c with catch @ 00a87544 */
          iVar14 = 0x7fffffff;
        }
        else {
                    /* try { // try from 00a87520 to 00b87557 has its CatchHandler @ 00a874d8 */
          fVar5 = fVar4;
          if (fVar36 * 1.3421773e+08 <= 0.0) {
            fVar5 = fVar2;
          }
                    /* catch() { ... } // from try @ 00a8751c with catch @ 00a87534 */
          iVar14 = (int)(fVar5 + fVar36 * 1.3421773e+08);
        }
      }
                    /* try { // try from 00a87558 to 00b8758f has its CatchHandler @ 00a87558
                       catch() { ... } // from try @ 00a87558 with catch @ 00a87558
                       catch() { ... } // from try @ 00a87598 with catch @ 00a87558 */
      *(float *)(this + 0xc) = fVar36 * (float)param_4[3] + *(float *)(this + 0xc);
      fVar36 = *(float *)param_2;
      if (fVar36 <= -16.0) {
                    /* try { // try from 00a87590 to 00b87597 has its CatchHandler @ 00a875a8 */
        iVar15 = -0x80000000;
      }
      else if (16.0 <= fVar36) {
                    /* try { // try from 00a87598 to 00b875bb has its CatchHandler @ 00a87558 */
        iVar15 = 0x7fffffff;
      }
      else {
        fVar5 = fVar4;
        if (fVar36 * 1.3421773e+08 <= 0.0) {
          fVar5 = fVar2;
        }
        iVar15 = (int)(fVar5 + fVar36 * 1.3421773e+08);
      }
                    /* catch() { ... } // from try @ 00a87590 with catch @ 00a875a8 */
      *(float *)(this + 0x10) = fVar36 * (float)param_4[4] + *(float *)(this + 0x10);
      fVar36 = *(float *)param_2;
      if (fVar36 <= -16.0) {
        iVar16 = -0x80000000;
      }
      else if (16.0 <= fVar36) {
        iVar16 = 0x7fffffff;
      }
      else {
        fVar5 = fVar4;
        if (fVar36 * 1.3421773e+08 <= 0.0) {
          fVar5 = fVar2;
        }
        iVar16 = (int)(fVar5 + fVar36 * 1.3421773e+08);
      }
      *(float *)(this + 0x14) = fVar36 * (float)param_4[5] + *(float *)(this + 0x14);
      fVar36 = *(float *)param_2;
      if (fVar36 <= -16.0) {
        iVar17 = -0x80000000;
      }
      else {
                    /* try { // try from 00a87618 to 00b87667 has its CatchHandler @ 00a87618
                       catch() { ... } // from try @ 00a87618 with catch @ 00a87618
                       catch() { ... } // from try @ 00a87744 with catch @ 00a87618 */
        if (16.0 <= fVar36) {
          iVar17 = 0x7fffffff;
        }
        else {
          if (fVar36 * 1.3421773e+08 <= 0.0) {
            fVar4 = fVar2;
          }
          iVar17 = (int)(fVar4 + fVar36 * 1.3421773e+08);
        }
      }
      *(float *)(this + 0x18) = fVar36 * (float)param_4[6] + *(float *)(this + 0x18);
                    /* try { // try from 00a87668 to 00b87697 has its CatchHandler @ 00a877f4 */
      param_2 = param_2 + 4;
      param_1 = (float *)((long)param_1 + -1);
      *param_3 = (float)((int)*param_3 +
                        ((iVar17 + iVar16 + iVar15 + iVar14 + iVar13 + iVar12 + iVar11) / 7 >> 0xc)
                        * (int)(short)param_5);
      this = this + 0x1c;
      param_3 = param_3 + 1;
    } while (param_1 != (float *)0x0);
  }
  return;
}

