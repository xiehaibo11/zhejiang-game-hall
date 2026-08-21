
/* cocos2d::Follow::isDone() const */

uint __thiscall cocos2d::Follow::isDone(Follow *this)

{
  uint uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x50) + 0x318))();
  return ~uVar1 & 1;
}

