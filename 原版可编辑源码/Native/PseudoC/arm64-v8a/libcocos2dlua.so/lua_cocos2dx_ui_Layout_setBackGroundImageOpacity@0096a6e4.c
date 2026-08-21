
/* lua_cocos2dx_ui_Layout_setBackGroundImageOpacity(lua_State*) */

undefined4 lua_cocos2dx_ui_Layout_setBackGroundImageOpacity(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Layout *this;
  ulong uVar3;
  undefined4 uVar4;
  uchar local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Layout *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_uint16(param_1,2,(ushort *)local_3c,"ccui.Layout:setBackGroundImageOpacity");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::Layout::setBackGroundImageOpacity(this,local_3c[0]);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_0096a7a0;
    }
    tolua_error(param_1,&DAT_012d77ce,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d77a8,
               iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_0096a7a0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

