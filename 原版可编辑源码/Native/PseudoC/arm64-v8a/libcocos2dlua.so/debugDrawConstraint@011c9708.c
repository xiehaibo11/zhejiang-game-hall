
/* btDiscreteDynamicsWorld::debugDrawConstraint(btTypedConstraint*) */

void __thiscall
btDiscreteDynamicsWorld::debugDrawConstraint
          (btDiscreteDynamicsWorld *this,btTypedConstraint *param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  btTypedConstraint *pbVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
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
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  float local_120;
  float fStack_11c;
  float local_118;
  undefined4 local_114;
  undefined8 local_110;
  ulong local_108;
  undefined8 local_100;
  ulong uStack_f8;
  undefined8 local_f0;
  ulong uStack_e8;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  float fStack_d0;
  float fStack_cc;
  ulong uStack_c8;
  undefined8 local_c0;
  float fStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  
  plVar3 = (long *)(**(code **)(*(long *)this + 0x28))();
  uVar1 = (**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*(long *)this + 0x28))(this);
  uVar2 = (**(code **)(*plVar3 + 0x60))();
  fVar24 = *(float *)(param_1 + 0x3c);
  if (fVar24 <= 0.0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 3:
    local_e0 = 1.0;
    fStack_dc = 0.0;
    fStack_d8 = 0.0;
    uStack_d4 = 0;
    fStack_d0 = 0.0;
    fStack_cc = 1.0;
    uStack_c8 = 0;
    local_c0 = 0;
    fStack_b8 = 1.0;
    uStack_b4 = 0;
    lVar9 = *(long *)(param_1 + 0x28);
    fVar12 = *(float *)(param_1 + 0x144);
    fVar13 = *(float *)(param_1 + 0x148);
    fVar14 = *(float *)(param_1 + 0x14c);
    fStack_b0 = fVar12 * *(float *)(lVar9 + 8) + fVar13 * *(float *)(lVar9 + 0xc) +
                fVar14 * *(float *)(lVar9 + 0x10) + *(float *)(lVar9 + 0x38);
    fStack_ac = fVar12 * *(float *)(lVar9 + 0x18) + fVar13 * *(float *)(lVar9 + 0x1c) +
                fVar14 * *(float *)(lVar9 + 0x20) + *(float *)(lVar9 + 0x3c);
    fStack_a8 = fVar12 * *(float *)(lVar9 + 0x28) + fVar13 * *(float *)(lVar9 + 0x2c) +
                fVar14 * *(float *)(lVar9 + 0x30) + *(float *)(lVar9 + 0x40);
    uStack_a4 = 0;
    plVar3 = (long *)(**(code **)(*(long *)this + 0x28))(this);
    (**(code **)(*plVar3 + 0x70))(fVar24,plVar3,&local_e0);
    lVar9 = *(long *)(param_1 + 0x30);
    fVar12 = *(float *)(param_1 + 0x154);
    fVar13 = *(float *)(param_1 + 0x158);
    fVar14 = *(float *)(param_1 + 0x15c);
    fStack_b0 = fVar12 * *(float *)(lVar9 + 8) + fVar13 * *(float *)(lVar9 + 0xc) +
                fVar14 * *(float *)(lVar9 + 0x10) + *(float *)(lVar9 + 0x38);
    fStack_ac = fVar12 * *(float *)(lVar9 + 0x18) + fVar13 * *(float *)(lVar9 + 0x1c) +
                fVar14 * *(float *)(lVar9 + 0x20) + *(float *)(lVar9 + 0x3c);
    fStack_a8 = fVar12 * *(float *)(lVar9 + 0x28) + fVar13 * *(float *)(lVar9 + 0x2c) +
                fVar14 * *(float *)(lVar9 + 0x30) + *(float *)(lVar9 + 0x40);
    uStack_a4 = 0;
    if ((uVar1 >> 0xb & 1) == 0) {
      return;
    }
    plVar3 = (long *)(**(code **)(*(long *)this + 0x28))(this);
    (**(code **)(*plVar3 + 0x70))(fVar24,plVar3,&local_e0);
    return;
  case 4:
    lVar9 = *(long *)(param_1 + 0x28);
    fVar15 = *(float *)(param_1 + 0x240);
    fVar14 = *(float *)(param_1 + 0x250);
    fVar12 = *(float *)(param_1 + 0x260);
    fVar28 = *(float *)(lVar9 + 8);
    fVar30 = *(float *)(lVar9 + 0xc);
    fVar32 = *(float *)(lVar9 + 0x10);
    fVar23 = *(float *)(param_1 + 0x244);
    fVar20 = *(float *)(param_1 + 0x254);
    fVar22 = *(float *)(param_1 + 0x264);
    fVar26 = *(float *)(param_1 + 0x248);
    fVar31 = *(float *)(param_1 + 600);
    fVar29 = *(float *)(param_1 + 0x268);
    fVar25 = *(float *)(param_1 + 0x270);
    fVar27 = *(float *)(param_1 + 0x274);
    fVar33 = *(float *)(lVar9 + 0x18);
    fVar34 = *(float *)(lVar9 + 0x1c);
    fVar35 = *(float *)(lVar9 + 0x20);
    fVar36 = *(float *)(lVar9 + 0x28);
    fVar38 = *(float *)(lVar9 + 0x2c);
    fVar39 = *(float *)(lVar9 + 0x30);
    fVar13 = *(float *)(param_1 + 0x278);
    local_e0 = fVar15 * fVar28 + fVar14 * fVar30 + fVar12 * fVar32;
    fStack_dc = fVar28 * fVar23 + fVar30 * fVar20 + fVar32 * fVar22;
    fStack_d8 = fVar28 * fVar26 + fVar30 * fVar31 + fVar32 * fVar29;
    fStack_d0 = fVar15 * fVar33 + fVar14 * fVar34 + fVar12 * fVar35;
    fStack_cc = fVar23 * fVar33 + fVar20 * fVar34 + fVar22 * fVar35;
    fStack_b8 = fVar26 * fVar36 + fVar31 * fVar38 + fVar29 * fVar39;
    fStack_b0 = *(float *)(lVar9 + 0x38) + fVar28 * fVar25 + fVar30 * fVar27 + fVar32 * fVar13;
    fStack_ac = fVar33 * fVar25 + fVar34 * fVar27 + fVar35 * fVar13 + *(float *)(lVar9 + 0x3c);
    fStack_a8 = fVar36 * fVar25 + fVar38 * fVar27 + fVar39 * fVar13 + *(float *)(lVar9 + 0x40);
    uStack_d4 = 0;
    uStack_c8 = (ulong)(uint)(fVar26 * fVar33 + fVar31 * fVar34 + fVar29 * fVar35);
    local_c0 = CONCAT44(fVar23 * fVar36 + fVar20 * fVar38 + fVar22 * fVar39,
                        fVar15 * fVar36 + fVar14 * fVar38 + fVar12 * fVar39);
    uStack_b4 = 0;
    uStack_a4 = 0;
    if ((uVar1 >> 0xb & 1) == 0) {
      lVar9 = *(long *)(param_1 + 0x30);
      fVar20 = *(float *)(param_1 + 0x280);
      fVar14 = *(float *)(param_1 + 0x290);
      fVar12 = *(float *)(param_1 + 0x2a0);
      fVar28 = *(float *)(lVar9 + 8);
      fVar30 = *(float *)(lVar9 + 0xc);
      fVar32 = *(float *)(lVar9 + 0x10);
      fVar23 = *(float *)(param_1 + 0x284);
      fVar15 = *(float *)(param_1 + 0x294);
      fVar22 = *(float *)(param_1 + 0x2a4);
      fVar26 = *(float *)(param_1 + 0x288);
      fVar31 = *(float *)(param_1 + 0x298);
      fVar29 = *(float *)(param_1 + 0x2a8);
      fVar25 = *(float *)(param_1 + 0x2b0);
      fVar27 = *(float *)(param_1 + 0x2b4);
      fVar33 = *(float *)(lVar9 + 0x18);
      fVar34 = *(float *)(lVar9 + 0x1c);
      fVar35 = *(float *)(lVar9 + 0x20);
      fVar36 = *(float *)(lVar9 + 0x28);
      fVar38 = *(float *)(lVar9 + 0x2c);
      fVar39 = *(float *)(lVar9 + 0x30);
      fVar13 = *(float *)(param_1 + 0x2b8);
      local_e0 = fVar20 * fVar28 + fVar14 * fVar30 + fVar12 * fVar32;
      fStack_dc = fVar28 * fVar23 + fVar30 * fVar15 + fVar32 * fVar22;
      fStack_d8 = fVar28 * fVar26 + fVar30 * fVar31 + fVar32 * fVar29;
      fStack_d0 = fVar20 * fVar33 + fVar14 * fVar34 + fVar12 * fVar35;
      fStack_cc = fVar23 * fVar33 + fVar15 * fVar34 + fVar22 * fVar35;
      fStack_b8 = fVar26 * fVar36 + fVar31 * fVar38 + fVar29 * fVar39;
      fStack_b0 = *(float *)(lVar9 + 0x38) + fVar28 * fVar25 + fVar30 * fVar27 + fVar32 * fVar13;
      fStack_ac = fVar33 * fVar25 + fVar34 * fVar27 + fVar35 * fVar13 + *(float *)(lVar9 + 0x3c);
      fStack_a8 = fVar36 * fVar25 + fVar38 * fVar27 + fVar39 * fVar13 + *(float *)(lVar9 + 0x40);
      uStack_d4 = 0;
      uStack_c8 = (ulong)(uint)(fVar26 * fVar33 + fVar31 * fVar34 + fVar29 * fVar35);
      local_c0 = CONCAT44(fVar23 * fVar36 + fVar15 * fVar38 + fVar22 * fVar39,
                          fVar20 * fVar36 + fVar14 * fVar38 + fVar12 * fVar39);
      uStack_b4 = 0;
      uStack_a4 = 0;
    }
    else {
      plVar3 = (long *)(**(code **)(*(long *)this + 0x28))(this);
      (**(code **)(*plVar3 + 0x70))(fVar24,plVar3,&local_e0);
      lVar9 = *(long *)(param_1 + 0x30);
      fVar15 = *(float *)(param_1 + 0x280);
      fVar14 = *(float *)(param_1 + 0x290);
      fVar12 = *(float *)(param_1 + 0x2a0);
      fVar28 = *(float *)(lVar9 + 8);
      fVar30 = *(float *)(lVar9 + 0xc);
      fVar32 = *(float *)(lVar9 + 0x10);
      fVar23 = *(float *)(param_1 + 0x284);
      fVar20 = *(float *)(param_1 + 0x294);
      fVar22 = *(float *)(param_1 + 0x2a4);
      fVar26 = *(float *)(param_1 + 0x288);
      fVar31 = *(float *)(param_1 + 0x298);
      fVar29 = *(float *)(param_1 + 0x2a8);
      fVar25 = *(float *)(param_1 + 0x2b0);
      fVar27 = *(float *)(param_1 + 0x2b4);
      fVar33 = *(float *)(lVar9 + 0x18);
      fVar34 = *(float *)(lVar9 + 0x1c);
      fVar35 = *(float *)(lVar9 + 0x20);
      fVar36 = *(float *)(lVar9 + 0x28);
      fVar38 = *(float *)(lVar9 + 0x2c);
      fVar39 = *(float *)(lVar9 + 0x30);
      fVar13 = *(float *)(param_1 + 0x2b8);
      fStack_dc = fVar28 * fVar23 + fVar30 * fVar20 + fVar32 * fVar22;
      fStack_d8 = fVar28 * fVar26 + fVar30 * fVar31 + fVar32 * fVar29;
      fStack_d0 = fVar15 * fVar33 + fVar14 * fVar34 + fVar12 * fVar35;
      local_e0 = fVar15 * fVar28 + fVar14 * fVar30 + fVar12 * fVar32;
      fStack_cc = fVar23 * fVar33 + fVar20 * fVar34 + fVar22 * fVar35;
      fStack_b8 = fVar26 * fVar36 + fVar31 * fVar38 + fVar29 * fVar39;
      fStack_b0 = *(float *)(lVar9 + 0x38) + fVar28 * fVar25 + fVar30 * fVar27 + fVar32 * fVar13;
      fStack_ac = fVar33 * fVar25 + fVar34 * fVar27 + fVar35 * fVar13 + *(float *)(lVar9 + 0x3c);
      fStack_a8 = fVar36 * fVar25 + fVar38 * fVar27 + fVar39 * fVar13 + *(float *)(lVar9 + 0x40);
      uStack_d4 = 0;
      uStack_c8 = (ulong)(uint)(fVar26 * fVar33 + fVar31 * fVar34 + fVar29 * fVar35);
      local_c0 = CONCAT44(fVar23 * fVar36 + fVar20 * fVar38 + fVar22 * fVar39,
                          fVar15 * fVar36 + fVar14 * fVar38 + fVar12 * fVar39);
      uStack_b4 = 0;
      uStack_a4 = 0;
      plVar3 = (long *)(**(code **)(*(long *)this + 0x28))(this);
      (**(code **)(*plVar3 + 0x70))(fVar24,plVar3,&local_e0);
    }
    fVar14 = (float)btAngularLimit::getLow((btAngularLimit *)(param_1 + 0x2c8));
    fVar15 = (float)btAngularLimit::getHigh((btAngularLimit *)(param_1 + 0x2c8));
    if (fVar14 == fVar15) {
      return;
    }
    if ((uVar2 >> 0xc & 1) == 0) {
      return;
    }
    local_f0 = CONCAT44((float)uStack_c8,fStack_d8);
    uStack_e8 = (ulong)(uint)fStack_b8;
    local_100 = CONCAT44(fStack_d0,local_e0);
    uStack_f8 = local_c0 & 0xffffffff;
    fVar12 = 0.0;
    if (fVar14 <= fVar15) {
      fVar12 = fVar14;
    }
    bVar7 = fVar14 <= fVar15;
    fVar13 = 6.2831855;
    if (fVar14 <= fVar15) {
      fVar13 = fVar15;
    }
    pbVar4 = (btTypedConstraint *)&fStack_b0;
    plVar3 = (long *)(**(code **)(*(long *)this + 0x28))(this);
    puVar5 = &local_f0;
    pfVar11 = (float *)&local_100;
    pcVar10 = *(code **)(*plVar3 + 0x78);
    local_110 = 0;
    local_108 = 0;
    puVar6 = &local_110;
    break;
  case 5:
    lVar9 = *(long *)(param_1 + 0x28);
    fVar15 = *(float *)(param_1 + 0x144);
    fVar14 = *(float *)(param_1 + 0x154);
    fVar12 = *(float *)(param_1 + 0x164);
    fVar28 = *(float *)(lVar9 + 8);
    fVar30 = *(float *)(lVar9 + 0xc);
    fVar32 = *(float *)(lVar9 + 0x10);
    fVar23 = *(float *)(param_1 + 0x148);
    fVar20 = *(float *)(param_1 + 0x158);
    fVar22 = *(float *)(param_1 + 0x168);
    fVar26 = *(float *)(param_1 + 0x14c);
    fVar31 = *(float *)(param_1 + 0x15c);
    fVar29 = *(float *)(param_1 + 0x16c);
    fVar25 = *(float *)(param_1 + 0x174);
    fVar27 = *(float *)(param_1 + 0x178);
    fVar33 = *(float *)(lVar9 + 0x18);
    fVar34 = *(float *)(lVar9 + 0x1c);
    fVar35 = *(float *)(lVar9 + 0x20);
    fVar36 = *(float *)(lVar9 + 0x28);
    fVar38 = *(float *)(lVar9 + 0x2c);
    fVar39 = *(float *)(lVar9 + 0x30);
    fVar13 = *(float *)(param_1 + 0x17c);
    local_e0 = fVar15 * fVar28 + fVar14 * fVar30 + fVar12 * fVar32;
    fStack_dc = fVar28 * fVar23 + fVar30 * fVar20 + fVar32 * fVar22;
    fStack_d8 = fVar28 * fVar26 + fVar30 * fVar31 + fVar32 * fVar29;
    fStack_d0 = fVar15 * fVar33 + fVar14 * fVar34 + fVar12 * fVar35;
    fStack_cc = fVar23 * fVar33 + fVar20 * fVar34 + fVar22 * fVar35;
    fStack_b8 = fVar26 * fVar36 + fVar31 * fVar38 + fVar29 * fVar39;
    fStack_b0 = *(float *)(lVar9 + 0x38) + fVar28 * fVar25 + fVar30 * fVar27 + fVar32 * fVar13;
    fStack_ac = fVar33 * fVar25 + fVar34 * fVar27 + fVar35 * fVar13 + *(float *)(lVar9 + 0x3c);
    fStack_a8 = fVar36 * fVar25 + fVar38 * fVar27 + fVar39 * fVar13 + *(float *)(lVar9 + 0x40);
    uStack_d4 = 0;
    uStack_c8 = (ulong)(uint)(fVar26 * fVar33 + fVar31 * fVar34 + fVar29 * fVar35);
    local_c0 = CONCAT44(fVar23 * fVar36 + fVar20 * fVar38 + fVar22 * fVar39,
                        fVar15 * fVar36 + fVar14 * fVar38 + fVar12 * fVar39);
    uStack_b4 = 0;
    uStack_a4 = 0;
    if ((uVar1 >> 0xb & 1) == 0) {
      lVar9 = *(long *)(param_1 + 0x30);
      fVar20 = *(float *)(param_1 + 0x184);
      fVar14 = *(float *)(param_1 + 0x194);
      fVar12 = *(float *)(param_1 + 0x1a4);
      fVar28 = *(float *)(lVar9 + 8);
      fVar30 = *(float *)(lVar9 + 0xc);
      fVar32 = *(float *)(lVar9 + 0x10);
      fVar23 = *(float *)(param_1 + 0x188);
      fVar15 = *(float *)(param_1 + 0x198);
      fVar22 = *(float *)(param_1 + 0x1a8);
      fVar26 = *(float *)(param_1 + 0x18c);
      fVar31 = *(float *)(param_1 + 0x19c);
      fVar29 = *(float *)(param_1 + 0x1ac);
      fVar25 = *(float *)(param_1 + 0x1b4);
      fVar27 = *(float *)(param_1 + 0x1b8);
      fVar33 = *(float *)(lVar9 + 0x18);
      fVar34 = *(float *)(lVar9 + 0x1c);
      fVar35 = *(float *)(lVar9 + 0x20);
      fVar36 = *(float *)(lVar9 + 0x28);
      fVar38 = *(float *)(lVar9 + 0x2c);
      fVar39 = *(float *)(lVar9 + 0x30);
      fVar13 = *(float *)(param_1 + 0x1bc);
      local_e0 = fVar20 * fVar28 + fVar14 * fVar30 + fVar12 * fVar32;
      fStack_dc = fVar28 * fVar23 + fVar30 * fVar15 + fVar32 * fVar22;
      local_c0._4_4_ = fVar23 * fVar36 + fVar15 * fVar38 + fVar22 * fVar39;
      fStack_d8 = fVar28 * fVar26 + fVar30 * fVar31 + fVar32 * fVar29;
      fStack_d0 = fVar20 * fVar33 + fVar14 * fVar34 + fVar12 * fVar35;
      fStack_cc = fVar23 * fVar33 + fVar15 * fVar34 + fVar22 * fVar35;
      local_c0._0_4_ = fVar20 * fVar36 + fVar14 * fVar38 + fVar12 * fVar39;
      fStack_b8 = fVar26 * fVar36 + fVar31 * fVar38 + fVar29 * fVar39;
      fVar12 = *(float *)(lVar9 + 0x38) + fVar28 * fVar25 + fVar30 * fVar27 + fVar32 * fVar13;
      fStack_ac = fVar33 * fVar25 + fVar34 * fVar27 + fVar35 * fVar13 + *(float *)(lVar9 + 0x3c);
      fStack_a8 = fVar36 * fVar25 + fVar38 * fVar27 + fVar39 * fVar13 + *(float *)(lVar9 + 0x40);
      uStack_d4 = 0;
      uStack_c8 = (ulong)(uint)(fVar26 * fVar33 + fVar31 * fVar34 + fVar29 * fVar35);
      uStack_b4 = 0;
      uStack_a4 = 0;
      fStack_b0 = fVar12;
    }
    else {
      plVar3 = (long *)(**(code **)(*(long *)this + 0x28))(this);
      (**(code **)(*plVar3 + 0x70))(fVar24,plVar3,&local_e0);
      lVar9 = *(long *)(param_1 + 0x30);
      fVar15 = *(float *)(param_1 + 0x184);
      fVar14 = *(float *)(param_1 + 0x194);
      fVar12 = *(float *)(param_1 + 0x1a4);
      fVar28 = *(float *)(lVar9 + 8);
      fVar30 = *(float *)(lVar9 + 0xc);
      fVar32 = *(float *)(lVar9 + 0x10);
      fVar23 = *(float *)(param_1 + 0x188);
      fVar20 = *(float *)(param_1 + 0x198);
      fVar22 = *(float *)(param_1 + 0x1a8);
      fVar26 = *(float *)(param_1 + 0x18c);
      fVar31 = *(float *)(param_1 + 0x19c);
      fVar29 = *(float *)(param_1 + 0x1ac);
      fVar25 = *(float *)(param_1 + 0x1b4);
      fVar27 = *(float *)(param_1 + 0x1b8);
      fVar33 = *(float *)(lVar9 + 0x18);
      fVar34 = *(float *)(lVar9 + 0x1c);
      fVar35 = *(float *)(lVar9 + 0x20);
      fVar36 = *(float *)(lVar9 + 0x28);
      fVar38 = *(float *)(lVar9 + 0x2c);
      fVar39 = *(float *)(lVar9 + 0x30);
      fVar13 = *(float *)(param_1 + 0x1bc);
      fStack_dc = fVar28 * fVar23 + fVar30 * fVar20 + fVar32 * fVar22;
      local_c0._4_4_ = fVar23 * fVar36 + fVar20 * fVar38 + fVar22 * fVar39;
      fStack_d8 = fVar28 * fVar26 + fVar30 * fVar31 + fVar32 * fVar29;
      fStack_d0 = fVar15 * fVar33 + fVar14 * fVar34 + fVar12 * fVar35;
      local_e0 = fVar15 * fVar28 + fVar14 * fVar30 + fVar12 * fVar32;
      fStack_cc = fVar23 * fVar33 + fVar20 * fVar34 + fVar22 * fVar35;
      local_c0._0_4_ = fVar15 * fVar36 + fVar14 * fVar38 + fVar12 * fVar39;
      fStack_b8 = fVar26 * fVar36 + fVar31 * fVar38 + fVar29 * fVar39;
      fStack_b0 = *(float *)(lVar9 + 0x38) + fVar28 * fVar25 + fVar30 * fVar27 + fVar32 * fVar13;
      fStack_ac = fVar33 * fVar25 + fVar34 * fVar27 + fVar35 * fVar13 + *(float *)(lVar9 + 0x3c);
      fStack_a8 = fVar36 * fVar25 + fVar38 * fVar27 + fVar39 * fVar13 + *(float *)(lVar9 + 0x40);
      uStack_d4 = 0;
      uStack_c8 = (ulong)(uint)(fVar26 * fVar33 + fVar31 * fVar34 + fVar29 * fVar35);
      uStack_b4 = 0;
      uStack_a4 = 0;
      fVar12 = fStack_b0;
      plVar3 = (long *)(**(code **)(*(long *)this + 0x28))(this);
      (**(code **)(*plVar3 + 0x70))(fVar24,plVar3,&local_e0);
    }
    if ((uVar2 >> 0xc & 1) == 0) {
      return;
    }
    fVar13 = fVar24;
    fVar14 = (float)btConeTwistConstraint::GetPointForAngle
                              ((btConeTwistConstraint *)param_1,6.0868354,fVar24);
    uVar16 = (ulong)(uint)fStack_a8;
    uVar1 = 0;
    local_f0 = CONCAT44(fVar14 * fStack_d0 + fVar13 * fStack_cc + fVar12 * (float)uStack_c8 +
                        fStack_ac,
                        fVar14 * local_e0 + fVar13 * fStack_dc + fVar12 * fStack_d8 + fStack_b0);
    uStack_e8 = (ulong)(uint)(fVar14 * (float)local_c0 + fVar13 * local_c0._4_4_ +
                              fVar12 * fStack_b8 + fStack_a8);
    do {
      fVar14 = (float)uVar16;
      fVar12 = fVar24;
      fVar13 = (float)btConeTwistConstraint::GetPointForAngle
                                ((btConeTwistConstraint *)param_1,
                                 (float)(int)uVar1 * 6.283185 * 0.03125,fVar24);
      fVar15 = fVar13 * fStack_d0 + fVar12 * fStack_cc + fVar14 * (float)uStack_c8 + fStack_ac;
      uVar16 = (ulong)(uint)fVar15;
      local_100 = CONCAT44(fVar15,fVar13 * local_e0 + fVar12 * fStack_dc + fVar14 * fStack_d8 +
                                  fStack_b0);
      uStack_f8 = (ulong)(uint)(fVar13 * (float)local_c0 + fVar12 * local_c0._4_4_ +
                                fVar14 * fStack_b8 + fStack_a8);
      plVar3 = (long *)(**(code **)(*(long *)this + 0x28))(this);
      local_110 = 0;
      local_108 = 0;
      (**(code **)(*plVar3 + 0x10))(plVar3,&local_f0,&local_100,&local_110);
      if ((uVar1 & 3) == 0) {
        plVar3 = (long *)(**(code **)(*(long *)this + 0x28))(this);
        local_110 = 0;
        local_108 = 0;
        (**(code **)(*plVar3 + 0x10))(plVar3,&fStack_b0,&local_100,&local_110);
      }
      uStack_e8 = uStack_f8;
      local_f0 = local_100;
      uVar1 = uVar1 + 1;
    } while (uVar1 != 0x20);
    lVar9 = *(long *)(param_1 + 0x30);
    fVar13 = *(float *)(param_1 + 0x1dc);
    fVar14 = *(float *)(param_1 + 0x218);
    if (*(float *)(lVar9 + 0x174) <= 0.0) {
      lVar9 = *(long *)(param_1 + 0x28);
      pfVar11 = (float *)(lVar9 + 8);
      fVar12 = *pfVar11;
      fVar23 = *(float *)(param_1 + 0x148);
      fVar26 = *(float *)(param_1 + 0x158);
      fVar15 = *(float *)(param_1 + 0x144);
      fVar32 = *(float *)(lVar9 + 0xc);
      fVar34 = *(float *)(lVar9 + 0x10);
      fVar20 = *(float *)(param_1 + 0x154);
      fVar29 = *(float *)(param_1 + 0x14c);
      fVar31 = *(float *)(param_1 + 0x15c);
      fVar35 = *(float *)(lVar9 + 0x18);
      fVar36 = *(float *)(lVar9 + 0x1c);
      fVar38 = *(float *)(lVar9 + 0x28);
      fVar39 = *(float *)(lVar9 + 0x2c);
      fVar25 = *(float *)(param_1 + 0x174);
      fVar30 = *(float *)(param_1 + 0x178);
      fVar40 = *(float *)(param_1 + 0x168);
      fVar37 = *(float *)(param_1 + 0x164);
      fVar41 = *(float *)(param_1 + 0x16c);
      fVar42 = *(float *)(param_1 + 0x17c);
      fVar22 = *(float *)(lVar9 + 0x20);
      fVar28 = *(float *)(lVar9 + 0x30);
      fVar27 = fVar38 * fVar25 + fVar39 * fVar30;
      local_120 = fVar12 * fVar23 + fVar32 * fVar26 + fVar34 * fVar40;
      local_e0 = fVar15 * fVar12 + fVar20 * fVar32 + fVar37 * fVar34;
      fStack_d8 = fVar12 * fVar29 + fVar32 * fVar31 + fVar34 * fVar41;
      fStack_d0 = fVar15 * fVar35 + fVar20 * fVar36 + fVar37 * fVar22;
      fStack_11c = fVar23 * fVar35 + fVar26 * fVar36 + fVar40 * fVar22;
      fVar33 = fVar29 * fVar35 + fVar31 * fVar36 + fVar41 * fVar22;
      fVar15 = fVar15 * fVar38 + fVar20 * fVar39 + fVar37 * fVar28;
      local_118 = fVar23 * fVar38 + fVar26 * fVar39 + fVar40 * fVar28;
      fStack_b8 = fVar29 * fVar38 + fVar31 * fVar39 + fVar41 * fVar28;
      fStack_b0 = fVar12 * fVar25 + fVar32 * fVar30 + fVar34 * fVar42;
      fStack_ac = fVar35 * fVar25 + fVar36 * fVar30 + fVar22 * fVar42;
      fVar28 = fVar28 * fVar42;
    }
    else {
      pfVar11 = (float *)(lVar9 + 8);
      fVar20 = *pfVar11;
      fVar23 = *(float *)(param_1 + 0x188);
      fVar22 = *(float *)(param_1 + 0x198);
      fVar15 = *(float *)(param_1 + 0x184);
      fVar32 = *(float *)(lVar9 + 0xc);
      fVar34 = *(float *)(lVar9 + 0x10);
      fVar12 = *(float *)(param_1 + 0x194);
      fVar26 = *(float *)(param_1 + 0x18c);
      fVar29 = *(float *)(param_1 + 0x19c);
      fVar31 = *(float *)(param_1 + 0x1b4);
      fVar30 = *(float *)(param_1 + 0x1b8);
      fVar35 = *(float *)(lVar9 + 0x18);
      fVar36 = *(float *)(lVar9 + 0x1c);
      fVar38 = *(float *)(lVar9 + 0x28);
      fVar39 = *(float *)(lVar9 + 0x2c);
      fVar37 = *(float *)(param_1 + 0x1a4);
      fVar40 = *(float *)(param_1 + 0x1a8);
      fVar41 = *(float *)(param_1 + 0x1ac);
      fVar42 = *(float *)(param_1 + 0x1bc);
      fVar25 = *(float *)(lVar9 + 0x20);
      fVar28 = *(float *)(lVar9 + 0x30);
      fVar27 = fVar38 * fVar31 + fVar39 * fVar30;
      local_e0 = fVar15 * fVar20 + fVar12 * fVar32 + fVar37 * fVar34;
      local_120 = fVar20 * fVar23 + fVar32 * fVar22 + fVar34 * fVar40;
      fStack_d8 = fVar20 * fVar26 + fVar32 * fVar29 + fVar34 * fVar41;
      fStack_d0 = fVar15 * fVar35 + fVar12 * fVar36 + fVar37 * fVar25;
      fStack_11c = fVar23 * fVar35 + fVar22 * fVar36 + fVar40 * fVar25;
      fVar33 = fVar26 * fVar35 + fVar29 * fVar36 + fVar41 * fVar25;
      fVar15 = fVar15 * fVar38 + fVar12 * fVar39 + fVar37 * fVar28;
      local_118 = fVar23 * fVar38 + fVar22 * fVar39 + fVar40 * fVar28;
      fStack_b8 = fVar26 * fVar38 + fVar29 * fVar39 + fVar41 * fVar28;
      fStack_b0 = fVar20 * fVar31 + fVar32 * fVar30 + fVar34 * fVar42;
      fStack_ac = fVar35 * fVar31 + fVar36 * fVar30 + fVar25 * fVar42;
      fVar28 = fVar28 * fVar42;
    }
    local_c0 = CONCAT44(local_118,fVar15);
    local_110 = CONCAT44(fStack_d0,local_e0);
    fStack_b0 = fStack_b0 + pfVar11[0xc];
    fStack_ac = fStack_ac + pfVar11[0xd];
    fStack_a8 = fVar28 + fVar27 + pfVar11[0xe];
    uStack_d4 = 0;
    uStack_c8 = (ulong)(uint)fVar33;
    uStack_b4 = 0;
    uStack_a4 = 0;
    uStack_f8 = (ulong)(uint)fStack_a8;
    local_100 = CONCAT44(fStack_ac,fStack_b0);
    local_108 = (ulong)(uint)fVar15;
    local_114 = 0;
    fStack_dc = local_120;
    fStack_cc = fStack_11c;
    plVar3 = (long *)(**(code **)(*(long *)this + 0x28))(this);
    fVar12 = -fVar14 - fVar13;
    fVar13 = fVar13 - fVar14;
    pcVar10 = *(code **)(*plVar3 + 0x78);
    local_130 = 0;
    uStack_128 = 0;
    pbVar4 = (btTypedConstraint *)&local_100;
    puVar5 = &local_110;
    pfVar11 = &local_120;
    puVar6 = &local_130;
    bVar7 = true;
    break;
  case 6:
  case 9:
    fStack_d8 = (float)*(undefined8 *)(param_1 + 0x448);
    uStack_d4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x448) >> 0x20);
    local_e0 = (float)*(undefined8 *)(param_1 + 0x440);
    fStack_dc = (float)((ulong)*(undefined8 *)(param_1 + 0x440) >> 0x20);
    uStack_c8 = *(ulong *)(param_1 + 0x458);
    fStack_d0 = (float)*(undefined8 *)(param_1 + 0x450);
    fStack_cc = (float)((ulong)*(undefined8 *)(param_1 + 0x450) >> 0x20);
    local_c0 = *(ulong *)(param_1 + 0x460);
    fStack_b8 = (float)*(undefined8 *)(param_1 + 0x468);
    uStack_b4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x468) >> 0x20);
    fStack_a8 = (float)*(undefined8 *)(param_1 + 0x478);
    uStack_a4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x478) >> 0x20);
    fStack_b0 = (float)*(undefined8 *)(param_1 + 0x470);
    fStack_ac = (float)((ulong)*(undefined8 *)(param_1 + 0x470) >> 0x20);
    if ((uVar1 >> 0xb & 1) != 0) {
      plVar3 = (long *)(**(code **)(*(long *)this + 0x28))(this);
      (**(code **)(*plVar3 + 0x70))(fVar24,plVar3,&local_e0);
      fStack_d8 = (float)*(undefined8 *)(param_1 + 0x488);
      uStack_d4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x488) >> 0x20);
      local_e0 = (float)*(undefined8 *)(param_1 + 0x480);
      fStack_dc = (float)((ulong)*(undefined8 *)(param_1 + 0x480) >> 0x20);
      uStack_c8 = *(ulong *)(param_1 + 0x498);
      fStack_d0 = (float)*(undefined8 *)(param_1 + 0x490);
      fStack_cc = (float)((ulong)*(undefined8 *)(param_1 + 0x490) >> 0x20);
      local_c0 = *(ulong *)(param_1 + 0x4a0);
      fStack_b8 = (float)*(undefined8 *)(param_1 + 0x4a8);
      uStack_b4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x4a8) >> 0x20);
      fStack_a8 = (float)*(undefined8 *)(param_1 + 0x4b8);
      uStack_a4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x4b8) >> 0x20);
      fStack_b0 = (float)*(undefined8 *)(param_1 + 0x4b0);
      fStack_ac = (float)((ulong)*(undefined8 *)(param_1 + 0x4b0) >> 0x20);
      plVar3 = (long *)(**(code **)(*(long *)this + 0x28))(this);
      (**(code **)(*plVar3 + 0x70))(fVar24,plVar3,&local_e0);
    }
    if ((uVar2 >> 0xc & 1) == 0) {
      return;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x440);
    fStack_d8 = (float)*(undefined8 *)(param_1 + 0x448);
    uStack_d4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x448) >> 0x20);
    local_e0 = (float)uVar8;
    fStack_dc = (float)((ulong)uVar8 >> 0x20);
    uStack_c8 = *(ulong *)(param_1 + 0x458);
    uVar8 = *(undefined8 *)(param_1 + 0x450);
    fStack_d0 = (float)uVar8;
    fStack_cc = (float)((ulong)uVar8 >> 0x20);
    uStack_e8 = *(ulong *)(param_1 + 0x468);
    local_c0 = *(ulong *)(param_1 + 0x460);
    fStack_b8 = (float)uStack_e8;
    uStack_b4 = (undefined4)(uStack_e8 >> 0x20);
    uVar8 = *(undefined8 *)(param_1 + 0x470);
    fStack_a8 = (float)*(undefined8 *)(param_1 + 0x478);
    uStack_a4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x478) >> 0x20);
    fStack_b0 = (float)uVar8;
    fStack_ac = (float)((ulong)uVar8 >> 0x20);
    local_f0 = CONCAT44((float)uStack_c8,fStack_d8);
    uStack_e8 = uStack_e8 & 0xffffffff;
    local_100 = CONCAT44(fStack_d0,local_e0);
    uStack_f8 = local_c0 & 0xffffffff;
    uVar17 = *(undefined4 *)(param_1 + 0x3bc);
    uVar18 = *(undefined4 *)(param_1 + 0x3c0);
    uVar19 = *(undefined4 *)(param_1 + 0x3fc);
    uVar21 = *(undefined4 *)(param_1 + 0x400);
    plVar3 = (long *)(**(code **)(*(long *)this + 0x28))(this);
    local_110 = 0;
    local_108 = 0;
    (**(code **)(*plVar3 + 0x80))
              (fVar24 * 0.9,uVar17,uVar18,uVar19,uVar21,0x41200000,plVar3,param_1 + 0x4b0,&local_f0,
               &local_100,&local_110,1);
    uStack_f8 = local_c0 >> 0x20;
    local_100._0_4_ = fStack_dc;
    local_100._4_4_ = fStack_cc;
    fVar12 = (float)btGeneric6DofConstraint::getAngle((btGeneric6DofConstraint *)param_1,1);
    fVar13 = (float)btGeneric6DofConstraint::getAngle((btGeneric6DofConstraint *)param_1,2);
    fVar14 = cosf(fVar12);
    fVar12 = sinf(fVar12);
    fVar15 = cosf(fVar13);
    fVar13 = sinf(fVar13);
    local_110 = CONCAT44(fVar15 * local_100._4_4_ - fVar13 * (float)local_100,
                         (fVar14 * fVar15 * (float)local_100 + fVar14 * fVar13 * local_100._4_4_) -
                         fVar12 * (float)uStack_f8);
    local_108 = CONCAT44(local_108._4_4_,
                         fVar12 * fVar15 * (float)local_100 + fVar12 * fVar13 * local_100._4_4_ +
                         fVar14 * (float)uStack_f8);
    fStack_d8 = (float)*(undefined8 *)(param_1 + 0x488);
    uStack_d4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x488) >> 0x20);
    local_e0 = (float)*(undefined8 *)(param_1 + 0x480);
    fStack_dc = (float)((ulong)*(undefined8 *)(param_1 + 0x480) >> 0x20);
    uStack_c8 = *(ulong *)(param_1 + 0x498);
    fStack_d0 = (float)*(undefined8 *)(param_1 + 0x490);
    fStack_cc = (float)((ulong)*(undefined8 *)(param_1 + 0x490) >> 0x20);
    local_c0 = *(ulong *)(param_1 + 0x4a0);
    fStack_b8 = (float)*(undefined8 *)(param_1 + 0x4a8);
    uStack_b4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x4a8) >> 0x20);
    local_114 = 0;
    fStack_a8 = (float)*(undefined8 *)(param_1 + 0x4b8);
    uStack_a4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x4b8) >> 0x20);
    fStack_b0 = (float)*(undefined8 *)(param_1 + 0x4b0);
    fStack_ac = (float)((ulong)*(undefined8 *)(param_1 + 0x4b0) >> 0x20);
    local_120 = -local_e0;
    fStack_11c = -fStack_d0;
    local_118 = -(float)local_c0;
    fVar12 = *(float *)(param_1 + 0x37c);
    fVar13 = *(float *)(param_1 + 0x380);
    if (fVar12 <= fVar13) {
      if (fVar13 <= fVar12) goto LAB_011cad24;
      plVar3 = (long *)(**(code **)(*(long *)this + 0x28))(this);
      pcVar10 = *(code **)(*plVar3 + 0x78);
      uVar8 = 1;
    }
    else {
      plVar3 = (long *)(**(code **)(*(long *)this + 0x28))(this);
      fVar12 = -3.1415927;
      pcVar10 = *(code **)(*plVar3 + 0x78);
      fVar13 = 3.1415927;
      uVar8 = 0;
    }
    uStack_128 = 0;
    local_130 = 0;
    (*pcVar10)(fVar24,fVar24,fVar12,fVar13,0x41200000,plVar3,param_1 + 0x4b0,&local_120,&local_110,
               &local_130,uVar8);
