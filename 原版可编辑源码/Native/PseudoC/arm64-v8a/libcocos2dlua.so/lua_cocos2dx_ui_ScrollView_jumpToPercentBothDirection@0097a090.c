
/* lua_cocos2dx_ui_ScrollView_jumpToPercentBothDirection(lua_State*) */

undefined4 lua_cocos2dx_ui_ScrollView_jumpToPercentBothDirection(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 local_40;
  long local_38;
  
                    /* try { // try from 0097a0a4 to 00a7a0bb has its CatchHandler @ 0097a164 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 0097a0c0 to 00a7a0d7 has its CatchHandler @ 0097a160 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* try { // try from 0097a0d8 to 00a7a10b has its CatchHandler @ 0097a054 */
    local_40 = 0;
    uVar4 = luaval_to_vec2(param_1,2,(Vec2 *)&local_40,"ccui.ScrollView:jumpToPercentBothDirection")
    ;
    if ((uVar4 & 1) != 0) {
      (**(code **)(*plVar3 + 0x798))(plVar3,&local_40);
                    /* try { // try from 0097a10c to 00a7a11f has its CatchHandler @ 0097a164 */
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_0097a158;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_ScrollView_jumpToPercentBothDirection\'"
                ,0);
  }
  else {
                    /* try { // try from 0097a120 to 00a7a17f has its CatchHandler @ 0097a054 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ScrollView:jumpToPercentBothDirection",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_0097a158:
                    /* catch() { ... } // from try @ 0097a0c0 with catch @ 0097a160 */
                    /* catch() { ... } // from try @ 0097a0a4 with catch @ 0097a164
                       catch() { ... } // from try @ 0097a10c with catch @ 0097a164 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

