
/* cocos2d::ObjectFactory::getInstance() */

void cocos2d::ObjectFactory::getInstance(void)

{
  if ((_sharedFactory == (undefined8 *)0x0) &&
     (_sharedFactory = operator_new(0x30,(nothrow_t *)&std::nothrow),
     _sharedFactory != (undefined8 *)0x0)) {
    _sharedFactory[2] = 0;
    _sharedFactory[1] = 0;
    _sharedFactory[4] = 0;
    _sharedFactory[3] = 0;
    *_sharedFactory = &PTR__ObjectFactory_017239c0;
    *(undefined4 *)(_sharedFactory + 5) = 0x3f800000;
  }
  return;
}

