
/* cocos2d::PUCollisionAvoidanceAffector::PUCollisionAvoidanceAffector() */

void __thiscall
cocos2d::PUCollisionAvoidanceAffector::PUCollisionAvoidanceAffector
          (PUCollisionAvoidanceAffector *this)

{
                    /* try { // try from 00e24530 to 00f2457b has its CatchHandler @ 00e242c0 */
  PUAffector::PUAffector((PUAffector *)this);
  *(undefined4 *)(this + 0xac) = 0x42c80000;
  *(undefined ***)this = &PTR__PUCollisionAvoidanceAffector_016eee90;
  return;
}

