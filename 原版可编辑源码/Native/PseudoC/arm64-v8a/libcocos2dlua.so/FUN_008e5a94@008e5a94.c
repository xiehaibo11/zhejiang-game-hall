
undefined8 FUN_008e5a94(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GGroup *pGVar3;
  ulong uVar4;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pGVar3 = (GGroup *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"fairygui.GGroup:setLayout");
    if ((uVar4 & 1) == 0) {
                    /* try { // try from 008e5b28 to 009e5b77 has its CatchHandler @ 008e5b28
                       catch() { ... } // from try @ 008e5b28 with catch @ 008e5b28
                       catch() { ... } // from try @ 008e5bb8 with catch @ 008e5b28
                       catch() { ... } // from try @ 008e5bfc with catch @ 008e5b28 */
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GGroup_setLayout\'",0);
    }
    else {
      fairygui::GGroup::setLayout(pGVar3,local_3c);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GGroup:setLayout",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

