
/* btManifoldResult::addContactPoint(btVector3 const&, btVector3 const&, float) */

void __thiscall
btManifoldResult::addContactPoint
          (btManifoldResult *this,btVector3 *param_1,btVector3 *param_2,float param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  btManifoldPoint *pbVar3;
  long lVar4;
  btManifoldResult *pbVar5;
  long lVar6;
  btManifoldResult *pbVar7;
  btManifoldResult *pbVar8;
  btManifoldResult *pbVar9;
  btManifoldResult *pbVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  btManifoldResult *pbVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_130;
  float fStack_12c;
  float local_128;
  undefined4 local_124;
  float local_120;
  float fStack_11c;
  float local_118;
  undefined4 local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  float local_100;
  float fStack_fc;
  float local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  float local_e0;
  undefined8 local_dc;
  float local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined8 uStack_9c;
  float local_94;
  float local_90;
  float local_8c;
  float local_84;
  float fStack_80;
  float local_7c;
  int local_64;
  
  fVar16 = (float)btPersistentManifold::getContactBreakingThreshold
                            (*(btPersistentManifold **)(this + 8));
  if (param_3 <= fVar16) {
    pbVar10 = this + 0x10;
    lVar11 = *(long *)(*(long *)pbVar10 + 0x10);
    lVar13 = *(long *)(*(btPersistentManifold **)(this + 8) + 0x308);
    local_100 = *(float *)param_1 * param_3 + *(float *)param_2;
    fStack_fc = *(float *)(param_1 + 4) * param_3 + *(float *)(param_2 + 4);
    local_f8 = *(float *)(param_1 + 8) * param_3 + *(float *)(param_2 + 8);
    if (lVar13 == lVar11) {
      fVar16 = local_100 - *(float *)(lVar13 + 0x38);
      fVar17 = fStack_fc - *(float *)(lVar13 + 0x3c);
      fVar18 = local_f8 - *(float *)(lVar13 + 0x40);
      pbVar5 = this + 0x18;
      local_130 = fVar16 * *(float *)(lVar13 + 8) + fVar17 * *(float *)(lVar13 + 0x18) +
                  fVar18 * *(float *)(lVar13 + 0x28);
      fStack_12c = fVar16 * *(float *)(lVar13 + 0xc) + fVar17 * *(float *)(lVar13 + 0x1c) +
                   fVar18 * *(float *)(lVar13 + 0x2c);
      local_128 = fVar16 * *(float *)(lVar13 + 0x10) + fVar17 * *(float *)(lVar13 + 0x20) +
                  fVar18 * *(float *)(lVar13 + 0x30);
    }
    else {
      lVar4 = *(long *)(*(long *)(this + 0x18) + 0x10);
      fVar16 = local_100 - *(float *)(lVar4 + 0x38);
      fVar17 = fStack_fc - *(float *)(lVar4 + 0x3c);
      fVar18 = local_f8 - *(float *)(lVar4 + 0x40);
      local_130 = fVar16 * *(float *)(lVar4 + 8) + fVar17 * *(float *)(lVar4 + 0x18) +
                  fVar18 * *(float *)(lVar4 + 0x28);
      fStack_12c = fVar16 * *(float *)(lVar4 + 0xc) + fVar17 * *(float *)(lVar4 + 0x1c) +
                   fVar18 * *(float *)(lVar4 + 0x2c);
      local_128 = fVar16 * *(float *)(lVar4 + 0x10) + fVar17 * *(float *)(lVar4 + 0x20) +
                  fVar18 * *(float *)(lVar4 + 0x30);
      pbVar5 = pbVar10;
    }
    pbVar14 = this + 0x18;
    lVar4 = *(long *)(*(long *)pbVar5 + 0x10);
    fVar16 = *(float *)param_2 - *(float *)(lVar4 + 0x38);
    fVar17 = *(float *)(param_2 + 4) - *(float *)(lVar4 + 0x3c);
    fVar18 = *(float *)(param_2 + 8) - *(float *)(lVar4 + 0x40);
    local_120 = fVar16 * *(float *)(lVar4 + 8) + fVar17 * *(float *)(lVar4 + 0x18) +
                fVar18 * *(float *)(lVar4 + 0x28);
    fStack_11c = fVar16 * *(float *)(lVar4 + 0xc) + fVar17 * *(float *)(lVar4 + 0x1c) +
                 fVar18 * *(float *)(lVar4 + 0x2c);
    local_118 = fVar16 * *(float *)(lVar4 + 0x10) + fVar17 * *(float *)(lVar4 + 0x20) +
                fVar18 * *(float *)(lVar4 + 0x30);
    local_124 = 0;
    local_114 = 0;
    uStack_e8 = *(undefined8 *)(param_1 + 8);
    local_f0 = *(undefined8 *)param_1;
    local_dc = 0;
    local_d4 = 0.0;
    local_c0 = 0;
    local_b8 = 0;
    uStack_9c = 0;
    local_a4 = 0;
    uStack_ac = 0;
    local_b4 = 0;
    local_f4 = 0;
    uStack_108 = *(undefined8 *)(param_2 + 8);
    local_110 = *(undefined8 *)param_2;
    local_e0 = param_3;
    local_64 = btPersistentManifold::getCacheEntry
                         (*(btPersistentManifold **)(this + 8),(btManifoldPoint *)&local_130);
    lVar4 = *(long *)(*(long *)pbVar10 + 0x10);
    lVar6 = *(long *)(*(long *)pbVar14 + 0x10);
    fVar16 = *(float *)(lVar4 + 0xf4) * *(float *)(lVar6 + 0xf4);
    if (fVar16 <= -10.0) {
      fVar16 = -10.0;
    }
    if (10.0 < fVar16) {
      fVar16 = 10.0;
    }
    local_d4 = *(float *)(lVar4 + 0xf8) * *(float *)(lVar6 + 0xf8);
    fVar17 = *(float *)(lVar4 + 0xfc) * *(float *)(lVar6 + 0xfc);
    if (fVar17 <= -10.0) {
      fVar17 = -10.0;
    }
    if (10.0 < fVar17) {
      fVar17 = 10.0;
    }
    local_dc = CONCAT44(fVar17,fVar16);
    if (ABS((float)uStack_e8) <= 0.70710677) {
      fVar16 = (float)local_f0 * (float)local_f0 + local_f0._4_4_ * local_f0._4_4_;
      local_7c = SQRT(fVar16);
      if (NAN(local_7c)) {
        local_7c = sqrtf(fVar16);
      }
      local_7c = 1.0 / local_7c;
      local_94 = -(local_f0._4_4_ * local_7c);
      local_90 = local_7c * (float)local_f0;
      local_7c = fVar16 * local_7c;
      local_84 = -(local_90 * (float)uStack_e8);
      fStack_80 = (float)uStack_e8 * local_94;
      local_8c = 0.0;
    }
    else {
      fVar16 = (float)uStack_e8 * (float)uStack_e8 + local_f0._4_4_ * local_f0._4_4_;
      local_84 = SQRT(fVar16);
      if (NAN(local_84)) {
        local_84 = sqrtf(fVar16);
      }
      local_84 = 1.0 / local_84;
      local_94 = 0.0;
      local_90 = -(local_84 * (float)uStack_e8);
      local_8c = local_84 * local_f0._4_4_;
      local_84 = fVar16 * local_84;
      fStack_80 = -(local_8c * (float)local_f0);
      local_7c = (float)local_f0 * local_90;
    }
    if (lVar13 == lVar11) {
      pbVar5 = this + 0x20;
      pbVar7 = this + 0x24;
      pbVar8 = this + 0x28;
      pbVar9 = this + 0x2c;
    }
    else {
      pbVar5 = this + 0x24;
      pbVar7 = this + 0x20;
      pbVar8 = this + 0x2c;
      pbVar9 = this + 0x28;
    }
    local_d0 = *(undefined4 *)pbVar5;
    uStack_cc = *(undefined4 *)pbVar7;
    local_c8 = *(undefined4 *)pbVar8;
    uStack_c4 = *(undefined4 *)pbVar9;
    pbVar3 = *(btManifoldPoint **)(this + 8);
    if (local_64 < 0) {
      local_64 = btPersistentManifold::addManifoldPoint(pbVar3,SUB81(&local_130,0));
    }
    else {
      uVar1 = *(undefined4 *)(pbVar3 + (long)local_64 * 0xc0 + 0xa0);
      uVar15 = *(undefined8 *)(pbVar3 + (long)local_64 * 0xc0 + 0x84);
      uVar2 = *(undefined4 *)(pbVar3 + (long)local_64 * 0xc0 + 0x8c);
      uVar12 = *(undefined8 *)(pbVar3 + (long)local_64 * 0xc0 + 0x78);
      memcpy(pbVar3 + (long)local_64 * 0xc0 + 8,&local_130,0xbc);
      *(undefined8 *)(pbVar3 + (long)local_64 * 0xc0 + 0x78) = uVar12;
      *(undefined8 *)(pbVar3 + (long)local_64 * 0xc0 + 0x84) = uVar15;
      *(undefined4 *)(pbVar3 + (long)local_64 * 0xc0 + 0x8c) = uVar2;
      *(undefined4 *)(pbVar3 + (long)local_64 * 0xc0 + 0xa0) = uVar1;
    }
    if ((gContactAddedCallback != (code *)0x0) &&
       (((*(byte *)(*(long *)(*(long *)pbVar10 + 0x10) + 0xe0) >> 3 & 1) != 0 ||
        ((*(byte *)(*(long *)(*(long *)pbVar14 + 0x10) + 0xe0) >> 3 & 1) != 0)))) {
      pbVar5 = pbVar10;
      if (lVar13 == lVar11) {
        pbVar5 = pbVar14;
      }
      if (lVar13 == lVar11) {
        pbVar14 = pbVar10;
      }
      (*gContactAddedCallback)
                (*(long *)(this + 8) + (long)local_64 * 0xc0 + 8,*(undefined8 *)pbVar14,local_d0,
                 local_c8,*(undefined8 *)pbVar5,uStack_cc,uStack_c4);
    }
  }
  return;
}

