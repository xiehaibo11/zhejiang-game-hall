
/* cocos2d::PcmAudioService::resume() */

void __thiscall cocos2d::PcmAudioService::resume(PcmAudioService *this)

{
  int iVar1;
  
  iVar1 = (**(code **)**(undefined8 **)(this + 0x20))(*(undefined8 **)(this + 0x20),3);
  if (iVar1 != 0) {
    __android_log_print(6,"PcmAudioService","PcmAudioService::resume failed");
    return;
  }
  return;
}

