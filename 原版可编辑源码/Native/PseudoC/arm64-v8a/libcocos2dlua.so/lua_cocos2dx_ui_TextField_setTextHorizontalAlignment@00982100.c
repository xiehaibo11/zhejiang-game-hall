
/* lua_cocos2dx_ui_TextField_setTextHorizontalAlignment(lua_State*) */

undefined4 lua_cocos2dx_ui_TextField_setTextHorizontalAlignment(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  TextField *pTVar3;
  ulong uVar4;
  undefined4 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pTVar3 = (TextField *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"ccui.TextField:setTextHorizontalAlignment");
    if ((uVar4 & 1) != 0) {
                    /* try { // try from 00982164 to 00a8216b has its CatchHandler @ 00982260 */
                    /* try { // try from 0098216c to 00a8218f has its CatchHandler @ 009820fc */
      cocos2d::ui::TextField::setTextHorizontalAlignment(pTVar3,local_3c);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_009821bc;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_TextField_setTextHorizontalAlignment\'"
                ,0);
  }
  else {
                    /* try { // try from 00982190 to 00a8219b has its CatchHandler @ 00982260 */
                    /* try { // try from 0098219c to 00a821c3 has its CatchHandler @ 009820fc */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TextField:setTextHorizontalAlignment",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_009821bc:
                    /* try { // try from 009821c4 to 00a821cb has its CatchHandler @ 0098225c */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009821cc to 00a821eb has its CatchHandler @ 009820fc */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

