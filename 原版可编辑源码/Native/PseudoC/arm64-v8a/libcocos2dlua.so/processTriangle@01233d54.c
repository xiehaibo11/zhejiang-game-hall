
/* btTriangleConvexcastCallback::processTriangle(btVector3*, int, int) */

void __thiscall
btTriangleConvexcastCallback::processTriangle
          (btTriangleConvexcastCallback *this,btVector3 *param_1,int param_2,int param_3)

{
  ulong uVar1;
  float __x;
  float fVar2;
  undefined **local_318 [17];
  float local_290;
  float local_28c;
  float local_288;
  undefined1 auStack_280 [16];
  float local_270;
  undefined8 local_268;
  undefined4 local_260;
  btContinuousConvexCollision abStack_258 [48];
  undefined **local_228;
  btVoronoiSimplexSolver abStack_220 [308];
  undefined4 local_ec;
  undefined1 local_d4;
  undefined **local_b8;
  undefined4 local_b0;
  undefined4 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  btPolyhedralConvexShape::btPolyhedralConvexShape((btPolyhedralConvexShape *)&local_b8);
  local_b8 = &PTR__btPolyhedralConvexShape_01733dc8;
  local_b0 = 1;
  uStack_68 = *(undefined8 *)(param_1 + 8);
  local_70 = *(undefined8 *)param_1;
  uStack_58 = *(undefined8 *)(param_1 + 0x18);
  local_60 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = *(undefined8 *)(param_1 + 0x28);
  local_50 = *(undefined8 *)(param_1 + 0x20);
  local_80 = *(undefined4 *)(this + 0xd4);
  local_228 = &PTR__btConvexPenetrationDepthSolver_01733be0;
  local_ec = 0x38d1b717;
  local_d4 = 0;
  btContinuousConvexCollision::btContinuousConvexCollision
            (abStack_258,*(btConvexShape **)(this + 8),(btConvexShape *)&local_b8,abStack_220,
             (btConvexPenetrationDepthSolver *)&local_228);
  local_268 = 0;
  local_270 = 1.0;
  local_318[0] = &PTR_DebugDraw_01731d48;
  local_260 = *(undefined4 *)(this + 0xd8);
  uVar1 = btContinuousConvexCollision::calcTimeOfImpact
                    (abStack_258,(btTransform *)(this + 0x10),(btTransform *)(this + 0x50),
                     (btTransform *)(this + 0x90),(btTransform *)(this + 0x90),
                     (CastResult *)local_318);
  if ((((uVar1 & 1) != 0) &&
      (__x = local_290 * local_290 + local_28c * local_28c + local_288 * local_288, 0.0001 < __x))
     && (local_270 < *(float *)(this + 0xd0))) {
    fVar2 = SQRT(__x);
    if (NAN(fVar2)) {
      fVar2 = sqrtf(__x);
    }
    fVar2 = 1.0 / fVar2;
    local_290 = fVar2 * local_290;
    local_28c = fVar2 * local_28c;
    local_288 = fVar2 * local_288;
    (**(code **)(*(long *)this + 0x18))(local_270,this,&local_290,auStack_280,param_2,param_3);
  }
  btConvexCast::~btConvexCast((btConvexCast *)abStack_258);
  btPolyhedralConvexShape::~btPolyhedralConvexShape((btPolyhedralConvexShape *)&local_b8);
  return;
}

