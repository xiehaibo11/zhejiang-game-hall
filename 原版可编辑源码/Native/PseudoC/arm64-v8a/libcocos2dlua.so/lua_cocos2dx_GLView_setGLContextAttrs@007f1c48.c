
/* lua_cocos2dx_GLView_setGLContextAttrs(lua_State*) */

undefined8 lua_cocos2dx_GLView_setGLContextAttrs(lua_State *param_1)

{
  int iVar1;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 1) {
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_GLView_setGLContextAttrs\'",0)
    ;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.GLView:setGLContextAttrs",iVar1 + -1,1);
  }
  return 0;
}

