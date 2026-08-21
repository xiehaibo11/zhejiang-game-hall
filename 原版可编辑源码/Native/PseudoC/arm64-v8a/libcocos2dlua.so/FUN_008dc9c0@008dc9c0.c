
undefined8 FUN_008dc9c0(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GObject *this;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  bool local_5c [4];
  double local_58;
  double dStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (GObject *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 4) {
    uVar3 = luaval_to_number(param_1,2,&dStack_50,"fairygui.GObject:setPivot");
                    /* try { // try from 008dca78 to 009dca93 has its CatchHandler @ 008dcc90 */
    uVar4 = luaval_to_number(param_1,3,&local_58,"fairygui.GObject:setPivot");
    uVar5 = luaval_to_boolean(param_1,4,local_5c,"fairygui.GObject:setPivot");
    if ((((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) || ((uVar5 & 1) == 0)) {
LAB_008dcad0:
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GObject_setPivot\'",0);
      goto LAB_008dcb08;
    }
  }
  else {
    if (iVar2 != 3) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "fairygui.GObject:setPivot",iVar2 + -1,2);
      goto LAB_008dcb08;
    }
    uVar3 = luaval_to_number(param_1,2,&dStack_50,"fairygui.GObject:setPivot");
    uVar4 = luaval_to_number(param_1,3,&local_58,"fairygui.GObject:setPivot");
    if (((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) goto LAB_008dcad0;
    local_5c[0] = false;
  }
                    /* try { // try from 008dcac8 to 009dcc33 has its CatchHandler @ 008dcc94 */
  fairygui::GObject::setPivot(this,(float)dStack_50,(float)local_58,local_5c[0]);
LAB_008dcb08:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

