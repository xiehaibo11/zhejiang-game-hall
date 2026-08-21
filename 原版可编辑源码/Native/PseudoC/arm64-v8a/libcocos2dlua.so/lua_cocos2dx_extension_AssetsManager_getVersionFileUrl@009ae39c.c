
/* lua_cocos2dx_extension_AssetsManager_getVersionFileUrl(lua_State*) */

bool lua_cocos2dx_extension_AssetsManager_getVersionFileUrl(lua_State *param_1)

{
  int iVar1;
  AssetsManager *this;
  undefined8 uVar2;
  
  this = (AssetsManager *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocos2d::extension::AssetsManager::getVersionFileUrl(this);
    tolua_pushstring(param_1,uVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.AssetsManager:getVersionFileUrl",iVar1,0);
  }
                    /* try { // try from 009ae410 to 00aae41f has its CatchHandler @ 009ae464 */
  return iVar1 == 0;
}

