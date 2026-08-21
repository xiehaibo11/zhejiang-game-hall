
/* cocos2d::GLProgramStateCache::getInstance() */

void cocos2d::GLProgramStateCache::getInstance(void)

{
  if ((s_instance == (undefined8 *)0x0) &&
     (s_instance = operator_new(0x28,(nothrow_t *)&std::nothrow), s_instance != (undefined8 *)0x0))
  {
    s_instance[1] = 0;
    *s_instance = 0;
    s_instance[3] = 0;
    s_instance[2] = 0;
    *(undefined4 *)(s_instance + 4) = 0x3f800000;
  }
  return;
}

