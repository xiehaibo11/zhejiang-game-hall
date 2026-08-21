
/* btVoronoiSimplexSolver::backup_closest(btVector3&) */

void __thiscall
btVoronoiSimplexSolver::backup_closest(btVoronoiSimplexSolver *this,btVector3 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(this + 0x114);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(this + 0x11c);
  *(undefined8 *)param_1 = uVar1;
  return;
}

