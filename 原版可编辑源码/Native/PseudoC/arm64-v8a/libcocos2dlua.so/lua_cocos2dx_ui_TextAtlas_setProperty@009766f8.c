
/* WARNING: Type propagation algorithm not settling */
/* lua_cocos2dx_ui_TextAtlas_setProperty(lua_State*) */

undefined1 lua_cocos2dx_ui_TextAtlas_setProperty(lua_State *param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  TextAtlas *this;
  undefined1 uVar9;
  ulong local_a8;
  undefined8 local_a0;
  void *local_98;
  int local_90;
  int iStack_8c;
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  ulong local_70;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
                    /* try { // try from 00976708 to 00a7671b has its CatchHandler @ 00976760 */
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 0097671c to 00a7677b has its CatchHandler @ 00976650 */
  this = (TextAtlas *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 5) {
    local_68 = 0;
    local_60 = (void *)0x0;
    local_78 = (void *)0x0;
    local_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_a0 = 0;
    local_98 = (void *)0x0;
    local_a8 = 0;
                    /* catch() { ... } // from try @ 009766bc with catch @ 0097675c */
                    /* catch() { ... } // from try @ 009766a0 with catch @ 00976760
                       catch() { ... } // from try @ 00976708 with catch @ 00976760 */
    uVar4 = luaval_to_std_string(param_1,2,(basic_string *)&local_70,"ccui.TextAtlas:setProperty");
                    /* try { // try from 0097677c to 00a767cb has its CatchHandler @ 0097677c
                       catch() { ... } // from try @ 0097677c with catch @ 0097677c
                       catch() { ... } // from try @ 0097684c with catch @ 0097677c
                       catch() { ... } // from try @ 00976888 with catch @ 0097677c */
    uVar5 = luaval_to_std_string(param_1,3,(basic_string *)&local_88,"ccui.TextAtlas:setProperty");
    uVar6 = luaval_to_int32(param_1,4,&iStack_8c,"ccui.TextAtlas:setProperty");
    uVar7 = luaval_to_int32(param_1,5,&local_90,"ccui.TextAtlas:setProperty");
                    /* try { // try from 009767cc to 00a7684b has its CatchHandler @ 009768c8 */
    uVar8 = luaval_to_std_string(param_1,6,(basic_string *)&local_a8,"ccui.TextAtlas:setProperty");
    bVar1 = (uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & 1) == 0;
    if (bVar1) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_TextAtlas_setProperty\'",
                  0);
                    /* try { // try from 00976874 to 00a76887 has its CatchHandler @ 009768c8 */
    }
    else {
      cocos2d::ui::TextAtlas::setProperty
                (this,(basic_string *)&local_70,(basic_string *)&local_88,iStack_8c,local_90,
                 (basic_string *)&local_a8);
      lua_settop(param_1,1);
    }
    uVar9 = !bVar1;
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
                    /* try { // try from 00976888 to 00a768e3 has its CatchHandler @ 0097677c */
    }
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
  }
  else {
                    /* try { // try from 0097684c to 00a76873 has its CatchHandler @ 0097677c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TextAtlas:setProperty",iVar3 + -1,5);
    uVar9 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* catch() { ... } // from try @ 009767cc with catch @ 009768c8
                       catch() { ... } // from try @ 00976874 with catch @ 009768c8 */
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

