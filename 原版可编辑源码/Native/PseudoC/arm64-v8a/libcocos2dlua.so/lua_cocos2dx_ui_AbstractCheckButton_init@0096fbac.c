
/* WARNING: Type propagation algorithm not settling */
/* lua_cocos2dx_ui_AbstractCheckButton_init(lua_State*) */

undefined4 lua_cocos2dx_ui_AbstractCheckButton_init(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  undefined4 uVar10;
  int local_d4;
  ulong local_d0;
  undefined8 uStack_c8;
  void *local_c0;
  ulong local_b8;
  undefined8 local_b0;
  void *local_a8;
  ulong local_a0;
  undefined8 uStack_98;
  void *local_90;
  ulong local_88;
  undefined8 local_80;
  void *local_78;
  ulong local_70;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar9 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 7) {
    local_68 = 0;
    local_60 = (void *)0x0;
    local_70 = 0;
    local_80 = 0;
    local_78 = (void *)0x0;
    local_90 = (void *)0x0;
    local_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    local_a8 = (void *)0x0;
    local_c0 = (void *)0x0;
    local_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_70,"ccui.AbstractCheckButton:init");
    uVar4 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_88,"ccui.AbstractCheckButton:init");
    uVar5 = luaval_to_std_string
                      (param_1,4,(basic_string *)&local_a0,"ccui.AbstractCheckButton:init");
    uVar6 = luaval_to_std_string
                      (param_1,5,(basic_string *)&local_b8,"ccui.AbstractCheckButton:init");
    uVar7 = luaval_to_std_string
                      (param_1,6,(basic_string *)&local_d0,"ccui.AbstractCheckButton:init");
    uVar8 = luaval_to_int32(param_1,7,&local_d4,"ccui.AbstractCheckButton:init");
    if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & 1) != 0) {
      uVar3 = (**(code **)(*plVar9 + 0x688))
                        (plVar9,&local_70,&local_88,&local_a0,&local_b8,&local_d0,local_d4);
                    /* try { // try from 0096fe00 to 00a6fe87 has its CatchHandler @ 0096fe00
                       catch() { ... } // from try @ 0096fe00 with catch @ 0096fe00
                       catch() { ... } // from try @ 0096fef4 with catch @ 0096fe00 */
      tolua_pushboolean(param_1,uVar3 & 1);
      goto LAB_0096fe04;
    }
    tolua_error(param_1,&DAT_012d8ad1,0);
LAB_0096fe68:
    uVar10 = 0;
  }
  else {
    if (iVar2 != 6) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "ccui.AbstractCheckButton:init",iVar2 + -1,5);
      uVar10 = 0;
      goto LAB_0096fea4;
    }
    local_68 = 0;
    local_60 = (void *)0x0;
    local_70 = 0;
    local_80 = 0;
    local_78 = (void *)0x0;
    local_90 = (void *)0x0;
    local_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    local_a8 = (void *)0x0;
    local_c0 = (void *)0x0;
    local_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_70,"ccui.AbstractCheckButton:init");
    uVar4 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_88,"ccui.AbstractCheckButton:init");
    uVar5 = luaval_to_std_string
                      (param_1,4,(basic_string *)&local_a0,"ccui.AbstractCheckButton:init");
    uVar6 = luaval_to_std_string
                      (param_1,5,(basic_string *)&local_b8,"ccui.AbstractCheckButton:init");
    uVar7 = luaval_to_std_string
                      (param_1,6,(basic_string *)&local_d0,"ccui.AbstractCheckButton:init");
    if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & 1) == 0) {
      tolua_error(param_1,&DAT_012d8ad1,0);
      goto LAB_0096fe68;
    }
    uVar3 = (**(code **)(*plVar9 + 0x688))
                      (plVar9,&local_70,&local_88,&local_a0,&local_b8,&local_d0,0);
    tolua_pushboolean(param_1,uVar3 & 1);
LAB_0096fe04:
    uVar10 = 1;
  }
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
                    /* try { // try from 0096fee0 to 00a6fef3 has its CatchHandler @ 0096ff3c */
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_88 & 1) != 0) {
                    /* try { // try from 0096fef4 to 00a6ff5b has its CatchHandler @ 0096fe00 */
    operator_delete(local_78);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
LAB_0096fea4:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}

