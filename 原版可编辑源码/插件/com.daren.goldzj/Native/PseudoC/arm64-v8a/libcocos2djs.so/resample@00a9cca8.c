
/* cocos2d::AudioResamplerOrder1::resample(int*, unsigned long, cocos2d::AudioBufferProvider*) */

void __thiscall
cocos2d::AudioResamplerOrder1::resample
          (AudioResamplerOrder1 *this,int *param_1,ulong param_2,AudioBufferProvider *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 == 2) {
    resampleStereo16(this,param_1,param_2,param_3);
    return;
  }
  if (iVar1 == 1) {
    resampleMono16(this,param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(0,"AudioResampler","invalid channel count: %d",iVar1);
}

