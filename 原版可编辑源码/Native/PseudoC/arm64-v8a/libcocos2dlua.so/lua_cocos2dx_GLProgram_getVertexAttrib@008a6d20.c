
/* lua_cocos2dx_GLProgram_getVertexAttrib(lua_State*) */

undefined4 lua_cocos2dx_GLProgram_getVertexAttrib(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GLProgram *this;
  ulong uVar3;
  VertexAttrib *pVVar4;
  undefined4 uVar5;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GLProgram *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.GLProgram:getVertexAttrib")
    ;
    if ((uVar3 & 1) == 0) {
      uVar5 = 0;
    }
    else {
      pVVar4 = (VertexAttrib *)cocos2d::GLProgram::getVertexAttrib(this,(basic_string *)&local_50);
      if (pVVar4 == (VertexAttrib *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        vertexattrib_to_luaval(param_1,pVVar4);
      }
      uVar5 = 1;
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.GLProgram:getVertexAttrib",iVar2 + -1,1);
    uVar5 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

