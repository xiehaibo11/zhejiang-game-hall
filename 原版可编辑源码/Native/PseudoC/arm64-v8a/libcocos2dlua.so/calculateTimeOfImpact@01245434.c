
/* btConvexConvexAlgorithm::calculateTimeOfImpact(btCollisionObject*, btCollisionObject*,
   btDispatcherInfo const&, btManifoldResult*) */

btCollisionObject *
btConvexConvexAlgorithm::calculateTimeOfImpact
          (btCollisionObject *param_1,btCollisionObject *param_2,btDispatcherInfo *param_3,
          btManifoldResult *param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  btConvexShape *pbVar3;
  float fVar4;
  float fVar5;
  btGjkConvexCast abStack_580 [32];
  btVoronoiSimplexSolver abStack_560 [308];
  undefined4 local_42c;
  undefined1 local_414;
  undefined **local_3f8 [21];
  float local_350;
  undefined8 local_348;
  undefined4 local_340;
  undefined **local_338;
  undefined4 local_330;
  undefined4 local_310;
  undefined4 local_300;
  btGjkConvexCast abStack_2f8 [32];
  btVoronoiSimplexSolver abStack_2d8 [308];
  undefined4 local_1a4;
  byte local_18c;
  undefined **local_170 [21];
  float local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined **local_b0;
  undefined4 local_a8;
  undefined4 local_88;
  undefined4 local_78;
  
  fVar4 = (float)*(undefined8 *)(param_2 + 0x7c) - (float)*(undefined8 *)(param_2 + 0x3c);
  fVar5 = (float)((ulong)*(undefined8 *)(param_2 + 0x7c) >> 0x20) -
          (float)((ulong)*(undefined8 *)(param_2 + 0x3c) >> 0x20);
  if (((*(float *)(param_2 + 0x118) * *(float *)(param_2 + 0x118) <=
        (*(float *)(param_2 + 0x78) - *(float *)(param_2 + 0x38)) *
        (*(float *)(param_2 + 0x78) - *(float *)(param_2 + 0x38)) + fVar4 * fVar4 + fVar5 * fVar5)
      || (fVar4 = (float)*(undefined8 *)(param_3 + 0x7c) - (float)*(undefined8 *)(param_3 + 0x3c),
         fVar5 = (float)((ulong)*(undefined8 *)(param_3 + 0x7c) >> 0x20) -
                 (float)((ulong)*(undefined8 *)(param_3 + 0x3c) >> 0x20),
         *(float *)(param_3 + 0x118) * *(float *)(param_3 + 0x118) <=
         (*(float *)(param_3 + 0x78) - *(float *)(param_3 + 0x38)) *
         (*(float *)(param_3 + 0x78) - *(float *)(param_3 + 0x38)) + fVar4 * fVar4 + fVar5 * fVar5))
     && (disableCcd == '\0')) {
    pbVar3 = *(btConvexShape **)(param_2 + 200);
    uVar1 = *(undefined4 *)(param_3 + 0x114);
    btConvexInternalShape::btConvexInternalShape((btConvexInternalShape *)&local_b0);
    local_1a4 = 0x38d1b717;
    local_b0 = &PTR__btConvexShape_01733760;
    local_a8 = 8;
    local_170[0] = &PTR_DebugDraw_01731d48;
    local_c8 = 1e+18;
    local_18c = local_18c & 0xf0;
    local_c0 = 0;
    local_b8 = 0;
    local_88 = uVar1;
    local_78 = uVar1;
    btGjkConvexCast::btGjkConvexCast(abStack_2f8,pbVar3,(btConvexShape *)&local_b0,abStack_2d8);
    uVar2 = btGjkConvexCast::calcTimeOfImpact
                      (abStack_2f8,(btTransform *)(param_2 + 8),(btTransform *)(param_2 + 0x48),
                       (btTransform *)(param_3 + 8),(btTransform *)(param_3 + 0x48),
                       (CastResult *)local_170);
    if ((uVar2 & 1) != 0) {
      if (local_c8 < *(float *)(param_2 + 0x110)) {
        *(float *)(param_2 + 0x110) = local_c8;
      }
      if (local_c8 < *(float *)(param_3 + 0x110)) {
        *(float *)(param_3 + 0x110) = local_c8;
      }
    }
    btConvexCast::~btConvexCast((btConvexCast *)abStack_2f8);
    btConvexShape::~btConvexShape((btConvexShape *)&local_b0);
    pbVar3 = *(btConvexShape **)(param_3 + 200);
    uVar1 = *(undefined4 *)(param_2 + 0x114);
    btConvexInternalShape::btConvexInternalShape((btConvexInternalShape *)&local_338);
    local_338 = &PTR__btConvexShape_01733760;
    local_3f8[0] = &PTR_DebugDraw_01731d48;
    local_330 = 8;
    local_350 = 1e+18;
    local_348 = 0;
    local_340 = 0;
    local_42c = 0x38d1b717;
    local_414 = 0;
    local_310 = uVar1;
    local_300 = uVar1;
    btGjkConvexCast::btGjkConvexCast(abStack_580,(btConvexShape *)&local_338,pbVar3,abStack_560);
    uVar2 = btGjkConvexCast::calcTimeOfImpact
                      (abStack_580,(btTransform *)(param_2 + 8),(btTransform *)(param_2 + 0x48),
                       (btTransform *)(param_3 + 8),(btTransform *)(param_3 + 0x48),
                       (CastResult *)local_3f8);
    if ((uVar2 & 1) != 0) {
      if (local_350 < *(float *)(param_2 + 0x110)) {
        *(float *)(param_2 + 0x110) = local_350;
      }
      if (local_350 < *(float *)(param_3 + 0x110)) {
        *(float *)(param_3 + 0x110) = local_350;
      }
    }
    btConvexCast::~btConvexCast((btConvexCast *)abStack_580);
    param_1 = (btCollisionObject *)btConvexShape::~btConvexShape((btConvexShape *)&local_338);
  }
  return param_1;
}

