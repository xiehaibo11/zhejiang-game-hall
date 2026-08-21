
undefined4 FUN_008e2d08(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  GList *this;
  void *pvVar3;
  ulong uVar4;
  undefined4 uVar5;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GList *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 2) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar4 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"fairygui.GList:getFromPool");
    if ((uVar4 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GList_getFromPool\'",0);
      uVar5 = 0;
    }
    else {
      pvVar3 = (void *)fairygui::GList::getFromPool(this,(basic_string *)&local_50);
      if (pvVar3 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,
                   "fairygui.GObject");
      }
      uVar5 = 1;
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else if (iVar2 + -1 == 0) {
    pvVar3 = (void *)fairygui::GList::getFromPool(this,(basic_string *)&cocos2d::STD_STRING_EMPTY);
    if (pvVar3 == (void *)0x0) {
      lua_pushnil(param_1);
      uVar5 = 1;
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,
                 "fairygui.GObject");
      uVar5 = 1;
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GList:getFromPool",iVar2 + -1,0);
    uVar5 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

