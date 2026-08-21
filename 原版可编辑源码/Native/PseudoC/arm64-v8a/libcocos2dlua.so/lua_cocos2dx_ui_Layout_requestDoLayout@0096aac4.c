
/* lua_cocos2dx_ui_Layout_requestDoLayout(lua_State*) */

bool lua_cocos2dx_ui_Layout_requestDoLayout(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  
                    /* catch() { ... } // from try @ 0096aa94 with catch @ 0096aacc */
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 0096aae0 to 00a6abdf has its CatchHandler @ 0096aae0
                       catch() { ... } // from try @ 0096aae0 with catch @ 0096aae0
                       catch() { ... } // from try @ 0096ac60 with catch @ 0096aae0 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    (**(code **)(*plVar2 + 0x6a8))(plVar2);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d78a7,
               iVar1,0);
  }
  return iVar1 == 0;
}

