
void FUN_008e2600(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GList *this;
  undefined8 uVar3;
  void *local_50;
  void *local_48;
  undefined8 uStack_40;
  long local_38;
  
                    /* try { // try from 008e2604 to 009e261f has its CatchHandler @ 008e2f3c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GList *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 008e2638 to 009e2653 has its CatchHandler @ 008e2f8c */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 0) {
    local_48 = (void *)0x0;
    uStack_40 = 0;
    local_50 = (void *)0x0;
                    /* try { // try from 008e2674 to 009e268b has its CatchHandler @ 008e2f58 */
    fairygui::GList::getSelection(this,(vector *)&local_50);
    ccvector_int_to_luaval(param_1,(vector *)&local_50);
    if (local_50 != (void *)0x0) {
                    /* try { // try from 008e2690 to 009e26a7 has its CatchHandler @ 008e2f38 */
      local_48 = local_50;
      operator_delete(local_50);
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GList:getSelection",iVar2 + -1,0);
    uVar3 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 008e26ac to 009e26cb has its CatchHandler @ 008e2f34 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

