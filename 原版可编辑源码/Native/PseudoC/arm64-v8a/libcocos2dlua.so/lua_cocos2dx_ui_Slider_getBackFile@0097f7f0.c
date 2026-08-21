
/* lua_cocos2dx_ui_Slider_getBackFile(lua_State*) */

void lua_cocos2dx_ui_Slider_getBackFile(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  byte local_68;
  void *local_58;
  byte local_50;
  void *local_40;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0097f818 to 00a7f833 has its CatchHandler @ 0097f8d0 */
  tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 0) {
    cocos2d::ui::Slider::getBackFile();
                    /* try { // try from 0097f868 to 00a7f87b has its CatchHandler @ 0097f8d4 */
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    if ((local_68 & 1) != 0) {
                    /* try { // try from 0097f87c to 00a7f90f has its CatchHandler @ 0097f740 */
      operator_delete(local_58);
    }
    uVar3 = 1;
  }
  else {
                    /* try { // try from 0097f834 to 00a7f867 has its CatchHandler @ 0097f740 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Slider:getBackFile",iVar2 + -1,0);
    uVar3 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

