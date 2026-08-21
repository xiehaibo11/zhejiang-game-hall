
/* physics_raycastinfo_to_luaval(lua_State*, cocos2d::PhysicsRayCastInfo const&) */

void physics_raycastinfo_to_luaval(lua_State *param_1,PhysicsRayCastInfo *param_2)

{
  void *pvVar1;
  
  if (param_1 != (lua_State *)0x0) {
    lua_createtable(param_1,0,0);
    lua_pushstring(param_1,"shape");
    pvVar1 = *(void **)param_2;
    if (pvVar1 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar1 + 0xc),(int *)((long)pvVar1 + 0x10),pvVar1,
                 "cc.PhysicsShape");
    }
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"start");
    lua_createtable(param_1,0,0);
    lua_pushstring(param_1,"x");
    lua_pushnumber((double)*(float *)(param_2 + 8),param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,&DAT_014a23fd);
    lua_pushnumber((double)*(float *)(param_2 + 0xc),param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"ended");
    lua_createtable(param_1,0,0);
    lua_pushstring(param_1,"x");
    lua_pushnumber((double)*(float *)(param_2 + 0x10),param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,&DAT_014a23fd);
    lua_pushnumber((double)*(float *)(param_2 + 0x14),param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"contact");
    lua_createtable(param_1,0,0);
    lua_pushstring(param_1,"x");
    lua_pushnumber((double)*(float *)(param_2 + 0x18),param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,&DAT_014a23fd);
    lua_pushnumber((double)*(float *)(param_2 + 0x1c),param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"normal");
    lua_createtable(param_1,0,0);
    lua_pushstring(param_1,"x");
    lua_pushnumber((double)*(float *)(param_2 + 0x20),param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,&DAT_014a23fd);
    lua_pushnumber((double)*(float *)(param_2 + 0x24),param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"fraction");
    lua_pushnumber((double)*(float *)(param_2 + 0x28),param_1);
    lua_rawset(param_1,0xfffffffd);
    return;
  }
  return;
}

