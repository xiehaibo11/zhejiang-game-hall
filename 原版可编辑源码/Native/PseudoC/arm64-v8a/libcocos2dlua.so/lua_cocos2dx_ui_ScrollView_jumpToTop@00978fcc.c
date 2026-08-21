
/* lua_cocos2dx_ui_ScrollView_jumpToTop(lua_State*) */

bool lua_cocos2dx_ui_ScrollView_jumpToTop(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  
                    /* try { // try from 00978fcc to 00a79017 has its CatchHandler @ 00978fcc
                       catch() { ... } // from try @ 00978fcc with catch @ 00978fcc
                       catch() { ... } // from try @ 0097901c with catch @ 00978fcc */
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    (**(code **)(*plVar2 + 0x750))(plVar2);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ScrollView:jumpToTop",iVar1,0);
                    /* try { // try from 00979018 to 00a7901b has its CatchHandler @ 00979050 */
                    /* try { // try from 0097901c to 00a79063 has its CatchHandler @ 00978fcc */
  }
  return iVar1 == 0;
}

