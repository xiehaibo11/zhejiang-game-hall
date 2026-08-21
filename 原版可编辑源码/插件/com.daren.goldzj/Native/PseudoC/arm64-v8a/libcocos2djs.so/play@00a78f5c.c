
/* cocos2d::UrlAudioPlayer::play() */

void __thiscall cocos2d::UrlAudioPlayer::play(UrlAudioPlayer *this)

{
  int iVar1;
  
  if ((*(uint *)(this + 0x7c) | 2) != 3) {
                    /* catch() { ... } // from try @ 00a78dd8 with catch @ 00a78fd0
                       catch() { ... } // from try @ 00a78e3c with catch @ 00a78fd0 */
    __android_log_print(5,"UrlAudioPlayer",
                        "UrlAudioPlayer (%p, state:%d) isn\'t paused or initialized, could not invoke play!"
                        ,this);
    return;
  }
  iVar1 = (**(code **)**(undefined8 **)(this + 0x58))(*(undefined8 **)(this + 0x58),3);
  if (iVar1 != 0) {
                    /* catch() { ... } // from try @ 00a78de4 with catch @ 00a78fac */
                    /* catch() { ... } // from try @ 00a78df0 with catch @ 00a78fb0
                       catch() { ... } // from try @ 00a78e90 with catch @ 00a78fb0 */
    __android_log_print(6,"UrlAudioPlayer","UrlAudioPlayer::play failed");
    return;
  }
  *(undefined4 *)(this + 0x7c) = 2;
                    /* catch() { ... } // from try @ 00a78da8 with catch @ 00a78fe8 */
  return;
}

