
undefined4 FUN_008ea958(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  UIPackage *this;
  ulong uVar3;
  void *pvVar4;
  undefined4 uVar5;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (UIPackage *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 008ea988 to 009ea99f has its CatchHandler @ 008eaa64 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_48 = 0;
    local_40 = (void *)0x0;
                    /* try { // try from 008ea9a4 to 009ea9eb has its CatchHandler @ 008eaa60 */
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"fairygui.UIPackage:getItem");
    if ((uVar3 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_UIPackage_getItem\'",0);
      uVar5 = 0;
    }
    else {
      pvVar4 = (void *)fairygui::UIPackage::getItem(this,(basic_string *)&local_50);
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
                    /* try { // try from 008ea9ec to 009eaa77 has its CatchHandler @ 008ea8b4 */
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "fairygui.PackageItem");
      }
      uVar5 = 1;
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.UIPackage:getItem",iVar2 + -1,1);
    uVar5 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 008ea9a4 with catch @ 008eaa60 */
                    /* catch() { ... } // from try @ 008ea988 with catch @ 008eaa64 */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

