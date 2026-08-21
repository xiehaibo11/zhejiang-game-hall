
/* lua_cocos2dx_extension_ParticleSystem3D_removeAffector(lua_State*) */

undefined4 lua_cocos2dx_extension_ParticleSystem3D_removeAffector(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ParticleSystem3D *this;
  ulong uVar3;
  undefined4 uVar4;
  int local_3c;
  long local_38;
  
                    /* try { // try from 009b1f10 to 00ab1f8b has its CatchHandler @ 009b1f10
                       catch() { ... } // from try @ 009b1f10 with catch @ 009b1f10
                       catch() { ... } // from try @ 009b2008 with catch @ 009b1f10 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ParticleSystem3D *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"cc.ParticleSystem3D:removeAffector");
    if ((uVar3 & 1) != 0) {
      cocos2d::ParticleSystem3D::removeAffector(this,local_3c);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_009b1fc4;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_ParticleSystem3D_removeAffector\'"
                ,0);
  }
  else {
                    /* try { // try from 009b1f8c to 00ab1f9b has its CatchHandler @ 009b2058 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ParticleSystem3D:removeAffector",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_009b1fc4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009b1fd4 to 00ab2007 has its CatchHandler @ 009b205c */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

