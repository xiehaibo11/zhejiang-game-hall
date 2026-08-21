
/* cocos2d::experimental::PcmAudioPlayer::~PcmAudioPlayer() */

void __thiscall cocos2d::experimental::PcmAudioPlayer::~PcmAudioPlayer(PcmAudioPlayer *this)

{
  PcmAudioPlayer *pPVar1;
  code *pcVar2;
  
  *(undefined ***)this = &PTR__PcmAudioPlayer_016f3da8;
  if (*(long **)(this + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x58) + 8))();
  }
  pPVar1 = *(PcmAudioPlayer **)(this + 0x80);
  if (this + 0x60 == pPVar1) {
    pcVar2 = *(code **)(*(long *)pPVar1 + 0x20);
  }
  else {
    if (pPVar1 == (PcmAudioPlayer *)0x0) goto LAB_00e70184;
    pcVar2 = *(code **)(*(long *)pPVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00e70184:
  PcmData::~PcmData((PcmData *)(this + 0x28));
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  operator_delete(this);
  return;
}

