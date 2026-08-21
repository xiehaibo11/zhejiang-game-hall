
/* lua_cocos2dx_physics_PhysicsJointRotaryLimit_construct(lua_State*) */

void lua_cocos2dx_physics_PhysicsJointRotaryLimit_construct(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  PhysicsBody *pPVar5;
  PhysicsBody *pPVar6;
  PhysicsJointRotaryLimit *pPVar7;
  char *pcVar8;
  undefined8 uVar9;
  double local_58;
  double dStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 5) {
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar4 = luaval_is_usertype(param_1,2,"cc.PhysicsBody",0), (uVar4 & 1) != 0)) {
      pPVar5 = (PhysicsBody *)tolua_tousertype(param_1,2,0);
      iVar3 = lua_gettop(param_1);
      if ((2 < iVar3) &&
         (uVar4 = luaval_is_usertype(param_1,3,"cc.PhysicsBody",0), (uVar4 & 1) != 0)) {
        pPVar6 = (PhysicsBody *)tolua_tousertype(param_1,3,0);
        uVar4 = luaval_to_number(param_1,4,&dStack_50,"cc.PhysicsJointRotaryLimit:construct");
        if (((uVar4 & 1) != 0) &&
           (uVar4 = luaval_to_number(param_1,5,&local_58,"cc.PhysicsJointRotaryLimit:construct"),
           (uVar4 & 1) != 0)) {
          pPVar7 = (PhysicsJointRotaryLimit *)
                   cocos2d::PhysicsJointRotaryLimit::construct
                             (pPVar5,pPVar6,(float)dStack_50,(float)local_58);
          goto joined_r0x00893e4c;
        }
      }
    }
  }
  else if (((iVar2 == 3) && (param_1 != (lua_State *)0x0)) &&
          ((iVar3 = lua_gettop(param_1), 1 < iVar3 &&
           (uVar4 = luaval_is_usertype(param_1,2,"cc.PhysicsBody",0), (uVar4 & 1) != 0)))) {
    pPVar5 = (PhysicsBody *)tolua_tousertype(param_1,2,0);
    iVar3 = lua_gettop(param_1);
    if ((2 < iVar3) && (uVar4 = luaval_is_usertype(param_1,3,"cc.PhysicsBody",0), (uVar4 & 1) != 0))
    {
      pPVar6 = (PhysicsBody *)tolua_tousertype(param_1,3,0);
      pPVar7 = (PhysicsJointRotaryLimit *)cocos2d::PhysicsJointRotaryLimit::construct(pPVar5,pPVar6)
      ;
joined_r0x00893e4c:
      if (pPVar7 == (PhysicsJointRotaryLimit *)0x0) {
        lua_pushnil(param_1);
        uVar9 = 1;
      }
      else {
        pcVar8 = getLuaTypeName<cocos2d::PhysicsJointRotaryLimit>
                           (pPVar7,"cc.PhysicsJointRotaryLimit");
        tolua_pushusertype(param_1,pPVar7,pcVar8);
        uVar9 = 1;
      }
      goto LAB_00893e84;
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
             "cc.PhysicsJointRotaryLimit:construct",iVar2 + -1,4);
  uVar9 = 0;
LAB_00893e84:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}

