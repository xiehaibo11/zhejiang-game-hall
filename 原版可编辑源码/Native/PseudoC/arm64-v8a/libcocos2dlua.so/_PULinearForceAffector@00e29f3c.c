
/* cocos2d::PULinearForceAffector::~PULinearForceAffector() */

void __thiscall cocos2d::PULinearForceAffector::~PULinearForceAffector(PULinearForceAffector *this)

{
  PUBaseForceAffector::~PUBaseForceAffector((PUBaseForceAffector *)this);
  operator_delete(this);
  return;
}

