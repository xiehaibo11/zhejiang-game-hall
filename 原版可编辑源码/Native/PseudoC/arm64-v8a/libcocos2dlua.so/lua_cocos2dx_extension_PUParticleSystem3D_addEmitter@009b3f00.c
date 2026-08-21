
/* lua_cocos2dx_extension_PUParticleSystem3D_addEmitter(lua_State*) */

undefined4 lua_cocos2dx_extension_PUParticleSystem3D_addEmitter(lua_State *param_1)

{
  int iVar1;
  PUParticleSystem3D *this;
  ulong uVar2;
  PUEmitter *pPVar3;
  
  this = (PUParticleSystem3D *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 009b3f2c to 00ab3f5b has its CatchHandler @ 009b3f2c
                       catch() { ... } // from try @ 009b3f2c with catch @ 009b3f2c
                       catch() { ... } // from try @ 009b3fa0 with catch @ 009b3f2c */
  if (iVar1 + -1 == 1) {
                    /* try { // try from 009b3f5c to 00ab3f67 has its CatchHandler @ 009b3fd8 */
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"cc.PUEmitter",0), (uVar2 & 1) != 0)) {
      pPVar3 = (PUEmitter *)tolua_tousertype(param_1,2,0);
      cocos2d::PUParticleSystem3D::addEmitter(this,pPVar3);
                    /* try { // try from 009b3f88 to 00ab3f9f has its CatchHandler @ 009b3fec */
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_PUParticleSystem3D_addEmitter\'"
                ,0);
  }
  else {
                    /* try { // try from 009b3fa0 to 00ab400b has its CatchHandler @ 009b3f2c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PUParticleSystem3D:addEmitter",iVar1 + -1,1);
  }
                    /* catch() { ... } // from try @ 009b3f5c with catch @ 009b3fd8 */
  return 0;
}

