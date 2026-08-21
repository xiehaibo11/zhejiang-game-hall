
/* lua_cocos2dx_ui_Button_setZoomScale(lua_State*) */

undefined4 lua_cocos2dx_ui_Button_setZoomScale(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Button *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 0096e214 with catch @ 0096e328
                       catch() { ... } // from try @ 0096e284 with catch @ 0096e328 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Button *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"ccui.Button:setZoomScale");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::Button::setZoomScale(this,(float)local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_0096e3e8;
    }
    tolua_error(param_1,0x12d867e,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d8665,
               iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_0096e3e8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

