
/* dragonBones::CCArmatureDisplay::convertToRootSpace(cocos2d::Vec2 const&) const */

void dragonBones::CCArmatureDisplay::convertToRootSpace(Vec2 *param_1)

{
  float *in_x1;
  undefined8 *in_x8;
  CCSlot *this;
  
  this = *(CCSlot **)(*(long *)(param_1 + 0x10) + 0x30);
  if (this == (CCSlot *)0x0) {
    *in_x8 = *(undefined8 *)in_x1;
  }
  else {
    CCSlot::updateWorldMatrix(this);
    *in_x8 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x1b8) >> 0x20) +
                      *in_x1 * (float)((ulong)*(undefined8 *)(this + 0x188) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(this + 0x198) >> 0x20) * in_x1[1],
                      (float)*(undefined8 *)(this + 0x1b8) +
                      *in_x1 * (float)*(undefined8 *)(this + 0x188) +
                      (float)*(undefined8 *)(this + 0x198) * in_x1[1]);
  }
  return;
}

