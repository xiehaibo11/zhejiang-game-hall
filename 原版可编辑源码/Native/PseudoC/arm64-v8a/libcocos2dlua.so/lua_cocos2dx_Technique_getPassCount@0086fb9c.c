
/* lua_cocos2dx_Technique_getPassCount(lua_State*) */

bool lua_cocos2dx_Technique_getPassCount(lua_State *param_1)

{
  int iVar1;
  Technique *this;
  long lVar2;
  
  this = (Technique *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    lVar2 = cocos2d::Technique::getPassCount(this);
    tolua_pushnumber((double)lVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Technique:getPassCount",iVar1,0);
  }
  return iVar1 == 0;
}

