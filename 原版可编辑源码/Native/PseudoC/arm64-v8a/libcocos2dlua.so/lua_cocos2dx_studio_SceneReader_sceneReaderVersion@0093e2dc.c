
/* lua_cocos2dx_studio_SceneReader_sceneReaderVersion(lua_State*) */

bool lua_cocos2dx_studio_SceneReader_sceneReaderVersion(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocostudio::SceneReader::sceneReaderVersion();
    tolua_pushstring(param_1,uVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccs.SceneReader:sceneReaderVersion",iVar1,0);
  }
  return iVar1 == 0;
}

