
/* lua_cocos2dx_studio_DisplayManager_getDisplayRenderNodeType(lua_State*) */

bool lua_cocos2dx_studio_DisplayManager_getDisplayRenderNodeType(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  DisplayManager *this;
  
                    /* try { // try from 009308a8 to 00a309bf has its CatchHandler @ 009308a8
                       catch() { ... } // from try @ 009308a8 with catch @ 009308a8
                       catch() { ... } // from try @ 00930a40 with catch @ 009308a8 */
  this = (DisplayManager *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = cocostudio::DisplayManager::getDisplayRenderNodeType(this);
    tolua_pushnumber((double)iVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.DisplayManager:getDisplayRenderNodeType",iVar1,0);
  }
  return iVar1 == 0;
}

