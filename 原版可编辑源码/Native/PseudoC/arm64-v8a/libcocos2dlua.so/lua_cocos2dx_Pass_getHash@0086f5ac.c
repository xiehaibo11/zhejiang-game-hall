
/* lua_cocos2dx_Pass_getHash(lua_State*) */

bool lua_cocos2dx_Pass_getHash(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  Pass *this;
  
  this = (Pass *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocos2d::Pass::getHash(this);
    tolua_pushnumber((double)uVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","cc.Pass:getHash"
               ,iVar1,0);
  }
  return iVar1 == 0;
}

