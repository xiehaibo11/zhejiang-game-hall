
/* btConeTwistConstraint::solveConstraintObsolete(btSolverBody&, btSolverBody&, float) */

void __thiscall
btConeTwistConstraint::solveConstraintObsolete
          (btConeTwistConstraint *this,btSolverBody *param_1,btSolverBody *param_2,float param_3)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  btSolverBody *pbVar5;
  btSolverBody *pbVar6;
  btSolverBody *pbVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float extraout_s16;
  float extraout_var;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  btSolverBody *local_298;
  btSolverBody *local_290;
  btSolverBody *local_288;
  btSolverBody *local_280;
  float local_270;
  float local_26c;
  float local_268;
  undefined4 local_264;
  float local_260;
  float local_25c;
  float local_258;
  undefined4 local_254;
  float local_250;
  float fStack_24c;
  float local_248;
  undefined4 local_244;
  float local_240;
  float local_23c;
  float local_238;
  undefined4 local_234;
  float local_230;
  float local_22c;
  float local_228;
  undefined4 local_224;
  float local_220;
  float local_21c;
  float local_218;
  undefined4 local_214;
  float local_210;
  float local_20c;
  float local_208;
  undefined4 local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  undefined4 local_1f4;
  float local_1f0;
  undefined8 local_1ec;
  undefined8 local_1e4;
  float local_1dc;
  undefined8 local_1d8;
  undefined8 local_1d0;
  float local_1c8;
  undefined8 local_1c4;
  undefined8 local_1bc;
  undefined4 local_1b4;
  undefined8 local_1b0;
  ulong local_1a8;
  float local_1a0;
  undefined8 local_19c;
  undefined8 local_194;
  float local_18c;
  undefined8 local_188;
  undefined8 local_180;
  float local_178;
  undefined8 local_174;
  undefined8 local_16c;
  undefined4 local_164;
  float local_160;
  float local_15c;
  float fStack_158;
  undefined4 local_154;
  float local_150;
  float local_14c;
  float fStack_148;
  undefined4 local_144;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  float local_b4;
  float afStack_b0 [4];
  
  if (this[0x227] == (btConeTwistConstraint)0x0) {
    return;
  }
  if (this[0x224] == (btConeTwistConstraint)0x0) {
    fVar16 = *(float *)(param_1 + 0xb0);
    fVar17 = *(float *)(param_1 + 0xb4);
    fVar31 = *(float *)(param_1 + 0x40);
    fVar32 = *(float *)(param_1 + 0x44);
    lVar2 = *(long *)(this + 0x28);
    lVar3 = *(long *)(this + 0x30);
    fVar33 = *(float *)(param_1 + 0xb8);
    fVar34 = *(float *)(param_1 + 0x48);
    fVar35 = *(float *)(param_1 + 0xc0);
    fVar36 = *(float *)(param_1 + 0xc4);
    fVar37 = *(float *)(param_1 + 0x50);
    fVar40 = *(float *)(param_1 + 0x54);
    fVar42 = *(float *)(param_1 + 200);
    fVar44 = *(float *)(param_1 + 0x58);
    fVar8 = *(float *)(this + 0x174);
    fVar9 = *(float *)(this + 0x178);
    fVar11 = *(float *)(this + 0x17c);
    fVar12 = *(float *)(this + 0x1b4);
    fVar13 = *(float *)(this + 0x1b8);
    fVar15 = *(float *)(this + 0x1bc);
    fVar47 = *(float *)(param_2 + 0xb0);
    fVar49 = *(float *)(param_2 + 0xb4);
    fVar52 = *(float *)(param_2 + 0x40);
    fVar55 = *(float *)(param_2 + 0x44);
    fVar57 = *(float *)(param_2 + 0xb8);
    fVar59 = *(float *)(param_2 + 0x48);
    fVar19 = *(float *)(param_2 + 0xc0);
    fVar21 = *(float *)(param_2 + 0xc4);
    fVar23 = *(float *)(param_2 + 0x50);
    fVar25 = *(float *)(param_2 + 0x54);
    fVar28 = *(float *)(param_2 + 200);
    fVar30 = *(float *)(param_2 + 0x58);
    fVar14 = fVar8 * *(float *)(lVar2 + 8) + fVar9 * *(float *)(lVar2 + 0xc) +
             fVar11 * *(float *)(lVar2 + 0x10) + *(float *)(lVar2 + 0x38);
    fVar38 = fVar12 * *(float *)(lVar3 + 8) + fVar13 * *(float *)(lVar3 + 0xc) +
             fVar15 * *(float *)(lVar3 + 0x10) + *(float *)(lVar3 + 0x38);
    fVar10 = fVar38 - *(float *)(lVar3 + 0x38);
    fVar53 = fVar8 * *(float *)(lVar2 + 0x28) + fVar9 * *(float *)(lVar2 + 0x2c) +
             fVar11 * *(float *)(lVar2 + 0x30) + *(float *)(lVar2 + 0x40);
    fVar18 = fVar12 * *(float *)(lVar3 + 0x18) + fVar13 * *(float *)(lVar3 + 0x1c) +
             fVar15 * *(float *)(lVar3 + 0x20) + *(float *)(lVar3 + 0x3c);
    fVar45 = fVar8 * *(float *)(lVar2 + 0x18) + fVar9 * *(float *)(lVar2 + 0x1c) +
             fVar11 * *(float *)(lVar2 + 0x20) + *(float *)(lVar2 + 0x3c);
    fVar15 = fVar12 * *(float *)(lVar3 + 0x28) + fVar13 * *(float *)(lVar3 + 0x2c) +
             fVar15 * *(float *)(lVar3 + 0x30) + *(float *)(lVar3 + 0x40);
    fVar12 = fVar18 - *(float *)(lVar3 + 0x3c);
    fVar8 = fVar14 - *(float *)(lVar2 + 0x38);
    fVar9 = fVar45 - *(float *)(lVar2 + 0x3c);
    fVar11 = fVar53 - *(float *)(lVar2 + 0x40);
    fVar13 = fVar15 - *(float *)(lVar3 + 0x40);
    lVar3 = *(long *)(param_1 + 0xf0);
    lVar2 = 0;
    do {
      fVar39 = (1.0 / *(float *)(this + lVar2 + 0x98)) *
               ((((fVar14 - fVar38) * *(float *)(this + lVar2 + 0x48) +
                  (fVar45 - fVar18) * *(float *)(this + lVar2 + 0x4c) +
                 (fVar53 - fVar15) * *(float *)(this + lVar2 + 0x50)) * -0.3) / param_3) -
               (1.0 / *(float *)(this + lVar2 + 0x98)) *
               (((fVar16 + fVar31 + (fVar11 * (fVar36 + fVar40) - fVar9 * (fVar42 + fVar44))) -
                (fVar47 + fVar52 + (fVar13 * (fVar21 + fVar25) - fVar12 * (fVar28 + fVar30)))) *
                *(float *)(this + lVar2 + 0x48) +
                ((fVar17 + fVar32 + (fVar8 * (fVar42 + fVar44) - fVar11 * (fVar35 + fVar37))) -
                (fVar49 + fVar55 + (fVar10 * (fVar28 + fVar30) - fVar13 * (fVar19 + fVar23)))) *
                *(float *)(this + lVar2 + 0x4c) +
               ((fVar33 + fVar34 + (fVar9 * (fVar35 + fVar37) - fVar8 * (fVar36 + fVar40))) -
               (fVar57 + fVar59 + (fVar12 * (fVar19 + fVar23) - fVar10 * (fVar21 + fVar25)))) *
               *(float *)(this + lVar2 + 0x50));
      *(float *)(this + 0x38) = *(float *)(this + 0x38) + fVar39;
      fVar46 = *(float *)(this + lVar2 + 0x4c);
      fVar41 = *(float *)(this + lVar2 + 0x50);
      fVar43 = *(float *)(this + lVar2 + 0x48);
      if (lVar3 != 0) {
        lVar4 = *(long *)(this + 0x28);
        fVar48 = fVar9 * fVar41 - fVar11 * fVar46;
        fVar50 = fVar11 * fVar43 - fVar8 * fVar41;
        fVar54 = fVar8 * fVar46 - fVar9 * fVar43;
        fVar56 = *(float *)(lVar4 + 0x124);
        fVar58 = *(float *)(lVar4 + 0x128);
        fVar20 = *(float *)(lVar4 + 0x134);
        fVar22 = *(float *)(lVar4 + 0x138);
        fVar26 = *(float *)(lVar4 + 0x144);
        fVar29 = *(float *)(lVar4 + 0x148);
        fVar60 = *(float *)(lVar4 + 300);
        fVar24 = *(float *)(lVar4 + 0x13c);
        fVar27 = *(float *)(lVar4 + 0x14c);
        fVar51 = *(float *)(lVar4 + 0x174);
        *(float *)(param_1 + 0x48) =
             fVar39 * fVar41 * fVar51 * *(float *)(param_1 + 0x78) + *(float *)(param_1 + 0x48);
        *(float *)(param_1 + 0x40) =
             fVar39 * fVar43 * fVar51 * *(float *)(param_1 + 0x70) + *(float *)(param_1 + 0x40);
        *(float *)(param_1 + 0x44) =
             fVar39 * fVar46 * fVar51 * *(float *)(param_1 + 0x74) + *(float *)(param_1 + 0x44);
        *(float *)(param_1 + 0x50) =
             (fVar48 * fVar56 + fVar50 * fVar58 + fVar54 * fVar60) *
             fVar39 * *(float *)(param_1 + 0x60) + *(float *)(param_1 + 0x50);
        *(float *)(param_1 + 0x54) =
             (fVar48 * fVar20 + fVar50 * fVar22 + fVar54 * fVar24) *
             fVar39 * *(float *)(param_1 + 100) + *(float *)(param_1 + 0x54);
        *(float *)(param_1 + 0x58) =
             (fVar48 * fVar26 + fVar50 * fVar29 + fVar54 * fVar27) *
             fVar39 * *(float *)(param_1 + 0x68) + *(float *)(param_1 + 0x58);
      }
      if (*(long *)(param_2 + 0xf0) != 0) {
        lVar4 = *(long *)(this + 0x30);
        fVar50 = fVar12 * fVar41 - fVar13 * fVar46;
        fVar29 = fVar10 * fVar46 - fVar12 * fVar43;
        fVar48 = *(float *)(lVar4 + 0x124);
        fVar51 = *(float *)(lVar4 + 0x128);
        fVar46 = *(float *)(lVar4 + 0x134);
        fVar20 = *(float *)(lVar4 + 0x138);
        fVar22 = *(float *)(lVar4 + 0x144);
        fVar24 = *(float *)(lVar4 + 0x148);
        fVar27 = fVar13 * fVar43 - fVar10 * fVar41;
        fVar56 = *(float *)(this + lVar2 + 0x4c);
        fVar58 = *(float *)(this + lVar2 + 0x50);
        fVar54 = *(float *)(lVar4 + 300);
        fVar26 = *(float *)(lVar4 + 0x174);
        fVar41 = *(float *)(lVar4 + 0x13c);
        fVar43 = *(float *)(lVar4 + 0x14c);
        fVar39 = -fVar39;
        *(float *)(param_2 + 0x40) =
             fVar26 * *(float *)(this + lVar2 + 0x48) * fVar39 * *(float *)(param_2 + 0x70) +
             *(float *)(param_2 + 0x40);
        *(float *)(param_2 + 0x44) =
             fVar26 * fVar56 * fVar39 * *(float *)(param_2 + 0x74) + *(float *)(param_2 + 0x44);
        *(float *)(param_2 + 0x48) =
             fVar26 * fVar58 * fVar39 * *(float *)(param_2 + 0x78) + *(float *)(param_2 + 0x48);
        *(float *)(param_2 + 0x50) =
             (fVar50 * fVar48 + fVar27 * fVar51 + fVar29 * fVar54) *
             *(float *)(param_2 + 0x60) * fVar39 + *(float *)(param_2 + 0x50);
        *(float *)(param_2 + 0x54) =
             (fVar50 * fVar46 + fVar27 * fVar20 + fVar29 * fVar41) *
             *(float *)(param_2 + 100) * fVar39 + *(float *)(param_2 + 0x54);
        *(float *)(param_2 + 0x58) =
             (fVar50 * fVar22 + fVar27 * fVar24 + fVar29 * fVar43) *
             *(float *)(param_2 + 0x68) * fVar39 + *(float *)(param_2 + 0x58);
      }
      lVar2 = lVar2 + 0x54;
    } while (lVar2 != 0xfc);
  }
  if (this[0x240] == (btConeTwistConstraint)0x0) {
    if (*(float *)(this + 0x1d0) <= 1.1920929e-07) goto LAB_011b64f0;
    fVar8 = (*(float *)(param_2 + 0xc0) + *(float *)(param_2 + 0x50)) -
            (*(float *)(param_1 + 0xc0) + *(float *)(param_1 + 0x50));
    fVar9 = ((float)*(undefined8 *)(param_2 + 0xc4) + (float)*(undefined8 *)(param_2 + 0x54)) -
            ((float)*(undefined8 *)(param_1 + 0xc4) + (float)*(undefined8 *)(param_1 + 0x54));
    fVar11 = ((float)((ulong)*(undefined8 *)(param_2 + 0xc4) >> 0x20) +
             (float)((ulong)*(undefined8 *)(param_2 + 0x54) >> 0x20)) -
             ((float)((ulong)*(undefined8 *)(param_1 + 0xc4) >> 0x20) +
             (float)((ulong)*(undefined8 *)(param_1 + 0x54) >> 0x20));
    fVar10 = fVar8 * fVar8 + fVar9 * fVar9 + fVar11 * fVar11;
    if (fVar10 <= 1.1920929e-07) goto LAB_011b64ec;
    fVar12 = SQRT(fVar10);
    if (NAN(fVar12)) {
      fVar12 = sqrtf(fVar10);
    }
    lVar2 = *(long *)(this + 0x28);
    lVar3 = *(long *)(this + 0x30);
    fVar12 = 1.0 / fVar12;
    fVar10 = fVar8 * fVar12;
    fVar13 = fVar12 * fVar9;
    fVar12 = fVar12 * fVar11;
    fVar12 = *(float *)(this + 0x1d0) *
             (1.0 / (fVar10 * (*(float *)(lVar2 + 0x124) * fVar10 +
                               fVar13 * *(float *)(lVar2 + 0x134) +
                              fVar12 * *(float *)(lVar2 + 0x144)) +
                     fVar13 * (fVar10 * *(float *)(lVar2 + 0x128) +
                               fVar13 * *(float *)(lVar2 + 0x138) +
                              fVar12 * *(float *)(lVar2 + 0x148)) +
                     fVar12 * (fVar10 * *(float *)(lVar2 + 300) + fVar13 * *(float *)(lVar2 + 0x13c)
                              + fVar12 * *(float *)(lVar2 + 0x14c)) +
                    fVar10 * (fVar10 * *(float *)(lVar3 + 0x124) +
                              fVar13 * *(float *)(lVar3 + 0x134) +
                             fVar12 * *(float *)(lVar3 + 0x144)) +
                    fVar13 * (fVar10 * *(float *)(lVar3 + 0x128) +
                              fVar13 * *(float *)(lVar3 + 0x138) +
                             fVar12 * *(float *)(lVar3 + 0x148)) +
                    fVar12 * (fVar10 * *(float *)(lVar3 + 300) + fVar13 * *(float *)(lVar3 + 0x13c)
                             + fVar12 * *(float *)(lVar3 + 0x14c))));
    fVar8 = fVar8 * fVar12;
    fVar9 = fVar12 * fVar9;
    fVar12 = fVar12 * fVar11;
    fVar11 = fVar12 * fVar12 + fVar8 * fVar8 + fVar9 * fVar9;
    fVar10 = SQRT(fVar11);
    if (NAN(fVar10)) {
      fVar10 = sqrtf(fVar11);
    }
    lVar2 = *(long *)(param_1 + 0xf0);
    fVar11 = 1.0 / fVar10;
    fVar8 = fVar11 * fVar8;
    fVar9 = fVar11 * fVar9;
    fVar11 = fVar11 * fVar12;
joined_r0x011b5f50:
    if (lVar2 != 0) {
      lVar2 = *(long *)(this + 0x28);
      fVar12 = fVar10 * 0.0;
      fVar17 = *(float *)(lVar2 + 0x124);
      fVar18 = *(float *)(lVar2 + 0x128);
      fVar21 = *(float *)(lVar2 + 0x134);
      fVar23 = *(float *)(lVar2 + 0x138);
      fVar19 = *(float *)(lVar2 + 300);
      fVar14 = *(float *)(lVar2 + 0x144);
      fVar15 = *(float *)(lVar2 + 0x148);
      fVar13 = *(float *)(lVar2 + 0x13c);
      fVar16 = *(float *)(lVar2 + 0x14c);
      *(float *)(param_1 + 0x40) = fVar12 * *(float *)(param_1 + 0x70) + *(float *)(param_1 + 0x40);
      *(float *)(param_1 + 0x44) = fVar12 * *(float *)(param_1 + 0x74) + *(float *)(param_1 + 0x44);
      *(float *)(param_1 + 0x48) = fVar12 * *(float *)(param_1 + 0x78) + *(float *)(param_1 + 0x48);
      *(float *)(param_1 + 0x50) =
           (fVar8 * fVar17 + fVar9 * fVar18 + fVar11 * fVar19) * fVar10 * *(float *)(param_1 + 0x60)
           + *(float *)(param_1 + 0x50);
      *(float *)(param_1 + 0x54) =
           (fVar8 * fVar21 + fVar9 * fVar23 + fVar11 * fVar13) * fVar10 * *(float *)(param_1 + 100)
           + *(float *)(param_1 + 0x54);
      *(float *)(param_1 + 0x58) =
           (fVar8 * fVar14 + fVar9 * fVar15 + fVar11 * fVar16) * fVar10 * *(float *)(param_1 + 0x68)
           + *(float *)(param_1 + 0x58);
    }
    if (*(long *)(param_2 + 0xf0) != 0) {
      lVar2 = *(long *)(this + 0x30);
      fVar13 = -fVar10;
      fVar10 = fVar10 * -0.0;
      fVar21 = *(float *)(lVar2 + 0x124);
      fVar12 = *(float *)(lVar2 + 0x134);
      fVar16 = *(float *)(lVar2 + 0x144);
      fVar23 = *(float *)(lVar2 + 0x128);
      fVar14 = *(float *)(lVar2 + 0x138);
      fVar18 = *(float *)(lVar2 + 0x148);
      fVar19 = *(float *)(lVar2 + 300);
      fVar15 = *(float *)(lVar2 + 0x13c);
      fVar17 = *(float *)(lVar2 + 0x14c);
      *(float *)(param_2 + 0x40) = fVar10 * *(float *)(param_2 + 0x70) + *(float *)(param_2 + 0x40);
      *(float *)(param_2 + 0x44) = fVar10 * *(float *)(param_2 + 0x74) + *(float *)(param_2 + 0x44);
      *(float *)(param_2 + 0x48) = fVar10 * *(float *)(param_2 + 0x78) + *(float *)(param_2 + 0x48);
      *(float *)(param_2 + 0x50) =
           (fVar8 * fVar21 + fVar9 * fVar23 + fVar11 * fVar19) * *(float *)(param_2 + 0x60) * fVar13
           + *(float *)(param_2 + 0x50);
      *(float *)(param_2 + 0x54) =
           (fVar8 * fVar12 + fVar9 * fVar14 + fVar11 * fVar15) * *(float *)(param_2 + 100) * fVar13
           + *(float *)(param_2 + 0x54);
      *(float *)(param_2 + 0x58) =
           (fVar8 * fVar16 + fVar9 * fVar18 + fVar11 * fVar17) * *(float *)(param_2 + 0x68) * fVar13
           + *(float *)(param_2 + 0x58);
    }
  }
  else {
    lVar2 = *(long *)(this + 0x28);
    uStack_f8 = *(undefined8 *)(lVar2 + 0x10);
    local_100 = *(undefined8 *)(lVar2 + 8);
    uStack_e8 = *(undefined8 *)(lVar2 + 0x20);
    local_f0 = *(undefined8 *)(lVar2 + 0x18);
    uStack_d8 = *(undefined8 *)(lVar2 + 0x30);
    local_e0 = *(undefined8 *)(lVar2 + 0x28);
    uStack_c8 = *(undefined8 *)(lVar2 + 0x40);
    local_d0 = *(undefined8 *)(lVar2 + 0x38);
    lVar2 = *(long *)(this + 0x30);
    uStack_138 = *(undefined8 *)(lVar2 + 0x10);
    local_140 = *(ulong *)(lVar2 + 8);
    uStack_128 = *(undefined8 *)(lVar2 + 0x20);
    local_130 = *(undefined8 *)(lVar2 + 0x18);
    uStack_118 = *(undefined8 *)(lVar2 + 0x30);
    local_120 = *(undefined8 *)(lVar2 + 0x28);
    uStack_108 = *(undefined8 *)(lVar2 + 0x40);
    local_110 = *(undefined8 *)(lVar2 + 0x38);
    local_150 = *(float *)(param_1 + 0xc0) + *(float *)(param_1 + 0x50);
    local_14c = *(float *)(param_1 + 0xc4) + *(float *)(param_1 + 0x54);
    local_144 = 0;
    fStack_148 = *(float *)(param_1 + 200) + *(float *)(param_1 + 0x58);
    local_160 = *(float *)(param_2 + 0xc0) + *(float *)(param_2 + 0x50);
    local_15c = *(float *)(param_2 + 0xc4) + *(float *)(param_2 + 0x54);
    local_1a0 = 1.0;
    fStack_158 = *(float *)(param_2 + 200) + *(float *)(param_2 + 0x58);
    local_19c = 0;
    local_194 = 0;
    local_18c = 1.0;
    local_188 = 0;
    local_180 = 0;
    local_178 = 1.0;
    local_164 = 0;
    local_16c = 0;
    local_174 = 0;
    local_1b0 = 0;
    local_1a8 = 0;
    local_154 = 0;
    btTransformUtil::integrateTransform
              ((btTransform *)&local_100,(btVector3 *)&local_1b0,(btVector3 *)&local_150,param_3,
               (btTransform *)&local_1a0);
    local_1f0 = 1.0;
    local_1ec = 0;
    local_1e4 = 0;
    local_1dc = 1.0;
    local_1d8 = 0;
    local_1d0 = 0;
    local_1c8 = 1.0;
    local_1b4 = 0;
    local_1bc = 0;
    local_1c4 = 0;
    btTransformUtil::integrateTransform
              ((btTransform *)&local_140,(btVector3 *)&local_1b0,(btVector3 *)&local_160,param_3,
               (btTransform *)&local_1f0);
    fVar38 = *(float *)(this + 0x18c);
    fVar9 = *(float *)(this + 0x244);
    fVar10 = *(float *)(this + 0x248);
    fVar11 = *(float *)(this + 0x24c);
    fVar12 = *(float *)(this + 0x250);
    fVar45 = *(float *)(this + 0x184);
    fVar42 = *(float *)(this + 0x188);
    fVar31 = *(float *)(this + 0x1ac);
    fVar40 = *(float *)(this + 0x194);
    fVar37 = *(float *)(this + 0x198);
    fVar49 = *(float *)(this + 0x19c);
    fVar32 = *(float *)(this + 0x1a4);
    fVar47 = *(float *)(this + 0x1a8);
    fVar57 = *(float *)(this + 0x144);
    fVar55 = *(float *)(this + 0x154);
    fVar52 = *(float *)(this + 0x148);
    fVar53 = *(float *)(this + 0x158);
    fVar34 = *(float *)(this + 0x15c);
    fVar59 = *(float *)(this + 0x14c);
    fVar14 = *(float *)(this + 0x178);
    fVar13 = -*(float *)(this + 0x174);
    fVar28 = *(float *)(this + 0x164);
    fVar25 = *(float *)(this + 0x168);
    fVar8 = *(float *)(this + 0x17c);
    fVar35 = *(float *)(this + 0x16c);
    fVar23 = (fVar57 * fVar13 - fVar55 * fVar14) - fVar28 * fVar8;
    fVar30 = (fVar52 * fVar13 - fVar53 * fVar14) - fVar25 * fVar8;
    fVar21 = (fVar59 * fVar13 - fVar34 * fVar14) - fVar35 * fVar8;
    fVar8 = 2.0 / (fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12);
    fVar13 = fVar10 * fVar8;
    fVar15 = fVar11 * fVar8;
    fVar14 = fVar12 * fVar9 * fVar8;
    fVar18 = fVar9 * fVar9 * fVar8;
    fVar36 = fVar9 * fVar13 - fVar12 * fVar15;
    fVar8 = fVar9 * fVar13 + fVar12 * fVar15;
    fVar17 = fVar9 * fVar15 + fVar12 * fVar13;
    fVar12 = fVar9 * fVar15 - fVar12 * fVar13;
    fVar9 = fVar10 * fVar15 - fVar14;
    fVar14 = fVar10 * fVar15 + fVar14;
    fVar19 = 1.0 - (fVar10 * fVar13 + fVar11 * fVar15);
    fVar16 = 1.0 - (fVar18 + fVar11 * fVar15);
    fVar33 = 1.0 - (fVar18 + fVar10 * fVar13);
    fVar11 = fVar38 * fVar14 + fVar45 * fVar36 + fVar42 * fVar16;
    fVar13 = fVar12 * fVar49 + fVar37 * fVar8 + fVar40 * fVar19;
    fVar10 = fVar40 * fVar17 + fVar37 * fVar9 + fVar49 * fVar33;
    fVar15 = fVar36 * fVar32 + fVar16 * fVar47 + fVar14 * fVar31;
    fVar18 = fVar17 * fVar32 + fVar9 * fVar47 + fVar33 * fVar31;
    fVar9 = fVar45 * fVar17 + fVar42 * fVar9 + fVar38 * fVar33;
    fVar44 = fVar38 * fVar12 + fVar42 * fVar8 + fVar45 * fVar19;
    fVar14 = fVar14 * fVar49 + fVar40 * fVar36 + fVar37 * fVar16;
    fVar8 = fVar19 * fVar32 + fVar8 * fVar47 + fVar12 * fVar31;
    fVar36 = fVar44 * fVar57 + fVar11 * fVar52 + fVar9 * fVar59;
    fVar33 = fVar13 * fVar57 + fVar14 * fVar52 + fVar10 * fVar59;
    fVar19 = fVar13 * fVar55 + fVar14 * fVar53 + fVar10 * fVar34;
    fVar16 = fVar44 * fVar28 + fVar11 * fVar25 + fVar9 * fVar35;
    fVar17 = fVar13 * fVar28 + fVar14 * fVar25 + fVar10 * fVar35;
    fVar12 = fVar44 * fVar55 + fVar11 * fVar53 + fVar9 * fVar34;
    fVar52 = fVar8 * fVar57 + fVar15 * fVar52 + fVar18 * fVar59;
    fVar34 = fVar8 * fVar55 + fVar15 * fVar53 + fVar18 * fVar34;
    fVar25 = fVar8 * fVar28 + fVar15 * fVar25 + fVar18 * fVar35;
    fVar28 = fVar45 * 0.0 + fVar42 * 0.0 + fVar38 * 0.0 + *(float *)(this + 0x1b4) +
             fVar9 * fVar21 + fVar44 * fVar23 + fVar11 * fVar30;
    fVar13 = fVar40 * 0.0 + fVar37 * 0.0 + fVar49 * 0.0 + *(float *)(this + 0x1b8) +
             fVar10 * fVar21 + fVar13 * fVar23 + fVar14 * fVar30;
    fVar11 = fVar32 * 0.0 + fVar47 * 0.0 + fVar31 * 0.0 + *(float *)(this + 0x1bc) +
             fVar18 * fVar21 + fVar8 * fVar23 + fVar15 * fVar30;
    local_230 = fVar36 * local_1f0 + fVar33 * (float)local_1ec + fVar52 * local_1ec._4_4_;
    local_22c = fVar12 * local_1f0 + fVar19 * (float)local_1ec + fVar34 * local_1ec._4_4_;
    local_228 = fVar16 * local_1f0 + fVar17 * (float)local_1ec + fVar25 * local_1ec._4_4_;
    local_21c = fVar12 * local_1e4._4_4_ + fVar19 * local_1dc + fVar34 * (float)local_1d8;
    local_220 = fVar36 * local_1e4._4_4_ + fVar33 * local_1dc + fVar52 * (float)local_1d8;
    local_218 = fVar16 * local_1e4._4_4_ + fVar17 * local_1dc + fVar25 * (float)local_1d8;
    local_210 = fVar36 * (float)local_1d0 + fVar33 * local_1d0._4_4_ + fVar52 * local_1c8;
    local_20c = fVar12 * (float)local_1d0 + fVar19 * local_1d0._4_4_ + fVar34 * local_1c8;
    fVar18 = fVar16 * (float)local_1d0 + fVar17 * local_1d0._4_4_ + fVar25 * local_1c8;
    local_270 = fVar36 * local_1a0 + fVar12 * (float)local_19c + fVar16 * local_19c._4_4_;
    local_26c = fVar33 * local_1a0 + fVar19 * (float)local_19c + fVar17 * local_19c._4_4_;
    local_268 = fVar52 * local_1a0 + fVar34 * (float)local_19c + fVar25 * local_19c._4_4_;
    fVar9 = -fVar28;
    local_260 = fVar36 * local_194._4_4_ + fVar12 * local_18c + fVar16 * (float)local_188;
    local_25c = fVar33 * local_194._4_4_ + fVar19 * local_18c + fVar17 * (float)local_188;
    local_258 = fVar52 * local_194._4_4_ + fVar34 * local_18c + fVar25 * (float)local_188;
    local_250 = fVar36 * (float)local_180 + fVar12 * local_180._4_4_ + fVar16 * local_178;
    fStack_24c = fVar33 * (float)local_180 + fVar19 * local_180._4_4_ + fVar17 * local_178;
    local_1f8 = fVar28 * (float)local_1d0 + fVar13 * local_1d0._4_4_ + fVar11 * local_1c8 +
                local_1bc._4_4_;
    local_1fc = local_1e4._4_4_ * fVar28 + fVar13 * local_1dc + fVar11 * (float)local_1d8 +
                (float)local_1bc;
    fVar10 = (fVar16 * fVar9 - fVar17 * fVar13) - fVar25 * fVar11;
    fVar8 = (fVar36 * fVar9 - fVar33 * fVar13) - fVar52 * fVar11;
    fVar9 = (fVar12 * fVar9 - fVar19 * fVar13) - fVar34 * fVar11;
    local_200 = local_1ec._4_4_ * fVar11 + local_1f0 * fVar28 + (float)local_1ec * fVar13 +
                local_1c4._4_4_;
    fVar13 = fVar8 * local_194._4_4_ + fVar9 * local_18c + fVar10 * (float)local_188 +
             (float)local_16c;
    fVar12 = fVar8 * local_1a0 + fVar9 * (float)local_19c + fVar10 * local_19c._4_4_ +
             local_174._4_4_;
    fVar14 = fVar8 * (float)local_180 + fVar9 * local_180._4_4_ + fVar10 * local_178 +
             local_16c._4_4_;
    fVar11 = 1.0 / param_3;
    local_248 = fVar52 * (float)local_180 + fVar34 * local_180._4_4_ + fVar25 * local_178;
    local_224 = 0;
    local_214 = 0;
    local_264 = 0;
    local_254 = 0;
    local_204 = 0;
    local_1f4 = 0;
    local_1b0 = CONCAT44(fVar11 * (local_1fc - local_d0._4_4_),
                         fVar11 * (local_200 - (float)local_d0));
    local_244 = 0;
    local_234 = 0;
    local_1a8 = (ulong)(uint)(fVar11 * (local_1f8 - (float)uStack_c8));
    local_240 = fVar12;
    local_23c = fVar13;
    local_238 = fVar14;
    local_208 = fVar18;
    btTransformUtil::calculateDiffAxisAngle
              ((btTransform *)&local_100,(btTransform *)&local_230,(btVector3 *)afStack_b0,&local_b4
              );
    fVar8 = afStack_b0[0] * local_b4;
    fVar9 = (float)afStack_b0._4_8_ * local_b4;
    fVar10 = SUB84(afStack_b0._4_8_,4) * local_b4;
    local_1b0 = CONCAT44(fVar11 * (fVar13 - local_110._4_4_),fVar11 * (fVar12 - (float)local_110));
    local_1a8 = (ulong)(uint)(fVar11 * (fVar14 - (float)uStack_108));
    btTransformUtil::calculateDiffAxisAngle
              ((btTransform *)&local_140,(btTransform *)&local_270,(btVector3 *)afStack_b0,&local_b4
              );
    fVar12 = fVar11 * fVar8 - local_150;
    fVar9 = fVar9 * fVar11 - local_14c;
    fVar10 = fVar10 * fVar11 - fStack_148;
    fVar13 = fVar11 * afStack_b0[0] * local_b4 - local_160;
    fVar8 = fVar12 * fVar12 + fVar9 * fVar9 + fVar10 * fVar10;
    fVar14 = (float)afStack_b0._4_8_ * local_b4 * fVar11 - local_15c;
    fVar15 = SUB84(afStack_b0._4_8_,4) * local_b4 * fVar11 - fStack_158;
    if (fVar8 <= 1.1920929e-07) {
      fVar16 = 0.0;
      fVar8 = extraout_s16;
      fVar11 = extraout_var;
    }
    else {
      fVar11 = SQRT(fVar8);
      if (NAN(fVar11)) {
        fVar11 = sqrtf(fVar8);
      }
      lVar2 = *(long *)(this + 0x28);
      fVar11 = 1.0 / fVar11;
      fVar18 = fVar12 * fVar11;
      fVar8 = fVar9 * fVar11;
      fVar11 = fVar10 * fVar11;
      fVar16 = fVar18 * (*(float *)(lVar2 + 0x124) * fVar18 + *(float *)(lVar2 + 0x134) * fVar8 +
                        *(float *)(lVar2 + 0x144) * fVar11) +
               (fVar18 * *(float *)(lVar2 + 0x128) + *(float *)(lVar2 + 0x138) * fVar8 +
               *(float *)(lVar2 + 0x148) * fVar11) * fVar8 +
               (fVar18 * *(float *)(lVar2 + 300) + *(float *)(lVar2 + 0x13c) * fVar8 +
               *(float *)(lVar2 + 0x14c) * fVar11) * fVar11;
    }
    fVar19 = fVar13 * fVar13 + fVar14 * fVar14;
    fVar17 = 0.0;
    fVar21 = fVar19 + fVar15 * fVar15;
    fVar23 = 0.0;
    if (1.1920929e-07 < fVar21) {
      fVar17 = SQRT(fVar21);
      if (NAN(fVar17)) {
        fVar17 = sqrtf(fVar21);
      }
      lVar2 = *(long *)(this + 0x30);
      fVar17 = 1.0 / fVar17;
      fVar21 = fVar13 * fVar17;
      fVar19 = fVar14 * fVar17;
      fVar17 = fVar15 * fVar17;
      fVar23 = fVar21 * (*(float *)(lVar2 + 0x124) * fVar21 + *(float *)(lVar2 + 0x134) * fVar19 +
                        *(float *)(lVar2 + 0x144) * fVar17) +
               (fVar21 * *(float *)(lVar2 + 0x128) + *(float *)(lVar2 + 0x138) * fVar19 +
               *(float *)(lVar2 + 0x148) * fVar17) * fVar19 +
               (fVar21 * *(float *)(lVar2 + 300) + *(float *)(lVar2 + 0x13c) * fVar19 +
               *(float *)(lVar2 + 0x14c) * fVar17) * fVar17;
    }
    fVar18 = fVar16 * fVar18 + fVar23 * fVar21;
    fVar19 = fVar8 * fVar16 + fVar19 * fVar23;
    fVar11 = fVar11 * fVar16 + fVar17 * fVar23;
    fVar8 = fVar18 * fVar18 + fVar19 * fVar19 + fVar11 * fVar11;
    if (1.1920929e-07 < fVar8) {
      fVar16 = SQRT(fVar8);
      if (NAN(fVar16)) {
        fVar16 = sqrtf(fVar8);
      }
      lVar2 = *(long *)(this + 0x28);
      lVar3 = *(long *)(this + 0x30);
      fVar16 = 1.0 / fVar16;
      fVar18 = fVar18 * fVar16;
      fVar19 = fVar16 * fVar19;
      fVar16 = fVar16 * fVar11;
      fVar17 = fVar18 * (*(float *)(lVar2 + 0x124) * fVar18 + fVar19 * *(float *)(lVar2 + 0x134) +
                        fVar16 * *(float *)(lVar2 + 0x144)) +
               fVar19 * (fVar18 * *(float *)(lVar2 + 0x128) + fVar19 * *(float *)(lVar2 + 0x138) +
                        fVar16 * *(float *)(lVar2 + 0x148)) +
               fVar16 * (fVar18 * *(float *)(lVar2 + 300) + fVar19 * *(float *)(lVar2 + 0x13c) +
                        fVar16 * *(float *)(lVar2 + 0x14c));
      fVar18 = fVar18 * (fVar18 * *(float *)(lVar3 + 0x124) + fVar19 * *(float *)(lVar3 + 0x134) +
                        fVar16 * *(float *)(lVar3 + 0x144)) +
               fVar19 * (fVar18 * *(float *)(lVar3 + 0x128) + fVar19 * *(float *)(lVar3 + 0x138) +
                        fVar16 * *(float *)(lVar3 + 0x148)) +
               fVar16 * (fVar18 * *(float *)(lVar3 + 300) + fVar19 * *(float *)(lVar3 + 0x13c) +
                        fVar16 * *(float *)(lVar3 + 0x14c));
      fVar16 = *(float *)(this + 0x254);
      fVar11 = 1.0 / ((fVar17 + fVar18) * (fVar17 + fVar18));
      fVar8 = (fVar12 * fVar17 - fVar13 * fVar18) * fVar11;
      fVar9 = (fVar9 * fVar17 - fVar14 * fVar18) * fVar11;
      fVar11 = (fVar10 * fVar17 - fVar15 * fVar18) * fVar11;
      if (0.0 <= fVar16) {
        fVar13 = fVar8 + *(float *)(this + 600);
        fVar10 = fVar9 + (float)*(undefined8 *)(this + 0x25c);
        fVar12 = fVar11 + (float)((ulong)*(undefined8 *)(this + 0x25c) >> 0x20);
        if (this[0x241] != (btConeTwistConstraint)0x0) {
          fVar16 = fVar16 / fVar17;
        }
        fVar14 = fVar13 * fVar13 + fVar10 * fVar10 + fVar12 * fVar12;
        if (NAN(SQRT(fVar14))) {
          fVar15 = sqrtf(fVar14);
          if (fVar15 <= fVar16) goto LAB_011b62c0;
LAB_011b6208:
          fVar11 = SQRT(fVar14);
          if (NAN(fVar11)) {
            fVar11 = sqrtf(fVar14);
          }
          fVar11 = 1.0 / fVar11;
          fVar14 = *(float *)(this + 600);
          fVar15 = *(float *)(this + 0x25c);
          fVar17 = *(float *)(this + 0x260);
          fVar8 = fVar16 * fVar13 * fVar11 - fVar14;
          fVar9 = fVar16 * fVar11 * fVar10 - fVar15;
          fVar11 = fVar16 * fVar11 * fVar12 - fVar17;
        }
        else {
          if (fVar16 < SQRT(fVar14)) goto LAB_011b6208;
LAB_011b62c0:
          fVar14 = *(float *)(this + 600);
          fVar15 = *(float *)(this + 0x25c);
          fVar17 = *(float *)(this + 0x260);
        }
        *(float *)(this + 600) = fVar8 + fVar14;
        *(float *)(this + 0x25c) = fVar9 + fVar15;
        *(float *)(this + 0x260) = fVar11 + fVar17;
      }
      fVar12 = fVar8 * fVar8 + fVar9 * fVar9 + fVar11 * fVar11;
      fVar10 = SQRT(fVar12);
      if (NAN(fVar10)) {
        fVar10 = sqrtf(fVar12);
      }
      lVar2 = *(long *)(param_1 + 0xf0);
      fVar12 = 1.0 / fVar10;
      fVar8 = fVar8 * fVar12;
      fVar9 = fVar9 * fVar12;
      fVar11 = fVar11 * fVar12;
      goto joined_r0x011b5f50;
    }
  }
