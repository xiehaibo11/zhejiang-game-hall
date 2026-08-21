
bool FUN_008a1f64(lua_State *param_1)

{
  int iVar1;
  LabelTTF *this;
  FontDefinition *pFVar2;
  
  this = (LabelTTF *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pFVar2 = (FontDefinition *)cocos2d::LabelTTF::getTextDefinition(this);
    fontdefinition_to_luaval(param_1,pFVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.LabelTTF:getTextDefinition",iVar1,0);
  }
  return iVar1 == 0;
}

