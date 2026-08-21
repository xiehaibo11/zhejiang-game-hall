
/* lua_cocos2dx_extension_AssetsManager_getStoragePath(lua_State*) */

bool lua_cocos2dx_extension_AssetsManager_getStoragePath(lua_State *param_1)

{
  int iVar1;
  AssetsManager *this;
  undefined8 uVar2;
  
                    /* try { // try from 009adea4 to 00aadf23 has its CatchHandler @ 009adea4
                       catch() { ... } // from try @ 009adea4 with catch @ 009adea4
                       catch() { ... } // from try @ 009adf2c with catch @ 009adea4
                       catch() { ... } // from try @ 009adf74 with catch @ 009adea4
                       catch() { ... } // from try @ 009adfa0 with catch @ 009adea4
                       catch() { ... } // from try @ 009adfd0 with catch @ 009adea4
                       catch() { ... } // from try @ 009ae000 with catch @ 009adea4
                       catch() { ... } // from try @ 009ae030 with catch @ 009adea4
                       catch() { ... } // from try @ 009ae060 with catch @ 009adea4
                       catch() { ... } // from try @ 009ae0c8 with catch @ 009adea4
                       catch() { ... } // from try @ 009ae0f4 with catch @ 009adea4
                       catch() { ... } // from try @ 009ae2a4 with catch @ 009adea4
                       catch() { ... } // from try @ 009ae420 with catch @ 009adea4 */
  this = (AssetsManager *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocos2d::extension::AssetsManager::getStoragePath(this);
    tolua_pushstring(param_1,uVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.AssetsManager:getStoragePath",iVar1,0);
  }
  return iVar1 == 0;
}

