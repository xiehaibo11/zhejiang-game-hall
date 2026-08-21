
/* lua_cocos2dx_ui_Slider_loadBarTexture(lua_State*) */

undefined4 lua_cocos2dx_ui_Slider_loadBarTexture(lua_State *param_1)

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
                    /* try { // try from 0097f1d8 to 00a7f20b has its CatchHandler @ 0097f2e8 */
  pSVar5 = (Slider *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
                    /* try { // try from 0097f268 to 00a7f27b has its CatchHandler @ 0097f2e8 */
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.Slider:loadBarTexture");
    uVar4 = luaval_to_int32(param_1,3,&local_54,"ccui.Slider:loadBarTexture");
    if ((uVar3 & uVar4 & 1) != 0) {
      cocos2d::ui::Slider::loadBarTexture(pSVar5,&local_50,local_54);
      lua_settop(param_1,1);
      goto LAB_0097f2b4;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_Slider_loadBarTexture\'",0)
    ;
LAB_0097f314:
    uVar7 = 0;
  }
  else {
    if (iVar2 != 2) {
                    /* try { // try from 0097f2c8 to 00a7f2cf has its CatchHandler @ 0097f2e4 */
                    /* try { // try from 0097f2d0 to 00a7f323 has its CatchHandler @ 0097f198 */
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "ccui.Slider:loadBarTexture",iVar2 + -1,1);
      uVar7 = 0;
                    /* catch() { ... } // from try @ 0097f214 with catch @ 0097f2e4
                       catch() { ... } // from try @ 0097f2c8 with catch @ 0097f2e4 */
      goto LAB_0097f328;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
                    /* try { // try from 0097f214 to 00a7f23f has its CatchHandler @ 0097f2e4 */
    uVar6 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.Slider:loadBarTexture");
    if ((uVar6 & 1) == 0) {
                    /* catch() { ... } // from try @ 0097f1d8 with catch @ 0097f2e8
                       catch() { ... } // from try @ 0097f268 with catch @ 0097f2e8 */
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_Slider_loadBarTexture\'",
                  0);
      goto LAB_0097f314;
    }
    cocos2d::ui::Slider::loadBarTexture(pSVar5,&local_50,0);
                    /* try { // try from 0097f240 to 00a7f267 has its CatchHandler @ 0097f198 */
    lua_settop(param_1,1);
LAB_0097f2b4:
    uVar7 = 1;
  }
  if ((local_50 & 1) != 0) {
                    /* try { // try from 0097f324 to 00a7f36f has its CatchHandler @ 0097f324
                       catch() { ... } // from try @ 0097f324 with catch @ 0097f324
                       catch() { ... } // from try @ 0097f374 with catch @ 0097f324 */
    operator_delete(local_40);
  }
LAB_0097f328:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

