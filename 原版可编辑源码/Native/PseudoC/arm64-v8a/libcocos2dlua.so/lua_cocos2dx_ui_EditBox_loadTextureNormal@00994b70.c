
/* lua_cocos2dx_ui_EditBox_loadTextureNormal(lua_State*) */

undefined4 lua_cocos2dx_ui_EditBox_loadTextureNormal(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  EditBox *pEVar5;
  ulong uVar6;
  undefined4 uVar7;
  int local_54;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pEVar5 = (EditBox *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"ccui.EditBox:loadTextureNormal");
    uVar4 = luaval_to_int32(param_1,3,&local_54,"ccui.EditBox:loadTextureNormal");
    if ((uVar3 & uVar4 & 1) != 0) {
      cocos2d::ui::EditBox::loadTextureNormal(pEVar5,&local_50,local_54);
      lua_settop(param_1,1);
      goto LAB_00994c68;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_EditBox_loadTextureNormal\'",0);
LAB_00994cc8:
    uVar7 = 0;
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "ccui.EditBox:loadTextureNormal",iVar2 + -1,1);
      uVar7 = 0;
      goto LAB_00994cdc;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar6 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"ccui.EditBox:loadTextureNormal");
    if ((uVar6 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_ui_EditBox_loadTextureNormal\'",0);
      goto LAB_00994cc8;
    }
    cocos2d::ui::EditBox::loadTextureNormal(pEVar5,&local_50,0);
    lua_settop(param_1,1);
LAB_00994c68:
    uVar7 = 1;
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
LAB_00994cdc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

