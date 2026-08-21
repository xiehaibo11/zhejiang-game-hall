
/* lua_cocos2dx_Director_getClearColor(lua_State*) */

bool lua_cocos2dx_Director_getClearColor(lua_State *param_1)

{
  int iVar1;
  Director *this;
  Color4F *pCVar2;
  
  this = (Director *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pCVar2 = (Color4F *)cocos2d::Director::getClearColor(this);
    color4f_to_luaval(param_1,pCVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Director:getClearColor",iVar1,0);
  }
  return iVar1 == 0;
}

