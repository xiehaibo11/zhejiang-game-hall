
/* cocos2d::experimental::AudioMixerController::~AudioMixerController() */

void __thiscall
cocos2d::experimental::AudioMixerController::~AudioMixerController(AudioMixerController *this)

{
  AudioMixerController AVar1;
  void *pvVar2;
  AudioMixer *this_00;
  
  AVar1 = this[0x69];
  while (((byte)AVar1 & 1) != 0) {
    usleep(10);
    AVar1 = this[0x69];
  }
  usleep(2000);
  this_00 = *(AudioMixer **)(this + 0x10);
  if (this_00 != (AudioMixer *)0x0) {
    AudioMixer::~AudioMixer(this_00);
    operator_delete(this_00);
    *(undefined8 *)(this + 0x10) = 0;
  }
  free(*(void **)(this + 0x58));
  pvVar2 = *(void **)(this + 0x40);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x48) = pvVar2;
    operator_delete(pvVar2);
  }
  std::__ndk1::mutex::~mutex((mutex *)(this + 0x18));
  return;
}

