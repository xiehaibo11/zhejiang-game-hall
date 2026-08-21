
/* lua_cocos2dx_studio_SceneReader_getInstance(lua_State*) */

undefined8 lua_cocos2dx_studio_SceneReader_getInstance(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  SceneReader *pSVar3;
  char *pcVar4;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 0) {
    pSVar3 = (SceneReader *)cocostudio::SceneReader::getInstance();
    if (pSVar3 == (SceneReader *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      pcVar4 = getLuaTypeName<cocostudio::SceneReader>(pSVar3,"ccs.SceneReader");
      tolua_pushusertype(param_1,pSVar3,pcVar4);
    }
    uVar2 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccs.SceneReader:getInstance",iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

