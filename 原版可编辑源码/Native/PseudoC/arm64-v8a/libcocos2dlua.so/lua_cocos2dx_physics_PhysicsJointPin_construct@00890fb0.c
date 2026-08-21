
/* lua_cocos2dx_physics_PhysicsJointPin_construct(lua_State*) */

void lua_cocos2dx_physics_PhysicsJointPin_construct(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  PhysicsBody *pPVar5;
  PhysicsBody *pPVar6;
  PhysicsJointPin *pPVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 4) {
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar4 = luaval_is_usertype(param_1,2,"cc.PhysicsBody",0), (uVar4 & 1) != 0)) {
      pPVar5 = (PhysicsBody *)tolua_tousertype(param_1,2,0);
      iVar3 = lua_gettop(param_1);
      if ((2 < iVar3) &&
         (uVar4 = luaval_is_usertype(param_1,3,"cc.PhysicsBody",0), (uVar4 & 1) != 0)) {
        pPVar6 = (PhysicsBody *)tolua_tousertype(param_1,3,0);
        local_50 = 0;
        uVar4 = luaval_to_vec2(param_1,4,(Vec2 *)&local_50,"cc.PhysicsJointPin:construct");
        if ((uVar4 & 1) != 0) {
          pPVar7 = (PhysicsJointPin *)
                   cocos2d::PhysicsJointPin::construct(pPVar5,pPVar6,(Vec2 *)&local_50);
joined_r0x00891190:
          if (pPVar7 == (PhysicsJointPin *)0x0) {
            lua_pushnil(param_1);
            uVar8 = 1;
          }
          else {
            pcVar9 = getLuaTypeName<cocos2d::PhysicsJointPin>(pPVar7,"cc.PhysicsJointPin");
            tolua_pushusertype(param_1,pPVar7,pcVar9);
            uVar8 = 1;
          }
          goto LAB_008911e0;
        }
      }
    }
  }
  else if (((iVar2 == 5) && (param_1 != (lua_State *)0x0)) &&
          ((iVar3 = lua_gettop(param_1), 1 < iVar3 &&
           (uVar4 = luaval_is_usertype(param_1,2,"cc.PhysicsBody",0), (uVar4 & 1) != 0)))) {
    pPVar5 = (PhysicsBody *)tolua_tousertype(param_1,2,0);
    iVar3 = lua_gettop(param_1);
    if ((2 < iVar3) && (uVar4 = luaval_is_usertype(param_1,3,"cc.PhysicsBody",0), (uVar4 & 1) != 0))
    {
      pPVar6 = (PhysicsBody *)tolua_tousertype(param_1,3,0);
      local_50 = 0;
      uVar4 = luaval_to_vec2(param_1,4,(Vec2 *)&local_50,"cc.PhysicsJointPin:construct");
      if ((uVar4 & 1) != 0) {
        local_58 = 0;
        uVar4 = luaval_to_vec2(param_1,5,(Vec2 *)&local_58,"cc.PhysicsJointPin:construct");
        if ((uVar4 & 1) != 0) {
          pPVar7 = (PhysicsJointPin *)
                   cocos2d::PhysicsJointPin::construct
                             (pPVar5,pPVar6,(Vec2 *)&local_50,(Vec2 *)&local_58);
          goto joined_r0x00891190;
        }
      }
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
             "cc.PhysicsJointPin:construct",iVar2 + -1,3);
  uVar8 = 0;
LAB_008911e0:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}