LAB_011cad24:
    uVar8 = *(undefined8 *)(param_1 + 0x440);
    fStack_d8 = (float)*(undefined8 *)(param_1 + 0x448);
    uStack_d4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x448) >> 0x20);
    local_e0 = (float)uVar8;
    fStack_dc = (float)((ulong)uVar8 >> 0x20);
    uStack_c8 = *(ulong *)(param_1 + 0x458);
    uVar8 = *(undefined8 *)(param_1 + 0x450);
    fStack_d0 = (float)uVar8;
    fStack_cc = (float)((ulong)uVar8 >> 0x20);
    local_c0 = *(ulong *)(param_1 + 0x460);
    fStack_b8 = (float)*(undefined8 *)(param_1 + 0x468);
    uStack_b4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x468) >> 0x20);
    uVar8 = *(undefined8 *)(param_1 + 0x470);
    fStack_a8 = (float)*(undefined8 *)(param_1 + 0x478);
    uStack_a4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x478) >> 0x20);
    fStack_b0 = (float)uVar8;
    fStack_ac = (float)((ulong)uVar8 >> 0x20);
    uStack_128 = *(undefined8 *)(param_1 + 0x2c8);
    local_130 = *(undefined8 *)(param_1 + 0x2c0);
    uStack_138 = *(undefined8 *)(param_1 + 0x2d8);
    local_140 = *(undefined8 *)(param_1 + 0x2d0);
    plVar3 = (long *)(**(code **)(*(long *)this + 0x28))(this);
    local_150 = 0;
    uStack_148 = 0;
    (**(code **)(*plVar3 + 0x90))(plVar3,&local_130,&local_140,&local_e0,&local_150);
    return;
  case 7:
    fStack_d8 = (float)*(undefined8 *)(param_1 + 0x358);
    uStack_d4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x358) >> 0x20);
    local_e0 = (float)*(undefined8 *)(param_1 + 0x350);
    fStack_dc = (float)((ulong)*(undefined8 *)(param_1 + 0x350) >> 0x20);
    uStack_c8 = *(ulong *)(param_1 + 0x368);
    fStack_d0 = (float)*(undefined8 *)(param_1 + 0x360);
    fStack_cc = (float)((ulong)*(undefined8 *)(param_1 + 0x360) >> 0x20);
    local_c0 = *(ulong *)(param_1 + 0x370);
    fStack_b8 = (float)*(undefined8 *)(param_1 + 0x378);
    uStack_b4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x378) >> 0x20);
    fStack_a8 = (float)*(undefined8 *)(param_1 + 0x388);
    uStack_a4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x388) >> 0x20);
    fStack_b0 = (float)*(undefined8 *)(param_1 + 0x380);
    fStack_ac = (float)((ulong)*(undefined8 *)(param_1 + 0x380) >> 0x20);
    if ((uVar1 >> 0xb & 1) == 0) {
      fStack_d8 = (float)*(undefined8 *)(param_1 + 0x398);
      uStack_d4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x398) >> 0x20);
      local_e0 = (float)*(undefined8 *)(param_1 + 0x390);
      fStack_dc = (float)((ulong)*(undefined8 *)(param_1 + 0x390) >> 0x20);
      uStack_c8 = *(ulong *)(param_1 + 0x3a8);
      fStack_d0 = (float)*(undefined8 *)(param_1 + 0x3a0);
      fStack_cc = (float)((ulong)*(undefined8 *)(param_1 + 0x3a0) >> 0x20);
      local_c0 = *(ulong *)(param_1 + 0x3b0);
      fStack_b8 = (float)*(undefined8 *)(param_1 + 0x3b8);
      uStack_b4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x3b8) >> 0x20);
      fStack_a8 = (float)*(undefined8 *)(param_1 + 0x3c8);
      uStack_a4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x3c8) >> 0x20);
      fStack_b0 = (float)*(undefined8 *)(param_1 + 0x3c0);
      fStack_ac = (float)((ulong)*(undefined8 *)(param_1 + 0x3c0) >> 0x20);
    }
    else {
      plVar3 = (long *)(**(code **)(*(long *)this + 0x28))(this);
      (**(code **)(*plVar3 + 0x70))(fVar24,plVar3,&local_e0);
      fStack_d8 = (float)*(undefined8 *)(param_1 + 0x398);
      uStack_d4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x398) >> 0x20);
      local_e0 = (float)*(undefined8 *)(param_1 + 0x390);
      fStack_dc = (float)((ulong)*(undefined8 *)(param_1 + 0x390) >> 0x20);
      uStack_c8 = *(ulong *)(param_1 + 0x3a8);
      fStack_d0 = (float)*(undefined8 *)(param_1 + 0x3a0);
      fStack_cc = (float)((ulong)*(undefined8 *)(param_1 + 0x3a0) >> 0x20);
      local_c0 = *(ulong *)(param_1 + 0x3b0);
      fStack_b8 = (float)*(undefined8 *)(param_1 + 0x3b8);
      uStack_b4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x3b8) >> 0x20);
      fStack_a8 = (float)*(undefined8 *)(param_1 + 0x3c8);
      uStack_a4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x3c8) >> 0x20);
      fStack_b0 = (float)*(undefined8 *)(param_1 + 0x3c0);
      fStack_ac = (float)((ulong)*(undefined8 *)(param_1 + 0x3c0) >> 0x20);
      plVar3 = (long *)(**(code **)(*(long *)this + 0x28))(this);
      (**(code **)(*plVar3 + 0x70))(fVar24,plVar3,&local_e0);
    }
    if ((uVar2 >> 0xc & 1) == 0) {
      return;
    }
    fVar12 = *(float *)(param_1 + 0xd0);
    pbVar4 = param_1 + 0x350;
    if (param_1[0xcc] == (btTypedConstraint)0x0) {
      pbVar4 = param_1 + 0x390;
    }
    fVar13 = *(float *)pbVar4;
    fVar14 = *(float *)(pbVar4 + 4);
    fVar15 = *(float *)(pbVar4 + 0x10);
    fVar20 = *(float *)(pbVar4 + 0x14);
    fVar22 = *(float *)(pbVar4 + 0x20);
    fVar23 = *(float *)(pbVar4 + 0x24);
    fVar26 = fVar14 * 0.0;
    fVar29 = fVar20 * 0.0;
    fVar31 = fVar23 * 0.0;
    local_f0 = CONCAT44(*(float *)(pbVar4 + 0x34) +
                        *(float *)(pbVar4 + 0x18) * 0.0 + fVar29 + fVar15 * fVar12,
                        *(float *)(pbVar4 + 0x30) +
                        *(float *)(pbVar4 + 8) * 0.0 + fVar26 + fVar13 * fVar12);
    uStack_e8 = (ulong)(uint)(*(float *)(pbVar4 + 0x38) +
                             *(float *)(pbVar4 + 0x28) * 0.0 + fVar31 + fVar22 * fVar12);
    fVar12 = *(float *)(param_1 + 0xd4);
    local_100 = CONCAT44(*(float *)(pbVar4 + 0x34) +
                         *(float *)(pbVar4 + 0x18) * 0.0 + fVar29 + fVar15 * fVar12,
                         *(float *)(pbVar4 + 0x30) +
                         *(float *)(pbVar4 + 8) * 0.0 + fVar26 + fVar13 * fVar12);
    uStack_f8 = (ulong)(uint)(*(float *)(pbVar4 + 0x38) +
                             *(float *)(pbVar4 + 0x28) * 0.0 + fVar31 + fVar22 * fVar12);
    plVar3 = (long *)(**(code **)(*(long *)this + 0x28))(this);
    local_110 = 0;
    local_108 = 0;
    (**(code **)(*plVar3 + 0x10))(plVar3,&local_f0,&local_100,&local_110);
    local_110 = CONCAT44(fVar15,fVar13);
    local_108 = (ulong)(uint)fVar22;
    local_114 = 0;
    fVar12 = *(float *)(param_1 + 0xd8);
    fVar13 = *(float *)(param_1 + 0xdc);
    pbVar4 = param_1 + 0x3c0;
    local_120 = fVar14;
    fStack_11c = fVar20;
    local_118 = fVar23;
    plVar3 = (long *)(**(code **)(*(long *)this + 0x28))(this);
    puVar5 = &local_110;
    pfVar11 = &local_120;
    pcVar10 = *(code **)(*plVar3 + 0x78);
    puVar6 = &local_130;
    bVar7 = true;
    local_130 = 0;
    uStack_128 = 0;
    break;
  default:
    goto switchD_011c97a8_caseD_8;
  }
  (*pcVar10)(fVar24,fVar24,fVar12,fVar13,0x41200000,plVar3,pbVar4,puVar5,pfVar11,puVar6,bVar7);
switchD_011c97a8_caseD_8:
  return;
}

