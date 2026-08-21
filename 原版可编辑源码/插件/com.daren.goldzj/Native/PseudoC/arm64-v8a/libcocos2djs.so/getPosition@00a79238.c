
/* cocos2d::UrlAudioPlayer::getPosition() const */

void __thiscall cocos2d::UrlAudioPlayer::getPosition(UrlAudioPlayer *this)

{
  long lVar1;
  int iVar2;
  float fVar3;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 00a790d8 with catch @ 00a7924c */
  local_28 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00a790cc with catch @ 00a79250 */
                    /* catch() { ... } // from try @ 00a790ac with catch @ 00a79254 */
                    /* catch() { ... } // from try @ 00a790e4 with catch @ 00a79264 */
  iVar2 = (**(code **)(**(long **)(this + 0x58) + 0x18))(*(long **)(this + 0x58),&local_2c);
  if (iVar2 == 0) {
    fVar3 = (float)NEON_ucvtf(local_2c);
    fVar3 = fVar3 / 1000.0;
  }
  else {
    __android_log_print(6,"UrlAudioPlayer","UrlAudioPlayer::getPosition failed");
    fVar3 = 0.0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00a792bc to 00b7930f has its CatchHandler @ 00a792bc
                       catch() { ... } // from try @ 00a792bc with catch @ 00a792bc
                       catch() { ... } // from try @ 00a79424 with catch @ 00a792bc */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar3);
}

