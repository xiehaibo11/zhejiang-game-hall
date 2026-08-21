
/* lua_cocos2dx_Properties_getNextNamespace(lua_State*) */

bool lua_cocos2dx_Properties_getNextNamespace(lua_State *param_1)

{
  int iVar1;
  Properties *pPVar2;
  
  pPVar2 = (Properties *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pPVar2 = (Properties *)cocos2d::Properties::getNextNamespace(pPVar2);
    object_to_luaval<cocos2d::Properties>(param_1,"cc.Properties",pPVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Properties:getNextNamespace",iVar1,0);
  }
  return iVar1 == 0;
}

