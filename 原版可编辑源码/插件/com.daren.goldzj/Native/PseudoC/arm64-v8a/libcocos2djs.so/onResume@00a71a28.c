
/* cocos2d::AudioEngineImpl::onResume() */

void __thiscall cocos2d::AudioEngineImpl::onResume(AudioEngineImpl *this)

{
  if (*(AudioPlayerProvider **)(this + 0xa0) != (AudioPlayerProvider *)0x0) {
    AudioPlayerProvider::resume(*(AudioPlayerProvider **)(this + 0xa0));
    return;
  }
  return;
}

