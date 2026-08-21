
/* lua_cocos2dx_Label_getStringLength(lua_State*) */

bool lua_cocos2dx_Label_getStringLength(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  Label *this;
  
  this = (Label *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = cocos2d::Label::getStringLength(this);
    tolua_pushnumber((double)iVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Label:getStringLength",iVar1,0);
  }
  return iVar1 == 0;
}

