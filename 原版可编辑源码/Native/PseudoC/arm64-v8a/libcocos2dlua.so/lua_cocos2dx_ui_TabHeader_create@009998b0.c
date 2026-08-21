
/* lua_cocos2dx_ui_TabHeader_create(lua_State*) */

void lua_cocos2dx_ui_TabHeader_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  int iVar6;
  int local_dc;
  ulong local_d8;
  undefined8 local_d0;
  void *local_c8;
  ulong local_c0;
  undefined8 local_b8;
  void *local_b0;
  ulong local_a8;
  undefined8 local_a0;
  void *local_98;
  ulong local_90;
  undefined8 local_88;
  void *local_80;
  ulong local_78;
  undefined8 local_70;
  void *local_68;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
                    /* try { // try from 009998f4 to 00a998fb has its CatchHandler @ 00999910 */
                    /* try { // try from 009998fc to 00a9992f has its CatchHandler @ 009997e4 */
  switch(iVar2 + -1) {
  case 0:
    pvVar4 = (void *)cocos2d::ui::TabHeader::create();
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
      uVar5 = 1;
    }
    else {
                    /* catch() { ... } // from try @ 00999850 with catch @ 00999910
                       catch() { ... } // from try @ 009998f4 with catch @ 00999910 */
                    /* catch() { ... } // from try @ 00999834 with catch @ 00999914
                       catch() { ... } // from try @ 009998a4 with catch @ 00999914 */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "ccui.TabHeader");
      uVar5 = 1;
    }
    goto LAB_00999e1c;
  case 3:
    local_60 = 0;
    local_58 = 0;
    local_50 = (void *)0x0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"ccui.TabHeader:create");
    if ((uVar3 & 1) == 0) {
      iVar6 = 2;
    }
    else {
      local_70 = 0;
      local_68 = (void *)0x0;
      local_78 = 0;
      uVar3 = luaval_to_std_string(param_1,3,(basic_string *)&local_78,"ccui.TabHeader:create");
      if ((uVar3 & 1) == 0) {
        iVar6 = 2;
      }
      else {
        local_88 = 0;
        local_80 = (void *)0x0;
        local_90 = 0;
        uVar3 = luaval_to_std_string(param_1,4,(basic_string *)&local_90,"ccui.TabHeader:create");
        if ((uVar3 & 1) == 0) {
          iVar6 = 2;
        }
        else {
          pvVar4 = (void *)cocos2d::ui::TabHeader::create(&local_60,&local_78,&local_90,0);
          if (pvVar4 == (void *)0x0) {
            lua_pushnil(param_1);
          }
          else {
            toluafix_pushusertype_ccobject
                      (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                       "ccui.TabHeader");
          }
          iVar6 = 1;
        }
        if ((local_90 & 1) != 0) {
          operator_delete(local_80);
        }
      }
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    if (iVar6 != 2) {
LAB_00999e18:
      uVar5 = 1;
      goto LAB_00999e1c;
    }
    break;
  case 4:
    local_60 = 0;
    local_58 = 0;
    local_50 = (void *)0x0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"ccui.TabHeader:create");
    if ((uVar3 & 1) == 0) {
      iVar6 = 4;
    }
    else {
      local_70 = 0;
      local_68 = (void *)0x0;
      local_78 = 0;
      uVar3 = luaval_to_std_string(param_1,3,(basic_string *)&local_78,"ccui.TabHeader:create");
      if ((uVar3 & 1) == 0) {
        iVar6 = 4;
                    /* try { // try from 00999d3c to 00a99d8b has its CatchHandler @ 00999e4c */
      }
      else {
        local_88 = 0;
        local_80 = (void *)0x0;
        local_90 = 0;
        uVar3 = luaval_to_std_string(param_1,4,(basic_string *)&local_90,"ccui.TabHeader:create");
        if (((uVar3 & 1) == 0) ||
           (uVar3 = luaval_to_int32(param_1,5,(int *)&local_a8,"ccui.TabHeader:create"),
           (uVar3 & 1) == 0)) {
          iVar6 = 4;
        }
        else {
          pvVar4 = (void *)cocos2d::ui::TabHeader::create
                                     (&local_60,&local_78,&local_90,local_a8 & 0xffffffff);
          if (pvVar4 == (void *)0x0) {
            lua_pushnil(param_1);
          }
          else {
            toluafix_pushusertype_ccobject
                      (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                       "ccui.TabHeader");
          }
          iVar6 = 1;
        }
        if ((local_90 & 1) != 0) {
          operator_delete(local_80);
        }
      }
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    if (iVar6 != 4) goto LAB_00999e18;
    break;
  case 6:
    local_60 = 0;
    local_58 = 0;
    local_50 = (void *)0x0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"ccui.TabHeader:create");
    if ((uVar3 & 1) == 0) {
      iVar6 = 8;
    }
    else {
      local_70 = 0;
      local_68 = (void *)0x0;
      local_78 = 0;
      uVar3 = luaval_to_std_string(param_1,3,(basic_string *)&local_78,"ccui.TabHeader:create");
      if ((uVar3 & 1) == 0) {
        iVar6 = 8;
      }
      else {
        local_88 = 0;
        local_80 = (void *)0x0;
        local_90 = 0;
                    /* try { // try from 00999af0 to 00a99b63 has its CatchHandler @ 00999af0
                       catch() { ... } // from try @ 00999af0 with catch @ 00999af0
                       catch() { ... } // from try @ 00999b70 with catch @ 00999af0 */
        uVar3 = luaval_to_std_string(param_1,4,(basic_string *)&local_90,"ccui.TabHeader:create");
        if ((uVar3 & 1) == 0) {
          iVar6 = 8;
        }
        else {
          local_a0 = 0;
          local_98 = (void *)0x0;
          local_a8 = 0;
          uVar3 = luaval_to_std_string(param_1,5,(basic_string *)&local_a8,"ccui.TabHeader:create");
          if ((uVar3 & 1) == 0) {
            iVar6 = 8;
          }
          else {
            local_b8 = 0;
            local_b0 = (void *)0x0;
            local_c0 = 0;
            uVar3 = luaval_to_std_string
                              (param_1,6,(basic_string *)&local_c0,"ccui.TabHeader:create");
            if ((uVar3 & 1) == 0) {
              iVar6 = 8;
            }
            else {
              local_d0 = 0;
              local_c8 = (void *)0x0;
              local_d8 = 0;
                    /* try { // try from 00999b64 to 00a99b6f has its CatchHandler @ 00999be0 */
              uVar3 = luaval_to_std_string
                                (param_1,7,(basic_string *)&local_d8,"ccui.TabHeader:create");
              if ((uVar3 & 1) == 0) {
                iVar6 = 8;
              }
              else {
                    /* try { // try from 00999b70 to 00a99bf3 has its CatchHandler @ 00999af0 */
                pvVar4 = (void *)cocos2d::ui::TabHeader::create
                                           (&local_60,&local_78,&local_90,&local_a8,&local_c0,
                                            &local_d8,0);
                if (pvVar4 == (void *)0x0) {
                    /* try { // try from 00999fb4 to 00a99fbb has its CatchHandler @ 00999fd0 */
                  lua_pushnil(param_1);
                }
                else {
                  toluafix_pushusertype_ccobject
                            (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),
                             pvVar4,"ccui.TabHeader");
                }
                    /* try { // try from 00999fbc to 00a99fef has its CatchHandler @ 00999ea4 */
                iVar6 = 1;
              }
              if ((local_d8 & 1) != 0) {
                operator_delete(local_c8);
              }
            }
                    /* try { // try from 00999ea4 to 00a99ef3 has its CatchHandler @ 00999ea4
                       catch() { ... } // from try @ 00999ea4 with catch @ 00999ea4
                       catch() { ... } // from try @ 00999f3c with catch @ 00999ea4
                       catch() { ... } // from try @ 00999fbc with catch @ 00999ea4 */
            if ((local_c0 & 1) != 0) {
                    /* try { // try from 00999f64 to 00a99f77 has its CatchHandler @ 00999fd4 */
              operator_delete(local_b0);
            }
          }
          if ((local_a8 & 1) != 0) {
            operator_delete(local_98);
          }
        }
                    /* catch() { ... } // from try @ 00999d3c with catch @ 00999e4c
                       catch() { ... } // from try @ 00999dbc with catch @ 00999e4c */
        if ((local_90 & 1) != 0) {
          operator_delete(local_80);
        }
      }
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    if (iVar6 != 8) goto LAB_00999e18;
    break;
  case 7:
    local_60 = 0;
    local_58 = 0;
    local_50 = (void *)0x0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"ccui.TabHeader:create");
    if ((uVar3 & 1) == 0) {
      iVar6 = 10;
    }
    else {
      local_70 = 0;
      local_68 = (void *)0x0;
      local_78 = 0;
                    /* catch() { ... } // from try @ 00999b64 with catch @ 00999be0 */
      uVar3 = luaval_to_std_string(param_1,3,(basic_string *)&local_78,"ccui.TabHeader:create");
      if ((uVar3 & 1) == 0) {
        iVar6 = 10;
      }
      else {
        local_88 = 0;
        local_80 = (void *)0x0;
        local_90 = 0;
        uVar3 = luaval_to_std_string(param_1,4,(basic_string *)&local_90,"ccui.TabHeader:create");
        if ((uVar3 & 1) == 0) {
          iVar6 = 10;
        }
        else {
          local_a0 = 0;
          local_98 = (void *)0x0;
          local_a8 = 0;
          uVar3 = luaval_to_std_string(param_1,5,(basic_string *)&local_a8,"ccui.TabHeader:create");
          if ((uVar3 & 1) == 0) {
            iVar6 = 10;
          }
          else {
            local_b8 = 0;
            local_b0 = (void *)0x0;
            local_c0 = 0;
            uVar3 = luaval_to_std_string
                              (param_1,6,(basic_string *)&local_c0,"ccui.TabHeader:create");
            if ((uVar3 & 1) == 0) {
              iVar6 = 10;
            }
            else {
              local_d0 = 0;
              local_c8 = (void *)0x0;
              local_d8 = 0;
              uVar3 = luaval_to_std_string
                                (param_1,7,(basic_string *)&local_d8,"ccui.TabHeader:create");
              if (((uVar3 & 1) == 0) ||
                 (uVar3 = luaval_to_int32(param_1,8,&local_dc,"ccui.TabHeader:create"),
                 (uVar3 & 1) == 0)) {
                iVar6 = 10;
              }
              else {
                pvVar4 = (void *)cocos2d::ui::TabHeader::create
                                           (&local_60,&local_78,&local_90,&local_a8,&local_c0,
                                            &local_d8,local_dc);
                if (pvVar4 == (void *)0x0) {
                    /* catch() { ... } // from try @ 00999f10 with catch @ 00999fd0
                       catch() { ... } // from try @ 00999fb4 with catch @ 00999fd0 */
                  lua_pushnil(param_1);
                }
                else {
                  toluafix_pushusertype_ccobject
                            (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),
                             pvVar4,"ccui.TabHeader");
                    /* try { // try from 00999ce4 to 00a99d3b has its CatchHandler @ 00999ce4
                       catch() { ... } // from try @ 00999ce4 with catch @ 00999ce4
                       catch() { ... } // from try @ 00999d8c with catch @ 00999ce4
                       catch() { ... } // from try @ 00999dd0 with catch @ 00999ce4 */
                }
                    /* catch() { ... } // from try @ 00999ef4 with catch @ 00999fd4
                       catch() { ... } // from try @ 00999f64 with catch @ 00999fd4 */
                iVar6 = 1;
              }
              if ((local_d8 & 1) != 0) {
                operator_delete(local_c8);
              }
            }
            if ((local_c0 & 1) != 0) {
                    /* try { // try from 00999ef4 to 00a99f0b has its CatchHandler @ 00999fd4 */
              operator_delete(local_b0);
            }
          }
          if ((local_a8 & 1) != 0) {
            operator_delete(local_98);
          }
        }
        if ((local_90 & 1) != 0) {
                    /* try { // try from 00999f10 to 00a99f3b has its CatchHandler @ 00999fd0 */
          operator_delete(local_80);
        }
      }
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
                    /* try { // try from 00999f3c to 00a99f63 has its CatchHandler @ 00999ea4 */
    if (iVar6 != 10) goto LAB_00999e18;
  }
                    /* try { // try from 00999dbc to 00a99dcf has its CatchHandler @ 00999e4c */
                    /* try { // try from 00999dd0 to 00a99ea3 has its CatchHandler @ 00999ce4 */
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
             "ccui.TabHeader:create",iVar2 + -1,6);
  uVar5 = 0;
LAB_00999e1c:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

