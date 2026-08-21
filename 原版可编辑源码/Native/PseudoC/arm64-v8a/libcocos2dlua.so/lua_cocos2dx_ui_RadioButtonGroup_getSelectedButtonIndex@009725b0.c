
/* lua_cocos2dx_ui_RadioButtonGroup_getSelectedButtonIndex(lua_State*) */

bool lua_cocos2dx_ui_RadioButtonGroup_getSelectedButtonIndex(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
                    /* try { // try from 009725b8 to 00a725bf has its CatchHandler @ 009725fc */
                    /* try { // try from 009725c0 to 00a72617 has its CatchHandler @ 0097253c */
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = (**(code **)(*plVar3 + 0x680))(plVar3);
                    /* try { // try from 00972618 to 00a72663 has its CatchHandler @ 00972618
                       catch() { ... } // from try @ 00972618 with catch @ 00972618
                       catch() { ... } // from try @ 00972668 with catch @ 00972618 */
    tolua_pushnumber((double)iVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.RadioButtonGroup:getSelectedButtonIndex",iVar1,0);
                    /* catch() { ... } // from try @ 009725b8 with catch @ 009725fc */
  }
  return iVar1 == 0;
}

