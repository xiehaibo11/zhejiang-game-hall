
/* lua_cocos2dx_Node_getGLProgram(lua_State*) */

undefined8 lua_cocos2dx_Node_getGLProgram(lua_State *param_1)

{
  int iVar1;
  Node *this;
  void *pvVar2;
  
  this = (Node *)tolua_tousertype(param_1,1,0);
  if (this == (Node *)0x0) {
    tolua_error(param_1,"invalid \'cobj\' in function \'lua_cocos2dx_Node_getGLProgram\'",0);
  }
  else {
    iVar1 = lua_gettop(param_1);
    if (iVar1 + -1 == 0) {
      pvVar2 = (void *)cocos2d::Node::getGLProgram(this);
      if (pvVar2 != (void *)0x0) {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar2 + 0xc),(int *)((long)pvVar2 + 0x10),pvVar2,
                   "cc.GLProgram");
        return 1;
      }
      lua_pushnil(param_1);
      return 1;
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Node:getGLProgram",iVar1 + -1,0);
  }
  return 0;
}

