
/* toluafix_remove_ccobject_by_refid(lua_State*, int) */

undefined4 toluafix_remove_ccobject_by_refid(lua_State *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (param_2 != 0) {
    lua_pushstring(param_1,"toluafix_refid_ptr_mapping");
    lua_rawget(param_1,0xffffd8f0);
    lVar5 = (long)param_2;
    lua_pushinteger(param_1,lVar5);
    lua_rawget(param_1,0xfffffffe);
    lVar2 = lua_touserdata(param_1,0xffffffff);
    lua_settop(param_1,0xfffffffe);
    if (lVar2 == 0) {
      lua_settop(param_1,0xfffffffe);
      return 0xfffffffe;
    }
    lua_pushinteger(param_1,lVar5);
    lua_pushnil(param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"toluafix_refid_type_mapping");
    lua_rawget(param_1,0xffffd8f0);
    lua_pushinteger(param_1,lVar5);
    lua_rawget(param_1,0xfffffffe);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 0) {
      lua_settop(param_1,0xfffffffd);
      printf("[LUA ERROR] remove CCObject with NULL type, refid: %d, ptr: %p\n",(ulong)(uint)param_2
             ,lVar2);
    }
    else {
      uVar3 = lua_tolstring(param_1,0xffffffff,0);
      lua_settop(param_1,0xfffffffe);
      lua_pushinteger(param_1,lVar5);
      lua_pushnil(param_1);
      lua_rawset(param_1,0xfffffffd);
      lua_settop(param_1,0xfffffffe);
      lua_getfield(param_1,0xffffd8f0,uVar3);
      lua_pushstring(param_1,"tolua_ubox");
      lua_rawget(param_1,0xfffffffe);
      iVar1 = lua_type(param_1,0xffffffff);
      if (iVar1 == 0) {
        lua_settop(param_1,0xfffffffe);
        lua_pushstring(param_1,"tolua_ubox");
        lua_rawget(param_1,0xffffd8f0);
      }
      tolua_remove_value_from_root(param_1,lVar2);
      lua_pushlightuserdata(param_1,lVar2);
      lua_rawget(param_1,0xfffffffe);
      iVar1 = lua_type(param_1,0xffffffff);
      if (iVar1 == 0) {
        lua_settop(param_1,0xfffffffc);
        return 0xfffffffd;
      }
      lua_pushvalue(param_1,0xffffd8f0);
      lua_setfenv(param_1,0xfffffffe);
      puVar4 = (undefined8 *)lua_touserdata(param_1,0xffffffff);
      lua_settop(param_1,0xfffffffe);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0;
        lua_pushlightuserdata(param_1,lVar2);
        lua_pushnil(param_1);
        lua_rawset(param_1,0xfffffffd);
        lua_settop(param_1,0xfffffffd);
        return 0;
      }
      printf("[LUA ERROR] remove CCObject with NULL userdata, refid: %d, ptr: %p, type: %s\n",
             (ulong)(uint)param_2,lVar2,uVar3);
      lua_settop(param_1,0xfffffffd);
    }
  }
  return 0xffffffff;
}

