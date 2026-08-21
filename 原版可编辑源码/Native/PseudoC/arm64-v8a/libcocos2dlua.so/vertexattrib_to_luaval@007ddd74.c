
/* vertexattrib_to_luaval(lua_State*, cocos2d::VertexAttrib const&) */

void vertexattrib_to_luaval(lua_State *param_1,VertexAttrib *param_2)

{
  VertexAttrib *pVVar1;
  undefined8 uVar2;
  
  if (param_1 != (lua_State *)0x0) {
    lua_createtable(param_1,0,0);
    lua_pushstring(param_1,"index");
    uVar2 = NEON_ucvtf((ulong)*(uint *)param_2);
    lua_pushnumber(uVar2,param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"size");
    lua_pushnumber((double)(long)*(int *)(param_2 + 4),param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"type");
    uVar2 = NEON_ucvtf((ulong)*(uint *)(param_2 + 8));
    lua_pushnumber(uVar2,param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"name");
    pVVar1 = param_2 + 0x11;
    if (((byte)param_2[0x10] & 1) != 0) {
      pVVar1 = *(VertexAttrib **)(param_2 + 0x20);
    }
    tolua_pushstring(param_1,pVVar1);
    lua_rawset(param_1,0xfffffffd);
    return;
  }
  return;
}

