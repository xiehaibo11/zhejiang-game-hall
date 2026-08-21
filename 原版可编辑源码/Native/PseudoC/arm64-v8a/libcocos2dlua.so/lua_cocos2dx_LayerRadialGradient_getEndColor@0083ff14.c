
/* lua_cocos2dx_LayerRadialGradient_getEndColor(lua_State*) */

void lua_cocos2dx_LayerRadialGradient_getEndColor(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  LayerRadialGradient *this;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (LayerRadialGradient *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) {
    local_3c = cocos2d::LayerRadialGradient::getEndColor(this);
    color4b_to_luaval(param_1,(Color4B *)&local_3c);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.LayerRadialGradient:getEndColor",iVar2,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}

