
/* cocos2d::PcmAudioService::pause() */

void __thiscall cocos2d::PcmAudioService::pause(PcmAudioService *this)

{
  int iVar1;
  
  iVar1 = (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),2);
  if (iVar1 != 0) {
    __android_log_print(6,"PcmAudioService","PcmAudioService::pause failed");
    return;
  }
  return;
}

