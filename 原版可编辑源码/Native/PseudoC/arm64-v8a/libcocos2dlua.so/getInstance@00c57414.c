
/* cocostudio::SpriteFrameCacheHelper::getInstance() */

void cocostudio::SpriteFrameCacheHelper::getInstance(void)

{
  if ((_spriteFrameCacheHelper == (undefined8 *)0x0) &&
     (_spriteFrameCacheHelper = operator_new(0x18,(nothrow_t *)&std::nothrow),
     _spriteFrameCacheHelper != (undefined8 *)0x0)) {
    _spriteFrameCacheHelper[1] = 0;
    _spriteFrameCacheHelper[2] = 0;
    *_spriteFrameCacheHelper = _spriteFrameCacheHelper + 1;
  }
  return;
}

