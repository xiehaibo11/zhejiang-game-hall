
/* btCollisionWorld::objectQuerySingleInternal(btConvexShape const*, btTransform const&, btTransform
   const&, btCollisionObjectWrapper const*, btCollisionWorld::ConvexResultCallback&, float) */

void btCollisionWorld::objectQuerySingleInternal
               (btConvexShape *param_1,btTransform *param_2,btTransform *param_3,
               btCollisionObjectWrapper *param_4,ConvexResultCallback *param_5,float param_6)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  CProfileManager *this;
  btTriangleCallback *pbVar4;
  undefined8 uVar5;
  btTransform *pbVar6;
  long lVar7;
  long lVar8;
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
  undefined **local_680;
  undefined4 local_678;
  undefined4 local_674;
  ConvexResultCallback *local_670;
  undefined4 local_668;
  undefined4 local_5b0;
  float local_5a8;
  ConvexResultCallback *local_5a0;
  undefined8 uStack_598;
  btTriangleCallback *local_590;
  float local_588;
  float local_584;
  float local_580;
  undefined4 local_57c;
  float local_578;
  float local_574;
  float local_570;
  undefined4 local_56c;
  float local_568;
  float local_564;
  float local_560;
  undefined8 local_55c;
  undefined8 local_554;
  undefined4 local_54c;
  long local_548 [6];
  undefined8 local_518;
  float local_510;
  undefined4 local_50c;
  float local_490;
  float fStack_48c;
  float fStack_488;
  undefined4 uStack_484;
  undefined8 local_480;
  ulong uStack_478;
  float local_470;
  undefined8 local_468;
  float local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 *puStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  float local_428;
  undefined4 local_388;
  float local_380;
  ConvexResultCallback *local_378;
  undefined8 local_370;
  btTriangleCallback *local_368;
  float local_360;
  float local_35c;
  float local_358;
  undefined4 local_354;
  float local_350;
  float local_34c;
  float local_348;
  undefined4 local_344;
  float local_340;
  float local_33c;
  float local_338;
  undefined8 local_334;
  undefined8 local_32c;
  undefined4 local_324;
  float local_320;
  float local_31c;
  float local_318;
  undefined4 local_314;
  float local_310;
  float local_30c;
  float local_308;
  undefined4 local_304;
  long local_300 [6];
  undefined **local_2d0;
  undefined8 local_2c8;
  ulong local_2c0;
  undefined8 local_2b8;
  ulong uStack_2b0;
  undefined8 local_2a8;
  ulong uStack_2a0;
  float local_298;
  float local_294;
  float local_290;
  undefined4 local_28c;
  undefined4 local_194;
  undefined1 local_17c;
  undefined8 local_160;
  float local_158;
  undefined4 local_154;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  float local_b8;
  undefined8 local_b0;
  float local_a8;
  
  pbVar4 = *(btTriangleCallback **)(param_4 + 8);
  pbVar6 = *(btTransform **)(param_4 + 0x18);
  iVar2 = *(int *)(pbVar4 + 8);
  if (iVar2 < 0x14) {
    local_b0 = 0;
    local_160 = &PTR_DebugDraw_01731d48;
    local_b8 = *(float *)(param_5 + 8);
    local_2d0 = &PTR__btConvexPenetrationDepthSolver_01733be0;
    local_194 = 0x38d1b717;
    local_17c = 0;
    local_a8 = param_6;
    btContinuousConvexCollision::btContinuousConvexCollision
              ((btContinuousConvexCollision *)local_300,param_1,(btConvexShape *)pbVar4,
               (btVoronoiSimplexSolver *)&local_2c8,(btConvexPenetrationDepthSolver *)&local_2d0);
    uVar3 = (**(code **)(local_300[0] + 0x10))(local_300,param_2,param_3,pbVar6,pbVar6,&local_160);
    if ((((uVar3 & 1) != 0) &&
        (fVar9 = local_d8 * local_d8 + fStack_d4 * fStack_d4 + fStack_d0 * fStack_d0, 0.0001 < fVar9
        )) && (local_b8 < *(float *)(param_5 + 8))) {
      fVar10 = SQRT(fVar9);
      if (NAN(fVar10)) {
        fVar10 = sqrtf(fVar9);
      }
      fVar10 = 1.0 / fVar10;
      local_d8 = fVar10 * local_d8;
      fStack_d4 = fVar10 * fStack_d4;
      fStack_d0 = fVar10 * fStack_d0;
      puStack_440 = (undefined8 *)CONCAT44(uStack_cc,fStack_d0);
      local_448 = CONCAT44(fStack_d4,local_d8);
      local_458 = *(undefined ***)(param_4 + 0x10);
      local_450 = 0;
      uStack_430 = uStack_c0;
      local_438 = local_c8;
      local_428 = local_b8;
      (**(code **)(*(long *)param_5 + 0x18))(param_5,&local_458,1);
    }
    btConvexCast::~btConvexCast((btConvexCast *)local_300);
  }
  else if (iVar2 - 0x15U < 9) {
    if (iVar2 == 0x1c) {
      local_468 = 0;
      local_518 = &PTR_DebugDraw_01731d48;
      local_470 = *(float *)(param_5 + 8);
      local_460 = param_6;
      btContinuousConvexCollision::btContinuousConvexCollision
                ((btContinuousConvexCollision *)local_548,param_1,(btStaticPlaneShape *)pbVar4);
      uVar3 = (**(code **)(local_548[0] + 0x10))(local_548,param_2,param_3,pbVar6,pbVar6,&local_518)
      ;
      if ((((uVar3 & 1) != 0) &&
          (fVar9 = local_490 * local_490 + fStack_48c * fStack_48c + fStack_488 * fStack_488,
          0.0001 < fVar9)) && (local_470 < *(float *)(param_5 + 8))) {
        fVar10 = SQRT(fVar9);
        if (NAN(fVar10)) {
          fVar10 = sqrtf(fVar9);
        }
        fVar10 = 1.0 / fVar10;
        local_490 = fVar10 * local_490;
        fStack_48c = fVar10 * fStack_48c;
        fStack_488 = fVar10 * fStack_488;
        local_2c8 = *(undefined8 *)(param_4 + 0x10);
        uStack_2b0 = CONCAT44(uStack_484,fStack_488);
        local_2b8 = CONCAT44(fStack_48c,local_490);
        local_2c0 = 0;
        uStack_2a0 = uStack_478;
        local_2a8 = local_480;
        local_298 = local_470;
        (**(code **)(*(long *)param_5 + 0x18))(param_5,&local_2c8,1);
      }
      btConvexCast::~btConvexCast((btConvexCast *)local_548);
    }
    else {
      if (iVar2 == 0x15) {
        fVar22 = *(float *)(pbVar6 + 0x34);
        fVar15 = *(float *)pbVar6;
        fVar14 = *(float *)(pbVar6 + 4);
        fVar16 = *(float *)(pbVar6 + 0x10);
        fVar11 = *(float *)(pbVar6 + 0x14);
        fVar13 = *(float *)(pbVar6 + 8);
        fVar12 = *(float *)(pbVar6 + 0x18);
        fVar25 = *(float *)(param_2 + 0x30);
        fVar27 = *(float *)(param_2 + 0x34);
        fVar20 = *(float *)(pbVar6 + 0x20);
        fVar9 = *(float *)(pbVar6 + 0x24);
        fVar10 = *(float *)(pbVar6 + 0x28);
        fVar24 = *(float *)(pbVar6 + 0x38);
        fVar29 = *(float *)(param_2 + 0x38);
        fVar21 = -*(float *)(pbVar6 + 0x30);
        local_320 = (fVar15 * fVar21 - fVar16 * fVar22) - fVar20 * fVar24;
        local_31c = (fVar14 * fVar21 - fVar11 * fVar22) - fVar9 * fVar24;
        local_318 = (fVar13 * fVar21 - fVar12 * fVar22) - fVar10 * fVar24;
        local_310 = local_320 + fVar15 * fVar25 + fVar16 * fVar27 + fVar20 * fVar29;
        local_30c = local_31c + fVar14 * fVar25 + fVar11 * fVar27 + fVar9 * fVar29;
        local_308 = local_318 + fVar13 * fVar25 + fVar12 * fVar27 + fVar10 * fVar29;
        local_304 = 0;
        fVar21 = *(float *)(param_3 + 0x30);
        fVar22 = *(float *)(param_3 + 0x34);
        fVar24 = *(float *)(param_3 + 0x38);
        local_314 = 0;
        local_320 = local_320 + fVar15 * fVar21 + fVar16 * fVar22 + fVar20 * fVar24;
        local_31c = local_31c + fVar14 * fVar21 + fVar11 * fVar22 + fVar9 * fVar24;
        local_318 = local_318 + fVar13 * fVar21 + fVar12 * fVar22 + fVar10 * fVar24;
        fVar21 = *(float *)param_3;
        fVar22 = *(float *)(param_3 + 4);
        fVar24 = *(float *)(param_3 + 0x10);
        fVar25 = *(float *)(param_3 + 0x14);
        fVar31 = *(float *)(param_3 + 8);
        fVar32 = *(float *)(param_3 + 0x18);
        fVar27 = *(float *)(param_3 + 0x20);
        fVar29 = *(float *)(param_3 + 0x24);
        fVar33 = *(float *)(param_3 + 0x28);
        local_360 = fVar15 * fVar21 + fVar16 * fVar24 + fVar20 * fVar27;
        local_35c = fVar15 * fVar22 + fVar16 * fVar25 + fVar20 * fVar29;
        local_358 = fVar15 * fVar31 + fVar16 * fVar32 + fVar20 * fVar33;
        local_350 = fVar14 * fVar21 + fVar11 * fVar24 + fVar9 * fVar27;
        local_34c = fVar14 * fVar22 + fVar11 * fVar25 + fVar9 * fVar29;
        local_348 = fVar14 * fVar31 + fVar11 * fVar32 + fVar9 * fVar33;
        local_340 = fVar13 * fVar21 + fVar12 * fVar24 + fVar10 * fVar27;
        local_33c = fVar13 * fVar22 + fVar12 * fVar25 + fVar10 * fVar29;
        local_338 = fVar13 * fVar31 + fVar12 * fVar32 + fVar10 * fVar33;
        local_354 = 0;
        local_344 = 0;
        local_324 = 0;
        local_32c = 0;
        local_334 = 0;
        uVar5 = *(undefined8 *)(param_4 + 0x10);
        fVar9 = (float)(**(code **)(*(long *)pbVar4 + 0x60))(pbVar4);
        btTriangleConvexcastCallback::btTriangleConvexcastCallback
                  ((btTriangleConvexcastCallback *)&local_458,param_1,param_2,param_3,pbVar6,fVar9);
        local_458 = &PTR__btTriangleCallback_01731c58;
        local_388 = *(undefined4 *)(param_5 + 8);
        local_380 = param_6;
        local_378 = param_5;
        local_370 = uVar5;
        local_368 = pbVar4;
        (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_360,&local_2c8,&local_680);
        btBvhTriangleMeshShape::performConvexcast
                  (pbVar4,(btVector3 *)&local_458,(btVector3 *)&local_310,(btVector3 *)&local_320,
                   (btVector3 *)&local_2c8);
        pbVar4 = (btTriangleCallback *)&local_458;
      }
      else {
        fVar14 = *(float *)(pbVar6 + 0x30);
        fVar23 = *(float *)pbVar6;
        fVar28 = *(float *)(pbVar6 + 4);
        fVar31 = *(float *)(pbVar6 + 0x10);
        fVar29 = *(float *)(pbVar6 + 0x14);
        fVar33 = *(float *)(pbVar6 + 0x20);
        fVar17 = *(float *)(pbVar6 + 0x24);
        fVar30 = *(float *)(pbVar6 + 8);
        fVar19 = *(float *)(pbVar6 + 0x18);
        fVar18 = *(float *)(pbVar6 + 0x28);
        fVar9 = *(float *)(pbVar6 + 0x34);
        fVar10 = *(float *)(pbVar6 + 0x38);
        fVar11 = *(float *)(param_2 + 0x30);
        fVar12 = *(float *)(param_2 + 0x34);
        fVar13 = *(float *)param_3;
        fVar15 = *(float *)(param_3 + 4);
        fVar16 = *(float *)(param_3 + 0x10);
        fVar22 = *(float *)(param_3 + 0x14);
        fVar25 = *(float *)(param_3 + 8);
        fVar27 = *(float *)(param_3 + 0x18);
        fVar20 = *(float *)(param_3 + 0x20);
        fVar26 = *(float *)(param_3 + 0x24);
        fVar24 = *(float *)(param_3 + 0x28);
        local_588 = fVar23 * fVar13 + fVar31 * fVar16 + fVar33 * fVar20;
        local_584 = fVar23 * fVar15 + fVar31 * fVar22 + fVar33 * fVar26;
        local_580 = fVar23 * fVar25 + fVar31 * fVar27 + fVar33 * fVar24;
        local_568 = fVar30 * fVar13 + fVar19 * fVar16 + fVar18 * fVar20;
        fVar21 = *(float *)(param_3 + 0x30);
        fVar32 = *(float *)(param_2 + 0x38);
        local_578 = fVar28 * fVar13 + fVar29 * fVar16 + fVar17 * fVar20;
        fVar16 = *(float *)(param_3 + 0x34);
        local_574 = fVar28 * fVar15 + fVar29 * fVar22 + fVar17 * fVar26;
        local_570 = fVar28 * fVar25 + fVar29 * fVar27 + fVar17 * fVar24;
        fVar20 = *(float *)(param_3 + 0x38);
        local_564 = fVar30 * fVar15 + fVar19 * fVar22 + fVar18 * fVar26;
        local_560 = fVar30 * fVar25 + fVar19 * fVar27 + fVar18 * fVar24;
        local_57c = 0;
        local_56c = 0;
        local_54c = 0;
        local_554 = 0;
        local_55c = 0;
        uVar5 = *(undefined8 *)(param_4 + 0x10);
        fVar13 = (float)(**(code **)(*(long *)pbVar4 + 0x60))(pbVar4);
        btTriangleConvexcastCallback::btTriangleConvexcastCallback
                  ((btTriangleConvexcastCallback *)&local_680,param_1,param_2,param_3,pbVar6,fVar13)
        ;
        local_680 = &PTR__btTriangleCallback_01731ca8;
        local_5b0 = *(undefined4 *)(param_5 + 8);
        local_5a8 = param_6;
        local_5a0 = param_5;
        uStack_598 = uVar5;
        local_590 = pbVar4;
        (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_588,&local_2c8,&local_458);
        fVar14 = -fVar14;
        fVar15 = (fVar23 * fVar14 - fVar31 * fVar9) - fVar33 * fVar10;
        fVar13 = (fVar28 * fVar14 - fVar29 * fVar9) - fVar17 * fVar10;
        fVar14 = (fVar30 * fVar14 - fVar19 * fVar9) - fVar18 * fVar10;
        fVar10 = fVar15 + fVar23 * fVar11 + fVar31 * fVar12 + fVar33 * fVar32;
        fVar9 = fVar13 + fVar28 * fVar11 + fVar29 * fVar12 + fVar17 * fVar32;
        fVar15 = fVar15 + fVar23 * fVar21 + fVar31 * fVar16 + fVar33 * fVar20;
        local_510 = fVar14 + fVar30 * fVar11 + fVar19 * fVar12 + fVar18 * fVar32;
        fVar13 = fVar13 + fVar28 * fVar21 + fVar29 * fVar16 + fVar17 * fVar20;
        local_154 = 0;
        fVar11 = fVar10;
        if (fVar15 < fVar10) {
          fVar11 = fVar15;
        }
        fVar14 = fVar14 + fVar30 * fVar21 + fVar19 * fVar16 + fVar18 * fVar20;
        fVar12 = fVar9;
        if (fVar13 < fVar9) {
          fVar12 = fVar13;
        }
        local_158 = local_510;
        if (fVar14 < local_510) {
          local_158 = fVar14;
        }
        local_50c = 0;
        if (fVar10 < fVar15) {
          fVar10 = fVar15;
        }
        if (fVar9 < fVar13) {
          fVar9 = fVar13;
        }
        if (local_510 < fVar14) {
          local_510 = fVar14;
        }
        local_158 = (float)local_2c0 + local_158;
        local_510 = (float)local_450 + local_510;
        local_160 = (undefined **)CONCAT44(local_2c8._4_4_ + fVar12,(float)local_2c8 + fVar11);
        local_518 = (undefined **)CONCAT44(local_458._4_4_ + fVar9,(float)local_458 + fVar10);
        (**(code **)(*(long *)pbVar4 + 0x80))(pbVar4,&local_680,&local_160,&local_518);
        pbVar4 = (btTriangleCallback *)&local_680;
      }
      btTriangleCallback::~btTriangleCallback(pbVar4);
    }
  }
  else if (iVar2 == 0x1f) {
    this = (CProfileManager *)CProfileManager::Start_Profile("convexSweepCompound");
    if (0 < *(int *)(pbVar4 + 0x1c)) {
      lVar7 = 0;
      lVar8 = 0x40;
      do {
        fVar11 = *(float *)pbVar6;
        fVar10 = *(float *)(pbVar6 + 4);
        fVar19 = *(float *)(pbVar6 + 8);
        fVar14 = *(float *)(pbVar6 + 0x18);
        puVar1 = (undefined8 *)(*(long *)(pbVar4 + 0x28) + lVar8);
        fVar21 = *(float *)(puVar1 + -8);
        fVar22 = *(float *)((long)puVar1 + -0x3c);
        fVar31 = *(float *)(puVar1 + -4);
        fVar32 = *(float *)((long)puVar1 + -0x1c);
        fVar20 = *(float *)(pbVar6 + 0x28);
        fVar12 = *(float *)(pbVar6 + 0x10);
        fVar13 = *(float *)(pbVar6 + 0x14);
        fVar15 = *(float *)(pbVar6 + 0x20);
        fVar16 = *(float *)(pbVar6 + 0x24);
        fVar24 = *(float *)(puVar1 + -7);
        fVar25 = *(float *)(puVar1 + -6);
        fVar27 = *(float *)((long)puVar1 + -0x2c);
        fVar29 = *(float *)(puVar1 + -5);
        fVar33 = *(float *)(puVar1 + -3);
        fVar17 = *(float *)(puVar1 + -2);
        fVar18 = *(float *)((long)puVar1 + -0xc);
        fVar9 = *(float *)(puVar1 + -1);
        local_298 = fVar17 * fVar11 + fVar18 * fVar10 + fVar9 * fVar19 + *(float *)(pbVar6 + 0x30);
        local_294 = fVar17 * fVar12 + fVar18 * fVar13 + fVar9 * fVar14 + *(float *)(pbVar6 + 0x34);
        local_290 = fVar17 * fVar15 + fVar18 * fVar16 + fVar9 * fVar20 + *(float *)(pbVar6 + 0x38);
        local_450 = *puVar1;
        local_674 = 0xffff0001;
        local_680 = &PTR__ConvexResultCallback_01731cf8;
        local_668 = (undefined4)lVar7;
        local_2c8 = CONCAT44(fVar22 * fVar11 + fVar27 * fVar10 + fVar32 * fVar19,
                             fVar21 * fVar11 + fVar25 * fVar10 + fVar31 * fVar19);
        local_2c0 = (ulong)(uint)(fVar24 * fVar11 + fVar29 * fVar10 + fVar33 * fVar19);
        local_2b8 = CONCAT44(fVar22 * fVar12 + fVar27 * fVar13 + fVar32 * fVar14,
                             fVar21 * fVar12 + fVar25 * fVar13 + fVar31 * fVar14);
        uStack_2b0 = (ulong)(uint)(fVar24 * fVar12 + fVar29 * fVar13 + fVar33 * fVar14);
        local_2a8 = CONCAT44(fVar22 * fVar15 + fVar27 * fVar16 + fVar32 * fVar20,
                             fVar21 * fVar15 + fVar25 * fVar16 + fVar31 * fVar20);
        uStack_2a0 = (ulong)(uint)(fVar24 * fVar15 + fVar29 * fVar16 + fVar33 * fVar20);
        local_28c = 0;
        local_678 = *(undefined4 *)(param_5 + 8);
        local_448 = *(undefined8 *)(param_4 + 0x10);
        puStack_440 = &local_2c8;
        local_438 = CONCAT44(local_668,0xffffffff);
        local_670 = param_5;
        local_458 = (undefined **)param_4;
        this = (CProfileManager *)
               objectQuerySingleInternal
                         (param_1,param_2,param_3,(btCollisionObjectWrapper *)&local_458,
                          (ConvexResultCallback *)&local_680,param_6);
        lVar7 = lVar7 + 1;
        lVar8 = lVar8 + 0x58;
      } while (lVar7 < *(int *)(pbVar4 + 0x1c));
    }
    CProfileManager::Stop_Profile(this);
  }
  return;
}

