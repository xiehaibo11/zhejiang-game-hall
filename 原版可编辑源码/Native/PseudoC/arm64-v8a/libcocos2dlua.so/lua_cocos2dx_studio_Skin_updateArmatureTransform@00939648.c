
/* lua_cocos2dx_studio_Skin_updateArmatureTransform(lua_State*) */

bool lua_cocos2dx_studio_Skin_updateArmatureTransform(lua_State *param_1)

{
  int iVar1;
  
  tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocostudio::Skin::updateArmatureTransform();
    lua_settop(param_1,1);
  }
  else {
                    /* try { // try from 00939684 to 00a3968b has its CatchHandler @ 00939c98 */
                    /* try { // try from 0093968c to 00a396cf has its CatchHandler @ 00939278 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.Skin:updateArmatureTransform",iVar1,0);
  }
  return iVar1 == 0;
}

