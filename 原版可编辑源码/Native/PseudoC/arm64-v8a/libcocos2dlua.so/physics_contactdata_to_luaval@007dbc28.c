
/* physics_contactdata_to_luaval(lua_State*, cocos2d::PhysicsContactData const*) */

void physics_contactdata_to_luaval(lua_State *param_1,PhysicsContactData *param_2)

{
  if ((param_1 != (lua_State *)0x0) && (param_2 != (PhysicsContactData *)0x0)) {
    lua_createtable(param_1,0,0);
    lua_pushstring(param_1,"points");
    vec2_array_to_luaval(param_1,param_2,*(int *)(param_2 + 0x20));
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"normal");
    vec2_to_luaval(param_1,param_2 + 0x24);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"POINT_MAX");
    lua_pushnumber(0x4010000000000000,param_1);
    lua_rawset(param_1,0xfffffffd);
    return;
  }
  return;
}

