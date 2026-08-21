
/* lua_cocos2dx_ui_Helper_getSubStringOfUTF8String(lua_State*) */

undefined4 lua_cocos2dx_ui_Helper_getSubStringOfUTF8String(lua_State *param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 uVar9;
  byte local_70 [8];
  ulong local_68;
  void *local_60;
  uint local_58;
  uint uStack_54;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar4 = lua_gettop();
  if (iVar4 + -1 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar5 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"ccui.Helper:getSubStringOfUTF8String");
    uVar6 = luaval_to_uint32(param_1,3,&uStack_54,"ccui.Helper:getSubStringOfUTF8String");
    pcVar8 = "ccui.Helper:getSubStringOfUTF8String";
    uVar7 = luaval_to_uint32(param_1,4,&local_58,"ccui.Helper:getSubStringOfUTF8String");
    if ((uVar5 & uVar6 & uVar7 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_ui_Helper_getSubStringOfUTF8String\'"
                  ,0);
      uVar9 = 0;
    }
    else {
      cocos2d::ui::Helper::getSubStringOfUTF8String
                ((Helper *)&local_50,(basic_string *)(ulong)uStack_54,(ulong)local_58,(ulong)pcVar8)
      ;
      uVar1 = (ulong)(local_70[0] >> 1);
      pvVar3 = (void *)((ulong)local_70 | 1);
      if ((local_70[0] & 1) != 0) {
        uVar1 = local_68;
        pvVar3 = local_60;
      }
      lua_pushlstring(param_1,pvVar3,uVar1);
      if ((local_70[0] & 1) != 0) {
        operator_delete(local_60);
      }
      uVar9 = 1;
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccui.Helper:getSubStringOfUTF8String",iVar4 + -1,3);
    uVar9 = 0;
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}

