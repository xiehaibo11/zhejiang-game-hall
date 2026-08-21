
undefined4 FUN_008efbe4(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  ulong uVar4;
  undefined4 uVar5;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 2) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar4 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"fairygui.PopupMenu:create");
    if ((uVar4 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_PopupMenu_create\'",0);
      uVar5 = 0;
    }
    else {
      pvVar3 = (void *)fairygui::PopupMenu::create((basic_string *)&local_50);
      if (pvVar3 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,
                   "fairygui.PopupMenu");
      }
      uVar5 = 1;
    }
    if ((local_50 & 1) != 0) {
                    /* try { // try from 008efd2c to 009efd5f has its CatchHandler @ 008efdb0 */
      operator_delete(local_40);
    }
  }
  else if (iVar2 + -1 == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_50,"");
    pvVar3 = (void *)fairygui::PopupMenu::create((basic_string *)&local_50);
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    if (pvVar3 == (void *)0x0) {
      lua_pushnil(param_1);
      uVar5 = 1;
                    /* try { // try from 008efd14 to 009efd27 has its CatchHandler @ 008efdac */
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,
                 "fairygui.PopupMenu");
      uVar5 = 1;
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
               "fairygui.PopupMenu:create",iVar2 + -1,1);
    uVar5 = 0;
                    /* try { // try from 008efce0 to 009efd13 has its CatchHandler @ 008efde0 */
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

