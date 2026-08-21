
/* cocos2d::experimental::PcmAudioService::pause() */

void __thiscall cocos2d::experimental::PcmAudioService::pause(PcmAudioService *this)

{
  int iVar1;
  
  if ((this[0x44] != (PcmAudioService)0x0) &&
     (iVar1 = (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),2),
     iVar1 != 0)) {
    __android_log_print(6,"PcmAudioService","PcmAudioService::pause failed");
    return;
  }
  return;
}

