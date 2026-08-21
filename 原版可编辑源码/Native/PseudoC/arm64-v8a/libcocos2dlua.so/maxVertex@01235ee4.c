
/* btVoronoiSimplexSolver::maxVertex() */

float __thiscall btVoronoiSimplexSolver::maxVertex(btVoronoiSimplexSolver *this)

{
  btVoronoiSimplexSolver *pbVar1;
  btVoronoiSimplexSolver *pbVar2;
  ulong uVar3;
  btVoronoiSimplexSolver *pbVar4;
  float fVar5;
  float fVar6;
  
  uVar3 = (ulong)*(uint *)this;
  if (0 < (int)*(uint *)this) {
    pbVar4 = this + 8;
    fVar5 = 0.0;
    do {
      pbVar2 = pbVar4 + -4;
      fVar6 = *(float *)pbVar4;
      pbVar1 = pbVar4 + 4;
      uVar3 = uVar3 - 1;
      pbVar4 = pbVar4 + 0x10;
      fVar6 = *(float *)pbVar2 * *(float *)pbVar2 + fVar6 * fVar6 +
              *(float *)pbVar1 * *(float *)pbVar1;
      if (fVar6 <= fVar5) {
        fVar6 = fVar5;
      }
      fVar5 = fVar6;
    } while (uVar3 != 0);
    return fVar6;
  }
  return 0.0;
}

