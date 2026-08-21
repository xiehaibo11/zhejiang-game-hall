
/* lua_cocos2dx_physics_PhysicsBody_setLinearDamping(lua_State*) */

undefined4 lua_cocos2dx_physics_PhysicsBody_setLinearDamping(lua_State *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar4 = tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
    uVar5 = luaval_to_number(param_1,2,&local_40,"cc.PhysicsBody:setLinearDamping");
    if ((uVar5 & 1) != 0) {
      *(float *)(lVar4 + 0xb4) = (float)local_40;
      if ((float)local_40 == 0.0) {
        bVar2 = *(float *)(lVar4 + 0xb8) != 0.0;
      }
      else {
        bVar2 = true;
      }
      *(bool *)(lVar4 + 0xb0) = bVar2;
      uVar6 = 1;
      lua_settop(param_1,1);
      goto LAB_0088b8cc;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_physics_PhysicsBody_setLinearDamping\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PhysicsBody:setLinearDamping",iVar3 + -1,1);
  }
  uVar6 = 0;
LAB_0088b8cc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

