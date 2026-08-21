
/* lua_cocos2dx_ui_ScrollView_jumpToBottomLeft(lua_State*) */

bool lua_cocos2dx_ui_ScrollView_jumpToBottomLeft(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  
                    /* try { // try from 0097ab6c to 00a7ab9f has its CatchHandler @ 0097aac0 */
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 0097abb4 to 00a7ac43 has its CatchHandler @ 0097aac0 */
    (**(code **)(*plVar2 + 0x778))(plVar2);
    lua_settop(param_1,1);
  }
  else {
                    /* try { // try from 0097aba0 to 00a7abb3 has its CatchHandler @ 0097ac08 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012db2c6,
               iVar1,0);
  }
  return iVar1 == 0;
}

