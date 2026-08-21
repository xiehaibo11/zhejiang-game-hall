
/* lua_cocos2dx_GLProgramState_applyGLProgram(lua_State*) */

bool lua_cocos2dx_GLProgramState_applyGLProgram(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GLProgramState *this;
  ulong uVar3;
  bool bVar4;
  Mat4 aMStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GLProgramState *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Mat4::Mat4(aMStack_78);
    uVar3 = luaval_to_mat4(param_1,2,aMStack_78,"cc.GLProgramState:applyGLProgram");
    bVar4 = (uVar3 & 1) == 0;
    if (bVar4) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_GLProgramState_applyGLProgram\'",0);
    }
    else {
      cocos2d::GLProgramState::applyGLProgram(this,aMStack_78);
      lua_settop(param_1,1);
    }
    bVar4 = !bVar4;
    cocos2d::Mat4::~Mat4(aMStack_78);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.GLProgramState:applyGLProgram",iVar2 + -1,1);
    bVar4 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

