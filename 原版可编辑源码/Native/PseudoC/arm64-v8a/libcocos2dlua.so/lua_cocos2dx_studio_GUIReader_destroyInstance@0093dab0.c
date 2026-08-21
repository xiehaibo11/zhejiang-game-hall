
/* lua_cocos2dx_studio_GUIReader_destroyInstance(lua_State*) */

bool lua_cocos2dx_studio_GUIReader_destroyInstance(lua_State *param_1)

{
  int iVar1;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocostudio::GUIReader::destroyInstance();
    lua_settop(param_1,1);
  }
  else {
                    /* try { // try from 0093dad4 to 00a3dbdb has its CatchHandler @ 0093d94c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccs.GUIReader:destroyInstance",iVar1,0);
  }
  return iVar1 == 0;
}

