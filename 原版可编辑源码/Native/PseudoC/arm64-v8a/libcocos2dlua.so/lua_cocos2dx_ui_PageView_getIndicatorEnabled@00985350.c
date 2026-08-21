
/* lua_cocos2dx_ui_PageView_getIndicatorEnabled(lua_State*) */

bool lua_cocos2dx_ui_PageView_getIndicatorEnabled(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    tolua_pushboolean(param_1,*(long *)(lVar2 + 0x950) != 0);
  }
  else {
                    /* try { // try from 0098538c to 00a85397 has its CatchHandler @ 00985514 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&LAB_012dddb8,
               iVar1,0);
                    /* try { // try from 009853a0 to 00a853a7 has its CatchHandler @ 009854fc */
  }
  return iVar1 == 0;
}

