
/* lua_cocos2dx_studio_AnimationData_addMovement(lua_State*) */

undefined4 lua_cocos2dx_studio_AnimationData_addMovement(lua_State *param_1)

{
  int iVar1;
  AnimationData *this;
  ulong uVar2;
  MovementData *pMVar3;
  
  this = (AnimationData *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 0092ee9c to 00a2ee9f has its CatchHandler @ 0092eef0 */
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 0092eea0 to 00a2ef03 has its CatchHandler @ 0092ee50 */
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"ccs.MovementData",0), (uVar2 & 1) != 0)) {
      pMVar3 = (MovementData *)tolua_tousertype(param_1,2,0);
                    /* catch() { ... } // from try @ 0092ee9c with catch @ 0092eef0 */
      cocostudio::AnimationData::addMovement(this,pMVar3);
                    /* try { // try from 0092ef04 to 00a2efd3 has its CatchHandler @ 0092ef04
                       catch() { ... } // from try @ 0092ef04 with catch @ 0092ef04
                       catch() { ... } // from try @ 0092f054 with catch @ 0092ef04 */
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_AnimationData_addMovement\'",0)
    ;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.AnimationData:addMovement",iVar1 + -1,1);
  }
  return 0;
}

