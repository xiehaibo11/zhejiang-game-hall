
/* lua_cocos2dx_extension_PUParticleSystem3D_forceEmission(lua_State*) */

undefined4 lua_cocos2dx_extension_PUParticleSystem3D_forceEmission(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  PUEmitter *pPVar4;
  ulong uVar5;
  undefined4 uVar6;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pPVar4 = (PUEmitter *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar5 = luaval_is_usertype(param_1,2,"cc.PUEmitter",0), (uVar5 & 1) == 0)) {
      luaval_to_uint32(param_1,3,&local_3c,"cc.PUParticleSystem3D:forceEmission");
    }
    else {
      uVar3 = tolua_tousertype(param_1,2,0);
      uVar5 = luaval_to_uint32(param_1,3,&local_3c,"cc.PUParticleSystem3D:forceEmission");
      if ((uVar5 & 1) != 0) {
        cocos2d::PUParticleSystem3D::forceEmission(pPVar4,uVar3);
        uVar6 = 1;
        lua_settop(param_1,1);
        goto LAB_009b3aa8;
      }
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_PUParticleSystem3D_forceEmission\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012e8b5a,
               iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_009b3aa8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

