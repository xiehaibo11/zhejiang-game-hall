
/* lua_cocos2dx_Texture2D_getPixelsWide(lua_State*) */

bool lua_cocos2dx_Texture2D_getPixelsWide(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  Texture2D *this;
  
  this = (Texture2D *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = cocos2d::Texture2D::getPixelsWide(this);
    tolua_pushnumber((double)iVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Texture2D:getPixelsWide",iVar1,0);
  }
  return iVar1 == 0;
}

