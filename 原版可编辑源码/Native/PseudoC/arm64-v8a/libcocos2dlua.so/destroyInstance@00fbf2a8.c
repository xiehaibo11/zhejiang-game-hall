
/* cocos2d::ObjectFactory::destroyInstance() */

void cocos2d::ObjectFactory::destroyInstance(void)

{
  if (_sharedFactory != (long *)0x0) {
    (**(code **)(*_sharedFactory + 8))();
  }
  _sharedFactory = (long *)0x0;
  return;
}

