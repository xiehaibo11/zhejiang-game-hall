
/* lua_cocos2dx_extension_ParticleSystem3D_resumeParticleSystem(lua_State*) */

bool lua_cocos2dx_extension_ParticleSystem3D_resumeParticleSystem(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  
                    /* try { // try from 009b2008 to 00ab2077 has its CatchHandler @ 009b1f10 */
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    (**(code **)(*plVar2 + 0x558))(plVar2);
                    /* catch() { ... } // from try @ 009b1f8c with catch @ 009b2058 */
                    /* catch() { ... } // from try @ 009b1fd4 with catch @ 009b205c */
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012e822e,
               iVar1,0);
  }
  return iVar1 == 0;
}

