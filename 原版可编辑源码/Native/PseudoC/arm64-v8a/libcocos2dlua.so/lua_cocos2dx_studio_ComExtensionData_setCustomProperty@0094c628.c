
/* lua_cocos2dx_studio_ComExtensionData_setCustomProperty(lua_State*) */

bool lua_cocos2dx_studio_ComExtensionData_setCustomProperty(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  bool bVar5;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
                    /* try { // try from 0094c630 to 00a4c67f has its CatchHandler @ 0094c630
                       catch() { ... } // from try @ 0094c630 with catch @ 0094c630
                       catch() { ... } // from try @ 0094c6b4 with catch @ 0094c630
                       catch() { ... } // from try @ 0094c6fc with catch @ 0094c630 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
                    /* try { // try from 0094c680 to 00a4c697 has its CatchHandler @ 0094c740 */
    uVar4 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"ccs.ComExtensionData:setCustomProperty")
    ;
    bVar5 = (uVar4 & 1) == 0;
    if (bVar5) {
                    /* try { // try from 0094c6e8 to 00a4c6fb has its CatchHandler @ 0094c740 */
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_studio_ComExtensionData_setCustomProperty\'"
                  ,0);
                    /* try { // try from 0094c6fc to 00a4c75b has its CatchHandler @ 0094c630 */
    }
    else {
                    /* try { // try from 0094c69c to 00a4c6b3 has its CatchHandler @ 0094c73c */
      (**(code **)(*plVar3 + 0x60))(plVar3,&local_50);
                    /* try { // try from 0094c6b4 to 00a4c6e7 has its CatchHandler @ 0094c630 */
      lua_settop(param_1,1);
    }
    bVar5 = !bVar5;
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ComExtensionData:setCustomProperty",iVar2 + -1,1);
    bVar5 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

