
void FUN_01243a34(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  btSubsimplexConvexCast abStack_370 [32];
  btVoronoiSimplexSolver abStack_350 [308];
  undefined4 local_21c;
  undefined1 local_204;
  undefined **local_1e8;
  undefined4 local_1e0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined **local_170;
  undefined4 local_168;
  undefined4 local_148;
  undefined4 local_138;
  undefined **local_130 [21];
  float local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined4 local_34;
  
  local_70 = 0x3f800000;
  local_6c = 0;
  local_64 = 0;
  local_5c = 0x3f800000;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0x3f800000;
  local_34 = 0;
  local_3c = 0;
  local_44 = 0;
  local_130[0] = &PTR_DebugDraw_01731d48;
  local_80 = 0;
  local_78 = 0;
  uVar1 = *(undefined4 *)(param_1 + 200);
  local_88 = *(float *)(param_1 + 0xcc);
  btConvexInternalShape::btConvexInternalShape((btConvexInternalShape *)&local_170);
  local_168 = 8;
  local_170 = &PTR__btConvexShape_01733760;
  local_148 = uVar1;
  local_138 = uVar1;
  btPolyhedralConvexShape::btPolyhedralConvexShape((btPolyhedralConvexShape *)&local_1e8);
  local_1e0 = 1;
  local_1e8 = &PTR__btPolyhedralConvexShape_01733dc8;
  uStack_198 = param_2[1];
  local_1a0 = *param_2;
  uStack_188 = param_2[3];
  local_190 = param_2[2];
  uStack_178 = param_2[5];
  local_180 = param_2[4];
  local_21c = 0x38d1b717;
  local_204 = 0;
  btSubsimplexConvexCast::btSubsimplexConvexCast
            (abStack_370,(btConvexShape *)&local_170,(btConvexShape *)&local_1e8,abStack_350);
  uVar2 = btSubsimplexConvexCast::calcTimeOfImpact
                    (abStack_370,(btTransform *)(param_1 + 8),(btTransform *)(param_1 + 0x48),
                     (btTransform *)&local_70,(btTransform *)&local_70,(CastResult *)local_130);
  if (((uVar2 & 1) != 0) && (local_88 < *(float *)(param_1 + 0xcc))) {
    *(float *)(param_1 + 0xcc) = local_88;
  }
  btConvexCast::~btConvexCast((btConvexCast *)abStack_370);
  btPolyhedralConvexShape::~btPolyhedralConvexShape((btPolyhedralConvexShape *)&local_1e8);
  btConvexShape::~btConvexShape((btConvexShape *)&local_170);
  return;
}

