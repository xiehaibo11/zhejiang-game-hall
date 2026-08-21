
/* lua_cocos2dx_studio_DisplayManager_removeDisplay(lua_State*) */

undefined4 lua_cocos2dx_studio_DisplayManager_removeDisplay(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  DisplayManager *this;
  ulong uVar3;
  undefined4 uVar4;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (DisplayManager *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"ccs.DisplayManager:removeDisplay");
    if ((uVar3 & 1) != 0) {
      cocostudio::DisplayManager::removeDisplay(this,local_3c);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_009309d4;
    }
                    /* try { // try from 009309c0 to 00a309f3 has its CatchHandler @ 00930ac0 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_DisplayManager_removeDisplay\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.DisplayManager:removeDisplay",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_009309d4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009309f4 to 00a30a07 has its CatchHandler @ 00930a8c */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

