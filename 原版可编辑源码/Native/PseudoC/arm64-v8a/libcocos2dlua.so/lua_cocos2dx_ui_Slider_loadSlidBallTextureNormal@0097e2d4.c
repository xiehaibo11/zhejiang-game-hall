
/* lua_cocos2dx_ui_Slider_loadSlidBallTextureNormal(lua_State*) */

undefined4 lua_cocos2dx_ui_Slider_loadSlidBallTextureNormal(lua_State *param_1)

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
  
                    /* try { // try from 0097e2dc to 00a7e2ef has its CatchHandler @ 0097e34c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0097e2f0 to 00a7e367 has its CatchHandler @ 0097e218 */
  pSVar5 = (Slider *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"ccui.Slider:loadSlidBallTextureNormal");
    uVar4 = luaval_to_int32(param_1,3,&local_54,"ccui.Slider:loadSlidBallTextureNormal");
    if ((uVar3 & uVar4 & 1) != 0) {
      cocos2d::ui::Slider::loadSlidBallTextureNormal(pSVar5,&local_50,local_54);
      lua_settop(param_1,1);
      goto LAB_0097e3cc;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_Slider_loadSlidBallTextureNormal\'"
                ,0);
LAB_0097e42c:
    uVar7 = 0;
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "ccui.Slider:loadSlidBallTextureNormal",iVar2 + -1,1);
      uVar7 = 0;
      goto LAB_0097e440;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
                    /* catch() { ... } // from try @ 0097e294 with catch @ 0097e330 */
    uVar6 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"ccui.Slider:loadSlidBallTextureNormal");
    if ((uVar6 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_ui_Slider_loadSlidBallTextureNormal\'"
                  ,0);
      goto LAB_0097e42c;
    }
                    /* catch() { ... } // from try @ 0097e284 with catch @ 0097e348 */
                    /* catch() { ... } // from try @ 0097e268 with catch @ 0097e34c
                       catch() { ... } // from try @ 0097e2dc with catch @ 0097e34c */
    cocos2d::ui::Slider::loadSlidBallTextureNormal(pSVar5,&local_50,0);
    lua_settop(param_1,1);
LAB_0097e3cc:
    uVar7 = 1;
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
LAB_0097e440:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

