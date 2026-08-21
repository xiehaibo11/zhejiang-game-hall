
/* cocos2d::ScriptHandlerMgr::destroyInstance() */

void cocos2d::ScriptHandlerMgr::destroyInstance(void)

{
  if (_scriptHandlerMgr != (long *)0x0) {
    (**(code **)(*_scriptHandlerMgr + 8))();
  }
  _scriptHandlerMgr = (long *)0x0;
  return;
}

