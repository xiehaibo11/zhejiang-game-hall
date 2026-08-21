
/* btCylinderShapeX::getRadius() const */

float __thiscall btCylinderShapeX::getRadius(btCylinderShapeX *this)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(this + 0x2c);
  (**(code **)(*(long *)this + 0x60))();
  fVar1 = (float)(**(code **)(*(long *)this + 0x60))(this);
  (**(code **)(*(long *)this + 0x60))(this);
  return fVar2 + fVar1;
}

