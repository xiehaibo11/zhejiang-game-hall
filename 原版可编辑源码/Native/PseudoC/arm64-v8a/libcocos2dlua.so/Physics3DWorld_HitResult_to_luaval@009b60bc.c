
/* Physics3DWorld_HitResult_to_luaval(lua_State*, cocos2d::Physics3DWorld::HitResult const&) */

void Physics3DWorld_HitResult_to_luaval(lua_State *param_1,HitResult *param_2)

{
  void *pvVar1;
  
                    /* try { // try from 009b60bc to 00ab60cb has its CatchHandler @ 009b61a0 */
  if (param_1 != (lua_State *)0x0) {
                    /* try { // try from 009b60d0 to 00ab60df has its CatchHandler @ 009b619c */
    lua_createtable(param_1,0,0);
                    /* try { // try from 009b60e8 to 00ab60f3 has its CatchHandler @ 009b6198 */
    lua_pushstring(param_1,"hitPosition");
    vec3_to_luaval(param_1,(Vec3 *)param_2);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"hitNormal");
    vec3_to_luaval(param_1,(Vec3 *)(param_2 + 0xc));
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"hitObj");
    pvVar1 = *(void **)(param_2 + 0x18);
    if (pvVar1 == (void *)0x0) {
                    /* try { // try from 009b6168 to 00ab6177 has its CatchHandler @ 009b6194 */
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar1 + 0xc),(int *)((long)pvVar1 + 0x10),pvVar1,
                 "cc.Physics3DObject");
    }
                    /* try { // try from 009b6178 to 00ab618b has its CatchHandler @ 009b5f48 */
    lua_rawset(param_1,0xfffffffd);
    return;
  }
  return;
}

