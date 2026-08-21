
/* cocos2d::experimental::AudioEngine::setEnabled(bool) */

void cocos2d::experimental::AudioEngine::setEnabled(bool param_1)

{
  if (((bool)_isEnabled != param_1) && (_isEnabled = param_1, !param_1)) {
    stopAll();
    return;
  }
  return;
}

