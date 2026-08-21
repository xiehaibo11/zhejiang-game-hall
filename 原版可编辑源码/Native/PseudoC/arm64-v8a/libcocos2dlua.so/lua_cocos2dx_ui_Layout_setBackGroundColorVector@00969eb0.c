
/* lua_cocos2dx_ui_Layout_setBackGroundColorVector(lua_State*) */

undefined4 lua_cocos2dx_ui_Layout_setBackGroundColorVector(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Layout *this;
  ulong uVar3;
  undefined4 uVar4;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00969edc to 00a69f0f has its CatchHandler @ 00969fdc */
  this = (Layout *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_40 = 0;
                    /* try { // try from 00969f10 to 00a69f23 has its CatchHandler @ 00969fa8 */
    uVar3 = luaval_to_vec2(param_1,2,(Vec2 *)&local_40,"ccui.Layout:setBackGroundColorVector");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::Layout::setBackGroundColorVector(this,(Vec2 *)&local_40);
                    /* try { // try from 00969f28 to 00a69f5b has its CatchHandler @ 00969fac */
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00969f70;
    }
                    /* try { // try from 00969f5c to 00a69ff7 has its CatchHandler @ 00969e24 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_Layout_setBackGroundColorVector\'",
                0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Layout:setBackGroundColorVector",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00969f70:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

