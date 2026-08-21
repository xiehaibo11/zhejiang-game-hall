
/* cocos2d::CCPUBoxEmitter::CCPUBoxEmitter() */

void __thiscall cocos2d::CCPUBoxEmitter::CCPUBoxEmitter(CCPUBoxEmitter *this)

{
  PUEmitter::PUEmitter((PUEmitter *)this);
                    /* try { // try from 00e33eb4 to 00f33eb7 has its CatchHandler @ 00e33f18 */
  *(undefined ***)this = &PTR__PUEmitter_016f0588;
  *(undefined8 *)(this + 0x204) = 0x4248000042c80000;
  *(undefined8 *)(this + 0x1fc) = 0x42c8000042c80000;
  *(undefined8 *)(this + 0x20c) = 0x4248000042480000;
  return;
}

