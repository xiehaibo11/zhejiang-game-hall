
/* lua_cocos2dx_ui_CheckBox_create(lua_State*) */

void lua_cocos2dx_ui_CheckBox_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  int iVar6;
  int local_b4;
  ulong local_b0;
  undefined8 local_a8;
  void *local_a0;
  ulong local_98;
  undefined8 local_90;
  void *local_88;
  ulong local_80;
  undefined8 local_78;
  void *local_70;
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
    pvVar4 = (void *)cocos2d::ui::CheckBox::create();
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
                    /* try { // try from 009712c0 to 00a7147f has its CatchHandler @ 009712c0
                       catch() { ... } // from try @ 009712c0 with catch @ 009712c0
                       catch() { ... } // from try @ 00971500 with catch @ 009712c0 */
      uVar5 = 1;
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "ccui.CheckBox");
      uVar5 = 1;
    }
    goto LAB_0097134c;
  case 2:
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
                    /* try { // try from 0097100c to 00a71023 has its CatchHandler @ 009710e4 */
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.CheckBox:create");
    if ((uVar3 & 1) == 0) {
      iVar6 = 8;
    }
    else {
      local_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
                    /* try { // try from 00971028 to 00a7104f has its CatchHandler @ 009710e0 */
      uVar3 = luaval_to_std_string(param_1,3,(basic_string *)&local_68,"ccui.CheckBox:create");
      if ((uVar3 & 1) == 0) {
        iVar6 = 8;
      }
      else {
        pvVar4 = (void *)cocos2d::ui::CheckBox::create(&local_50,&local_68,0);
                    /* try { // try from 00971050 to 00a71077 has its CatchHandler @ 00970fd4 */
        if (pvVar4 == (void *)0x0) {
          lua_pushnil(param_1);
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                     "ccui.CheckBox");
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
    if (iVar6 != 8) {
LAB_00971348:
      uVar5 = 1;
      goto LAB_0097134c;
    }
    break;
  case 3:
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.CheckBox:create");
    if ((uVar3 & 1) == 0) {
      iVar6 = 10;
    }
    else {
      local_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
      uVar3 = luaval_to_std_string(param_1,3,(basic_string *)&local_68,"ccui.CheckBox:create");
      if (((uVar3 & 1) == 0) ||
         (uVar3 = luaval_to_int32(param_1,4,(int *)&local_80,"ccui.CheckBox:create"),
         (uVar3 & 1) == 0)) {
        iVar6 = 10;
      }
      else {
        pvVar4 = (void *)cocos2d::ui::CheckBox::create(&local_50,&local_68,local_80 & 0xffffffff);
                    /* try { // try from 00970fd4 to 00a7100b has its CatchHandler @ 00970fd4
                       catch() { ... } // from try @ 00970fd4 with catch @ 00970fd4
                       catch() { ... } // from try @ 00971050 with catch @ 00970fd4
                       catch() { ... } // from try @ 009710cc with catch @ 00970fd4 */
        if (pvVar4 == (void *)0x0) {
          lua_pushnil(param_1);
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                     "ccui.CheckBox");
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
    if (iVar6 != 10) goto LAB_00971348;
    break;
  case 5:
    local_48 = 0;
    local_40 = (void *)0x0;
                    /* try { // try from 00971078 to 00a7108b has its CatchHandler @ 009710e4 */
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.CheckBox:create");
    if ((uVar3 & 1) == 0) {
      iVar6 = 2;
    }
    else {
      local_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
      uVar3 = luaval_to_std_string(param_1,3,(basic_string *)&local_68,"ccui.CheckBox:create");
      if ((uVar3 & 1) == 0) {
        iVar6 = 2;
      }
      else {
        local_78 = 0;
        local_70 = (void *)0x0;
        local_80 = 0;
                    /* try { // try from 009710c4 to 00a710cb has its CatchHandler @ 009710e0 */
                    /* try { // try from 009710cc to 00a710ff has its CatchHandler @ 00970fd4 */
        uVar3 = luaval_to_std_string(param_1,4,(basic_string *)&local_80,"ccui.CheckBox:create");
        if ((uVar3 & 1) == 0) {
          iVar6 = 2;
        }
        else {
                    /* catch() { ... } // from try @ 00971028 with catch @ 009710e0
                       catch() { ... } // from try @ 009710c4 with catch @ 009710e0 */
          local_90 = 0;
          local_88 = (void *)0x0;
                    /* catch() { ... } // from try @ 0097100c with catch @ 009710e4
                       catch() { ... } // from try @ 00971078 with catch @ 009710e4 */
          local_98 = 0;
          uVar3 = luaval_to_std_string(param_1,5,(basic_string *)&local_98,"ccui.CheckBox:create");
          if ((uVar3 & 1) == 0) {
            iVar6 = 2;
          }
          else {
            local_a8 = 0;
            local_a0 = (void *)0x0;
            local_b0 = 0;
            uVar3 = luaval_to_std_string(param_1,6,(basic_string *)&local_b0,"ccui.CheckBox:create")
            ;
            if ((uVar3 & 1) == 0) {
              iVar6 = 2;
            }
            else {
              pvVar4 = (void *)cocos2d::ui::CheckBox::create
                                         (&local_50,&local_68,&local_80,&local_98,&local_b0,0);
              if (pvVar4 == (void *)0x0) {
                lua_pushnil(param_1);
              }
              else {
                toluafix_pushusertype_ccobject
                          (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                           "ccui.CheckBox");
              }
              iVar6 = 1;
                    /* try { // try from 009714cc to 00a714ff has its CatchHandler @ 00971550 */
            }
            if ((local_b0 & 1) != 0) {
              operator_delete(local_a0);
            }
          }
          if ((local_98 & 1) != 0) {
                    /* try { // try from 00971480 to 00a714b3 has its CatchHandler @ 00971580 */
            operator_delete(local_88);
          }
        }
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
      }
      if ((local_68 & 1) != 0) {
        operator_delete(local_58);
      }
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
                    /* try { // try from 009714b4 to 00a714c7 has its CatchHandler @ 0097154c */
    if (iVar6 != 2) goto LAB_00971348;
    break;
  case 6:
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.CheckBox:create");
    if ((uVar3 & 1) == 0) {
      iVar6 = 4;
    }
    else {
      local_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
      uVar3 = luaval_to_std_string(param_1,3,(basic_string *)&local_68,"ccui.CheckBox:create");
      if ((uVar3 & 1) == 0) {
        iVar6 = 4;
      }
      else {
        local_78 = 0;
        local_70 = (void *)0x0;
        local_80 = 0;
        uVar3 = luaval_to_std_string(param_1,4,(basic_string *)&local_80,"ccui.CheckBox:create");
        if ((uVar3 & 1) == 0) {
          iVar6 = 4;
        }
        else {
          local_90 = 0;
          local_88 = (void *)0x0;
          local_98 = 0;
          uVar3 = luaval_to_std_string(param_1,5,(basic_string *)&local_98,"ccui.CheckBox:create");
          if ((uVar3 & 1) == 0) {
            iVar6 = 4;
          }
          else {
            local_a8 = 0;
            local_a0 = (void *)0x0;
            local_b0 = 0;
            uVar3 = luaval_to_std_string(param_1,6,(basic_string *)&local_b0,"ccui.CheckBox:create")
            ;
            if (((uVar3 & 1) == 0) ||
               (uVar3 = luaval_to_int32(param_1,7,&local_b4,"ccui.CheckBox:create"),
               (uVar3 & 1) == 0)) {
              iVar6 = 4;
            }
            else {
              pvVar4 = (void *)cocos2d::ui::CheckBox::create
                                         (&local_50,&local_68,&local_80,&local_98,&local_b0,local_b4
                                         );
              if (pvVar4 == (void *)0x0) {
                lua_pushnil(param_1);
              }
              else {
                toluafix_pushusertype_ccobject
                          (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                           "ccui.CheckBox");
              }
              iVar6 = 1;
            }
            if ((local_b0 & 1) != 0) {
              operator_delete(local_a0);
            }
          }
          if ((local_98 & 1) != 0) {
            operator_delete(local_88);
          }
        }
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
      }
      if ((local_68 & 1) != 0) {
        operator_delete(local_58);
      }
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    if (iVar6 != 4) goto LAB_00971348;
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d","ccui.CheckBox:create"
             ,iVar2 + -1,2);
  uVar5 = 0;
LAB_0097134c:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

