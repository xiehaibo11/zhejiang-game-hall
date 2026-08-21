
/* cocos2d::PUColorAffector::PUColorAffector() */

void __thiscall cocos2d::PUColorAffector::PUColorAffector(PUColorAffector *this)

{
  PUAffector::PUAffector((PUAffector *)this);
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined ***)this = &PTR__PUColorAffector_016eef90;
                    /* try { // try from 00e24830 to 00f2483f has its CatchHandler @ 00e24dc4 */
  *(undefined8 *)(this + 0xb8) = 0;
  *(PUColorAffector **)(this + 0xb0) = this + 0xb8;
  *(undefined4 *)(this + 200) = 1;
                    /* try { // try from 00e24840 to 00f248c7 has its CatchHandler @ 00e247ec */
  return;
}

