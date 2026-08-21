
undefined8 FUN_008e8bc4(lua_State *param_1)

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
                    /* try { // try from 008e8be0 to 009e8c8b has its CatchHandler @ 008e8be0
                       catch() { ... } // from try @ 008e8be0 with catch @ 008e8be0
                       catch() { ... } // from try @ 008e8c98 with catch @ 008e8be0 */
  local_48 = *(long *)(lVar1 + 0x28);
  this = (GRoot *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 4) {
    if (param_1 != (lua_State *)0x0) {
      iVar2 = lua_gettop(param_1);
                    /* try { // try from 008e8c8c to 009e8c97 has its CatchHandler @ 008e8cf0 */
      if ((iVar2 < 2) ||
         (uVar4 = luaval_is_usertype(param_1,2,"fairygui.GObject",0), (uVar4 & 1) == 0)) {
        uVar7 = 0;
      }
      else {
                    /* try { // try from 008e8c98 to 009e8d2b has its CatchHandler @ 008e8be0 */
        unaff_x21 = tolua_tousertype(param_1,2,0);
        uVar7 = 1;
      }
      iVar2 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 008e8c8c with catch @ 008e8cf0 */
      if ((2 < iVar2) &&
         (uVar4 = luaval_is_usertype(param_1,3,"fairygui.GObject",0), (uVar4 & 1) != 0)) {
        uVar6 = tolua_tousertype(param_1,3,0);
        uVar3 = luaval_to_int32(param_1,4,&local_4c,"fairygui.GRoot:togglePopup");
        if ((uVar7 & uVar3) != 0) {
          fairygui::GRoot::togglePopup(this,unaff_x21,uVar6,local_4c);
          goto LAB_008e8d7c;
        }
        goto LAB_008e8d68;
      }
    }
    luaval_to_int32(param_1,4,&local_4c,"fairygui.GRoot:togglePopup");
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "fairygui.GRoot:togglePopup",iVar2 + -1,1);
      goto LAB_008e8d7c;
    }
    if (((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 1 < iVar2)) &&
       (uVar4 = luaval_is_usertype(param_1,2,"fairygui.GObject",0), (uVar4 & 1) != 0)) {
      pGVar5 = (GObject *)tolua_tousertype(param_1,2,0);
      fairygui::GRoot::togglePopup(this,pGVar5);
      goto LAB_008e8d7c;
    }
  }
LAB_008e8d68:
  tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GRoot_togglePopup\'",0);
LAB_008e8d7c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

