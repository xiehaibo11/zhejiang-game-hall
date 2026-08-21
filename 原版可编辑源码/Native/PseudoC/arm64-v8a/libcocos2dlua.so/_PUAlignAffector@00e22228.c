
/* cocos2d::PUAlignAffector::~PUAlignAffector() */

void __thiscall cocos2d::PUAlignAffector::~PUAlignAffector(PUAlignAffector *this)

{
  PUAffector::~PUAffector((PUAffector *)this);
  operator_delete(this);
  return;
}

