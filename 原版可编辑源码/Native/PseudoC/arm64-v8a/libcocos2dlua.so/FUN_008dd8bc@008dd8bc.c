
undefined8 FUN_008dd8bc(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GComponent *pGVar3;
  ulong uVar4;
  int local_3c;
  long local_38;
  
                    /* try { // try from 008dd8d0 to 009dd8df has its CatchHandler @ 008dd960 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pGVar3 = (GComponent *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 008dd8fc to 009dd8ff has its CatchHandler @ 008dd93c */
                    /* try { // try from 008dd900 to 009dd97f has its CatchHandler @ 008dd7b8 */
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"fairygui.GComponent:setChildrenRenderOrder");
    if ((uVar4 & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 008dd828 with catch @ 008dd95c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 008dd868 with catch @ 008dd960
                       catch(type#1 @ 00000000) { ... } // from try @ 008dd8d0 with catch @ 008dd960
                        */
      tolua_error(param_1,
                  "invalid arguments in function \'lua_fairygui_GComponent_setChildrenRenderOrder\'"
                  ,0);
    }
    else {
      fairygui::GComponent::setChildrenRenderOrder(pGVar3,local_3c);
    }
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 008dd8fc with catch @ 008dd93c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 008dd80c with catch @ 008dd940
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 008dd874 with catch @ 008dd948
                        */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GComponent:setChildrenRenderOrder",iVar2 + -1,1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 008dd830 with catch @ 008dd94c
                        */
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 008dd980 to 009dd983 has its CatchHandler @ 008dd98c */
                    /* try { // try from 008dd984 to 009dd98f has its CatchHandler @ 008dd7b8 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 008dd980 with catch @ 008dd98c
                        */
  __stack_chk_fail();
}

