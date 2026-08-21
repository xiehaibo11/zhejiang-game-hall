
/* btVoronoiSimplexSolver::removeVertex(int) */

void __thiscall btVoronoiSimplexSolver::removeVertex(btVoronoiSimplexSolver *this,int param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)this;
  *(int *)this = (int)((long)iVar1 + -1);
  uVar3 = *(undefined8 *)(this + ((long)iVar1 + -1) * 0x10 + 4);
  uVar2 = -(ulong)((uint)param_1 >> 0x1f) & 0xfffffff000000000 | (ulong)(uint)param_1 << 4;
  *(undefined8 *)(this + uVar2 + 4 + 8) = *(undefined8 *)(this + ((long)iVar1 + -1) * 0x10 + 4 + 8);
  *(undefined8 *)(this + uVar2 + 4) = uVar3;
  uVar3 = *(undefined8 *)(this + (long)*(int *)this * 0x10 + 0x54);
  *(undefined8 *)(this + uVar2 + 0x54 + 8) =
       *(undefined8 *)(this + (long)*(int *)this * 0x10 + 0x54 + 8);
  *(undefined8 *)(this + uVar2 + 0x54) = uVar3;
  uVar3 = *(undefined8 *)(this + (long)*(int *)this * 0x10 + 0xa4);
  *(undefined8 *)(this + uVar2 + 0xa4 + 8) =
       *(undefined8 *)(this + (long)*(int *)this * 0x10 + 0xa4 + 8);
  *(undefined8 *)(this + uVar2 + 0xa4) = uVar3;
  return;
}

