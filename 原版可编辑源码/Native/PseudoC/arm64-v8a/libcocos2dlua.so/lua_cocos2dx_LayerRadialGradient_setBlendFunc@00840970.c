
/* lua_cocos2dx_LayerRadialGradient_setBlendFunc(lua_State*) */

undefined4 lua_cocos2dx_LayerRadialGradient_setBlendFunc(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  LayerRadialGradient *this;
  ulong uVar3;
  undefined4 uVar4;
  BlendFunc aBStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (LayerRadialGradient *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_blendfunc(param_1,2,aBStack_40,"cc.LayerRadialGradient:setBlendFunc");
    if ((uVar3 & 1) != 0) {
      cocos2d::LayerRadialGradient::setBlendFunc(this,aBStack_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00840a2c;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_LayerRadialGradient_setBlendFunc\'",0)
    ;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.LayerRadialGradient:setBlendFunc",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00840a2c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

