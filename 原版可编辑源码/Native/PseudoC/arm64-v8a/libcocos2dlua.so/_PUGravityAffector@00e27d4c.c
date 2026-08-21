
/* cocos2d::PUGravityAffector::~PUGravityAffector() */

void __thiscall cocos2d::PUGravityAffector::~PUGravityAffector(PUGravityAffector *this)

{
  PUAffector::~PUAffector((PUAffector *)this);
  operator_delete(this);
  return;
}

