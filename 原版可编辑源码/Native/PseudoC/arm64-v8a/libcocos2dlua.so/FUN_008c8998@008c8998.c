
void FUN_008c8998(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isusertable(param_1,1,"ScriptHandlerMgr",0,auStack_48);
  if ((iVar2 == 0) || (iVar2 = tolua_isnoobj(param_1,2,auStack_48), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'getInstance\'.",auStack_48);
    uVar4 = 0;
  }
  else {
    if (cocos2d::ScriptHandlerMgr::_scriptHandlerMgr == (undefined8 *)0x0) {
      puVar3 = operator_new(0x20,(nothrow_t *)&std::nothrow);
      if (puVar3 != (undefined8 *)0x0) {
        puVar3[2] = 0;
        puVar3[3] = 0;
        *puVar3 = &PTR__ScriptHandlerMgr_0169b300;
        puVar3[1] = puVar3 + 2;
      }
      cocos2d::ScriptHandlerMgr::_scriptHandlerMgr = puVar3;
      std::__ndk1::
      __tree<std::__ndk1::__value_type<void*,std::__ndk1::vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>>,std::__ndk1::__map_value_compare<void*,std::__ndk1::__value_type<void*,std::__ndk1::vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>>,std::__ndk1::less<void*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<void*,std::__ndk1::vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>>>>
      ::destroy((__tree<std::__ndk1::__value_type<void*,std::__ndk1::vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>>,std::__ndk1::__map_value_compare<void*,std::__ndk1::__value_type<void*,std::__ndk1::vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>>,std::__ndk1::less<void*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<void*,std::__ndk1::vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>>>>
                 *)(puVar3 + 1),(__tree_node *)puVar3[2]);
      puVar3[1] = puVar3 + 2;
      puVar3[2] = 0;
      puVar3[3] = 0;
    }
    tolua_pushusertype(param_1,cocos2d::ScriptHandlerMgr::_scriptHandlerMgr,"ScriptHandlerMgr");
    uVar4 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

