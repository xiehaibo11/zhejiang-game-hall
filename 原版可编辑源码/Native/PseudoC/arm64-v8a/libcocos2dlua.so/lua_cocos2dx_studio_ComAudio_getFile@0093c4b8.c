
/* lua_cocos2dx_studio_ComAudio_getFile(lua_State*) */

bool lua_cocos2dx_studio_ComAudio_getFile(lua_State *param_1)

{
  int iVar1;
  ComAudio *this;
  undefined8 uVar2;
  
                    /* try { // try from 0093c4bc to 00a3c53b has its CatchHandler @ 0093c2a8 */
  this = (ComAudio *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocostudio::ComAudio::getFile(this);
    tolua_pushstring(param_1,uVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ComAudio:getFile",iVar1,0);
  }
  return iVar1 == 0;
}

