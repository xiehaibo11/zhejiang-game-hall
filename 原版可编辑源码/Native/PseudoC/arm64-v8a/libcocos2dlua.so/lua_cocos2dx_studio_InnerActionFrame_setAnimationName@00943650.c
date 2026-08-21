
/* lua_cocos2dx_studio_InnerActionFrame_setAnimationName(lua_State*) */

bool lua_cocos2dx_studio_InnerActionFrame_setAnimationName(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  InnerActionFrame *this;
  ulong uVar3;
  bool bVar4;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (InnerActionFrame *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
                    /* try { // try from 009436a4 to 00a436ef has its CatchHandler @ 009436a4
                       catch() { ... } // from try @ 009436a4 with catch @ 009436a4
                       catch() { ... } // from try @ 009436f4 with catch @ 009436a4 */
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"ccs.InnerActionFrame:setAnimationName");
    bVar4 = (uVar3 & 1) == 0;
    if (bVar4) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_studio_InnerActionFrame_setAnimationName\'"
                  ,0);
    }
    else {
      cocostudio::timeline::InnerActionFrame::setAnimationName(this,(basic_string *)&local_50);
      lua_settop(param_1,1);
    }
    bVar4 = !bVar4;
    if ((local_50 & 1) != 0) {
                    /* catch() { ... } // from try @ 009436f0 with catch @ 00943728 */
      operator_delete(local_40);
    }
  }
  else {
                    /* try { // try from 009436f0 to 00a436f3 has its CatchHandler @ 00943728 */
                    /* try { // try from 009436f4 to 00a4373b has its CatchHandler @ 009436a4 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.InnerActionFrame:setAnimationName",iVar2 + -1,1);
    bVar4 = false;
  }
                    /* try { // try from 0094373c to 00a438b3 has its CatchHandler @ 0094373c
                       catch() { ... } // from try @ 0094373c with catch @ 0094373c
                       catch() { ... } // from try @ 00943934 with catch @ 0094373c */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

