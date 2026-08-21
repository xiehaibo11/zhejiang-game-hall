
/* lua_cocos2dx_studio_DisplayManager_changeDisplayWithName(lua_State*) */

bool lua_cocos2dx_studio_DisplayManager_changeDisplayWithName(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  DisplayManager *this;
  bool bVar5;
  bool local_54 [4];
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (DisplayManager *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,
                       "ccs.DisplayManager:changeDisplayWithName");
                    /* try { // try from 00931170 to 00a311a3 has its CatchHandler @ 00931270 */
    uVar4 = luaval_to_boolean(param_1,3,local_54,"ccs.DisplayManager:changeDisplayWithName");
    bVar5 = (uVar3 & uVar4 & 1) == 0;
    if (bVar5) {
                    /* try { // try from 009311f0 to 00a3128b has its CatchHandler @ 009310b8 */
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_studio_DisplayManager_changeDisplayWithName\'"
                  ,0);
    }
    else {
      cocostudio::DisplayManager::changeDisplayWithName(this,(basic_string *)&local_50,local_54[0]);
                    /* try { // try from 009311a4 to 00a311b7 has its CatchHandler @ 0093123c */
      lua_settop(param_1,1);
    }
    bVar5 = !bVar5;
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
                    /* try { // try from 009311bc to 00a311ef has its CatchHandler @ 00931240 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.DisplayManager:changeDisplayWithName",iVar2 + -1,2);
    bVar5 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

