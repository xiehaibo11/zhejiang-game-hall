
void FUN_009d40c8(undefined8 param_1,int *param_2,int param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  char *__cp;
  double dVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  int local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  iVar2 = lua_type(param_1,3);
  if (iVar2 != 5) {
    uVar3 = lua_typename(param_1,5);
    auxiliar_typeerror(param_1,3,uVar3);
  }
  lua_pushstring(param_1,"multiaddr");
  lua_gettable(param_1,3);
  iVar2 = lua_isstring(param_1,0xffffffff);
  if (iVar2 == 0) {
    luaL_argerror(param_1,3,"string \'multiaddr\' field expected");
  }
  __cp = (char *)lua_tolstring(param_1,0xffffffff,0);
  iVar2 = inet_pton(10,__cp,&local_50);
  if (iVar2 == 0) {
    luaL_argerror(param_1,3,"invalid \'multiaddr\' ip address");
  }
  lua_pushstring(param_1,"interface");
                    /* try { // try from 009d41b0 to 00ad421b has its CatchHandler @ 009d80f0 */
  lua_gettable(param_1,3);
  iVar2 = lua_type(param_1,0xffffffff);
  if (iVar2 != 0) {
    iVar2 = lua_isnumber(param_1,0xffffffff);
    if (iVar2 == 0) {
      luaL_argerror(param_1,0xffffffff,"number \'interface\' field expected");
    }
    else {
      dVar4 = (double)lua_tonumber(param_1,0xffffffff);
      local_40 = (int)dVar4;
    }
  }
  iVar2 = setsockopt(*param_2,0x29,param_3,&local_50,0x14);
  if (iVar2 < 0) {
    lua_pushnil(param_1);
    lua_pushstring(param_1,"setsockopt failed");
    uVar3 = 2;
  }
  else {
    lua_pushnumber(0x3ff0000000000000,param_1);
    uVar3 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