LAB_011b64ec:
LAB_011b64f0:
  local_280 = param_2 + 0x58;
  local_288 = param_1 + 0x50;
  local_290 = param_1 + 0x58;
  local_298 = param_2 + 200;
  pbVar6 = param_2 + 0x54;
  pbVar5 = param_2 + 0x50;
  pbVar7 = param_1 + 0x54;
  fVar8 = *(float *)(param_1 + 0xc0);
  fVar12 = *(float *)(param_1 + 0xc4);
  fVar14 = *(float *)(param_1 + 200);
  fVar10 = *(float *)local_288;
  fVar18 = *(float *)(param_2 + 0xc4);
  fVar13 = *(float *)pbVar7;
  fVar15 = *(float *)local_290;
  fVar16 = *(float *)(param_2 + 0xc0);
  fVar17 = *(float *)pbVar5;
  fVar19 = *(float *)pbVar6;
  fVar9 = *(float *)local_298;
  fVar11 = *(float *)local_280;
  if (this[0x226] != (btConeTwistConstraint)0x0) {
    fVar23 = ((fVar16 + fVar17) - (fVar8 + fVar10)) * *(float *)(this + 0x1e4) +
             ((fVar18 + fVar19) - (fVar12 + fVar13)) * *(float *)(this + 0x1e8) +
             ((fVar9 + fVar11) - (fVar14 + fVar15)) * *(float *)(this + 0x1ec);
    fVar21 = (*(float *)(this + 0x228) * *(float *)(this + 0x210) * *(float *)(this + 0x1c8)) /
             param_3;
    if (0.0 < fVar23) {
      fVar21 = fVar21 + *(float *)(this + 0x228) * fVar23 * *(float *)(this + 0x1cc);
    }
    local_100._0_4_ = *(float *)(this + 0x21c) + fVar21 * *(float *)(this + 0x204);
    local_140 = local_140 & 0xffffffff00000000;
    pfVar1 = (float *)&local_100;
    if ((float)local_100 <= 0.0) {
      pfVar1 = (float *)&local_140;
    }
    fVar30 = *pfVar1 - *(float *)(this + 0x21c);
    fVar21 = fVar30 * *(float *)(this + 0x1e4);
    fVar25 = fVar30 * *(float *)(this + 0x1e8);
    fVar30 = fVar30 * *(float *)(this + 0x1ec);
    fVar23 = fVar21 * *(float *)(this + 0x230) + fVar25 * *(float *)(this + 0x234) +
             fVar30 * *(float *)(this + 0x238);
    fVar21 = fVar21 - *(float *)(this + 0x230) * fVar23;
    fVar25 = fVar25 - *(float *)(this + 0x234) * fVar23;
    fVar30 = fVar30 - *(float *)(this + 0x238) * fVar23;
    fVar28 = fVar30 * fVar30 + fVar21 * fVar21 + fVar25 * fVar25;
    fVar23 = SQRT(fVar28);
    *(float *)(this + 0x21c) = *pfVar1;
    if (NAN(fVar23)) {
      fVar23 = sqrtf(fVar28);
    }
    fVar28 = 1.0 / fVar23;
    fVar21 = fVar28 * fVar21;
    fVar25 = fVar28 * fVar25;
    fVar28 = fVar28 * fVar30;
    if (*(long *)(param_1 + 0xf0) != 0) {
      lVar2 = *(long *)(this + 0x28);
      fVar30 = fVar23 * 0.0;
      fVar35 = *(float *)(lVar2 + 0x124);
      fVar36 = *(float *)(lVar2 + 0x128);
      fVar38 = *(float *)(lVar2 + 0x134);
      fVar40 = *(float *)(lVar2 + 0x138);
      fVar37 = *(float *)(lVar2 + 300);
      fVar32 = *(float *)(lVar2 + 0x144);
      fVar33 = *(float *)(lVar2 + 0x148);
      fVar31 = *(float *)(lVar2 + 0x13c);
      fVar34 = *(float *)(lVar2 + 0x14c);
      *(float *)(param_1 + 0x40) = fVar30 * *(float *)(param_1 + 0x70) + *(float *)(param_1 + 0x40);
      *(float *)(param_1 + 0x44) = fVar30 * *(float *)(param_1 + 0x74) + *(float *)(param_1 + 0x44);
      *(float *)(param_1 + 0x48) = fVar30 * *(float *)(param_1 + 0x78) + *(float *)(param_1 + 0x48);
      *(float *)local_288 =
           (fVar21 * fVar35 + fVar25 * fVar36 + fVar28 * fVar37) *
           fVar23 * *(float *)(param_1 + 0x60) + *(float *)local_288;
      *(float *)pbVar7 =
           (fVar21 * fVar38 + fVar25 * fVar40 + fVar28 * fVar31) *
           fVar23 * *(float *)(param_1 + 100) + *(float *)pbVar7;
      *(float *)local_290 =
           (fVar21 * fVar32 + fVar25 * fVar33 + fVar28 * fVar34) *
           fVar23 * *(float *)(param_1 + 0x68) + *(float *)local_290;
    }
    if (*(long *)(param_2 + 0xf0) != 0) {
      lVar2 = *(long *)(this + 0x30);
      fVar30 = fVar23 * -0.0;
      fVar37 = *(float *)(lVar2 + 0x124);
      fVar31 = *(float *)(lVar2 + 0x134);
      fVar33 = *(float *)(lVar2 + 0x144);
      fVar38 = *(float *)(lVar2 + 0x128);
      fVar32 = *(float *)(lVar2 + 0x138);
      fVar40 = *(float *)(lVar2 + 300);
      fVar35 = *(float *)(lVar2 + 0x148);
      fVar34 = *(float *)(lVar2 + 0x13c);
      fVar36 = *(float *)(lVar2 + 0x14c);
      *(float *)(param_2 + 0x40) = fVar30 * *(float *)(param_2 + 0x70) + *(float *)(param_2 + 0x40);
      *(float *)(param_2 + 0x44) = fVar30 * *(float *)(param_2 + 0x74) + *(float *)(param_2 + 0x44);
      *(float *)(param_2 + 0x48) = fVar30 * *(float *)(param_2 + 0x78) + *(float *)(param_2 + 0x48);
      fVar23 = -fVar23;
      *(float *)pbVar5 =
           (fVar21 * fVar37 + fVar25 * fVar38 + fVar28 * fVar40) *
           *(float *)(param_2 + 0x60) * fVar23 + *(float *)pbVar5;
      *(float *)pbVar6 =
           (fVar21 * fVar31 + fVar25 * fVar32 + fVar28 * fVar34) *
           *(float *)(param_2 + 100) * fVar23 + *(float *)pbVar6;
      *(float *)local_280 =
           (fVar21 * fVar33 + fVar25 * fVar35 + fVar28 * fVar36) *
           *(float *)(param_2 + 0x68) * fVar23 + *(float *)local_280;
    }
  }
  if (this[0x225] != (btConeTwistConstraint)0x0) {
    fVar25 = *(float *)(this + 500);
    fVar23 = *(float *)(this + 0x1f8);
    fVar21 = *(float *)(this + 0x1fc);
    fVar9 = ((fVar16 + fVar17) - (fVar8 + fVar10)) * fVar25 +
            ((fVar18 + fVar19) - (fVar12 + fVar13)) * fVar23 +
            ((fVar9 + fVar11) - (fVar14 + fVar15)) * fVar21;
    fVar8 = (*(float *)(this + 0x22c) * *(float *)(this + 0x214) * *(float *)(this + 0x1c8)) /
            param_3;
    if (0.0 < fVar9) {
      fVar8 = fVar8 + *(float *)(this + 0x22c) * fVar9 * *(float *)(this + 0x1cc);
    }
    fVar9 = *(float *)(this + 0x220);
    fVar8 = fVar9 + fVar8 * *(float *)(this + 0x208);
    local_140 = (ulong)local_140._4_4_ << 0x20;
    local_100 = CONCAT44(local_100._4_4_,fVar8);
    pfVar1 = (float *)&local_100;
    if (fVar8 <= 0.0) {
      pfVar1 = (float *)&local_140;
    }
    fVar8 = *pfVar1;
    *(float *)(this + 0x220) = fVar8;
    fVar8 = fVar8 - fVar9;
    if (*(long *)(param_1 + 0xf0) != 0) {
      lVar2 = *(long *)(this + 0x28);
      fVar9 = fVar8 * 0.0;
      fVar14 = *(float *)(lVar2 + 0x124);
      fVar17 = *(float *)(lVar2 + 0x134);
      fVar18 = *(float *)(lVar2 + 0x138);
      fVar11 = *(float *)(lVar2 + 0x144);
      fVar15 = *(float *)(lVar2 + 0x128);
      fVar10 = *(float *)(lVar2 + 0x13c);
      fVar16 = *(float *)(lVar2 + 300);
      fVar12 = *(float *)(lVar2 + 0x148);
      fVar13 = *(float *)(lVar2 + 0x14c);
      *(float *)(param_1 + 0x40) = fVar9 * *(float *)(param_1 + 0x70) + *(float *)(param_1 + 0x40);
      *(float *)(param_1 + 0x44) = fVar9 * *(float *)(param_1 + 0x74) + *(float *)(param_1 + 0x44);
      *(float *)(param_1 + 0x48) = fVar9 * *(float *)(param_1 + 0x78) + *(float *)(param_1 + 0x48);
      *(float *)local_288 =
           (fVar25 * fVar14 + fVar23 * fVar15 + fVar21 * fVar16) *
           fVar8 * *(float *)(param_1 + 0x60) + *(float *)local_288;
      *(float *)pbVar7 =
           (fVar25 * fVar17 + fVar23 * fVar18 + fVar21 * fVar10) * fVar8 * *(float *)(param_1 + 100)
           + *(float *)pbVar7;
      *(float *)local_290 =
           (fVar25 * fVar11 + fVar23 * fVar12 + fVar21 * fVar13) *
           fVar8 * *(float *)(param_1 + 0x68) + *(float *)local_290;
      fVar25 = *(float *)(this + 500);
      fVar23 = *(float *)(this + 0x1f8);
      fVar21 = *(float *)(this + 0x1fc);
    }
    if (*(long *)(param_2 + 0xf0) != 0) {
      lVar2 = *(long *)(this + 0x30);
      fVar9 = fVar8 * -0.0;
      fVar16 = *(float *)(lVar2 + 0x124);
      fVar10 = *(float *)(lVar2 + 0x134);
      fVar12 = *(float *)(lVar2 + 0x144);
      fVar17 = *(float *)(lVar2 + 0x128);
      fVar11 = *(float *)(lVar2 + 0x138);
      fVar18 = *(float *)(lVar2 + 300);
      fVar14 = *(float *)(lVar2 + 0x148);
      fVar13 = *(float *)(lVar2 + 0x13c);
      fVar15 = *(float *)(lVar2 + 0x14c);
      *(float *)(param_2 + 0x40) = fVar9 * *(float *)(param_2 + 0x70) + *(float *)(param_2 + 0x40);
      *(float *)(param_2 + 0x44) = fVar9 * *(float *)(param_2 + 0x74) + *(float *)(param_2 + 0x44);
      *(float *)(param_2 + 0x48) = fVar9 * *(float *)(param_2 + 0x78) + *(float *)(param_2 + 0x48);
      fVar8 = -fVar8;
      *(float *)pbVar5 =
           (fVar25 * fVar16 + fVar23 * fVar17 + fVar21 * fVar18) *
           *(float *)(param_2 + 0x60) * fVar8 + *(float *)pbVar5;
      *(float *)pbVar6 =
           (fVar25 * fVar10 + fVar23 * fVar11 + fVar21 * fVar13) * *(float *)(param_2 + 100) * fVar8
           + *(float *)pbVar6;
      *(float *)local_280 =
           (fVar25 * fVar12 + fVar23 * fVar14 + fVar21 * fVar15) *
           *(float *)(param_2 + 0x68) * fVar8 + *(float *)local_280;
    }
  }
  return;
}

