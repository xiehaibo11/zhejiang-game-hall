
/* btContinuousConvexCollision::computeClosestPoints(btTransform const&, btTransform const&,
   btPointCollector&) */

void __thiscall
btContinuousConvexCollision::computeClosestPoints
          (btContinuousConvexCollision *this,btTransform *param_1,btTransform *param_2,
          btPointCollector *param_3)

{
  btConvexShape *pbVar1;
  btConvexShape *pbVar2;
  int iVar3;
  int iVar4;
  long lVar5;
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
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 local_190;
  ulong uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  float local_108;
  float fStack_104;
  float local_100;
  undefined4 local_fc;
  
  if (*(long *)(this + 0x20) == 0) {
    fVar35 = *(float *)(param_2 + 0x10);
    fVar32 = *(float *)(param_2 + 0x14);
    fVar9 = *(float *)(param_2 + 0x34);
    fVar26 = *(float *)(param_2 + 0x20);
    fVar27 = *(float *)(param_2 + 0x24);
    fVar29 = *(float *)(param_2 + 0x38);
    fVar37 = *(float *)(param_2 + 0x18);
    fVar17 = *(float *)(param_1 + 0x10);
    fVar36 = *(float *)(param_1 + 0x14);
    fVar31 = *(float *)(param_1 + 0x18);
    fVar12 = *(float *)(param_1 + 0x20);
    fVar14 = *(float *)(param_1 + 0x24);
    fVar15 = *(float *)(param_1 + 0x28);
    fVar24 = *(float *)(param_1 + 0x34);
    fVar16 = *(float *)(param_1 + 0x38);
    fVar33 = *(float *)(param_2 + 0x28);
    fVar34 = *(float *)param_1;
    fVar7 = *(float *)(param_1 + 4);
    fVar6 = *(float *)param_2;
    fVar8 = *(float *)(param_2 + 4);
    fVar10 = *(float *)(param_2 + 8);
    fVar11 = *(float *)(param_1 + 0x30);
    fVar13 = *(float *)(param_1 + 8);
    fVar28 = -*(float *)(param_2 + 0x30);
    fVar19 = fVar7 * fVar6 + fVar36 * fVar35 + fVar14 * fVar26;
    fVar23 = fVar13 * fVar8 + fVar31 * fVar32 + fVar15 * fVar27;
    fVar20 = fVar13 * fVar6 + fVar31 * fVar35 + fVar15 * fVar26;
    fVar21 = fVar34 * fVar8 + fVar17 * fVar32 + fVar12 * fVar27;
    lVar5 = *(long *)(this + 0x28);
    fVar22 = fVar7 * fVar8 + fVar36 * fVar32 + fVar14 * fVar27;
    fVar25 = fVar13 * fVar10 + fVar31 * fVar37 + fVar15 * fVar33;
    fVar18 = fVar34 * fVar6 + fVar17 * fVar35 + fVar12 * fVar26;
    fVar30 = *(float *)(lVar5 + 0x40);
    fVar15 = *(float *)(lVar5 + 0x44);
    fVar17 = fVar34 * fVar10 + fVar17 * fVar37 + fVar12 * fVar33;
    fVar31 = fVar7 * fVar10 + fVar36 * fVar37 + fVar14 * fVar33;
    fVar7 = -*(float *)(lVar5 + 0x3c);
    fVar12 = (fVar18 * fVar7 - fVar21 * fVar30) - fVar17 * fVar15;
    fVar13 = (fVar19 * fVar7 - fVar22 * fVar30) - fVar31 * fVar15;
    local_190 = CONCAT44(fVar13,fVar12);
    uStack_188 = (ulong)(uint)((fVar20 * fVar7 - fVar23 * fVar30) - fVar25 * fVar15);
    fVar7 = (float)(**(code **)(**(long **)(this + 0x18) + 0x80))
                             (*(long **)(this + 0x18),&local_190);
    fVar14 = fVar11 * fVar6 + fVar24 * fVar35 + fVar16 * fVar26 +
             ((fVar6 * fVar28 - fVar35 * fVar9) - fVar26 * fVar29) +
             fVar20 * fVar13 + fVar18 * fVar7 + fVar19 * fVar12;
    fVar15 = *(float *)(lVar5 + 0x3c);
    fVar18 = *(float *)(lVar5 + 0x40);
    fVar8 = fVar11 * fVar8 + fVar24 * fVar32 + fVar16 * fVar27 +
            ((fVar8 * fVar28 - fVar32 * fVar9) - fVar27 * fVar29) +
            fVar23 * fVar13 + fVar21 * fVar7 + fVar22 * fVar12;
    fVar19 = *(float *)(lVar5 + 0x44);
    fVar7 = fVar11 * fVar10 + fVar24 * fVar37 + fVar16 * fVar33 +
            ((fVar10 * fVar28 - fVar37 * fVar9) - fVar33 * fVar29) +
            fVar25 * fVar13 + fVar17 * fVar7 + fVar31 * fVar12;
    local_108 = *(float *)param_2 * fVar15 + *(float *)(param_2 + 4) * fVar18 +
                *(float *)(param_2 + 8) * fVar19;
    fStack_104 = fVar15 * *(float *)(param_2 + 0x10) + fVar18 * *(float *)(param_2 + 0x14) +
                 fVar19 * *(float *)(param_2 + 0x18);
    fVar6 = (fVar19 * fVar7 + fVar15 * fVar14 + fVar18 * fVar8) - *(float *)(lVar5 + 0x4c);
    local_100 = fVar15 * *(float *)(param_2 + 0x20) + fVar18 * *(float *)(param_2 + 0x24) +
                fVar19 * *(float *)(param_2 + 0x28);
    fVar14 = fVar14 - fVar15 * fVar6;
    fVar8 = fVar8 - fVar18 * fVar6;
    fVar7 = fVar7 - fVar19 * fVar6;
    local_190 = CONCAT44(fVar7 * *(float *)(param_2 + 0x18) +
                         *(float *)(param_2 + 0x10) * fVar14 + *(float *)(param_2 + 0x14) * fVar8 +
                         *(float *)(param_2 + 0x34),
                         *(float *)(param_2 + 8) * fVar7 +
                         *(float *)param_2 * fVar14 + *(float *)(param_2 + 4) * fVar8 +
                         *(float *)(param_2 + 0x30));
    uStack_188 = (ulong)(uint)(fVar14 * *(float *)(param_2 + 0x20) +
                               fVar8 * *(float *)(param_2 + 0x24) +
                               fVar7 * *(float *)(param_2 + 0x28) + *(float *)(param_2 + 0x38));
    local_fc = 0;
    (**(code **)(*(long *)param_3 + 0x20))(param_3,&local_108,&local_190);
  }
  else {
    btVoronoiSimplexSolver::reset(*(btVoronoiSimplexSolver **)(this + 8));
    pbVar1 = *(btConvexShape **)(this + 0x18);
    pbVar2 = *(btConvexShape **)(this + 0x20);
    iVar3 = *(int *)(pbVar1 + 8);
    iVar4 = *(int *)(pbVar2 + 8);
    fVar6 = (float)(**(code **)(*(long *)pbVar1 + 0x60))(pbVar1);
    fVar7 = (float)(**(code **)(**(long **)(this + 0x20) + 0x60))();
    btGjkPairDetector::btGjkPairDetector
              ((btGjkPairDetector *)&local_108,pbVar1,pbVar2,iVar3,iVar4,fVar6,fVar7,
               *(btVoronoiSimplexSolver **)(this + 8),
               *(btConvexPenetrationDepthSolver **)(this + 0x10));
    local_110 = 0x5d5e0b6b;
    uStack_188 = *(ulong *)(param_1 + 8);
    local_190 = *(undefined8 *)param_1;
    uStack_178 = *(undefined8 *)(param_1 + 0x18);
    local_180 = *(undefined8 *)(param_1 + 0x10);
    uStack_168 = *(undefined8 *)(param_1 + 0x28);
    local_170 = *(undefined8 *)(param_1 + 0x20);
    uStack_158 = *(undefined8 *)(param_1 + 0x38);
    local_160 = *(undefined8 *)(param_1 + 0x30);
    uStack_148 = *(undefined8 *)(param_2 + 8);
    local_150 = *(undefined8 *)param_2;
    uStack_138 = *(undefined8 *)(param_2 + 0x18);
    local_140 = *(undefined8 *)(param_2 + 0x10);
    uStack_128 = *(undefined8 *)(param_2 + 0x28);
    local_130 = *(undefined8 *)(param_2 + 0x20);
    uStack_118 = *(undefined8 *)(param_2 + 0x38);
    local_120 = *(undefined8 *)(param_2 + 0x30);
    btGjkPairDetector::getClosestPoints
              ((ClosestPointInput *)&local_108,(Result *)&local_190,(btIDebugDraw *)param_3,false);
  }
  return;
}

