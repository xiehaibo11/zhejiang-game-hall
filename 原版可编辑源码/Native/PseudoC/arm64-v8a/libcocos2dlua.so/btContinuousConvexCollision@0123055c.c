
/* btContinuousConvexCollision::btContinuousConvexCollision(btConvexShape const*, btConvexShape
   const*, btVoronoiSimplexSolver*, btConvexPenetrationDepthSolver*) */

void __thiscall
btContinuousConvexCollision::btContinuousConvexCollision
          (btContinuousConvexCollision *this,btConvexShape *param_1,btConvexShape *param_2,
          btVoronoiSimplexSolver *param_3,btConvexPenetrationDepthSolver *param_4)

{
  *(btConvexPenetrationDepthSolver **)(this + 0x10) = param_4;
  *(btConvexShape **)(this + 0x18) = param_1;
  *(btConvexShape **)(this + 0x20) = param_2;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__btConvexCast_01733ac0;
  *(btVoronoiSimplexSolver **)(this + 8) = param_3;
  return;
}

