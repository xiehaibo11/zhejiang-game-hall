
/* lua_cocos2dx_studio_AnimationData_getMovementCount(lua_State*) */

bool lua_cocos2dx_studio_AnimationData_getMovementCount(lua_State *param_1)

{
  int iVar1;
  AnimationData *this;
  long lVar2;
  
  this = (AnimationData *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    lVar2 = cocostudio::AnimationData::getMovementCount(this);
    tolua_pushnumber((double)lVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.AnimationData:getMovementCount",iVar1,0);
                    /* try { // try from 0092ee50 to 00a2ee9b has its CatchHandler @ 0092ee50
                       catch() { ... } // from try @ 0092ee50 with catch @ 0092ee50
                       catch() { ... } // from try @ 0092eea0 with catch @ 0092ee50 */
  }
  return iVar1 == 0;
}

