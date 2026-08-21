
/* cocos2d::AudioResamplerOrder1::~AudioResamplerOrder1() */

void __thiscall cocos2d::AudioResamplerOrder1::~AudioResamplerOrder1(AudioResamplerOrder1 *this)

{
  int iVar1;
  
  *(undefined ***)this = &PTR__AudioResampler_01c6f6f8;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_01d38e40);
                    /* catch() { ... } // from try @ 00a9d2c4 with catch @ 00a9d28c */
  iVar1 = (*(int *)(this + 0x50) - 2U) * 0xe + 6;
  if (2 < *(int *)(this + 0x50) - 2U) {
    iVar1 = 3;
  }
  if (-1 < DAT_01d38e68 - iVar1) {
    DAT_01d38e68 = DAT_01d38e68 - iVar1;
                    /* try { // try from 00a9d2b4 to 00b9d2c3 has its CatchHandler @ 00a9d2dc */
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_01d38e40);
                    /* try { // try from 00a9d2c4 to 00b9d2f7 has its CatchHandler @ 00a9d28c */
    operator_delete(this);
    return;
  }
                    /* catch() { ... } // from try @ 00a9d2b4 with catch @ 00a9d2dc */
                    /* WARNING: Subroutine does not return */
  __android_log_assert("newMHz < 0","AudioResampler","negative resampler load %d MHz");
}

