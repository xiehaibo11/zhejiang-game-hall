
/* lua_cocos2dx_ui_TabControl_getHeaderDockPlace(lua_State*) */

bool lua_cocos2dx_ui_TabControl_getHeaderDockPlace(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
                    /* try { // try from 0099a640 to 00a9a653 has its CatchHandler @ 0099a6d8 */
  if (iVar1 == 0) {
    tolua_pushnumber((double)(long)*(int *)(lVar2 + 0x530),param_1);
  }
  else {
                    /* try { // try from 0099a658 to 00a9a68b has its CatchHandler @ 0099a6dc */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TabControl:getHeaderDockPlace",iVar1,0);
  }
  return iVar1 == 0;
}

