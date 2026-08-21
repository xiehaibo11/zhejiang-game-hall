
/* cocos2d::experimental::UrlAudioPlayer::setLoop(bool) */

void __thiscall cocos2d::experimental::UrlAudioPlayer::setLoop(UrlAudioPlayer *this,bool param_1)

{
  int iVar1;
  
  this[0x78] = (UrlAudioPlayer)param_1;
  iVar1 = (**(code **)(**(long **)(this + 0x60) + 8))(*(long **)(this + 0x60),param_1,0,0xffffffff);
  if (iVar1 != 0) {
    __android_log_print(6,"UrlAudioPlayer","UrlAudioPlayer::setLoop %d failed",this[0x78]);
    return;
  }
  return;
}

