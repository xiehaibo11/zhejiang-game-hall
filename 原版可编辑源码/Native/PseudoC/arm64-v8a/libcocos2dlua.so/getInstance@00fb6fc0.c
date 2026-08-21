
/* cocos2d::ScriptEngineManager::getInstance() */

void cocos2d::ScriptEngineManager::getInstance(void)

{
  if ((DAT_0178fd20 == (undefined8 *)0x0) &&
     (DAT_0178fd20 = operator_new(8,(nothrow_t *)&std::nothrow), DAT_0178fd20 != (undefined8 *)0x0))
  {
    *DAT_0178fd20 = 0;
  }
  return;
}

