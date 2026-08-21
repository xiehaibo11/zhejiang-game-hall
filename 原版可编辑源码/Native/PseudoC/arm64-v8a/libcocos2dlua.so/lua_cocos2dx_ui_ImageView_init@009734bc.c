
/* lua_cocos2dx_ui_ImageView_init(lua_State*) */

undefined4 lua_cocos2dx_ui_ImageView_init(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 uVar7;
  int local_54;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 009734d4 to 00a73603 has its CatchHandler @ 009734d4
                       catch() { ... } // from try @ 009734d4 with catch @ 009734d4
                       catch() { ... } // from try @ 00973684 with catch @ 009734d4 */
  local_38 = *(long *)(lVar1 + 0x28);
  plVar5 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.ImageView:init");
    uVar4 = luaval_to_int32(param_1,3,&local_54,"ccui.ImageView:init");
    if ((uVar3 & uVar4 & 1) != 0) {
      uVar3 = (**(code **)(*plVar5 + 0x690))(plVar5,&local_50,local_54);
      tolua_pushboolean(param_1,uVar3 & 1);
      goto LAB_009735bc;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_ImageView_init\'",0);
LAB_00973620:
    uVar7 = 0;
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "ccui.ImageView:init",iVar2 + -1,1);
      uVar7 = 0;
      goto LAB_00973634;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar6 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccui.ImageView:init");
    if ((uVar6 & 1) == 0) {
                    /* try { // try from 00973604 to 00a73637 has its CatchHandler @ 00973704 */
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_ImageView_init\'",0);
      goto LAB_00973620;
    }
    uVar3 = (**(code **)(*plVar5 + 0x690))(plVar5,&local_50,0);
    tolua_pushboolean(param_1,uVar3 & 1);
LAB_009735bc:
    uVar7 = 1;
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
LAB_00973634:
                    /* try { // try from 00973638 to 00a7364b has its CatchHandler @ 009736d0 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00973650 to 00a73683 has its CatchHandler @ 009736d4 */
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

