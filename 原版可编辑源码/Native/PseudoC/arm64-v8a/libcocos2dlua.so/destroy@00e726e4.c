
/* cocos2d::experimental::AudioMixerController::destroy() */

int __thiscall cocos2d::experimental::AudioMixerController::destroy(AudioMixerController *this)

{
  AudioMixerController AVar1;
  int iVar2;
  
  AVar1 = this[0x69];
  while (((byte)AVar1 & 1) != 0) {
    usleep(10);
    AVar1 = this[0x69];
  }
  iVar2 = usleep(2000);
  return iVar2;
}

