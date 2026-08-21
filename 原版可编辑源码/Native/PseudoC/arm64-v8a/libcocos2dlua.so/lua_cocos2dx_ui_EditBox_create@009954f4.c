
/* lua_cocos2dx_ui_EditBox_create(lua_State*) */

void lua_cocos2dx_ui_EditBox_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  Scale9Sprite *pSVar5;
  Scale9Sprite *pSVar6;
  Scale9Sprite *pSVar7;
  ulong uVar8;
  void *pvVar9;
  undefined8 uVar10;
  int iVar11;
  int local_9c;
  ulong local_98;
  undefined8 local_90;
  void *local_88;
  ulong local_80;
  undefined8 local_78;
  void *local_70;
  Size aSStack_68 [8];
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  switch(iVar2) {
  case 3:
    cocos2d::Size::Size((Size *)&local_60);
    uVar8 = luaval_to_size(param_1,2,(Size *)&local_60,"ccui.EditBox:create");
    if (((param_1 != (lua_State *)0x0) && ((uVar8 & 1) != 0)) &&
       ((iVar3 = lua_gettop(param_1), 2 < iVar3 &&
        ((uVar4 = luaval_is_usertype(param_1,3,"ccui.Scale9Sprite",0), (uVar4 & 1) != 0 &&
         (pSVar5 = (Scale9Sprite *)tolua_tousertype(param_1,3,0), (uVar8 & 1) != 0)))))) {
                    /* try { // try from 009955b8 to 00a955eb has its CatchHandler @ 009956b8 */
      pSVar6 = (Scale9Sprite *)0x0;
LAB_009955c0:
      pvVar9 = (void *)cocos2d::ui::EditBox::create
                                 ((Size *)&local_60,pSVar5,pSVar6,(Scale9Sprite *)0x0);
joined_r0x009956f0:
      if (pvVar9 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar10 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar9 + 0xc),(int *)((long)pvVar9 + 0x10),pvVar9,
                   "ccui.EditBox");
        uVar10 = 1;
                    /* try { // try from 009955ec to 00a955ff has its CatchHandler @ 00995684 */
      }
      goto LAB_00995d24;
    }
    cocos2d::Size::Size(aSStack_68);
    uVar8 = luaval_to_size(param_1,2,aSStack_68,"ccui.EditBox:create");
    if ((uVar8 & 1) == 0) break;
                    /* catch() { ... } // from try @ 00995918 with catch @ 00995974 */
    local_58 = 0;
    local_50 = (void *)0x0;
                    /* catch() { ... } // from try @ 009958c0 with catch @ 00995978 */
    local_60 = 0;
    uVar8 = luaval_to_std_string(param_1,3,(basic_string *)&local_60,"ccui.EditBox:create");
    if ((uVar8 & 1) == 0) {
      iVar11 = 10;
      iVar3 = 10;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_80,"");
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_98,"");
      pvVar9 = (void *)cocos2d::ui::EditBox::create(aSStack_68,&local_60,&local_80,&local_98,0);
      if ((local_98 & 1) == 0) {
        if ((local_80 & 1) == 0) goto LAB_009959e4;
LAB_00995c2c:
        operator_delete(local_70);
        if (pvVar9 == (void *)0x0) goto LAB_00995c38;
LAB_009959e8:
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar9 + 0xc),(int *)((long)pvVar9 + 0x10),pvVar9,
                   "ccui.EditBox");
      }
      else {
        operator_delete(local_88);
        if ((local_80 & 1) != 0) goto LAB_00995c2c;
LAB_009959e4:
        if (pvVar9 != (void *)0x0) goto LAB_009959e8;
LAB_00995c38:
        lua_pushnil(param_1);
      }
      iVar11 = 1;
      iVar3 = 1;
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
      iVar3 = iVar11;
    }
    if (iVar3 == 10) break;
