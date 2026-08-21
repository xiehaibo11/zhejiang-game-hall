
/* cocos2d::Animation3DCache::getInstance() */

void cocos2d::Animation3DCache::getInstance(void)

{
  if ((_cacheInstance == (undefined8 *)0x0) &&
     (_cacheInstance = operator_new(0x28,(nothrow_t *)&std::nothrow),
     _cacheInstance != (undefined8 *)0x0)) {
    _cacheInstance[1] = 0;
    *_cacheInstance = 0;
    _cacheInstance[3] = 0;
    _cacheInstance[2] = 0;
    *(undefined4 *)(_cacheInstance + 4) = 0x3f800000;
  }
  return;
}

