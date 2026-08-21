
/* cocos2d::experimental::AudioResampler::setSampleRate(int) */

void __thiscall
cocos2d::experimental::AudioResampler::setSampleRate(AudioResampler *this,int param_1)

{
  *(int *)(this + 0x10) = param_1;
  *(int *)(this + 0x38) =
       (int)(((double)param_1 * 1073741824.0) / (double)(long)*(int *)(this + 0xc));
  return;
}

