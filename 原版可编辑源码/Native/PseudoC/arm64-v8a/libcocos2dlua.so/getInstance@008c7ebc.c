
/* cocos2d::ScriptHandlerMgr::getInstance() */

undefined8 * cocos2d::ScriptHandlerMgr::getInstance(void)

{
  undefined8 *puVar1;
  
  if (_scriptHandlerMgr == (undefined8 *)0x0) {
    puVar1 = operator_new(0x20,(nothrow_t *)&std::nothrow);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[2] = 0;
      puVar1[3] = 0;
      *puVar1 = &PTR__ScriptHandlerMgr_0169b300;
      puVar1[1] = puVar1 + 2;
    }
    _scriptHandlerMgr = puVar1;
    std::__ndk1::
    __tree<std::__ndk1::__value_type<void*,std::__ndk1::vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>>,std::__ndk1::__map_value_compare<void*,std::__ndk1::__value_type<void*,std::__ndk1::vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>>,std::__ndk1::less<void*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<void*,std::__ndk1::vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>>>>
    ::destroy((__tree<std::__ndk1::__value_type<void*,std::__ndk1::vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>>,std::__ndk1::__map_value_compare<void*,std::__ndk1::__value_type<void*,std::__ndk1::vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>>,std::__ndk1::less<void*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<void*,std::__ndk1::vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>>>>
               *)(puVar1 + 1),(__tree_node *)puVar1[2]);
    puVar1[1] = puVar1 + 2;
    puVar1[2] = 0;
    puVar1[3] = 0;
  }
  return _scriptHandlerMgr;
}

