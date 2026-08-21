
/* lua_cocos2dx_ui_RelativeLayoutParameter_setRelativeToWidgetName(lua_State*) */

bool lua_cocos2dx_ui_RelativeLayoutParameter_setRelativeToWidgetName(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  RelativeLayoutParameter *this;
  ulong uVar3;
  bool bVar4;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00965b90 to 00a65bdb has its CatchHandler @ 00965b90
                       catch() { ... } // from try @ 00965b90 with catch @ 00965b90
                       catch() { ... } // from try @ 00965be0 with catch @ 00965b90 */
  this = (RelativeLayoutParameter *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,
                       "ccui.RelativeLayoutParameter:setRelativeToWidgetName");
    bVar4 = (uVar3 & 1) == 0;
    if (bVar4) {
                    /* try { // try from 00965c28 to 00a6609f has its CatchHandler @ 00965c28
                       catch() { ... } // from try @ 00965c28 with catch @ 00965c28
                       catch() { ... } // from try @ 00966120 with catch @ 00965c28 */
      tolua_error(param_1,0x12d62ae,0);
    }
    else {
                    /* try { // try from 00965bdc to 00a65bdf has its CatchHandler @ 00965c14 */
                    /* try { // try from 00965be0 to 00a65c27 has its CatchHandler @ 00965b90 */
      cocos2d::ui::RelativeLayoutParameter::setRelativeToWidgetName(this,(basic_string *)&local_50);
      lua_settop(param_1,1);
    }
    bVar4 = !bVar4;
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
                    /* catch() { ... } // from try @ 00965bdc with catch @ 00965c14 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d6279,
               iVar2 + -1,1);
    bVar4 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

