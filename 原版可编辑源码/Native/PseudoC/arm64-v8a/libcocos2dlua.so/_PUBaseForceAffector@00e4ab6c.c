
/* cocos2d::PUBaseForceAffector::~PUBaseForceAffector() */

void __thiscall cocos2d::PUBaseForceAffector::~PUBaseForceAffector(PUBaseForceAffector *this)

{
  PUAffector::~PUAffector((PUAffector *)this);
  operator_delete(this);
  return;
}

