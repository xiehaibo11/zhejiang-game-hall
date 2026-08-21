
/* lua_cocos2dx_extension_ScrollView_updateTweenAction(lua_State*) */

bool lua_cocos2dx_extension_ScrollView_updateTweenAction(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  bool bVar6;
  ulong local_58;
  undefined8 local_50;
  void *local_48;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 009aaad0 to 00aaab27 has its CatchHandler @ 009aaa6c */
  local_38 = *(long *)(lVar1 + 0x28);
  plVar5 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    local_50 = 0;
    local_48 = (void *)0x0;
    local_58 = 0;
                    /* catch() { ... } // from try @ 009aaaa0 with catch @ 009aab14 */
    uVar3 = luaval_to_number(param_1,2,&local_40,"cc.ScrollView:updateTweenAction");
                    /* try { // try from 009aab28 to 00aaab67 has its CatchHandler @ 009aab28
                       catch() { ... } // from try @ 009aab28 with catch @ 009aab28
                       catch() { ... } // from try @ 009aabb8 with catch @ 009aab28
                       catch() { ... } // from try @ 009aac0c with catch @ 009aab28 */
    uVar4 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_58,"cc.ScrollView:updateTweenAction");
    bVar6 = (uVar3 & uVar4 & 1) == 0;
    if (bVar6) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_extension_ScrollView_updateTweenAction\'"
                  ,0);
                    /* try { // try from 009aabb8 to 00aaabd7 has its CatchHandler @ 009aab28 */
    }
    else {
      (**(code **)(*plVar5 + 0x658))((float)local_40,plVar5,&local_58);
                    /* try { // try from 009aab68 to 00aaab73 has its CatchHandler @ 009aac58 */
      lua_settop(param_1,1);
    }
    bVar6 = !bVar6;
    if ((local_58 & 1) != 0) {
      operator_delete(local_48);
    }
  }
  else {
                    /* try { // try from 009aab88 to 00aaabb7 has its CatchHandler @ 009aac60 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ScrollView:updateTweenAction",iVar2 + -1,2);
    bVar6 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009aabd8 to 00aaac0b has its CatchHandler @ 009aac5c */
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

