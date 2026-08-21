
undefined8 FUN_008acb18(long param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  __Dictionary *this;
  EventListener *pEVar4;
  EventDispatcher *this_00;
  ScriptHandlerMgr *pSVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != 0) {
    plVar3 = (long *)tolua_tousertype(param_1,1,0);
    iVar2 = lua_gettop(param_1);
    if (iVar2 + -1 == 0) {
      this = (__Dictionary *)(**(code **)(*plVar3 + 0x2f0))(plVar3);
      if (this != (__Dictionary *)0x0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_50,"keyboardListener");
        pEVar4 = (EventListener *)cocos2d::__Dictionary::objectForKey(this,(basic_string *)local_50)
        ;
        if (((byte)local_50[0] & 1) != 0) {
          operator_delete(local_40);
        }
        this_00 = (EventDispatcher *)(**(code **)(*plVar3 + 0x388))(plVar3);
        if (this_00 != (EventDispatcher *)0x0) {
          cocos2d::EventDispatcher::removeEventListener(this_00,pEVar4);
        }
      }
      pSVar5 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
      cocos2d::ScriptHandlerMgr::removeObjectHandler(pSVar5,plVar3,5);
    }
    else {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
                 "cc.Layer:unregisterScriptKeypadHandler",iVar2 + -1,0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

