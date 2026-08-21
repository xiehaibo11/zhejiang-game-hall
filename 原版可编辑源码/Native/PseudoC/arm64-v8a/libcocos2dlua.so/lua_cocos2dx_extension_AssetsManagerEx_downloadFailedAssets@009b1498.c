
/* lua_cocos2dx_extension_AssetsManagerEx_downloadFailedAssets(lua_State*) */

bool lua_cocos2dx_extension_AssetsManagerEx_downloadFailedAssets(lua_State *param_1)

{
  int iVar1;
  AssetsManagerEx *this;
  
                    /* try { // try from 009b14a4 to 00ab14a7 has its CatchHandler @ 009b15ec */
                    /* try { // try from 009b14ac to 00ab14b7 has its CatchHandler @ 009b15e8 */
  this = (AssetsManagerEx *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 009b14c0 to 00ab14cf has its CatchHandler @ 009b15d4 */
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocos2d::extension::AssetsManagerEx::downloadFailedAssets(this);
                    /* try { // try from 009b14f8 to 00ab14ff has its CatchHandler @ 009b15d0 */
                    /* try { // try from 009b1500 to 00ab1507 has its CatchHandler @ 009b15b0 */
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.AssetsManagerEx:downloadFailedAssets",iVar1,0);
  }
  return iVar1 == 0;
}

