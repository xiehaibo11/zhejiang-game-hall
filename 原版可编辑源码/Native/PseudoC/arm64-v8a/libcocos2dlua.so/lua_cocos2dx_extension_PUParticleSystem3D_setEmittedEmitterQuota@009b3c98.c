
/* lua_cocos2dx_extension_PUParticleSystem3D_setEmittedEmitterQuota(lua_State*) */

undefined4 lua_cocos2dx_extension_PUParticleSystem3D_setEmittedEmitterQuota(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 009b3d00 with catch @ 009b3cc4
                       catch() { ... } // from try @ 009b3d4c with catch @ 009b3cc4 */
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_uint32(param_1,2,&local_3c,"cc.PUParticleSystem3D:setEmittedEmitterQuota");
    if ((uVar4 & 1) != 0) {
                    /* try { // try from 009b3cfc to 00ab3cff has its CatchHandler @ 009b3d4c */
                    /* try { // try from 009b3d00 to 00ab3d43 has its CatchHandler @ 009b3cc4 */
      *(uint *)(lVar3 + 0x400) = local_3c;
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_009b3d50;
    }
                    /* try { // try from 009b3d44 to 00ab3d4b has its CatchHandler @ 009b3d4c */
    tolua_error(param_1,&DAT_012e8cd9,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PUParticleSystem3D:setEmittedEmitterQuota",iVar2 + -1,1);
  }
                    /* catch() { ... } // from try @ 009b3cfc with catch @ 009b3d4c
                       catch() { ... } // from try @ 009b3d44 with catch @ 009b3d4c
                       try { // try from 009b3d4c to 00ab3d6b has its CatchHandler @ 009b3cc4 */
  uVar5 = 0;
LAB_009b3d50:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

