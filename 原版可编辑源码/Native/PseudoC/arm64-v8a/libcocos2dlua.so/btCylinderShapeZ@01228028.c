
/* btCylinderShapeZ::btCylinderShapeZ(btVector3 const&) */

void __thiscall btCylinderShapeZ::btCylinderShapeZ(btCylinderShapeZ *this,btVector3 *param_1)

{
  btCylinderShape::btCylinderShape((btCylinderShape *)this,param_1);
  *(undefined4 *)(this + 0x40) = 2;
  *(undefined ***)this = &PTR__btConvexShape_01733230;
  return;
}

