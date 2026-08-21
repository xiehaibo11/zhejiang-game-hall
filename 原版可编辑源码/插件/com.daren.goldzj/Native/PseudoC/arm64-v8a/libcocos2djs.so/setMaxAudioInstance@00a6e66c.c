
/* cocos2d::AudioEngine::setMaxAudioInstance(int) */

undefined8 cocos2d::AudioEngine::setMaxAudioInstance(int param_1)

{
  if (param_1 - 1U < 0xd) {
    _maxInstances = param_1;
    return 1;
  }
  return 0;
}

