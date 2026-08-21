
/* lua_cocos2dx_FileUtils_getInstance(lua_State*) */

undefined8 lua_cocos2dx_FileUtils_getInstance(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  FileUtils *pFVar3;
  char *pcVar4;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 0) {
    pFVar3 = (FileUtils *)cocos2d::FileUtils::getInstance();
    if (pFVar3 == (FileUtils *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      pcVar4 = getLuaTypeName<cocos2d::FileUtils>(pFVar3,"cc.FileUtils");
      tolua_pushusertype(param_1,pFVar3,pcVar4);
    }
    uVar2 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.FileUtils:getInstance",iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

