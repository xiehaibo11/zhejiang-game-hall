
/* lua_cocos2dx_Texture2D_setAlphaTexture(lua_State*) */

undefined4 lua_cocos2dx_Texture2D_setAlphaTexture(lua_State *param_1)

{
  int iVar1;
  Texture2D *this;
  ulong uVar2;
  Texture2D *pTVar3;
  
  this = (Texture2D *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"cc.Texture2D",0), (uVar2 & 1) != 0)) {
      pTVar3 = (Texture2D *)tolua_tousertype(param_1,2,0);
      cocos2d::Texture2D::setAlphaTexture(this,pTVar3);
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Texture2D_setAlphaTexture\'",0
               );
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Texture2D:setAlphaTexture",iVar1 + -1,1);
  }
  return 0;
}

