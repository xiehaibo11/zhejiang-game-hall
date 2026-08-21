
/* lua_cocos2dx_ParticleSystem_setEndColor(lua_State*) */

undefined4 lua_cocos2dx_ParticleSystem_setEndColor(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Color4F::Color4F((Color4F *)&local_48);
    uVar4 = luaval_to_color4f(param_1,2,(Color4F *)&local_48,"cc.ParticleSystem:setEndColor");
    if ((uVar4 & 1) != 0) {
      *(undefined8 *)(lVar3 + 0x4dc) = uStack_40;
      *(undefined8 *)(lVar3 + 0x4d4) = local_48;
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_0084a404;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ParticleSystem_setEndColor\'",
                0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ParticleSystem:setEndColor",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_0084a404:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

