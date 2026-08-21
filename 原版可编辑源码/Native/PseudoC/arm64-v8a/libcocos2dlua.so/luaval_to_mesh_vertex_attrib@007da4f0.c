
/* luaval_to_mesh_vertex_attrib(lua_State*, int, cocos2d::MeshVertexAttrib*, char const*) */

bool luaval_to_mesh_vertex_attrib
               (lua_State *param_1,int param_2,MeshVertexAttrib *param_3,char *param_4)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  double dVar4;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  bVar2 = false;
  if ((param_1 != (lua_State *)0x0) && (param_3 != (MeshVertexAttrib *)0x0)) {
    iVar3 = lua_gettop();
    if (iVar3 < param_2) {
      bVar2 = false;
    }
    else {
      iVar3 = tolua_istable(param_1,param_2,0,auStack_58);
      bVar2 = iVar3 != 0;
      if (iVar3 != 0) {
        lua_pushstring(param_1,"size");
        lua_gettable(param_1,param_2);
        dVar4 = (double)lua_tonumber(param_1,0xffffffff);
        *(int *)param_3 = (int)dVar4;
        lua_settop(param_1,0xfffffffe);
        lua_pushstring(param_1,"type");
        lua_gettable(param_1,param_2);
        dVar4 = (double)lua_tonumber(param_1,0xffffffff);
        *(int *)(param_3 + 4) = (int)dVar4;
        lua_settop(param_1,0xfffffffe);
        lua_pushstring(param_1,"vertexAttrib");
        lua_gettable(param_1,param_2);
        dVar4 = (double)lua_tonumber(param_1,0xffffffff);
        *(int *)(param_3 + 4) = (int)dVar4;
        lua_settop(param_1,0xfffffffe);
        lua_pushstring(param_1,"attribSizeBytes");
        lua_gettable(param_1,param_2);
        dVar4 = (double)lua_tonumber(param_1,0xffffffff);
        *(int *)(param_3 + 4) = (int)dVar4;
        lua_settop(param_1,0xfffffffe);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

