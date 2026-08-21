
/* cocos2d::PUObserver::PUObserver() */

void __thiscall cocos2d::PUObserver::PUObserver(PUObserver *this)

{
  Ref::Ref((Ref *)this);
  *(undefined4 *)(this + 0x60) = 0x1000101;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined2 *)(this + 100) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
                    /* try { // try from 00e4d970 to 00f4d977 has its CatchHandler @ 00e4da30 */
  *(undefined ***)this = &PTR__PUObserver_016f24a0;
  this[0x78] = (PUObserver)0x0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0x3d4ccccd;
  *(undefined8 *)(this + 0x68) = 0x3f8000003f800000;
                    /* try { // try from 00e4d9a0 to 00f4d9a7 has its CatchHandler @ 00e4da20 */
  *(undefined4 *)(this + 0x70) = 0x3f800000;
  *(undefined4 *)(this + 0x74) = 0;
  this[0xa0] = (PUObserver)0x0;
                    /* try { // try from 00e4d9a8 to 00f4da43 has its CatchHandler @ 00e4d918 */
  return;
}

