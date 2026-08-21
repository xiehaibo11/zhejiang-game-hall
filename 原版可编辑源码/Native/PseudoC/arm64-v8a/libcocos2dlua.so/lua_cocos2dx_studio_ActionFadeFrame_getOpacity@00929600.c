
/* lua_cocos2dx_studio_ActionFadeFrame_getOpacity(lua_State*) */

bool lua_cocos2dx_studio_ActionFadeFrame_getOpacity(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  ActionFadeFrame *this;
  
                    /* try { // try from 0092960c to 00a2961f has its CatchHandler @ 009296a4 */
  this = (ActionFadeFrame *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 00929624 to 00a29657 has its CatchHandler @ 009296a8 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 00929658 to 00a296f3 has its CatchHandler @ 00929520 */
    iVar2 = cocostudio::ActionFadeFrame::getOpacity(this);
    tolua_pushnumber((double)iVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ActionFadeFrame:getOpacity",iVar1,0);
  }
  return iVar1 == 0;
}

