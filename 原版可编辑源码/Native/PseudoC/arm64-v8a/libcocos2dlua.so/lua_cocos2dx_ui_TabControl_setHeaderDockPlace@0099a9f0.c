
/* lua_cocos2dx_ui_TabControl_setHeaderDockPlace(lua_State*) */

undefined4 lua_cocos2dx_ui_TabControl_setHeaderDockPlace(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  TabControl *pTVar3;
  ulong uVar4;
  undefined4 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pTVar3 = (TabControl *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 0099a9e0 with catch @ 0099aa30 */
                    /* catch() { ... } // from try @ 0099a9b8 with catch @ 0099aa34 */
  if (iVar2 + -1 == 1) {
                    /* catch() { ... } // from try @ 0099a9d0 with catch @ 0099aa38 */
                    /* catch() { ... } // from try @ 0099a964 with catch @ 0099aa3c */
                    /* catch() { ... } // from try @ 0099a974 with catch @ 0099aa40 */
                    /* catch() { ... } // from try @ 0099a914 with catch @ 0099aa44 */
                    /* catch() { ... } // from try @ 0099a924 with catch @ 0099aa48 */
                    /* catch() { ... } // from try @ 0099a8d4 with catch @ 0099aa4c */
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"ccui.TabControl:setHeaderDockPlace");
                    /* catch() { ... } // from try @ 0099a894 with catch @ 0099aa50 */
    if ((uVar4 & 1) != 0) {
      cocos2d::ui::TabControl::setHeaderDockPlace(pTVar3,local_3c);
                    /* catch() { ... } // from try @ 0099a82c with catch @ 0099aa60 */
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_0099aaac;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_TabControl_setHeaderDockPlace\'",0)
    ;
  }
  else {
                    /* try { // try from 0099aa74 to 00a9b347 has its CatchHandler @ 0099aa74
                       catch() { ... } // from try @ 0099aa74 with catch @ 0099aa74
                       catch() { ... } // from try @ 0099b470 with catch @ 0099aa74
                       catch() { ... } // from try @ 0099b938 with catch @ 0099aa74 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&LAB_012e235c,
               iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_0099aaac:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

