
void FUN_008dcb38(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  GObject *this;
  ulong uVar4;
  ulong uVar5;
  GController *pGVar6;
  undefined8 uVar7;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GObject *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"fairygui.GObject:checkGearController");
    if ((((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 2 < iVar2)) &&
        (uVar5 = luaval_is_usertype(param_1,3,"fairygui.GController",0), (uVar5 & 1) != 0)) &&
       (pGVar6 = (GController *)tolua_tousertype(param_1,3,0), (uVar4 & 1) != 0)) {
      uVar3 = fairygui::GObject::checkGearController(this,local_3c,pGVar6);
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar7 = 1;
      goto LAB_008dcc3c;
    }
                    /* try { // try from 008dcc34 to 009dcccf has its CatchHandler @ 008dc8fc */
    tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GObject_checkGearController\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:checkGearController",iVar2 + -1,2);
  }
  uVar7 = 0;
LAB_008dcc3c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

