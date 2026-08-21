
/* lua_cocos2dx_ui_AbstractCheckButton_loadTextureBackGroundDisabled(lua_State*) */

undefined4 lua_cocos2dx_ui_AbstractCheckButton_loadTextureBackGroundDisabled(lua_State *param_1)

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
                    /* catch() { ... } // from try @ 0096f2cc with catch @ 0096f3c8 */
                    /* catch() { ... } // from try @ 0096f2b0 with catch @ 0096f3cc */
                    /* catch() { ... } // from try @ 0096f314 with catch @ 0096f3d0 */
  pAVar5 = (AbstractCheckButton *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,
                       "ccui.AbstractCheckButton:loadTextureBackGroundDisabled");
    uVar4 = luaval_to_int32(param_1,3,&local_54,
                            "ccui.AbstractCheckButton:loadTextureBackGroundDisabled");
    if ((uVar3 & uVar4 & 1) != 0) {
      cocos2d::ui::AbstractCheckButton::loadTextureBackGroundDisabled(pAVar5,&local_50,local_54);
      lua_settop(param_1,1);
      goto LAB_0096f49c;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_AbstractCheckButton_loadTextureBackGroundDisabled\'"
                ,0);
LAB_0096f4fc:
    uVar7 = 0;
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d8803,
                 iVar2 + -1,1);
      uVar7 = 0;
      goto LAB_0096f510;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar6 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,
                       "ccui.AbstractCheckButton:loadTextureBackGroundDisabled");
    if ((uVar6 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_ui_AbstractCheckButton_loadTextureBackGroundDisabled\'"
                  ,0);
      goto LAB_0096f4fc;
    }
    cocos2d::ui::AbstractCheckButton::loadTextureBackGroundDisabled(pAVar5,&local_50,0);
    lua_settop(param_1,1);
LAB_0096f49c:
    uVar7 = 1;
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
LAB_0096f510:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

