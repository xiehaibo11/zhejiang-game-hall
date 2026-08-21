
/* cocos2d::experimental::AudioResamplerOrder1::~AudioResamplerOrder1() */

void __thiscall
cocos2d::experimental::AudioResamplerOrder1::~AudioResamplerOrder1(AudioResamplerOrder1 *this)

{
  int iVar1;
  
  *(undefined ***)this = &PTR__AudioResampler_016f4440;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0178f444);
  iVar1 = (*(int *)(this + 0x50) - 2U) * 0xe + 6;
  if (2 < *(int *)(this + 0x50) - 2U) {
    iVar1 = 3;
  }
  if (-1 < DAT_0178f46c - iVar1) {
    DAT_0178f46c = DAT_0178f46c - iVar1;
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0178f444);
    operator_delete(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert("newMHz < 0","AudioResampler","negative resampler load %d MHz");
}

