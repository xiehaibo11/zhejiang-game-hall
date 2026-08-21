
/* cocos2d::PUBaseCollider::~PUBaseCollider() */

void __thiscall cocos2d::PUBaseCollider::~PUBaseCollider(PUBaseCollider *this)

{
  PUAffector::~PUAffector((PUAffector *)this);
  operator_delete(this);
  return;
}

