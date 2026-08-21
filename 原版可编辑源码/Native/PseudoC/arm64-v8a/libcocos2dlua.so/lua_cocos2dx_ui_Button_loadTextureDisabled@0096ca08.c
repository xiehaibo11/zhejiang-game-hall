
/* lua_cocos2dx_ui_Button_loadTextureDisabled(lua_State*) */

undefined4 lua_cocos2dx_ui_Button_loadTextureDisabled(lua_State *param_1)

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
  
                    /* try { // try from 0096ca10 to 00a6ca2b has its CatchHandler @ 0096cc08 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0096ca2c to 00a6cc57 has its CatchHandler @ 0096c810 */
  pBVar5 = (Button *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"ccui.Button:loadTextureDisabled");
    uVar4 = luaval_to_int32(param_1,3,&local_54,"ccui.Button:loadTextureDisabled");
    if ((uVar3 & uVar4 & 1) != 0) {
      cocos2d::ui::Button::loadTextureDisabled(pBVar5,&local_50,local_54);
      lua_settop(param_1,1);
      goto LAB_0096cb00;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_Button_loadTextureDisabled\'",0);
LAB_0096cb60:
    uVar7 = 0;
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "ccui.Button:loadTextureDisabled",iVar2 + -1,1);
      uVar7 = 0;
      goto LAB_0096cb74;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar6 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"ccui.Button:loadTextureDisabled");
    if ((uVar6 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_ui_Button_loadTextureDisabled\'",0);
      goto LAB_0096cb60;
    }
    cocos2d::ui::Button::loadTextureDisabled(pBVar5,&local_50,0);
    lua_settop(param_1,1);
LAB_0096cb00:
    uVar7 = 1;
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
LAB_0096cb74:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

