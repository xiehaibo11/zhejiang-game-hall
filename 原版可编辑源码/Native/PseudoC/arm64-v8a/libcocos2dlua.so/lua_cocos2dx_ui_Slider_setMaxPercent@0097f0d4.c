
/* lua_cocos2dx_ui_Slider_setMaxPercent(lua_State*) */

undefined4 lua_cocos2dx_ui_Slider_setMaxPercent(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Slider *this;
  ulong uVar3;
  undefined4 uVar4;
  int local_3c;
  long local_38;
  
                    /* try { // try from 0097f0e8 to 00a7f10f has its CatchHandler @ 0097f06c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Slider *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 0097f110 to 00a7f123 has its CatchHandler @ 0097f17c */
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"ccui.Slider:setMaxPercent");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::Slider::setMaxPercent(this,local_3c);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_0097f190;
    }
                    /* catch() { ... } // from try @ 0097f0c0 with catch @ 0097f178
                       catch() { ... } // from try @ 0097f15c with catch @ 0097f178 */
                    /* catch() { ... } // from try @ 0097f0a4 with catch @ 0097f17c
                       catch() { ... } // from try @ 0097f110 with catch @ 0097f17c */
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_Slider_setMaxPercent\'",0);
  }
  else {
                    /* try { // try from 0097f15c to 00a7f163 has its CatchHandler @ 0097f178 */
                    /* try { // try from 0097f164 to 00a7f197 has its CatchHandler @ 0097f06c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Slider:setMaxPercent",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_0097f190:
                    /* try { // try from 0097f198 to 00a7f1d7 has its CatchHandler @ 0097f198
                       catch() { ... } // from try @ 0097f198 with catch @ 0097f198
                       catch() { ... } // from try @ 0097f240 with catch @ 0097f198
                       catch() { ... } // from try @ 0097f2d0 with catch @ 0097f198 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

