
/* btBoxShape::localGetSupportingVertex(btVector3 const&) const */

float __thiscall btBoxShape::localGetSupportingVertex(btBoxShape *this,btVector3 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(this + 0x28);
  fVar1 = (float)(**(code **)(*(long *)this + 0x60))();
  (**(code **)(*(long *)this + 0x60))(this);
  (**(code **)(*(long *)this + 0x60))(this);
  fVar2 = fVar3 + fVar1;
  if (*(float *)param_1 < 0.0) {
    fVar2 = -(fVar3 + fVar1);
  }
  return fVar2;
}

