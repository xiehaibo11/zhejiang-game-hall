
/* lua_cocos2dx_extension_ParticleSystem3D_setKeepLocal(lua_State*) */

undefined4 lua_cocos2dx_extension_ParticleSystem3D_setKeepLocal(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ParticleSystem3D *this;
  ulong uVar3;
  undefined4 uVar4;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ParticleSystem3D *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"cc.ParticleSystem3D:setKeepLocal");
    if ((uVar3 & 1) != 0) {
      cocos2d::ParticleSystem3D::setKeepLocal(this,local_3c[0]);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_009b2bec;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_ParticleSystem3D_setKeepLocal\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ParticleSystem3D:setKeepLocal",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_009b2bec:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

