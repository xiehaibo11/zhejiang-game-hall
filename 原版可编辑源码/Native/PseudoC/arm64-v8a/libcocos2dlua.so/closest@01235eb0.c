
/* btVoronoiSimplexSolver::closest(btVector3&) */

uint __thiscall btVoronoiSimplexSolver::closest(btVoronoiSimplexSolver *this,btVector3 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = updateClosestVectorAndPoints(this);
  uVar2 = *(undefined8 *)(this + 0x114);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(this + 0x11c);
  *(undefined8 *)param_1 = uVar2;
  return uVar1 & 1;
}

