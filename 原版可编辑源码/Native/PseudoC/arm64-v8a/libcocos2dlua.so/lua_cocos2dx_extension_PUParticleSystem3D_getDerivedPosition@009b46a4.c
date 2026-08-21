
/* lua_cocos2dx_extension_PUParticleSystem3D_getDerivedPosition(lua_State*) */

void lua_cocos2dx_extension_PUParticleSystem3D_getDerivedPosition(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  PUParticleSystem3D *this;
  undefined4 local_48 [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 009b4650 with catch @ 009b46cc */
  this = (PUParticleSystem3D *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 009b467c with catch @ 009b46e0 */
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) {
    local_48[0] = cocos2d::PUParticleSystem3D::getDerivedPosition(this);
    vec3_to_luaval(param_1,(Vec3 *)local_48);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PUParticleSystem3D:getDerivedPosition",iVar2,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}

