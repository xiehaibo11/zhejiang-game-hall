
/* lua_cocos2dx_GLProgramState_setGLProgram(lua_State*) */

undefined4 lua_cocos2dx_GLProgramState_setGLProgram(lua_State *param_1)

{
  int iVar1;
  GLProgramState *this;
  ulong uVar2;
  GLProgram *pGVar3;
  
  this = (GLProgramState *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"cc.GLProgram",0), (uVar2 & 1) != 0)) {
      pGVar3 = (GLProgram *)tolua_tousertype(param_1,2,0);
      cocos2d::GLProgramState::setGLProgram(this,pGVar3);
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_GLProgramState_setGLProgram\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.GLProgramState:setGLProgram",iVar1 + -1,1);
  }
  return 0;
}

