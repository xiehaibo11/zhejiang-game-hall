
undefined4 FUN_008eacb8(lua_State *param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  byte local_80 [8];
  ulong local_78;
  void *local_70;
  ulong local_68;
  undefined8 uStack_60;
  void *local_58;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
                    /* try { // try from 008eacc0 to 009eace3 has its CatchHandler @ 008eac24 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar4 = lua_gettop();
                    /* try { // try from 008eace4 to 009ead47 has its CatchHandler @ 008eadec */
  if (iVar4 + -1 == 2) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    uVar5 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"fairygui.UIPackage:getItemURL");
    uVar6 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_68,"fairygui.UIPackage:getItemURL");
    if ((uVar5 & uVar6 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_UIPackage_getItemURL\'",0);
      uVar7 = 0;
    }
    else {
      fairygui::UIPackage::getItemURL((basic_string *)&local_50,(basic_string *)&local_68);
                    /* try { // try from 008ead48 to 009ead7b has its CatchHandler @ 008eac24 */
      uVar1 = (ulong)(local_80[0] >> 1);
      pvVar3 = (void *)((ulong)local_80 | 1);
      if ((local_80[0] & 1) != 0) {
        uVar1 = local_78;
        pvVar3 = local_70;
      }
      lua_pushlstring(param_1,pvVar3,uVar1);
      if ((local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
                    /* try { // try from 008ead7c to 009ead8f has its CatchHandler @ 008eade8 */
      uVar7 = 1;
    }
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
                    /* try { // try from 008ead94 to 009eada7 has its CatchHandler @ 008eadec */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "fairygui.UIPackage:getItemURL",iVar4 + -1,2);
                    /* try { // try from 008eada8 to 009eae07 has its CatchHandler @ 008eac24 */
    uVar7 = 0;
  }
                    /* catch() { ... } // from try @ 008eac7c with catch @ 008eade8
                       catch() { ... } // from try @ 008ead7c with catch @ 008eade8 */
                    /* catch() { ... } // from try @ 008eace4 with catch @ 008eadec
                       catch() { ... } // from try @ 008ead94 with catch @ 008eadec */
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}

