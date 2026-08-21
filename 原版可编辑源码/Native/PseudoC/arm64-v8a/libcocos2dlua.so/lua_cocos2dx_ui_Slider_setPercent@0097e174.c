
/* lua_cocos2dx_ui_Slider_setPercent(lua_State*) */

undefined4 lua_cocos2dx_ui_Slider_setPercent(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Slider *this;
  ulong uVar3;
  undefined4 uVar4;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Slider *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0097e074 with catch @ 0097e1b4
                       catch(type#1 @ 00000000) { ... } // from try @ 0097e0d0 with catch @ 0097e1b4
                       catch(type#1 @ 00000000) { ... } // from try @ 0097e100 with catch @ 0097e1b4
                       catch(type#1 @ 00000000) { ... } // from try @ 0097e134 with catch @ 0097e1b4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0097e0ec with catch @ 0097e1b8
                        */
  if (iVar2 + -1 == 1) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0097e0b4 with catch @ 0097e1bc
                        */
                    /* try { // try from 0097e1d0 to 00a7e1d3 has its CatchHandler @ 0097e200 */
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"ccui.Slider:setPercent");
                    /* try { // try from 0097e1d4 to 00a7e217 has its CatchHandler @ 0097e020 */
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::Slider::setPercent(this,local_3c);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_0097e230;
    }
                    /* try { // try from 0097e218 to 00a7e267 has its CatchHandler @ 0097e218
                       catch() { ... } // from try @ 0097e218 with catch @ 0097e218
                       catch() { ... } // from try @ 0097e2a0 with catch @ 0097e218
                       catch() { ... } // from try @ 0097e2f0 with catch @ 0097e218 */
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_Slider_setPercent\'",0);
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0097e1d0 with catch @ 0097e200
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0097e15c with catch @ 0097e204
                        */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Slider:setPercent",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_0097e230:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

