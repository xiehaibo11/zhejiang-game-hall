
/* btCapsuleShape::localGetSupportingVertexWithoutMargin(btVector3 const&) const */

float __thiscall
btCapsuleShape::localGetSupportingVertexWithoutMargin(btCapsuleShape *this,btVector3 *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_70 [4];
  
  fVar4 = *(float *)param_1;
  fVar6 = *(float *)(param_1 + 4);
  fVar7 = *(float *)(param_1 + 8);
  fVar3 = fVar4 * fVar4 + fVar6 * fVar6 + fVar7 * fVar7;
  if (0.0001 <= fVar3) {
    fVar8 = SQRT(fVar3);
    if (NAN(fVar8)) {
      fVar8 = sqrtf(fVar3);
    }
    fVar8 = 1.0 / fVar8;
    fVar4 = fVar4 * fVar8;
    fVar6 = fVar6 * fVar8;
    fVar7 = fVar7 * fVar8;
  }
  else {
    fVar4 = 1.0;
    fVar6 = 0.0;
    fVar7 = 0.0;
  }
  iVar1 = *(int *)(this + 0x40);
  fVar2 = *(float *)(this + (long)((iVar1 + 2) % 3) * 4 + 0x28);
  local_70[0] = 0.0;
  local_70[1] = 0.0;
  local_70[2] = 0.0;
  local_70[3] = 0.0;
  local_70[iVar1] = *(float *)(this + (long)iVar1 * 4 + 0x28);
  fVar5 = fVar4 * fVar2 + local_70[0];
  fVar8 = fVar6 * fVar2 + local_70[1];
  fVar9 = fVar7 * fVar2 + local_70[2];
  fVar3 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar5 = fVar5 - fVar4 * fVar3;
  fVar9 = fVar7 * (fVar9 - fVar7 * fVar3) + fVar4 * fVar5 + fVar6 * (fVar8 - fVar6 * fVar3);
  fVar3 = 0.0;
  fVar8 = -1e+18;
  if (-1e+18 < fVar9) {
    fVar3 = fVar5;
    fVar8 = fVar9;
  }
  local_70[0] = 0.0;
  local_70[1] = 0.0;
  local_70[2] = 0.0;
  local_70[3] = 0.0;
  local_70[*(int *)(this + 0x40)] = -*(float *)(this + (long)*(int *)(this + 0x40) * 4 + 0x28);
  fVar5 = fVar4 * fVar2 + local_70[0];
  fVar9 = fVar6 * fVar2 + local_70[1];
  fVar10 = fVar7 * fVar2 + local_70[2];
  fVar2 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar5 = fVar5 - fVar4 * fVar2;
  if (fVar7 * (fVar10 - fVar7 * fVar2) + fVar4 * fVar5 + fVar6 * (fVar9 - fVar6 * fVar2) <= fVar8) {
    fVar5 = fVar3;
  }
  return fVar5;
}

