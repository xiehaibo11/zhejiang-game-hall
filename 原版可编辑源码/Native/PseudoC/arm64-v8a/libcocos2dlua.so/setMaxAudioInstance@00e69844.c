
/* cocos2d::experimental::AudioEngine::setMaxAudioInstance(int) */

undefined8 cocos2d::experimental::AudioEngine::setMaxAudioInstance(int param_1)

{
  if (param_1 - 1U < 0x18) {
    _maxInstances = param_1;
    return 1;
  }
  return 0;
}

