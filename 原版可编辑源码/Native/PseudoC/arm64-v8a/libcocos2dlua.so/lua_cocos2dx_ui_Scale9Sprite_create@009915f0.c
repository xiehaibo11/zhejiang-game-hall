
/* lua_cocos2dx_ui_Scale9Sprite_create(lua_State*) */

void lua_cocos2dx_ui_Scale9Sprite_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  int iVar6;
  Rect aRStack_70 [16];
  Rect aRStack_60 [16];
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  int iVar7;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  switch(iVar2 + -1) {
  case 0:
    pvVar4 = (void *)cocos2d::ui::Scale9Sprite::create();
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
      uVar5 = 1;
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "ccui.Scale9Sprite");
      uVar5 = 1;
    }
    goto LAB_00991900;
  case 1:
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.Scale9Sprite:create");
    if ((uVar3 & 1) != 0) {
      pvVar4 = (void *)cocos2d::ui::Scale9Sprite::create((basic_string *)&local_50);
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
LAB_009918fc:
      uVar5 = 1;
      goto LAB_00991900;
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    break;
  case 2:
    cocos2d::Rect::Rect(aRStack_60);
    uVar3 = luaval_to_rect(param_1,2,aRStack_60,"ccui.Scale9Sprite:create");
    if ((uVar3 & 1) != 0) {
      local_48 = 0;
      local_40 = (void *)0x0;
      local_50 = 0;
      uVar3 = luaval_to_std_string(param_1,3,(basic_string *)&local_50,"ccui.Scale9Sprite:create");
      if ((uVar3 & 1) == 0) {
        iVar7 = 6;
        iVar6 = 6;
      }
      else {
        pvVar4 = (void *)cocos2d::ui::Scale9Sprite::create(aRStack_60,(basic_string *)&local_50);
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
      if (iVar6 != 6) goto LAB_009918fc;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.Scale9Sprite:create");
    if ((uVar3 & 1) == 0) {
LAB_009918b8:
      iVar7 = 8;
      iVar6 = 8;
    }
    else {
      cocos2d::Rect::Rect(aRStack_60);
      uVar3 = luaval_to_rect(param_1,3,aRStack_60,"ccui.Scale9Sprite:create");
      if ((uVar3 & 1) == 0) goto LAB_009918b8;
      pvVar4 = (void *)cocos2d::ui::Scale9Sprite::create((basic_string *)&local_50,aRStack_60);
                    /* try { // try from 00991894 to 00a918c7 has its CatchHandler @ 00991994 */
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
                    /* try { // try from 009918c8 to 00a918db has its CatchHandler @ 00991960 */
      operator_delete(local_40);
      iVar6 = iVar7;
    }
    if (iVar6 != 8) goto LAB_009918fc;
    break;
  case 3:
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.Scale9Sprite:create");
    if ((uVar3 & 1) == 0) {
LAB_009917e0:
      iVar7 = 2;
      iVar6 = 2;
    }
    else {
      cocos2d::Rect::Rect(aRStack_60);
      uVar3 = luaval_to_rect(param_1,3,aRStack_60,"ccui.Scale9Sprite:create");
      if ((uVar3 & 1) == 0) goto LAB_009917e0;
      cocos2d::Rect::Rect(aRStack_70);
      uVar3 = luaval_to_rect(param_1,4,aRStack_70,"ccui.Scale9Sprite:create");
      if ((uVar3 & 1) == 0) goto LAB_009917e0;
                    /* try { // try from 009917ac to 00a91893 has its CatchHandler @ 009917ac
                       catch() { ... } // from try @ 009917ac with catch @ 009917ac
                       catch() { ... } // from try @ 00991914 with catch @ 009917ac */
      pvVar4 = (void *)cocos2d::ui::Scale9Sprite::create
                                 ((basic_string *)&local_50,aRStack_60,aRStack_70);
      if (pvVar4 == (void *)0x0) {
                    /* catch() { ... } // from try @ 009918c8 with catch @ 00991960 */
                    /* catch() { ... } // from try @ 009918e0 with catch @ 00991964 */
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
    if (iVar6 != 2) goto LAB_009918fc;
  }
                    /* try { // try from 009918e0 to 00a91913 has its CatchHandler @ 00991964 */
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
             "ccui.Scale9Sprite:create",iVar2 + -1,1);
  uVar5 = 0;
LAB_00991900:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00991914 to 00a919af has its CatchHandler @ 009917ac */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

