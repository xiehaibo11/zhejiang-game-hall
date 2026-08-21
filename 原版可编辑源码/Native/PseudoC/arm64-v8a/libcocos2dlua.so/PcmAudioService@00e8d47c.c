
/* cocos2d::experimental::PcmAudioService::PcmAudioService(SLEngineItf_ const* const*, SLObjectItf_
   const* const*) */

void __thiscall
cocos2d::experimental::PcmAudioService::PcmAudioService
          (PcmAudioService *this,SLEngineItf_ **param_1,SLObjectItf_ **param_2)

{
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(SLEngineItf_ ***)(this + 8) = param_1;
  *(SLObjectItf_ ***)(this + 0x10) = param_2;
  *(undefined4 *)(this + 0x40) = 0;
  this[0x44] = (PcmAudioService)0x0;
  *(undefined8 *)(this + 0x38) = 0xffffffffffffffff;
  *(undefined ***)this = &PTR__PcmAudioService_016f40e8;
  *(undefined8 *)(this + 0x48) = 0;
  return;
}

