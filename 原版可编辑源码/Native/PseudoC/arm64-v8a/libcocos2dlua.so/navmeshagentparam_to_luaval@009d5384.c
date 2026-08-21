
/* navmeshagentparam_to_luaval(lua_State*, cocos2d::NavMeshAgentParam const&) */

void navmeshagentparam_to_luaval(lua_State *param_1,NavMeshAgentParam *param_2)

{
  undefined8 uVar1;
  
  if (param_1 != (lua_State *)0x0) {
    lua_createtable(param_1,0,0);
    lua_pushstring(param_1,"radius");
    lua_pushnumber((double)*(float *)param_2,param_1);
    lua_rawset(param_1,0xfffffffd);
                    /* try { // try from 009d53dc to 00ad5447 has its CatchHandler @ 009d80c8 */
    lua_pushstring(param_1,"height");
    lua_pushnumber((double)*(float *)(param_2 + 4),param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"maxAcceleration");
    lua_pushnumber((double)*(float *)(param_2 + 8),param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"maxSpeed");
    lua_pushnumber((double)*(float *)(param_2 + 0xc),param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"collisionQueryRange");
    lua_pushnumber((double)*(float *)(param_2 + 0x10),param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"pathOptimizationRange");
    lua_pushnumber((double)*(float *)(param_2 + 0x14),param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"separationWeight");
                    /* try { // try from 009d54cc to 00ad54df has its CatchHandler @ 009d7ff4 */
    lua_pushnumber((double)*(float *)(param_2 + 0x18),param_1);
    lua_rawset(param_1,0xfffffffd);
                    /* try { // try from 009d54e4 to 00ad554f has its CatchHandler @ 009d80c4 */
    lua_pushstring(param_1,"updateFlags");
    uVar1 = NEON_ucvtf((ulong)(byte)param_2[0x1c]);
    lua_pushnumber(uVar1,param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,&DAT_012f1385);
    uVar1 = NEON_ucvtf((ulong)(byte)param_2[0x1d]);
    lua_pushnumber(uVar1,param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,0x12f139b);
    uVar1 = NEON_ucvtf((ulong)(byte)param_2[0x1e]);
                    /* try { // try from 009d5550 to 00ad5acf has its CatchHandler @ 009cee70 */
    lua_pushnumber(uVar1,param_1);
    lua_rawset(param_1,0xfffffffd);
    return;
  }
  return;
}

