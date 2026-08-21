
/* lua_cocos2dx_ParticleMeteor_initWithTotalParticles(lua_State*) */

void lua_cocos2dx_ParticleMeteor_initWithTotalParticles(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar5 = luaval_to_int32(param_1,2,&local_3c,"cc.ParticleMeteor:initWithTotalParticles");
    if ((uVar5 & 1) != 0) {
      uVar3 = (**(code **)(*plVar4 + 0x6a0))(plVar4,local_3c);
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar6 = 1;
      goto LAB_00851450;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ParticleMeteor_initWithTotalParticles\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ParticleMeteor:initWithTotalParticles",iVar2 + -1,1);
  }
  uVar6 = 0;
LAB_00851450:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

