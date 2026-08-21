
/* lua_cocos2dx_ui_RadioButton_create(lua_State*) */

void lua_cocos2dx_ui_RadioButton_create(lua_State *param_1)

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
    pvVar4 = (void *)cocos2d::ui::RadioButton::create();
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
      uVar5 = 1;
    }
    else {
                    /* try { // try from 00971a80 to 00a71a87 has its CatchHandler @ 00971ac4 */
                    /* try { // try from 00971a88 to 00a71adf has its CatchHandler @ 009719ec */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "ccui.RadioButton");
      uVar5 = 1;
    }
    goto LAB_00971e90;
  case 2:
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.RadioButton:create");
    if ((uVar3 & 1) == 0) {
      iVar6 = 8;
    }
    else {
      local_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
      uVar3 = luaval_to_std_string(param_1,3,(basic_string *)&local_68,"ccui.RadioButton:create");
                    /* try { // try from 00971b80 to 00a71b97 has its CatchHandler @ 00971ce4 */
      if ((uVar3 & 1) == 0) {
        iVar6 = 8;
      }
      else {
        pvVar4 = (void *)cocos2d::ui::RadioButton::create(&local_50,&local_68,0);
        if (pvVar4 == (void *)0x0) {
                    /* try { // try from 00971ef8 to 00a71f0b has its CatchHandler @ 00971f68 */
          lua_pushnil(param_1);
        }
        else {
                    /* try { // try from 00971b9c to 00a71bcb has its CatchHandler @ 00971ce0 */
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                     "ccui.RadioButton");
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
                    /* try { // try from 00971e88 to 00a71e9f has its CatchHandler @ 00971f68 */
    if (iVar6 != 8) {
LAB_00971e8c:
      uVar5 = 1;
      goto LAB_00971e90;
    }
    break;
  case 3:
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.RadioButton:create");
                    /* catch() { ... } // from try @ 00971a80 with catch @ 00971ac4 */
    if ((uVar3 & 1) == 0) {
      iVar6 = 10;
    }
    else {
      local_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
                    /* try { // try from 00971ae0 to 00a71b7f has its CatchHandler @ 00971ae0
                       catch() { ... } // from try @ 00971ae0 with catch @ 00971ae0
                       catch() { ... } // from try @ 00971c50 with catch @ 00971ae0
                       catch() { ... } // from try @ 00971ccc with catch @ 00971ae0 */
      uVar3 = luaval_to_std_string(param_1,3,(basic_string *)&local_68,"ccui.RadioButton:create");
      if (((uVar3 & 1) == 0) ||
         (uVar3 = luaval_to_int32(param_1,4,(int *)&local_80,"ccui.RadioButton:create"),
         (uVar3 & 1) == 0)) {
        iVar6 = 10;
      }
      else {
        pvVar4 = (void *)cocos2d::ui::RadioButton::create(&local_50,&local_68,local_80 & 0xffffffff)
        ;
        if (pvVar4 == (void *)0x0) {
          lua_pushnil(param_1);
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                     "ccui.RadioButton");
        }
        iVar6 = 1;
      }
      if ((local_68 & 1) != 0) {
                    /* catch() { ... } // from try @ 00971d58 with catch @ 00971e1c
                       catch() { ... } // from try @ 00971dc8 with catch @ 00971e1c */
        operator_delete(local_58);
      }
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    if (iVar6 != 10) goto LAB_00971e8c;
    break;
  case 5:
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.RadioButton:create");
                    /* try { // try from 00971bd8 to 00a71bef has its CatchHandler @ 00971cec */
    if ((uVar3 & 1) == 0) {
                    /* try { // try from 00971ddc to 00a71e37 has its CatchHandler @ 00971d08 */
      iVar6 = 2;
    }
    else {
      local_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
                    /* try { // try from 00971bf4 to 00a71c4f has its CatchHandler @ 00971ce8 */
      uVar3 = luaval_to_std_string(param_1,3,(basic_string *)&local_68,"ccui.RadioButton:create");
      if ((uVar3 & 1) == 0) {
        iVar6 = 2;
      }
      else {
        local_78 = 0;
        local_70 = (void *)0x0;
        local_80 = 0;
        uVar3 = luaval_to_std_string(param_1,4,(basic_string *)&local_80,"ccui.RadioButton:create");
        if ((uVar3 & 1) == 0) {
          iVar6 = 2;
        }
        else {
          local_90 = 0;
          local_88 = (void *)0x0;
          local_98 = 0;
          uVar3 = luaval_to_std_string
                            (param_1,5,(basic_string *)&local_98,"ccui.RadioButton:create");
          if ((uVar3 & 1) == 0) {
            iVar6 = 2;
          }
          else {
            local_a8 = 0;
            local_a0 = (void *)0x0;
            local_b0 = 0;
                    /* try { // try from 00971c50 to 00a71cc3 has its CatchHandler @ 00971ae0 */
            uVar3 = luaval_to_std_string
                              (param_1,6,(basic_string *)&local_b0,"ccui.RadioButton:create");
            if ((uVar3 & 1) == 0) {
              iVar6 = 2;
            }
            else {
              pvVar4 = (void *)cocos2d::ui::RadioButton::create
                                         (&local_50,&local_68,&local_80,&local_98,&local_b0,0);
              if (pvVar4 == (void *)0x0) {
                lua_pushnil(param_1);
              }
              else {
                toluafix_pushusertype_ccobject
                          (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                           "ccui.RadioButton");
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
    if (iVar6 != 2) goto LAB_00971e8c;
    break;
  case 6:
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
                    /* try { // try from 00971cc4 to 00a71ccb has its CatchHandler @ 00971ce0 */
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.RadioButton:create");
                    /* try { // try from 00971ccc to 00a71d07 has its CatchHandler @ 00971ae0 */
    if ((uVar3 & 1) == 0) {
      iVar6 = 4;
    }
    else {
      local_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
                    /* catch() { ... } // from try @ 00971b9c with catch @ 00971ce0
                       catch() { ... } // from try @ 00971cc4 with catch @ 00971ce0 */
                    /* catch() { ... } // from try @ 00971b80 with catch @ 00971ce4 */
                    /* catch() { ... } // from try @ 00971bf4 with catch @ 00971ce8 */
                    /* catch() { ... } // from try @ 00971bd8 with catch @ 00971cec */
      uVar3 = luaval_to_std_string(param_1,3,(basic_string *)&local_68,"ccui.RadioButton:create");
      if ((uVar3 & 1) == 0) {
        iVar6 = 4;
      }
      else {
        local_78 = 0;
        local_70 = (void *)0x0;
        local_80 = 0;
                    /* try { // try from 00971d08 to 00a71d57 has its CatchHandler @ 00971d08
                       catch() { ... } // from try @ 00971d08 with catch @ 00971d08
                       catch() { ... } // from try @ 00971d98 with catch @ 00971d08
                       catch() { ... } // from try @ 00971ddc with catch @ 00971d08 */
        uVar3 = luaval_to_std_string(param_1,4,(basic_string *)&local_80,"ccui.RadioButton:create");
        if ((uVar3 & 1) == 0) {
          iVar6 = 4;
        }
        else {
          local_90 = 0;
          local_88 = (void *)0x0;
          local_98 = 0;
          uVar3 = luaval_to_std_string
                            (param_1,5,(basic_string *)&local_98,"ccui.RadioButton:create");
          if ((uVar3 & 1) == 0) {
            iVar6 = 4;
          }
          else {
            local_a8 = 0;
            local_a0 = (void *)0x0;
            local_b0 = 0;
                    /* try { // try from 00971d58 to 00a71d97 has its CatchHandler @ 00971e1c */
            uVar3 = luaval_to_std_string
                              (param_1,6,(basic_string *)&local_b0,"ccui.RadioButton:create");
            if (((uVar3 & 1) == 0) ||
               (uVar3 = luaval_to_int32(param_1,7,&local_b4,"ccui.RadioButton:create"),
               (uVar3 & 1) == 0)) {
              iVar6 = 4;
                    /* try { // try from 00971f48 to 00a71f4f has its CatchHandler @ 00971f64 */
            }
            else {
              pvVar4 = (void *)cocos2d::ui::RadioButton::create
                                         (&local_50,&local_68,&local_80,&local_98,&local_b0,local_b4
                                         );
                    /* try { // try from 00971d98 to 00a71dc7 has its CatchHandler @ 00971d08 */
              if (pvVar4 == (void *)0x0) {
                lua_pushnil(param_1);
              }
              else {
                toluafix_pushusertype_ccobject
                          (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                           "ccui.RadioButton");
              }
              iVar6 = 1;
            }
            if ((local_b0 & 1) != 0) {
                    /* try { // try from 00971f50 to 00a71f83 has its CatchHandler @ 00971e38 */
              operator_delete(local_a0);
            }
          }
          if ((local_98 & 1) != 0) {
                    /* catch() { ... } // from try @ 00971ea4 with catch @ 00971f64
                       catch() { ... } // from try @ 00971f48 with catch @ 00971f64 */
            operator_delete(local_88);
          }
        }
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
      }
      if ((local_68 & 1) != 0) {
                    /* try { // try from 00971f84 to 00a7203b has its CatchHandler @ 00971f84
                       catch() { ... } // from try @ 00971f84 with catch @ 00971f84
                       catch() { ... } // from try @ 00972044 with catch @ 00971f84 */
        operator_delete(local_58);
      }
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    if (iVar6 != 4) goto LAB_00971e8c;
  }
                    /* try { // try from 00971e38 to 00a71e87 has its CatchHandler @ 00971e38
                       catch() { ... } // from try @ 00971e38 with catch @ 00971e38
                       catch() { ... } // from try @ 00971ed0 with catch @ 00971e38
                       catch() { ... } // from try @ 00971f50 with catch @ 00971e38 */
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
             "ccui.RadioButton:create",iVar2 + -1,2);
  uVar5 = 0;
LAB_00971e90:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
                    /* try { // try from 00971ea4 to 00a71ecf has its CatchHandler @ 00971f64 */
  return;
}

