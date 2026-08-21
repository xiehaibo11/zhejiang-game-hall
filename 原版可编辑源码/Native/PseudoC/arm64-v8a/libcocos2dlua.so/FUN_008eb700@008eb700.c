
undefined8 FUN_008eb700(lua_State *param_1)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  Transition *this;
  Value *local_68;
  Value *local_60;
  undefined8 local_58;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Transition *)tolua_tousertype(param_1,1,0);
  iVar4 = lua_gettop(param_1);
  if (iVar4 + -1 == 2) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_58 = 0;
    local_50 = 0;
    local_68 = (Value *)0x0;
    local_60 = (Value *)0x0;
    uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"fairygui.Transition:setValue")
    ;
    uVar6 = luaval_to_ccvaluevector(param_1,3,(vector *)&local_68,"fairygui.Transition:setValue");
    if ((uVar5 & uVar6 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_Transition_setValue\'",0);
    }
    else {
      fairygui::Transition::setValue(this,(basic_string *)&local_50,(vector *)&local_68);
    }
    pVVar3 = local_68;
    pVVar2 = local_60;
    if (local_68 != (Value *)0x0) {
      while (pVVar2 != pVVar3) {
        cocos2d::Value::~Value(pVVar2 + -0x10);
        pVVar2 = pVVar2 + -0x10;
      }
      local_60 = pVVar3;
      operator_delete(local_68);
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.Transition:setValue",iVar4 + -1,2);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

