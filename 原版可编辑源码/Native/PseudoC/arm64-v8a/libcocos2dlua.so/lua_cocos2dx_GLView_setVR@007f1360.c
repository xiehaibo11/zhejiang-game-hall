
/* lua_cocos2dx_GLView_setVR(lua_State*) */

undefined4 lua_cocos2dx_GLView_setVR(lua_State *param_1)

{
  int iVar1;
  GLView *this;
  ulong uVar2;
  VRIRenderer *pVVar3;
  
  this = (GLView *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"cc.VRIRenderer",0), (uVar2 & 1) != 0)) {
      pVVar3 = (VRIRenderer *)tolua_tousertype(param_1,2,0);
      cocos2d::GLView::setVR(this,pVVar3);
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_GLView_setVR\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","cc.GLView:setVR"
               ,iVar1 + -1,1);
  }
  return 0;
}

