
/* lua_cocos2dx_ui_Scale9Sprite_createWithSpriteFrameName(lua_State*) */

void lua_cocos2dx_ui_Scale9Sprite_createWithSpriteFrameName(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  int iVar6;
  Rect aRStack_60 [16];
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  int iVar7;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 2) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,
                       "ccui.Scale9Sprite:createWithSpriteFrameName");
    if ((uVar3 & 1) == 0) {
      if ((local_50 & 1) != 0) {
        operator_delete(local_40);
      }
      goto LAB_00991b08;
    }
    pvVar4 = (void *)cocos2d::ui::Scale9Sprite::createWithSpriteFrameName((basic_string *)&local_50)
    ;
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "ccui.Scale9Sprite");
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
LAB_00991af0:
    uVar5 = 1;
  }
  else {
    if (iVar2 == 3) {
      local_48 = 0;
      local_40 = (void *)0x0;
      local_50 = 0;
      uVar3 = luaval_to_std_string
                        (param_1,2,(basic_string *)&local_50,
                         "ccui.Scale9Sprite:createWithSpriteFrameName");
      if ((uVar3 & 1) == 0) {
LAB_00991ad4:
        iVar7 = 2;
        iVar6 = 2;
      }
      else {
        cocos2d::Rect::Rect(aRStack_60);
        uVar3 = luaval_to_rect(param_1,3,aRStack_60,"ccui.Scale9Sprite:createWithSpriteFrameName");
        if ((uVar3 & 1) == 0) goto LAB_00991ad4;
        pvVar4 = (void *)cocos2d::ui::Scale9Sprite::createWithSpriteFrameName
                                   ((basic_string *)&local_50,aRStack_60);
        if (pvVar4 == (void *)0x0) {
          lua_pushnil(param_1);
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                     "ccui.Scale9Sprite");
        }
        iVar7 = 1;
        iVar6 = 1;
      }
      if ((local_50 & 1) != 0) {
        operator_delete(local_40);
        iVar6 = iVar7;
      }
      if (iVar6 != 2) goto LAB_00991af0;
    }
LAB_00991b08:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
               "ccui.Scale9Sprite:createWithSpriteFrameName",iVar2 + -1,1);
    uVar5 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

