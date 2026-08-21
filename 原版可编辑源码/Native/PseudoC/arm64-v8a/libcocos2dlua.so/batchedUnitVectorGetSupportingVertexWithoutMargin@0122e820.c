
/* btSphereShape::batchedUnitVectorGetSupportingVertexWithoutMargin(btVector3 const*, btVector3*,
   int) const */

btSphereShape * __thiscall
btSphereShape::batchedUnitVectorGetSupportingVertexWithoutMargin
          (btSphereShape *this,btVector3 *param_1,btVector3 *param_2,int param_3)

{
  if (0 < param_3) {
    this = memset(param_2,0,(ulong)(param_3 - 1) * 0x10 + 0x10);
  }
  return this;
}

