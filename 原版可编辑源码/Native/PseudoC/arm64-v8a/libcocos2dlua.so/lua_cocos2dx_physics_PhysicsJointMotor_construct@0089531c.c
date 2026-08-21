
/* lua_cocos2dx_physics_PhysicsJointMotor_construct(lua_State*) */

void lua_cocos2dx_physics_PhysicsJointMotor_construct(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  PhysicsBody *pPVar5;
  PhysicsJointMotor *pPVar6;
  char *pcVar7;
  undefined8 uVar8;
  PhysicsBody *unaff_x20;
  uint uVar9;
  double local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 3) {
    if (param_1 == (lua_State *)0x0) {
LAB_00895464:
      luaval_to_number(param_1,4,&local_50,"cc.PhysicsJointMotor:construct");
    }
    else {
      iVar2 = lua_gettop(param_1);
      if ((iVar2 < 2) ||
         (uVar4 = luaval_is_usertype(param_1,2,"cc.PhysicsBody",0), (uVar4 & 1) == 0)) {
        uVar9 = 0;
      }
      else {
        unaff_x20 = (PhysicsBody *)tolua_tousertype(param_1,2,0);
        uVar9 = 1;
      }
      iVar2 = lua_gettop(param_1);
      if ((iVar2 < 3) ||
         (uVar4 = luaval_is_usertype(param_1,3,"cc.PhysicsBody",0), (uVar4 & 1) == 0))
      goto LAB_00895464;
      pPVar5 = (PhysicsBody *)tolua_tousertype(param_1,3,0);
      uVar3 = luaval_to_number(param_1,4,&local_50,"cc.PhysicsJointMotor:construct");
      if ((uVar9 & uVar3) != 0) {
        pPVar6 = (PhysicsJointMotor *)
                 cocos2d::PhysicsJointMotor::construct(unaff_x20,pPVar5,(float)local_50);
        if (pPVar6 == (PhysicsJointMotor *)0x0) {
          lua_pushnil(param_1);
          uVar8 = 1;
        }
        else {
          pcVar7 = getLuaTypeName<cocos2d::PhysicsJointMotor>(pPVar6,"cc.PhysicsJointMotor");
          tolua_pushusertype(param_1,pPVar6,pcVar7);
          uVar8 = 1;
        }
        goto LAB_00895494;
      }
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_physics_PhysicsJointMotor_construct\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.PhysicsJointMotor:construct",iVar2 + -1,3);
  }
  uVar8 = 0;
LAB_00895494:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

