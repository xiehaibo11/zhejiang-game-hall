
/* lua_cocos2dx_ui_Slider_setZoomScale(lua_State*) */

undefined4 lua_cocos2dx_ui_Slider_setZoomScale(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Slider *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Slider *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"ccui.Slider:setZoomScale");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::Slider::setZoomScale(this,(float)local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_0097ff50;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_Slider_setZoomScale\'",0);
  }
  else {
                    /* try { // try from 0097ff28 to 00a7ff5b has its CatchHandler @ 00980028 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Slider:setZoomScale",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_0097ff50:
                    /* try { // try from 0097ff5c to 00a7ff6f has its CatchHandler @ 0097fff4 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0097ff74 to 00a7ffa7 has its CatchHandler @ 0097fff8 */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

