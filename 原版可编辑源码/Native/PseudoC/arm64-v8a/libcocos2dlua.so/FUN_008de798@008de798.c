
undefined4 FUN_008de798(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GComponent *this;
  ulong uVar3;
  void *pvVar4;
  undefined4 uVar5;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
                    /* try { // try from 008de7a0 to 009de7a7 has its CatchHandler @ 008de7dc */
                    /* try { // try from 008de7a8 to 009de7f7 has its CatchHandler @ 008de778 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GComponent *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 008de7a0 with catch @ 008de7dc */
  if (iVar2 + -1 == 1) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
                    /* catch() { ... } // from try @ 008de828 with catch @ 008de7f8 */
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"fairygui.GComponent:getChild")
    ;
    if ((uVar3 & 1) == 0) {
                    /* catch() { ... } // from try @ 008de820 with catch @ 008de864 */
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GComponent_getChild\'",0);
      uVar5 = 0;
    }
    else {
      pvVar4 = (void *)fairygui::GComponent::getChild(this,(basic_string *)&local_50);
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
                    /* try { // try from 008de820 to 009de827 has its CatchHandler @ 008de864 */
                    /* try { // try from 008de828 to 009de87f has its CatchHandler @ 008de7f8 */
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "fairygui.GObject");
      }
      uVar5 = 1;
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GComponent:getChild",iVar2 + -1,1);
    uVar5 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

