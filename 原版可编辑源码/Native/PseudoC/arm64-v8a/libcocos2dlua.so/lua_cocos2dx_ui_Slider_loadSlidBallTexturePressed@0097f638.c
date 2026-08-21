
/* lua_cocos2dx_ui_Slider_loadSlidBallTexturePressed(lua_State*) */

undefined4 lua_cocos2dx_ui_Slider_loadSlidBallTexturePressed(lua_State *param_1)

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
                    /* try { // try from 0097f658 to 00a7f66b has its CatchHandler @ 0097f6f0 */
  pSVar5 = (Slider *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 0097f670 to 00a7f6a3 has its CatchHandler @ 0097f6f4 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"ccui.Slider:loadSlidBallTexturePressed")
    ;
                    /* catch() { ... } // from try @ 0097f658 with catch @ 0097f6f0 */
                    /* catch() { ... } // from try @ 0097f670 with catch @ 0097f6f4 */
    uVar4 = luaval_to_int32(param_1,3,&local_54,"ccui.Slider:loadSlidBallTexturePressed");
    if ((uVar3 & uVar4 & 1) != 0) {
      cocos2d::ui::Slider::loadSlidBallTexturePressed(pSVar5,&local_50,local_54);
                    /* catch() { ... } // from try @ 0097f624 with catch @ 0097f724 */
      lua_settop(param_1,1);
      goto LAB_0097f730;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_Slider_loadSlidBallTexturePressed\'"
                ,0);
LAB_0097f790:
    uVar7 = 0;
  }
  else {
    if (iVar2 != 2) {
                    /* try { // try from 0097f740 to 00a7f797 has its CatchHandler @ 0097f740
                       catch() { ... } // from try @ 0097f740 with catch @ 0097f740
                       catch() { ... } // from try @ 0097f834 with catch @ 0097f740
                       catch() { ... } // from try @ 0097f87c with catch @ 0097f740 */
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012dc46f,
                 iVar2 + -1,1);
      uVar7 = 0;
      goto LAB_0097f7a4;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar6 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"ccui.Slider:loadSlidBallTexturePressed")
    ;
                    /* try { // try from 0097f6a4 to 00a7f73f has its CatchHandler @ 0097f3bc */
    if ((uVar6 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_ui_Slider_loadSlidBallTexturePressed\'"
                  ,0);
      goto LAB_0097f790;
    }
    cocos2d::ui::Slider::loadSlidBallTexturePressed(pSVar5,&local_50,0);
    lua_settop(param_1,1);
LAB_0097f730:
    uVar7 = 1;
  }
                    /* try { // try from 0097f798 to 00a7f803 has its CatchHandler @ 0097f8d4 */
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
LAB_0097f7a4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

