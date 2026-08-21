
undefined8 FUN_00c307fc(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *__s;
  long lVar4;
  char *pcVar5;
  
  __s = (char *)luaL_checklstring(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  lua_getfield(param_1,0xffffd8f0,"_LOADED");
  lua_getfield(param_1,iVar2 + 1,__s);
  iVar3 = lua_type(param_1,0xffffffff);
  if (iVar3 != 5) {
    lua_settop(param_1,0xfffffffe);
    lVar4 = luaL_findtable(param_1,0xffffd8ee,__s,1);
    if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00bfb308(param_1,0x7a1,__s);
    }
    lua_pushvalue(param_1,0xffffffff);
    lua_setfield(param_1,iVar2 + 1,__s);
  }
  lua_getfield(param_1,0xffffffff,"_NAME");
  iVar3 = lua_type(param_1,0xffffffff);
  if (iVar3 == 0) {
    lua_settop(param_1,0xfffffffe);
    lua_pushvalue(param_1,0xffffffff);
    lua_setfield(param_1,0xfffffffe,&DAT_01412050);
    lua_pushstring(param_1,__s);
    lua_setfield(param_1,0xfffffffe,"_NAME");
    pcVar5 = strrchr(__s,0x2e);
    if (pcVar5 == (char *)0x0) {
      pcVar5 = (char *)0x0;
    }
    else {
      pcVar5 = pcVar5 + (1 - (long)__s);
    }
    lua_pushlstring(param_1,__s,pcVar5);
    lua_setfield(param_1,0xfffffffe,"_PACKAGE");
  }
  else {
    lua_settop(param_1,0xfffffffe);
  }
  lua_pushvalue(param_1,0xffffffff);
  FUN_00c30738(param_1);
  iVar3 = 2;
  if (1 < iVar2) {
    do {
      iVar1 = iVar3 + 1;
      lua_pushvalue(param_1,iVar3);
      lua_pushvalue(param_1,0xfffffffe);
      lua_call(param_1,1,0);
      iVar3 = iVar1;
    } while (iVar1 <= iVar2);
  }
  return 0;
}

