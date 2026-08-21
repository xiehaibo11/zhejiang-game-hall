
/* btConvexHullShape::getVertex(int, btVector3&) const */

void __thiscall btConvexHullShape::getVertex(btConvexHullShape *this,int param_1,btVector3 *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar2 = *(float *)(this + 0x18);
  fVar3 = *(float *)(this + 0x1c);
  fVar4 = *(float *)(this + 0x20);
  pfVar1 = (float *)(*(long *)(this + 0x80) + (long)param_1 * 0x10);
  fVar5 = *pfVar1;
  fVar6 = pfVar1[1];
  fVar7 = pfVar1[2];
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(float *)param_2 = fVar5 * fVar2;
  *(float *)(param_2 + 4) = fVar6 * fVar3;
  *(float *)(param_2 + 8) = fVar7 * fVar4;
  return;
}

