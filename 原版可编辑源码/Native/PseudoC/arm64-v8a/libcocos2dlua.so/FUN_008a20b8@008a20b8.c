
undefined8 FUN_008a20b8(undefined8 param_1)

{
  int iVar1;
  LabelTTF *this;
  undefined8 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  this = (LabelTTF *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pbVar3 = (byte *)cocos2d::LabelTTF::getFontName(this);
    pbVar4 = *(byte **)(pbVar3 + 0x10);
    if ((*pbVar3 & 1) == 0) {
      pbVar4 = pbVar3 + 1;
    }
    tolua_pushstring(param_1,pbVar4);
    uVar2 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.LabelTTF:getFontName",iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

