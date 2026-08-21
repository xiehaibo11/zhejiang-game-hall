
/* btVoronoiSimplexSolver::getSimplex(btVector3*, btVector3*, btVector3*) const */

ulong __thiscall
btVoronoiSimplexSolver::getSimplex
          (btVoronoiSimplexSolver *this,btVector3 *param_1,btVector3 *param_2,btVector3 *param_3)

{
  ulong uVar1;
  long lVar2;
  btVoronoiSimplexSolver *pbVar3;
  undefined8 uVar4;
  
  uVar1 = (ulong)*(uint *)this;
  if (0 < (int)*(uint *)this) {
    lVar2 = 0;
    pbVar3 = this + 0xa4;
    do {
      uVar4 = *(undefined8 *)(pbVar3 + -0xa0);
      lVar2 = lVar2 + 1;
      *(undefined8 *)(param_3 + 8) = *(undefined8 *)(pbVar3 + -0x98);
      *(undefined8 *)param_3 = uVar4;
      uVar4 = *(undefined8 *)(pbVar3 + -0x50);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(pbVar3 + -0x48);
      *(undefined8 *)param_1 = uVar4;
      uVar4 = *(undefined8 *)pbVar3;
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(pbVar3 + 8);
      *(undefined8 *)param_2 = uVar4;
      uVar1 = (ulong)*(int *)this;
      param_1 = param_1 + 0x10;
      param_2 = param_2 + 0x10;
      param_3 = param_3 + 0x10;
      pbVar3 = pbVar3 + 0x10;
    } while (lVar2 < (long)uVar1);
  }
  return uVar1 & 0xffffffff;
}

