
/* lua_cocos2dx_extension_PUParticleSystem3D_setDefaultWidth(lua_State*) */

undefined4 lua_cocos2dx_extension_PUParticleSystem3D_setDefaultWidth(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  PUParticleSystem3D *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
                    /* try { // try from 009b40c4 to 00ab40cf has its CatchHandler @ 009b4140 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (PUParticleSystem3D *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 009b40f0 to 00ab4107 has its CatchHandler @ 009b4154 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* try { // try from 009b4108 to 00ab4173 has its CatchHandler @ 009b4094 */
    uVar3 = luaval_to_number(param_1,2,&local_40,"cc.PUParticleSystem3D:setDefaultWidth");
    if ((uVar3 & 1) != 0) {
      cocos2d::PUParticleSystem3D::setDefaultWidth(this,(float)local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_009b4178;
    }
    tolua_error(param_1,&DAT_012e8f2b,0);
  }
  else {
                    /* catch() { ... } // from try @ 009b40c4 with catch @ 009b4140 */
                    /* catch() { ... } // from try @ 009b40f0 with catch @ 009b4154 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PUParticleSystem3D:setDefaultWidth",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_009b4178:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

