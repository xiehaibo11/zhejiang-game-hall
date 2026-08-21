
/* lua_cocos2dx_ui_RadioButtonGroup_setAllowedNoSelection(lua_State*) */

undefined4 lua_cocos2dx_ui_RadioButtonGroup_setAllowedNoSelection(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  RadioButtonGroup *this;
  ulong uVar3;
  undefined4 uVar4;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (RadioButtonGroup *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 00972664 to 00a72667 has its CatchHandler @ 0097269c */
                    /* try { // try from 00972668 to 00a726af has its CatchHandler @ 00972618 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"ccui.RadioButtonGroup:setAllowedNoSelection");
    if ((uVar3 & 1) != 0) {
                    /* catch() { ... } // from try @ 00972664 with catch @ 0097269c */
      cocos2d::ui::RadioButtonGroup::setAllowedNoSelection(this,local_3c[0]);
      uVar4 = 1;
      lua_settop(param_1,1);
                    /* try { // try from 009726b0 to 00a728cf has its CatchHandler @ 009726b0
                       catch() { ... } // from try @ 009726b0 with catch @ 009726b0
                       catch() { ... } // from try @ 00972950 with catch @ 009726b0 */
      goto LAB_009726ec;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_RadioButtonGroup_setAllowedNoSelection\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.RadioButtonGroup:setAllowedNoSelection",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_009726ec:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

