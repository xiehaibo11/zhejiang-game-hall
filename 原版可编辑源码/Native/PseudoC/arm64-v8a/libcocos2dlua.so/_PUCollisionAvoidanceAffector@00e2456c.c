
/* cocos2d::PUCollisionAvoidanceAffector::~PUCollisionAvoidanceAffector() */

void __thiscall
cocos2d::PUCollisionAvoidanceAffector::~PUCollisionAvoidanceAffector
          (PUCollisionAvoidanceAffector *this)

{
                    /* try { // try from 00e2457c to 00f2458b has its CatchHandler @ 00e24700 */
  PUAffector::~PUAffector((PUAffector *)this);
  operator_delete(this);
  return;
}

