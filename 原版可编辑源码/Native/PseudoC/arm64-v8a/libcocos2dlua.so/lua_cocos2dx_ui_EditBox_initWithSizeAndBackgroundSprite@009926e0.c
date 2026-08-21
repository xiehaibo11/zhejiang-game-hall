
/* lua_cocos2dx_ui_EditBox_initWithSizeAndBackgroundSprite(lua_State*) */

void lua_cocos2dx_ui_EditBox_initWithSizeAndBackgroundSprite(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  EditBox *this;
  ulong uVar5;
  ulong uVar6;
  Scale9Sprite *pSVar7;
  undefined8 uVar8;
  Scale9Sprite *pSVar9;
  Scale9Sprite *pSVar10;
  int iVar11;
  int local_6c;
  ulong local_68;
  undefined8 local_60;
  void *local_58;
  Size aSStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (EditBox *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 5) {
    cocos2d::Size::Size((Size *)&local_68);
    uVar5 = luaval_to_size(param_1,2,(Size *)&local_68,
                           "ccui.EditBox:initWithSizeAndBackgroundSprite");
    if ((((param_1 != (lua_State *)0x0) && ((uVar5 & 1) != 0)) &&
        (iVar3 = lua_gettop(param_1), 2 < iVar3)) &&
       (((uVar6 = luaval_is_usertype(param_1,3,"ccui.Scale9Sprite",0), (uVar6 & 1) != 0 &&
         (pSVar7 = (Scale9Sprite *)tolua_tousertype(param_1,3,0), (uVar5 & 1) != 0)) &&
        ((iVar3 = lua_gettop(param_1), 3 < iVar3 &&
         (uVar5 = luaval_is_usertype(param_1,4,"ccui.Scale9Sprite",0), (uVar5 & 1) != 0)))))) {
      pSVar9 = (Scale9Sprite *)tolua_tousertype(param_1,4,0);
      iVar3 = lua_gettop(param_1);
      if ((4 < iVar3) &&
         (uVar5 = luaval_is_usertype(param_1,5,"ccui.Scale9Sprite",0), (uVar5 & 1) != 0)) {
        pSVar10 = (Scale9Sprite *)tolua_tousertype(param_1,5,0);
        uVar4 = cocos2d::ui::EditBox::initWithSizeAndBackgroundSprite
                          (this,(Size *)&local_68,pSVar7,pSVar9,pSVar10);
LAB_009927b8:
        tolua_pushboolean(param_1,uVar4 & 1);
        uVar8 = 1;
        goto LAB_00992a20;
      }
    }
  }
  else if (iVar2 == 4) {
    cocos2d::Size::Size(aSStack_50);
    uVar5 = luaval_to_size(param_1,2,aSStack_50,"ccui.EditBox:initWithSizeAndBackgroundSprite");
    if ((uVar5 & 1) != 0) {
      local_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
      uVar5 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_68,
                         "ccui.EditBox:initWithSizeAndBackgroundSprite");
      if (((uVar5 & 1) == 0) ||
         (uVar5 = luaval_to_int32(param_1,4,&local_6c,"ccui.EditBox:initWithSizeAndBackgroundSprite"
                                 ), (uVar5 & 1) == 0)) {
        iVar11 = 6;
        iVar3 = 6;
      }
      else {
        uVar4 = cocos2d::ui::EditBox::initWithSizeAndBackgroundSprite
                          (this,aSStack_50,&local_68,local_6c);
        tolua_pushboolean(param_1,uVar4 & 1);
        iVar11 = 1;
        iVar3 = 1;
      }
      if ((local_68 & 1) != 0) {
        operator_delete(local_58);
        iVar3 = iVar11;
      }
      if (iVar3 != 6) {
LAB_00992a64:
        uVar8 = 1;
        goto LAB_00992a20;
      }
    }
  }
  else if (iVar2 == 3) {
    cocos2d::Size::Size((Size *)&local_68);
    uVar5 = luaval_to_size(param_1,2,(Size *)&local_68,
                           "ccui.EditBox:initWithSizeAndBackgroundSprite");
    if ((((param_1 != (lua_State *)0x0) && ((uVar5 & 1) != 0)) &&
        (iVar3 = lua_gettop(param_1), 2 < iVar3)) &&
       ((uVar6 = luaval_is_usertype(param_1,3,"ccui.Scale9Sprite",0), (uVar6 & 1) != 0 &&
        (pSVar7 = (Scale9Sprite *)tolua_tousertype(param_1,3,0), (uVar5 & 1) != 0)))) {
      uVar4 = cocos2d::ui::EditBox::initWithSizeAndBackgroundSprite(this,(Size *)&local_68,pSVar7);
      goto LAB_009927b8;
    }
    cocos2d::Size::Size(aSStack_50);
    uVar5 = luaval_to_size(param_1,2,aSStack_50,"ccui.EditBox:initWithSizeAndBackgroundSprite");
    if ((uVar5 & 1) != 0) {
      local_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
      uVar5 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_68,
                         "ccui.EditBox:initWithSizeAndBackgroundSprite");
      if ((uVar5 & 1) == 0) {
        iVar11 = 4;
        iVar3 = 4;
      }
      else {
        uVar4 = cocos2d::ui::EditBox::initWithSizeAndBackgroundSprite(this,aSStack_50,&local_68,0);
        tolua_pushboolean(param_1,uVar4 & 1);
        iVar11 = 1;
        iVar3 = 1;
      }
      if ((local_68 & 1) != 0) {
        operator_delete(local_58);
        iVar3 = iVar11;
      }
      if (iVar3 != 4) goto LAB_00992a64;
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "ccui.EditBox:initWithSizeAndBackgroundSprite",iVar2 + -1,4);
  uVar8 = 0;
LAB_00992a20:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

