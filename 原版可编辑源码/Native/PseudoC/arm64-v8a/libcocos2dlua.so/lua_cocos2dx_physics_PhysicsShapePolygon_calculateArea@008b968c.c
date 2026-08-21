
/* lua_cocos2dx_physics_PhysicsShapePolygon_calculateArea(lua_State*) */

void lua_cocos2dx_physics_PhysicsShapePolygon_calculateArea(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  int local_44;
  Vec2 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 1) {
    local_44 = 0;
    uVar3 = luaval_to_array_of_vec2
                      (param_1,2,&local_40,&local_44,"cc.PhysicsShapePolygon:calculateArea");
    if (local_40 == (Vec2 *)0x0) {
      cocos2d::log("lua: ERROR: File %s: Line: %d, Function: %s",
                   "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/scripting/lua-bindings/proj.android/../manual/cocos2d/lua_cocos2dx_physics_manual.cpp"
                   ,0x3eb,"lua_cocos2dx_physics_PhysicsShapePolygon_calculateArea");
      cocos2d::log("Invalid Native Object");
    }
    if ((uVar3 & 1) != 0) {
      fVar5 = (float)cocos2d::PhysicsShapePolygon::calculateArea(local_40,local_44);
      if (local_40 != (Vec2 *)0x0) {
        operator_delete__(local_40);
        local_40 = (Vec2 *)0x0;
      }
      tolua_pushnumber((double)fVar5,param_1);
      uVar4 = 1;
      goto LAB_008b9794;
    }
    if (local_40 != (Vec2 *)0x0) {
      operator_delete__(local_40);
      uVar4 = 0;
      local_40 = (Vec2 *)0x0;
      goto LAB_008b9794;
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ","calculateArea",
               iVar2 + -1,2);
  }
  uVar4 = 0;
LAB_008b9794:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

