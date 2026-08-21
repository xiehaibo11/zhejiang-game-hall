
undefined4 FUN_008a29b8(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 uVar6;
  ulong local_b0;
  undefined8 local_a8;
  void *local_a0;
  ulong local_98;
  undefined8 local_90;
  void *local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  Size aSStack_70 [8];
  undefined2 local_68;
  undefined1 local_66;
  undefined2 local_65;
  Size aSStack_60 [8];
  undefined8 local_58;
  undefined1 local_50;
  undefined2 local_4f;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 2) {
    local_a8 = 0;
    local_a0 = (void *)0x0;
    local_b0 = 0;
    local_90 = 0;
    local_88 = (void *)0x0;
    local_98 = 0;
    local_80 = 0;
    local_74 = 0;
    local_7c = 1;
    cocos2d::Size::Size(aSStack_70,(Size *)&cocos2d::Size::ZERO);
    local_65 = 0xff;
    local_68 = cocos2d::Color3B::WHITE;
    local_66 = DAT_01792432;
    cocos2d::Size::Size(aSStack_60);
    local_50 = 0;
    local_58 = 0;
    local_4c = 0xff;
    local_48 = 0;
    local_4f = cocos2d::Color3B::BLACK;
    local_4d = DAT_01792444;
    local_44 = 1;
    local_40 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_b0,"cc.LabelTTF:createWithFontDefinition");
    uVar4 = luaval_to_fontdefinition
                      (param_1,3,(FontDefinition *)&local_98,"cc.LabelTTF:createWithFontDefinition")
    ;
    if ((uVar3 & uVar4 & 1) == 0) {
      uVar6 = 0;
    }
    else {
      pvVar5 = (void *)cocos2d::LabelTTF::createWithFontDefinition
                                 ((basic_string *)&local_b0,(FontDefinition *)&local_98);
      if (pvVar5 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                   "cc.LabelTTF");
      }
      uVar6 = 1;
    }
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.LabelTTF:createWithFontDefinition",iVar2 + -1,2);
    uVar6 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

