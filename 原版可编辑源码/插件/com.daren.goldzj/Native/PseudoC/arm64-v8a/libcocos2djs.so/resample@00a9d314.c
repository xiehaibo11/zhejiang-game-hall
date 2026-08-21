
/* cocos2d::AudioResamplerCubic::resample(int*, unsigned long, cocos2d::AudioBufferProvider*) */

void __thiscall
cocos2d::AudioResamplerCubic::resample
          (AudioResamplerCubic *this,int *param_1,ulong param_2,AudioBufferProvider *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
                    /* try { // try from 00a9d31c to 00b9d32f has its CatchHandler @ 00a9d344 */
  if (iVar1 == 2) {
    resampleStereo16(this,param_1,param_2,param_3);
    return;
  }
  if (iVar1 == 1) {
    resampleMono16(this,param_1,param_2,param_3);
    return;
  }
                    /* try { // try from 00a9d330 to 00b9d35f has its CatchHandler @ 00a9d2f8 */
                    /* catch() { ... } // from try @ 00a9d31c with catch @ 00a9d344 */
                    /* WARNING: Subroutine does not return */
  __android_log_assert(0,"AudioResamplerCubic","invalid channel count: %d",iVar1);
}

