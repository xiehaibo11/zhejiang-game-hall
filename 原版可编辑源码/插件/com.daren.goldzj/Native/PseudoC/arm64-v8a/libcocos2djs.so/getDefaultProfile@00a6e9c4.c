
/* cocos2d::AudioEngine::getDefaultProfile() */

void cocos2d::AudioEngine::getDefaultProfile(void)

{
                    /* try { // try from 00a6e9ec to 00b6ea43 has its CatchHandler @ 00a6eb3c */
  if ((_defaultProfileHelper == (undefined8 *)0x0) &&
     (_defaultProfileHelper = operator_new(0x48,(nothrow_t *)&std::nothrow),
     _defaultProfileHelper != (undefined8 *)0x0)) {
    _defaultProfileHelper[1] = 0;
    _defaultProfileHelper[2] = 0;
    *_defaultProfileHelper = 0;
    *(undefined4 *)(_defaultProfileHelper + 3) = 0;
    _defaultProfileHelper[7] = 0;
    _defaultProfileHelper[8] = 0;
    _defaultProfileHelper[4] = 0;
    _defaultProfileHelper[5] = _defaultProfileHelper + 5;
    _defaultProfileHelper[6] = _defaultProfileHelper + 5;
  }
  return;
}

