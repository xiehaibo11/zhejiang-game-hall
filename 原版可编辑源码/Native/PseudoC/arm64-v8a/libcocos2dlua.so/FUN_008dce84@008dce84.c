
undefined8 FUN_008dce84(lua_State *param_1)

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
    uVar3 = luaval_to_number(param_1,2,&dStack_50,"fairygui.GObject:setSize");
    uVar4 = luaval_to_number(param_1,3,&local_58,"fairygui.GObject:setSize");
    uVar5 = luaval_to_boolean(param_1,4,local_5c,"fairygui.GObject:setSize");
    if ((((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) || ((uVar5 & 1) == 0)) {
LAB_008dcf94:
                    /* try { // try from 008dcfa0 to 009dcfa7 has its CatchHandler @ 008dcfec */
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GObject_setSize\'",0);
                    /* try { // try from 008dcfa8 to 009dd007 has its CatchHandler @ 008dce28 */
      goto LAB_008dcfcc;
    }
  }
  else {
    if (iVar2 != 3) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "fairygui.GObject:setSize",iVar2 + -1,2);
      goto LAB_008dcfcc;
    }
    uVar3 = luaval_to_number(param_1,2,&dStack_50,"fairygui.GObject:setSize");
    uVar4 = luaval_to_number(param_1,3,&local_58,"fairygui.GObject:setSize");
    if (((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) goto LAB_008dcf94;
    local_5c[0] = false;
  }
  fairygui::GObject::setSize(this,(float)dStack_50,(float)local_58,local_5c[0]);
LAB_008dcfcc:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 008dcfa0 with catch @ 008dcfec */
  return 0;
}

