
void FUN_008b56b4(lua_State *param_1)

{
  char *pcVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  void *pvVar7;
  ScriptHandlerMgr *pSVar8;
  undefined8 uVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar9 = 0;
  if (param_1 != (lua_State *)0x0) {
    iVar4 = lua_gettop();
    if (iVar4 + -1 == 2) {
      pcVar6 = (char *)tolua_tostring(param_1,2,0);
      pcVar1 = "";
      if (pcVar6 != (char *)0x0) {
        pcVar1 = pcVar6;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_50,pcVar1);
      uVar5 = toluafix_ref_function(param_1,3,0);
      pvVar7 = (void *)cocos2d::LuaEventListenerCustom::create((basic_string *)local_50);
      pSVar8 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
      cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar8,pvVar7,uVar5,0x25);
      piVar2 = (int *)((long)pvVar7 + 0x10);
      if (pvVar7 == (void *)0x0) {
        iVar4 = -1;
        piVar2 = (int *)0x0;
      }
      else {
        iVar4 = *(int *)((long)pvVar7 + 0xc);
      }
      toluafix_pushusertype_ccobject(param_1,iVar4,piVar2,pvVar7,"cc.EventListenerCustom");
      if (((byte)local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      uVar9 = 1;
    }
    else {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n",
                 "cc.EventListenerCustom:create",iVar4 + -1,2);
      uVar9 = 0;
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}

