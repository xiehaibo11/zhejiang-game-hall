
/* btBoxShape::localGetSupportingVertexWithoutMargin(btVector3 const&) const */

float __thiscall
btBoxShape::localGetSupportingVertexWithoutMargin(btBoxShape *this,btVector3 *param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(this + 0x28);
  if (*(float *)param_1 < 0.0) {
    fVar1 = -*(float *)(this + 0x28);
  }
  return fVar1;
}

