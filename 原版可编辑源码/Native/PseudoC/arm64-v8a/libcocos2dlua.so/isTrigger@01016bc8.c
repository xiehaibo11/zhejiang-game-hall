
/* cocos2d::Physics3DCollider::isTrigger() const */

byte __thiscall cocos2d::Physics3DCollider::isTrigger(Physics3DCollider *this)

{
  return *(byte *)(*(long *)(this + 0xe0) + 0xe0) >> 2 & 1;
}

