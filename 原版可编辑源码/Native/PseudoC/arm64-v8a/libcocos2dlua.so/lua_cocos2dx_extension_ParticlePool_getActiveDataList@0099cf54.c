
/* lua_cocos2dx_extension_ParticlePool_getActiveDataList(lua_State*) */

undefined8 lua_cocos2dx_extension_ParticlePool_getActiveDataList(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    lua_createtable(param_1,0,0,0);
    if (*(long *)(lVar2 + 0x18) != 0) {
      lVar5 = *(long *)(lVar2 + 0x10);
      lVar2 = lVar2 + 8;
      if (lVar5 != lVar2) {
        iVar1 = 1;
        lVar4 = *(long *)(lVar5 + 0x10);
        while( true ) {
          if (lVar4 != 0) {
            lua_pushnumber((double)iVar1,param_1);
            tolua_pushusertype(param_1,lVar2,"cc.ParticlePool");
            lua_rawset(param_1,0xfffffffd);
            iVar1 = iVar1 + 1;
          }
          lVar5 = *(long *)(lVar5 + 8);
          if (lVar5 == lVar2) break;
          lVar4 = *(long *)(lVar5 + 0x10);
        }
      }
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ParticlePool:getActiveParticleList",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

