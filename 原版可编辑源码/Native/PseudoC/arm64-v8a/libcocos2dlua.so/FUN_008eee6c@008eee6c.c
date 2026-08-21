
undefined4 FUN_008eee6c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  PopupMenu *pPVar5;
  void *pvVar6;
  ScriptHandlerMgr *this;
  code *pcVar7;
  undefined4 uVar8;
  ulong local_98;
  undefined8 local_90;
  void *local_88;
  undefined **local_80;
  lua_State *plStack_78;
  ulong local_70;
  undefined ***local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pPVar5 = (PopupMenu *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 2) {
                    /* try { // try from 008eef60 to 009eef93 has its CatchHandler @ 008ef060 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.PopupMenu:addItem",iVar2 + -1,2);
    uVar8 = 0;
    goto LAB_008eef94;
  }
  local_90 = 0;
  local_88 = (void *)0x0;
  local_98 = 0;
  uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_98,"fairygui.PopupMenu:addItem");
  uVar4 = toluafix_ref_function(param_1,3,0);
  if ((uVar4 == 0) || (((uVar3 ^ 1) & 1) != 0)) {
    tolua_error(param_1,"invalid arguments in function \'lua_fairygui_PopupMenu_addItem\'",0);
    uVar8 = 0;
  }
  else {
    local_80 = &PTR_FUN_0169bb78;
    plStack_78 = param_1;
    local_70 = (ulong)uVar4;
    local_60 = &local_80;
    pvVar6 = (void *)fairygui::PopupMenu::addItem(pPVar5,&local_98,&local_80);
    if (&local_80 == local_60) {
      pcVar7 = (code *)(*local_60)[4];
LAB_008eefc8:
      (*pcVar7)();
    }
    else if (local_60 != (undefined ***)0x0) {
      pcVar7 = (code *)(*local_60)[5];
      goto LAB_008eefc8;
    }
    this = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    cocos2d::ScriptHandlerMgr::addCustomHandler(this,pPVar5,uVar4);
    if (pvVar6 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* try { // try from 008eefe0 to 009ef07b has its CatchHandler @ 008ee1a0 */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                 "fairygui.GButton");
    }
    uVar8 = 1;
  }
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
LAB_008eef94:
                    /* try { // try from 008eef94 to 009eefa7 has its CatchHandler @ 008ef02c */
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 008eefac to 009eefdf has its CatchHandler @ 008ef030 */
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

