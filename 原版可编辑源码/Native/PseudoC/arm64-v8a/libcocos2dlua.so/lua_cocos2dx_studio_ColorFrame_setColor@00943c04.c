
/* lua_cocos2dx_studio_ColorFrame_setColor(lua_State*) */

undefined4 lua_cocos2dx_studio_ColorFrame_setColor(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined2 local_40;
  undefined1 local_3e;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Color3B::Color3B((Color3B *)&local_40);
    uVar4 = luaval_to_color3b(param_1,2,(Color3B *)&local_40,"ccs.ColorFrame:setColor");
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(lVar3 + 0x5b) = local_3e;
      *(undefined2 *)(lVar3 + 0x59) = local_40;
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_00943ccc;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_studio_ColorFrame_setColor\'",
                0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ColorFrame:setColor",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_00943ccc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

