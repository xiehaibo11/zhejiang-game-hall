
/* lua_cocos2dx_ParticleSystem_initWithFile(lua_State*) */

bool lua_cocos2dx_ParticleSystem_initWithFile(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ParticleSystem *this;
  ulong uVar4;
  bool bVar5;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ParticleSystem *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar4 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"cc.ParticleSystem:initWithFile");
    bVar5 = (uVar4 & 1) == 0;
    if (bVar5) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_ParticleSystem_initWithFile\'",0);
    }
    else {
      uVar3 = cocos2d::ParticleSystem::initWithFile(this,(basic_string *)&local_50);
      tolua_pushboolean(param_1,uVar3 & 1);
    }
    bVar5 = !bVar5;
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ParticleSystem:initWithFile",iVar2 + -1,1);
    bVar5 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

