
/* cocos2d::UrlAudioPlayer::setLoop(bool) */

void __thiscall cocos2d::UrlAudioPlayer::setLoop(UrlAudioPlayer *this,bool param_1)

{
  int iVar1;
  
  this[0x78] = (UrlAudioPlayer)param_1;
  iVar1 = (**(code **)(**(long **)(this + 0x60) + 8))(*(long **)(this + 0x60),param_1,0,0xffffffff);
  if (iVar1 != 0) {
                    /* try { // try from 00a79794 to 00b797d7 has its CatchHandler @ 00a79794
                       catch() { ... } // from try @ 00a79794 with catch @ 00a79794
                       catch() { ... } // from try @ 00a79804 with catch @ 00a79794
                       catch() { ... } // from try @ 00a79820 with catch @ 00a79794 */
    __android_log_print(6,"UrlAudioPlayer","UrlAudioPlayer::setLoop %d failed",this[0x78]);
    return;
  }
  return;
}

