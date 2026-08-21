
/* btSubsimplexConvexCast::btSubsimplexConvexCast(btConvexShape const*, btConvexShape const*,
   btVoronoiSimplexSolver*) */

void __thiscall
btSubsimplexConvexCast::btSubsimplexConvexCast
          (btSubsimplexConvexCast *this,btConvexShape *param_1,btConvexShape *param_2,
          btVoronoiSimplexSolver *param_3)

{
  *(btConvexShape **)(this + 0x10) = param_1;
  *(btConvexShape **)(this + 0x18) = param_2;
  *(undefined ***)this = &PTR__btConvexCast_01733f00;
  *(btVoronoiSimplexSolver **)(this + 8) = param_3;
  return;
}

