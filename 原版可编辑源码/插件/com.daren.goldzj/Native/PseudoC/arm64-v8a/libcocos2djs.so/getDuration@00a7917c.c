
/* cocos2d::UrlAudioPlayer::getDuration() const */

void __thiscall cocos2d::UrlAudioPlayer::getDuration(UrlAudioPlayer *this)

{
  long lVar1;
  int iVar2;
  float fVar3;
  uint local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  fVar3 = *(float *)(this + 0x74);
  if (fVar3 <= 0.0) {
    iVar2 = (**(code **)(**(long **)(this + 0x58) + 0x10))(*(long **)(this + 0x58),&local_2c);
    if (iVar2 == 0) {
      if (local_2c == 0xffffffff) {
        fVar3 = -1.0;
      }
      else {
        fVar3 = (float)local_2c / 1000.0;
        *(float *)(this + 0x74) = fVar3;
        if (fVar3 <= 0.0) {
          fVar3 = -1.0;
        }
      }
    }
    else {
      __android_log_print(6,"UrlAudioPlayer","UrlAudioPlayer::getDuration failed");
                    /* try { // try from 00a791d8 to 00b792bb has its CatchHandler @ 00a79058 */
      fVar3 = 0.0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar3);
}

