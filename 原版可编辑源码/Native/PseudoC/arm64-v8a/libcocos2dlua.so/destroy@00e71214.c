
/* cocos2d::experimental::UrlAudioPlayer::destroy() */

void __thiscall cocos2d::experimental::UrlAudioPlayer::destroy(UrlAudioPlayer *this)

{
  if (**(char **)(this + 0xb8) == '\0') {
    **(char **)(this + 0xb8) = '\x01';
    if (*(long **)(this + 0x50) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x50) + 0x30))();
      *(undefined8 *)(this + 0x50) = 0;
    }
  }
  return;
}

