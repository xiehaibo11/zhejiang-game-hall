
/* cocos2d::PhysicsBody::getCollisionBitmask() const */

undefined4 __thiscall cocos2d::PhysicsBody::getCollisionBitmask(PhysicsBody *this)

{
  if (*(long **)(this + 0x68) != *(long **)(this + 0x70)) {
    return *(undefined4 *)(**(long **)(this + 0x68) + 0x80);
  }
  return 0xffffffff;
}

