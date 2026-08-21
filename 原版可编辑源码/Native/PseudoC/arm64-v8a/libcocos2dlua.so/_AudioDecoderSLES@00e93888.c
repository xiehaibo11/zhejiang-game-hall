
/* cocos2d::experimental::AudioDecoderSLES::~AudioDecoderSLES() */

void __thiscall cocos2d::experimental::AudioDecoderSLES::~AudioDecoderSLES(AudioDecoderSLES *this)

{
  AudioDecoderSLES *pAVar1;
  code *pcVar2;
  
  *(undefined ***)this = &PTR__AudioDecoderSLES_016f4320;
  std::__ndk1::mutex::lock((mutex *)&DAT_0178f414);
  if (*(long **)(this + 0x78) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x78) + 0x30))();
    *(undefined8 *)(this + 0x78) = 0;
  }
  std::__ndk1::mutex::unlock((mutex *)&DAT_0178f414);
  if (0 < *(int *)(this + 0x134)) {
    close(*(int *)(this + 0x134));
    *(undefined4 *)(this + 0x134) = 0;
  }
  free(*(void **)(this + 0x80));
  pAVar1 = *(AudioDecoderSLES **)(this + 0x160);
  if (this + 0x140 == pAVar1) {
    pcVar2 = *(code **)(*(long *)pAVar1 + 0x20);
  }
  else {
    if (pAVar1 == (AudioDecoderSLES *)0x0) goto LAB_00e93920;
    pcVar2 = *(code **)(*(long *)pAVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00e93920:
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)(this + 0xd4));
  std::__ndk1::mutex::~mutex((mutex *)(this + 0xac));
  AudioDecoder::~AudioDecoder((AudioDecoder *)this);
  return;
}

