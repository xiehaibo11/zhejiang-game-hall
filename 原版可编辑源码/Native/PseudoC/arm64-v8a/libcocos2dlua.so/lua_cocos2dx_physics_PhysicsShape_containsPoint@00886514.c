
/* lua_cocos2dx_physics_PhysicsShape_containsPoint(lua_State*) */

void lua_cocos2dx_physics_PhysicsShape_containsPoint(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  PhysicsShape *this;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (PhysicsShape *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_40 = 0;
    uVar4 = luaval_to_vec2(param_1,2,(Vec2 *)&local_40,"cc.PhysicsShape:containsPoint");
    if ((uVar4 & 1) != 0) {
      uVar3 = cocos2d::PhysicsShape::containsPoint(this,(Vec2 *)&local_40);
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar5 = 1;
      goto LAB_008865d4;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_physics_PhysicsShape_containsPoint\'",
                0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PhysicsShape:containsPoint",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_008865d4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

