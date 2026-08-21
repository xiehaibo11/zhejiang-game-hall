
/* lua_cocos2dx_experimental_TMXLayer_getPositionAt(lua_State*) */

void lua_cocos2dx_experimental_TMXLayer_getPositionAt(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  TMXLayer *this;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 local_48 [2];
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (TMXLayer *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_40 = 0;
    uVar3 = luaval_to_vec2(param_1,2,(Vec2 *)&local_40,"ccexp.TMXLayer:getPositionAt");
    if ((uVar3 & 1) != 0) {
      local_48[0] = cocos2d::experimental::TMXLayer::getPositionAt(this,(Vec2 *)&local_40);
      vec2_to_luaval(param_1,(Vec2 *)local_48);
      uVar4 = 1;
      goto LAB_00897d60;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_experimental_TMXLayer_getPositionAt\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccexp.TMXLayer:getPositionAt",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00897d60:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

