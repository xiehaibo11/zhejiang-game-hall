
/* btConvexHullShape::getEdge(int, btVector3&, btVector3&) const */

void __thiscall
btConvexHullShape::getEdge
          (btConvexHullShape *this,int param_1,btVector3 *param_2,btVector3 *param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar2 = *(int *)(this + 0x74);
  fVar5 = *(float *)(this + 0x18);
  fVar6 = *(float *)(this + 0x1c);
  fVar7 = *(float *)(this + 0x20);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = param_1 / iVar2;
  }
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar4 = (param_1 + 1) / iVar2;
  }
  pfVar1 = (float *)(*(long *)(this + 0x80) + (long)(param_1 - iVar3 * iVar2) * 0x10);
  fVar8 = *pfVar1;
  fVar9 = pfVar1[1];
  fVar10 = pfVar1[2];
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(float *)param_2 = fVar8 * fVar5;
  *(float *)(param_2 + 4) = fVar9 * fVar6;
  *(float *)(param_2 + 8) = fVar10 * fVar7;
  fVar5 = *(float *)(this + 0x18);
  fVar6 = *(float *)(this + 0x1c);
  fVar7 = *(float *)(this + 0x20);
  pfVar1 = (float *)(*(long *)(this + 0x80) + (long)((param_1 + 1) - iVar4 * iVar2) * 0x10);
  fVar8 = *pfVar1;
  fVar9 = pfVar1[1];
  fVar10 = pfVar1[2];
  *(undefined4 *)(param_3 + 0xc) = 0;
  *(float *)param_3 = fVar8 * fVar5;
  *(float *)(param_3 + 4) = fVar9 * fVar6;
  *(float *)(param_3 + 8) = fVar10 * fVar7;
  return;
}

