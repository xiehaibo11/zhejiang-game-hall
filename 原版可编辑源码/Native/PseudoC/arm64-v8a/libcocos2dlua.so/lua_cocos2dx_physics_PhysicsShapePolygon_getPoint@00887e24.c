
/* lua_cocos2dx_physics_PhysicsShapePolygon_getPoint(lua_State*) */

void lua_cocos2dx_physics_PhysicsShapePolygon_getPoint(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 local_48 [3];
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"cc.PhysicsShapePolygon:getPoint");
    if ((uVar4 & 1) != 0) {
      local_48[0] = cocos2d::PhysicsShapePolygon::getPoint(iVar2);
      vec2_to_luaval(param_1,(Vec2 *)local_48);
      uVar5 = 1;
      goto LAB_00887ee4;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_physics_PhysicsShapePolygon_getPoint\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PhysicsShapePolygon:getPoint",iVar3 + -1,1);
  }
  uVar5 = 0;
LAB_00887ee4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

