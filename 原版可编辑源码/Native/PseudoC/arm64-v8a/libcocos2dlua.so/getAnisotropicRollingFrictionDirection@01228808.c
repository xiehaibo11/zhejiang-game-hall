
/* btCylinderShape::getAnisotropicRollingFrictionDirection() const */

undefined4 __thiscall btCylinderShape::getAnisotropicRollingFrictionDirection(btCylinderShape *this)

{
  undefined4 local_10 [4];
  
  local_10[0] = 0;
  local_10[*(int *)(this + 0x40)] = 0x3f800000;
  return local_10[0];
}

