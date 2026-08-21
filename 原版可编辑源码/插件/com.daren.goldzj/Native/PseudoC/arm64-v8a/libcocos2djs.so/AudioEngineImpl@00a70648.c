
/* cocos2d::AudioEngineImpl::AudioEngineImpl() */

void __thiscall cocos2d::AudioEngineImpl::AudioEngineImpl(AudioEngineImpl *this)

{
                    /* try { // try from 00a70658 to 00b70663 has its CatchHandler @ 00a70d0c */
  Ref::Ref((Ref *)this);
  *(undefined4 *)(this + 0x48) = 0x3f800000;
  *(undefined4 *)(this + 0x70) = 0x3f800000;
                    /* try { // try from 00a70668 to 00b7066f has its CatchHandler @ 00a70cf4 */
  *(undefined4 *)(this + 0x98) = 0x3f800000;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
                    /* try { // try from 00a70684 to 00b7068f has its CatchHandler @ 00a70cdc */
  *(undefined ***)this = &PTR__AudioEngineImpl_01c6eba0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
                    /* try { // try from 00a70694 to 00b7069b has its CatchHandler @ 00a70cc4 */
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  this[0xac] = (AudioEngineImpl)0x1;
  DAT_01d1b780 = pthread_self();
  DAT_01d38d10 = this;
  return;
}

