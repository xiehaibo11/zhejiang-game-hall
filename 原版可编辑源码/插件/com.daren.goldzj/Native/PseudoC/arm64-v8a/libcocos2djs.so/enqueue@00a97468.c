
/* cocos2d::PcmAudioService::enqueue() */

undefined8 __thiscall cocos2d::PcmAudioService::enqueue(PcmAudioService *this)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  
  uVar2 = AudioMixerController::hasPlayingTacks(*(AudioMixerController **)(this + 0x48));
  if (((uVar2 & 1) == 0) || ((*(byte *)(*(long *)(this + 0x48) + 0x68) & 1) != 0)) {
    iVar1 = (**(code **)**(undefined8 **)(this + 0x30))
                      (*(undefined8 **)(this + 0x30),DAT_01d38df8,
                       (int)DAT_01d38e00 - (int)DAT_01d38df8);
    if (iVar1 == 0) {
      return 1;
    }
    pcVar3 = "enqueue silent data failed!";
  }
  else {
    AudioMixerController::mixOneFrame(*(AudioMixerController **)(this + 0x48));
    iVar1 = (**(code **)**(undefined8 **)(this + 0x30))
                      (*(undefined8 **)(this + 0x30),*(undefined8 *)(*(long *)(this + 0x48) + 0x58),
                       *(undefined4 *)(*(long *)(this + 0x48) + 0x60));
    if (iVar1 == 0) {
      return 1;
    }
    pcVar3 = "enqueue failed!";
  }
  __android_log_print(6,"PcmAudioService",pcVar3);
  return 0;
}

