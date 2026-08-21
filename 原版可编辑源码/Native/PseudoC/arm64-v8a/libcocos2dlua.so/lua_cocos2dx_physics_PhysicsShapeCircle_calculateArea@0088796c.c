
/* lua_cocos2dx_physics_PhysicsShapeCircle_calculateArea(lua_State*) */

void lua_cocos2dx_physics_PhysicsShapeCircle_calculateArea(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  double local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_number(param_1,2,&local_30,"cc.PhysicsShapeCircle:calculateArea");
    if ((uVar3 & 1) != 0) {
      fVar5 = (float)cocos2d::PhysicsShapeCircle::calculateArea((float)local_30);
      tolua_pushnumber((double)fVar5,param_1);
      uVar4 = 1;
      goto LAB_00887a10;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_physics_PhysicsShapeCircle_calculateArea\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.PhysicsShapeCircle:calculateArea",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00887a10:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

