
/* lua_cocos2dx_ui_RadioButtonGroup_removeRadioButton(lua_State*) */

undefined4 lua_cocos2dx_ui_RadioButtonGroup_removeRadioButton(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  
                    /* try { // try from 00972468 to 00a7249b has its CatchHandler @ 00972520 */
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
                    /* try { // try from 0097249c to 00a724cb has its CatchHandler @ 0097242c */
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar3 = luaval_is_usertype(param_1,2,"ccui.RadioButton",0), (uVar3 & 1) != 0)) {
      uVar4 = tolua_tousertype(param_1,2,0);
                    /* try { // try from 009724cc to 00a724df has its CatchHandler @ 00972520 */
      (**(code **)(*plVar2 + 0x6b0))(plVar2,uVar4);
                    /* try { // try from 009724e0 to 00a7253b has its CatchHandler @ 0097242c */
      lua_settop(param_1,1);
      return 1;
    }
                    /* catch() { ... } // from try @ 00972468 with catch @ 00972520
                       catch() { ... } // from try @ 009724cc with catch @ 00972520 */
    tolua_error(param_1,&DAT_012d8f01,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d8ed9,
               iVar1 + -1,1);
  }
  return 0;
}

