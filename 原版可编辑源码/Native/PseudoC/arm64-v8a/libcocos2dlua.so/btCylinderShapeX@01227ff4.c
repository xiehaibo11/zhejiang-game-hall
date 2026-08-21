
/* btCylinderShapeX::btCylinderShapeX(btVector3 const&) */

void __thiscall btCylinderShapeX::btCylinderShapeX(btCylinderShapeX *this,btVector3 *param_1)

{
  btCylinderShape::btCylinderShape((btCylinderShape *)this,param_1);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR__btConvexShape_01733160;
  return;
}

