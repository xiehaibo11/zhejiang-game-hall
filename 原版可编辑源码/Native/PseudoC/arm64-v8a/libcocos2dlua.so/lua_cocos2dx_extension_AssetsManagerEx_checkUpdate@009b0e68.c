
/* lua_cocos2dx_extension_AssetsManagerEx_checkUpdate(lua_State*) */

bool lua_cocos2dx_extension_AssetsManagerEx_checkUpdate(lua_State *param_1)

{
  int iVar1;
  AssetsManagerEx *this;
  
  this = (AssetsManagerEx *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 009b0e90 to 00ab0e9f has its CatchHandler @ 009b0f98 */
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocos2d::extension::AssetsManagerEx::checkUpdate(this);
    lua_settop(param_1,1);
  }
  else {
                    /* try { // try from 009b0ea0 to 00ab0eef has its CatchHandler @ 009b0de8 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.AssetsManagerEx:checkUpdate",iVar1,0);
  }
  return iVar1 == 0;
}

