
/* lua_cocos2dx_extension_PUParticleSystem3D_rotationOffset(lua_State*) */

undefined4 lua_cocos2dx_extension_PUParticleSystem3D_rotationOffset(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  PUParticleSystem3D *this;
  ulong uVar3;
  undefined4 uVar4;
  Vec3 aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (PUParticleSystem3D *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 009b4784 to 00ab47b3 has its CatchHandler @ 009b4784
                       catch() { ... } // from try @ 009b4784 with catch @ 009b4784
                       catch() { ... } // from try @ 009b47f8 with catch @ 009b4784 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Vec3::Vec3(aVStack_48);
                    /* try { // try from 009b47b4 to 00ab47bf has its CatchHandler @ 009b4830 */
    uVar3 = luaval_to_vec3(param_1,2,aVStack_48,"cc.PUParticleSystem3D:rotationOffset");
    if ((uVar3 & 1) != 0) {
      cocos2d::PUParticleSystem3D::rotationOffset(this,aVStack_48);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_009b4818;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_PUParticleSystem3D_rotationOffset\'"
                ,0);
  }
  else {
                    /* try { // try from 009b47e0 to 00ab47f7 has its CatchHandler @ 009b4844 */
                    /* try { // try from 009b47f8 to 00ab4863 has its CatchHandler @ 009b4784 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PUParticleSystem3D:rotationOffset",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_009b4818:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 009b47b4 with catch @ 009b4830 */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

