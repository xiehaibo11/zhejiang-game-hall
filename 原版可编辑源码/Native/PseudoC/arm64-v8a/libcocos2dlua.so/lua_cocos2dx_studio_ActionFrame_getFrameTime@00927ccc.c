
/* lua_cocos2dx_studio_ActionFrame_getFrameTime(lua_State*) */

bool lua_cocos2dx_studio_ActionFrame_getFrameTime(lua_State *param_1)

{
  int iVar1;
  ActionFrame *this;
  float fVar2;
  
  this = (ActionFrame *)tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 00927c58 with catch @ 00927cf0 */
  iVar1 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 00927c70 with catch @ 00927cf4 */
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* catch() { ... } // from try @ 00927c24 with catch @ 00927d24 */
    fVar2 = (float)cocostudio::ActionFrame::getFrameTime(this);
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ActionFrame:getFrameTime",iVar1,0);
  }
  return iVar1 == 0;
}

