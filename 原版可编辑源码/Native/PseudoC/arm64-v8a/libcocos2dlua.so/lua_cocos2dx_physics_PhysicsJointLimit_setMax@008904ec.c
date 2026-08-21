
/* lua_cocos2dx_physics_PhysicsJointLimit_setMax(lua_State*) */

undefined4 lua_cocos2dx_physics_PhysicsJointLimit_setMax(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  PhysicsJointLimit *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (PhysicsJointLimit *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"cc.PhysicsJointLimit:setMax");
    if ((uVar3 & 1) != 0) {
      cocos2d::PhysicsJointLimit::setMax(this,(float)local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_008905ac;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_physics_PhysicsJointLimit_setMax\'",0)
    ;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PhysicsJointLimit:setMax",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_008905ac:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

