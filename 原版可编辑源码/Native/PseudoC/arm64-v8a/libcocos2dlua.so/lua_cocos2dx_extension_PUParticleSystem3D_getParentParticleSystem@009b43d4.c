
/* lua_cocos2dx_extension_PUParticleSystem3D_getParentParticleSystem(lua_State*) */

undefined8 lua_cocos2dx_extension_PUParticleSystem3D_getParentParticleSystem(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pvVar4 = *(void **)(lVar2 + 0x4c0);
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "cc.PUParticleSystem3D");
    }
    uVar3 = 1;
  }
  else {
                    /* catch() { ... } // from try @ 009b4388 with catch @ 009b4404 */
                    /* catch() { ... } // from try @ 009b43b4 with catch @ 009b4418 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PUParticleSystem3D:getParentParticleSystem",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

