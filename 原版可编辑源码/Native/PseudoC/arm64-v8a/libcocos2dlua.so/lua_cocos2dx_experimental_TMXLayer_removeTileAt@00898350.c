
/* lua_cocos2dx_experimental_TMXLayer_removeTileAt(lua_State*) */

undefined4 lua_cocos2dx_experimental_TMXLayer_removeTileAt(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  TMXLayer *this;
  ulong uVar3;
  undefined4 uVar4;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (TMXLayer *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_40 = 0;
    uVar3 = luaval_to_vec2(param_1,2,(Vec2 *)&local_40,"ccexp.TMXLayer:removeTileAt");
    if ((uVar3 & 1) != 0) {
      cocos2d::experimental::TMXLayer::removeTileAt(this,(Vec2 *)&local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00898410;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_experimental_TMXLayer_removeTileAt\'",
                0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccexp.TMXLayer:removeTileAt",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00898410:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

