
/* cocos2d::PUSphereCollider::~PUSphereCollider() */

void __thiscall cocos2d::PUSphereCollider::~PUSphereCollider(PUSphereCollider *this)

{
  PUBaseCollider::~PUBaseCollider((PUBaseCollider *)this);
  operator_delete(this);
  return;
}

