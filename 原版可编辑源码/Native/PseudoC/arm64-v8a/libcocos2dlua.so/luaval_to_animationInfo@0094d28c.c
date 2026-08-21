
/* luaval_to_animationInfo(lua_State*, int, cocostudio::timeline::AnimationInfo*, char const*) */

void luaval_to_animationInfo(lua_State *param_1,int param_2,AnimationInfo *param_3,char *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  char *__s;
  size_t sVar4;
  double dVar5;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = 0;
  if (((param_1 != (lua_State *)0x0) && (param_3 != (AnimationInfo *)0x0)) &&
     (uVar3 = tolua_istable(param_1,param_2,0,auStack_58), (int)uVar3 != 0)) {
    lua_pushstring(param_1,"name");
    lua_gettable(param_1,param_2);
    iVar2 = lua_isstring(param_1,0xffffffff);
    if (iVar2 == 0) {
      __s = "";
    }
    else {
      __s = (char *)lua_tolstring(param_1,0xffffffff,0);
    }
    sVar4 = strlen(__s);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_3
           ,__s,sVar4);
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"startIndex");
    lua_gettable(param_1,param_2);
    iVar2 = lua_isnumber(param_1,0xffffffff);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      dVar5 = (double)lua_tonumber(param_1,0xffffffff);
      iVar2 = (int)dVar5;
    }
    *(int *)(param_3 + 0x18) = iVar2;
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"endIndex");
    lua_gettable(param_1,param_2);
    iVar2 = lua_isnumber(param_1,0xffffffff);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      dVar5 = (double)lua_tonumber(param_1,0xffffffff);
      iVar2 = (int)dVar5;
    }
    *(int *)(param_3 + 0x1c) = iVar2;
    lua_settop(param_1,0xfffffffe);
    uVar3 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

