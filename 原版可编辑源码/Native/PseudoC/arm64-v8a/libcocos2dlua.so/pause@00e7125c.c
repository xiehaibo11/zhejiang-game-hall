
/* cocos2d::experimental::UrlAudioPlayer::pause() */

void __thiscall cocos2d::experimental::UrlAudioPlayer::pause(UrlAudioPlayer *this)

{
  int iVar1;
  
  if (*(int *)(this + 0x7c) != 2) {
    __android_log_print(5,"UrlAudioPlayer",
                        "UrlAudioPlayer (%p, state:%d) isn\'t playing, could not invoke pause!",this
                       );
    return;
  }
  iVar1 = (**(code **)**(undefined8 **)(this + 0x58))(*(undefined8 **)(this + 0x58),2);
  if (iVar1 != 0) {
    __android_log_print(6,"UrlAudioPlayer","UrlAudioPlayer::pause failed");
    return;
  }
  *(undefined4 *)(this + 0x7c) = 3;
  return;
}

