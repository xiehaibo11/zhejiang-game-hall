
/* CollisionPoint_to_luaval(lua_State*, cocos2d::Physics3DCollisionInfo::CollisionPoint const&) */

void CollisionPoint_to_luaval(lua_State *param_1,CollisionPoint *param_2)

{
  if (param_1 != (lua_State *)0x0) {
    lua_createtable(param_1,0,0);
    lua_pushstring(param_1,"localPositionOnA");
    vec3_to_luaval(param_1,(Vec3 *)param_2);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"worldPositionOnA");
    vec3_to_luaval(param_1,(Vec3 *)(param_2 + 0xc));
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"localPositionOnB");
    vec3_to_luaval(param_1,(Vec3 *)(param_2 + 0x18));
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"worldPositionOnB");
                    /* try { // try from 009b76dc to 00ab76e3 has its CatchHandler @ 009b76ec */
    vec3_to_luaval(param_1,(Vec3 *)(param_2 + 0x24));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009b76dc with catch @ 009b76ec
                        */
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"worldNormalOnB");
    vec3_to_luaval(param_1,(Vec3 *)(param_2 + 0x30));
    lua_rawset(param_1,0xfffffffd);
    return;
  }
                    /* try { // try from 009b7724 to 00ab772b has its CatchHandler @ 009b773c */
  return;
}

