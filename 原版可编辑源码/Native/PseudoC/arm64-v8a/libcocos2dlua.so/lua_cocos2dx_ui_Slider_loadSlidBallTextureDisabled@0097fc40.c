
/* lua_cocos2dx_ui_Slider_loadSlidBallTextureDisabled(lua_State*) */

undefined4 lua_cocos2dx_ui_Slider_loadSlidBallTextureDisabled(lua_State *param_1)

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
                    /* try { // try from 0097fc64 to 00a7fc8f has its CatchHandler @ 0097fd38 */
  pSVar5 = (Slider *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"ccui.Slider:loadSlidBallTextureDisabled"
                      );
    uVar4 = luaval_to_int32(param_1,3,&local_54,"ccui.Slider:loadSlidBallTextureDisabled");
    if ((uVar3 & uVar4 & 1) != 0) {
                    /* try { // try from 0097fd1c to 00a7fd23 has its CatchHandler @ 0097fd38 */
                    /* try { // try from 0097fd24 to 00a7fd77 has its CatchHandler @ 0097fba0 */
      cocos2d::ui::Slider::loadSlidBallTextureDisabled(pSVar5,&local_50,local_54);
      lua_settop(param_1,1);
      goto LAB_0097fd38;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_Slider_loadSlidBallTextureDisabled\'"
                ,0);
LAB_0097fd98:
    uVar7 = 0;
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "ccui.Slider:loadSlidBallTextureDisabled",iVar2 + -1,1);
      uVar7 = 0;
      goto LAB_0097fdac;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
                    /* try { // try from 0097fc90 to 00a7fcb7 has its CatchHandler @ 0097fba0 */
    local_50 = 0;
    uVar6 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"ccui.Slider:loadSlidBallTextureDisabled"
                      );
    if ((uVar6 & 1) == 0) {
                    /* try { // try from 0097fd78 to 00a7fdc3 has its CatchHandler @ 0097fd78
                       catch() { ... } // from try @ 0097fd78 with catch @ 0097fd78
                       catch() { ... } // from try @ 0097fdc8 with catch @ 0097fd78 */
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_ui_Slider_loadSlidBallTextureDisabled\'"
                  ,0);
      goto LAB_0097fd98;
    }
                    /* try { // try from 0097fcb8 to 00a7fccb has its CatchHandler @ 0097fd3c */
    cocos2d::ui::Slider::loadSlidBallTextureDisabled(pSVar5,&local_50,0);
    lua_settop(param_1,1);
LAB_0097fd38:
                    /* catch() { ... } // from try @ 0097fc64 with catch @ 0097fd38
                       catch() { ... } // from try @ 0097fd1c with catch @ 0097fd38 */
    uVar7 = 1;
                    /* catch() { ... } // from try @ 0097fbe4 with catch @ 0097fd3c
                       catch() { ... } // from try @ 0097fcb8 with catch @ 0097fd3c */
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
LAB_0097fdac:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0097fdc4 to 00a7fdc7 has its CatchHandler @ 0097fdfc */
                    /* try { // try from 0097fdc8 to 00a7fe0f has its CatchHandler @ 0097fd78 */
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

