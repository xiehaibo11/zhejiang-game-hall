
void FUN_008f9ff0(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  undefined8 uVar6;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
                    /* try { // try from 008fa000 to 009fa093 has its CatchHandler @ 008fa000
                       catch() { ... } // from try @ 008fa000 with catch @ 008fa000
                       catch() { ... } // from try @ 008fa09c with catch @ 008fa000 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar4 = lua_gettop();
  iVar1 = iVar4 + -1;
  if (3 < iVar4) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting 0~2\n ",
               "fairygui.GTreeNode:create",iVar1);
    uVar6 = 0;
    goto LAB_008fa108;
  }
  if (iVar1 < 1) {
    bVar3 = false;
LAB_008fa088:
    pvVar5 = (void *)fairygui::GTreeNode::create(bVar3,(basic_string *)&cocos2d::STD_STRING_EMPTY);
LAB_008fa090:
    if (pvVar5 != (void *)0x0) goto LAB_008fa094;
LAB_008fa0fc:
    lua_pushnil(param_1);
  }
  else {
    iVar4 = lua_toboolean(param_1,2);
    if (iVar1 == 1) {
      bVar3 = iVar4 != 0;
      goto LAB_008fa088;
    }
    local_50[1] = 0;
    local_40 = (void *)0x0;
    local_50[0] = 0;
    luaval_to_std_string(param_1,2,(basic_string *)local_50,"fairygui.GTreeNode:create");
                    /* catch() { ... } // from try @ 008fa094 with catch @ 008fa0d8 */
    pvVar5 = (void *)fairygui::GTreeNode::create(iVar4 != 0,(basic_string *)local_50);
    if ((local_50[0] & 1) == 0) goto LAB_008fa090;
    operator_delete(local_40);
    if (pvVar5 == (void *)0x0) goto LAB_008fa0fc;
LAB_008fa094:
                    /* try { // try from 008fa094 to 009fa09b has its CatchHandler @ 008fa0d8 */
                    /* try { // try from 008fa09c to 009fa0f3 has its CatchHandler @ 008fa000 */
    toluafix_pushusertype_ccobject
              (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
               "fairygui.GTreeNode");
  }
  uVar6 = 1;
LAB_008fa108:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

