
/* lua_cocos2dx_GLProgram_setUniformsForBuiltins(lua_State*) */

undefined4 lua_cocos2dx_GLProgram_setUniformsForBuiltins(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GLProgram *this;
  ulong uVar3;
  undefined4 uVar4;
  Mat4 aMStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GLProgram *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 2) {
    cocos2d::Mat4::Mat4(aMStack_78);
    uVar3 = luaval_to_mat4(param_1,2,aMStack_78,"cc.GLProgram:setUniformsForBuiltins");
    if ((uVar3 & 1) != 0) {
      cocos2d::GLProgram::setUniformsForBuiltins(this,aMStack_78);
      lua_settop(param_1,1);
      cocos2d::Mat4::~Mat4(aMStack_78);
      uVar4 = 1;
      goto LAB_0086ceac;
    }
    cocos2d::Mat4::~Mat4(aMStack_78);
  }
  else if (iVar2 == 1) {
    cocos2d::GLProgram::setUniformsForBuiltins(this);
    uVar4 = 1;
    lua_settop(param_1,1);
    goto LAB_0086ceac;
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.GLProgram:setUniformsForBuiltins",iVar2 + -1,1);
  uVar4 = 0;
LAB_0086ceac:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

