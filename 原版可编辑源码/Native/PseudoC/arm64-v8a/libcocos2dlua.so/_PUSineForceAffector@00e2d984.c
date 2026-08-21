
/* cocos2d::PUSineForceAffector::~PUSineForceAffector() */

void __thiscall cocos2d::PUSineForceAffector::~PUSineForceAffector(PUSineForceAffector *this)

{
  PUBaseForceAffector::~PUBaseForceAffector((PUBaseForceAffector *)this);
  operator_delete(this);
  return;
}

