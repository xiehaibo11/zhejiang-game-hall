
/* lua_cocos2dx_ui_PageView_setIndicatorIndexNodesTexture(lua_State*) */

undefined4 lua_cocos2dx_ui_PageView_setIndicatorIndexNodesTexture(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 uVar7;
  int local_54;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
                    /* try { // try from 00985230 to 00a85237 has its CatchHandler @ 00985528 */
    local_50 = 0;
                    /* try { // try from 00985238 to 00a8538b has its CatchHandler @ 009851e0 */
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,
                       "ccui.PageView:setIndicatorIndexNodesTexture");
    uVar4 = luaval_to_int32(param_1,3,&local_54,"ccui.PageView:setIndicatorIndexNodesTexture");
    if ((uVar3 & uVar4 & 1) != 0) {
      cocos2d::ui::PageView::setIndicatorIndexNodesTexture(uVar5,&local_50,local_54);
      lua_settop(param_1,1);
      goto LAB_00985290;
    }
    tolua_error(param_1,&DAT_012ddd61,0);
LAB_009852f0:
    uVar7 = 0;
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00985238 with catch @ 009851e0
                       catch(type#1 @ 00000000) { ... } // from try @ 00985404 with catch @ 009851e0
                        */
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "ccui.PageView:setIndicatorIndexNodesTexture",iVar2 + -1,1);
      uVar7 = 0;
      goto LAB_00985304;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar6 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,
                       "ccui.PageView:setIndicatorIndexNodesTexture");
    if ((uVar6 & 1) == 0) {
      tolua_error(param_1,&DAT_012ddd61,0);
      goto LAB_009852f0;
    }
    cocos2d::ui::PageView::setIndicatorIndexNodesTexture(uVar5,&local_50,0);
    lua_settop(param_1,1);
LAB_00985290:
    uVar7 = 1;
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
LAB_00985304:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

