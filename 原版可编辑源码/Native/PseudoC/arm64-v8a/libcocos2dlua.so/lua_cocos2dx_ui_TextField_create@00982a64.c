
/* lua_cocos2dx_ui_TextField_create(lua_State*) */

void lua_cocos2dx_ui_TextField_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  int iVar6;
  int local_6c;
  ulong local_68;
  undefined8 local_60;
  void *local_58;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 0) {
    pvVar4 = (void *)cocos2d::ui::TextField::create();
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "ccui.TextField");
    }
LAB_00982bcc:
    uVar5 = 1;
  }
  else {
    if (iVar2 == 4) {
      local_48 = 0;
      local_40 = (void *)0x0;
      local_50 = 0;
      uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.TextField:create");
      if ((uVar3 & 1) == 0) {
        iVar6 = 2;
      }
      else {
        local_60 = 0;
        local_58 = (void *)0x0;
        local_68 = 0;
        uVar3 = luaval_to_std_string(param_1,3,(basic_string *)&local_68,"ccui.TextField:create");
        if (((uVar3 & 1) == 0) ||
           (uVar3 = luaval_to_int32(param_1,4,&local_6c,"ccui.TextField:create"), (uVar3 & 1) == 0))
        {
          iVar6 = 2;
        }
        else {
          pvVar4 = (void *)cocos2d::ui::TextField::create
                                     ((basic_string *)&local_50,(basic_string *)&local_68,local_6c);
          if (pvVar4 == (void *)0x0) {
            lua_pushnil(param_1);
          }
          else {
            toluafix_pushusertype_ccobject
                      (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                       "ccui.TextField");
          }
          iVar6 = 1;
        }
        if ((local_68 & 1) != 0) {
          operator_delete(local_58);
        }
      }
      if ((local_50 & 1) != 0) {
        operator_delete(local_40);
      }
      if (iVar6 != 2) goto LAB_00982bcc;
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
               "ccui.TextField:create",iVar2 + -1,0);
    uVar5 = 0;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

