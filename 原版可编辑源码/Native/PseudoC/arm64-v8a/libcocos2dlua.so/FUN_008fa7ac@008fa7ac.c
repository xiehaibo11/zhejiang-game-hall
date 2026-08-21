
undefined8 FUN_008fa7ac(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  basic_string *pbVar3;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pbVar3 = (basic_string *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_50[1] = 0;
    local_40 = (void *)0x0;
    local_50[0] = 0;
    luaval_to_std_string(param_1,2,(basic_string *)local_50,"fairygui.GTreeNode:setIcon");
                    /* try { // try from 008fa814 to 009fa84b has its CatchHandler @ 008fa98c */
    fairygui::GTreeNode::setIcon(pbVar3);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GTreeNode:setIcon",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 008fa868 to 009fa87f has its CatchHandler @ 008fa970 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

