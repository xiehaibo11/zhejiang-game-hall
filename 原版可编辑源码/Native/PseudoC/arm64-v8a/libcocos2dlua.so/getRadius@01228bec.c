
/* btCylinderShapeZ::getRadius() const */

float __thiscall btCylinderShapeZ::getRadius(btCylinderShapeZ *this)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(this + 0x28);
  fVar1 = (float)(**(code **)(*(long *)this + 0x60))();
  (**(code **)(*(long *)this + 0x60))(this);
  (**(code **)(*(long *)this + 0x60))(this);
  return fVar2 + fVar1;
}

