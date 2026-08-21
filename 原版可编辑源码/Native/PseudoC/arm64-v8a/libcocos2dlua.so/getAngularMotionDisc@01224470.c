
/* btCollisionShape::getAngularMotionDisc() const */

float __thiscall btCollisionShape::getAngularMotionDisc(btCollisionShape *this)

{
  float fVar1;
  float __x;
  float local_24;
  float local_20;
  float fStack_1c;
  float local_18;
  
  (**(code **)(*(long *)this + 0x18))(this,&local_20,&local_24);
  __x = local_20 * local_20 + fStack_1c * fStack_1c + local_18 * local_18;
  fVar1 = SQRT(__x);
  if (NAN(fVar1)) {
    fVar1 = sqrtf(__x);
  }
  return fVar1 + local_24;
}

