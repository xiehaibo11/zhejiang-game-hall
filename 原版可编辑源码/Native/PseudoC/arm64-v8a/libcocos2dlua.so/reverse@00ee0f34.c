
/* cocos2d::JumpBy::reverse() const */

void __thiscall cocos2d::JumpBy::reverse(JumpBy *this)

{
  undefined8 local_18;
  
  local_18 = CONCAT44(-(float)((ulong)*(undefined8 *)(this + 0x60) >> 0x20),
                      -(float)*(undefined8 *)(this + 0x60));
  create(*(float *)(this + 0x4c),(Vec2 *)&local_18,*(float *)(this + 0x68),*(int *)(this + 0x6c));
  return;
}

