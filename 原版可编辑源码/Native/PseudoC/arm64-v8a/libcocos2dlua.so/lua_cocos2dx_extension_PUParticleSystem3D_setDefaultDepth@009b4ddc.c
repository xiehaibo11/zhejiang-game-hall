
/* lua_cocos2dx_extension_PUParticleSystem3D_setDefaultDepth(lua_State*) */

undefined4 lua_cocos2dx_extension_PUParticleSystem3D_setDefaultDepth(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  PUParticleSystem3D *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
                    /* try { // try from 009b4ddc to 00ab4e03 has its CatchHandler @ 009b4d3c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009b4e04 to 00ab4e0b has its CatchHandler @ 009b4e9c */
  this = (PUParticleSystem3D *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 009b4e0c to 00ab4e2b has its CatchHandler @ 009b4d3c */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* try { // try from 009b4e2c to 00ab4e33 has its CatchHandler @ 009b4e9c */
                    /* try { // try from 009b4e34 to 00ab4e53 has its CatchHandler @ 009b4d3c */
    uVar3 = luaval_to_number(param_1,2,&local_40,"cc.PUParticleSystem3D:setDefaultDepth");
    if ((uVar3 & 1) != 0) {
      cocos2d::PUParticleSystem3D::setDefaultDepth(this,(float)local_40);
                    /* try { // try from 009b4e54 to 00ab4e5f has its CatchHandler @ 009b4e9c */
      uVar4 = 1;
      lua_settop(param_1,1);
                    /* try { // try from 009b4e60 to 00ab4ea3 has its CatchHandler @ 009b4d3c */
      goto LAB_009b4e9c;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_PUParticleSystem3D_setDefaultDepth\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PUParticleSystem3D:setDefaultDepth",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_009b4e9c:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009b4e04 with catch @ 009b4e9c
                       catch(type#1 @ 00000000) { ... } // from try @ 009b4e2c with catch @ 009b4e9c
                       catch(type#1 @ 00000000) { ... } // from try @ 009b4e54 with catch @ 009b4e9c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009b4da4 with catch @ 009b4ea0
                       catch(type#1 @ 00000000) { ... } // from try @ 009b4dd0 with catch @ 009b4ea0
                        */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

