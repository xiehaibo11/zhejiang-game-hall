
/* btSphereShape::localGetSupportingVertex(btVector3 const&) const */

float __thiscall btSphereShape::localGetSupportingVertex(btSphereShape *this,btVector3 *param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = (float)(**(code **)(*(long *)this + 0x88))();
  fVar3 = *(float *)param_1;
  fVar4 = *(float *)(param_1 + 4);
  fVar5 = *(float *)(param_1 + 8);
  bVar1 = 1.4210855e-14 <= fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5;
  fVar6 = -1.0;
  if (bVar1) {
    fVar6 = fVar3;
  }
  fVar3 = -1.0;
  if (bVar1) {
    fVar3 = fVar4;
  }
  fVar4 = -1.0;
  if (bVar1) {
    fVar4 = fVar5;
  }
  fVar4 = fVar4 * fVar4 + fVar6 * fVar6 + fVar3 * fVar3;
  fVar3 = SQRT(fVar4);
  if (NAN(fVar3)) {
    fVar3 = sqrtf(fVar4);
  }
  fVar4 = (float)(**(code **)(*(long *)this + 0x60))(this);
  return fVar2 + fVar4 * (1.0 / fVar3) * fVar6;
}

