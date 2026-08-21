
undefined8 FUN_008e0a00(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GScrollBar *this;
  ulong uVar3;
  ScrollPane *pSVar4;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GScrollBar *)tolua_tousertype(param_1,1,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 008e09b4 with catch @ 008e0a30
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 008e09d8 with catch @ 008e0a38
                        */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
                    /* try { // try from 008e0a58 to 009e0a5b has its CatchHandler @ 008e0a64 */
                    /* try { // try from 008e0a5c to 009e0a67 has its CatchHandler @ 008e095c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 008e0a58 with catch @ 008e0a64
                        */
                    /* try { // try from 008e0a68 to 009e0a6b has its CatchHandler @ 008e0a74 */
                    /* try { // try from 008e0a6c to 009e0a77 has its CatchHandler @ 008e095c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 008e0a68 with catch @ 008e0a74
                        */
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar3 = luaval_is_usertype(param_1,2,"fairygui.ScrollPane",0), (uVar3 & 1) == 0)) {
      luaval_to_boolean(param_1,3,local_3c,"fairygui.GScrollBar:setScrollPane");
    }
    else {
      pSVar4 = (ScrollPane *)tolua_tousertype(param_1,2,0);
      uVar3 = luaval_to_boolean(param_1,3,local_3c,"fairygui.GScrollBar:setScrollPane");
      if ((uVar3 & 1) != 0) {
        fairygui::GScrollBar::setScrollPane(this,pSVar4,local_3c[0]);
        goto LAB_008e0b08;
      }
    }
    tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GScrollBar_setScrollPane\'",0)
    ;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GScrollBar:setScrollPane",iVar2 + -1,2);
  }
LAB_008e0b08:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

