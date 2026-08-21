
/* cocos2d::AudioEngine::uncacheAll() */

void cocos2d::AudioEngine::uncacheAll(void)

{
                    /* try { // try from 00a6e2f8 to 00b6e3db has its CatchHandler @ 00a6e1f4 */
  if (_audioEngineImpl != (AudioEngineImpl *)0x0) {
    stopAll();
    AudioEngineImpl::uncacheAll(_audioEngineImpl);
    return;
  }
  return;
}

