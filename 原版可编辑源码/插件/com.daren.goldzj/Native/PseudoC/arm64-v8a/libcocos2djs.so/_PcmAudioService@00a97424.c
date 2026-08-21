
/* cocos2d::PcmAudioService::~PcmAudioService() */

void __thiscall cocos2d::PcmAudioService::~PcmAudioService(PcmAudioService *this)

{
  *(undefined ***)this = &PTR__PcmAudioService_01c6f470;
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 0x30))();
  }
  operator_delete(this);
  return;
}

