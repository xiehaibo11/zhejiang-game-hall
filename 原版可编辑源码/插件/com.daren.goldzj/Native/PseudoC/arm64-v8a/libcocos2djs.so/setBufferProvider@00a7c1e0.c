
/* cocos2d::AudioMixer::setBufferProvider(int, cocos2d::AudioBufferProvider*) */

void __thiscall
cocos2d::AudioMixer::setBufferProvider(AudioMixer *this,int param_1,AudioBufferProvider *param_2)

{
  if (*(AudioBufferProvider **)(this + ((long)param_1 + -0x1000) * 0xd0 + 0xd8) != param_2) {
    *(AudioBufferProvider **)(this + ((long)param_1 + -0x1000) * 0xd0 + 0xd8) = param_2;
                    /* try { // try from 00a7c200 to 00b7c24f has its CatchHandler @ 00a7c200
                       catch() { ... } // from try @ 00a7c200 with catch @ 00a7c200
                       catch() { ... } // from try @ 00a7c2c4 with catch @ 00a7c200 */
    *(AudioBufferProvider **)(this + ((long)param_1 + -0x1000) * 0xd0 + 0x90) = param_2;
  }
  return;
}

