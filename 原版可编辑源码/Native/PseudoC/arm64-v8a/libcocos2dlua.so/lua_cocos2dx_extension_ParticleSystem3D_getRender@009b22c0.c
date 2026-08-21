
/* lua_cocos2dx_extension_ParticleSystem3D_getRender(lua_State*) */

undefined8 lua_cocos2dx_extension_ParticleSystem3D_getRender(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
                    /* try { // try from 009b22c4 to 00ab22cb has its CatchHandler @ 009b22cc */
                    /* catch() { ... } // from try @ 009b227c with catch @ 009b22cc
                       catch() { ... } // from try @ 009b22c4 with catch @ 009b22cc
                       try { // try from 009b22cc to 00ab22eb has its CatchHandler @ 009b2244 */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pvVar4 = *(void **)(lVar2 + 0x328);
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "cc.Particle3DRender");
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ParticleSystem3D:getRender",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

