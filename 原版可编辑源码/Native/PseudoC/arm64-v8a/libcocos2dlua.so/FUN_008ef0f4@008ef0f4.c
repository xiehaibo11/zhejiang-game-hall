
undefined4 FUN_008ef0f4(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  PopupMenu *pPVar6;
  void *pvVar7;
  ScriptHandlerMgr *this;
  code *pcVar8;
  undefined4 uVar9;
  int local_cc;
  ulong local_c8 [2];
  void *local_b8;
  undefined **local_b0;
  lua_State *plStack_a8;
  ulong local_a0;
  undefined ***local_90;
  long alStack_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pPVar6 = (PopupMenu *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 3) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.PopupMenu:addItemAt",iVar2 + -1,3);
    uVar9 = 0;
    goto LAB_008ef2bc;
  }
  local_c8[1] = 0;
  local_b8 = (void *)0x0;
  local_c8[0] = 0;
  local_60 = (long *)0x0;
  uVar3 = luaval_to_std_string(param_1,2,(basic_string *)local_c8,"fairygui.PopupMenu:addItemAt");
                    /* try { // try from 008ef174 to 009ef333 has its CatchHandler @ 008ef174
                       catch() { ... } // from try @ 008ef174 with catch @ 008ef174
                       catch() { ... } // from try @ 008ef3b4 with catch @ 008ef174
                       catch() { ... } // from try @ 008ef448 with catch @ 008ef174 */
  uVar4 = luaval_to_int32(param_1,3,&local_cc,"fairygui.PopupMenu:addItemAt");
  uVar5 = toluafix_ref_function(param_1,4,0);
  if ((uVar5 == 0) || ((uVar3 & uVar4 & 1) == 0)) {
    tolua_error(param_1,"invalid arguments in function \'lua_fairygui_PopupMenu_addItemAt\'",0);
    uVar9 = 0;
  }
  else {
    local_b0 = &PTR_FUN_0169bbf8;
    plStack_a8 = param_1;
    local_a0 = (ulong)uVar5;
    local_90 = &local_b0;
    pvVar7 = (void *)fairygui::PopupMenu::addItemAt(pPVar6,local_c8,local_cc,&local_b0);
    if (&local_b0 == local_90) {
      pcVar8 = (code *)(*local_90)[4];
LAB_008ef23c:
      (*pcVar8)();
    }
    else if (local_90 != (undefined ***)0x0) {
      pcVar8 = (code *)(*local_90)[5];
      goto LAB_008ef23c;
    }
    this = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    cocos2d::ScriptHandlerMgr::addCustomHandler(this,pPVar6,uVar5);
    if (pvVar7 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),pvVar7,
                 "fairygui.GButton");
    }
    uVar9 = 1;
  }
  if (alStack_80 == local_60) {
    pcVar8 = *(code **)(*local_60 + 0x20);
LAB_008ef2a8:
    (*pcVar8)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar8 = *(code **)(*local_60 + 0x28);
    goto LAB_008ef2a8;
  }
  if ((local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
LAB_008ef2bc:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

