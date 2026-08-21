
/* cocos2d::UrlAudioPlayer::destroy() */

void __thiscall cocos2d::UrlAudioPlayer::destroy(UrlAudioPlayer *this)

{
  if (**(char **)(this + 0xb8) == '\0') {
    **(char **)(this + 0xb8) = '\x01';
                    /* try { // try from 00a78e1c to 00b78e37 has its CatchHandler @ 00a79000 */
    if (*(long **)(this + 0x50) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x50) + 0x30))();
      *(undefined8 *)(this + 0x50) = 0;
    }
  }
                    /* try { // try from 00a78e3c to 00b78e7f has its CatchHandler @ 00a78fd0 */
  return;
}

