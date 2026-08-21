
/* mesh_vertex_attrib_to_luaval(lua_State*, cocos2d::MeshVertexAttrib const&) */

void mesh_vertex_attrib_to_luaval(lua_State *param_1,MeshVertexAttrib *param_2)

{
  undefined8 uVar1;
  
  if (param_1 != (lua_State *)0x0) {
    lua_createtable(param_1,0,0);
    lua_pushstring(param_1,"size");
    lua_pushnumber((double)(long)*(int *)param_2,param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"type");
    uVar1 = NEON_ucvtf((ulong)*(uint *)(param_2 + 4));
    lua_pushnumber(uVar1,param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"vertexAttrib");
    lua_pushnumber((double)(long)*(int *)(param_2 + 8),param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"attribSizeBytes");
    lua_pushnumber((double)(long)*(int *)(param_2 + 0xc),param_1);
    lua_rawset(param_1,0xfffffffd);
    return;
  }
  return;
}

