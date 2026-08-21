
/* cocos2d::CCPUBoxEmitter::setDepth(float) */

void __thiscall cocos2d::CCPUBoxEmitter::setDepth(CCPUBoxEmitter *this,float param_1)

{
  *(float *)(this + 0x204) = param_1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e33eb4 with catch @ 00e33f18
                        */
  *(float *)(this + 0x210) = param_1 * 0.5;
  return;
}

