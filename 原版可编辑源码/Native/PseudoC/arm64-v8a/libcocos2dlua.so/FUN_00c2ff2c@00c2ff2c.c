
undefined8 FUN_00c2ff2c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  tm local_38;
  
  iVar1 = lua_type(param_1,1);
  if (iVar1 < 1) {
    lVar2 = time((time_t *)0x0);
  }
  else {
    luaL_checktype(param_1,1,5);
    lua_settop(param_1,1);
    local_38.tm_sec = FUN_00c2fc28(param_1,&DAT_01411f10,0);
    local_38.tm_min = FUN_00c2fc28(param_1,&DAT_01411f18,0);
    local_38.tm_hour = FUN_00c2fc28(param_1,&DAT_01411f20,0xc);
    local_38.tm_mday = FUN_00c2fc28(param_1,&DAT_01411f28,0xffffffff);
    local_38.tm_mon = FUN_00c2fc28(param_1,"month",0xffffffff);
    local_38.tm_mon = local_38.tm_mon + -1;
    local_38.tm_year = FUN_00c2fc28(param_1,&DAT_01411f38,0xffffffff);
    local_38.tm_year = local_38.tm_year + -0x76c;
    lua_getfield(param_1,0xffffffff,"isdst");
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 0) {
      local_38.tm_isdst = -1;
    }
    else {
      local_38.tm_isdst = lua_toboolean(param_1,0xffffffff);
    }
    lua_settop(param_1,0xfffffffe);
    lVar2 = mktime(&local_38);
  }
  if (lVar2 != -1) {
    lua_pushnumber((double)lVar2,param_1);
    return 1;
  }
  lua_pushnil(param_1);
  return 1;
}

