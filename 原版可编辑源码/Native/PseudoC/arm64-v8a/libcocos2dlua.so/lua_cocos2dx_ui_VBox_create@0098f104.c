
/* lua_cocos2dx_ui_VBox_create(lua_State*) */

void lua_cocos2dx_ui_VBox_create(lua_State *param_1)

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
    pvVar4 = (void *)cocos2d::ui::VBox::create();
    if (pvVar4 == (void *)0x0) {
LAB_0098f16c:
      lua_pushnil(param_1);
    }
    else {
LAB_0098f1a8:
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "ccui.VBox");
    }
    uVar5 = 1;
  }
  else {
    if (iVar2 == 2) {
      cocos2d::Size::Size(aSStack_40);
      uVar3 = luaval_to_size(param_1,2,aSStack_40,"ccui.VBox:create");
      if ((uVar3 & 1) != 0) {
        pvVar4 = (void *)cocos2d::ui::VBox::create(aSStack_40);
        if (pvVar4 != (void *)0x0) goto LAB_0098f1a8;
        goto LAB_0098f16c;
      }
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d","ccui.VBox:create",
               iVar2 + -1,0);
    uVar5 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

