
/* lua_cocos2dx_physics_PhysicsBody_setTag(lua_State*) */

undefined4 lua_cocos2dx_physics_PhysicsBody_setTag(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"cc.PhysicsBody:setTag");
    if ((uVar4 & 1) != 0) {
      *(int *)(lVar3 + 0xbc) = local_3c;
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_0088c110;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_physics_PhysicsBody_setTag\'",
                0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PhysicsBody:setTag",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_0088c110:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

