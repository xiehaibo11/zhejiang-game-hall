
/* cocos2d::experimental::AudioMixer::setBufferProvider(int,
   cocos2d::experimental::AudioBufferProvider*) */

void __thiscall
cocos2d::experimental::AudioMixer::setBufferProvider
          (AudioMixer *this,int param_1,AudioBufferProvider *param_2)

{
  if (*(AudioBufferProvider **)(this + ((long)param_1 + -0x1000) * 0xd0 + 0xd8) != param_2) {
    *(AudioBufferProvider **)(this + ((long)param_1 + -0x1000) * 0xd0 + 0xd8) = param_2;
    *(AudioBufferProvider **)(this + ((long)param_1 + -0x1000) * 0xd0 + 0x90) = param_2;
  }
  return;
}

