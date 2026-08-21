
/* btBoxShape::isInside(btVector3 const&, float) const */

bool __thiscall btBoxShape::isInside(btBoxShape *this,btVector3 *param_1,float param_2)

{
  if (*(float *)(this + 0x28) + param_2 < *(float *)param_1) {
    return false;
  }
  if (*(float *)param_1 < -*(float *)(this + 0x28) - param_2) {
    return false;
  }
  if (*(float *)(this + 0x2c) + param_2 < *(float *)(param_1 + 4)) {
    return false;
  }
  if (*(float *)(param_1 + 4) < -*(float *)(this + 0x2c) - param_2) {
    return false;
  }
  if (*(float *)(this + 0x30) + param_2 < *(float *)(param_1 + 8)) {
    return false;
  }
  return -*(float *)(this + 0x30) - param_2 <= *(float *)(param_1 + 8);
}

