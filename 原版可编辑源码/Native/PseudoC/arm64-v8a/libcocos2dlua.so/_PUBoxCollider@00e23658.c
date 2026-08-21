
/* cocos2d::PUBoxCollider::~PUBoxCollider() */

void __thiscall cocos2d::PUBoxCollider::~PUBoxCollider(PUBoxCollider *this)

{
  PUBaseCollider::~PUBaseCollider((PUBaseCollider *)this);
  operator_delete(this);
  return;
}

