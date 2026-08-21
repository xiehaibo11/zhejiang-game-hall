
/* btConvexConcaveCollisionAlgorithm::calculateTimeOfImpact(btCollisionObject*, btCollisionObject*,
   btDispatcherInfo const&, btManifoldResult*) */

float btConvexConcaveCollisionAlgorithm::calculateTimeOfImpact
                (btCollisionObject *param_1,btCollisionObject *param_2,btDispatcherInfo *param_3,
                btManifoldResult *param_4)

{
  btCollisionObject *pbVar1;
  bool bVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
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
  float fVar32;
  float fVar33;
  undefined **local_160;
  float local_158;
  float fStack_154;
  float local_150;
  undefined4 local_14c;
  float local_148;
  float fStack_144;
  float local_140;
  undefined4 local_13c;
  float local_138;
  float fStack_134;
  float local_130;
  undefined4 local_12c;
  float local_128;
  float fStack_124;
  float local_120;
  undefined4 local_11c;
  float local_118;
  float fStack_114;
  float local_110;
  undefined4 local_10c;
  float local_108;
  float fStack_104;
  float local_100;
  undefined4 local_fc;
  float local_f8;
  float fStack_f4;
  float local_f0;
  undefined4 local_ec;
  float local_e8;
  float local_e4;
  float fStack_e0;
  undefined4 local_dc;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  
  pbVar1 = (btCollisionObject *)param_3;
  if (param_1[0x10] == (btCollisionObject)0x0) {
    pbVar1 = param_2;
  }
  if (param_1[0x10] == (btCollisionObject)0x0) {
    param_2 = (btCollisionObject *)param_3;
  }
  fVar4 = (float)*(undefined8 *)(pbVar1 + 0x7c) - (float)*(undefined8 *)(pbVar1 + 0x3c);
  fVar5 = (float)((ulong)*(undefined8 *)(pbVar1 + 0x7c) >> 0x20) -
          (float)((ulong)*(undefined8 *)(pbVar1 + 0x3c) >> 0x20);
  if ((*(float *)(pbVar1 + 0x118) * *(float *)(pbVar1 + 0x118) <=
       (*(float *)(pbVar1 + 0x78) - *(float *)(pbVar1 + 0x38)) *
       (*(float *)(pbVar1 + 0x78) - *(float *)(pbVar1 + 0x38)) + fVar4 * fVar4 + fVar5 * fVar5) &&
     (plVar3 = *(long **)(param_2 + 200), (int)plVar3[1] - 0x15U < 9)) {
    fVar10 = *(float *)(pbVar1 + 0x28);
    fVar33 = *(float *)(param_2 + 8);
    fVar32 = *(float *)(param_2 + 0xc);
    fVar29 = *(float *)(param_2 + 0x18);
    fVar28 = *(float *)(param_2 + 0x1c);
    fVar6 = *(float *)(param_2 + 0x28);
    fVar4 = *(float *)(param_2 + 0x2c);
    fVar31 = *(float *)(param_2 + 0x10);
    fVar30 = *(float *)(param_2 + 0x20);
    fVar5 = *(float *)(param_2 + 0x30);
    fVar8 = *(float *)(param_2 + 0x3c);
    fVar7 = *(float *)(param_2 + 0x40);
    fVar18 = *(float *)(pbVar1 + 8);
    fVar19 = *(float *)(pbVar1 + 0xc);
    fVar16 = *(float *)(pbVar1 + 0x18);
    fVar17 = *(float *)(pbVar1 + 0x1c);
    fVar11 = *(float *)(pbVar1 + 0x2c);
    fVar9 = -*(float *)(param_2 + 0x38);
    fVar12 = *(float *)(pbVar1 + 0x20);
    fVar20 = *(float *)(pbVar1 + 0x10);
    fVar13 = *(float *)(pbVar1 + 0x30);
    fVar14 = *(float *)(pbVar1 + 0x38);
    fVar15 = *(float *)(pbVar1 + 0x3c);
    fVar23 = *(float *)(pbVar1 + 0x78);
    fVar24 = *(float *)(pbVar1 + 0x7c);
    fVar22 = *(float *)(pbVar1 + 0x40);
    fVar27 = *(float *)(pbVar1 + 0x80);
    local_e8 = (fVar33 * fVar9 - fVar29 * fVar8) - fVar6 * fVar7;
    local_e4 = (fVar32 * fVar9 - fVar28 * fVar8) - fVar4 * fVar7;
    fStack_e0 = (fVar31 * fVar9 - fVar30 * fVar8) - fVar5 * fVar7;
    local_128 = local_e8 + fVar33 * fVar14 + fVar29 * fVar15 + fVar6 * fVar22;
    local_e8 = local_e8 + fVar33 * fVar23 + fVar29 * fVar24 + fVar6 * fVar27;
    fVar25 = *(float *)(pbVar1 + 0x68);
    fVar8 = *(float *)(pbVar1 + 0x48);
    fVar7 = *(float *)(pbVar1 + 0x4c);
    fVar21 = *(float *)(pbVar1 + 0x58);
    fVar9 = *(float *)(pbVar1 + 0x5c);
    fVar26 = *(float *)(pbVar1 + 0x6c);
    local_120 = fStack_e0 + fVar31 * fVar14 + fVar30 * fVar15 + fVar5 * fVar22;
    fStack_124 = local_e4 + fVar32 * fVar14 + fVar28 * fVar15 + fVar4 * fVar22;
    local_e4 = local_e4 + fVar32 * fVar23 + fVar28 * fVar24 + fVar4 * fVar27;
    fVar22 = *(float *)(pbVar1 + 0x50);
    fVar15 = *(float *)(pbVar1 + 0x60);
    fVar14 = *(float *)(pbVar1 + 0x70);
    local_74 = 0;
    local_80 = local_128;
    if (local_e8 < local_128) {
      local_80 = local_e8;
    }
    fStack_e0 = fStack_e0 + fVar31 * fVar23 + fVar30 * fVar24 + fVar5 * fVar27;
    local_7c = fStack_124;
    if (local_e4 < fStack_124) {
      local_7c = local_e4;
    }
    local_78 = local_120;
    if (fStack_e0 < local_120) {
      local_78 = fStack_e0;
    }
    local_84 = 0;
    local_90 = local_128;
    if (local_128 < local_e8) {
      local_90 = local_e8;
    }
    local_8c = fStack_124;
    if (fStack_124 < local_e4) {
      local_8c = local_e4;
    }
    fStack_154 = fVar33 * fVar19 + fVar29 * fVar17 + fVar6 * fVar11;
    local_158 = fVar33 * fVar18 + fVar29 * fVar16 + fVar6 * fVar10;
    local_f8 = fVar31 * fVar8 + fVar30 * fVar21 + fVar5 * fVar25;
    fStack_f4 = fVar31 * fVar7 + fVar30 * fVar9 + fVar5 * fVar26;
    local_150 = fVar33 * fVar20 + fVar29 * fVar12 + fVar6 * fVar13;
    local_148 = fVar32 * fVar18 + fVar28 * fVar16 + fVar4 * fVar10;
    fStack_104 = fVar32 * fVar7 + fVar28 * fVar9 + fVar4 * fVar26;
    local_100 = fVar32 * fVar22 + fVar28 * fVar15 + fVar4 * fVar14;
    fStack_144 = fVar32 * fVar19 + fVar28 * fVar17 + fVar4 * fVar11;
    local_140 = fVar32 * fVar20 + fVar28 * fVar12 + fVar4 * fVar13;
    local_138 = fVar31 * fVar18 + fVar30 * fVar16 + fVar5 * fVar10;
    fStack_134 = fVar31 * fVar19 + fVar30 * fVar17 + fVar5 * fVar11;
    local_130 = fVar31 * fVar20 + fVar30 * fVar12 + fVar5 * fVar13;
    local_118 = fVar33 * fVar8 + fVar29 * fVar21 + fVar6 * fVar25;
    fStack_114 = fVar33 * fVar7 + fVar29 * fVar9 + fVar6 * fVar26;
    local_f0 = fVar31 * fVar22 + fVar30 * fVar15 + fVar5 * fVar14;
    local_110 = fVar33 * fVar22 + fVar29 * fVar15 + fVar6 * fVar14;
    local_108 = fVar32 * fVar8 + fVar28 * fVar21 + fVar4 * fVar25;
    local_88 = local_120;
    if (local_120 < fStack_e0) {
      local_88 = fStack_e0;
    }
    local_98 = *(float *)(pbVar1 + 0x114);
    local_90 = local_98 + local_90;
    local_88 = local_98 + local_88;
    local_160 = &PTR__btTriangleCallback_01734408;
    local_80 = local_80 - local_98;
    local_7c = local_7c - local_98;
    local_78 = local_78 - local_98;
    local_8c = local_98 + local_8c;
    local_14c = 0;
    local_13c = 0;
    local_12c = 0;
    local_11c = 0;
    local_10c = 0;
    local_fc = 0;
    local_ec = 0;
    local_dc = 0;
    local_94 = *(float *)(pbVar1 + 0x110);
    if ((plVar3 == (long *)0x0) ||
       ((**(code **)(*plVar3 + 0x80))(plVar3,&local_160,&local_80,&local_90),
       *(float *)(pbVar1 + 0x110) <= local_94)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
      *(float *)(pbVar1 + 0x110) = local_94;
    }
    fVar4 = local_94;
    btTriangleCallback::~btTriangleCallback((btTriangleCallback *)&local_160);
    if (!bVar2) {
      return fVar4;
    }
  }
  return 1.0;
}

