
/* cocos2d::PcmAudioPlayer::~PcmAudioPlayer() */

void __thiscall cocos2d::PcmAudioPlayer::~PcmAudioPlayer(PcmAudioPlayer *this)

{
  PcmAudioPlayer *pPVar1;
  code *pcVar2;
  
  *(undefined ***)this = &PTR__PcmAudioPlayer_01c6f120;
  if (*(long **)(this + 0x58) != (long *)0x0) {
                    /* try { // try from 00a77cd4 to 00b77d27 has its CatchHandler @ 00a77cd4
                       catch() { ... } // from try @ 00a77cd4 with catch @ 00a77cd4
                       catch() { ... } // from try @ 00a77f2c with catch @ 00a77cd4 */
    (**(code **)(**(long **)(this + 0x58) + 8))();
  }
  pPVar1 = *(PcmAudioPlayer **)(this + 0x80);
  if (this + 0x60 == pPVar1) {
    pcVar2 = *(code **)(*(long *)pPVar1 + 0x20);
  }
  else {
    if (pPVar1 == (PcmAudioPlayer *)0x0) goto LAB_00a77d04;
    pcVar2 = *(code **)(*(long *)pPVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00a77d04:
  PcmData::~PcmData((PcmData *)(this + 0x28));
  if (((byte)this[0x10] & 1) == 0) {
    return;
  }
                    /* try { // try from 00a77d28 to 00b77d3f has its CatchHandler @ 00a77fc4 */
  operator_delete(*(void **)(this + 0x20));
  return;
}

