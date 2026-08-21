
/* lua_cocos2dx_ui_Button_loadTexturePressed(lua_State*) */

undefined4 lua_cocos2dx_ui_Button_loadTexturePressed(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  Button *pBVar5;
  ulong uVar6;
  undefined4 uVar7;
  int local_54;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
                    /* try { // try from 0096d290 to 00a6d2a7 has its CatchHandler @ 0096d350 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0096d2ac to 00a6d2c3 has its CatchHandler @ 0096d34c */
  pBVar5 = (Button *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 0096d2c4 to 00a6d2f7 has its CatchHandler @ 0096d240 */
  if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"ccui.Button:loadTexturePressed");
                    /* catch() { ... } // from try @ 0096d2ac with catch @ 0096d34c */
                    /* catch() { ... } // from try @ 0096d290 with catch @ 0096d350
                       catch() { ... } // from try @ 0096d2f8 with catch @ 0096d350 */
    uVar4 = luaval_to_int32(param_1,3,&local_54,"ccui.Button:loadTexturePressed");
    if ((uVar3 & uVar4 & 1) != 0) {
      cocos2d::ui::Button::loadTexturePressed(pBVar5,&local_50,local_54);
      lua_settop(param_1,1);
      goto LAB_0096d37c;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_Button_loadTexturePressed\'",0);
LAB_0096d3dc:
    uVar7 = 0;
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "ccui.Button:loadTexturePressed",iVar2 + -1,1);
      uVar7 = 0;
      goto LAB_0096d3f0;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar6 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"ccui.Button:loadTexturePressed");
    if ((uVar6 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_ui_Button_loadTexturePressed\'",0);
      goto LAB_0096d3dc;
    }
                    /* try { // try from 0096d2f8 to 00a6d30b has its CatchHandler @ 0096d350 */
    cocos2d::ui::Button::loadTexturePressed(pBVar5,&local_50,0);
                    /* try { // try from 0096d30c to 00a6d36b has its CatchHandler @ 0096d240 */
    lua_settop(param_1,1);
LAB_0096d37c:
    uVar7 = 1;
  }
                    /* try { // try from 0096d3e4 to 00a6d433 has its CatchHandler @ 0096d3e4
                       catch() { ... } // from try @ 0096d3e4 with catch @ 0096d3e4
                       catch() { ... } // from try @ 0096d694 with catch @ 0096d3e4
                       catch() { ... } // from try @ 0096d850 with catch @ 0096d3e4 */
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
LAB_0096d3f0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

