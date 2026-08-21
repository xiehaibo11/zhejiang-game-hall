
/* WARNING: Removing unreachable block (ram,0x0124429c) */
/* WARNING: Removing unreachable block (ram,0x0124505c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* btConvexConvexAlgorithm::processCollision(btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*, btDispatcherInfo const&, btManifoldResult*) */

void __thiscall
btConvexConvexAlgorithm::processCollision
          (btConvexConvexAlgorithm *this,btCollisionObjectWrapper *param_1,
          btCollisionObjectWrapper *param_2,btDispatcherInfo *param_3,btManifoldResult *param_4)

{
  float *pfVar1;
  uint uVar2;
  btPersistentManifold *pbVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  float *pfVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  btConvexShape *pbVar12;
  btConvexShape *pbVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  int iVar18;
  undefined8 uVar19;
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
  float local_334;
  float local_330;
  float local_32c;
  undefined **local_318;
  btManifoldResult *pbStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined4 local_2f8;
  undefined4 local_2f4;
  float local_2f0;
  char local_2ec;
  btManifoldResult *local_2e8;
  undefined8 local_2e0;
  ulong uStack_2d8;
  undefined8 local_2d0;
  ulong uStack_2c8;
  undefined8 local_2c0;
  ulong uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  ulong uStack_298;
  undefined8 local_290;
  ulong uStack_288;
  undefined8 local_280;
  ulong uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  ulong uStack_248;
  undefined8 local_240;
  ulong uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined1 local_220;
  undefined8 local_218;
  undefined4 local_210;
  uint uStack_20c;
  uint uStack_208;
  undefined4 uStack_204;
  void *local_200;
  ulong uStack_1f8;
  undefined8 local_1f0;
  ulong uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  undefined4 local_1c4;
  undefined **local_1c0;
  btGjkPairDetector abStack_1b8 [8];
  float local_1b0;
  float local_1ac;
  float local_1a8;
  btConvexShape *local_190;
  btConvexShape *local_188;
  float local_16c;
  undefined8 local_150;
  ulong uStack_148;
  undefined8 local_140;
  ulong uStack_138;
  undefined8 local_130;
  ulong uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  ulong uStack_108;
  undefined8 local_100;
  ulong uStack_f8;
  undefined8 local_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  float local_d0;
  float local_c0;
  float fStack_bc;
  float local_b8;
  undefined4 local_b4;
  float local_b0 [4];
  
  pbVar3 = *(btPersistentManifold **)(this + 0x28);
  if (pbVar3 == (btPersistentManifold *)0x0) {
    pbVar3 = (btPersistentManifold *)
             (**(code **)(**(long **)(this + 8) + 0x18))
                       (*(long **)(this + 8),*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_2 + 0x10));
    *(btPersistentManifold **)(this + 0x28) = pbVar3;
    this[0x20] = (btConvexConvexAlgorithm)0x1;
  }
  *(btPersistentManifold **)(param_4 + 8) = pbVar3;
  pbVar13 = *(btConvexShape **)(param_1 + 8);
  pbVar12 = *(btConvexShape **)(param_2 + 8);
  if ((*(int *)(pbVar13 + 8) != 10) || (*(int *)(pbVar12 + 8) != 10)) {
    local_d0 = 1e+18;
    btGjkPairDetector::btGjkPairDetector
              (abStack_1b8,pbVar13,pbVar12,*(btVoronoiSimplexSolver **)(this + 0x10),
               *(btConvexPenetrationDepthSolver **)(this + 0x18));
    local_190 = pbVar13;
    local_188 = pbVar12;
    fVar32 = (float)(**(code **)(*(long *)pbVar13 + 0x60))(pbVar13);
    fVar38 = (float)(**(code **)(*(long *)pbVar12 + 0x60))(pbVar12);
    local_d0 = (float)btPersistentManifold::getContactBreakingThreshold
                                (*(btPersistentManifold **)(this + 0x28));
    local_d0 = fVar32 + fVar38 + local_d0;
    local_d0 = local_d0 * local_d0;
    puVar6 = *(undefined8 **)(param_1 + 0x18);
    uStack_148 = puVar6[1];
    local_150 = *puVar6;
    uStack_138 = puVar6[3];
    local_140 = puVar6[2];
    uStack_128 = puVar6[5];
    local_130 = puVar6[4];
    uStack_118 = puVar6[7];
    local_120 = puVar6[6];
    puVar6 = *(undefined8 **)(param_2 + 0x18);
    uStack_108 = puVar6[1];
    local_110 = *puVar6;
    uStack_f8 = puVar6[3];
    local_100 = puVar6[2];
    uStack_e8 = puVar6[5];
    local_f0 = puVar6[4];
    uStack_d8 = puVar6[7];
    local_e0 = puVar6[6];
    if ((*(int *)(pbVar13 + 8) < 7) && (iVar18 = *(int *)(pbVar12 + 8), iVar18 < 7)) {
      uVar17 = 0;
      local_1c0 = &PTR__Result_017344e8;
      if (*(int *)(pbVar13 + 8) == 0) {
        local_2f8 = 0;
      }
      else {
        local_2f8 = (**(code **)(*(long *)pbVar13 + 0x60))(pbVar13);
        iVar18 = *(int *)(pbVar12 + 8);
      }
      if (iVar18 != 0) {
        uVar17 = (**(code **)(*(long *)pbVar12 + 0x60))(pbVar12);
      }
      local_318 = &PTR__Result_01734538;
      local_2ec = '\0';
      pbStack_310 = param_4;
      local_2f4 = uVar17;
      if (*(long *)(pbVar13 + 0x40) != 0) {
        if (*(long *)(pbVar12 + 0x40) != 0) {
          fVar32 = (float)btPersistentManifold::getContactBreakingThreshold
                                    (*(btPersistentManifold **)(this + 0x28));
          if (param_3[0x20] == (btDispatcherInfo)0x0) {
            btGjkPairDetector::getClosestPoints
                      ((ClosestPointInput *)abStack_1b8,(Result *)&local_150,
                       (btIDebugDraw *)&local_318,SUB81(*(undefined8 *)(param_3 + 0x18),0));
            uStack_208 = (uint)uStack_300;
            uStack_204 = (undefined4)((ulong)uStack_300 >> 0x20);
            local_210 = (undefined4)local_308;
            uStack_20c = (uint)((ulong)local_308 >> 0x20);
            if ((0.0 <= local_2f0) || (local_2ec == '\0')) goto LAB_01244d20;
          }
          else {
            uVar4 = btPolyhedralContactClipping::findSeparatingAxis
                              (*(btConvexPolyhedron **)(pbVar13 + 0x40),
                               *(btConvexPolyhedron **)(pbVar12 + 0x40),
                               *(btTransform **)(param_1 + 0x18),*(btTransform **)(param_2 + 0x18),
                               (btVector3 *)&local_210,(Result *)param_4);
            if ((uVar4 & 1) == 0) goto LAB_01244d20;
            local_2f0 = -1e+30;
          }
          btPolyhedralContactClipping::clipHullAgainstHull
                    ((btVector3 *)&local_210,*(btConvexPolyhedron **)(pbVar13 + 0x40),
                     *(btConvexPolyhedron **)(pbVar12 + 0x40),*(btTransform **)(param_1 + 0x18),
                     *(btTransform **)(param_2 + 0x18),local_2f0 - fVar32,fVar32,(Result *)param_4);
LAB_01244d20:
          if (this[0x20] == (btConvexConvexAlgorithm)0x0) {
            return;
          }
          pbVar3 = *(btPersistentManifold **)(param_4 + 8);
          if (*(int *)(pbVar3 + 0x318) == 0) {
            return;
          }
          if (*(long *)(pbVar3 + 0x308) != *(long *)(*(long *)(param_4 + 0x10) + 0x10)) {
            btPersistentManifold::refreshContactPoints
                      (pbVar3,(btTransform *)(*(long *)(*(long *)(param_4 + 0x18) + 0x10) + 8),
                       (btTransform *)(*(long *)(*(long *)(param_4 + 0x10) + 0x10) + 8));
            return;
          }
          btPersistentManifold::refreshContactPoints
                    (pbVar3,(btTransform *)(*(long *)(pbVar3 + 0x308) + 8),
                     (btTransform *)(*(long *)(*(long *)(param_4 + 0x18) + 0x10) + 8));
          return;
        }
        if (*(int *)(pbVar12 + 8) == 1) {
          uStack_1f8 = CONCAT71(uStack_1f8._1_7_,1);
          local_200 = (void *)0x0;
          uStack_20c = 0;
          uStack_208 = 0;
          pfVar7 = *(float **)(param_2 + 0x18);
          fVar26 = *(float *)(pbVar12 + 0x48);
          fVar27 = *(float *)(pbVar12 + 0x4c);
          fVar25 = *(float *)(pbVar12 + 0x50);
          fVar31 = *pfVar7;
          fVar32 = pfVar7[1];
          fVar38 = pfVar7[2];
          fVar33 = pfVar7[6];
          fVar23 = pfVar7[4];
          fVar30 = pfVar7[5];
          fVar15 = pfVar7[10];
          fVar21 = pfVar7[8];
          fVar22 = pfVar7[9];
          fVar16 = pfVar7[0xc];
          fVar20 = pfVar7[0xd];
          fVar29 = pfVar7[0xe];
          pvVar5 = (void *)btAlignedAllocInternal(0x10,0x10);
          lVar8 = (long)(int)uStack_20c;
          if (0 < (int)uStack_20c) {
            lVar9 = 0;
            do {
              lVar8 = lVar8 + -1;
              uVar19 = *(undefined8 *)((long)local_200 + lVar9);
              ((undefined8 *)((long)pvVar5 + lVar9))[1] =
                   ((undefined8 *)((long)local_200 + lVar9))[1];
              *(undefined8 *)((long)pvVar5 + lVar9) = uVar19;
              lVar9 = lVar9 + 0x10;
            } while (lVar8 != 0);
          }
          if ((local_200 != (void *)0x0) && ((char)uStack_1f8 != '\0')) {
            btAlignedFreeInternal(local_200);
          }
          uStack_1f8 = CONCAT71(uStack_1f8._1_7_,1);
          uStack_208 = 1;
          pfVar7 = (float *)((long)pvVar5 + (long)(int)uStack_20c * 0x10);
          *pfVar7 = fVar26 * fVar31 + fVar27 * fVar32 + fVar25 * fVar38 + fVar16;
          pfVar7[1] = fVar26 * fVar23 + fVar27 * fVar30 + fVar25 * fVar33 + fVar20;
          pfVar7[2] = fVar26 * fVar21 + fVar27 * fVar22 + fVar25 * fVar15 + fVar29;
          pfVar7[3] = 0.0;
          uStack_20c = uStack_20c + 1;
          pfVar7 = *(float **)(param_2 + 0x18);
          fVar23 = *(float *)(pbVar12 + 0x58);
          fVar22 = *(float *)(pbVar12 + 0x5c);
          fVar21 = *(float *)(pbVar12 + 0x60);
          fVar25 = *pfVar7;
          fVar20 = pfVar7[1];
          fVar29 = pfVar7[2];
          fVar15 = pfVar7[4];
          fVar16 = pfVar7[5];
          fVar32 = pfVar7[6];
          fVar38 = pfVar7[8];
          fVar33 = pfVar7[9];
          fVar26 = pfVar7[10];
          fVar27 = pfVar7[0xc];
          fVar30 = pfVar7[0xd];
          fVar31 = pfVar7[0xe];
          local_200 = pvVar5;
          if (uStack_20c == 1) {
            pvVar5 = (void *)btAlignedAllocInternal(0x20,0x10);
            if (0 < (int)uStack_20c) {
              lVar8 = 0;
              lVar9 = (long)(int)uStack_20c;
              do {
                lVar9 = lVar9 + -1;
                uVar19 = *(undefined8 *)((long)local_200 + lVar8);
                ((undefined8 *)((long)pvVar5 + lVar8))[1] =
                     ((undefined8 *)((long)local_200 + lVar8))[1];
                *(undefined8 *)((long)pvVar5 + lVar8) = uVar19;
                lVar8 = lVar8 + 0x10;
              } while (lVar9 != 0);
            }
            if ((local_200 != (void *)0x0) && ((char)uStack_1f8 != '\0')) {
              btAlignedFreeInternal(local_200);
            }
            uStack_1f8 = CONCAT71(uStack_1f8._1_7_,1);
            uStack_208 = 2;
            local_200 = pvVar5;
          }
          pfVar7 = (float *)((long)local_200 + (long)(int)uStack_20c * 0x10);
          *pfVar7 = fVar23 * fVar25 + fVar22 * fVar20 + fVar21 * fVar29 + fVar27;
          pfVar7[1] = fVar23 * fVar15 + fVar22 * fVar16 + fVar21 * fVar32 + fVar30;
          pfVar7[2] = fVar23 * fVar38 + fVar22 * fVar33 + fVar21 * fVar26 + fVar31;
          pfVar7[3] = 0.0;
          uStack_20c = uStack_20c + 1;
          pfVar7 = *(float **)(param_2 + 0x18);
          fVar15 = *(float *)(pbVar12 + 0x68);
          fVar16 = *(float *)(pbVar12 + 0x6c);
          fVar20 = *(float *)(pbVar12 + 0x70);
          fVar21 = *pfVar7;
          fVar29 = pfVar7[1];
          fVar25 = pfVar7[2];
          fVar23 = pfVar7[4];
          fVar22 = pfVar7[5];
          fVar32 = pfVar7[6];
          fVar38 = pfVar7[8];
          fVar33 = pfVar7[9];
          fVar26 = pfVar7[10];
          fVar27 = pfVar7[0xc];
          fVar30 = pfVar7[0xd];
          fVar31 = pfVar7[0xe];
          if (uStack_20c == uStack_208) {
            uVar2 = uStack_20c * 2;
            if (uStack_20c == 0) {
              uVar2 = 1;
            }
            if ((int)uStack_20c < (int)uVar2) {
              if (uVar2 == 0) {
                pvVar5 = (void *)0x0;
              }
              else {
                pvVar5 = (void *)btAlignedAllocInternal
                                           (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 |
                                            (ulong)uVar2 << 4,0x10);
              }
              if (0 < (int)uStack_20c) {
                lVar8 = 0;
                lVar9 = (long)(int)uStack_20c;
                do {
                  lVar9 = lVar9 + -1;
                  uVar19 = *(undefined8 *)((long)local_200 + lVar8);
                  ((undefined8 *)((long)pvVar5 + lVar8))[1] =
                       ((undefined8 *)((long)local_200 + lVar8))[1];
                  *(undefined8 *)((long)pvVar5 + lVar8) = uVar19;
                  lVar8 = lVar8 + 0x10;
                } while (lVar9 != 0);
              }
              if ((local_200 != (void *)0x0) && ((char)uStack_1f8 != '\0')) {
                btAlignedFreeInternal(local_200);
              }
              uStack_1f8 = CONCAT71(uStack_1f8._1_7_,1);
              uStack_208 = uVar2;
              local_200 = pvVar5;
            }
          }
          pfVar7 = (float *)((long)local_200 + (long)(int)uStack_20c * 0x10);
          *pfVar7 = fVar15 * fVar21 + fVar16 * fVar29 + fVar20 * fVar25 + fVar27;
          pfVar7[1] = fVar15 * fVar23 + fVar16 * fVar22 + fVar20 * fVar32 + fVar30;
          pfVar7[2] = fVar15 * fVar38 + fVar16 * fVar33 + fVar20 * fVar26 + fVar31;
          pfVar7[3] = 0.0;
          uStack_20c = uStack_20c + 1;
          fVar32 = (float)btPersistentManifold::getContactBreakingThreshold
                                    (*(btPersistentManifold **)(this + 0x28));
          btGjkPairDetector::getClosestPoints
                    ((ClosestPointInput *)abStack_1b8,(Result *)&local_150,
                     (btIDebugDraw *)&local_1c0,SUB81(*(undefined8 *)(param_3 + 0x18),0));
          fVar38 = local_1b0 * local_1b0 + local_1ac * local_1ac + local_1a8 * local_1a8;
          if (1.1920929e-07 < fVar38) {
            fVar38 = 1.0 / fVar38;
            local_1d0 = local_1b0 * fVar38;
            local_1cc = local_1ac * fVar38;
            local_1c8 = local_1a8 * fVar38;
            local_1c4 = 0;
            fVar38 = (float)(**(code **)(*(long *)pbVar13 + 0x60))(pbVar13);
            fVar33 = (float)(**(code **)(*(long *)pbVar12 + 0x60))(pbVar12);
            btPolyhedralContactClipping::clipFaceAgainstHull
                      ((btVector3 *)&local_1d0,*(btConvexPolyhedron **)(pbVar13 + 0x40),
                       *(btTransform **)(param_1 + 0x18),(btAlignedObjectArray *)&local_210,
                       ((local_16c - fVar38) - fVar33) - fVar32,fVar32,(Result *)param_4);
          }
          if ((this[0x20] != (btConvexConvexAlgorithm)0x0) &&
             (pbVar3 = *(btPersistentManifold **)(param_4 + 8), *(int *)(pbVar3 + 0x318) != 0)) {
            if (*(long *)(pbVar3 + 0x308) == *(long *)(*(long *)(param_4 + 0x10) + 0x10)) {
              btPersistentManifold::refreshContactPoints
                        (pbVar3,(btTransform *)(*(long *)(pbVar3 + 0x308) + 8),
                         (btTransform *)(*(long *)(*(long *)(param_4 + 0x18) + 0x10) + 8));
            }
            else {
              btPersistentManifold::refreshContactPoints
                        (pbVar3,(btTransform *)(*(long *)(*(long *)(param_4 + 0x18) + 0x10) + 8),
                         (btTransform *)(*(long *)(*(long *)(param_4 + 0x10) + 0x10) + 8));
            }
          }
          if (local_200 == (void *)0x0) {
            return;
          }
          if ((char)uStack_1f8 == '\0') {
            return;
          }
          btAlignedFreeInternal(local_200);
          return;
        }
      }
    }
    btGjkPairDetector::getClosestPoints
              ((ClosestPointInput *)abStack_1b8,(Result *)&local_150,(btIDebugDraw *)param_4,
               SUB81(*(undefined8 *)(param_3 + 0x18),0));
    if (((*(int *)(this + 0x34) != 0) &&
        (*(int *)(*(long *)(param_4 + 8) + 0x318) < *(int *)(this + 0x38))) &&
       (fVar32 = local_1b0 * local_1b0 + local_1ac * local_1ac + local_1a8 * local_1a8,
       1.1920929e-07 < fVar32)) {
      fVar32 = 1.0 / fVar32;
      fVar38 = local_1a8 * fVar32;
      fVar33 = local_1b0 * fVar32;
      fVar32 = local_1ac * fVar32;
      if (ABS(fVar38) <= 0.70710677) {
        fVar16 = fVar33 * fVar33 + fVar32 * fVar32;
        fVar15 = SQRT(fVar16);
        if (NAN(fVar15)) {
          fVar15 = sqrtf(fVar16);
        }
        local_330 = -(fVar32 * (1.0 / fVar15));
        local_32c = fVar33 * (1.0 / fVar15);
        local_334 = 0.0;
      }
      else {
        fVar16 = fVar38 * fVar38 + fVar32 * fVar32;
        fVar15 = SQRT(fVar16);
        if (NAN(fVar15)) {
          fVar15 = sqrtf(fVar16);
        }
        local_32c = -(fVar38 * (1.0 / fVar15));
        local_334 = fVar32 * (1.0 / fVar15);
        local_330 = 0.0;
      }
      fVar16 = (float)(**(code **)(*(long *)pbVar13 + 0x20))(pbVar13);
      fVar20 = (float)(**(code **)(*(long *)pbVar12 + 0x20))(pbVar12);
      uVar19 = local_110;
      uVar4 = uStack_108;
      local_200 = (void *)local_100;
      uStack_1f8 = uStack_f8;
      local_1f0 = local_f0;
      uStack_1e8 = uStack_e8;
      local_1e0 = local_e0;
      uStack_1d8 = uStack_d8;
      fVar15 = fVar20;
      if (fVar16 < fVar20) {
        uVar19 = local_150;
        uVar4 = uStack_148;
        local_200 = (void *)local_140;
        uStack_1f8 = uStack_138;
        local_1f0 = local_130;
        uStack_1e8 = uStack_128;
        local_1e0 = local_120;
        uStack_1d8 = uStack_118;
        fVar15 = fVar16;
      }
      uStack_208 = (uint)uVar4;
      uStack_204 = (undefined4)(uVar4 >> 0x20);
      local_210 = (undefined4)uVar19;
      uStack_20c = (uint)((ulong)uVar19 >> 0x20);
      iVar18 = *(int *)(this + 0x34);
      if (0 < iVar18) {
        fVar22 = local_330 * local_330 + local_32c * local_32c + local_334 * local_334;
        fVar21 = fVar38 * fVar38 + fVar33 * fVar33 + fVar32 * fVar32;
        fVar29 = gContactBreakingThreshold / fVar15;
        if (0.3926991 < gContactBreakingThreshold / fVar15) {
          fVar29 = 0.3926991;
        }
        iVar14 = 0;
        fVar15 = SQRT(fVar21);
        do {
          if (1.1920929e-07 < fVar22) {
            fVar23 = SQRT(fVar22);
            if (NAN(SQRT(fVar22))) {
              fVar23 = sqrtf(fVar22);
            }
            fVar25 = sinf(fVar29 * 0.5);
            fVar25 = fVar25 / fVar23;
            fVar26 = cosf(fVar29 * 0.5);
            iVar18 = *(int *)(this + 0x34);
            fVar23 = fVar15;
            if (NAN(fVar15)) {
              fVar23 = sqrtf(fVar21);
            }
            fVar31 = local_330 * fVar25;
            fVar36 = local_32c * fVar25;
            fVar25 = local_334 * fVar25;
            fVar40 = (6.2831855 / (float)iVar18) * (float)iVar14 * 0.5;
            fVar27 = sinf(fVar40);
            fVar27 = fVar27 / fVar23;
            fVar30 = fVar33 * fVar27;
            fVar34 = fVar32 * fVar27;
            fVar27 = fVar38 * fVar27;
            fVar23 = cosf(fVar40);
            if (fVar20 <= fVar16) {
              puVar6 = *(undefined8 **)(param_1 + 0x18);
              fVar40 = ((fVar31 * fVar23 - fVar26 * fVar30) - fVar25 * fVar34) + fVar36 * fVar27;
              fVar24 = fVar26 * fVar23 + fVar31 * fVar30 + fVar36 * fVar34 + fVar25 * fVar27;
              uStack_148 = puVar6[1];
              local_150 = *puVar6;
              fVar41 = ((fVar36 * fVar23 - fVar26 * fVar34) - fVar31 * fVar27) + fVar25 * fVar30;
              fVar25 = ((fVar25 * fVar23 - fVar26 * fVar27) - fVar36 * fVar30) + fVar31 * fVar34;
              uStack_138 = puVar6[3];
              local_140 = puVar6[2];
              fVar26 = (fVar27 * fVar41 + fVar30 * fVar24 + fVar23 * fVar40) - fVar34 * fVar25;
              fVar31 = (fVar30 * fVar25 + fVar23 * fVar41 + fVar34 * fVar24) - fVar27 * fVar40;
              fVar36 = (fVar34 * fVar40 + fVar27 * fVar24 + fVar23 * fVar25) - fVar30 * fVar41;
              fVar23 = ((fVar23 * fVar24 - fVar30 * fVar40) - fVar34 * fVar41) - fVar27 * fVar25;
              uStack_128 = puVar6[5];
              local_130 = puVar6[4];
              fVar25 = 2.0 / (fVar23 * fVar23 + fVar36 * fVar36 + fVar26 * fVar26 + fVar31 * fVar31)
              ;
              uStack_118 = puVar6[7];
              local_120 = puVar6[6];
              fVar41 = fVar31 * fVar25;
              fVar30 = fVar36 * fVar25;
              pfVar7 = *(float **)(param_2 + 0x18);
              fVar27 = fVar23 * fVar26 * fVar25;
              fVar40 = fVar26 * fVar26 * fVar25;
              fVar28 = fVar26 * fVar41 - fVar23 * fVar30;
              fVar35 = fVar26 * fVar30 + fVar23 * fVar41;
              fVar25 = fVar26 * fVar41 + fVar23 * fVar30;
              fVar24 = fVar31 * fVar30 - fVar27;
              fVar23 = fVar26 * fVar30 - fVar23 * fVar41;
              fVar27 = fVar31 * fVar30 + fVar27;
              fVar34 = 1.0 - (fVar31 * fVar41 + fVar36 * fVar30);
              fVar26 = 1.0 - (fVar40 + fVar36 * fVar30);
              fVar30 = 1.0 - (fVar40 + fVar31 * fVar41);
              fVar31 = *pfVar7;
              fVar36 = pfVar7[1];
              fVar40 = pfVar7[4];
              fVar41 = pfVar7[5];
              fVar42 = pfVar7[2];
              fVar43 = pfVar7[6];
              fVar37 = pfVar7[8];
              fVar39 = pfVar7[9];
              fVar44 = pfVar7[10];
              local_110 = CONCAT44(fVar34 * fVar36 + fVar28 * fVar41 + fVar35 * fVar39,
                                   fVar34 * fVar31 + fVar28 * fVar40 + fVar35 * fVar37);
              uStack_108 = (ulong)(uint)(fVar34 * fVar42 + fVar28 * fVar43 + fVar35 * fVar44);
              local_100 = CONCAT44(fVar25 * fVar36 + fVar26 * fVar41 + fVar24 * fVar39,
                                   fVar25 * fVar31 + fVar26 * fVar40 + fVar24 * fVar37);
              uStack_f8 = (ulong)(uint)(fVar25 * fVar42 + fVar26 * fVar43 + fVar24 * fVar44);
              local_f0 = CONCAT44(fVar23 * fVar36 + fVar27 * fVar41 + fVar30 * fVar39,
                                  fVar23 * fVar31 + fVar27 * fVar40 + fVar30 * fVar37);
              uStack_e8 = (ulong)(uint)(fVar23 * fVar42 + fVar27 * fVar43 + fVar30 * fVar44);
            }
            else {
              fVar40 = ((fVar31 * fVar23 - fVar26 * fVar30) - fVar25 * fVar34) + fVar36 * fVar27;
              fVar41 = ((fVar36 * fVar23 - fVar26 * fVar34) - fVar31 * fVar27) + fVar25 * fVar30;
              fVar24 = fVar26 * fVar23 + fVar31 * fVar30 + fVar36 * fVar34 + fVar25 * fVar27;
              fVar25 = ((fVar25 * fVar23 - fVar26 * fVar27) - fVar36 * fVar30) + fVar31 * fVar34;
              fVar26 = (fVar27 * fVar41 + fVar30 * fVar24 + fVar23 * fVar40) - fVar34 * fVar25;
              fVar31 = (fVar30 * fVar25 + fVar23 * fVar41 + fVar34 * fVar24) - fVar27 * fVar40;
              fVar36 = (fVar34 * fVar40 + fVar27 * fVar24 + fVar23 * fVar25) - fVar30 * fVar41;
              fVar23 = ((fVar23 * fVar24 - fVar30 * fVar40) - fVar34 * fVar41) - fVar27 * fVar25;
              pfVar7 = *(float **)(param_1 + 0x18);
              fVar25 = 2.0 / (fVar23 * fVar23 + fVar36 * fVar36 + fVar26 * fVar26 + fVar31 * fVar31)
              ;
              fVar34 = *pfVar7;
              fVar42 = pfVar7[1];
              fVar43 = pfVar7[4];
              fVar44 = pfVar7[5];
              fVar47 = pfVar7[2];
              fVar48 = pfVar7[6];
              fVar24 = fVar31 * fVar25;
              fVar30 = fVar36 * fVar25;
              fVar45 = pfVar7[8];
              fVar46 = pfVar7[9];
              fVar28 = pfVar7[10];
              fVar27 = fVar23 * fVar26 * fVar25;
              fVar41 = fVar26 * fVar26 * fVar25;
              fVar37 = fVar26 * fVar24 - fVar23 * fVar30;
              fVar39 = fVar26 * fVar30 + fVar23 * fVar24;
              fVar25 = fVar26 * fVar24 + fVar23 * fVar30;
              fVar35 = fVar31 * fVar30 - fVar27;
              fVar23 = fVar26 * fVar30 - fVar23 * fVar24;
              fVar27 = fVar31 * fVar30 + fVar27;
              fVar40 = 1.0 - (fVar31 * fVar24 + fVar36 * fVar30);
              fVar26 = 1.0 - (fVar41 + fVar36 * fVar30);
              fVar30 = 1.0 - (fVar41 + fVar31 * fVar24);
              local_150 = CONCAT44(fVar40 * fVar42 + fVar37 * fVar44 + fVar39 * fVar46,
                                   fVar40 * fVar34 + fVar37 * fVar43 + fVar39 * fVar45);
              uStack_148 = (ulong)(uint)(fVar40 * fVar47 + fVar37 * fVar48 + fVar39 * fVar28);
              local_140 = CONCAT44(fVar25 * fVar42 + fVar26 * fVar44 + fVar35 * fVar46,
                                   fVar25 * fVar34 + fVar26 * fVar43 + fVar35 * fVar45);
              uStack_138 = (ulong)(uint)(fVar25 * fVar47 + fVar26 * fVar48 + fVar35 * fVar28);
              local_130 = CONCAT44(fVar23 * fVar42 + fVar27 * fVar44 + fVar30 * fVar46,
                                   fVar23 * fVar34 + fVar27 * fVar43 + fVar30 * fVar45);
              uStack_128 = (ulong)(uint)(fVar23 * fVar47 + fVar27 * fVar48 + fVar30 * fVar28);
              puVar6 = *(undefined8 **)(param_2 + 0x18);
              uStack_108 = puVar6[1];
              local_110 = *puVar6;
              uStack_f8 = puVar6[3];
              local_100 = puVar6[2];
              uStack_e8 = puVar6[5];
              local_f0 = puVar6[4];
              uStack_d8 = puVar6[7];
              local_e0 = puVar6[6];
            }
            local_218 = *(undefined8 *)(param_3 + 0x18);
            local_318 = &PTR__Result_01734588;
            uStack_2d8 = uStack_148;
            local_2e0 = local_150;
            uStack_2c8 = uStack_138;
            local_2d0 = local_140;
            uStack_2b8 = uStack_128;
            local_2c0 = local_130;
            uStack_2a8 = uStack_118;
            local_2b0 = local_120;
            uStack_298 = uStack_108;
            local_2a0 = local_110;
            uStack_258 = CONCAT44(uStack_204,uStack_208);
            local_260 = CONCAT44(uStack_20c,local_210);
            uStack_288 = uStack_f8;
            local_290 = local_100;
            uStack_278 = uStack_e8;
            local_280 = local_f0;
            uStack_268 = uStack_d8;
            local_270 = local_e0;
            uStack_248 = uStack_1f8;
            local_250 = local_200;
            uStack_238 = uStack_1e8;
            local_240 = local_1f0;
            uStack_228 = uStack_1d8;
            local_230 = local_1e0;
            local_2e8 = param_4;
            local_220 = fVar16 < fVar20;
            btGjkPairDetector::getClosestPoints
                      ((ClosestPointInput *)abStack_1b8,(Result *)&local_150,
                       (btIDebugDraw *)&local_318,SUB81(local_218,0));
            iVar18 = *(int *)(this + 0x34);
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < iVar18);
      }
    }
    if (this[0x20] == (btConvexConvexAlgorithm)0x0) {
      return;
    }
    goto LAB_01244fd4;
  }
  fVar15 = (float)btPersistentManifold::getContactBreakingThreshold(pbVar3);
  lVar8 = *(long *)(param_1 + 0x18);
  lVar11 = *(long *)(param_2 + 0x18);
  lVar9 = (long)*(int *)(pbVar13 + 0x40) * 4;
  lVar10 = (long)*(int *)(pbVar12 + 0x40) * 4;
  pfVar7 = (float *)(lVar8 + lVar9);
  fVar27 = *(float *)(pbVar12 + lVar10 + 0x28);
  pfVar1 = (float *)(lVar11 + lVar10);
  fVar30 = *pfVar7;
  fVar29 = pfVar7[4];
  fVar21 = *pfVar1;
  fVar20 = pfVar1[4];
  fVar26 = *(float *)(pbVar13 + lVar9 + 0x28);
  fVar31 = pfVar7[8];
  fVar16 = pfVar1[8];
  fVar25 = *(float *)(lVar11 + 0x30) - *(float *)(lVar8 + 0x30);
  fVar23 = *(float *)(lVar11 + 0x34) - *(float *)(lVar8 + 0x34);
  fVar22 = *(float *)(lVar11 + 0x38) - *(float *)(lVar8 + 0x38);
  fVar41 = *(float *)(pbVar13 + (long)((*(int *)(pbVar13 + 0x40) + 2) % 3) * 4 + 0x28);
  fVar40 = *(float *)(pbVar12 + (long)((*(int *)(pbVar12 + 0x40) + 2) % 3) * 4 + 0x28);
  fVar34 = fVar30 * fVar21 + fVar29 * fVar20 + fVar31 * fVar16;
  fVar33 = fVar30 * fVar25 + fVar29 * fVar23 + fVar31 * fVar22;
  fVar32 = 1.0 - fVar34 * fVar34;
  fVar36 = fVar21 * fVar25 + fVar20 * fVar23 + fVar16 * fVar22;
  fVar38 = 0.0;
  if (fVar32 == 0.0) {
LAB_01243f20:
    fVar32 = fVar38;
  }
  else {
    fVar32 = (fVar33 - fVar34 * fVar36) / fVar32;
    fVar38 = -fVar26;
    if ((fVar32 < -fVar26) || (fVar38 = fVar26, fVar26 < fVar32)) goto LAB_01243f20;
  }
  fVar36 = fVar34 * fVar32 - fVar36;
  fVar38 = -fVar27;
  if (fVar38 <= fVar36) {
    fVar38 = fVar36;
    if (fVar27 < fVar36) {
      fVar33 = fVar27 * fVar34 + fVar33;
      fVar32 = -fVar26;
      fVar38 = fVar27;
      if (fVar32 <= fVar33) goto joined_r0x01244088;
    }
  }
  else {
    fVar33 = fVar34 * fVar38 + fVar33;
    fVar32 = -fVar26;
    if (-fVar26 <= fVar33) {
joined_r0x01244088:
      fVar32 = fVar33;
      if (fVar26 < fVar32) {
        fVar32 = fVar26;
      }
    }
  }
  fVar25 = fVar21 * fVar38 + (fVar25 - fVar30 * fVar32);
  fVar33 = fVar20 * fVar38 + (fVar23 - fVar29 * fVar32);
  fVar22 = fVar16 * fVar38 + (fVar22 - fVar31 * fVar32);
  fVar23 = fVar22 * fVar22 + fVar25 * fVar25 + fVar33 * fVar33;
  fVar32 = SQRT(fVar23);
  if (NAN(fVar32)) {
    fVar32 = sqrtf(fVar23);
  }
  fVar32 = (fVar32 - fVar41) - fVar40;
  if (fVar32 <= fVar15) {
    if (fVar23 <= 1.4210855e-14) {
      if (ABS(fVar31) <= 0.70710677) {
        fVar22 = fVar30 * fVar30 + fVar29 * fVar29;
        fVar33 = SQRT(fVar22);
        if (NAN(fVar33)) {
          fVar33 = sqrtf(fVar22);
        }
        local_b0[0] = -(fVar29 * (1.0 / fVar33));
        local_b0[1] = fVar30 * (1.0 / fVar33);
        fVar29 = 0.0;
      }
      else {
        fVar22 = fVar29 * fVar29 + fVar31 * fVar31;
        fVar33 = SQRT(fVar22);
        if (NAN(fVar33)) {
          fVar33 = sqrtf(fVar22);
        }
        local_b0[1] = -(fVar31 * (1.0 / fVar33));
        local_b0[0] = 0.0;
        fVar29 = fVar29 * (1.0 / fVar33);
      }
      lVar8 = 2;
    }
    else {
      local_b0[2] = SQRT(fVar23);
      if (NAN(local_b0[2])) {
        local_b0[2] = sqrtf(fVar23);
      }
      local_b0[2] = -1.0 / local_b0[2];
      fVar29 = 0.0;
      local_b0[0] = fVar25 * local_b0[2];
      local_b0[1] = fVar33 * local_b0[2];
      local_b0[2] = fVar22 * local_b0[2];
      lVar8 = 3;
    }
    local_b0[lVar8] = fVar29;
    local_c0 = fVar21 * fVar38 + *(float *)(lVar11 + 0x30) + fVar40 * local_b0[0];
    fStack_bc = fVar20 * fVar38 + *(float *)(lVar11 + 0x34) + fVar40 * local_b0[1];
    local_b8 = fVar16 * fVar38 + *(float *)(lVar11 + 0x38) + fVar40 * local_b0[2];
    local_b4 = 0;
  }
  if (fVar32 < fVar15) {
    (**(code **)(*(long *)param_4 + 0x20))(fVar32,param_4,local_b0,&local_c0);
  }
LAB_01244fd4:
  pbVar3 = *(btPersistentManifold **)(param_4 + 8);
  if (*(int *)(pbVar3 + 0x318) != 0) {
    lVar8 = *(long *)(pbVar3 + 0x308);
    lVar9 = *(long *)(*(long *)(param_4 + 0x10) + 0x10);
    if (lVar8 == lVar9) {
      lVar9 = *(long *)(*(long *)(param_4 + 0x18) + 0x10);
    }
    else {
      lVar8 = *(long *)(*(long *)(param_4 + 0x18) + 0x10);
    }
    btPersistentManifold::refreshContactPoints
              (pbVar3,(btTransform *)(lVar8 + 8),(btTransform *)(lVar9 + 8));
  }
  return;
}

