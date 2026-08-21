
/* lua_cocos2dx_ui_Button_create(lua_State*) */

void lua_cocos2dx_ui_Button_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  int iVar6;
  int local_84;
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
                    /* try { // try from 0096e43c to 00a6e48b has its CatchHandler @ 0096e43c
                       catch() { ... } // from try @ 0096e43c with catch @ 0096e43c
                       catch() { ... } // from try @ 0096e4d4 with catch @ 0096e43c
                       catch() { ... } // from try @ 0096e554 with catch @ 0096e43c */
  switch(iVar2 + -1) {
  case 0:
    pvVar4 = (void *)cocos2d::ui::Button::create();
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "ccui.Button");
    }
    break;
  case 1:
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.Button:create");
    if ((uVar3 & 1) == 0) {
      if ((local_50 & 1) != 0) {
        operator_delete(local_40);
      }
      goto switchD_0096e45c_default;
    }
                    /* try { // try from 0096e6b8 to 00a6e6bb has its CatchHandler @ 0096e6f0 */
                    /* try { // try from 0096e6bc to 00a6e703 has its CatchHandler @ 0096e66c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_68,"");
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_80,"");
    pvVar4 = (void *)cocos2d::ui::Button::create(&local_50,&local_68,&local_80,0);
                    /* catch() { ... } // from try @ 0096e6b8 with catch @ 0096e6f0 */
    if ((local_80 & 1) == 0) {
      if ((local_68 & 1) != 0) goto LAB_0096e7e0;
LAB_0096e6fc:
      if (pvVar4 == (void *)0x0) goto LAB_0096e7ec;
LAB_0096e700:
                    /* try { // try from 0096e704 to 00a6e84b has its CatchHandler @ 0096e704
                       catch() { ... } // from try @ 0096e704 with catch @ 0096e704
                       catch() { ... } // from try @ 0096e8cc with catch @ 0096e704 */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "ccui.Button");
    }
    else {
      operator_delete(local_70);
      if ((local_68 & 1) == 0) goto LAB_0096e6fc;
LAB_0096e7e0:
      operator_delete(local_58);
      if (pvVar4 != (void *)0x0) goto LAB_0096e700;
LAB_0096e7ec:
      lua_pushnil(param_1);
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    break;
  case 2:
    local_48 = 0;
    local_40 = (void *)0x0;
                    /* try { // try from 0096e54c to 00a6e553 has its CatchHandler @ 0096e568 */
    local_50 = 0;
                    /* try { // try from 0096e554 to 00a6e587 has its CatchHandler @ 0096e43c */
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.Button:create");
                    /* catch() { ... } // from try @ 0096e4a8 with catch @ 0096e568
                       catch() { ... } // from try @ 0096e54c with catch @ 0096e568 */
    if ((uVar3 & 1) == 0) {
      iVar6 = 4;
    }
    else {
                    /* catch() { ... } // from try @ 0096e48c with catch @ 0096e56c
                       catch() { ... } // from try @ 0096e4fc with catch @ 0096e56c */
      local_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
      uVar3 = luaval_to_std_string(param_1,3,(basic_string *)&local_68,"ccui.Button:create");
      if ((uVar3 & 1) == 0) {
        iVar6 = 4;
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_80,"");
        pvVar4 = (void *)cocos2d::ui::Button::create(&local_50,&local_68,&local_80,0);
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
        if (pvVar4 == (void *)0x0) {
          lua_pushnil(param_1);
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                     "ccui.Button");
        }
        iVar6 = 1;
                    /* try { // try from 0096e8cc to 00a6e967 has its CatchHandler @ 0096e704 */
      }
      if ((local_68 & 1) != 0) {
        operator_delete(local_58);
      }
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    if (iVar6 == 4) goto switchD_0096e45c_default;
    break;
  case 3:
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.Button:create");
    if ((uVar3 & 1) == 0) {
      iVar6 = 6;
    }
    else {
      local_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
      uVar3 = luaval_to_std_string(param_1,3,(basic_string *)&local_68,"ccui.Button:create");
      if ((uVar3 & 1) == 0) {
        iVar6 = 6;
      }
      else {
        local_78 = 0;
        local_70 = (void *)0x0;
        local_80 = 0;
        uVar3 = luaval_to_std_string(param_1,4,(basic_string *)&local_80,"ccui.Button:create");
        if ((uVar3 & 1) == 0) {
          iVar6 = 6;
        }
        else {
          pvVar4 = (void *)cocos2d::ui::Button::create(&local_50,&local_68,&local_80,0);
                    /* try { // try from 0096e66c to 00a6e6b7 has its CatchHandler @ 0096e66c
                       catch() { ... } // from try @ 0096e66c with catch @ 0096e66c
                       catch() { ... } // from try @ 0096e6bc with catch @ 0096e66c */
          if (pvVar4 == (void *)0x0) {
            lua_pushnil(param_1);
          }
          else {
            toluafix_pushusertype_ccobject
                      (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                       "ccui.Button");
          }
          iVar6 = 1;
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
    if (iVar6 == 6) goto switchD_0096e45c_default;
    break;
  case 4:
    local_48 = 0;
    local_40 = (void *)0x0;
                    /* try { // try from 0096e48c to 00a6e4a3 has its CatchHandler @ 0096e56c */
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.Button:create");
                    /* try { // try from 0096e4a8 to 00a6e4d3 has its CatchHandler @ 0096e568 */
    if ((uVar3 & 1) == 0) {
      iVar6 = 8;
    }
    else {
      local_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
      uVar3 = luaval_to_std_string(param_1,3,(basic_string *)&local_68,"ccui.Button:create");
      if ((uVar3 & 1) == 0) {
        iVar6 = 8;
      }
      else {
        local_78 = 0;
        local_70 = (void *)0x0;
                    /* try { // try from 0096e4d4 to 00a6e4fb has its CatchHandler @ 0096e43c */
        local_80 = 0;
        uVar3 = luaval_to_std_string(param_1,4,(basic_string *)&local_80,"ccui.Button:create");
                    /* try { // try from 0096e4fc to 00a6e50f has its CatchHandler @ 0096e56c */
        if (((uVar3 & 1) == 0) ||
           (uVar3 = luaval_to_int32(param_1,5,&local_84,"ccui.Button:create"), (uVar3 & 1) == 0)) {
          iVar6 = 8;
        }
        else {
          pvVar4 = (void *)cocos2d::ui::Button::create(&local_50,&local_68,&local_80,local_84);
          if (pvVar4 == (void *)0x0) {
            lua_pushnil(param_1);
          }
          else {
            toluafix_pushusertype_ccobject
                      (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                       "ccui.Button");
          }
          iVar6 = 1;
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
    if (iVar6 == 8) goto switchD_0096e45c_default;
    break;
  default:
switchD_0096e45c_default:
                    /* try { // try from 0096e84c to 00a6e87f has its CatchHandler @ 0096e94c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d","ccui.Button:create"
               ,iVar2 + -1,0);
    uVar5 = 0;
    goto LAB_0096e89c;
  }
                    /* try { // try from 0096e898 to 00a6e8cb has its CatchHandler @ 0096e91c */
  uVar5 = 1;
LAB_0096e89c:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

