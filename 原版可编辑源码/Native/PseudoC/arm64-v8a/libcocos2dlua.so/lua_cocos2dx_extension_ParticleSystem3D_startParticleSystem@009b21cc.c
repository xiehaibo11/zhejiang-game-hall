
/* lua_cocos2dx_extension_ParticleSystem3D_startParticleSystem(lua_State*) */

bool lua_cocos2dx_extension_ParticleSystem3D_startParticleSystem(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* catch() { ... } // from try @ 009b2180 with catch @ 009b2224 */
                    /* catch() { ... } // from try @ 009b2120 with catch @ 009b2228 */
    (**(code **)(*plVar2 + 0x540))(plVar2);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ParticleSystem3D:startParticleSystem",iVar1,0);
  }
                    /* catch() { ... } // from try @ 009b2280 with catch @ 009b2244
                       catch() { ... } // from try @ 009b22cc with catch @ 009b2244 */
  return iVar1 == 0;
}

