
/* lua_cocos2dx_extension_PUParticleSystem3D_isMarkedForEmission(lua_State*) */

bool lua_cocos2dx_extension_PUParticleSystem3D_isMarkedForEmission(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
                    /* try { // try from 009b3bbc to 00ab3beb has its CatchHandler @ 009b3bbc
                       catch() { ... } // from try @ 009b3bbc with catch @ 009b3bbc
                       catch() { ... } // from try @ 009b3c30 with catch @ 009b3bbc */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    tolua_pushboolean(param_1,*(undefined1 *)(lVar2 + 0x490));
  }
  else {
                    /* try { // try from 009b3bec to 00ab3bf7 has its CatchHandler @ 009b3c68 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PUParticleSystem3D:isMarkedForEmission",iVar1,0);
  }
                    /* try { // try from 009b3c18 to 00ab3c2f has its CatchHandler @ 009b3c7c */
  return iVar1 == 0;
}

