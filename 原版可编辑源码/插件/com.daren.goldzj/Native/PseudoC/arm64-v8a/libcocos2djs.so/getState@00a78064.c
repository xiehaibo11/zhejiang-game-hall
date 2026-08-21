
/* cocos2d::PcmAudioPlayer::getState() const */

undefined4 __thiscall cocos2d::PcmAudioPlayer::getState(PcmAudioPlayer *this)

{
  uint uVar1;
  
  if ((*(long *)(this + 0x58) != 0) && (uVar1 = *(uint *)(*(long *)(this + 0x58) + 0xa4), uVar1 < 6)
     ) {
                    /* try { // try from 00a78080 to 00b78097 has its CatchHandler @ 00a7831c */
    return *(undefined4 *)(&DAT_0189c69c + (long)(int)uVar1 * 4);
  }
  return 0;
}

