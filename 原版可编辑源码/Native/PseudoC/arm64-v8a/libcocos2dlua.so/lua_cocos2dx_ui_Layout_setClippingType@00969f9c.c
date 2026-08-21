
/* lua_cocos2dx_ui_Layout_setClippingType(lua_State*) */

undefined4 lua_cocos2dx_ui_Layout_setClippingType(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Layout *pLVar3;
  ulong uVar4;
  undefined4 uVar5;
  int local_3c;
  long local_38;
  
                    /* catch() { ... } // from try @ 00969f10 with catch @ 00969fa8 */
                    /* catch() { ... } // from try @ 00969f28 with catch @ 00969fac */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pLVar3 = (Layout *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 00969edc with catch @ 00969fdc */
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"ccui.Layout:setClippingType");
    if ((uVar4 & 1) != 0) {
      cocos2d::ui::Layout::setClippingType(pLVar3,local_3c);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_0096a058;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_Layout_setClippingType\'",0
               );
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Layout:setClippingType",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_0096a058:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

