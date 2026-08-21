
/* btCollisionShape::getContactBreakingThreshold(float) const */

float __thiscall btCollisionShape::getContactBreakingThreshold(btCollisionShape *this,float param_1)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*(long *)this + 0x20))();
  return fVar1 * param_1;
}

