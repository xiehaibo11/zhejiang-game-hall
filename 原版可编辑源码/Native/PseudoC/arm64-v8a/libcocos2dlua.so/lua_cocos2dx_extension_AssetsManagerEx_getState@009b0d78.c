
/* lua_cocos2dx_extension_AssetsManagerEx_getState(lua_State*) */

bool lua_cocos2dx_extension_AssetsManagerEx_getState(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  AssetsManagerEx *this;
  
  this = (AssetsManagerEx *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* catch() { ... } // from try @ 009b0cc4 with catch @ 009b0dcc */
    iVar2 = cocos2d::extension::AssetsManagerEx::getState(this);
    tolua_pushnumber((double)iVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.AssetsManagerEx:getState",iVar1,0);
                    /* catch() { ... } // from try @ 009b0d24 with catch @ 009b0dc8 */
  }
                    /* try { // try from 009b0de8 to 00ab0e8f has its CatchHandler @ 009b0de8
                       catch() { ... } // from try @ 009b0de8 with catch @ 009b0de8
                       catch() { ... } // from try @ 009b0ea0 with catch @ 009b0de8
                       catch() { ... } // from try @ 009b0f00 with catch @ 009b0de8 */
  return iVar1 == 0;
}

