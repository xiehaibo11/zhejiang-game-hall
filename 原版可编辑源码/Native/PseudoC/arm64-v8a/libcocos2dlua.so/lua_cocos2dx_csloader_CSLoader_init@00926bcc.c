
/* lua_cocos2dx_csloader_CSLoader_init(lua_State*) */

bool lua_cocos2dx_csloader_CSLoader_init(lua_State *param_1)

{
  int iVar1;
  CSLoader *this;
  
  this = (CSLoader *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocos2d::CSLoader::init(this);
                    /* catch() { ... } // from try @ 00926b30 with catch @ 00926c30 */
    lua_settop(param_1,1);
  }
  else {
                    /* catch() { ... } // from try @ 00926b64 with catch @ 00926bfc */
                    /* catch() { ... } // from try @ 00926b7c with catch @ 00926c00 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CSLoader:init",iVar1,0);
  }
  return iVar1 == 0;
}

