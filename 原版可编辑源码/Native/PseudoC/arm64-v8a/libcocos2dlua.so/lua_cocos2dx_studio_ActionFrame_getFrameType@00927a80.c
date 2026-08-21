
/* lua_cocos2dx_studio_ActionFrame_getFrameType(lua_State*) */

bool lua_cocos2dx_studio_ActionFrame_getFrameType(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  ActionFrame *this;
  
                    /* try { // try from 00927a80 to 00a27ab3 has its CatchHandler @ 00927b80 */
  this = (ActionFrame *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = cocostudio::ActionFrame::getFrameType(this);
    tolua_pushnumber((double)iVar2,param_1);
  }
  else {
                    /* try { // try from 00927ab4 to 00a27ac7 has its CatchHandler @ 00927b4c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ActionFrame:getFrameType",iVar1,0);
                    /* try { // try from 00927acc to 00a27aff has its CatchHandler @ 00927b50 */
  }
  return iVar1 == 0;
}

