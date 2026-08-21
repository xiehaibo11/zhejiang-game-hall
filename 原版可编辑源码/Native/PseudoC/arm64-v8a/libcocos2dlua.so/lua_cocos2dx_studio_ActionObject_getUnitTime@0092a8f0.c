
/* lua_cocos2dx_studio_ActionObject_getUnitTime(lua_State*) */

bool lua_cocos2dx_studio_ActionObject_getUnitTime(lua_State *param_1)

{
  int iVar1;
  ActionObject *this;
  float fVar2;
  
                    /* catch() { ... } // from try @ 0092a8b0 with catch @ 0092a904 */
  this = (ActionObject *)tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 0092a88c with catch @ 0092a914 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)cocostudio::ActionObject::getUnitTime(this);
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
                    /* try { // try from 0092a928 to 00a2aa87 has its CatchHandler @ 0092a928
                       catch() { ... } // from try @ 0092a928 with catch @ 0092a928
                       catch() { ... } // from try @ 0092ab08 with catch @ 0092a928 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ActionObject:getUnitTime",iVar1,0);
  }
  return iVar1 == 0;
}

