
/* lua_cocos2dx_Touch_getStartLocation(lua_State*) */

void lua_cocos2dx_Touch_getStartLocation(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Touch *this;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Touch *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) {
    local_40[0] = cocos2d::Touch::getStartLocation(this);
    vec2_to_luaval(param_1,(Vec2 *)local_40);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Touch:getStartLocation",iVar2,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}

