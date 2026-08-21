
/* lua_cocos2dx_extension_AssetsManager_deleteVersion(lua_State*) */

bool lua_cocos2dx_extension_AssetsManager_deleteVersion(lua_State *param_1)

{
  int iVar1;
  AssetsManager *this;
  
                    /* try { // try from 009ae420 to 00aae4c7 has its CatchHandler @ 009adea4 */
  this = (AssetsManager *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* catch() { ... } // from try @ 009ae294 with catch @ 009ae468 */
                    /* catch() { ... } // from try @ 009ae0e8 with catch @ 009ae46c */
    cocos2d::extension::AssetsManager::deleteVersion(this);
                    /* catch() { ... } // from try @ 009ae0bc with catch @ 009ae470 */
                    /* catch() { ... } // from try @ 009adf24 with catch @ 009ae474 */
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.AssetsManager:deleteVersion",iVar1,0);
                    /* catch() { ... } // from try @ 009ae410 with catch @ 009ae464 */
  }
  return iVar1 == 0;
}

