
/* lua_cocos2dx_ui_AbstractCheckButton_loadTextureFrontCrossDisabled(lua_State*) */

undefined4 lua_cocos2dx_ui_AbstractCheckButton_loadTextureFrontCrossDisabled(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  AbstractCheckButton *pAVar5;
  ulong uVar6;
  undefined4 uVar7;
  int local_54;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pAVar5 = (AbstractCheckButton *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
                    /* try { // try from 00970924 to 00a709b7 has its CatchHandler @ 00970924
                       catch() { ... } // from try @ 00970924 with catch @ 00970924
                       catch() { ... } // from try @ 009709c0 with catch @ 00970924 */
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,
                       "ccui.AbstractCheckButton:loadTextureFrontCrossDisabled");
    uVar4 = luaval_to_int32(param_1,3,&local_54,
                            "ccui.AbstractCheckButton:loadTextureFrontCrossDisabled");
    if ((uVar3 & uVar4 & 1) != 0) {
      cocos2d::ui::AbstractCheckButton::loadTextureFrontCrossDisabled(pAVar5,&local_50,local_54);
      lua_settop(param_1,1);
      goto LAB_00970970;
    }
                    /* try { // try from 009709c0 to 00a70a17 has its CatchHandler @ 00970924 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_AbstractCheckButton_loadTextureFrontCrossDisabled\'"
                ,0);
LAB_009709d0:
    uVar7 = 0;
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&LAB_012d8d48,
                 iVar2 + -1,1);
      uVar7 = 0;
      goto LAB_009709e4;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar6 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,
                       "ccui.AbstractCheckButton:loadTextureFrontCrossDisabled");
    if ((uVar6 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_ui_AbstractCheckButton_loadTextureFrontCrossDisabled\'"
                  ,0);
                    /* try { // try from 009709b8 to 00a709bf has its CatchHandler @ 009709fc */
      goto LAB_009709d0;
    }
    cocos2d::ui::AbstractCheckButton::loadTextureFrontCrossDisabled(pAVar5,&local_50,0);
    lua_settop(param_1,1);
LAB_00970970:
    uVar7 = 1;
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
LAB_009709e4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 009709b8 with catch @ 009709fc */
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

