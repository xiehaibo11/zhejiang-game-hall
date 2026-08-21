
/* cocos2d::PUTextureAnimator::~PUTextureAnimator() */

void __thiscall cocos2d::PUTextureAnimator::~PUTextureAnimator(PUTextureAnimator *this)

{
                    /* try { // try from 00e2e8f4 to 00f2e90b has its CatchHandler @ 00e2ea48 */
  PUAffector::~PUAffector((PUAffector *)this);
  operator_delete(this);
  return;
}

