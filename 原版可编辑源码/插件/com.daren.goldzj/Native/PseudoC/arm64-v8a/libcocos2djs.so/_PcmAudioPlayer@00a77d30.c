
/* cocos2d::PcmAudioPlayer::~PcmAudioPlayer() */

void __thiscall cocos2d::PcmAudioPlayer::~PcmAudioPlayer(PcmAudioPlayer *this)

{
  PcmAudioPlayer *pPVar1;
  code *pcVar2;
  
                    /* try { // try from 00a77d48 to 00b77d53 has its CatchHandler @ 00a77fc0 */
  *(undefined ***)this = &PTR__PcmAudioPlayer_01c6f120;
                    /* try { // try from 00a77d54 to 00b77d5f has its CatchHandler @ 00a77fbc */
  if (*(long **)(this + 0x58) != (long *)0x0) {
                    /* try { // try from 00a77d60 to 00b77d77 has its CatchHandler @ 00a77fd4 */
    (**(code **)(**(long **)(this + 0x58) + 8))();
  }
  pPVar1 = *(PcmAudioPlayer **)(this + 0x80);
  if (this + 0x60 == pPVar1) {
    pcVar2 = *(code **)(*(long *)pPVar1 + 0x20);
  }
  else {
    if (pPVar1 == (PcmAudioPlayer *)0x0) goto LAB_00a77d90;
    pcVar2 = *(code **)(*(long *)pPVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00a77d90:
                    /* try { // try from 00a77d94 to 00b77d9b has its CatchHandler @ 00a77fa4 */
  PcmData::~PcmData((PcmData *)(this + 0x28));
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
                    /* try { // try from 00a77da8 to 00b77dcb has its CatchHandler @ 00a77fa0 */
  operator_delete(this);
  return;
}

