
undefined8 FUN_008fa634(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  basic_string *pbVar3;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
                    /* try { // try from 008fa648 to 009fa65b has its CatchHandler @ 008fa6e0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 008fa660 to 009fa693 has its CatchHandler @ 008fa6e4 */
  pbVar3 = (basic_string *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_50[1] = 0;
    local_40 = (void *)0x0;
    local_50[0] = 0;
                    /* try { // try from 008fa694 to 009fa72f has its CatchHandler @ 008fa424 */
    luaval_to_std_string(param_1,2,(basic_string *)local_50,"fairygui.GTreeNode:setText");
    fairygui::GTreeNode::setText(pbVar3);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GTreeNode:setText",iVar2 + -1,1);
  }
                    /* catch() { ... } // from try @ 008fa648 with catch @ 008fa6e0 */
                    /* catch() { ... } // from try @ 008fa660 with catch @ 008fa6e4 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

