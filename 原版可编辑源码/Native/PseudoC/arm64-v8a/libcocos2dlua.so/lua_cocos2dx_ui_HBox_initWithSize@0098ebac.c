
/* lua_cocos2dx_ui_HBox_initWithSize(lua_State*) */

void lua_cocos2dx_ui_HBox_initWithSize(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  Size aSStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0098ebc8 to 00a8ec63 has its CatchHandler @ 0098ea90 */
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Size::Size(aSStack_40);
    uVar5 = luaval_to_size(param_1,2,aSStack_40,"ccui.HBox:initWithSize");
                    /* catch() { ... } // from try @ 0098eb7c with catch @ 0098ec14 */
    if ((uVar5 & 1) != 0) {
                    /* catch() { ... } // from try @ 0098eb94 with catch @ 0098ec18 */
      uVar3 = (**(code **)(*plVar4 + 0x6d0))(plVar4,aSStack_40);
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar6 = 1;
      goto LAB_0098ec78;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_HBox_initWithSize\'",0);
  }
  else {
                    /* catch() { ... } // from try @ 0098eb48 with catch @ 0098ec48 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.HBox:initWithSize",iVar2 + -1,1);
  }
  uVar6 = 0;
LAB_0098ec78:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

