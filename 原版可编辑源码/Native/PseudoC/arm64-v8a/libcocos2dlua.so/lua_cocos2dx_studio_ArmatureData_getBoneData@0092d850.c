
/* lua_cocos2dx_studio_ArmatureData_getBoneData(lua_State*) */

undefined4 lua_cocos2dx_studio_ArmatureData_getBoneData(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ArmatureData *this;
  ulong uVar3;
  void *pvVar4;
  undefined4 uVar5;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0092d878 to 00a2d89f has its CatchHandler @ 0092d7e8 */
  this = (ArmatureData *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
                    /* try { // try from 0092d8a0 to 00a2d8b3 has its CatchHandler @ 0092d91c */
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccs.ArmatureData:getBoneData")
    ;
    if ((uVar3 & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0092d838 with catch @ 0092d91c
                       catch(type#1 @ 00000000) { ... } // from try @ 0092d8a0 with catch @ 0092d91c
                        */
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_studio_ArmatureData_getBoneData\'",0
                 );
      uVar5 = 0;
    }
    else {
      pvVar4 = (void *)cocostudio::ArmatureData::getBoneData(this,(basic_string *)&local_50);
                    /* try { // try from 0092d8c8 to 00a2d8cb has its CatchHandler @ 0092d964 */
                    /* try { // try from 0092d8cc to 00a2d92f has its CatchHandler @ 0092d7e8 */
      if (pvVar4 == (void *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0092d930 with catch @ 0092d960
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0092d8c8 with catch @ 0092d964
                        */
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "ccs.BoneData");
      }
      uVar5 = 1;
    }
    if ((local_50 & 1) != 0) {
                    /* try { // try from 0092d930 to 00a2d933 has its CatchHandler @ 0092d960 */
                    /* try { // try from 0092d934 to 00a2d977 has its CatchHandler @ 0092d7e8 */
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ArmatureData:getBoneData",iVar2 + -1,1);
    uVar5 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

