
undefined8 FUN_008e7e5c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  GTextField *this;
  ulong local_60 [2];
  void *local_50;
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (GTextField *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    local_60[1] = 0;
    local_50 = (void *)0x0;
    local_60[0] = 0;
    cocos2d::Value::Value(aVStack_48);
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)local_60,"fairygui.GTextField:setVar");
    uVar4 = luaval_to_ccvalue(param_1,3,aVStack_48,"fairygui.GTextField:setVar");
    if ((uVar3 & uVar4 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GTextField_setVar\'",0);
    }
    else {
      fairygui::GTextField::setVar(this,(basic_string *)local_60,aVStack_48);
    }
    cocos2d::Value::~Value(aVStack_48);
    if ((local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GTextField:setVar",iVar2 + -1,2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

