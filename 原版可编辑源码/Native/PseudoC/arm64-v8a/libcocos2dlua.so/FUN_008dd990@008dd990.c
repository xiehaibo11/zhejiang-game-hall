
undefined8 FUN_008dd990(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GComponent *this;
  ulong uVar3;
  bool local_3c [4];
  long local_38;
  
                    /* try { // try from 008dd990 to 009dd993 has its CatchHandler @ 008dd99c */
                    /* try { // try from 008dd994 to 009dd99f has its CatchHandler @ 008dd7b8 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 008dd990 with catch @ 008dd99c
                        */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GComponent *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"fairygui.GComponent:setOpaque");
    if ((uVar3 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GComponent_setOpaque\'",0);
    }
    else {
      fairygui::GComponent::setOpaque(this,local_3c[0]);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GComponent:setOpaque",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

