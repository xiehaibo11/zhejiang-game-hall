
/* lua_cocos2dx_physics_PhysicsBody_applyImpulse(lua_State*) */

undefined4 lua_cocos2dx_physics_PhysicsBody_applyImpulse(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_58 = 0;
    local_50 = 0;
    uVar4 = luaval_to_vec2(param_1,2,(Vec2 *)&local_50,"cc.PhysicsBody:applyImpulse");
    uVar5 = luaval_to_vec2(param_1,3,(Vec2 *)&local_58,"cc.PhysicsBody:applyImpulse");
    if (((uVar4 & 1) == 0) || ((uVar5 & 1) == 0)) {
LAB_00889a30:
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_physics_PhysicsBody_applyImpulse\'",
                  0);
      goto LAB_00889a68;
    }
    puVar6 = &local_58;
    pcVar7 = *(code **)(*plVar3 + 0x78);
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.PhysicsBody:applyImpulse",iVar2 + -1,1);
LAB_00889a68:
      uVar8 = 0;
      goto LAB_00889a6c;
    }
    local_50 = 0;
    uVar4 = luaval_to_vec2(param_1,2,(Vec2 *)&local_50,"cc.PhysicsBody:applyImpulse");
    if ((uVar4 & 1) == 0) goto LAB_00889a30;
    pcVar7 = *(code **)(*plVar3 + 0x78);
    puVar6 = &cocos2d::Vec2::ZERO;
  }
  (*pcVar7)(plVar3,&local_50,puVar6);
  uVar8 = 1;
  lua_settop(param_1,1);
LAB_00889a6c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

