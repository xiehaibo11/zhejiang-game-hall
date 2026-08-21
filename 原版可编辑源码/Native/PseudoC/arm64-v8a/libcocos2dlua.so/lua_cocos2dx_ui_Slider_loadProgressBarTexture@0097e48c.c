
/* lua_cocos2dx_ui_Slider_loadProgressBarTexture(lua_State*) */

undefined4 lua_cocos2dx_ui_Slider_loadProgressBarTexture(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  Slider *pSVar5;
  ulong uVar6;
  undefined4 uVar7;
  int local_54;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pSVar5 = (Slider *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
                    /* try { // try from 0097e520 to 00a7e537 has its CatchHandler @ 0097e600 */
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
                    /* try { // try from 0097e53c to 00a7e567 has its CatchHandler @ 0097e5fc */
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"ccui.Slider:loadProgressBarTexture");
    uVar4 = luaval_to_int32(param_1,3,&local_54,"ccui.Slider:loadProgressBarTexture");
    if ((uVar3 & uVar4 & 1) != 0) {
                    /* try { // try from 0097e568 to 00a7e58f has its CatchHandler @ 0097e4d0 */
      cocos2d::ui::Slider::loadProgressBarTexture(pSVar5,&local_50,local_54);
      lua_settop(param_1,1);
      goto LAB_0097e584;
    }
                    /* try { // try from 0097e5e0 to 00a7e5e7 has its CatchHandler @ 0097e5fc */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_Slider_loadProgressBarTexture\'",0)
    ;
LAB_0097e5e4:
    uVar7 = 0;
                    /* try { // try from 0097e5e8 to 00a7e61b has its CatchHandler @ 0097e4d0 */
  }
  else {
                    /* try { // try from 0097e4d0 to 00a7e51f has its CatchHandler @ 0097e4d0
                       catch() { ... } // from try @ 0097e4d0 with catch @ 0097e4d0
                       catch() { ... } // from try @ 0097e568 with catch @ 0097e4d0
                       catch() { ... } // from try @ 0097e5e8 with catch @ 0097e4d0 */
    if (iVar2 != 2) {
                    /* try { // try from 0097e590 to 00a7e5a3 has its CatchHandler @ 0097e600 */
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "ccui.Slider:loadProgressBarTexture",iVar2 + -1,1);
      uVar7 = 0;
      goto LAB_0097e5f8;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar6 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"ccui.Slider:loadProgressBarTexture");
    if ((uVar6 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_ui_Slider_loadProgressBarTexture\'",
                  0);
      goto LAB_0097e5e4;
    }
    cocos2d::ui::Slider::loadProgressBarTexture(pSVar5,&local_50,0);
    lua_settop(param_1,1);
LAB_0097e584:
    uVar7 = 1;
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
LAB_0097e5f8:
                    /* catch() { ... } // from try @ 0097e53c with catch @ 0097e5fc
                       catch() { ... } // from try @ 0097e5e0 with catch @ 0097e5fc */
                    /* catch() { ... } // from try @ 0097e520 with catch @ 0097e600
                       catch() { ... } // from try @ 0097e590 with catch @ 0097e600 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

