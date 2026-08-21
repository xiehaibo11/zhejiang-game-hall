
/* cocos2d::btCollider::~btCollider() */

void __thiscall cocos2d::btCollider::~btCollider(btCollider *this)

{
  btGhostObject::~btGhostObject((btGhostObject *)this);
  btAlignedFreeInternal(this);
  return;
}

