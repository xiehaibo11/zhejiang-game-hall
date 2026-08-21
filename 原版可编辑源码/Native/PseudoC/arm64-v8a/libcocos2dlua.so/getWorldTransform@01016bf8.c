
/* cocos2d::Physics3DCollider::getWorldTransform() const */

void __thiscall cocos2d::Physics3DCollider::getWorldTransform(Physics3DCollider *this)

{
  convertbtTransformToMat4((btTransform *)(*(long *)(this + 0xe0) + 8));
  return;
}

