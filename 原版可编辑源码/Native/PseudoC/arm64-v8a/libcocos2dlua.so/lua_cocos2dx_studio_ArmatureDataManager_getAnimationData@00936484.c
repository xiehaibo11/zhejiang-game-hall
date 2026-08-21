
/* lua_cocos2dx_studio_ArmatureDataManager_getAnimationData(lua_State*) */

undefined4 lua_cocos2dx_studio_ArmatureDataManager_getAnimationData(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ArmatureDataManager *this;
  ulong uVar3;
  void *pvVar4;
  undefined4 uVar5;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
                    /* try { // try from 0093648c to 00a364b3 has its CatchHandler @ 009363d8 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ArmatureDataManager *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 009364b4 to 00a364c7 has its CatchHandler @ 00936500 */
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 009364c8 to 00a36513 has its CatchHandler @ 009363d8 */
  if (iVar2 + -1 == 1) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,
                       "ccs.ArmatureDataManager:getAnimationData");
    if ((uVar3 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_studio_ArmatureDataManager_getAnimationData\'"
                  ,0);
      uVar5 = 0;
    }
    else {
      pvVar4 = (void *)cocostudio::ArmatureDataManager::getAnimationData
                                 (this,(basic_string *)&local_50);
                    /* catch() { ... } // from try @ 00936428 with catch @ 00936500
                       catch() { ... } // from try @ 009364b4 with catch @ 00936500 */
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "ccs.AnimationData");
      }
      uVar5 = 1;
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ArmatureDataManager:getAnimationData",iVar2 + -1,1);
    uVar5 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

