
undefined4 FUN_00c30c14(undefined8 param_1,undefined8 param_2,char *param_3,int param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  lua_pushfstring(param_1,"LOADLIB: %s",param_2);
  lua_gettable(param_1,0xffffd8f0);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 0) {
    lua_settop(param_1,0xfffffffe);
    plVar2 = (long *)lua_newuserdata(param_1,8);
    *plVar2 = 0;
    lua_getfield(param_1,0xffffd8f0,"_LOADLIB");
    lua_setmetatable(param_1,0xfffffffe);
    lua_pushfstring(param_1,"LOADLIB: %s",param_2);
    lua_pushvalue(param_1,0xfffffffe);
    lua_settable(param_1,0xffffd8f0);
  }
  else {
    plVar2 = (long *)lua_touserdata(param_1,0xffffffff);
  }
  if (*plVar2 == 0) {
    uVar5 = 0x102;
    if (*param_3 != '*') {
      uVar5 = 2;
    }
    lVar3 = dlopen(param_2,uVar5);
    if (lVar3 == 0) {
      uVar4 = dlerror();
      lua_pushstring(param_1,uVar4);
      *plVar2 = 0;
      return 1;
    }
    *plVar2 = lVar3;
  }
  if (*param_3 == '*') {
    lua_pushboolean(param_1,1);
  }
  else {
    if (param_4 == 0) {
      uVar4 = FUN_00c309e4(param_1,param_3,"luaopen_%s");
      lVar3 = dlsym(*plVar2,uVar4);
      if (lVar3 == 0) {
        uVar4 = dlerror(0,0);
        lua_pushstring(param_1,uVar4);
        lVar3 = *plVar2;
        uVar4 = FUN_00c309e4(param_1,param_3,"luaJIT_BC_%s");
        lVar3 = dlsym(lVar3,uVar4);
        lua_settop(param_1,0xfffffffe);
        if (lVar3 == 0) {
          return 2;
        }
        iVar1 = luaL_loadbuffer(param_1,lVar3,0x7fffff00,param_3);
        if (iVar1 == 0) {
          return 0;
        }
        return 3;
      }
    }
    else {
      lVar3 = dlsym(*plVar2,param_3);
      if (lVar3 == 0) {
        uVar4 = dlerror(0,0);
        lua_pushstring(param_1,uVar4);
        return 2;
      }
    }
    lua_pushcclosure(param_1,lVar3,0);
  }
  return 0;
}

