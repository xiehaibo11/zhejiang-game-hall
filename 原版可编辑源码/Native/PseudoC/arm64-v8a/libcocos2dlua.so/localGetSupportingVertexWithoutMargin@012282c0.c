
/* btCylinderShapeX::localGetSupportingVertexWithoutMargin(btVector3 const&) const */

float __thiscall
btCylinderShapeX::localGetSupportingVertexWithoutMargin(btCylinderShapeX *this,btVector3 *param_1)

{
  float fVar1;
  float __x;
  float fVar2;
  
  fVar2 = *(float *)(this + 0x28);
  __x = *(float *)(param_1 + 4) * *(float *)(param_1 + 4) +
        *(float *)(param_1 + 8) * *(float *)(param_1 + 8);
  fVar1 = SQRT(__x);
  if (NAN(fVar1)) {
    fVar1 = sqrtf(__x);
  }
  if (fVar1 == 0.0) {
    fVar1 = -fVar2;
    if (0.0 <= *(float *)param_1) {
      fVar1 = fVar2;
    }
  }
  else {
    fVar1 = -fVar2;
    if (0.0 <= *(float *)param_1) {
      fVar1 = fVar2;
    }
  }
  return fVar1;
}

