
/* cocos2d::LuaEngine::getInstance() */

undefined8 * cocos2d::LuaEngine::getInstance(void)

{
  undefined8 *puVar1;
  Ref *this;
  
  if (_defaultEngine == (undefined8 *)0x0) {
    puVar1 = operator_new(0x10,(nothrow_t *)&std::nothrow);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &PTR__LuaEngine_01698328;
      puVar1[1] = 0;
    }
    _defaultEngine = puVar1;
    this = (Ref *)LuaStack::create();
    puVar1[1] = this;
    Ref::retain(this);
  }
  return _defaultEngine;
}

