
/* offmeshlinkdata_to_luaval(lua_State*, cocos2d::OffMeshLinkData const&) */

void offmeshlinkdata_to_luaval(lua_State *param_1,OffMeshLinkData *param_2)

{
  if (param_1 != (lua_State *)0x0) {
    lua_createtable(param_1,0,0);
    lua_pushstring(param_1,"startPosition");
    vec3_to_luaval(param_1,(Vec3 *)param_2);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"endPosition");
    vec3_to_luaval(param_1,(Vec3 *)(param_2 + 0xc));
    lua_rawset(param_1,0xfffffffd);
    return;
  }
  return;
}

