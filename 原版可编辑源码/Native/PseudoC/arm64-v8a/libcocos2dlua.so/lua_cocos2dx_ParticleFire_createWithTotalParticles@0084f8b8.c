
/* lua_cocos2dx_ParticleFire_createWithTotalParticles(lua_State*) */

void lua_cocos2dx_ParticleFire_createWithTotalParticles(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  int local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_1,2,&local_2c,"cc.ParticleFire:createWithTotalParticles");
    if ((uVar3 & 1) != 0) {
      pvVar4 = (void *)cocos2d::ParticleFire::createWithTotalParticles(local_2c);
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar5 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "cc.ParticleFire");
        uVar5 = 1;
      }
      goto LAB_0084f96c;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ParticleFire_createWithTotalParticles\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.ParticleFire:createWithTotalParticles",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_0084f96c:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

