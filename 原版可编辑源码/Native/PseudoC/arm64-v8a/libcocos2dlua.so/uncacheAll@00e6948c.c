
/* cocos2d::experimental::AudioEngine::uncacheAll() */

void cocos2d::experimental::AudioEngine::uncacheAll(void)

{
  if (_audioEngineImpl != (AudioEngineImpl *)0x0) {
    stopAll();
    AudioEngineImpl::uncacheAll(_audioEngineImpl);
    return;
  }
  return;
}

