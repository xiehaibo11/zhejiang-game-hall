
/* lua_cocos2dx_physics_PhysicsShape_getPolygonCenter(lua_State*) */

void lua_cocos2dx_physics_PhysicsShape_getPolygonCenter(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 local_50 [3];
  int local_44;
  Vec2 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 1) {
    local_44 = 0;
    uVar3 = luaval_to_array_of_vec2
                      (param_1,2,&local_40,&local_44,"cc.PhysicsShape:getPolygonCenter");
    if (local_40 == (Vec2 *)0x0) {
      cocos2d::log("lua: ERROR: File %s: Line: %d, Function: %s",
                   "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/scripting/lua-bindings/proj.android/../manual/cocos2d/lua_cocos2dx_physics_manual.cpp"
                   ,0x313,"lua_cocos2dx_physics_PhysicsShape_getPolygonCenter");
      cocos2d::log("Invalid Native Object");
    }
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
      if (local_40 != (Vec2 *)0x0) {
        operator_delete__(local_40);
        uVar4 = 0;
        local_40 = (Vec2 *)0x0;
      }
    }
    else {
      local_50[0] = cocos2d::PhysicsShape::getPolygonCenter(local_40,local_44);
      if (local_40 != (Vec2 *)0x0) {
        operator_delete__(local_40);
        local_40 = (Vec2 *)0x0;
      }
      vec2_to_luaval(param_1,(Vec2 *)local_50);
      uVar4 = 1;
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "getPolygonCenter",iVar2 + -1,2);
    uVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

