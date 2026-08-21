
/* cocos2d::UrlAudioPlayer::resume() */

void __thiscall cocos2d::UrlAudioPlayer::resume(UrlAudioPlayer *this)

{
  int iVar1;
  
  if (*(int *)(this + 0x7c) != 3) {
                    /* try { // try from 00a78f38 to 00b79057 has its CatchHandler @ 00a78d28 */
    __android_log_print(5,"UrlAudioPlayer",
                        "UrlAudioPlayer (%p, state:%d) isn\'t paused, could not invoke resume!",this
                       );
    return;
  }
                    /* try { // try from 00a78efc to 00b78f37 has its CatchHandler @ 00a79000 */
  iVar1 = (**(code **)**(undefined8 **)(this + 0x58))(*(undefined8 **)(this + 0x58),3);
  if (iVar1 != 0) {
    __android_log_print(6,"UrlAudioPlayer","UrlAudioPlayer::resume failed");
    return;
  }
  *(undefined4 *)(this + 0x7c) = 2;
  return;
}

