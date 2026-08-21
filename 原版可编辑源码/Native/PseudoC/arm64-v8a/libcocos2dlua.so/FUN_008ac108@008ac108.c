
void FUN_008ac108(lua_State *param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  char *pcVar6;
  undefined8 uVar7;
  code *pcVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [16];
  void *local_88;
  undefined **local_80;
  lua_State *plStack_78;
  ulong local_70;
  undefined ***local_60;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar5 = (long *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 != 2) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "enumerateChildren",iVar3 + -1,2);
    uVar7 = 0;
    goto LAB_008ac244;
  }
  pcVar6 = (char *)tolua_tostring(param_1,2,0);
  pcVar1 = "";
  if (pcVar6 != (char *)0x0) {
    pcVar1 = pcVar6;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_98,pcVar1);
  uVar4 = toluafix_ref_function(param_1,3,0);
  local_70 = (ulong)uVar4;
  local_80 = &PTR_FUN_016990f0;
  plStack_78 = param_1;
  local_60 = &local_80;
  (**(code **)(*plVar5 + 0x238))(plVar5,local_98,&local_80);
  if (&local_80 == local_60) {
    pcVar8 = (code *)(*local_60)[4];
LAB_008ac20c:
    (*pcVar8)();
  }
  else if (local_60 != (undefined ***)0x0) {
    pcVar8 = (code *)(*local_60)[5];
    goto LAB_008ac20c;
  }
  plVar5 = (long *)cocos2d::LuaEngine::getInstance();
  (**(code **)(*plVar5 + 0x50))(plVar5,uVar4);
  lua_settop(param_1,1);
  if (((byte)local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  uVar7 = 1;
LAB_008ac244:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

