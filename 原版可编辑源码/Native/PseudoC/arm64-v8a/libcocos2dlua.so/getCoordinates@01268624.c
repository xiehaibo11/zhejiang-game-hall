
/* btConvexHullInternal::getCoordinates(btConvexHullInternal::Vertex const*) */

float __thiscall btConvexHullInternal::getCoordinates(btConvexHullInternal *this,Vertex *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float local_50 [4];
  
  iVar1 = *(int *)(param_1 + 0x74);
  if (iVar1 < 0) {
    fVar2 = (float)Int128::toScalar((Int128 *)(param_1 + 0x28));
    fVar3 = (float)Int128::toScalar((Int128 *)(param_1 + 0x58));
    iVar1 = *(int *)(param_1 + 0x74);
    fVar2 = fVar2 / fVar3;
  }
  else {
    fVar2 = (float)*(int *)(param_1 + 0x68);
  }
  local_50[*(int *)(this + 0xa8)] = fVar2;
  if (iVar1 < 0) {
    fVar3 = (float)Int128::toScalar((Int128 *)(param_1 + 0x38));
    fVar2 = (float)Int128::toScalar((Int128 *)(param_1 + 0x58));
    iVar1 = *(int *)(param_1 + 0x74);
    local_50[*(int *)(this + 0xac)] = fVar3 / fVar2;
    if (iVar1 < 0) {
      fVar3 = (float)Int128::toScalar((Int128 *)(param_1 + 0x48));
      fVar2 = (float)Int128::toScalar((Int128 *)(param_1 + 0x58));
      fVar3 = fVar3 / fVar2;
      goto LAB_012686cc;
    }
  }
  else {
    local_50[*(int *)(this + 0xac)] = (float)*(int *)(param_1 + 0x6c);
  }
  fVar3 = (float)*(int *)(param_1 + 0x70);
LAB_012686cc:
  local_50[*(int *)(this + 0xa4)] = fVar3;
  return local_50[0] * *(float *)this + *(float *)(this + 0x10);
}

