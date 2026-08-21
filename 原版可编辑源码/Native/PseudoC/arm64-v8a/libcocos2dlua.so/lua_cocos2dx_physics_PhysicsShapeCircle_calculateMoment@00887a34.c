
/* lua_cocos2dx_physics_PhysicsShapeCircle_calculateMoment(lua_State*) */

void lua_cocos2dx_physics_PhysicsShapeCircle_calculateMoment(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 local_60;
  double local_58;
  double dStack_50;
  long local_48;
  
  puVar5 = &local_60;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 4) {
    local_60 = 0;
    uVar3 = luaval_to_number(param_1,2,&dStack_50,"cc.PhysicsShapeCircle:calculateMoment");
    uVar4 = luaval_to_number(param_1,3,&local_58,"cc.PhysicsShapeCircle:calculateMoment");
    uVar6 = luaval_to_vec2(param_1,4,(Vec2 *)&local_60,"cc.PhysicsShapeCircle:calculateMoment");
    if ((((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) || ((uVar6 & 1) == 0)) {
LAB_00887b40:
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_physics_PhysicsShapeCircle_calculateMoment\'"
                  ,0);
      goto LAB_00887b78;
    }
  }
  else {
    if (iVar2 != 3) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
                 "cc.PhysicsShapeCircle:calculateMoment",iVar2 + -1,2);
LAB_00887b78:
      uVar7 = 0;
      goto LAB_00887b7c;
    }
    uVar3 = luaval_to_number(param_1,2,&dStack_50,"cc.PhysicsShapeCircle:calculateMoment");
    uVar4 = luaval_to_number(param_1,3,&local_58,"cc.PhysicsShapeCircle:calculateMoment");
    if (((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) goto LAB_00887b40;
    puVar5 = &cocos2d::Vec2::ZERO;
  }
  fVar8 = (float)cocos2d::PhysicsShapeCircle::calculateMoment
                           ((float)dStack_50,(float)local_58,(Vec2 *)puVar5);
  tolua_pushnumber((double)fVar8,param_1);
  uVar7 = 1;
LAB_00887b7c:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

