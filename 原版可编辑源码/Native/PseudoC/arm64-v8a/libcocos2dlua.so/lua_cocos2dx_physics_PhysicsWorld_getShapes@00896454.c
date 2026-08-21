
/* lua_cocos2dx_physics_PhysicsWorld_getShapes(lua_State*) */

void lua_cocos2dx_physics_PhysicsWorld_getShapes(lua_State *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  Vec2 *pVVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pVVar4 = (Vec2 *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
    local_40 = 0;
    uVar5 = luaval_to_vec2(param_1,2,(Vec2 *)&local_40,"cc.PhysicsWorld:getShapes");
    if ((uVar5 & 1) != 0) {
      cocos2d::PhysicsWorld::getShapes(pVVar4);
      ccvector_to_luaval<cocos2d::PhysicsShape*>(param_1,(Vector *)&local_58);
      for (puVar1 = local_58; puVar1 != local_50; puVar1 = puVar1 + 1) {
        cocos2d::Ref::release((Ref *)*puVar1);
      }
      if (local_58 != (undefined8 *)0x0) {
        operator_delete(local_58);
      }
      uVar6 = 1;
      goto LAB_00896550;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_physics_PhysicsWorld_getShapes\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PhysicsWorld:getShapes",iVar3 + -1,1);
  }
  uVar6 = 0;
LAB_00896550:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

