
/* lua_cocos2dx_ui_HBox_create(lua_State*) */

void lua_cocos2dx_ui_HBox_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  Size aSStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 0) {
    pvVar4 = (void *)cocos2d::ui::HBox::create();
    if (pvVar4 == (void *)0x0) {
LAB_0098ed08:
      lua_pushnil(param_1);
    }
    else {
LAB_0098ed44:
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "ccui.HBox");
    }
    uVar5 = 1;
  }
  else {
    if (iVar2 == 2) {
      cocos2d::Size::Size(aSStack_40);
      uVar3 = luaval_to_size(param_1,2,aSStack_40,"ccui.HBox:create");
      if ((uVar3 & 1) != 0) {
        pvVar4 = (void *)cocos2d::ui::HBox::create(aSStack_40);
        if (pvVar4 != (void *)0x0) goto LAB_0098ed44;
        goto LAB_0098ed08;
      }
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d","ccui.HBox:create",
               iVar2 + -1,0);
    uVar5 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

