
/* cocos2d::LuaEngine::handleEvent(cocos2d::ScriptHandlerMgr::HandlerType, void*, int,
   std::__ndk1::function<void (lua_State*, int)> const&) */

undefined8 cocos2d::LuaEngine::handleEvent(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 - 0x1bU < 3) {
    uVar1 = handleTableViewEvent();
    return uVar1;
  }
  return 0;
}

