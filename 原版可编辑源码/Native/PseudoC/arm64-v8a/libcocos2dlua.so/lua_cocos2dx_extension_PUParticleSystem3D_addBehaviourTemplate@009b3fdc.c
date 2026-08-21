
/* lua_cocos2dx_extension_PUParticleSystem3D_addBehaviourTemplate(lua_State*) */

undefined4 lua_cocos2dx_extension_PUParticleSystem3D_addBehaviourTemplate(lua_State *param_1)

{
  int iVar1;
  PUParticleSystem3D *this;
  ulong uVar2;
  PUBehaviour *pPVar3;
  
                    /* catch() { ... } // from try @ 009b3f88 with catch @ 009b3fec */
  this = (PUParticleSystem3D *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"cc.PUBehaviour",0), (uVar2 & 1) != 0)) {
      pPVar3 = (PUBehaviour *)tolua_tousertype(param_1,2,0);
      cocos2d::PUParticleSystem3D::addBehaviourTemplate(this,pPVar3);
      lua_settop(param_1,1);
      return 1;
    }
                    /* try { // try from 009b4094 to 00ab40c3 has its CatchHandler @ 009b4094
                       catch() { ... } // from try @ 009b4094 with catch @ 009b4094
                       catch() { ... } // from try @ 009b4108 with catch @ 009b4094 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_PUParticleSystem3D_addBehaviourTemplate\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PUParticleSystem3D:addBehaviourTemplate",iVar1 + -1,1);
  }
  return 0;
}

