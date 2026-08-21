
/* cocos2d::PUSineForceAffector::PUSineForceAffector() */

void __thiscall cocos2d::PUSineForceAffector::PUSineForceAffector(PUSineForceAffector *this)

{
                    /* try { // try from 00e2d948 to 00f2d94f has its CatchHandler @ 00e2da00 */
  PUBaseForceAffector::PUBaseForceAffector((PUBaseForceAffector *)this);
  *(undefined8 *)(this + 0xd0) = 0x3f8000003f800000;
  *(undefined8 *)(this + 200) = 0x3f80000043b48000;
                    /* try { // try from 00e2d970 to 00f2d973 has its CatchHandler @ 00e2da14 */
  *(undefined ***)this = &PTR__PUSineForceAffector_016efe90;
                    /* try { // try from 00e2d974 to 00f2da4b has its CatchHandler @ 00e2d8a4 */
  return;
}

