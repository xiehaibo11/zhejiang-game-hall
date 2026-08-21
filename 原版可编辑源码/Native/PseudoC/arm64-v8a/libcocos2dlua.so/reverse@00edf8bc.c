
/* cocos2d::MoveBy::reverse() const */

void __thiscall cocos2d::MoveBy::reverse(MoveBy *this)

{
  undefined8 local_20;
  float local_18;
  
  local_20 = CONCAT44(-(float)((ulong)*(undefined8 *)(this + 0x58) >> 0x20),
                      -(float)*(undefined8 *)(this + 0x58));
  local_18 = -*(float *)(this + 0x60);
  create(*(float *)(this + 0x4c),(Vec3 *)&local_20);
  return;
}

