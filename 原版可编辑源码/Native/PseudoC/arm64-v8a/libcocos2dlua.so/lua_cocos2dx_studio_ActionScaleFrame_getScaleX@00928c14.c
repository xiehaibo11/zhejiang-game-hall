
/* lua_cocos2dx_studio_ActionScaleFrame_getScaleX(lua_State*) */

bool lua_cocos2dx_studio_ActionScaleFrame_getScaleX(lua_State *param_1)

{
  int iVar1;
  ActionScaleFrame *this;
  float fVar2;
  
  this = (ActionScaleFrame *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)cocostudio::ActionScaleFrame::getScaleX(this);
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
                    /* try { // try from 00928c54 to 00a28c87 has its CatchHandler @ 00928d54 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ActionScaleFrame:getScaleX",iVar1,0);
  }
                    /* try { // try from 00928c88 to 00a28c9b has its CatchHandler @ 00928d20 */
  return iVar1 == 0;
}

