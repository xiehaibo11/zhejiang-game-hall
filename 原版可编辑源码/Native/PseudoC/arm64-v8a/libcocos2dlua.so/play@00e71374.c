
/* cocos2d::experimental::UrlAudioPlayer::play() */

void __thiscall cocos2d::experimental::UrlAudioPlayer::play(UrlAudioPlayer *this)

{
  int iVar1;
  
  if ((*(uint *)(this + 0x7c) | 2) != 3) {
    __android_log_print(5,"UrlAudioPlayer",
                        "UrlAudioPlayer (%p, state:%d) isn\'t paused or initialized, could not invoke play!"
                        ,this);
    return;
  }
  iVar1 = (**(code **)**(undefined8 **)(this + 0x58))(*(undefined8 **)(this + 0x58),3);
  if (iVar1 != 0) {
    __android_log_print(6,"UrlAudioPlayer","UrlAudioPlayer::play failed");
    return;
  }
  *(undefined4 *)(this + 0x7c) = 2;
  return;
}

