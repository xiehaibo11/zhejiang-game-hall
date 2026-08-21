
void FUN_008d81e8(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  UIEventDispatcher *this;
  ulong uVar4;
  undefined8 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (UIEventDispatcher *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"fairygui.UIEventDispatcher:isDispatchingEvent");
    if ((uVar4 & 1) != 0) {
      uVar3 = fairygui::UIEventDispatcher::isDispatchingEvent(this,local_3c);
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar5 = 1;
      goto LAB_008d82a4;
    }
                    /* try { // try from 008d8298 to 009d82bf has its CatchHandler @ 008d8404 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_fairygui_UIEventDispatcher_isDispatchingEvent\'"
                ,0);
  }
  else {
                    /* try { // try from 008d826c to 009d8273 has its CatchHandler @ 008d83c4 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.UIEventDispatcher:isDispatchingEvent",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_008d82a4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 008d82c4 to 009d82e7 has its CatchHandler @ 008d83e4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

