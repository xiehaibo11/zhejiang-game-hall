
/* lua_cocos2dx_LayerRadialGradient_setEndColor(lua_State*) */

undefined4 lua_cocos2dx_LayerRadialGradient_setEndColor(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  LayerRadialGradient *this;
  ulong uVar3;
  undefined4 uVar4;
  Color3B aCStack_48 [8];
  Color4B aCStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (LayerRadialGradient *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Color4B::Color4B(aCStack_40);
    uVar3 = luaval_to_color4b(param_1,2,aCStack_40,"cc.LayerRadialGradient:setEndColor");
    if ((uVar3 & 1) == 0) {
      cocos2d::Color3B::Color3B(aCStack_48);
      uVar3 = luaval_to_color3b(param_1,2,aCStack_48,"cc.LayerRadialGradient:setEndColor");
      if ((uVar3 & 1) == 0) goto LAB_008405f8;
      cocos2d::LayerRadialGradient::setEndColor(this,aCStack_48);
    }
    else {
      cocos2d::LayerRadialGradient::setEndColor(this,aCStack_40);
    }
    uVar4 = 1;
    lua_settop(param_1,1);
  }
  else {
LAB_008405f8:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.LayerRadialGradient:setEndColor",iVar2 + -1,1);
    uVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

