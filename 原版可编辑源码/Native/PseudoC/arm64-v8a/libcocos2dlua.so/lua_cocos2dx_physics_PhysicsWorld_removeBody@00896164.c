
/* lua_cocos2dx_physics_PhysicsWorld_removeBody(lua_State*) */

undefined4 lua_cocos2dx_physics_PhysicsWorld_removeBody(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar5 = luaval_to_int32(param_1,2,&local_3c,"cc.PhysicsWorld:removeBody");
    if ((uVar5 & 1) == 0) {
      if (((param_1 == (lua_State *)0x0) || (iVar3 = lua_gettop(param_1), iVar3 < 2)) ||
         (uVar5 = luaval_is_usertype(param_1,2,"cc.PhysicsBody",0), (uVar5 & 1) == 0))
      goto LAB_00896248;
      uVar6 = tolua_tousertype(param_1,2,0);
      (**(code **)(*plVar4 + 0x18))(plVar4,uVar6);
    }
    else {
      (**(code **)(*plVar4 + 0x20))(plVar4,local_3c);
    }
    uVar7 = 1;
    lua_settop(param_1,1);
  }
  else {
LAB_00896248:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PhysicsWorld:removeBody",iVar2 + -1,1);
    uVar7 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

