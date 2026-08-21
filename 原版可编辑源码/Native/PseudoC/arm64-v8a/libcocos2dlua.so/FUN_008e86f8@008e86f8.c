
undefined8 FUN_008e86f8(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  GRoot *this;
  ulong uVar4;
  GObject *pGVar5;
  undefined8 uVar6;
  undefined8 unaff_x21;
  uint uVar7;
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (GRoot *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 4) {
    if (param_1 != (lua_State *)0x0) {
      iVar2 = lua_gettop(param_1);
      if ((iVar2 < 2) ||
         (uVar4 = luaval_is_usertype(param_1,2,"fairygui.GObject",0), (uVar4 & 1) == 0)) {
        uVar7 = 0;
      }
      else {
        unaff_x21 = tolua_tousertype(param_1,2,0);
        uVar7 = 1;
      }
      iVar2 = lua_gettop(param_1);
      if ((2 < iVar2) &&
         (uVar4 = luaval_is_usertype(param_1,3,"fairygui.GObject",0), (uVar4 & 1) != 0)) {
        uVar6 = tolua_tousertype(param_1,3,0);
        uVar3 = luaval_to_int32(param_1,4,&local_4c,"fairygui.GRoot:showPopup");
        if ((uVar7 & uVar3) != 0) {
          fairygui::GRoot::showPopup(this,unaff_x21,uVar6,local_4c);
          goto LAB_008e88b0;
        }
        goto LAB_008e889c;
      }
    }
    luaval_to_int32(param_1,4,&local_4c,"fairygui.GRoot:showPopup");
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "fairygui.GRoot:showPopup",iVar2 + -1,1);
      goto LAB_008e88b0;
    }
    if (((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 1 < iVar2)) &&
       (uVar4 = luaval_is_usertype(param_1,2,"fairygui.GObject",0), (uVar4 & 1) != 0)) {
      pGVar5 = (GObject *)tolua_tousertype(param_1,2,0);
      fairygui::GRoot::showPopup(this,pGVar5);
      goto LAB_008e88b0;
    }
  }
LAB_008e889c:
  tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GRoot_showPopup\'",0);
LAB_008e88b0:
                    /* try { // try from 008e88b8 to 009e8963 has its CatchHandler @ 008e88b8
                       catch() { ... } // from try @ 008e88b8 with catch @ 008e88b8
                       catch() { ... } // from try @ 008e8970 with catch @ 008e88b8 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

