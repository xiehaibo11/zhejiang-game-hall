
/* cocos2d::AudioResampler::~AudioResampler() */

int __thiscall cocos2d::AudioResampler::~AudioResampler(AudioResampler *this)

{
  int iVar1;
  
  *(undefined ***)this = &PTR__AudioResampler_01c6f6f8;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_01d38e40);
                    /* catch() { ... } // from try @ 00a9d1ac with catch @ 00a9d1fc */
  iVar1 = (*(int *)(this + 0x50) - 2U) * 0xe + 6;
  if (2 < *(int *)(this + 0x50) - 2U) {
    iVar1 = 3;
  }
  if (-1 < DAT_01d38e68 - iVar1) {
    DAT_01d38e68 = DAT_01d38e68 - iVar1;
    iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_01d38e40);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert("newMHz < 0","AudioResampler","negative resampler load %d MHz");
}

