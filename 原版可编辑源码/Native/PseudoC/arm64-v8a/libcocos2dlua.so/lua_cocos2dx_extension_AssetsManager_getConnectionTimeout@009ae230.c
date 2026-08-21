
/* lua_cocos2dx_extension_AssetsManager_getConnectionTimeout(lua_State*) */

bool lua_cocos2dx_extension_AssetsManager_getConnectionTimeout(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  AssetsManager *this;
  
  this = (AssetsManager *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocos2d::extension::AssetsManager::getConnectionTimeout(this);
                    /* try { // try from 009ae294 to 00aae2a3 has its CatchHandler @ 009ae468 */
    tolua_pushnumber((double)uVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.AssetsManager:getConnectionTimeout",iVar1,0);
  }
                    /* try { // try from 009ae2a4 to 00aae40f has its CatchHandler @ 009adea4 */
  return iVar1 == 0;
}

