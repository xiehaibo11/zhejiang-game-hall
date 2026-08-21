
/* cocos2d::PhysicsBody::getCategoryBitmask() const */

undefined4 __thiscall cocos2d::PhysicsBody::getCategoryBitmask(PhysicsBody *this)

{
  if (*(long **)(this + 0x68) != *(long **)(this + 0x70)) {
    return *(undefined4 *)(**(long **)(this + 0x68) + 0x7c);
  }
  return 0xffffffff;
}

