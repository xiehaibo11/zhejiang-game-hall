
/* lua_cocos2dx_extension_ControlButton_setTitleLabelForState(lua_State*) */

undefined4 lua_cocos2dx_extension_ControlButton_setTitleLabelForState(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int local_3c;
  long local_38;
  
                    /* try { // try from 009a04ac to 00aa04c3 has its CatchHandler @ 009a0944 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009a04c8 to 00aa04df has its CatchHandler @ 009a0930 */
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
                    /* try { // try from 009a04ec to 00aa0523 has its CatchHandler @ 009a0924 */
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar4 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar4 & 1) == 0)) {
      luaval_to_int32(param_1,3,&local_3c,"cc.ControlButton:setTitleLabelForState");
    }
    else {
      uVar5 = tolua_tousertype(param_1,2,0);
                    /* try { // try from 009a0530 to 00aa0547 has its CatchHandler @ 009a097c */
      uVar4 = luaval_to_int32(param_1,3,&local_3c,"cc.ControlButton:setTitleLabelForState");
      if ((uVar4 & 1) != 0) {
                    /* try { // try from 009a0554 to 00aa056b has its CatchHandler @ 009a0940 */
        (**(code **)(*plVar3 + 0x6e0))(plVar3,uVar5,local_3c);
        uVar6 = 1;
        lua_settop(param_1,1);
        goto LAB_009a05c0;
      }
    }
                    /* try { // try from 009a05b8 to 00aa05cf has its CatchHandler @ 009a0978 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_ControlButton_setTitleLabelForState\'"
                ,0);
  }
  else {
                    /* try { // try from 009a0570 to 00aa05ab has its CatchHandler @ 009a0934 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlButton:setTitleLabelForState",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_009a05c0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009a05dc to 00aa05f3 has its CatchHandler @ 009a093c */
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

