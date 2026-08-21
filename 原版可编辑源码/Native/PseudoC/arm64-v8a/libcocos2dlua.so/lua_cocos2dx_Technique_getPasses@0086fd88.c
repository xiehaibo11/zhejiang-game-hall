
/* lua_cocos2dx_Technique_getPasses(lua_State*) */

bool lua_cocos2dx_Technique_getPasses(lua_State *param_1)

{
  int iVar1;
  Technique *this;
  Vector *pVVar2;
  
  this = (Technique *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pVVar2 = (Vector *)cocos2d::Technique::getPasses(this);
    ccvector_to_luaval<cocos2d::Pass*>(param_1,pVVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Technique:getPasses",iVar1,0);
  }
  return iVar1 == 0;
}

