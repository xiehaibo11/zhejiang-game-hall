
/* btCollisionWorld::rayTestSingleInternal(btTransform const&, btTransform const&,
   btCollisionObjectWrapper const*, btCollisionWorld::RayResultCallback&) */

void btCollisionWorld::rayTestSingleInternal
               (btTransform *param_1,btTransform *param_2,btCollisionObjectWrapper *param_3,
               RayResultCallback *param_4)

{
  btGjkConvexCast *pbVar1;
  int iVar2;
  undefined **ppuVar3;
  ulong uVar4;
  int iVar5;
  btTriangleCallback *pbVar6;
  float *pfVar7;
  undefined8 uVar8;
  float *pfVar9;
  float *pfVar10;
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
  undefined **local_528 [5];
  undefined4 local_4fc;
  RayResultCallback *local_4f8;
  undefined8 uStack_4f0;
  btTriangleCallback *local_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  float local_4a0;
  float local_49c;
  float local_498;
  float local_494;
  float local_490;
  float fStack_48c;
  float fStack_488;
  float fStack_484;
  undefined **local_480 [5];
  undefined4 local_454;
  RayResultCallback *local_450;
  undefined8 uStack_448;
  btTriangleCallback *local_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  ulong local_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  float local_3d8;
  undefined4 local_3cc;
  RayResultCallback *local_3c8;
  undefined8 uStack_3c0;
  btTriangleCallback *local_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  float local_370;
  float local_36c;
  float local_368;
  undefined4 local_364;
  float local_360;
  float local_35c;
  float local_358;
  undefined4 local_354;
  btGjkConvexCast local_350 [32];
  btSubsimplexConvexCast local_330 [32];
  undefined8 local_310;
  undefined8 uStack_308;
  btTriangleCallback *local_300;
  float *local_2f8;
  btTransform *local_2f0;
  btTransform *local_2e8;
  RayResultCallback *local_2e0;
  undefined4 local_1dc;
  undefined1 local_1c4;
  undefined8 local_1a0;
  undefined8 uStack_198;
  float local_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  float local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined **local_e0;
  undefined4 local_d8;
  undefined4 local_b8;
  undefined4 local_a8;
  
  btConvexInternalShape::btConvexInternalShape((btConvexInternalShape *)&local_e0);
  local_d8 = 8;
  local_b8 = 0;
  local_e0 = &PTR__btConvexShape_01733760;
  local_a8 = 0;
  pbVar6 = *(btTriangleCallback **)(param_3 + 8);
  pfVar7 = *(float **)(param_3 + 0x18);
  iVar2 = *(int *)(pbVar6 + 8);
  if (iVar2 < 0x14) {
    local_f0 = 0;
    local_e8 = 0;
    local_1a0 = &PTR_DebugDraw_01731d48;
    local_f8 = *(float *)(param_4 + 8);
    local_1dc = 0x38d1b717;
    local_1c4 = 0;
    local_e0 = &PTR__btConvexShape_01733760;
    btSubsimplexConvexCast::btSubsimplexConvexCast
              (local_330,(btConvexShape *)&local_e0,(btConvexShape *)pbVar6,
               (btVoronoiSimplexSolver *)&local_310);
    btGjkConvexCast::btGjkConvexCast
              (local_350,(btConvexShape *)&local_e0,(btConvexShape *)pbVar6,
               (btVoronoiSimplexSolver *)&local_310);
    pbVar1 = local_350;
    if ((*(uint *)(param_4 + 0x1c) & 4) != 0) {
      pbVar1 = (btGjkConvexCast *)local_330;
    }
    uVar4 = (**(code **)(*(long *)pbVar1 + 0x10))(pbVar1,param_1,param_2,pfVar7,pfVar7,&local_1a0);
    if ((((uVar4 & 1) != 0) &&
        (fVar11 = local_118 * local_118 + fStack_114 * fStack_114 + fStack_110 * fStack_110,
        0.0001 < fVar11)) && (local_f8 < *(float *)(param_4 + 8))) {
      fVar12 = SQRT(fVar11);
      if (NAN(fVar12)) {
        fVar12 = sqrtf(fVar11);
      }
      fVar12 = 1.0 / fVar12;
      local_118 = fVar12 * local_118;
      fStack_114 = fVar12 * fStack_114;
      fStack_110 = fVar12 * fStack_110;
      local_3f8 = *(undefined ***)(param_3 + 0x10);
      uStack_3e0 = CONCAT44(uStack_10c,fStack_110);
      local_3e8 = CONCAT44(fStack_114,local_118);
      local_3f0 = 0;
      local_3d8 = local_f8;
      (**(code **)(*(long *)param_4 + 0x18))(param_4,&local_3f8,1);
    }
    btConvexCast::~btConvexCast((btConvexCast *)local_350);
    btConvexCast::~btConvexCast((btConvexCast *)local_330);
    ppuVar3 = local_e0;
  }
  else if (iVar2 - 0x15U < 9) {
    pfVar10 = pfVar7 + 4;
    fVar17 = *pfVar10;
    pfVar9 = pfVar7 + 8;
    fVar18 = *pfVar9;
    fVar19 = *pfVar7;
    fVar22 = pfVar7[1];
    fVar12 = pfVar7[0xc];
    fVar11 = *(float *)(param_1 + 0x30);
    fVar16 = *(float *)(param_1 + 0x34);
    fVar13 = *(float *)(param_1 + 0x38);
    fVar26 = pfVar7[2];
    fVar27 = pfVar7[5];
    fVar28 = pfVar7[6];
    fVar14 = pfVar7[9];
    fVar15 = pfVar7[10];
    fVar20 = -fVar12;
    fVar25 = -pfVar7[0xd];
    fVar24 = -pfVar7[0xe];
    local_370 = (fVar19 * fVar20 - fVar17 * pfVar7[0xd]) - fVar18 * pfVar7[0xe];
    local_36c = (fVar27 * fVar25 - fVar22 * fVar12) + fVar14 * fVar24;
    local_368 = (fVar28 * fVar25 - fVar26 * fVar12) + fVar15 * fVar24;
    local_360 = local_370 + fVar19 * fVar11 + fVar17 * fVar16 + fVar18 * fVar13;
    local_35c = local_36c + fVar22 * fVar11 + fVar27 * fVar16 + fVar14 * fVar13;
    local_358 = local_368 + fVar26 * fVar11 + fVar28 * fVar16 + fVar15 * fVar13;
    local_354 = 0;
    fVar12 = *(float *)(param_2 + 0x30);
    fVar23 = *(float *)(param_2 + 0x34);
    fVar21 = *(float *)(param_2 + 0x38);
    local_364 = 0;
    local_370 = local_370 + fVar19 * fVar12 + fVar17 * fVar23 + fVar18 * fVar21;
    local_36c = local_36c + fVar22 * fVar12 + fVar27 * fVar23 + fVar14 * fVar21;
    local_368 = local_368 + fVar26 * fVar12 + fVar28 * fVar23 + fVar15 * fVar21;
    if (*(int *)(pbVar6 + 8) == 0x19) {
      uVar8 = *(undefined8 *)(param_3 + 0x10);
      local_e0 = &PTR__btConvexShape_01733760;
      btTriangleRaycastCallback::btTriangleRaycastCallback
                ((btTriangleRaycastCallback *)local_480,(btVector3 *)&local_360,
                 (btVector3 *)&local_370,*(uint *)(param_4 + 0x1c));
      local_480[0] = &PTR__btTriangleCallback_01731b08;
      uStack_430 = *(undefined8 *)(pfVar7 + 2);
      local_438 = *(undefined8 *)pfVar7;
      uStack_420 = *(undefined8 *)(pfVar7 + 6);
      local_428 = *(undefined8 *)pfVar10;
      uStack_410 = *(undefined8 *)(pfVar7 + 10);
      local_418 = *(undefined8 *)pfVar9;
      uStack_400 = *(undefined8 *)(pfVar7 + 0xe);
      local_408 = *(undefined8 *)(pfVar7 + 0xc);
      local_454 = *(undefined4 *)(param_4 + 8);
      local_450 = param_4;
      uStack_448 = uVar8;
      local_440 = pbVar6;
      (**(code **)(*(long *)pbVar6 + 0x120))(pbVar6,local_480,&local_360,&local_370);
      btTriangleCallback::~btTriangleCallback((btTriangleCallback *)local_480);
      ppuVar3 = local_e0;
    }
    else if (*(int *)(pbVar6 + 8) == 0x15) {
      uVar8 = *(undefined8 *)(param_3 + 0x10);
      local_e0 = &PTR__btConvexShape_01733760;
      btTriangleRaycastCallback::btTriangleRaycastCallback
                ((btTriangleRaycastCallback *)&local_3f8,(btVector3 *)&local_360,
                 (btVector3 *)&local_370,*(uint *)(param_4 + 0x1c));
      local_3f8 = &PTR__btTriangleCallback_01731b08;
      uStack_3a8 = *(undefined8 *)(pfVar7 + 2);
      local_3b0 = *(undefined8 *)pfVar7;
      uStack_398 = *(undefined8 *)(pfVar7 + 6);
      local_3a0 = *(undefined8 *)pfVar10;
      uStack_388 = *(undefined8 *)(pfVar7 + 10);
      local_390 = *(undefined8 *)pfVar9;
      uStack_378 = *(undefined8 *)(pfVar7 + 0xe);
      local_380 = *(undefined8 *)(pfVar7 + 0xc);
      local_3cc = *(undefined4 *)(param_4 + 8);
      local_3c8 = param_4;
      uStack_3c0 = uVar8;
      local_3b8 = pbVar6;
      btBvhTriangleMeshShape::performRaycast(pbVar6,(btVector3 *)&local_3f8,(btVector3 *)&local_360)
      ;
      btTriangleCallback::~btTriangleCallback((btTriangleCallback *)&local_3f8);
      ppuVar3 = local_e0;
    }
    else {
      fVar19 = *pfVar7;
      fVar26 = pfVar7[1];
      fVar17 = pfVar7[4];
      fVar22 = pfVar7[8];
      fVar18 = pfVar7[2];
      local_49c = fVar26 * fVar20 + fVar27 * fVar25 + fVar14 * fVar24;
      local_4a0 = fVar19 * fVar20 + fVar17 * fVar25 + fVar22 * fVar24;
      local_498 = fVar18 * fVar20 + fVar28 * fVar25 + fVar15 * fVar24;
      local_490 = local_4a0 + fVar19 * fVar11 + fVar17 * fVar16 + fVar22 * fVar13;
      fStack_48c = local_49c + fVar26 * fVar11 + fVar27 * fVar16 + fVar14 * fVar13;
      fStack_488 = local_498 + fVar18 * fVar11 + fVar28 * fVar16 + fVar15 * fVar13;
      local_4a0 = local_4a0 + fVar19 * fVar12 + fVar17 * fVar23 + fVar22 * fVar21;
      local_49c = local_49c + fVar26 * fVar12 + fVar27 * fVar23 + fVar14 * fVar21;
      local_498 = local_498 + fVar18 * fVar12 + fVar28 * fVar23 + fVar15 * fVar21;
      fStack_484 = 0.0;
      local_494 = 0.0;
      uVar8 = *(undefined8 *)(param_3 + 0x10);
      local_e0 = &PTR__btConvexShape_01733760;
      btTriangleRaycastCallback::btTriangleRaycastCallback
                ((btTriangleRaycastCallback *)local_528,(btVector3 *)&local_490,
                 (btVector3 *)&local_4a0,*(uint *)(param_4 + 0x1c));
      local_528[0] = &PTR__btTriangleCallback_01731b58;
      uStack_4d8 = *(undefined8 *)(pfVar7 + 2);
      local_4e0 = *(undefined8 *)pfVar7;
      uStack_4c8 = *(undefined8 *)(pfVar7 + 6);
      local_4d0 = *(undefined8 *)pfVar10;
      uStack_4b8 = *(undefined8 *)(pfVar7 + 10);
      local_4c0 = *(undefined8 *)pfVar9;
      uStack_4a8 = *(undefined8 *)(pfVar7 + 0xe);
      local_4b0 = *(undefined8 *)(pfVar7 + 0xc);
      local_4fc = *(undefined4 *)(param_4 + 8);
      fVar11 = local_490;
      if (local_4a0 < local_490) {
        fVar11 = local_4a0;
      }
      fVar12 = fStack_48c;
      if (local_49c < fStack_48c) {
        fVar12 = local_49c;
      }
      local_310 = (undefined **)CONCAT44(fVar12,fVar11);
      fVar11 = fStack_488;
      if (local_498 < fStack_488) {
        fVar11 = local_498;
      }
      fVar12 = fStack_484;
      if (local_494 < fStack_484) {
        fVar12 = local_494;
      }
      uStack_308 = CONCAT44(fVar12,fVar11);
      fVar11 = local_490;
      if (local_490 < local_4a0) {
        fVar11 = local_4a0;
      }
      fVar12 = fStack_48c;
      if (fStack_48c < local_49c) {
        fVar12 = local_49c;
      }
      local_1a0 = (undefined **)CONCAT44(fVar12,fVar11);
      fVar11 = fStack_488;
      if (fStack_488 < local_498) {
        fVar11 = local_498;
      }
      fVar12 = fStack_484;
      if (fStack_484 < local_494) {
        fVar12 = local_494;
      }
      uStack_198 = CONCAT44(fVar12,fVar11);
      local_4f8 = param_4;
      uStack_4f0 = uVar8;
      local_4e8 = pbVar6;
      (**(code **)(*(long *)pbVar6 + 0x80))(pbVar6,local_528,&local_310,&local_1a0);
      btTriangleCallback::~btTriangleCallback((btTriangleCallback *)local_528);
      ppuVar3 = local_e0;
    }
  }
  else {
    ppuVar3 = &PTR__btConvexShape_01733760;
    if (iVar2 == 0x1f) {
      uStack_308 = *(undefined8 *)(param_3 + 0x10);
      local_310 = &PTR__ICollide_01731ba8;
      local_300 = pbVar6;
      local_2f8 = pfVar7;
      local_2f0 = param_1;
      local_2e8 = param_2;
      local_2e0 = param_4;
      if (*(undefined8 **)(pbVar6 + 0x58) == (undefined8 *)0x0) {
        iVar2 = *(int *)(pbVar6 + 0x1c);
        ppuVar3 = local_e0;
        if (0 < iVar2) {
          iVar5 = 0;
          local_e0 = &PTR__btConvexShape_01733760;
          do {
            FUN_01219d9c(&local_310,iVar5);
            iVar5 = iVar5 + 1;
            ppuVar3 = local_e0;
          } while (iVar5 < iVar2);
        }
      }
      else {
        fVar11 = *(float *)(param_1 + 0x30) - pfVar7[0xc];
        fVar12 = *(float *)(param_1 + 0x34) - pfVar7[0xd];
        fVar13 = *(float *)(param_1 + 0x38) - pfVar7[0xe];
        local_1a0 = (undefined **)
                    CONCAT44(fVar11 * pfVar7[1] + fVar12 * pfVar7[5] + fVar13 * pfVar7[9],
                             fVar11 * *pfVar7 + fVar12 * pfVar7[4] + fVar13 * pfVar7[8]);
        uStack_198 = (ulong)(uint)(fVar11 * pfVar7[2] + fVar12 * pfVar7[6] + fVar13 * pfVar7[10]);
        fVar11 = *(float *)(param_2 + 0x30) - pfVar7[0xc];
        fVar12 = *(float *)(param_2 + 0x34) - pfVar7[0xd];
        fVar13 = *(float *)(param_2 + 0x38) - pfVar7[0xe];
        local_3f8 = (undefined **)
                    CONCAT44(fVar11 * pfVar7[1] + fVar12 * pfVar7[5] + fVar13 * pfVar7[9],
                             fVar11 * *pfVar7 + fVar12 * pfVar7[4] + fVar13 * pfVar7[8]);
        local_3f0 = (ulong)(uint)(fVar11 * pfVar7[2] + fVar12 * pfVar7[6] + fVar13 * pfVar7[10]);
        local_e0 = &PTR__btConvexShape_01733760;
        btDbvt::rayTest((btDbvtNode *)**(undefined8 **)(pbVar6 + 0x58),(btVector3 *)&local_1a0,
                        (btVector3 *)&local_3f8,(ICollide *)&local_310);
        ppuVar3 = local_e0;
      }
    }
  }
  local_e0 = ppuVar3;
  btConvexShape::~btConvexShape((btConvexShape *)&local_e0);
  return;
}

