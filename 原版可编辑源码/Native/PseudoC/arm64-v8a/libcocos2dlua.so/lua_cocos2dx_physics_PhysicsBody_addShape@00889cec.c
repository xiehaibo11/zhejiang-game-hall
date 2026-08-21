
/* lua_cocos2dx_physics_PhysicsBody_addShape(lua_State*) */

void lua_cocos2dx_physics_PhysicsBody_addShape(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  void *pvVar6;
  long lVar7;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar4 = luaval_is_usertype(param_1,2,"cc.PhysicsShape",0), (uVar4 & 1) == 0)) {
      luaval_to_boolean(param_1,3,local_3c,"cc.PhysicsBody:addShape");
    }
    else {
      uVar5 = tolua_tousertype(param_1,2,0);
      uVar4 = luaval_to_boolean(param_1,3,local_3c,"cc.PhysicsBody:addShape");
      if ((uVar4 & 1) != 0) {
        lVar7 = *plVar3;
        goto LAB_00889dfc;
      }
    }
LAB_00889e68:
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_physics_PhysicsBody_addShape\'",0);
  }
  else {
    if (iVar2 == 2) {
      if (((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 1 < iVar2)) &&
         (uVar4 = luaval_is_usertype(param_1,2,"cc.PhysicsShape",0), (uVar4 & 1) != 0)) {
        uVar5 = tolua_tousertype(param_1,2,0);
        lVar7 = *plVar3;
        local_3c[0] = true;
LAB_00889dfc:
        pvVar6 = (void *)(**(code **)(lVar7 + 0x60))(plVar3,uVar5,local_3c[0]);
        if (pvVar6 == (void *)0x0) {
          lua_pushnil(param_1);
          uVar5 = 1;
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                     "cc.PhysicsShape");
          uVar5 = 1;
        }
        goto LAB_00889e80;
      }
      goto LAB_00889e68;
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PhysicsBody:addShape",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_00889e80:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

