
/* lua_cocos2dx_studio_MovementBoneData_addFrameData(lua_State*) */

undefined4 lua_cocos2dx_studio_MovementBoneData_addFrameData(lua_State *param_1)

{
  int iVar1;
  MovementBoneData *this;
  ulong uVar2;
  FrameData *pFVar3;
  
  this = (MovementBoneData *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
                    /* try { // try from 0092e310 to 00a2e343 has its CatchHandler @ 0092e410 */
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"ccs.FrameData",0), (uVar2 & 1) != 0)) {
      pFVar3 = (FrameData *)tolua_tousertype(param_1,2,0);
                    /* try { // try from 0092e344 to 00a2e357 has its CatchHandler @ 0092e3dc */
      cocostudio::MovementBoneData::addFrameData(this,pFVar3);
      lua_settop(param_1,1);
      return 1;
                    /* try { // try from 0092e35c to 00a2e38f has its CatchHandler @ 0092e3e0 */
    }
                    /* try { // try from 0092e390 to 00a2e42b has its CatchHandler @ 0092e0f0 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_MovementBoneData_addFrameData\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.MovementBoneData:addFrameData",iVar1 + -1,1);
  }
  return 0;
}

