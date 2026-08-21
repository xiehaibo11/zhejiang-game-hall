
undefined8 FUN_009cbbc8(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = lua_type(param_1,1);
  if (iVar1 == 5) {
    lua_getmetatable(param_1,1);
    lua_pushstring(param_1,&DAT_012a5ccb);
    lua_rawget(param_1,0xfffffffe);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_pushvalue(param_1,2);
      lua_rawget(param_1,0xfffffffe);
      iVar1 = lua_iscfunction(param_1,0xffffffff);
      if (iVar1 != 0) {
LAB_009cbd70:
        lua_pushvalue(param_1,1);
        lua_pushvalue(param_1,3);
        uVar2 = 2;
LAB_009cbed8:
        lua_call(param_1,uVar2,0);
        return 0;
      }
    }
    lua_settop(param_1,3);
    lua_pushvalue(param_1,1);
    iVar1 = lua_getmetatable(param_1,0xffffffff);
    while( true ) {
      if ((iVar1 < 1) || (iVar1 = lua_type(param_1,0xffffffff), iVar1 != 5)) goto LAB_009cbf94;
      lua_remove(param_1,0xfffffffe);
      lua_pushstring(param_1,".backup");
      lua_rawget(param_1,0xfffffffe);
      iVar1 = lua_type(param_1,0xffffffff);
      if (iVar1 != 0) {
        lua_pushvalue(param_1,2);
        lua_rawget(param_1,0xfffffffe);
        iVar1 = lua_type(param_1,0xffffffff);
        if (iVar1 != 0) goto LAB_009cbf94;
        lua_settop(param_1,0xfffffffe);
      }
      lua_settop(param_1,0xfffffffe);
      lua_pushvalue(param_1,2);
      lua_rawget(param_1,0xfffffffe);
      iVar1 = lua_type(param_1,0xffffffff);
      if (iVar1 != 0) break;
      lua_settop(param_1);
      iVar1 = lua_getmetatable(param_1,0xffffffff);
    }
    lua_pushvalue(param_1,0xfffffffe);
    lua_pushstring(param_1,".backup");
    lua_rawget(param_1,0xfffffffe);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 0) {
      lua_settop(param_1,0xfffffffe);
      lua_pushstring(param_1,".backup");
      lua_createtable(param_1,0,0);
      lua_rawset(param_1,0xfffffffd);
      lua_pushstring(param_1,".backup");
      lua_rawget(param_1,0xfffffffe);
    }
    lua_pushvalue(param_1,2);
    lua_pushvalue(param_1,0xfffffffc);
    lua_rawset(param_1,0xfffffffd);
LAB_009cbf94:
    lua_settop(param_1,3);
    lua_getmetatable(param_1,1);
    lua_replace(param_1,1);
    lua_rawset(param_1,1);
  }
  else if (iVar1 == 7) {
    lua_getmetatable(param_1,1);
    iVar1 = lua_type(param_1,0xffffffff);
    while (iVar1 == 5) {
      iVar1 = lua_isnumber(param_1,2);
      if (iVar1 == 0) {
        lua_pushstring(param_1,&DAT_012a5ccb);
        lua_rawget(param_1,0xfffffffe);
        iVar1 = lua_type(param_1,0xffffffff);
        if (iVar1 == 5) {
          lua_pushvalue(param_1,2);
          lua_rawget(param_1,0xfffffffe);
          iVar1 = lua_iscfunction(param_1,0xffffffff);
          if (iVar1 != 0) goto LAB_009cbd70;
          lua_settop(param_1,0xfffffffe);
        }
        lua_settop(param_1,0xfffffffe);
        iVar1 = lua_getmetatable(param_1,0xffffffff);
        if (iVar1 == 0) {
          lua_pushnil(param_1);
        }
        lua_remove(param_1,0xfffffffe);
      }
      else {
        lua_pushstring(param_1,".seti");
        lua_rawget(param_1,0xfffffffe);
        iVar1 = lua_type(param_1,0xffffffff);
        if (iVar1 == 6) {
          lua_pushvalue(param_1,1);
          lua_pushvalue(param_1,2);
          lua_pushvalue(param_1,3);
          uVar2 = 3;
          goto LAB_009cbed8;
        }
      }
      iVar1 = lua_type(param_1,0xffffffff);
    }
    lua_settop(param_1,3);
    FUN_009cc1bc(param_1);
  }
  return 0;
}

