
bool FUN_008a1cf8(lua_State *param_1)

{
  int iVar1;
  LabelTTF *this;
  Size *pSVar2;
  
  this = (LabelTTF *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pSVar2 = (Size *)cocos2d::LabelTTF::getDimensions(this);
    size_to_luaval(param_1,pSVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.LabelTTF:getDimensions",iVar1,0);
  }
  return iVar1 == 0;
}

