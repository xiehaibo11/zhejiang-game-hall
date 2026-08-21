
/* cocos2d::experimental::PcmAudioPlayer::getState() const */

undefined4 __thiscall cocos2d::experimental::PcmAudioPlayer::getState(PcmAudioPlayer *this)

{
  uint uVar1;
  
  if ((*(long *)(this + 0x58) != 0) && (uVar1 = *(uint *)(*(long *)(this + 0x58) + 0xa4), uVar1 < 6)
     ) {
    return *(undefined4 *)(&DAT_014279a8 + (long)(int)uVar1 * 4);
  }
  return 0;
}

