
/* lua_cocos2dx_extension_AssetsManager_update(lua_State*) */

bool lua_cocos2dx_extension_AssetsManager_update(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  
                    /* try { // try from 009adf24 to 00aadf2b has its CatchHandler @ 009ae474 */
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 009adf2c to 00aadf63 has its CatchHandler @ 009adea4 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 009adf64 to 00aadf73 has its CatchHandler @ 009ae4a4 */
    (**(code **)(*plVar2 + 0x538))(plVar2);
                    /* try { // try from 009adf74 to 00aadf93 has its CatchHandler @ 009adea4 */
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.AssetsManager:update",iVar1,0);
  }
  return iVar1 == 0;
}

