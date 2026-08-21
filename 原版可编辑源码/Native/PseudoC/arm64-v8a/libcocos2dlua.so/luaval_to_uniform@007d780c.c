
/* luaval_to_uniform(lua_State*, int, cocos2d::Uniform*, char const*) */

void luaval_to_uniform(lua_State *param_1,int param_2,Uniform *param_3,char *param_4)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char *__s;
  size_t sVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar4 = 0;
  if (((param_1 != (lua_State *)0x0) && (param_3 != (Uniform *)0x0)) &&
     (uVar4 = tolua_istable(param_1,param_2,0,auStack_48), (int)uVar4 != 0)) {
    lua_pushstring(param_1,"location");
    lua_gettable(param_1,param_2);
    iVar2 = lua_isnumber(param_1,0xffffffff);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = lua_tointeger(param_1,0xffffffff);
    }
    *(undefined4 *)param_3 = uVar3;
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"size");
    lua_gettable(param_1,param_2);
    iVar2 = lua_isnumber(param_1,0xffffffff);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = lua_tointeger(param_1,0xffffffff);
    }
    *(undefined4 *)(param_3 + 4) = uVar3;
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"type");
    lua_gettable(param_1,param_2);
    iVar2 = lua_isnumber(param_1,0xffffffff);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = lua_tointeger(param_1,0xffffffff);
    }
    *(undefined4 *)(param_3 + 8) = uVar3;
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"name");
    lua_gettable(param_1,param_2);
    iVar2 = lua_isstring(param_1,0xffffffff);
    if (iVar2 == 0) {
      __s = "";
    }
    else {
      __s = (char *)lua_tolstring(param_1,0xffffffff,0);
    }
    sVar5 = strlen(__s);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_3 + 0x10),__s,sVar5);
    lua_settop(param_1,0xfffffffe);
    uVar4 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

