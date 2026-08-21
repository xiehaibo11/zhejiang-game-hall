
/* cocos2d::experimental::PcmAudioService::~PcmAudioService() */

void __thiscall cocos2d::experimental::PcmAudioService::~PcmAudioService(PcmAudioService *this)

{
  *(undefined ***)this = &PTR__PcmAudioService_016f40e8;
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 0x30))();
    *(undefined8 *)(this + 0x18) = 0;
  }
  return;
}

