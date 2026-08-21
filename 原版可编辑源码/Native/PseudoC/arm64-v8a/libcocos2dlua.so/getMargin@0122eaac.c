
/* btSphereShape::getMargin() const */

float __thiscall btSphereShape::getMargin(btSphereShape *this)

{
  return *(float *)(this + 0x28) * *(float *)(this + 0x18);
}

