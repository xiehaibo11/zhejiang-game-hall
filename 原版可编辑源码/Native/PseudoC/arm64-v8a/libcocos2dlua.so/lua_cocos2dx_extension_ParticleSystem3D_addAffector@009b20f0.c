
/* lua_cocos2dx_extension_ParticleSystem3D_addAffector(lua_State*) */

undefined4 lua_cocos2dx_extension_ParticleSystem3D_addAffector(lua_State *param_1)

{
  int iVar1;
  ParticleSystem3D *this;
  ulong uVar2;
  Particle3DAffector *pPVar3;
  
  this = (ParticleSystem3D *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 009b2120 to 00ab212f has its CatchHandler @ 009b2228 */
  if (iVar1 + -1 == 1) {
                    /* try { // try from 009b2130 to 00ab217f has its CatchHandler @ 009b2078 */
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"cc.Particle3DAffector",0), (uVar2 & 1) != 0)) {
      pPVar3 = (Particle3DAffector *)tolua_tousertype(param_1,2,0);
      cocos2d::ParticleSystem3D::addAffector(this,pPVar3);
      lua_settop(param_1,1);
      return 1;
                    /* try { // try from 009b2180 to 00ab218f has its CatchHandler @ 009b2224 */
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_ParticleSystem3D_addAffector\'"
                ,0);
  }
  else {
                    /* try { // try from 009b2190 to 00ab2243 has its CatchHandler @ 009b2078 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ParticleSystem3D:addAffector",iVar1 + -1,1);
  }
  return 0;
}

