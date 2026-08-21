
undefined8 FUN_008d9a28(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GObject *this;
  ulong uVar3;
  ulong uVar4;
  double local_58;
  double dStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (GObject *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 008d9a6c to 009d9a77 has its CatchHandler @ 008d9ac4 */
  if (iVar2 + -1 == 2) {
                    /* try { // try from 008d9a78 to 009d9bdb has its CatchHandler @ 008d97b0 */
    uVar3 = luaval_to_number(param_1,2,&dStack_50,"fairygui.GObject:setScale");
    uVar4 = luaval_to_number(param_1,3,&local_58,"fairygui.GObject:setScale");
    if (((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) {
                    /* catch() { ... } // from try @ 008d98f4 with catch @ 008d9af0 */
                    /* catch() { ... } // from try @ 008d99c8 with catch @ 008d9af4 */
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GObject_setScale\'",0);
    }
    else {
                    /* catch() { ... } // from try @ 008d9988 with catch @ 008d9ac0 */
      fairygui::GObject::setScale(this,(float)dStack_50,(float)local_58);
                    /* catch() { ... } // from try @ 008d9a6c with catch @ 008d9ac4 */
    }
  }
  else {
                    /* catch() { ... } // from try @ 008d9900 with catch @ 008d9ad8 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:setScale",iVar2 + -1,2);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 008d99bc with catch @ 008d9b0c */
                    /* catch() { ... } // from try @ 008d98e0 with catch @ 008d9b10 */
                    /* catch() { ... } // from try @ 008d9860 with catch @ 008d9b24 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

