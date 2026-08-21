
/* lua_cocos2dx_GLView_getVR(lua_State*) */

undefined8 lua_cocos2dx_GLView_getVR(lua_State *param_1)

{
  int iVar1;
  GLView *this;
  undefined8 uVar2;
  VRIRenderer *pVVar3;
  char *pcVar4;
  
  this = (GLView *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pVVar3 = (VRIRenderer *)cocos2d::GLView::getVR(this);
    if (pVVar3 == (VRIRenderer *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      pcVar4 = getLuaTypeName<cocos2d::VRIRenderer>(pVVar3,"cc.VRIRenderer");
      tolua_pushusertype(param_1,pVVar3,pcVar4);
    }
    uVar2 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","cc.GLView:getVR"
               ,iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