LAB_00995d20:
    uVar10 = 1;
    goto LAB_00995d24;
  case 4:
    cocos2d::Size::Size((Size *)&local_80);
    uVar8 = luaval_to_size(param_1,2,(Size *)&local_80,"ccui.EditBox:create");
    if ((uVar8 & 1) != 0) {
      local_58 = 0;
      local_50 = (void *)0x0;
      local_60 = 0;
      uVar8 = luaval_to_std_string(param_1,3,(basic_string *)&local_60,"ccui.EditBox:create");
                    /* try { // try from 00995838 to 00a958bf has its CatchHandler @ 00995838
                       catch() { ... } // from try @ 00995838 with catch @ 00995838
                       catch() { ... } // from try @ 0099592c with catch @ 00995838 */
      if (((uVar8 & 1) == 0) ||
         (uVar8 = luaval_to_int32(param_1,4,(int *)&local_98,"ccui.EditBox:create"),
         (uVar8 & 1) == 0)) {
        iVar11 = 2;
        iVar3 = 2;
      }
      else {
        pvVar9 = (void *)cocos2d::ui::EditBox::create(&local_80,&local_60,local_98 & 0xffffffff);
        if (pvVar9 == (void *)0x0) {
          lua_pushnil(param_1);
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar9 + 0xc),(int *)((long)pvVar9 + 0x10),pvVar9,
                     "ccui.EditBox");
        }
        iVar11 = 1;
        iVar3 = 1;
      }
      if ((local_60 & 1) != 0) {
        operator_delete(local_50);
        iVar3 = iVar11;
      }
      if (iVar3 != 2) goto LAB_00995d20;
    }
    cocos2d::Size::Size((Size *)&local_60);
    uVar8 = luaval_to_size(param_1,2,(Size *)&local_60,"ccui.EditBox:create");
    if ((((param_1 != (lua_State *)0x0) && ((uVar8 & 1) != 0)) &&
        (iVar3 = lua_gettop(param_1), 2 < iVar3)) &&
       (((uVar4 = luaval_is_usertype(param_1,3,"ccui.Scale9Sprite",0), (uVar4 & 1) != 0 &&
         (pSVar5 = (Scale9Sprite *)tolua_tousertype(param_1,3,0), (uVar8 & 1) != 0)) &&
        ((iVar3 = lua_gettop(param_1), 3 < iVar3 &&
         (uVar8 = luaval_is_usertype(param_1,4,"ccui.Scale9Sprite",0), (uVar8 & 1) != 0)))))) {
      pSVar6 = (Scale9Sprite *)tolua_tousertype(param_1,4,0);
      goto LAB_009955c0;
    }
    cocos2d::Size::Size(aSStack_68);
    uVar8 = luaval_to_size(param_1,2,aSStack_68,"ccui.EditBox:create");
    if ((uVar8 & 1) != 0) {
      local_58 = 0;
      local_50 = (void *)0x0;
      local_60 = 0;
      uVar8 = luaval_to_std_string(param_1,3,(basic_string *)&local_60,"ccui.EditBox:create");
      if ((uVar8 & 1) == 0) {
        iVar3 = 0xc;
      }
      else {
        local_78 = 0;
        local_70 = (void *)0x0;
        local_80 = 0;
        uVar8 = luaval_to_std_string(param_1,4,(basic_string *)&local_80,"ccui.EditBox:create");
        if ((uVar8 & 1) == 0) {
          iVar3 = 0xc;
        }
        else {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_98,"");
          pvVar9 = (void *)cocos2d::ui::EditBox::create(aSStack_68,&local_60,&local_80,&local_98,0);
          if ((local_98 & 1) != 0) {
            operator_delete(local_88);
          }
          if (pvVar9 == (void *)0x0) {
            lua_pushnil(param_1);
          }
          else {
            toluafix_pushusertype_ccobject
                      (param_1,*(int *)((long)pvVar9 + 0xc),(int *)((long)pvVar9 + 0x10),pvVar9,
                       "ccui.EditBox");
          }
          iVar3 = 1;
        }
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
      }
      if ((local_60 & 1) != 0) {
        operator_delete(local_50);
      }
      if (iVar3 != 0xc) goto LAB_00995d20;
    }
    break;
  case 5:
    cocos2d::Size::Size((Size *)&local_60);
                    /* try { // try from 00995604 to 00a95637 has its CatchHandler @ 00995688 */
    uVar8 = luaval_to_size(param_1,2,(Size *)&local_60,"ccui.EditBox:create");
                    /* try { // try from 00995638 to 00a956d3 has its CatchHandler @ 009954d0 */
                    /* catch() { ... } // from try @ 009955ec with catch @ 00995684 */
                    /* catch() { ... } // from try @ 00995604 with catch @ 00995688 */
    if (((((param_1 != (lua_State *)0x0) && ((uVar8 & 1) != 0)) &&
         (iVar3 = lua_gettop(param_1), 2 < iVar3)) &&
        ((uVar4 = luaval_is_usertype(param_1,3,"ccui.Scale9Sprite",0), (uVar4 & 1) != 0 &&
         (pSVar5 = (Scale9Sprite *)tolua_tousertype(param_1,3,0), (uVar8 & 1) != 0)))) &&
       ((iVar3 = lua_gettop(param_1), 3 < iVar3 &&
        (uVar8 = luaval_is_usertype(param_1,4,"ccui.Scale9Sprite",0), (uVar8 & 1) != 0)))) {
      pSVar6 = (Scale9Sprite *)tolua_tousertype(param_1,4,0);
      iVar3 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 009955b8 with catch @ 009956b8 */
      if ((4 < iVar3) &&
         (uVar8 = luaval_is_usertype(param_1,5,"ccui.Scale9Sprite",0), (uVar8 & 1) != 0)) {
        pSVar7 = (Scale9Sprite *)tolua_tousertype(param_1,5,0);
        pvVar9 = (void *)cocos2d::ui::EditBox::create((Size *)&local_60,pSVar5,pSVar6,pSVar7);
        goto joined_r0x009956f0;
      }
    }
    cocos2d::Size::Size(aSStack_68);
    uVar8 = luaval_to_size(param_1,2,aSStack_68,"ccui.EditBox:create");
    if ((uVar8 & 1) != 0) {
      local_58 = 0;
      local_50 = (void *)0x0;
      local_60 = 0;
                    /* try { // try from 009958c0 to 00a958df has its CatchHandler @ 00995978 */
      uVar8 = luaval_to_std_string(param_1,3,(basic_string *)&local_60,"ccui.EditBox:create");
      if ((uVar8 & 1) == 0) {
        iVar3 = 0xe;
      }
      else {
        local_78 = 0;
        local_70 = (void *)0x0;
        local_80 = 0;
        uVar8 = luaval_to_std_string(param_1,4,(basic_string *)&local_80,"ccui.EditBox:create");
        if ((uVar8 & 1) == 0) {
          iVar3 = 0xe;
        }
        else {
          local_90 = 0;
          local_88 = (void *)0x0;
          local_98 = 0;
          uVar8 = luaval_to_std_string(param_1,5,(basic_string *)&local_98,"ccui.EditBox:create");
          if ((uVar8 & 1) == 0) {
            iVar3 = 0xe;
          }
          else {
                    /* try { // try from 00995918 to 00a9592b has its CatchHandler @ 00995974 */
            pvVar9 = (void *)cocos2d::ui::EditBox::create
                                       (aSStack_68,&local_60,&local_80,&local_98,0);
                    /* try { // try from 0099592c to 00a95993 has its CatchHandler @ 00995838 */
            if (pvVar9 == (void *)0x0) {
              lua_pushnil(param_1);
            }
            else {
              toluafix_pushusertype_ccobject
                        (param_1,*(int *)((long)pvVar9 + 0xc),(int *)((long)pvVar9 + 0x10),pvVar9,
                         "ccui.EditBox");
            }
            iVar3 = 1;
          }
          if ((local_98 & 1) != 0) {
            operator_delete(local_88);
          }
        }
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
      }
      if ((local_60 & 1) != 0) {
        operator_delete(local_50);
      }
      if (iVar3 != 0xe) goto LAB_00995d20;
    }
    break;
  case 6:
    cocos2d::Size::Size(aSStack_68);
    uVar8 = luaval_to_size(param_1,2,aSStack_68,"ccui.EditBox:create");
    if ((uVar8 & 1) != 0) {
      local_58 = 0;
      local_50 = (void *)0x0;
      local_60 = 0;
      uVar8 = luaval_to_std_string(param_1,3,(basic_string *)&local_60,"ccui.EditBox:create");
      if ((uVar8 & 1) == 0) {
        iVar3 = 0x10;
      }
      else {
        local_78 = 0;
        local_70 = (void *)0x0;
        local_80 = 0;
        uVar8 = luaval_to_std_string(param_1,4,(basic_string *)&local_80,"ccui.EditBox:create");
        if ((uVar8 & 1) == 0) {
          iVar3 = 0x10;
        }
        else {
          local_90 = 0;
          local_88 = (void *)0x0;
          local_98 = 0;
          uVar8 = luaval_to_std_string(param_1,5,(basic_string *)&local_98,"ccui.EditBox:create");
          if (((uVar8 & 1) == 0) ||
             (uVar8 = luaval_to_int32(param_1,6,&local_9c,"ccui.EditBox:create"), (uVar8 & 1) == 0))
          {
            iVar3 = 0x10;
          }
          else {
            pvVar9 = (void *)cocos2d::ui::EditBox::create
                                       (aSStack_68,&local_60,&local_80,&local_98,local_9c);
            if (pvVar9 == (void *)0x0) {
              lua_pushnil(param_1);
            }
            else {
              toluafix_pushusertype_ccobject
                        (param_1,*(int *)((long)pvVar9 + 0xc),(int *)((long)pvVar9 + 0x10),pvVar9,
                         "ccui.EditBox");
            }
            iVar3 = 1;
          }
          if ((local_98 & 1) != 0) {
            operator_delete(local_88);
          }
        }
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
      }
      if ((local_60 & 1) != 0) {
        operator_delete(local_50);
      }
      if (iVar3 != 0x10) goto LAB_00995d20;
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d","ccui.EditBox:create",
             iVar2 + -1,2);
  uVar10 = 0;
LAB_00995d24:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}

