
/* lua_cocos2dx_studio_MovementData_addMovementBoneData(lua_State*) */

undefined4 lua_cocos2dx_studio_MovementData_addMovementBoneData(lua_State *param_1)

{
  int iVar1;
  MovementData *this;
  ulong uVar2;
  MovementBoneData *pMVar3;
  
  this = (MovementData *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"ccs.MovementBoneData",0), (uVar2 & 1) != 0)) {
      pMVar3 = (MovementBoneData *)tolua_tousertype(param_1,2,0);
      cocostudio::MovementData::addMovementBoneData(this,pMVar3);
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_MovementData_addMovementBoneData\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.MovementData:addMovementBoneData",iVar1 + -1,1);
                    /* try { // try from 0092e934 to 00a2e97f has its CatchHandler @ 0092e934
                       catch() { ... } // from try @ 0092e934 with catch @ 0092e934
                       catch() { ... } // from try @ 0092e984 with catch @ 0092e934 */
  }
  return 0;
}

