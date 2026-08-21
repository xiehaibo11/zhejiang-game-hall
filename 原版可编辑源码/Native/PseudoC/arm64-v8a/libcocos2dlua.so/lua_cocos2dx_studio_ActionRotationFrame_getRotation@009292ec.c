
/* lua_cocos2dx_studio_ActionRotationFrame_getRotation(lua_State*) */

bool lua_cocos2dx_studio_ActionRotationFrame_getRotation(lua_State *param_1)

{
  int iVar1;
  ActionRotationFrame *this;
  float fVar2;
  
                    /* catch() { ... } // from try @ 00929268 with catch @ 00929300 */
                    /* catch() { ... } // from try @ 00929280 with catch @ 00929304 */
  this = (ActionRotationFrame *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)cocostudio::ActionRotationFrame::getRotation(this);
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
                    /* catch() { ... } // from try @ 00929234 with catch @ 00929334 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ActionRotationFrame:getRotation",iVar1,0);
  }
  return iVar1 == 0;
}

