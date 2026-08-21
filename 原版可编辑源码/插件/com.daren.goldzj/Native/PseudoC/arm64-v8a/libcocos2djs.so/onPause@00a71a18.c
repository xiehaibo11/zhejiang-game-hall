
/* cocos2d::AudioEngineImpl::onPause() */

void __thiscall cocos2d::AudioEngineImpl::onPause(AudioEngineImpl *this)

{
  if (*(AudioPlayerProvider **)(this + 0xa0) != (AudioPlayerProvider *)0x0) {
    AudioPlayerProvider::pause(*(AudioPlayerProvider **)(this + 0xa0));
    return;
  }
  return;
}

