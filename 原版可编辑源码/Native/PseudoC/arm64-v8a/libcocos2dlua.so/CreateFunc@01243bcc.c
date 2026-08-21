
/* btConvexConvexAlgorithm::CreateFunc::CreateFunc(btVoronoiSimplexSolver*,
   btConvexPenetrationDepthSolver*) */

void __thiscall
btConvexConvexAlgorithm::CreateFunc::CreateFunc
          (CreateFunc *this,btVoronoiSimplexSolver *param_1,btConvexPenetrationDepthSolver *param_2)

{
  this[8] = (CreateFunc)0x0;
  *(btVoronoiSimplexSolver **)(this + 0x18) = param_1;
  *(undefined8 *)(this + 0x20) = 0x300000000;
  *(btConvexPenetrationDepthSolver **)(this + 0x10) = param_2;
  *(undefined ***)this = &PTR__CreateFunc_01734450;
  return;
}

