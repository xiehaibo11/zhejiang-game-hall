
undefined8 FUN_008f45c4(lua_State *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ScrollPane *this;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  GObject *pGVar8;
  bool local_78 [4];
  bool local_74 [4];
  bool local_70 [4];
  bool local_6c [4];
  Rect aRStack_68 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = (ScrollPane *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 == 4) {
    cocos2d::Rect::Rect(aRStack_68);
    uVar4 = luaval_to_rect(param_1,2,aRStack_68,"fairygui.ScrollPane:scrollToView");
    uVar5 = luaval_to_boolean(param_1,3,local_6c,"fairygui.ScrollPane:scrollToView");
    pGVar8 = (GObject *)(uVar5 & 0xffffffff);
    uVar6 = luaval_to_boolean(param_1,4,local_70,"fairygui.ScrollPane:scrollToView");
    if ((((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) && ((uVar6 & 1) != 0)) {
      fairygui::ScrollPane::scrollToView(this,aRStack_68,local_6c[0],local_70[0]);
      goto LAB_008f48e0;
    }
    if (((param_1 == (lua_State *)0x0) || (iVar3 = lua_gettop(param_1), iVar3 < 2)) ||
       (uVar4 = luaval_is_usertype(param_1,2,"fairygui.GObject",0), (uVar4 & 1) == 0)) {
      bVar2 = false;
    }
    else {
      pGVar8 = (GObject *)tolua_tousertype(param_1,2,0);
      bVar2 = true;
    }
    uVar4 = luaval_to_boolean(param_1,3,local_74,"fairygui.ScrollPane:scrollToView");
    uVar5 = luaval_to_boolean(param_1,4,local_78,"fairygui.ScrollPane:scrollToView");
    if (((bVar2) && ((uVar4 & 1) != 0)) && ((uVar5 & 1) != 0)) {
                    /* try { // try from 008f48b8 to 009f4913 has its CatchHandler @ 008f4988 */
      fairygui::ScrollPane::scrollToView(this,pGVar8,local_74[0],local_78[0]);
      goto LAB_008f48e0;
    }
LAB_008f48cc:
    tolua_error(param_1,"invalid arguments in function \'lua_fairygui_ScrollPane_scrollToView\'",0);
  }
  else {
    if (iVar3 == 3) {
      cocos2d::Rect::Rect(aRStack_68);
      pcVar7 = "fairygui.ScrollPane:scrollToView";
      uVar4 = luaval_to_rect(param_1,2,aRStack_68,"fairygui.ScrollPane:scrollToView");
      uVar5 = luaval_to_boolean(param_1,3,local_6c,"fairygui.ScrollPane:scrollToView");
      if (((uVar4 & 1) == 0) || ((uVar5 & 1) == 0)) {
        if ((param_1 == (lua_State *)0x0) ||
           ((iVar3 = lua_gettop(param_1), iVar3 < 2 ||
            (uVar4 = luaval_is_usertype(param_1,2,"fairygui.GObject",0), (uVar4 & 1) == 0)))) {
          bVar2 = false;
        }
        else {
          pcVar7 = (char *)tolua_tousertype(param_1,2,0);
          bVar2 = true;
        }
        uVar4 = luaval_to_boolean(param_1,3,local_70,"fairygui.ScrollPane:scrollToView");
        if ((bVar2) && ((uVar4 & 1) != 0)) {
LAB_008f4864:
                    /* try { // try from 008f4868 to 009f48b7 has its CatchHandler @ 008f4868
                       catch() { ... } // from try @ 008f4868 with catch @ 008f4868
                       catch() { ... } // from try @ 008f4914 with catch @ 008f4868
                       catch() { ... } // from try @ 008f4950 with catch @ 008f4868 */
          fairygui::ScrollPane::scrollToView(this,(GObject *)pcVar7,local_70[0],false);
          goto LAB_008f48e0;
        }
        goto LAB_008f48cc;
      }
    }
    else {
      if (iVar3 != 2) {
        luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                   "fairygui.ScrollPane:scrollToView",iVar3 + -1,1);
        goto LAB_008f48e0;
      }
      cocos2d::Rect::Rect(aRStack_68);
      uVar4 = luaval_to_rect(param_1,2,aRStack_68,"fairygui.ScrollPane:scrollToView");
      if ((uVar4 & 1) == 0) {
        if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
           (uVar4 = luaval_is_usertype(param_1,2,"fairygui.GObject",0), (uVar4 & 1) != 0)) {
          pcVar7 = (char *)tolua_tousertype(param_1,2,0);
          local_70[0] = false;
          goto LAB_008f4864;
        }
        goto LAB_008f48cc;
      }
      local_6c[0] = false;
    }
    fairygui::ScrollPane::scrollToView(this,aRStack_68,local_6c[0],false);
  }
LAB_008f48e0:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

