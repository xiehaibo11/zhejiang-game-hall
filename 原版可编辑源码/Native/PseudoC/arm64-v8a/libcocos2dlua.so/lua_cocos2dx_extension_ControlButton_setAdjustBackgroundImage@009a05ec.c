
/* lua_cocos2dx_extension_ControlButton_setAdjustBackgroundImage(lua_State*) */

undefined4 lua_cocos2dx_extension_ControlButton_setAdjustBackgroundImage(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ControlButton *this;
  ulong uVar3;
  undefined4 uVar4;
  bool local_3c [4];
  long local_38;
  
                    /* try { // try from 009a05f8 to 00aa060f has its CatchHandler @ 009a092c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009a0614 to 00aa062b has its CatchHandler @ 009a0920 */
  this = (ControlButton *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* try { // try from 009a063c to 00aa066f has its CatchHandler @ 009a0918 */
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"cc.ControlButton:setAdjustBackgroundImage");
    if ((uVar3 & 1) != 0) {
      cocos2d::extension::ControlButton::setAdjustBackgroundImage(this,local_3c[0]);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_009a06a8;
    }
                    /* try { // try from 009a06a0 to 00aa06b7 has its CatchHandler @ 009a0938 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_ControlButton_setAdjustBackgroundImage\'"
                ,0);
  }
  else {
                    /* try { // try from 009a067c to 00aa0693 has its CatchHandler @ 009a0974 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlButton:setAdjustBackgroundImage",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_009a06a8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009a06bc to 00aa06d3 has its CatchHandler @ 009a0928 */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

