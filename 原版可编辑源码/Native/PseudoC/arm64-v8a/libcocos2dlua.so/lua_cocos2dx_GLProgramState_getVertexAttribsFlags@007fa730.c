
/* lua_cocos2dx_GLProgramState_getVertexAttribsFlags(lua_State*) */

bool lua_cocos2dx_GLProgramState_getVertexAttribsFlags(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  GLProgramState *this;
  
  this = (GLProgramState *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocos2d::GLProgramState::getVertexAttribsFlags(this);
    tolua_pushnumber((double)uVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.GLProgramState:getVertexAttribsFlags",iVar1,0);
  }
  return iVar1 == 0;
}

