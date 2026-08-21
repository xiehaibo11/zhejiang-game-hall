
/* btConvexHullInternal::getBtNormal(btConvexHullInternal::Face*) */

float __thiscall btConvexHullInternal::getBtNormal(btConvexHullInternal *this,Face *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_40 [4];
  
  iVar1 = *(int *)(this + 0xa8);
  iVar2 = *(int *)(this + 0xac);
  local_40[iVar1] = (float)*(int *)(param_1 + 0x28);
  local_40[iVar2] = (float)*(int *)(param_1 + 0x2c);
  iVar3 = *(int *)(this + 0xa4);
  local_40[iVar3] = (float)*(int *)(param_1 + 0x30);
  fVar8 = local_40[2];
  fVar5 = local_40[1];
  fVar4 = local_40[0];
  fVar6 = *(float *)this;
  fVar7 = *(float *)(this + 4);
  fVar9 = *(float *)(this + 8);
  local_40[iVar1] = (float)*(int *)(param_1 + 0x38);
  fVar4 = fVar4 * fVar6;
  fVar5 = fVar5 * fVar7;
  fVar8 = fVar8 * fVar9;
  local_40[iVar2] = (float)*(int *)(param_1 + 0x3c);
  local_40[iVar3] = (float)*(int *)(param_1 + 0x40);
  fVar6 = local_40[0] * fVar6;
  fVar7 = local_40[1] * fVar7;
  fVar9 = local_40[2] * fVar9;
  fVar10 = fVar5 * fVar9 - fVar8 * fVar7;
  fVar8 = fVar8 * fVar6 - fVar4 * fVar9;
  fVar4 = fVar4 * fVar7 - fVar5 * fVar6;
  fVar5 = fVar4 * fVar4 + fVar10 * fVar10 + fVar8 * fVar8;
  fVar4 = SQRT(fVar5);
  if (NAN(fVar4)) {
    fVar4 = sqrtf(fVar5);
  }
  return fVar10 * (1.0 / fVar4);
}

