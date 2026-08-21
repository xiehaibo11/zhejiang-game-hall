
/* lua_cocos2dx_extension_AssetsManager_getPackageUrl(lua_State*) */

bool lua_cocos2dx_extension_AssetsManager_getPackageUrl(lua_State *param_1)

{
  int iVar1;
  AssetsManager *this;
  undefined8 uVar2;
  
  this = (AssetsManager *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocos2d::extension::AssetsManager::getPackageUrl(this);
    tolua_pushstring(param_1,uVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.AssetsManager:getPackageUrl",iVar1,0);
  }
  return iVar1 == 0;
}

