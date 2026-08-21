
undefined8 FUN_008ac918(long param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  __Dictionary *this;
  EventListener *pEVar4;
  EventListener *pEVar5;
  EventDispatcher *this_00;
  ScriptHandlerMgr *pSVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 != 0) {
    plVar3 = (long *)tolua_tousertype(param_1,1,0);
    iVar2 = lua_gettop(param_1);
    if (iVar2 + -1 == 0) {
      this = (__Dictionary *)(**(code **)(*plVar3 + 0x2f0))(plVar3);
      if (this != (__Dictionary *)0x0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_60,"touchListenerAllAtOnce");
        pEVar4 = (EventListener *)cocos2d::__Dictionary::objectForKey(this,(basic_string *)local_60)
        ;
        if (((byte)local_60[0] & 1) != 0) {
          operator_delete(local_50);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_60,"touchListenerOneByOne");
        pEVar5 = (EventListener *)cocos2d::__Dictionary::objectForKey(this,(basic_string *)local_60)
        ;
        if (((byte)local_60[0] & 1) != 0) {
          operator_delete(local_50);
        }
        this_00 = (EventDispatcher *)(**(code **)(*plVar3 + 0x388))(plVar3);
        if (this_00 != (EventDispatcher *)0x0) {
          cocos2d::EventDispatcher::removeEventListener(this_00,pEVar4);
          cocos2d::EventDispatcher::removeEventListener(this_00,pEVar5);
        }
      }
      pSVar6 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
      cocos2d::ScriptHandlerMgr::removeObjectHandler(pSVar6,plVar3,4);
    }
    else {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
                 "cc.Layer:unregisterScriptTouchHandler",iVar2 + -1,0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

