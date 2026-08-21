
/* cocos2d::BatchSprite3DCache::getInstance() */

void cocos2d::BatchSprite3DCache::getInstance(void)

{
  if ((_cacheInstance == (undefined8 *)0x0) &&
     (_cacheInstance = operator_new(0x18,(nothrow_t *)&std::nothrow),
     _cacheInstance != (undefined8 *)0x0)) {
    _cacheInstance[1] = 0;
    _cacheInstance[2] = 0;
    *_cacheInstance = _cacheInstance + 1;
  }
  return;
}

