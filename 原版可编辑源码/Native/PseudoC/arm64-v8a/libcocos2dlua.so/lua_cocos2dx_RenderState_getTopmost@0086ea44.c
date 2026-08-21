
/* lua_cocos2dx_RenderState_getTopmost(lua_State*) */

undefined8 lua_cocos2dx_RenderState_getTopmost(lua_State *param_1)

{
  int iVar1;
  RenderState *this;
  ulong uVar2;
  RenderState *pRVar3;
  void *pvVar4;
  
  this = (RenderState *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"cc.RenderState",0), (uVar2 & 1) != 0)) {
      pRVar3 = (RenderState *)tolua_tousertype(param_1,2,0);
      pvVar4 = (void *)cocos2d::RenderState::getTopmost(this,pRVar3);
      if (pvVar4 != (void *)0x0) {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "cc.RenderState");
        return 1;
      }
      lua_pushnil(param_1);
      return 1;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_RenderState_getTopmost\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.RenderState:getTopmost",iVar1 + -1,1);
  }
  return 0;
}

