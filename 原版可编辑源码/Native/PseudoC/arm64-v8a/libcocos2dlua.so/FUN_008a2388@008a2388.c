
void FUN_008a2388(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  int iVar6;
  int local_80;
  int local_7c;
  Size aSStack_78 [8];
  double local_70;
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
  switch(iVar2 + -1) {
  case 0:
    pvVar4 = (void *)cocos2d::LabelTTF::create();
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
      uVar5 = 1;
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "cc.LabelTTF");
      uVar5 = 1;
    }
    goto LAB_008a2894;
  case 3:
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.LabelTTF:create");
    if ((uVar3 & 1) == 0) {
      iVar6 = 4;
    }
    else {
      local_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
      uVar3 = luaval_to_std_string(param_1,3,(basic_string *)&local_68,"cc.LabelTTF:create");
      if (((uVar3 & 1) == 0) ||
         (uVar3 = luaval_to_number(param_1,4,&local_70,"cc.LabelTTF:create"), (uVar3 & 1) == 0)) {
        iVar6 = 4;
      }
      else {
        pvVar4 = (void *)cocos2d::LabelTTF::create
                                   ((float)local_70,&local_50,&local_68,&cocos2d::Size::ZERO,1,0);
        if (pvVar4 == (void *)0x0) {
          lua_pushnil(param_1);
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                     "cc.LabelTTF");
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
    if (iVar6 != 4) {
LAB_008a282c:
      uVar5 = 1;
      goto LAB_008a2894;
    }
    break;
  case 4:
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.LabelTTF:create");
    if ((uVar3 & 1) == 0) {
      iVar6 = 6;
    }
    else {
      local_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
      uVar3 = luaval_to_std_string(param_1,3,(basic_string *)&local_68,"cc.LabelTTF:create");
      if (((uVar3 & 1) == 0) ||
         (uVar3 = luaval_to_number(param_1,4,&local_70,"cc.LabelTTF:create"), (uVar3 & 1) == 0)) {
LAB_008a2800:
        iVar6 = 6;
      }
      else {
        cocos2d::Size::Size(aSStack_78);
        uVar3 = luaval_to_size(param_1,5,aSStack_78,"cc.LabelTTF:create");
        if ((uVar3 & 1) == 0) goto LAB_008a2800;
        pvVar4 = (void *)cocos2d::LabelTTF::create
                                   ((float)local_70,&local_50,&local_68,aSStack_78,1,0);
        if (pvVar4 == (void *)0x0) {
          lua_pushnil(param_1);
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                     "cc.LabelTTF");
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
    if (iVar6 != 6) goto LAB_008a282c;
    break;
  case 5:
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.LabelTTF:create");
    if ((uVar3 & 1) == 0) {
      iVar6 = 8;
    }
    else {
      local_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
      uVar3 = luaval_to_std_string(param_1,3,(basic_string *)&local_68,"cc.LabelTTF:create");
      if (((uVar3 & 1) == 0) ||
         (uVar3 = luaval_to_number(param_1,4,&local_70,"cc.LabelTTF:create"), (uVar3 & 1) == 0)) {
LAB_008a27d0:
        iVar6 = 8;
      }
      else {
        cocos2d::Size::Size(aSStack_78);
        uVar3 = luaval_to_size(param_1,5,aSStack_78,"cc.LabelTTF:create");
        if (((uVar3 & 1) == 0) ||
           (uVar3 = luaval_to_int32(param_1,6,&local_7c,"cc.LabelTTF:create"), (uVar3 & 1) == 0))
        goto LAB_008a27d0;
        pvVar4 = (void *)cocos2d::LabelTTF::create
                                   ((float)local_70,&local_50,&local_68,aSStack_78,local_7c,0);
        if (pvVar4 == (void *)0x0) {
          lua_pushnil(param_1);
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                     "cc.LabelTTF");
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
    if (iVar6 != 8) goto LAB_008a282c;
    break;
  case 6:
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.LabelTTF:create");
    if ((uVar3 & 1) == 0) {
      iVar6 = 10;
    }
    else {
      local_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
      uVar3 = luaval_to_std_string(param_1,3,(basic_string *)&local_68,"cc.LabelTTF:create");
      if (((uVar3 & 1) == 0) ||
         (uVar3 = luaval_to_number(param_1,4,&local_70,"cc.LabelTTF:create"), (uVar3 & 1) == 0)) {
LAB_008a27a0:
        iVar6 = 10;
      }
      else {
        cocos2d::Size::Size(aSStack_78);
        uVar3 = luaval_to_size(param_1,5,aSStack_78,"cc.LabelTTF:create");
        if (((uVar3 & 1) == 0) ||
           ((uVar3 = luaval_to_int32(param_1,6,&local_7c,"cc.LabelTTF:create"), (uVar3 & 1) == 0 ||
            (uVar3 = luaval_to_int32(param_1,7,&local_80,"cc.LabelTTF:create"), (uVar3 & 1) == 0))))
        goto LAB_008a27a0;
        pvVar4 = (void *)cocos2d::LabelTTF::create
                                   ((float)local_70,&local_50,&local_68,aSStack_78,local_7c,local_80
                                   );
        if (pvVar4 == (void *)0x0) {
          lua_pushnil(param_1);
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                     "cc.LabelTTF");
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
    if (iVar6 != 10) goto LAB_008a282c;
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d","cc.LabelTTF:create",
             iVar2 + -1,3);
  uVar5 = 0;
LAB_008a2894:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

