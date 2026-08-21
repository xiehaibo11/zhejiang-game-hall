
undefined8 FUN_009cb838(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  iVar1 = lua_type(param_1,1);
  if (iVar1 == 5) {
    lua_pushvalue(param_1,1);
    iVar1 = lua_getmetatable(param_1,0xffffffff);
    while (iVar1 != 0) {
      lua_remove(param_1,0xfffffffe);
      lua_pushvalue(param_1,2);
      lua_rawget(param_1,0xfffffffe);
      iVar1 = lua_type(param_1,0xffffffff);
      if (iVar1 != 0) {
        return 1;
      }
      lua_settop(param_1,0xfffffffe);
      lua_pushstring(param_1,&DAT_012a5cc6);
      lua_rawget(param_1,0xfffffffe);
      iVar1 = lua_type(param_1,0xffffffff);
      if (iVar1 == 5) {
        lua_pushvalue(param_1,2);
        lua_rawget(param_1,0xfffffffe);
        iVar1 = lua_iscfunction(param_1,0xffffffff);
        if (iVar1 != 0) {
          lua_call(param_1,0,1);
          return 1;
        }
        iVar1 = lua_type(param_1,0xffffffff);
        if (iVar1 == 5) {
          return 1;
        }
        lua_settop(param_1,0xfffffffd);
      }
      iVar1 = lua_getmetatable(param_1,0xffffffff);
    }
  }
  else if (iVar1 == 7) {
    lua_getfenv(param_1,1);
    iVar1 = lua_rawequal(param_1,0xffffffff,0xffffd8f0);
    if (iVar1 == 0) {
      lua_pushvalue(param_1,2);
      lua_gettable(param_1,0xfffffffe);
      iVar1 = lua_type(param_1,0xffffffff);
      if (iVar1 != 0) {
        return 1;
      }
    }
    lua_settop(param_1,2);
    lua_pushvalue(param_1,1);
    iVar1 = lua_getmetatable(param_1,0xffffffff);
    while (iVar1 != 0) {
      lua_remove(param_1,0xfffffffe);
      iVar1 = lua_isnumber(param_1,2);
      if (iVar1 == 0) {
        lua_pushvalue(param_1,2);
        lua_rawget(param_1,0xfffffffe);
        iVar1 = lua_type(param_1,0xffffffff);
        if (iVar1 != 0) {
          return 1;
        }
        lua_settop(param_1,0xfffffffe);
        lua_pushstring(param_1,&DAT_012a5cc6);
        lua_rawget(param_1,0xfffffffe);
        iVar1 = lua_type(param_1,0xffffffff);
        if (iVar1 == 5) {
          lua_pushvalue(param_1,2);
          lua_rawget(param_1,0xfffffffe);
          iVar1 = lua_iscfunction(param_1,0xffffffff);
          if (iVar1 != 0) goto LAB_009cbb88;
          iVar1 = lua_type(param_1,0xffffffff);
          if (iVar1 == 5) {
            puVar2 = (undefined8 *)lua_touserdata(param_1,1);
            uVar3 = *puVar2;
            lua_createtable(param_1,0,0);
            lua_pushstring(param_1,".self");
            lua_pushlightuserdata(param_1,uVar3);
            lua_rawset(param_1,0xfffffffd);
            lua_insert(param_1,0xfffffffe);
            lua_setmetatable(param_1,0xfffffffe);
            lua_pushvalue(param_1,0xffffffff);
            lua_pushvalue(param_1,2);
            lua_insert(param_1,0xfffffffe);
            FUN_009cc1bc(param_1);
            return 1;
          }
        }
      }
      else {
        lua_pushstring(param_1,".geti");
        lua_rawget(param_1,0xfffffffe);
        iVar1 = lua_type(param_1,0xffffffff);
        if (iVar1 == 6) {
LAB_009cbb88:
          lua_pushvalue(param_1,1);
          lua_pushvalue(param_1,2);
          lua_call(param_1,2,1);
          return 1;
        }
      }
      lua_settop(param_1,3);
      iVar1 = lua_getmetatable(param_1,0xffffffff);
    }
  }
  lua_pushnil(param_1);
  return 1;
}

